#include "Arglib.h"
#include "resource.h"

static Arduboy arduboy;
static SimpleButtons buttons (arduboy);

static byte *video;

// Ship parameters
#define SHIP_DEC 40    // Decelleration
#define SHIP_ACC 20    // Accelleration
#define SHIP_SPD 2000  // Top speed

// Tunnel texture (this could be much better)
#define TEXTURE(A, B) (((A) ^ (B)) & 0x10) // CHECKERS

// Varipius helper macros
#define INPUT(X) (input & (X))
#define ISGN(X) ((X) == 0 ? 0 : (X) > 0 ? -1 : +1)

// Local variables
static int  vx, vy; // Ship velocity
static int  sx, sy; // Ship coordinates
static int  bx, by; // Bullet coordinates
static byte bl;     // Bullet lifetime
static byte twist;  // Tunnel twist multiplier
static word ix;     // Animation indexer
static int  hx, hy; // Autotracking tunnel centre coordinates

// Startup
void setup() {
  arduboy.start();
  video = arduboy.direct();
}

// Main demo/game code
void loop() {
  // Insert delay when compiling for emulator
#ifdef __EMULATING__
  delay(33);
#endif

  // Poll for user input
  byte input = buttons.poll();

  // Progress animation
  ix += 2;

  // Compute ship position (replace with user control?)
  //sx = sin((float)ix / 113) * 64;
  //sy = cos((float)ix / 67) * 32;
  //twist = sin((float)ix / 283) * 64; // Se below

  // User control
  bool engine = false;
  if(INPUT(DPAD_L)) engine = true, vx = max(-SHIP_SPD, vx - (SHIP_DEC + SHIP_ACC));
  if(INPUT(DPAD_R)) engine = true, vx = min(+SHIP_SPD, vx + (SHIP_DEC + SHIP_ACC));
  if(INPUT(DPAD_U)) engine = true, vy = max(-SHIP_SPD, vy - (SHIP_DEC + SHIP_ACC));
  if(INPUT(DPAD_D)) engine = true, vy = min(+SHIP_SPD, vy + (SHIP_DEC + SHIP_ACC));

  if(INPUT(BTN_B) && !bl) {
    bl = 64; bx = sx; by = sy;
    twist = 120;
  } else if(twist) twist = (twist * 250) >> 8;
  
  bx = (bx * 250) >> 8;
  by = (by * 250) >> 8;
  
  if(vx > 0) vx = max(0, vx - SHIP_DEC); else if(vx < 0) vx = min(0, vx + SHIP_DEC);
  if(vy > 0) vy = max(0, vy - SHIP_DEC); else if(vy < 0) vy = min(0, vy + SHIP_DEC);
  
  
  // Control ship position
  sx += vx; sy += vy;
  if(sx > +30000) { vx = -vx; sx = +60000 - sx; }
  if(sx < -30000) { vx = -vx; sx = -60000 - sx; }
  if(sy > +15000) { vy = -vy; sy = +30000 - sy; }
  if(sy < -15000) { vy = -vy; sy = -30000 - sy; }
  
  // Compute high(er) resolution, low passed ship position
  hx += ((sx >> 8) * 8 - hx) / 16;
  hy += (((sy >> 8) + 6) * 16 - hy) / 8;
  
  // Convert to tunnel center coordinates
  byte cx = (-hx / 16) + 64, cy = (-hy / 32) + 32;
  
  // Clear drawing area
  arduboy.clearDisplay();
  
  // Draw tunnel using LUTs (expanded to quads for performance)
  byte xterm = cx, dx, b8;
  for(dx = b8 = 0; dx < cx; dx++, xterm--) {
    byte yterm = cy, dy;
    byte *vptr = &video[dx];
    for(dy = 0; dy < cy; dy++, yterm--, b8 >>= 1) {
      word t = pgm_read_word(&lut[128 * yterm + xterm]); // Quadrant 1
      if((byte)t != 0) {                                 // Shadow mask
        byte tx = ((64 + (t >> 8)) + ix);                // Animate X
        word ty = ((t & 0xFF) + ix);                     // Animate Y
        if(TEXTURE(tx, ty)) b8 |= 0x80;
      }
      if(7 == (dy & 7)) *vptr = b8, vptr += 128;
    }
    for(; dy < 64; dy++, yterm++, b8 >>= 1) {
      word t = pgm_read_word(&lut[128 * yterm + xterm]); // Quadrant 2
      if((byte)t != 0) {                                 // Shadow mask
        byte tx = ((63 - (t >> 8)) + ix);                // Animate X
        word ty = ((t & 0xFF) + ix);                     // Animate Y
        if(TEXTURE(tx, ty)) b8 |= 0x80;
      }
      if(7 == (dy & 7)) *vptr = b8, vptr += 128;
    }
  }
  for(; dx < 128; dx++, xterm++) {
    byte yterm = cy, dy;
    byte *vptr = &video[dx];
    for(dy = b8 = 0; dy < cy; dy++, yterm--, b8 >>= 1) {
      word t = pgm_read_word(&lut[128 * yterm + xterm]); // Quadrant 3
      if((byte)t != 0) {                                 // Shadow mask
        byte tx = ((191 - (t >> 8)) + ix);               // Animate X
        word ty = ((t & 0xFF) + ix);                     // Animate Y
        if(TEXTURE(tx, ty)) b8 |= 0x80;
      }
      if(7 == (dy & 7)) *vptr = b8, vptr += 128;
    }
    for(; dy < 64; dy++, yterm++, b8 >>= 1) {
      word t = pgm_read_word(&lut[128 * yterm + xterm]); // Quadrant 4
      if((byte)t != 0) {                                 // Shadow mask
        byte tx = ((192 + (t >> 8))  + ix);              // Animate X
        word ty = ((t & 0xFF) + ix);                     // Animate Y
        if(TEXTURE(tx, ty)) b8 |= 0x80;
      }
      if(7 == (dy & 7)) *vptr = b8, vptr += 128;
    }
  }

  if(twist > 110) {
    byte *vptr = video;
    while(vptr < &video[1024]) *vptr++ = 0xFF;
  } else if(twist > 105 || (twist > 95 && twist < 100)) {
    byte *vptr = video;
    while(vptr < &video[1024]) *vptr++ |= ((intptr_t)vptr & 1) ? 0x55 : 0xAA;
  }
  
  // Coord-system conversion
  int wx, wy;
  
  // Draw bullets
  wx = (bx >> 8) + cx - 7;
  wy = (by >> 8) + cy;
  if(bl) {
    bl--;
    arduboy.drawSprite(wx, wy, bullet, 7, 8, (bl >> 3) + (ix & 8 ? 1 : 0), BLACK);
    if(!(ix & 4)) arduboy.drawSprite(wx, wy, bullet, 7, 8, (bl >> 3) + (ix & 8 ? 9 : 1), WHITE);
  }
  
  // Draw laser
  wx = (sx >> 8) + cx;
  wy = (sy >> 8) + cy + 2;
  if(INPUT(BTN_A) && (ix & 2)) {
    arduboy.drawLine(wx + (ix & 4 ? -4 : +4), wy, cx + (ix & 4 ? -1 : +1), cy, WHITE);
  }
  
  // Draw ship
  wx = (sx >> 8) + cx - 7;
  wy = (sy >> 8) + cy;
  arduboy.drawSprite(wx, wy, ship, 15, 16, 0, BLACK);
  arduboy.drawSprite(wx, wy, ship, 15, 16, 1, WHITE);
  if(engine && ix & 4) arduboy.drawSprite(wx, wy, ship, 15, 16, 2, WHITE); // Engine
  
  // Flip
  arduboy.display();

}

#include "Arglib.h"
#include "resource.h"

static Arduboy arduboy;
static SimpleButtons buttons(arduboy);

static byte *video;

// Ship parameters
#define SHIP_DEC   40 // Decelleration
#define SHIP_ACC   20 // Accelleration
#define SHIP_SPD 2000 // Top speed
#define PARTICLES  25 // Number of particles

// Tunnel texture (this needs work for sure)
//#define TEXTURE(A, B, I) ((((A)+(I/2)) ^ ((B)+(I))) & 0x10) // Checkerboard pattern

static struct {
  int px, py;  // Position
  int vx, vy;  // Velocity
  byte lt;     // Lifetime
} particles[PARTICLES];

static byte world[] = {
  0b10101010, 0b01010101, 0b10101010, 0b01010101, 0b10101010, 0b01010101, 0b10101010, 0b01010101,
  0b10101010, 0b01010101, 0b10101010, 0b11111111, 0b10101010, 0b01010101, 0b10101010, 0b01010101,
  0b10101010, 0b01010101, 0b10101010, 0b01010101, 0b10101010, 0b01010101, 0b10101010, 0b01010101,
  0b10101010, 0b11111111, 0b10101010, 0b01010101, 0b10101010, 0b01010101, 0b10101010, 0b01010101,
  0b10101010, 0b01010101, 0b11111111, 0b01010101, 0b10101010, 0b01010101, 0b00000000, 0b01010101,
  0b10101010, 0b01010101, 0b10101010, 0b11111111, 0b10101010, 0b01010101, 0b00000000, 0b11111111,
  0b10101010, 0b01010101, 0b10101010, 0b11110000, 0b10101010, 0b01010101, 0b10101010, 0b00000000,
  0b10101010, 0b01010101, 0b11111111, 0b01010101, 0b11111111, 0b01010101, 0b00000000, 0b01010101,
  0b10101010, 0b01010101, 0b10101010, 0b01010101, 0b11001100, 0b11001100, 0b00110011, 0b00110011,
  0b11001100, 0b11001100, 0b00110011, 0b00110011, 0b11110000, 0b11110000, 0b11110000, 0b11110000,
  0b00001111, 0b00001111, 0b00001111, 0b00001111, 0b11110000, 0b11110000, 0b11110000, 0b11110000,
  0b00001111, 0b00001111, 0b00001111, 0b00001111, 0b00000000, 0b00000000, 0b11111111, 0b00000000,
  0b11111111, 0b10001000, 0b01000100, 0b00100010, 0b00010001, 0b10001000, 0b01000100, 0b00100010,
  0b00010001, 0b11111111, 0b00010001, 0b00100010, 0b01000100, 0b10001000, 0b00010001, 0b00100010,
  0b01000100, 0b10001000, 0b11111111, 0b00000000, 0b11111111, 0b00000000, 0b00000000, 0b11101111,
  0b00111000, 0b11111101, 0b00000111, 0b10111111, 0b11100000, 0b11110111, 0b00011100, 0b00000000,
};

__attribute__((always_inline))
static bool inline texturizer(byte x, byte y, word i) {
  return world[((y + i * 2) >> 4) & (sizeof(world) - 1)] & (1 << (((x + i / 4) >> 4) & 7));
}

#define TEXTURE(A, B, I) texturizer(A, B, I)

// Various helper macros
#define INP(X) (input & (X))                        // Check for user input
#define ISGN(X)  ((X) == 0 ? 0 : (X) > 0 ? -1 : +1) // Inverse sign function
#define MSB(X)   ((X) >> 0x8)                       // Extract most significant byte
#define LSB(X)   ((byte)(X))                        // Extract least significant byte

// Local variables
static int  vx, vy; // Ship velocity
static int  sx, sy; // Ship coordinates
static int  bx, by; // Bullet coordinates
static byte bl;     // Bullet lifetime
static byte twist;  // Tunnel twist multiplier (TAKEN OUT)
static word ix;     // Animation indexer
static int  hx, hy; // Autotracking tunnel centre coordinates

// Startup
void setup() {
  arduboy.start();
  video = arduboy.direct();
}

static void spawnParticle(int sx, int sy) {
  for(byte n = 0; n < PARTICLES; n++) {
    if(particles[n].lt == 0) {
      particles[n].lt = rand();
      particles[n].px = sx;
      particles[n].py = sy;
      particles[n].vx = (int)((char)rand());
      particles[n].vy = (int)((char)rand()) - 128;
      break;
    }
  }
}

// Main demo/game code
void loop() {
  // Insert delay when compiling for emulator
#ifdef __EMULATING__
  delay(33);
#endif

  // Poll for user input
  byte input = buttons.poll();

  // Progress animations
  ix += 2;

  // User control
  bool engine = false;
  if(INP(DPAD_L)) engine = true, vx = max(-SHIP_SPD, vx - (SHIP_DEC + SHIP_ACC));
  if(INP(DPAD_R)) engine = true, vx = min(+SHIP_SPD, vx + (SHIP_DEC + SHIP_ACC));
  if(INP(DPAD_U)) engine = true, vy = max(-SHIP_SPD, vy - (SHIP_DEC + SHIP_ACC));
  if(INP(DPAD_D)) engine = true, vy = min(+SHIP_SPD, vy + (SHIP_DEC + SHIP_ACC));

  if(INP(BTN_B) && !bl) {
    bl = 64; bx = sx; by = sy;
    twist = 120;
  } else if(twist) twist = MSB(twist * 250);

  bx = MSB(bx * 250);
  by = MSB(by * 250);

  if(vx > 0) vx = max(0, vx - SHIP_DEC); else if(vx < 0) vx = min(0, vx + SHIP_DEC);
  if(vy > 0) vy = max(0, vy - SHIP_DEC); else if(vy < 0) vy = min(0, vy + SHIP_DEC);

  // Control ship position
  sx += vx; sy += vy;
  if(sx > +30000) { vx = -vx; sx = +60000 - sx; }
  if(sx < -30000) { vx = -vx; sx = -60000 - sx; }
  if(sy > +15000) { vy = -vy; sy = +30000 - sy; }
  if(sy < -15000) { vy = -vy; sy = -30000 - sy; }
  
  // Compute high(er) resolution, low passed ship position
  hx += ((MSB(sx)) * 8 - hx) / 16;
  hy += ((MSB(sy) + 6) * 16 - hy) / 8;
  
  // Convert to tunnel center coordinates
  byte cx = (-hx / 16) + 64, cy = (-hy / 32) + 32;
  
  // Clear drawing area
  arduboy.clearDisplay();
  
  // Draw tunnel using LUTs (expanded to quads for performance)
  byte dx, xterm = cx;
  for(dx = 0; dx < cx; dx++, xterm--) {
    byte  dy, b8 = 0, *vptr = &video[dx];
    const word *lptr = &lut[128 * cy + xterm];
    for(dy = 0; dy < cy; dy++, lptr -= 128, b8 >>= 1) {
      word t = pgm_read_word(lptr); // Quadrant 1
      if(LSB(t) != 0 && TEXTURE(64 + MSB(t), LSB(t), ix)) b8 |= 0x80;
      if(7 == (dy & 7)) *vptr = b8, vptr += 128;
    }
    for(; dy < 64; dy++, lptr += 128, b8 >>= 1) {
      word t = pgm_read_word(lptr); // Quadrant 2
      if(LSB(t) != 0 && TEXTURE(63 - MSB(t), LSB(t), ix)) b8 |= 0x80;
      if(7 == (dy & 7)) *vptr = b8, vptr += 128;
    }
  }
  for(; dx < 128; dx++, xterm++) {
    byte  dy, b8 = 0, *vptr = &video[dx];
    const word *lptr = &lut[128 * cy + xterm];
    for(dy = 0; dy < cy; dy++, lptr -= 128, b8 >>= 1) {
      word t = pgm_read_word(lptr); // Quadrant 3
      if(LSB(t) != 0 && TEXTURE(191 - MSB(t), LSB(t), ix)) b8 |= 0x80;
      if(7 == (dy & 7)) *vptr = b8, vptr += 128;
    }
    for(; dy < 64; dy++, lptr += 128, b8 >>= 1) {
      word t = pgm_read_word(lptr); // Quadrant 4
      if(LSB(t) != 0 && TEXTURE(192 + MSB(t), LSB(t), ix)) b8 |= 0x80;
      if(7 == (dy & 7)) *vptr = b8, vptr += 128;
    }
  }


  // Screen flashing
  if(twist > 110) {
    byte *vptr = video;
    while(vptr < &video[1024]) *vptr++ = 0xFF;
  } else if(twist > 105 || (twist > 95 && twist < 100)) {
    byte *vptr = video;
    while(vptr < &video[1024]) *vptr++ |= ((intptr_t)vptr & 1) ? 0x55 : 0xAA;
  }
  
  // Coord-system conversion
  int wx, wy;

  // Draw bomb
  if(bl) {
    wx = MSB(bx) + cx - 7;
    wy = MSB(by) + cy;
    arduboy.drawSprite(wx, wy, bullet, 7, 8, (bl >> 3) + (ix & 8 ? 1 : 0), BLACK);
    if(!(ix & 4)) arduboy.drawSprite(wx, wy, bullet, 7, 8, (bl >> 3) + (ix & 8 ? 9 : 1), WHITE);
    bl--;
  }
  
  // Draw lasers
  wx = MSB(sx) + cx;
  wy = MSB(sy) + cy + 2;
  if(INP(BTN_A) && (ix & 2)) {
    arduboy.drawLine(wx + (ix & 4 ? -5 : +3), wy, cx + (ix & 4 ? -1 : +1), cy, BLACK);
    arduboy.drawLine(wx + (ix & 4 ? -3 : +5), wy, cx + (ix & 4 ? -1 : +1), cy, BLACK);
    arduboy.drawLine(wx + (ix & 4 ? +4 : -4), wy, cx + (ix & 4 ? +1 : -1), cy, BLACK);
    arduboy.drawLine(wx + (ix & 4 ? -4 : +4), wy, cx + (ix & 4 ? -1 : +1), cy, WHITE);
  }
  
  // Draw ship
  wx = MSB(sx) + cx - 7;
  wy = MSB(sy) + cy;
  arduboy.drawSprite(wx, wy, ship, 15, 16, 0, BLACK);
  arduboy.drawSprite(wx, wy, ship, 15, 16, 1, WHITE);
  if(engine && ix & 4) arduboy.drawSprite(wx, wy, ship, 15, 16, 2, WHITE); // Engine
  
  // Spawn engine particles
  if(engine && ((ix & 15) == 0)) {
    spawnParticle(sx + (ix & 2 ? -512 : +512), sy + 2560);
  }

  // Animate and render particle system
  for(byte n = 0; n < PARTICLES; n++) {
    if(particles[n].lt != 0) {
      particles[n].vy += 20;
      particles[n].px += particles[n].vx;
      particles[n].py += particles[n].vy;
      wx = MSB(particles[n].px) + cx;
      wy = MSB(particles[n].py) + cy;
      if(wx < 0 || wx > 128 || wy < 0 || wy > 64) {
        particles[n].lt = 0;
      } else {
        byte c = rand();
        if(particles[n].lt + 64 > c) {
          arduboy.drawPixel(wx, wy, particles[n].lt > c ? WHITE : BLACK);
        }
        particles[n].lt--;
      }
      
    }
  }
  
  // Flip
  arduboy.display();
  
}

#ifndef LEVEL_H
#define LEVEL_H

#include "globals.h"
#include "bitmaps.h"

// constants /////////////////////////////////////////////////////////////////

#define LEVEL_WIDTH 512
#define LEVEL_HEIGHT 256

#define LEVEL_BLOCK_WIDTH 8
#define LEVEL_BLOCK_HEIGHT 4

#define BLOCK_WIDTH 8
#define BLOCK_HEIGHT 8

#define TILE_WIDTH 8
#define TILE_HEIGHT 8

#define SCORE_SMALL_FONT          0
#define SCORE_BIG_FONT            1

#define BLOCK_OFFSET 64
#define LEVEL_OFFSET 16

// method prototypes /////////////////////////////////////////////////////////


void drawLevel();
unsigned char getTileType(unsigned int x, unsigned int y);
void drawNumbers(byte NumbersX, byte NumbersY, byte fontType, boolean ScoreOrLevel);

void mapCollide(int& x, int& y, bool horizontal, char& vel, char w, char h);

// data //////////////////////////////////////////////////////////////////////

#define NUM_LEVELS 2

// format: <player x> <player y> <exit x> <exit y> <s1x> <s1y> <s2x> <s2y> <s3x> <s3y> <s4x> <s4y> <s5x> <s5y>
PROGMEM const unsigned char levelInfo[] = {
  2, 2,
  2, 2,
  8, 12,
  2, 9,
  0, 0,
  0, 0,
  0, 0,
  
  10, 1,
  10, 10,
  4, 6,
  10, 9,
  0, 0,
  0, 0,
  0, 0,
};




/// OLD level data down here
PROGMEM const unsigned char block00[] =
{
  3, 3, 3, 3, 3, 3, 3, 3,
  3, 2, 2, 2, 2, 2, 2, 2,
  3, 0, 0, 0, 0, 0, 0, 0,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
};

PROGMEM const unsigned char block01[] =
{
  3, 3, 3, 3, 3, 3, 3, 3,
  2, 2, 2, 2, 2, 2, 2, 2,
  0, 0, 0, 0, 0, 0, 0, 0,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
};

PROGMEM const unsigned char block02[] =
{
  3, 3, 3, 3, 3, 3, 3, 3,
  2, 2, 2, 2, 2, 2, 2, 3,
  0, 0, 0, 0, 0, 0, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
};

PROGMEM const unsigned char block03[] =
{
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
};

PROGMEM const unsigned char block04[] =
{
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
};

PROGMEM const unsigned char block05[] =
{
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
};

PROGMEM const unsigned char block06[] =
{
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 0, 0, 0, 0, 0,
  3, 3, 3, 3, 3, 3, 3, 3,
};

PROGMEM const unsigned char block07[] =
{
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  3, 3, 3, 3, 3, 3, 3, 3,
};

PROGMEM const unsigned char block08[] =
{
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 0, 0, 0, 0, 0, 0, 3,
  3, 3, 3, 3, 3, 3, 3, 3,
};

PROGMEM const unsigned char block09[] =
{
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 4, 6, 10, 14, 0, 1,
  1, 0, 5, 7, 11, 15, 1, 0,
  0, 1, 0, 8, 12, 1, 0, 1,
  1, 0, 1, 9, 13, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
};

PROGMEM const unsigned char block10[] =
{
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 16, 18, 0, 1, 16, 18, 0,
  0, 17, 19, 1, 0, 17, 19, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 16, 18, 0, 1, 16, 18, 0,
  0, 17, 19, 1, 0, 17, 19, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
};

PROGMEM const unsigned char block11[] =
{
  0, 1, 0, 1, 0, 1, 0, 1,
  3, 3, 1, 0, 1, 0, 1, 3,
  2, 3, 0, 1, 0, 1, 0, 2,
  1, 3, 1, 0, 1, 0, 3, 0,
  0, 2, 3, 1, 0, 3, 2, 1,
  1, 0, 2, 0, 1, 3, 1, 0,
  0, 1, 0, 1, 0, 3, 0, 1,
  1, 0, 1, 0, 1, 2, 1, 0,
};

PROGMEM const unsigned char block12[] =
{
  3, 1, 0, 1, 0, 1, 3, 1,
  3, 0, 1, 0, 1, 0, 2, 0,
  3, 1, 0, 1, 0, 3, 0, 1,
  3, 3, 1, 0, 1, 2, 1, 0,
  3, 3, 3, 1, 0, 1, 0, 1,
  3, 3, 3, 0, 1, 0, 1, 0,
  3, 2, 2, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
};


PROGMEM const unsigned char * const levels[2][32] = {
  {
    block00, block01, block01, block01, block01, block01, block01, block02,
    block03, block09, block10, block04, block04, block10, block10, block05,
    block03, block10, block10, block04, block04, block10, block09, block05,
    block06, block07, block07, block07, block07, block07, block07, block08
  }, {
    block00, block01, block01, block01, block01, block01, block01, block02,
    block03, block09, block04, block09, block04, block09, block04, block05,
    block00, block01, block01, block01, block01, block09, block04, block05,
    block06, block07, block07, block07, block07, block07, block07, block08
  }
};
/// OLD level data up here





/// NEW level data down here

/*
  PROGMEM const unsigned char blocks[] =
  {
  // BLOCK 0
  3, 3, 3, 3, 3, 3, 3, 3,
  3, 2, 2, 2, 2, 2, 2, 2,
  3, 0, 0, 0, 0, 0, 0, 0,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,

  // BLOCK 1
  3, 3, 3, 3, 3, 3, 3, 3,
  2, 2, 2, 2, 2, 2, 2, 2,
  0, 0, 0, 0, 0, 0, 0, 0,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,

  // BLOCK 2
  3, 3, 3, 3, 3, 3, 3, 3,
  2, 2, 2, 2, 2, 2, 2, 3,
  0, 0, 0, 0, 0, 0, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,

  // BLOCK 3
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,

  // BLOCK 4
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,

  // BLOCK 5
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,

  // BLOCK 6
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  3, 0, 0, 0, 0, 0, 0, 0,
  3, 3, 3, 3, 3, 3, 3, 3,

  // BLOCK 7
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  3, 3, 3, 3, 3, 3, 3, 3,

  // BLOCK 8
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 1, 0, 1, 0, 1, 0, 3,
  1, 0, 1, 0, 1, 0, 0, 3,
  0, 0, 0, 0, 0, 0, 0, 3,
  3, 3, 3, 3, 3, 3, 3, 3,

  // BLOCK 9
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 4, 6, 10, 14, 0, 1,
  1, 0, 5, 7, 11, 15, 1, 0,
  0, 1, 0, 8, 12, 1, 0, 1,
  1, 0, 1, 9, 13, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 0, 1, 0, 1, 0, 1, 0,

  // BLOCK A
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 16, 18, 0, 1, 16, 18, 0,
  0, 17, 19, 1, 0, 17, 19, 1,
  1, 0, 1, 0, 1, 0, 1, 0,
  0, 1, 0, 1, 0, 1, 0, 1,
  1, 16, 18, 0, 1, 16, 18, 0,
  0, 17, 19, 1, 0, 17, 19, 1,
  1, 0, 1, 0, 1, 0, 1, 0,

  // BLOCK B
  0, 1, 0, 1, 0, 1, 0, 1,
  3, 3, 1, 0, 1, 0, 1, 3,
  2, 3, 0, 1, 0, 1, 0, 2,
  1, 3, 1, 0, 1, 0, 3, 0,
  0, 2, 3, 1, 0, 3, 2, 1,
  1, 0, 2, 0, 1, 3, 1, 0,
  0, 1, 0, 1, 0, 3, 0, 1,
  1, 0, 1, 0, 1, 2, 1, 0,

  // BLOCK C
  3, 1, 0, 1, 0, 1, 3, 1,
  3, 0, 1, 0, 1, 0, 2, 0,
  3, 1, 0, 1, 0, 3, 0, 1,
  3, 3, 1, 0, 1, 2, 1, 0,
  3, 3, 3, 1, 0, 1, 0, 1,
  3, 3, 3, 0, 1, 0, 1, 0,
  3, 2, 2, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  };

  // BLOCK D
  3, 1, 0, 1, 0, 1, 3, 1,
  3, 0, 1, 0, 1, 0, 2, 0,
  3, 1, 0, 1, 0, 3, 0, 1,
  3, 3, 1, 0, 1, 2, 1, 0,
  3, 3, 3, 1, 0, 1, 0, 1,
  3, 3, 3, 0, 1, 0, 1, 0,
  3, 2, 2, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  };

  // BLOCK E
  3, 1, 0, 1, 0, 1, 3, 1,
  3, 0, 1, 0, 1, 0, 2, 0,
  3, 1, 0, 1, 0, 3, 0, 1,
  3, 3, 1, 0, 1, 2, 1, 0,
  3, 3, 3, 1, 0, 1, 0, 1,
  3, 3, 3, 0, 1, 0, 1, 0,
  3, 2, 2, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  };

  // BLOCK F
  3, 1, 0, 1, 0, 1, 3, 1,
  3, 0, 1, 0, 1, 0, 2, 0,
  3, 1, 0, 1, 0, 3, 0, 1,
  3, 3, 1, 0, 1, 2, 1, 0,
  3, 3, 3, 1, 0, 1, 0, 1,
  3, 3, 3, 0, 1, 0, 1, 0,
  3, 2, 2, 1, 0, 1, 0, 1,
  3, 0, 1, 0, 1, 0, 1, 0,
  };

  PROGMEM const unsigned char levels[] = {
  0x01, 0x11, 0x11, 0x12, 0x39, 0xA4, 0x4A, 0xA5,
  0x3A, 0xA4, 0x4A, 0x95, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x39, 0x49, 0x49, 0x45,
  0x01, 0x11, 0x19, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x3b, 0x44, 0x44, 0xb5,
  0xc4, 0x4b, 0xb4, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78,

  0x01, 0x11, 0x11, 0x12, 0x34, 0x44, 0x44, 0x45,
  0x34, 0x44, 0x44, 0x45, 0x67, 0x77, 0x77, 0x78
  };
*/
/// NEW level data up here

PROGMEM const unsigned char tileset[] = {
  // width, height
  8, 8,
  // tile 0: empty
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  // tile 1: grass
  0x00, 0x00, 0x30, 0x00, 0x20, 0x10, 0x00, 0x00,
  // tile 2: wall side
  0x00, 0xCF, 0x30, 0x03, 0x04, 0x18, 0x64, 0x83,
  // tile 3: wall top
  0x6D, 0xFB, 0xBF, 0x57, 0xED, 0xBD, 0xDB, 0xEE,
  // tile 4: tree start
  0x80, 0x40, 0x60, 0x80, 0x64, 0x0C, 0xF0, 0x40,
  // tile 5
  0x09, 0x2A, 0x12, 0x24, 0x27, 0x48, 0xB3, 0xCC,
  // tile 6
  0x3C, 0x08, 0xC4, 0xB6, 0x24, 0x92, 0x48, 0x17,
  // tile 7
  0x8E, 0x55, 0x68, 0x92, 0x64, 0x0C, 0xF1, 0x42,
  // tile 8
  0x09, 0x2A, 0x12, 0x24, 0x27, 0x48, 0xB3, 0xCC,
  // tile 9
  0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x3F, 0xFF,
  // tile 10
  0xB0, 0x53, 0x6C, 0x82, 0x64, 0x0C, 0xF1, 0x42,
  // tile 11
  0x3F, 0x08, 0xC4, 0xB6, 0x24, 0x92, 0x48, 0x03,
  // tile 12
  0x7E, 0xE1, 0x5C, 0x42, 0x39, 0x25, 0x51, 0x0A,
  // tile 13
  0x3D, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  // tile 14
  0x3E, 0x08, 0xC4, 0xB4, 0x20, 0x90, 0x00, 0x00,
  // tile 15: tree end
  0x5E, 0xE1, 0x5C, 0x42, 0x39, 0x25, 0x51, 0x0A,
  // tile 16: RIP start
  0x00, 0xF8, 0x04, 0xE6, 0xA2, 0x62, 0x02, 0xC2,
  // tile 17
  0x20, 0x07, 0x54, 0x09, 0xA8, 0x09, 0x50, 0x13,
  // tile 18
  0x06, 0x86, 0x86, 0x8C, 0x1C, 0xF8, 0xF0, 0x00,
  // tile 19: RIP end
  0x50, 0x17, 0xA2, 0x23, 0xA0, 0x7F, 0x7F, 0x00,
};


#endif

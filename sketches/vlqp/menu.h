#ifndef MENU_BITMAPS_H
#define MENU_BITMAPS_H

#include "game.h"
#include "globals.h"

// globals ///////////////////////////////////////////////////////////////////

extern byte menuSelection;
extern byte level;
extern byte displayLevel;


// method prototypes /////////////////////////////////////////////////////////

void stateMenuIntro();
void stateMenuMain();
void stateMenuHelp();
void stateMenuPlay();
void stateMenuInfo();
void stateMenuSoundfx();


// data //////////////////////////////////////////////////////////////////////

const unsigned char PROGMEM TEAMarg[] = //128,48
{
  //         ########                                                                                       ########
  //         ###########                                                                                   ##      ##
  //         ####    ##################                                                                   ##  #### ###
  //         #### ##    ################ ####################           #############         ######     ##  ##  # ####
  //         #### #####                #######################       ##################      ########   ##  ###  # #####
  //         #### ##  ######  ######## ##                   ###     ####            ####     ##     ## ##  ####### #  ###
  // ####### ####  #  ####### #####  #  # #################  ##    ###   ##########   ###   ##  ###  ###  ###  ### #   ### ##########
  //         ##### ##########  ####  ## #  ################# ##   ###  ##############   ##  ## #####  #  ###    ## ##  ###
  //         ##### ########### ######## #   ################  #   ##  #################  ####  ######   ####    ## ########
  // ##### # #####             ########     ################# #  ##  #######    ######## #### ######## ######  ### ########  # # ####
  // #  #    ###### ####################    ################# #  ## #######      #######  ##  #################### ########      #  #
  // #  # #  ###### ####################     #######          # ##  ######       ####  ## ## #################  ## ######## # #  #  #
  // ####    ######  #  ################     ##############   # ## #######       ####  ## #  #################  ## ########      ####
  // ####  # ####### #  #################  # ##############   ###  ######       ######### # ###################### ########  # # ####
  // ####    ####### ####################  # ###############  ### #######       ########    #####################  ########      ####
  // #### #   ######        #########      # ###############  ##  ######       #########   ###################### ######### # #  ####
  // ####     #####          ########     ##  ############## ### ######################    ###################### #########     #####
  // ##### #  #####          #########    ### ########        #  ######################   ####################### ########   #  #####
  // #####     ###            ########    ### ###############   ######################    ####################### ########      #####
  // ###### #  ###         #  #########  #### ################  #######      #########   ######## ############### ########  # # #####
  // ######    ##          #   ########  ####  ################  ######      ########    #######  ############### ########      #####
  // ####### #  #         ###  ######### ##### ################# #####       ########   ########   ###### ####### ######## # # ######
  // #######    #         ###   ########  #### #  ############## #####      ########    #######    #####  ####### ########     ######
  // ######## # ######## #####  ##  ##### #### #  ########                  ###  ###    #######     ###   ######  ########  #  ######
  // ########          # #####   #  ##### #### #####             #         ####  ##                 ##    ###  # #########     ######
  // #  ###### # # # # ########  #####    ####                ## #         ########           ##          ###  # ######### # # ###  #
  // #  ######          #######           ####                ## #     ###                     #            #### #########     ###  #
  // ########## # # # # #########         # ##                   #     ###             ##      ##             ## #########  # #######
  //                    ########         ## ##                   #    ####             ##       #                ########
  //         ###         #######         #  ##              ######    ####            ####      ##  #    #       ########
  // ######### ######    ######         ##   #       #####################            # ##       #  ##  ####      #######   #########
  //       ##   ##       ######         #    ################            ############## ######################     ######
  //      ##     ##   ## #####         ## ## #########                   ############    #######################    #####
  //     ## ##    ##  ##  ####         #  ##                                                  ##     #############   #### ##
  //     #  ##     #      ###         ##          ########    ##########      #########       ##     ##### #########  ### ##
  //     ##       ##      ###     #####          ##########   ###########    ###########           ######      ##########
  //      ##   # ##       #############         ############  ############   ###########          ####            #######   ###
  //       ##   ##   ###  ########  ####        ############  #####  #####  #####   ####       ## ####    ###               # #
  //        ## ##    # #            ####        #####   ####  #####   ####  ####               ##  ##     # #               ###
  //         ###     ###             ##         #####   ####  #####   ###   ####   ######                 ###
  //                                            ############  ##########    #####  ######
  //                                            ###########      ########      ########
  //                                            ########### #### ## ##### #### ######## ####
  //                                            #####   ### #  # ##  #### #  # ######## #  #
  //                                            #####   ### #### ##   ### #### ######## ####
  //
  //
  //
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x3B, 0xFB, 0x93, 0x96, 0xF6, 0xE6, 0xEC, 0xEC, 0xEC, 0xEC, 0xCC, 0x0C, 0x6C, 0xEC, 0xEC, 0xEC, 0xEC, 0x2C, 0x2C, 0xEC, 0x8C, 0x38, 0xF0, 0x18, 0x58, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0x98, 0x38, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x30, 0xB0, 0x98, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0x98, 0xB8, 0x30, 0x70, 0x60, 0xC0, 0x80, 0x00, 0x00, 0xC0, 0xF0, 0x38, 0x98, 0xD8, 0xD8, 0xD8, 0x98, 0x30, 0x60, 0xC0, 0x60, 0x30, 0x98, 0xCC, 0xE6, 0x73, 0x39, 0x3D, 0x65, 0xE5, 0xFD, 0x01, 0xFF, 0x9E, 0x1C, 0x38, 0xF0, 0xE0, 0xC0, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0xFE, 0xF2, 0xF2, 0xFE, 0x02, 0x88, 0x22, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xE1, 0x0D, 0x7D, 0x4D, 0x4D, 0x7D, 0x7D, 0x7D, 0x7D, 0xFD, 0xFD, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7C, 0x61, 0x00, 0x00, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xC7, 0x06, 0x00, 0xFF, 0xE0, 0x78, 0x1E, 0xC7, 0xF1, 0xFC, 0xFE, 0xFF, 0xFF, 0x7F, 0x1F, 0x07, 0x03, 0x01, 0x01, 0x01, 0x81, 0xE3, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xFE, 0x38, 0x03, 0x3F, 0x8F, 0xE3, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xE4, 0xE6, 0xFF, 0x3F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x88, 0x22, 0x88, 0x22, 0x00, 0xFE, 0xF2, 0xF2, 0xFE,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0xE2, 0x88, 0x20, 0x83, 0x1F, 0xFF, 0x8F, 0x83, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0xE0, 0xF8, 0xE0, 0x83, 0x0F, 0x3F, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFE, 0xF8, 0xE0, 0x80, 0x38, 0xFF, 0xFF, 0xFE, 0xE0, 0x0F, 0xFF, 0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFD, 0xFD, 0xFD, 0x7D, 0x7D, 0x7C, 0x79, 0x73, 0x61, 0x0C, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x1F, 0x07, 0x07, 0x07, 0x07, 0x07, 0xC7, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0x03, 0x00, 0xE0, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x0F, 0x07, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x20, 0x88, 0x22, 0x08, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x4F, 0x49, 0x49, 0x4F, 0x4F, 0x4F, 0xCF, 0xCF, 0x6E, 0x28, 0x62, 0xC8, 0xC2, 0x48, 0x42, 0x48, 0x02, 0x08, 0x03, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x38, 0x08, 0x03, 0x02, 0x02, 0x03, 0x03, 0x01, 0x01, 0xC1, 0x70, 0x1F, 0x07, 0x3F, 0xFF, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0x60, 0x66, 0x66, 0x60, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x70, 0x7C, 0x7C, 0xFC, 0x80, 0x83, 0x83, 0x83, 0x83, 0x82, 0x82, 0x83, 0x83, 0x80, 0x80, 0x80, 0xE0, 0x38, 0xF8, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x82, 0x8E, 0xB8, 0xE0, 0x80, 0x80, 0xE1, 0xC1, 0x80, 0x80, 0xC0, 0xE0, 0xC3, 0xC3, 0x87, 0x84, 0x0C, 0x0F, 0x00, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x02, 0x48, 0x42, 0x48, 0x4F, 0x4F, 0x4F, 0x49, 0x49, 0x4F,
  0x00, 0x00, 0x00, 0x00, 0x0E, 0x1B, 0x31, 0x66, 0xC6, 0x80, 0xD0, 0x60, 0x31, 0x1B, 0x0E, 0x00, 0xE0, 0xA3, 0xE3, 0x00, 0x01, 0x3F, 0x3F, 0x3F, 0x33, 0x30, 0x30, 0x30, 0x30, 0x18, 0x18, 0x78, 0xF8, 0xFC, 0x67, 0x01, 0x00, 0x03, 0x03, 0x00, 0x01, 0x01, 0x01, 0xF1, 0xF9, 0xFD, 0xFD, 0xFD, 0x3D, 0x3C, 0x3C, 0xFC, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x1C, 0x1C, 0x3C, 0xFC, 0xFC, 0xF8, 0x71, 0x01, 0x01, 0xE1, 0xF9, 0xFD, 0xFD, 0x3D, 0x1D, 0x1D, 0x9D, 0xBD, 0xBC, 0xBC, 0xB8, 0x80, 0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x67, 0x61, 0x01, 0x31, 0x79, 0x79, 0x3F, 0x0F, 0x0F, 0x0F, 0x07, 0xE3, 0xA7, 0xE7, 0x07, 0x07, 0x0F, 0x0E, 0x0E, 0x1C, 0x1C, 0x19, 0x1B, 0x1F, 0x1F, 0x1F, 0x00, 0x06, 0x06, 0x70, 0x50, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x07, 0x07, 0x07, 0x1F, 0x1F, 0x1F, 0x01, 0x1C, 0x14, 0x15, 0x1D, 0x01, 0x1F, 0x1F, 0x03, 0x07, 0x0F, 0x1F, 0x1F, 0x1E, 0x00, 0x1C, 0x14, 0x15, 0x1D, 0x01, 0x1F, 0x1F, 0x1E, 0x1E, 0x1F, 0x1F, 0x1F, 0x1F, 0x01, 0x1D, 0x14, 0x14, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

PROGMEM const unsigned char titleScreen00[] = {
// width, height 62, 64,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x9F, 0xC7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x6F, 0xE7, 0x63, 0x61, 0x34, 0x86, 0xF3, 0xFB, 0x79, 0x1D, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x3F, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x80, 0xC7, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xC3, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x01, 0xC0, 0x7C, 0x07, 
0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x1F, 0x03, 0xF8, 0xFE, 0xF7, 0x73, 0x59, 0x19, 0x8B, 0xC2, 0xC6, 0xFC, 0xF0, 0x3A, 0x8B, 0xE1, 0xF8, 0xFC, 0xFF, 0xFF, 0x3F, 0x8F, 0xE3, 0xF0, 0xFC, 0xF9, 0xFB, 0xF3, 0xE7, 0xE3, 0x70, 0x70, 0x73, 0x63, 0x60, 0x4F, 0xCF, 0x8F, 0x8F, 0x2F, 0xEF, 0xE7, 0x03, 0x98, 0xFE, 0x7F, 0x3F, 0x9F, 0xCF, 0x63, 0x30, 0x18, 0x0E, 0x03, 0x00, 0x00, 
0x00, 0x81, 0x87, 0x91, 0xFC, 0xFE, 0xF0, 0xF8, 0xF9, 0xF3, 0xE7, 0xEE, 0xCC, 0xDC, 0xD9, 0x0F, 0x87, 0xE3, 0xF8, 0x7E, 0x3F, 0x9F, 0xCF, 0xE7, 0xF3, 0xF8, 0xFE, 0xFF, 0xCF, 0x8F, 0x0F, 0x1F, 0x1F, 0x3D, 0x3C, 0x38, 0x78, 0x78, 0x7C, 0xEF, 0xE6, 0xF0, 0xFC, 0xFF, 0xFF, 0xFF, 0x83, 0x38, 0xEC, 0xC4, 0xC6, 0xC2, 0xC3, 0xC1, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 
0xF8, 0xE3, 0x8F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x0F, 0x87, 0xC1, 0xCC, 0x06, 0x73, 0xF9, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x9E, 0xCC, 0xE1, 0xF3, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBE, 
0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0xF3, 0xE7, 0xCF, 0x9E, 0x3E, 0x7F, 0x3F, 0x1F, 0x0F, 0x0F, 0x07, 0x04, 0x01, 0x33, 0xE7, 0xCF, 0x9F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7F, 0x77, 0x37, 0x83, 0xE3, 0xF3, 0xF3, 0xF9, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x4C, 0x1D, 0x1D, 0x0D, 0x05, 0x01, 0x01, 0x80, 
0xF9, 0xF3, 0xF7, 0xEF, 0xCF, 0xDF, 0xBF, 0xBF, 0x3F, 0x7F, 0x7E, 0xFC, 0xFC, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xFC, 0xFF, 0x7F, 0x1F, 0xC7, 0xD0, 0xDE, 0xDC, 0x9D, 0xB9, 0xBB, 0x3B, 0x7B, 0x79, 0xFD, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x81, 0xC0, 0xC0, 0x60, 0x30, 0x38, 0x6C, 0xC6, 0x83, 0x81, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFC, 0xFD, 0xF9, 0xF3, 0xF7, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x80, 0xC0, 0x70, 0x38, 0x18, 0x0C, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03
};

PROGMEM const unsigned char titleScreen01[] = {
// width, height 37, 32,
0x3E, 0x3C, 0x1C, 0x0C, 0x06, 0x83, 0xC1, 0xE1, 0xF1, 0xF1, 0xF1, 0xF1, 0xF1, 0xE1, 0xC3, 0x86, 0x0E, 0x1E, 0x3C, 0x70, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xFE, 0x83, 0x00, 0x1E, 0x3F, 0x7F, 0xFF, 0xFF, 0xC1, 0x8C, 0x06, 0x06, 0x4E, 0x7C, 0x39, 0x83, 0xFF, 0x7E, 0x7C, 0x68, 0xC0, 0x81, 0x03, 0x47, 0xCF, 0x9C, 0x3C, 0x78, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xC0, 0x61, 0x23, 0x06, 0x0C, 0x18, 0x30, 0x61, 0x23, 0x67, 0xEF, 0x4F, 0x0F, 0x1F, 0x3F, 0x71, 0x20, 0x08, 0x1C, 0x3E, 0xFC, 0xF9, 0xF0, 0xF0, 0xFC, 0xFE, 0xFC, 0xF8, 0xF0, 0xE1, 0x43, 0x86, 0x0C, 0x38, 0xF0, 0x00, 0x00, 
0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x02, 0x06, 0x0C, 0x18, 0x03, 0x06, 0x3C, 0x78, 0xF2, 0xE7, 0xCF, 0x9F, 0xBF, 0xBF, 0x9F, 0xCF, 0x67, 0x33, 0x19, 0x0C, 0x06, 0x83, 0xE0, 0x38, 0x7F, 0xC0, 0x80
};

PROGMEM const unsigned char titleScreen02[] = {
// width, height 62, 32,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x4C, 0x04, 0x34, 0x94, 0xC4, 0xE4, 0xE4, 0xE4, 0x64, 0x24, 0xAC, 0x28, 0x28, 0x2C, 0x24, 0x24, 0x64, 0xE4, 0xE4, 0xEC, 0xEC, 0xE4, 0x24, 0x2C, 0xE8, 0xE8, 0xE8, 0x28, 0x28, 0xE8, 0x28, 0x28, 0xEC, 0x24, 0x24, 0x24, 0x24, 0x2C, 0x7C, 0xEC, 0x24, 0x24, 0xE4, 0xE4, 0x24, 0x24, 0xE4, 0x64, 0x2C, 0x2C, 0xE4, 0x24, 0x64, 0xEC, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x47, 0x4C, 0xD0, 0x80, 0x3F, 0xFF, 0xFF, 0x87, 0xB3, 0x38, 0xB9, 0xD9, 0x41, 0x00, 0x00, 0x18, 0x38, 0x38, 0xB3, 0x87, 0xFF, 0xFF, 0xFF, 0xF8, 0xE0, 0x83, 0x8F, 0x83, 0xE0, 0xF8, 0xFF, 0x80, 0x80, 0xFF, 0x81, 0x81, 0xE3, 0xC1, 0x88, 0x9C, 0xFF, 0xC0, 0x80, 0x9F, 0x9F, 0x80, 0xC0, 0xFF, 0xCC, 0x88, 0xF8, 0x83, 0x82, 0xC6, 0xFF, 
0xF0, 0xF8, 0xC0, 0x9E, 0xBF, 0xBF, 0x3C, 0x38, 0x98, 0xCC, 0x07, 0x30, 0x71, 0xC0, 0xC0, 0x43, 0x72, 0x60, 0x4C, 0x5E, 0x52, 0x5E, 0x4C, 0x60, 0x72, 0x43, 0x40, 0x40, 0xF1, 0xFF, 0x80, 0x80, 0x9F, 0x9F, 0xFF, 0xC1, 0xC0, 0x8E, 0x80, 0xA0, 0xFF, 0x80, 0x80, 0xF6, 0xF0, 0xF0, 0xFF, 0xF3, 0xF3, 0xFE, 0xFE, 0x8E, 0x82, 0xF0, 0xF8, 0xFF, 0xB0, 0xB6, 0xB6, 0x80, 0x80, 0xFF, 
0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x03, 0x06, 0x04, 0x04, 0x04, 0x04, 0x00, 0x3E, 0x7F, 0x41, 0x1C, 0x3E, 0x7F, 0x7F, 0x7F, 0x7F, 0x63, 0x41, 0x63, 0x3E, 0x00, 0x04, 0x0C, 0x08, 0x08, 0x0C, 0x0C, 0x08, 0x08, 0x18, 0x10, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08
};

PROGMEM const unsigned char titleScreen03[] = {
// width, height 6, 32,
0xC4, 0x94, 0x34, 0x04, 0x4C, 0xF8, 
0xFF, 0xFF, 0x00, 0xF8, 0x0C, 0x07, 
0xFF, 0x7F, 0x00, 0x03, 0xCE, 0xF8, 
0x08, 0x0A, 0x0B, 0x08, 0x0C, 0x07
};

PROGMEM const unsigned char menuText[] = {
// width, height
29, 8,
// Help
0xFF, 0x81, 0xBD, 0x89, 0x89, 0xBD, 0x81, 0xBD, 0xAD, 0xAD, 0xA5, 0x81, 0xBD, 0xA1, 0xAF, 0x81, 0xBD, 0x95, 0xD5, 0xDD, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
// Play
0xFF, 0x81, 0xBD, 0x95, 0xD5, 0xDD, 0x81, 0xBD, 0xA1, 0xAF, 0x81, 0xBD, 0x95, 0x95, 0xBD, 0x81, 0xDD, 0x91, 0xB1, 0x9D, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
// Info
0xFF, 0x81, 0xA5, 0xBD, 0xA5, 0x81, 0xBD, 0x89, 0x91, 0xBD, 0x81, 0xBD, 0x95, 0x95, 0xC5, 0x81, 0xBD, 0xA5, 0xA5, 0xBD, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
// Conf
0xFF, 0x81, 0xBD, 0xA5, 0xA5, 0xA5, 0x81, 0xBD, 0xA5, 0xA5, 0xBD, 0x81, 0xBD, 0x89, 0x91, 0xBD, 0x81, 0xBD, 0x95, 0xD5, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
// SFX
0xFF, 0x81, 0xAD, 0xAD, 0xAD, 0xB5, 0x81, 0xBD, 0x95, 0x95, 0x81, 0xA5, 0x99, 0x89, 0xA5, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
// off
0xFF, 0x81, 0xBD, 0xA5, 0xA5, 0xBD, 0x81, 0xBD, 0x95, 0x95, 0x81, 0xBD, 0x95, 0x95, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
// on
0xFF, 0x81, 0xBD, 0xA5, 0xA5, 0xBD, 0x81, 0xBD, 0x89, 0x91, 0xBD, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
};

PROGMEM const unsigned char smallMask[] = {
// width, height 8, 8,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};


PROGMEM const unsigned char qrcode[] = {
// width, height 64, 64,
0xFF, 0xFF, 0xFF, 0x07, 0x07, 0xE7, 0xE7, 0x67, 0x67, 0x67, 0x67, 0x67, 0x67, 0xE7, 0xE7, 0x07, 0x07, 0xFF, 0xFF, 0x9F, 0x9F, 0xFF, 0xFF, 0x87, 0x87, 0xFF, 0xFF, 0x67, 0x67, 0xE7, 0xE7, 0xFF, 0xFF, 0x9F, 0x9F, 0x67, 0x67, 0x9F, 0x9F, 0xE7, 0xE7, 0x67, 0x67, 0xE7, 0xE7, 0xFF, 0xFF, 0x07, 0x07, 0xE7, 0xE7, 0x67, 0x67, 0x67, 0x67, 0x67, 0x67, 0xE7, 0xE7, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0x19, 0x19, 0x81, 0x81, 0x79, 0x79, 0x9F, 0x9F, 0x18, 0x18, 0xF9, 0xF9, 0x01, 0x01, 0x9F, 0x9F, 0x7E, 0x7E, 0x81, 0x81, 0x61, 0x61, 0xE6, 0xE6, 0x01, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xE6, 0xE6, 0xE6, 0xE6, 0xE6, 0xE6, 0x06, 0x06, 0x86, 0x86, 0x7E, 0x7E, 0x66, 0x66, 0x87, 0x87, 0x86, 0x86, 0xE1, 0xE1, 0x18, 0x18, 0xE1, 0xE1, 0x9E, 0x9E, 0x87, 0x87, 0x66, 0x66, 0x79, 0x79, 0x18, 0x18, 0x67, 0x67, 0xFE, 0xFE, 0x81, 0x81, 0x98, 0x98, 0x87, 0x87, 0x9E, 0x9E, 0x86, 0x86, 0x1E, 0x1E, 0xE6, 0xE6, 0xFE, 0xFE, 0xE6, 0xE6, 0x9E, 0x9E, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x19, 0x19, 0x01, 0x01, 0x80, 0x80, 0xFF, 0xFF, 0x98, 0x98, 0x66, 0x66, 0xE7, 0xE7, 0xE7, 0xE7, 0x67, 0x67, 0x66, 0x66, 0x7F, 0x7F, 0x61, 0x61, 0x87, 0x87, 0x60, 0x60, 0x60, 0x60, 0x1E, 0x1E, 0x86, 0x86, 0x99, 0x99, 0x81, 0x81, 0x79, 0x79, 0x1F, 0x1F, 0x9F, 0x9F, 0x81, 0x81, 0x98, 0x98, 0xE7, 0xE7, 0x07, 0x07, 0xF9, 0xF9, 0x9F, 0x9F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x19, 0x19, 0x80, 0x80, 0x86, 0x86, 0x19, 0x19, 0xE1, 0xE1, 0xE7, 0xE7, 0x66, 0x66, 0x07, 0x07, 0xF9, 0xF9, 0x18, 0x18, 0x1E, 0x1E, 0xE0, 0xE0, 0x9E, 0x9E, 0x1F, 0x1F, 0x7E, 0x7E, 0x60, 0x60, 0x80, 0x80, 0xE7, 0xE7, 0x79, 0x79, 0x99, 0x99, 0x98, 0x98, 0x9E, 0x9E, 0x1F, 0x1F, 0x79, 0x79, 0x9F, 0x9F, 0x1F, 0x1F, 0x06, 0x06, 0xF9, 0xF9, 0x9F, 0x9F, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x60, 0x60, 0x7F, 0x7F, 0x61, 0x61, 0x66, 0x66, 0x61, 0x61, 0x67, 0x67, 0x66, 0x66, 0xE0, 0xE0, 0x01, 0x01, 0x1E, 0x1E, 0x86, 0x86, 0x7F, 0x7F, 0x61, 0x61, 0xF8, 0xF8, 0xE6, 0xE6, 0x7E, 0x7E, 0x19, 0x19, 0xE7, 0xE7, 0x7E, 0x7E, 0x19, 0x19, 0x07, 0x07, 0xE7, 0xE7, 0x66, 0x66, 0xE0, 0xE0, 0x01, 0x01, 0x1E, 0x1E, 0x06, 0x06, 0x81, 0x81, 0x87, 0x87, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0x06, 0x06, 0x86, 0x86, 0x1F, 0x1F, 0xE0, 0xE0, 0x9E, 0x9E, 0x1F, 0x1F, 0x19, 0x19, 0x60, 0x60, 0x1E, 0x1E, 0x87, 0x87, 0x80, 0x80, 0x98, 0x98, 0xE0, 0xE0, 0x07, 0x07, 0x66, 0x66, 0x07, 0x07, 0x60, 0x60, 0x00, 0x00, 0x66, 0x66, 0x01, 0x01, 0x87, 0x87, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE7, 0xE7, 0xE6, 0xE6, 0xE6, 0xE6, 0xE6, 0xE6, 0xE7, 0xE7, 0xE0, 0xE0, 0xFF, 0xFF, 0xE0, 0xE0, 0xFF, 0xFF, 0xE0, 0xE0, 0xFF, 0xFF, 0xE1, 0xE1, 0xF8, 0xF8, 0xE6, 0xE6, 0xF8, 0xF8, 0xF8, 0xF8, 0xE7, 0xE7, 0xFF, 0xFF, 0xE7, 0xE7, 0xF9, 0xF9, 0xFE, 0xFE, 0xF8, 0xF8, 0xE0, 0xE0, 0xE6, 0xE6, 0xE0, 0xE0, 0xE6, 0xE6, 0xF8, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

PROGMEM const unsigned char madeBy00[] = {
// width, height 57, 32,
0x8E, 0x59, 0x51, 0xD7, 0x86, 0x00, 0x00, 0x1F, 0x05, 0x05, 0xC1, 0x00, 0xDF, 0x50, 0x50, 0xDF, 0x00, 0x5F, 0x51, 0xD1, 0x1F, 0xC0, 0x5F, 0x45, 0xC5, 0x07, 0x40, 0xC7, 0x44, 0x1C, 0x07, 0x00, 0x00, 0x00, 0x20, 0x20, 0xF8, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0xB8, 0xA8, 0xA8, 0xE8, 0x00, 0x08, 0x08, 0xF8, 0x08, 0x00, 0xF8, 0x88, 0xA8, 0xE8, 
0x83, 0x46, 0x44, 0xC5, 0x81, 0x00, 0x00, 0xC2, 0x44, 0x44, 0x47, 0x00, 0xC7, 0x44, 0x44, 0xC7, 0x00, 0xC5, 0x45, 0x47, 0x40, 0x07, 0x42, 0x42, 0xC5, 0x40, 0x04, 0xC7, 0x44, 0x40, 0xC0, 0x00, 0x40, 0xC0, 0x40, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0xC0, 0x40, 0x40, 0x40, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xE3, 0x96, 0x14, 0x75, 0x61, 0x00, 0x00, 0x87, 0x04, 0x04, 0xF4, 0x00, 0xF7, 0x02, 0x02, 0xF7, 0x00, 0x75, 0x55, 0x55, 0xD7, 0x00, 0x10, 0x10, 0xF7, 0x10, 0x10, 0x07, 0x11, 0xF1, 0x11, 0x00, 0xF4, 0x27, 0x44, 0x80, 0xF6, 0x01, 0x01, 0x06, 0x00, 0x07, 0x05, 0xF5, 0x14, 0x10, 0x17, 0x04, 0x74, 0x44, 0xC0, 0x70, 0x00, 0xF0, 0x90, 0x90, 0x70, 
0x38, 0x65, 0x45, 0x5D, 0x18, 0x00, 0x00, 0x20, 0x41, 0x41, 0x7D, 0x00, 0x7D, 0x45, 0x45, 0x7D, 0x00, 0x55, 0x55, 0x7D, 0x01, 0x7C, 0x24, 0x24, 0x5D, 0x00, 0x44, 0x7C, 0x45, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01
};

PROGMEM const unsigned char madeBy01[] = {
// width, height 21, 8,
0x1F, 0x11, 0x11, 0x11, 0x00, 0x1F, 0x11, 0x11, 0x1F, 0x00, 0x1F, 0x11, 0x11, 0x0E, 0x00, 0x1F, 0x15, 0x15, 0x11, 0x00, 0x0A
};

PROGMEM const unsigned char madeBy02[] = {
// width, height 16, 8,
0x1F, 0x09, 0x09, 0x1F, 0x00, 0x1F, 0x09, 0x09, 0x17, 0x00, 0x01, 0x01, 0x1F, 0x01, 0x00, 0x0A
};


#endif
const PROGMEM uint8_t tiles[] = {
	0x1F, 0xA7, 0xD3, 0xF9, 0xFD, 0x3A, 0x1C, 0x1E, 0x1C, 0x1C, 0x3A, 0xF9, 0xF9, 0xC3, 0x07, 0x1F, 
	0xF8, 0xE4, 0xC3, 0x9F, 0x9F, 0x1C, 0x38, 0x38, 0x38, 0x38, 0x1C, 0x9F, 0x8F, 0xC3, 0xE0, 0xF8, 
	0x00, 0xAA, 0xFF, 0xFF, 0xFF, 0x5B, 0x2E, 0x5B, 0x2F, 0x5A, 0x2F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
	0xF8, 0xE4, 0xC3, 0x9F, 0x9F, 0x1C, 0x38, 0x38, 0x38, 0x38, 0x1C, 0x9F, 0x8F, 0xC3, 0xE0, 0xF8, 
	0xBC, 0xFE, 0x5C, 0xFE, 0xBC, 0x5E, 0xBC, 0x1E, 0x1C, 0x1C, 0x3A, 0xF9, 0xF9, 0xC3, 0x07, 0x1F, 
	0x3D, 0x3F, 0x3D, 0x3F, 0x3A, 0x3D, 0x3A, 0x38, 0x38, 0x38, 0x1C, 0x9F, 0x8F, 0xC3, 0xE0, 0xF8, 
	0xFC, 0xFE, 0xFF, 0x7F, 0xEF, 0xDF, 0xBF, 0x77, 0xEF, 0xDF, 0xBF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
	0x3F, 0x3F, 0x3F, 0x3F, 0x3E, 0x3D, 0x3B, 0x3F, 0x3E, 0x3D, 0x1F, 0x9F, 0x8F, 0xC3, 0xE0, 0xF8, 
	0x1F, 0xA7, 0xD3, 0xF9, 0xFD, 0x3A, 0x1C, 0x1E, 0x1C, 0xBE, 0x5C, 0xBE, 0xFC, 0x5E, 0xFC, 0xBE, 
	0xF8, 0xE4, 0xC3, 0x9F, 0x9F, 0x1C, 0x38, 0x38, 0x38, 0x3A, 0x3D, 0x3A, 0x3F, 0x3D, 0x3F, 0x3D, 
	0x00, 0xAA, 0xFF, 0xFF, 0xFF, 0xBF, 0xDF, 0xEF, 0x77, 0xBF, 0xDF, 0xEF, 0x7F, 0xFF, 0xFC, 0xFE, 
	0xF8, 0xE4, 0xC3, 0x8F, 0x9F, 0x1F, 0x3D, 0x3E, 0x3F, 0x3B, 0x3D, 0x3E, 0x3F, 0x3F, 0x3F, 0x3F, 
	0xFC, 0xFE, 0xFC, 0xFE, 0xFC, 0xFE, 0xFC, 0x7E, 0x7C, 0xFE, 0xFC, 0xFE, 0xFC, 0xFE, 0xFC, 0xFE, 
	0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3E, 0x3E, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 
	0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFE, 
	0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 
	0x1F, 0xA7, 0xD3, 0xF9, 0xFD, 0x3A, 0x1C, 0x1E, 0x1C, 0x1C, 0x3A, 0xF9, 0xF9, 0xC3, 0x07, 0x1F, 
	0x00, 0xAA, 0xFF, 0xFF, 0xFF, 0xDA, 0x74, 0xDA, 0xF4, 0x5A, 0xF4, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
	0x00, 0xAA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
	0x00, 0xAA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
	0xFC, 0xFE, 0xFC, 0xFE, 0x7C, 0xBE, 0xDC, 0xFE, 0x7C, 0xBC, 0xFA, 0xF9, 0xF9, 0xC3, 0x07, 0x1F, 
	0x3F, 0xBF, 0xFF, 0xFE, 0xF7, 0xFB, 0xFD, 0xEE, 0xF7, 0xFB, 0xFD, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
	0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
	0x3F, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
	0x1F, 0xA7, 0xD3, 0xF1, 0xFD, 0xFA, 0xBC, 0x7E, 0xFC, 0xDE, 0xBC, 0x7E, 0xFC, 0xFE, 0xFC, 0xFE, 
	0x00, 0xAA, 0xFF, 0xFF, 0xFF, 0xFD, 0xFB, 0xF7, 0xEE, 0xFD, 0xFB, 0xF7, 0xFE, 0xFF, 0x3F, 0x3F, 
	0x00, 0xAA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFE, 
	0x00, 0xAA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 
	0xFC, 0xFE, 0xFC, 0xFE, 0xFC, 0xFE, 0xFC, 0xFE, 0xFC, 0xFE, 0xFC, 0xFE, 0xFC, 0xFE, 0xFC, 0xFE, 
	0x3F, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 
	0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFE, 
	0x3F, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 

};


const PROGMEM uint8_t level[] = {
	0xFF, 0xFF, 0xFF, 0xFF, // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
	0x01, 0x00, 0x00, 0x80, // O                              O
	0x01, 0x00, 0x00, 0x80, // O                              O
	0x01, 0x00, 0x00, 0x80, // O                              O
	0x01, 0x00, 0x00, 0x80, // O                              O
	0xF1, 0xFF, 0xFF, 0x8F, // O   OOOOOOOOOOOOOOOOOOOOOOOO   O
	0x11, 0x80, 0x01, 0x88, // O   O          OO          O   O
	0xD1, 0xBD, 0xBD, 0x8B, // O   O OOO OOOO OO OOOO OOO O   O
	0xD1, 0xBD, 0xBD, 0x8B, // O   O OOO OOOO OO OOOO OOO O   O
	0x11, 0x00, 0x00, 0x88, // O   O                      O   O
	0xD1, 0xED, 0xB7, 0x8B, // O   O OOO OO OOOOOO OO OOO O   O
	0x11, 0x8C, 0x31, 0x88, // O   O     OO   OO   OO     O   O
	0xF1, 0xBD, 0xBD, 0x8F, // O   OOOOO OOOO OO OOOO OOOOO   O
	0x01, 0x0D, 0xB0, 0x80, // O       O OO        OO O       O
	0xF1, 0x6D, 0xB6, 0x8F, // O   OOOOO OO OO  OO OO OOOOO   O
	0x01, 0x20, 0x04, 0x80, // O            O    O            O
	0xF1, 0xED, 0xB7, 0x8F, // O   OOOOO OO OOOOOO OO OOOOO   O
	0x01, 0x0D, 0xB0, 0x80, // O       O OO        OO O       O
	0xF1, 0xED, 0xB7, 0x8F, // O   OOOOO OO OOOOOO OO OOOOO   O
	0x11, 0x80, 0x01, 0x88, // O   O          OO          O   O
	0xD1, 0xBD, 0xBD, 0x8B, // O   O OOO OOOO OO OOOO OOO O   O
	0x11, 0x01, 0x80, 0x88, // O   O   O              O   O   O
	0x71, 0xE5, 0xA7, 0x8E, // O   OOO O O  OOOOOO  O O OOO   O
	0x11, 0x84, 0x21, 0x88, // O   O     O    OO    O     O   O
	0xD1, 0xBF, 0xFD, 0x8B, // O   O OOOOOOOO OO OOOOOOOO O   O
	0x11, 0x00, 0x00, 0x88, // O   O                      O   O
	0xF1, 0xFF, 0xFF, 0x8F, // O   OOOOOOOOOOOOOOOOOOOOOOOO   O
	0x01, 0x00, 0x00, 0x80, // O                              O
	0x01, 0x00, 0x00, 0x80, // O                              O
	0x01, 0x00, 0x00, 0x80, // O                              O
	0x01, 0x00, 0x00, 0x80, // O                              O
	0xFF, 0xFF, 0xFF, 0xFF, // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
};


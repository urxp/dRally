#include "drally.h"

	extern byte ___199f3dh[];
	extern byte ___199f3eh[];
	extern byte ___243dedh[];
	extern byte ___199f3fh[];
	extern byte ___199f40h[];
	extern byte ___199f41h[];
	extern byte ___199f42h[];
	extern byte ___199f43h[];
	extern byte ___199f44h[];
	extern byte ___199f45h[];
	extern byte ___1a21a0h[];
	extern byte ___1a51d0h[];
	extern byte ___1a4ec0h[];
	extern byte ___196e70h[];
	extern byte ___1a54d0h[];
	extern __DWORD__ ___1a1140h[8];
	extern byte ___1a1164h[];
	extern byte ___1a113ch[];
	extern byte ___1a1110h[];
	extern byte ___1a1130h[];
	extern byte ___1a1120h[];
	extern byte ___1a1118h[];
	extern byte ___1a111ch[];
	extern byte kmap[];
	extern byte ___196d9ch[];
	extern byte VGA13_ACTIVESCREEN[];

void ___45c6ch(void);
void ___59cd8h(void);
void race___46738h__VGA13_PRESENTCLEARSCREEN(void);
void race___45ad4h(void);
void ___58c60h(void);
void ___45b60h(void);
dword __GET_FRAME_COUNTER(void);
void ___483d4h_cdecl(dword, dword);
void bpa_read(const char *, void *, const char *);
void bpk_decode2(void *, void *);

// INFO SCREEN
void race___48458h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x3c];


	strcpy(___243dedh+0xf*B(___199f3dh), ".........NONE");
	strcpy(___243dedh+0xf*B(___199f3eh), ".........LEFT");
	strcpy(___243dedh+0xf*B(___199f3fh), "........RIGHT");
	strcpy(___243dedh+0xf*B(___199f40h), "...........UP");
	strcpy(___243dedh+0xf*B(___199f41h), ".........DOWN");
	strcpy(___243dedh+0xf*B(___199f42h), ".....BUTTON 1");
	strcpy(___243dedh+0xf*B(___199f43h), ".....BUTTON 2");
	strcpy(___243dedh+0xf*B(___199f44h), ".....BUTTON 3");
	strcpy(___243dedh+0xf*B(___199f45h), ".....BUTTON 4");

	strcpy(___1a21a0h+0x00f, "..........ESC");
	strcpy(___1a21a0h+0x01e, "............1");
	strcpy(___1a21a0h+0x02d, "............2");
	strcpy(___1a21a0h+0x03c, "............3");
	strcpy(___1a21a0h+0x04b, "............4");
	strcpy(___1a21a0h+0x05a, "............5");
	strcpy(___1a21a0h+0x069, "............6");
	strcpy(___1a21a0h+0x078, "............7");
	strcpy(___1a21a0h+0x087, "............8");
	strcpy(___1a21a0h+0x096, "............9");
	strcpy(___1a21a0h+0x0a5, "............0");
	strcpy(___1a21a0h+0x0b4, "........MINUS");
	strcpy(___1a21a0h+0x0c3, "........EQUAL");
	strcpy(___1a21a0h+0x0d2, "....BACKSPACE");
	strcpy(___1a21a0h+0x0e1, "..........TAB");
	strcpy(___1a21a0h+0x0f0, "............Q");
	strcpy(___1a21a0h+0x0ff, "............W");
	strcpy(___1a21a0h+0x10e, "............E");
	strcpy(___1a21a0h+0x11d, "............R");
	strcpy(___1a21a0h+0x12c, "............T");
	strcpy(___1a21a0h+0x13b, "............Y");
	strcpy(___1a21a0h+0x14a, "............U");
	strcpy(___1a21a0h+0x159, "............I");
	strcpy(___1a21a0h+0x168, "............O");
	strcpy(___1a21a0h+0x177, "............P");
	strcpy(___1a21a0h+0x186, ".LEFT BRACKET");
	strcpy(___1a21a0h+0x195, "RIGHT BRACKET");
	strcpy(___1a21a0h+0x1a4, "........ENTER");
	strcpy(___1a21a0h+0x1b3, ".LEFT CONTROL");
	strcpy(___1a21a0h+0x1c2, "............A");
	strcpy(___1a21a0h+0x1d1, "............S");
	strcpy(___1a21a0h+0x1e0, "............D");
	strcpy(___1a21a0h+0x1ef, "............F");
	strcpy(___1a21a0h+0x1fe, "............G");
	strcpy(___1a21a0h+0x20d, "............H");
	strcpy(___1a21a0h+0x21c, "............J");
	strcpy(___1a21a0h+0x22b, "............K");
	strcpy(___1a21a0h+0x23a, "............L");
	strcpy(___1a21a0h+0x249, "....SEMICOLON");
	strcpy(___1a21a0h+0x258, ".........TICK");
	strcpy(___1a21a0h+0x267, "...APOSTROPHE");
	strcpy(___1a21a0h+0x276, "...LEFT SHIFT");
	strcpy(___1a21a0h+0x285, "....BACKSLASH");
	strcpy(___1a21a0h+0x294, "............Z");
	strcpy(___1a21a0h+0x2a3, "............X");
	strcpy(___1a21a0h+0x2b2, "............C");
	strcpy(___1a21a0h+0x2c1, "............V");
	strcpy(___1a21a0h+0x2d0, "............B");
	strcpy(___1a21a0h+0x2df, "............N");
	strcpy(___1a21a0h+0x2ee, "............M");
	strcpy(___1a21a0h+0x2fd, "........COMMA");
	strcpy(___1a21a0h+0x30c, ".......PERIOD");
	strcpy(___1a21a0h+0x31b, "........SLASH");
	strcpy(___1a21a0h+0x32a, "..RIGHT SHIFT");
	strcpy(___1a21a0h+0x339, "..KEYPAD-STAR");
	strcpy(___1a21a0h+0x348, ".....LEFT ALT");
	strcpy(___1a21a0h+0x357, "........SPACE");
	strcpy(___1a21a0h+0x366, ".....CAPSLOCK");
	strcpy(___1a21a0h+0x375, "...........F1");
	strcpy(___1a21a0h+0x384, "...........F2");
	strcpy(___1a21a0h+0x393, "...........F3");
	strcpy(___1a21a0h+0x3a2, "...........F4");
	strcpy(___1a21a0h+0x3b1, "...........F5");
	strcpy(___1a21a0h+0x3c0, "...........F6");
	strcpy(___1a21a0h+0x3cf, "...........F7");
	strcpy(___1a21a0h+0x3de, "...........F8");
	strcpy(___1a21a0h+0x3ed, "...........F9");
	strcpy(___1a21a0h+0x3fc, "..........F10");
	strcpy(___1a21a0h+0x40b, "......NUMLOCK");
	strcpy(___1a21a0h+0x41a, "...SCROLLLOCK");
	strcpy(___1a21a0h+0x429, ".....KEYPAD-7");
	strcpy(___1a21a0h+0x438, ".....KEYPAD-8");
	strcpy(___1a21a0h+0x447, ".....KEYPAD-9");
	strcpy(___1a21a0h+0x456, ".KEYPAD-MINUS");
	strcpy(___1a21a0h+0x465, ".....KEYPAD-4");
	strcpy(___1a21a0h+0x474, ".....KEYPAD-5");
	strcpy(___1a21a0h+0x483, ".....KEYPAD-6");
	strcpy(___1a21a0h+0x492, "..KEYPAD-PLUS");
	strcpy(___1a21a0h+0x4a1, ".....KEYPAD-1");
	strcpy(___1a21a0h+0x4b0, ".....KEYPAD-2");
	strcpy(___1a21a0h+0x4bf, ".....KEYPAD-3");
	strcpy(___1a21a0h+0x4ce, ".....KEYPAD-0");
	strcpy(___1a21a0h+0x4dd, "...KEYPAD-DEL");
	strcpy(___1a21a0h+0x4ec, ".......SYSREQ");
	strcpy(___1a21a0h+0x519, "..........F11");
	strcpy(___1a21a0h+0x528, "..........F12");
	strcpy(___1a21a0h+0x924, ".KEYPAD-ENTER");
	strcpy(___1a21a0h+0x933, "RIGHT CONTROL");
	strcpy(___1a21a0h+0xa9b, ".KEYPAD-SLASH");
	strcpy(___1a21a0h+0xab9, ".....PRINTSCR");
	strcpy(___1a21a0h+0xac8, "....RIGHT ALT");
	strcpy(___1a21a0h+0xba9, ".........HOME");
	strcpy(___1a21a0h+0xbb8, ".....UP ARROW");
	strcpy(___1a21a0h+0xbc7, "......PAGE UP");
	strcpy(___1a21a0h+0xbe5, "...LEFT ARROW");
	strcpy(___1a21a0h+0xc03, "..RIGHT ARROW");
	strcpy(___1a21a0h+0xc21, "..........END");
	strcpy(___1a21a0h+0xc30, "...DOWN ARROW");
	strcpy(___1a21a0h+0xc3f, "....PAGE DOWN");
	strcpy(___1a21a0h+0xc4e, "..........INS");
	strcpy(___1a21a0h+0xc5d, "..........DEL");
	
	memcpy(___1a54d0h+0xfa00, VGA13_ACTIVESCREEN, 0xfa00);
	memcpy(___1a4ec0h, ___1a51d0h, 0x300);
	D(___196e70h) = 0;
	race___45ad4h();

	edx = 0;
	while(1){

		___58c60h();
		edx++;
		___45b60h();
		if((int)edx >= 0x3f) break;
	}

	bpa_read("ENGINE.BPA", ___1a54d0h, "KEYCOM3.BPK");
	bpk_decode2(VGA13_ACTIVESCREEN, ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a4ec0h, "KEYCOM3.PAL");
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x0a3c, "     GLOBAL KEY-DEFINITIONS");
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x193c, "   TAB.............STATUS BAR");
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x20bc, "   F1.............INFO SCREEN");
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x283c, "   F2............MUSIC ON/OFF");
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x2fbc, "   F3..............SFX ON/OFF");
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x373c, "   F4................TEXTURES");
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x3ebc, "   F5.................SHADOWS");
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x463c, "   P....................PAUSE");
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x5a3c, "      KEYBOARD DEFINITIONS");
	strcpy(esp, "   ACCELERATE...");
	strcat(esp, ___1a21a0h+0xf*___1a1140h[6]);
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x693c, esp);
	strcpy(esp, "   BRAKE........");
	strcat(esp, ___1a21a0h+0xf*___1a1140h[4]);
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x70bc, esp);
	strcpy(esp, "   STEER LEFT...");
	strcat(esp, ___1a21a0h+0xf*___1a1140h[2]);
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x783c, esp);
	strcpy(esp, "   STEER RIGHT..");
	strcat(esp, ___1a21a0h+0xf*___1a1140h[3]);
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x7fbc, esp);
	strcpy(esp, "   TURBO BOOST..");
	strcat(esp, ___1a21a0h+0xf*___1a1140h[0]);
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x873c, esp);
	strcpy(esp, "   MACHINE GUN..");
	strcat(esp, ___1a21a0h+0xf*___1a1140h[7]);
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x8ebc, esp);
	strcpy(esp, "   DROP MINE....");
	strcat(esp, ___1a21a0h+0xf*___1a1140h[5]);
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x963c, esp);
	strcpy(esp, "   HORN.........");
	strcat(esp, ___1a21a0h+0xf*___1a1140h[1]);
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0x9dbc, esp);
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0xb1bc, "      GAMEPAD DEFINITIONS");
	strcpy(esp, "   ACCELERATE...");
	strcat(esp, ___243dedh+0xf*D(___1a1164h));
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0xc0bc, esp);
	strcpy(esp, "   BRAKE........");
	strcat(esp, ___243dedh+0xf*D(___1a113ch));
	___483d4h_cdecl(VGA13_ACTIVESCREEN+0xc83c, esp);
	strcpy(esp, "   STEER LEFT...");
	strcat(esp, ___243dedh+0xf*D(___1a1110h));
	eax = VGA13_ACTIVESCREEN+0xcfbc;
	edi = esp;
	___483d4h_cdecl(eax, esp);
	edx = D(___1a1130h);
	esi = "   STEER RIGHT..";
	eax = edx;
	strcpy(edi, esi);
	eax <<= 4;
	esi = ___243dedh;
	eax -= edx;
	edi = esp;
	esi += eax;
	edx = esp;
	strcat(edi, esi);
	eax = VGA13_ACTIVESCREEN-0xa0000+0xad73c;
	edi = esp;
	___483d4h_cdecl(eax, edx);
	edx = D(___1a1120h);
	esi = "   TURBO BOOST..";
	eax = edx;
	strcpy(edi, esi);
	eax <<= 4;
	esi = ___243dedh;
	eax -= edx;
	edi = esp;
	esi += eax;
	edx = esp;
	strcat(edi, esi);
	eax = VGA13_ACTIVESCREEN-0xa0000+0xadebc;
	edi = esp;
	___483d4h_cdecl(eax, edx);
	edx = D(___1a1118h);
	esi = "   MACHINE GUN..";
	eax = edx;
	strcpy(edi, esi);
	eax <<= 4;
	esi = ___243dedh;
	eax -= edx;
	edi = esp;
	esi += eax;
	edx = esp;
	strcat(edi, esi);
	eax = VGA13_ACTIVESCREEN-0xa0000+0xae63c;
	edi = esp;
	___483d4h_cdecl(eax, edx);
	edx = D(___1a111ch);
	esi = "   DROP MINE....";
	eax = edx;
	strcpy(edi, esi);
	eax <<= 4;
	esi = ___243dedh;
	eax -= edx;
	edi = esp;
	esi += eax;
	edx = esp;
	strcat(edi, esi);
	eax = VGA13_ACTIVESCREEN-0xa0000+0xaedbc;
	ebx ^= ebx;
	___483d4h_cdecl(eax, edx);
	D(___196e70h) = ebx;
	race___45ad4h();
	edx ^= edx;
___49163h:
	___58c60h();
	edx++;
	___45c6ch();
	if((int)edx < 0x3f) goto ___49163h;

	memset(kmap, 0, 0x100);
	edi = 0;
	edx = 0;
___49188h:
	___59cd8h();
	eax = __GET_FRAME_COUNTER();
	eax = edi;
___4918fh:
	ebx = B(eax+kmap);
	eax++;
	edx += ebx;
	if((int)eax < 0x100) goto ___4918fh;
	if(edx == 0) goto ___49188h;

	D(___196e70h) = 0;
	race___45ad4h();

	edx = 0;
	while(1){

		___58c60h();
		edx++;
		___45b60h();
	
		if((int)edx >= 0x3f) break;
	}

	bpa_read("ENGINE.BPA", ___1a54d0h, "INFO2.BPK");
	bpk_decode2(VGA13_ACTIVESCREEN, ___1a54d0h);
	bpa_read("ENGINE.BPA", ___1a4ec0h, "INFO2.PAL");
	D(___196e70h) = 0;
	race___45ad4h();
		
	edx = 0;
	while(1){

		___58c60h();
		edx++;
		___45c6ch();
	
		if((int)edx >= 0x3f) break;
	}

	memset(kmap, 0, 0x100);
		
	edi = 0;
	edx = 0;
	while(1){

		___59cd8h();
		eax = __GET_FRAME_COUNTER();
		eax = edi;

		while(1){

			ebx = B(eax+kmap);
			eax++;
			edx += ebx;
		
			if((int)eax >= 0x100) break;
		}

		if(edx != 0) break;
	}

	D(___196e70h) = 0;
	race___45ad4h();

	edx = 0;
	while(1){

		___58c60h();
		edx++;
		___45b60h();
		
		if((int)edx >= 0x3f) break;
	}

	memcpy(VGA13_ACTIVESCREEN, ___1a54d0h+0xfa00, 0xfa00);
	memcpy(___1a4ec0h, ___1a51d0h, 0x300);
	D(___196e70h) = 0;
	race___45ad4h();

	edx = 0;
	while(1){

		___58c60h();
		edx++;
		___45c6ch();
		if((int)edx >= 0x3f) break;
	}

	memset(kmap, 0, 0x100);

	if(D(___196d9ch) == 1) race___46738h__VGA13_PRESENTCLEARSCREEN();
}

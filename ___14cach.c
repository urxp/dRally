#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1e74h;
	extern byte ___185ba9h[];
	extern void * ___1a10cch;

void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___13094h_cdecl(const char *, dword);

void ___14cach(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__	px;
	int 		i, j;


	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);

	j = -1;
	while(++j < 0x80){

		i = -1;
		while(++i < 0x68){

			if((px = read_b(___1a1e74h+0x68*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x1a42d+0x280*j+i, px);
		}
	}

	___13094h_cdecl("", 0x154a1);
	___13094h_cdecl("", 0x17ca1);
	___13094h_cdecl("[You were lapped, you loser!", 0x1a4a1);
	___13094h_cdecl("", 0x1cca1);
	___13094h_cdecl("The pain, the humiliation! Your stunt", 0x1f4a1);
	___13094h_cdecl("made me the laughing stock of the", 0x21ca1);
	___13094h_cdecl("races. What were you trying to do,", 0x244a1);
	___13094h_cdecl("mimic slow-motion? No one is going", 0x26ca1);
	___13094h_cdecl("to take me seriously after this.", 0x294a1);
	___13094h_cdecl("[No money or points awarded.", 0x2bca1);
	___12e78h_cdecl(___1a10cch, ___185ba9h, "CONTINUE", 0x316c0);
}

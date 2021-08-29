#include "drally.h"
#include "sfx.h"

	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern byte ___185a38h_delay[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___13094h_cdecl(const char *, dword);
void dRally_Sound_pushEffect(byte, byte, dword, dword, dword, dword);

// MONEY ACCOUNT CHECK
dword ___28ab4h_cdecl(int A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x34];


	if((int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x30) < A1){

		ecx = 0x15e00;
		while(1){

			memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+ecx+0xaa, 0xc4, 0x15b);

			ecx += 0x280;
			if(ecx == 0x22600) break;
		}

		itoa_watcom106(A1-D(___1a01e0h+0x6c*D(___1a1ef8h)+0x30), esp+0x20, 0xa);
		strcpy(esp, "honey. [You are $");
		strcat(esp, esp+0x20);
		strcat(esp, " [short.");

		___13094h_cdecl("No dough, no go, bro. No money,", 0x186aa);
		___13094h_cdecl(esp, 0x1aeaa);
		___13094h_cdecl("Gotta earn it. Go do it already.", 0x1d6aa);
		___12cb8h__VESA101_PRESENTSCREEN();
		dRally_Sound_pushEffect(0x2, SFX_LAUGHTER, 0, ___24cc54h_sfx_volume, 0x25500, 0x8000);
		D(___185a38h_delay) = 0x136;

		return 1; 
	}

	return 0;
}

#include "drally.h"

	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1e98h;
	extern byte ___185a14h_UseWeapons[];
	extern byte ___185a4ch[];
	extern __DWORD__ ___1865fch[];
	extern void * ___1a1ea0h;
	extern byte ___1a1ee8h[];

void ___13094h_cdecl(const char *, dword);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, void * aEncoded, int * aOffsets);
dword underground___28c1ch(void);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

// SHOP CONTINUE
void ___26e54h(void){

	int 	i, j;

	dword	eax, ebx, ecx, edx, edi, esi, ebp;


	j = -1;
	while(++j < 0x60){

		i = -1;
		while(++i < 0x60) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x27a30+0x280*j+i, read_b(___1a1e98h+0x9000+0x60*j+i));
	}

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	D(___185a4ch) = underground___28c1ch();

	if((D(___185a14h_UseWeapons) == 0)||(D(___185a4ch) == 0)){

		___13094h_cdecl("[CONTINUE", 0x136aa);
		___13094h_cdecl("", 0x15eaa);
		___13094h_cdecl("Exit the Shop and enter the Race", 0x186aa);
		___13094h_cdecl("Sign-Up.", 0x1aeaa);
	}
	else {

		___13094h_cdecl("[CONTINUE", 0x136aa);
		___13094h_cdecl("", 0x15eaa);
		___13094h_cdecl("Exit the Shop and enter the", 0x186aa);
		___13094h_cdecl("Underground Market.", 0x1aeaa);
	}

	___13094h_cdecl("", 0x1d6aa);
	___13094h_cdecl("Press [Esc{ for previous menu", 0x1feaa);
	___259e0h_cdecl(0x1b0, 0x10d, D(___1a1ee8h), ___1a1ea0h, ___1865fch);
}

/*
#include "drally.h"
#include "drmemory.h"

	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___24e4ach[];
	extern byte ___1a1098h[];

void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
byte ___5994ch(void);
dword __GET_TIMER_TICKS(void);
void * ___3f71ch__allocateMemory(dword);
void ___23488h_cdecl(dword, dword, dword);
void ___2ab50h(void);
void ___13bd4h_cdecl(dword, dword);
dword ___23594h_cdecl(dword, dword);
void ___13c9ch_cdecl(dword, dword);

dword ___1aa28h(dword A1, dword A2, dword A3){
	
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x10];


	ebx = A3;
	edx = A2;
	eax = A1;


		D(esp) = eax;
		D(esp+4) = edx;
		edi = ebx;
		eax = 0x1f;
		ecx = 0x51;
		eax = ___3f71ch__allocateMemory(eax);
		D(esp+8) = eax;
		eax = 0x1f;
		ebx = 0x14e;
		eax = ___3f71ch__allocateMemory(eax);
		esi = eax;
		eax = D(esp);
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		edx = D(esp+4);
		edx += 0xd;
		eax = 4*edx;
		ecx = D(esp);
		eax += edx;
		ebx = "Waiting for other players...";
		eax <<= 7;
		edx = ___185c0bh;
		ecx += eax;
		eax = D(___1a1108h);
		ecx += 0x28;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = D(esp+4);
		edx += 0x1e;
		eax = 4*edx;
		eax += edx;
		edx = D(esp);
		eax <<= 7;
		eax += edx;
		ebx = "Press ESC to leave netgame";		// "Press ESC to leave netgame"
		ecx = eax+0x28;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		 ___12cb8h__VESA101_PRESENTSCREEN();
		eax = __GET_TIMER_TICKS();
		edx = eax;
		eax = 0;
___1aaddh:
		ebx = 0;
	//mov     bl, [eax]				;; ???
		//mov 	bl, al
		L(ebx) = L(eax);
		eax += 2;
		edx += ebx;
		if((int)eax < 0x7530) goto ___1aaddh;
		eax = D(esp+8);
		B(eax) = 1;
		B(eax+1) = L(edx);
		eax = edx;
		ebx = D(esp+8);
		eax = (int)eax>>8;
		B(ebx+2) = L(eax);
		eax = edx;
		eax = (int)eax>>0x10;
		edx = (int)edx>>0x18;
		B(ebx+3) = L(eax);
		B(ebx+4) = L(edx);
		eax = ebx;
		edx = ebx;
		eax ^= ebx;
___1ab17h:
		ebp = 0x6c*D(___1a1ef8h);
		edx++;
		L(ebx) = B(eax+ebp+___1a01e0h);
		eax++;
		B(edx+4) = L(ebx);
		if((int)eax < 0xb) goto ___1ab17h;
		edx = 0x1e;
		eax = D(esp+8);
		ebx = edi+0xb;
		___23488h_cdecl(eax, edx, ebx);
		ebx = 0x1000;
		eax = D(___24e4ach);
		edx = 0;
		eax += 4;
		memset(eax, edx, ebx);
		eax = D(___24e4ach);
		X(edx) = W(eax);
		W(eax+2) = X(edx);
		eax = D(esp+4);
		ebp = D(esp);
		eax += 0x13;
		ebp += 0xf;
		D(esp+0xc) = eax;
		ecx = 0;
___1ab73h:
		eax = ___5994ch();
		ebx = 0;
		edx = D(esp+0xc);
		L(ebx) = L(eax);
		___2ab50h();
		___2ab50h();
		eax = ebp;
		___13bd4h_cdecl(eax, edx);
		edx = 0xa;
		eax = esi;
		eax = ___23594h_cdecl(eax, edx);
		if(eax == 0) goto ___1ac45h;
		eax = 0;
		L(eax) = B(esi);
		if(eax != edi) goto ___1ac37h;
		if(L(ecx) != B(esi+1)) goto ___1ac37h;
		edx = D(esp+4);
		edx += 0x2f;
		eax = 4*edx;
		eax += edx;
		ecx = D(esp);
		eax <<= 7;
		eax += ecx;
		ebx = "Host closed the game!";		// "Host closed the game!"
		ecx = eax+0x28;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		edx = D(esp+0xc);
		eax = ebp;
		___13c9ch_cdecl(eax, edx);
		edx = 0;
___1abfbh:
		edx++;
		___2ab50h();
		if((int)edx < 0x28) goto ___1abfbh;
		ebx = 0x1000;
		eax = D(___24e4ach);
		edx = 0;
		eax += 4;
		memset(eax, edx, ebx);
		eax = esi;
		dRMemory_free(eax);
		eax = D(esp+8);
		dRMemory_free(eax);
		eax = 2;
		return eax;   
___1ac37h:
		eax = 0;
		L(eax) = B(esi);
		if(eax != edi) goto ___1ac45h;
		if(B(esi+1) == 2) goto ___1ac53h;
___1ac45h:
		if(ebx != 1) goto ___1ab73h;
		goto ___1ace1h;
___1ac53h:
		eax ^= edi;
		edx = D(esp+4);
		L(eax) = B(esi+2);
		edx += 0x2f;
		D(___1a1098h) = eax;
		eax = 4*edx;
		ecx = D(esp);
		eax += edx;
		ebx = "Host started the game!";
		eax <<= 7;
		edx = ___185c0bh;
		ecx += eax;
		eax = D(___1a1108h);
		ecx += 0x28;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		edx = D(esp+4);
		eax = D(esp);
		edx += 0x13;
		eax += 0xf;
		___13c9ch_cdecl(eax, edx);
		edx = 0;
___1aca5h:
		edx++;
		___2ab50h();
		if((int)edx < 0x28) goto ___1aca5h;
		ebx = 0x1000;
		eax = D(___24e4ach);
		edx = 0;
		eax += 4;
		memset(eax, edx, ebx);
		eax = esi;
		dRMemory_free(eax);
		eax = D(esp+8);
		dRMemory_free(eax);
		eax = 1;
		return eax;
___1ace1h:
		eax = D(esp+8);
		edx = 0x1e;
		ebx = edi+0xb;
		B(eax) = 0;
		___23488h_cdecl(eax, edx, ebx);
		ebx = 0x1000;
		eax = D(___24e4ach);
		edx = 0;
		eax += 4;
		memset(eax, edx, ebx);
		eax = D(___24e4ach);
		X(edx) = W(eax);
		W(eax+2) = X(edx);
		eax = esi;
		dRMemory_free(eax);
		eax = D(esp+8);
		dRMemory_free(eax);
		eax = 0;  
		return eax;
}
*/

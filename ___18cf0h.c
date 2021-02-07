#include "drally.h"

	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern void * ___1a0f9ch;
	extern byte ___1a1ef8h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___196a94h[];
	extern byte ___1a01e0h[];
	extern byte ___185b58h[];

void ___2a608h_cdecl(dword);
void dRally_Memory_free(void *);
int rand_watcom106(void);
dword ___17510h_cdecl(dword, dword, dword, dword, dword, dword, dword, dword, dword);
void * ___3f71ch__allocateMemory(dword);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___13710h(dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
dword ___146c4h_cdecl(dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
dword GET_FILE_SIZE(const char *);
void ___18808h_cdecl(dword, dword);

const byte ___1858c8h[] = {
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

static byte ROR_BYTE(byte b, int n){

    return (b>>n)|(b<<(8-n));
}

// SAVE GAME
void ___18cf0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x34];


	edx = 0;
	ebp = 0;
	D(esp+0x28) = edx;

	while(1){

		eax = D(esp+0x28);
		L(edx) = 1;
		esi = "Empty Slot";
		edi = ___1866b8h+ebp+0x8ca;
		B(___185b58h+eax+0x2d) = L(edx);
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;
		B(edi++) = B(esi++);
		edi = esp+0x10;
		esi = "DR.SG";
		ebx = 0xa;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;
		edx = esp+0x2c;
		esi = esp+0x2c;
		edi = esp+0x10;
		eax = itoa_watcom106(eax, edx, ebx);
		strcat(edi, esi);
		eax = esp+0x10;
		eax = GET_FILE_SIZE(eax);

		if((int)eax > 0){

			eax = ___1866b8h+0x8ca;
			edx = esp+0x10;
			eax += ebp;
			___18808h_cdecl(eax, edx);
		}

		ebx = D(esp+0x28);
		ebx++;
		ebp += 0x32;
		D(esp+0x28) = ebx;

		if((int)ebx >= 8) break;
	}

	edi = ___1866b8h+0xa28;
	esi = "Quicksave Slot";
	D(edi) = D(esi); edi += 4; esi += 4;
	D(edi) = D(esi); edi += 4; esi += 4;
	D(edi) = D(esi); edi += 4; esi += 4;
	W(edi) = W(esi); edi += 2; esi += 2;
	B(edi++) = B(esi++);
	D(esp+0x24) = 0xffffffff;

	while(1){

		ecx = 0x28f00;
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi += 0x10680;
		edi += 0x10680;
		edx ^= edx;
		memcpy(edi, esi, ecx);
		eax ^= eax;
		___13710h(eax, edx);
		eax = 0x1;
		edx ^= edx;
		___13710h(eax, edx);
		edx = 0x1;
		eax = 0x5;
		___13710h(eax, edx);
		___12cb8h__VESA101_PRESENTSCREEN();
		eax = 0x5;
		eax = ___146c4h_cdecl(eax);
		esi = eax;
		ebp = eax;

		if(((int)eax >= 0)&&((int)eax <= 7)){

			___13710h(5, 0);
			___13248h_cdecl(0x78, 0x113, 0x186, 0x46, 1);
			___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Enter the name of save game?", 0x2c182);
			___12cb8h__VESA101_PRESENTSCREEN();
			esi = ___1866b8h+0x32*esi+0x8ca;
			eax = strcmp(esi, "Empty Slot");
			strcpy(esp, eax ? esi : "");
			eax = ___17510h_cdecl(esp, 0x82, 0x12a, ___1858c8h, 0xf, 0x140, 1, 1, 0);
			
			if(eax != 0){

				D(esp+0x24) = ebp;
				ebp = 0xffffffff;
			}
		}

		if(ebp == 0xffffffff) break;
	}

	if((int)D(esp+0x24) >= 0){

		___1a0f9ch = ___3f71ch__allocateMemory(0x883);
		memset(___1a0f9ch, 0, 0x883);
		eax = rand_watcom106();
		edx = eax;
		ebx = 0xff;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)ebx;
		D(esp+0x20) = edx;
		L(edx) = B(esp+0x20);
		B(___1a0f9ch) = L(edx);
		L(edx) = B(___1a1ef8h);
		B(___1a0f9ch+1) = L(edx);
		L(edx) = B(___185a14h_UseWeapons);
		B(___1a0f9ch+2) = L(edx);
		L(edx) = B(___196a94h);
		B(___1a0f9ch+3) = L(edx);
		eax = 0;
		D(esp+0x28) = eax;
		edi = esp;
		edx = D(esp+0x28);
		ecx = strlen(edi);

		if(ecx > edx){

			while(1){
				esi = edx;
				eax = ___1a0f9ch;
				esi++;
				eax += edx;
				L(edx) = B(esp+edx);
				D(esp+0x28) = esi;
				B(eax+4) = L(edx);
				edi = esp;
				edx = D(esp+0x28);
				ecx = strlen(edi);
				
				if(ecx <= edx) break;
			}
		}

		memcpy(___1a0f9ch+0x13, ___1a01e0h, 0x870);
		D(esp+0x28) = 1;

		if((int)D(esp+0x28) < 0x883){

			L(eax) = B(esp+0x28);
			H(eax) = 0x11;
			X(eax) = L(eax)*H(eax);
			B(esp+0x30) = L(eax);
		
			while(1){

				edi = D(esp+0x28);
				ebx = ___1a0f9ch;
				ebx += edi;
				L(eax) = B(esp+0x20);
				H(edx) = B(ebx);
				H(edx) -= L(eax);
				L(eax) = B(esp+0x30);
				L(ecx) = H(edx);
				B(ebx) = H(edx);
				edx = edi;
				L(ecx) += L(eax);
				eax = edi;
				edx = (int)edx>>0x1f;
				B(ebx) = L(ecx);
				ecx = 0x6;
				edx = (long long)(int)eax%(int)ecx;
				ecx = edx;
				eax = D(ebx);
				L(eax) = ROR_BYTE(L(eax), L(ecx));
				D(ebx) = eax;
				H(ecx) = B(esp+0x30);
				eax = edi+0x1;
				H(ecx) += 0x11;
				D(esp+0x28) = eax;
				B(esp+0x30) = H(ecx);
			
				if((int)eax >= 0x883) break;
			}
		}

		eax = strupr_fopen(strcat(strcpy(esp+0x10, "DR.SG"), itoa_watcom106(D(esp+0x24), esp+0x2c, 0xa)), "wb");
		fwrite(___1a0f9ch, 0x883, 1, eax);
		fclose(eax);
		dRally_Memory_free(___1a0f9ch);
		___13710h(0, 0);
		___13710h(1, 0);
		___13710h(5, 0);
		___2a608h_cdecl("Game Saved.");
		strcpy(___1866b8h+0xa28, "Quicksave Slot");
	}
}

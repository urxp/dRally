#include "drally.h"

	extern byte ___19bd60h[];
	extern byte ___1a116ch[];
	extern byte ___1a1f4fh[];
	extern byte ___1a1f4eh[];
	extern byte ___1a1dbah[];
	extern byte ___185a1ch[];
	extern byte ___1a1f63h[];
	extern byte ___196a74h[];
	extern byte ___1a0f9ch[];
	extern byte ___180864h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___182174h[];
	extern byte ___182194h[];


void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12d6ch__VESA101_PRESENTBOTTOMSCREEN(void);
void * ___3f71ch__allocateMemory(dword);
void dRally_Memory_free(void *);
void ___6168ch(void);
void ___23230h(void);
void ___233c0h(void);
void ___1e4f8h(void);
void ___1e62ch_cdecl(dword);
void ___23488h_cdecl(dword, dword, dword);
dword ___23594h_cdecl(dword, dword);
void ___2aa08h(void);

void ___2ab50h(void){

	dword 	eax, ebx, ecx, edx, edi, esi;
	byte 	__esp[0x10+0x428];
	byte * 	esp = __esp+0x10; 

	___2aa08h();

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) != 0){

		___6168ch();
		edx = 1;
		eax = esp;
		eax = ___23594h_cdecl(eax, edx);

		if(eax != 0){

			ebx = 0;
			D(esp+0x418) = ebx;
			ebx = ___1a116ch;
			edx = ebx+0x96;
			
			while(1){

				esi = edx;
				edi = ebx;
				strcpy(edi, esi);
				eax = D(esp+0x418);
				L(ecx) = B(eax+___1a1f4fh);
				ebx += 0x96;
				B(eax+___1a1f4eh) = L(ecx);
				ecx = eax+1;
				edx += 0x96;
				D(esp+0x418) = ecx;

				if((int)ecx >= 0x15) break;
			}

			esi = esp;
			edi = ___1a1dbah;
			H(edx) = 1;
			strcpy(edi, esi);
			edi = D(___185a1ch);
			B(___1a1f63h) = H(edx);

			if(edi){
		
				if(D(___196a74h) == 1){
						
					___233c0h();
					___12cb8h__VESA101_PRESENTSCREEN();
				}
			}
			else {

				if(D(___196a74h) == 1){
					
					___23230h();
					___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
				}
			}
		}

		edx = 6;
		eax = esp;
		eax = ___23594h_cdecl(eax, edx);

		if(eax != 0){

			edx = 0;
			D(esp+0x418) = edx;
			edx = ___1a116ch;
			ebx = edx+0x96;
		
			while(1){

				esi = ebx;
				edi = edx;
				strcpy(edi, esi);
				eax = D(esp+0x418);
				L(ecx) = B(eax+___1a1f4fh);
				edx += 0x96;
				B(eax+___1a1f4eh) = L(ecx);
				ecx = eax+1;
				ebx += 0x96;
				D(esp+0x418) = ecx;
			
				if((int)ecx >= 0x15) break;
			}

			esi = esp;
			edi = ___1a1dbah;
			strcpy(edi, esi);
			L(ebx) = 0;
			edi = D(___185a1ch);
			B(___1a1f63h) = L(ebx);

			if(edi){

				if(D(___196a74h) == 1){

					___233c0h();
					___12cb8h__VESA101_PRESENTSCREEN();
				}
			}
			else {

				if(D(___196a74h) == 1){
				
					___23230h();
					___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
				}
			}
		}

		edx = 7;
		eax = esp;
		eax = ___23594h_cdecl(eax, edx);

		if(eax != 0){

			eax = 0x64;
			___3f71ch__allocateMemory(eax);
			edi = eax;
			D(___1a0f9ch) = eax;
			eax = D(___180864h);
			edx = D(___1a1ef8h);
			D(edi) = eax;
			eax = 8*edx;
			eax -= edx;
			eax <<= 2;
			eax -= edx;
			esi = ___1a01e0h;
			eax <<= 2;
			esi += eax;
			ebx = 8;
			strcat(edi, esi);
			esi = ___182174h;
			edi = D(___1a0f9ch);
			edx = 0x64;
			strcat(edi, esi);
			eax = D(___1a0f9ch);
			___23488h(eax, edx, ebx);
			eax = D(___1a0f9ch);
			dRally_Memory_free(eax);
		}

		edx = 0x14;
		eax = esp;
		eax = ___23594h_cdecl(eax, edx);

		if(eax != 0){

			edx = 0;
			D(esp+0x418) = edx;
			edx = ___1a116ch;
			ebx = edx+0x96;
		
			while(1){
		
				esi = ebx;
				edi = edx;
				strcpy(edi, esi);
				eax = D(esp+0x418);
				L(ecx) = B(eax+___1a1f4fh);
				edx += 0x96;
				B(eax+___1a1f4eh) = L(ecx);
				ecx = eax+1;
				ebx += 0x96;
				D(esp+0x418) = ecx;
			
				if((int)ecx >= 0x15) break;
			}

			esi = esp;
			edi = ___1a1dbah;
			strcpy(edi, esi);
			H(ebx) = 0;
			edi = D(___185a1ch);
			B(___1a1f63h) = H(ebx);

			if(edi){

				if(D(___196a74h) == 1){
				
					___233c0h();
					___12cb8h__VESA101_PRESENTSCREEN();
				}
			}
			else {

				if(D(___196a74h) == 1){
						
					___23230h();
					___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
				}
			}

			edx = 0x13;
			___1e4f8h();
			D(___1a1ef8h) = edx;
		}

		edx = 9;
		eax = esp;
		eax = ___23594h_cdecl(eax, edx);

		if(eax != 0){

			ebx = 0;
			edx = ___1a116ch;
			D(esp+0x418) = ebx;
			ebx = edx+0x96;

			while(1){

				esi = ebx;
				edi = edx;
				strcpy(edi, esi);
				eax = D(esp+0x418);
				L(ecx) = B(eax+___1a1f4fh);
				edx += 0x96;
				B(eax+___1a1f4eh) = L(ecx);
				ecx = eax+1;
				ebx += 0x96;
				D(esp+0x418) = ecx;
			
				if((int)ecx >= 0x15) break;
			}

			esi = esp;
			edi = ___1a1dbah;
			strcpy(edi, esi);
			L(ecx) = 0;
			edi = D(___185a1ch);
			B(___1a1f63h) = L(ecx);

			if(edi){
		
				if(D(___196a74h) == 1){
				
					___233c0h();
					___12cb8h__VESA101_PRESENTSCREEN();
				}
			}
			else {

				if(D(___196a74h) == 1){
				
					___23230h();
					___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
				}
			}

			eax = 1;
			___1e62ch_cdecl(eax);
		}

		edx = 0x13;
		eax = esp+0x400;
		eax = ___23594h_cdecl(eax, edx);

		if(eax != 0){

			edx = 0;
			D(esp+0x418) = edx;
			edx = ___1a116ch;
			ebx = edx+0x96;
		
			while(1){

				esi = ebx;
				edi = edx;
				strcpy(edi, esi);
				eax = D(esp+0x418);
				L(ecx) = B(eax+___1a1f4fh);
				edx += 0x96;
				B(eax+___1a1f4eh) = L(ecx);
				ecx = eax+1;
				ebx += 0x96;
				D(esp+0x418) = ecx;
			
				if((int)ecx >= 0x15) break;
			}

			edx = 0;
			eax = D(___180864h);
			L(edx) = B(esp+0x400);
			D(___1a1dbah) = eax;
			eax = 8*edx;
			eax -= edx;
			eax <<= 2;
			eax -= edx;
			esi = ___1a01e0h;
			eax <<= 2;
			edi = ___1a1dbah;
			esi += eax;
			strcat(edi, esi);
			esi = ___182194h;
			strcat(edi, esi);
			H(ecx) = 0;
			edi = D(___185a1ch);
			B(___1a1f63h) = H(ecx);

			if(edi){

				if(D(___196a74h) == 1){
				
					___233c0h();
					___12cb8h__VESA101_PRESENTSCREEN();
				}
			}
			else {
			
				if(D(___196a74h) == 1){
				
					___23230h();
					___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
				}
			}
		}
	}
#endif // DR_MULTIPLAYER
}

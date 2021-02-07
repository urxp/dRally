#include "drally.h"

	extern byte ___19bd60h[];
	extern byte ___1a116ch[];
	extern byte ___1a1f4eh[];
	extern byte ___185a1ch[];
	extern byte ___196a74h[];
	extern void * ___1a0f9ch;
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];


void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12d6ch__VESA101_PRESENTBOTTOMSCREEN(void);
void * ___3f71ch__allocateMemory(dword);
void dRally_Memory_free(void *);
void ___6168ch(void);
#if defined(DR_MULTIPLAYER)
void ___23230h(void);
void ___233c0h(void);
void ___1e4f8h(void);
void ___1e62ch_cdecl(dword);
dword ___23594h_cdecl(dword, dword);
void ___23488h_cdecl(dword, dword, dword);
#endif // DR_MULTIPLAYER
void ___2aa08h(void);

void ___2ab50h(void){

	dword 	eax, ebx, ecx, edx, edi, esi;
	byte 	__esp[0x10+0x428];
	byte * 	esp = __esp+0x10; 

	___2aa08h();

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) != 0){

		___6168ch();
		eax = ___23594h_cdecl(esp, 1);

		if(eax != 0){

			D(esp+0x418) = 0;
			ebx = ___1a116ch;
			edx = ebx+0x96;
			
			while(1){

				strcpy(ebx, edx);
				B(D(esp+0x418)+___1a1f4eh) = B(D(esp+0x418)+___1a1f4eh+1);
				edx += 0x96;
				ebx += 0x96;
				D(esp+0x418)++;

				if((int)D(esp+0x418) >= 0x15) break;
			}

			strcpy(___1a116ch+0xc4e, esp);
			B(___1a1f4eh+0x15) = 1;

			if(D(___185a1ch)){
		
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

		eax = ___23594h_cdecl(esp, 6);

		if(eax != 0){

			D(esp+0x418) = 0;
			edx = ___1a116ch;
			ebx = edx+0x96;
		
			while(1){

				strcpy(edx, ebx);
				B(D(esp+0x418)+___1a1f4eh) = B(D(esp+0x418)+___1a1f4eh+1);
				ebx += 0x96;
				edx += 0x96;
				D(esp+0x418)++;
			
				if((int)D(esp+0x418) >= 0x15) break;
			}

			strcpy(___1a116ch+0xc4e, esp);
			B(___1a1f4eh+0x15) = 0;

			if(D(___185a1ch)){

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

		eax = ___23594h_cdecl(esp, 7);

		if(eax != 0){

			___1a0f9ch = ___3f71ch__allocateMemory(0x64);
			strcpy(___1a0f9ch, "-- ");
			strcat(___1a0f9ch, ___1a01e0h+0x6c*D(___1a1ef8h));
			strcat(___1a0f9ch, " is currently on Death Rally.");
			___23488h_cdecl(___1a0f9ch, 0x64, 8);
			dRally_Memory_free(___1a0f9ch);
		}

		eax = ___23594h_cdecl(esp, 0x14);

		if(eax != 0){

			D(esp+0x418) = 0;
			edx = ___1a116ch;
			ebx = edx+0x96;
		
			while(1){
		
				strcpy(edx, ebx);
				B(D(esp+0x418)+___1a1f4eh) = B(D(esp+0x418)+___1a1f4eh+1);
				ebx += 0x96;
				edx += 0x96;
				D(esp+0x418)++;
							
				if((int)D(esp+0x418) >= 0x15) break;
			}

			strcpy(___1a116ch+0xc4e, esp);
			B(___1a1f4eh+0x15) = 0;

			if(D(___185a1ch)){

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

			___1e4f8h();
			D(___1a1ef8h) = 0x13;
		}

		eax = ___23594h_cdecl(esp, 9);

		if(eax != 0){

			edx = ___1a116ch;
			D(esp+0x418) = 0;
			ebx = edx+0x96;

			while(1){

				strcpy(edx, ebx);
				B(D(esp+0x418)+___1a1f4eh) = B(D(esp+0x418)+___1a1f4eh+1);
				ebx += 0x96;
				edx += 0x96;
				D(esp+0x418)++;
			
				if((int)D(esp+0x418) >= 0x15) break;
			}

			strcpy(___1a116ch+0xc4e, esp);
			B(___1a1f4eh+0x15) = 0;

			if(D(___185a1ch)){
		
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

			___1e62ch_cdecl(1);
		}

		eax = ___23594h_cdecl(esp+0x400, 0x13);

		if(eax != 0){

			D(esp+0x418) = 0;
			edx = ___1a116ch;
			ebx = edx+0x96;
		
			while(1){

				strcpy(edx, ebx);
				B(D(esp+0x418)+___1a1f4eh) = B(D(esp+0x418)+___1a1f4eh+1);
				ebx += 0x96;
				edx += 0x96;
				D(esp+0x418)++;
			
				if((int)D(esp+0x418) >= 0x15) break;
			}

			strcpy(___1a116ch+0xc4e, "-- ");
			strcat(___1a116ch+0xc4e, ___1a01e0h+0x6c*B(esp+0x400));
			strcat(___1a116ch+0xc4e, " is waiting for you to join the next race.");
			B(___1a1f4eh+0x15) = 0;

			if(D(___185a1ch)){

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

#include "drally.h"
#include "drmemory.h"

	extern byte CONNECTION_TYPE[];
	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	
#if defined(DR_MULTIPLAYER)
	extern byte ___19bd60h[];
	extern byte ___1a116ch[];
	extern byte ___1a1f4eh[];
	extern void * ___1a0f9ch;
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___185b58h[];
	extern byte ___185a5ch[];
	extern byte ___185c0bh[];
	extern byte ___1a10fch[];
	extern byte ___1a1108h[];
#endif // DR_MULTIPLAYER

void ___13710h(dword, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
byte ___5994ch(void);
byte ___59b3ch(void);

#if defined(DR_MULTIPLAYER)
dword NovellNetWare_IPX_InstallationCheck(void);
dword ___61cd0h(void);
void ___1123ch(void);
void * ___3f71ch__allocateMemory(dword);
void ___12d6ch__VESA101_PRESENTBOTTOMSCREEN(void);
dword ___23594h_cdecl(dword, dword);
void ___58c60h(void);
void ___6168ch(void);
void ___23488h_cdecl(dword, dword, dword);
void ___23230h(void);
void ___135fch(dword, dword, dword, dword);
#endif // DR_MULTIPLAYER

dword ___1caf4h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x68];


	if(D(CONNECTION_TYPE) == 2){

#if defined(DR_MULTIPLAYER)
		if(NovellNetWare_IPX_InstallationCheck() == 0){
#endif // DR_MULTIPLAYER

			memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x10680, D(___1a1138h__VESA101h_DefaultScreenBufferB)+0x10680, 0x28f00);
			___13710h(0, 0);
			___13710h(2, 0);
			___13248h_cdecl(0x1c, 0xc6, 0x253, 0x56, 1);
			___12e78h_cdecl(D(___1a10cch), ___185ba9h, "Netware IPX-protocol not loaded!", 0x20825);
			___12e78h_cdecl(D(___1a10cch), ___185ba9h, "Press any key to continue.", 0x25861);
			___12cb8h__VESA101_PRESENTSCREEN();
			
			___5994ch();
			___59b3ch();
			while(___5994ch() == 0);
			___5994ch();
			___59b3ch();

			return 0;
#if defined(DR_MULTIPLAYER)
		}

		if(___61cd0h() == 0) ___1123ch();

		D(___19bd60h) = 1;
		memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x10680, D(___1a1138h__VESA101h_DefaultScreenBufferB)+0x10680, 0x28f00);
		___13710h(0, 0);
		___13710h(2, 0);
		___13248h_cdecl(0x4b, 0xc6, 0x1ae, 0x38, 1);
		___12e78h_cdecl(D(___1a10cch), ___185ba9h, "Connection established!", 0x20856);
		___12cb8h__VESA101_PRESENTSCREEN();
		
		ecx = ___1a116ch;
		edx = 0;
		while(1){

			strcpy(ecx, ecx+0x96);
			B(edx+___1a1f4eh) = B(edx+___1a1f4eh+1);
			edx++;
			ecx += 0x96;
			if((int)edx >= 0x15) break;
		}

		strcpy(___1a116ch+0xc4e, "");

		ebx = ___1a116ch;
		edx = 0;
		while(1){

			strcpy(ebx, ebx+0x96);
			B(edx+___1a1f4eh) = B(edx+___1a1f4eh+1);
			edx++;
		
			ebx += 0x96;
			if((int)edx >= 0x15) break;
		}

		B(___1a1f4eh+0x15) = 0;
		strcpy(___1a116ch+0xc4e, "-- Connecting to Death Rally multiplayer.");
		___1a0f9ch = ___3f71ch__allocateMemory(0x64);

		if(D(CONNECTION_TYPE) == 2) ___23488h_cdecl(___1a0f9ch, 0, 7);

		ebp = 0;
		while(1){

			___58c60h();
			___6168ch();

			if(___23594h_cdecl(___1a0f9ch, 8) != 0){

				memcpy(esp, ___1a0f9ch, 0x64);
				ecx = ___1a116ch;

				edx = 0;
				while(1){

					strcpy(ecx, ecx+0x96);
					B(edx+___1a1f4eh) = B(edx+___1a1f4eh+1);
					edx++;
				
					ecx += 0x96;
					if((int)edx >= 0x15) break;
				}

				strcpy(___1a116ch+0xc4e, esp);
				B(___1a1f4eh+0x15) = 0;
			}

			ebp++;

			if((int)ebp >= 0x1e) break;
		}

		dRMemory_free(___1a0f9ch);

		ecx = ___1a116ch;
		edx = 0;
		while(1){

			strcpy(ecx, ecx+0x96);
			B(edx+___1a1f4eh) = B(edx+___1a1f4eh+1);
			edx++;
			ecx += 0x96;
			if((int)edx >= 0x15) break;
		}

		strcpy(___1a116ch+0xc4e, "-- ");
		strcat(___1a116ch+0xc4e, 0x6c*D(___1a1ef8h)+___1a01e0h);
		strcat(___1a116ch+0xc4e, " has joined to Death Rally.");
		B(___1a1f4eh+0x15) = 0;
		___23488h_cdecl(___1a116ch+0xc4e, strlen(___1a116ch+0xc4e)+1, 6);
		___23230h();
		___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
		B(___185b58h) = 0;
		D(___185a5ch+0x50) = 0;
		B(___185b58h+0x12) = 1;
		B(___185b58h+0x13) = 1;
		B(___185b58h+0x14) = 0;
		B(___185b58h+0x15) = 0;
		B(___185b58h+0x16) = 0;
		B(___185b58h+0x17) = 0;

		if(D(CONNECTION_TYPE) == 2) B(___185b58h+0x14) = 1;

		___135fch(0, 0x173, 0x27f, 0x6d);
		___12e78h_cdecl(D(___1a10fch), ___185c0bh, "press   to enter chat mode", 0x390a3);
		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "F1", 0x390d9);
		___12cb8h__VESA101_PRESENTSCREEN();
		___59b3ch();
		___5994ch();

		return 1;
#endif // DR_MULTIPLAYER
	}
}

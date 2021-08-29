#include "drally.h"
#include "drmemory.h"

	extern byte ___1a01e0h[];
	extern byte ___1a1ef8h[];
#if defined(DR_MULTIPLAYER)
	extern byte ___19bd60h[];
#endif // DR_MULTIPLAYER

void * ___3f71ch__allocateMemory(dword);

// SOMETHING WITH RANKINGS SORTING 
void ___30c60h_cdecl(int A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x18];
	void * 	p1;
	void * 	edxp;
	void * 	ebxp;


	p1 = ___3f71ch__allocateMemory(0x870);
	memcpy(p1, ___1a01e0h, 0x870);
	D(esp+0x8) = A1-1;
	D(esp+0x14) = 0;
	edxp = ___1a01e0h;
	ebxp = p1+0x6c*D(esp+0x8);

	if(A1 > 0){

		while(1){

			memcpy(edxp, ebxp, 0x6c);
			edxp += 0x6c;
			ebxp -= 0x6c;
			D(esp+0x14) += 1;
			if(A1 <= (int)D(esp+0x14)) break;
		}
	}

	dRMemory_free(p1);
	D(___1a1ef8h) = D(esp+0x8)-D(___1a1ef8h);
	eax = 0;

	if(A1 > 0){

		edx = 0xffffff94;
		ecx = 0;

		while(1){

			esi = D(___1a01e0h+(int)edx+0x44);

			if((esi != D(___1a01e0h+ecx+0x44))||((int)eax <= 0)){

				ebx = eax+1;
			}
			else {
			
				ebx = D(___1a01e0h+(int)edx+0x48);
			}

			D(___1a01e0h+ecx+0x48) = ebx;
			edx += 0x6c;
			eax++;
			ecx += 0x6c;
			if((int)eax >= A1) break;
		}
	}

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) != 0){

		eax = 0x870;
		ecx = 0x870;
		esi = ___1a01e0h;
		eax = ___3f71ch__allocateMemory(eax);
		ebx = eax;
		edi = eax;
		D(esp+0x4) = eax;
		memcpy(edi, esi, ecx);
		eax ^= eax;
		D(esp+0x10) = eax;
		eax = A1-1;
		D(esp+0xc) = eax;
		ecx = eax;
		eax <<= 0x3;
		eax -= ecx;
		eax <<= 0x2;
		eax -= ecx;
		eax <<= 0x2;
		edx = ___1a01e0h;
		ebx += eax;

		if(A1 > 0){

			while(1){

				ecx = 0x6c;
				esi = ebx;
				edi = edx;
				memcpy(edi, esi, ecx);
				edi = D(esp+0x10);
				edx += 0x6c;
				edi++;
				ebx -= 0x6c;
				D(esp+0x10) = edi;

				if(A1 <= (int)edi) break;
			}
		}

		eax = D(esp+0x4);
		edx = D(esp+0xc);
		dRMemory_free(eax);
		eax = D(___1a1ef8h);
		edx -= eax;
		D(___1a1ef8h) = edx;
	}
#endif // DR_MULTIPLAYER
}

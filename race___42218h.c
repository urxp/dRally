#include "drally.h"
#include "sfx.h"

	extern byte ___243ca4h[];
	extern byte ___196de4h[];
	extern byte ___243334h[];
	extern byte ___243320h[];
	extern void * ___243d80h;
	extern void * ___243d6ch;
	extern byte ___196de0h[];
	extern byte ___19bd60h[];
	extern byte ___24387ch[];
	extern byte ___243878h[];
	extern byte ___243330h[];
	extern byte ___243894h[];
	extern byte ___243874h[];
	extern byte ___243898h[];
	extern byte ___243ce8h[];
	extern byte ___1e6ed0h[];
	extern byte CONNECTION_TYPE[];

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);

#if defined(DR_MULTIPLAYER)
void ___44194h(void);
void ___44130h_cdecl(dword  A1);
void ___4495ch(void);
#endif // DR_MULTIPLAYER

void race___42218h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	void * 	esip;
	void * 	ebxp;


		edx = D(___243ca4h);
		if((int)edx <= 0xa) goto ___422deh;
		if((int)edx > 0x82) goto ___422deh;
		if(D(___196de4h) != 0) goto ___42277h;
		ecx = 0x10000;
		edx = 0x3;
		eax = 0x2;
		ebx = 0;
		esi = 0x1;
		dRally_Sound_pushEffect(eax, SFX_GET_READY, ebx, ecx, 0x50000, 0x8000);
		D(___196de4h) = esi;
___42277h:
		edi = D(___243334h);
		eax = D(___243320h);
		eax -= edi;
		if((int)eax <= 0) goto ___4228fh;
		D(___243320h) = eax;
		goto ___42297h;
___4228fh:
		ebp = 0;
		D(___243320h) = ebp;
___42297h:
		ecx = 0x3c;
		edx = 0x50;
		esip = ___243d6ch;
		ebxp = ___243d80h+0x150+D(___243320h);
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				D(ebxp) = D(esip);
				ebxp += 4;
				esip += 4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebxp += 0x200;
			L(edx) <<= 2;
			ebxp -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

___422deh:
		if((int)D(___243ca4h) <= 0xbe) goto ___42402h;
		edx = D(___196de0h);
		if(edx != 1) goto ___42379h;

#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) != 0){
		
			eax = edx;
			___44130h_cdecl(eax);
			___4495ch();
			D(___24387ch) = edx;
		}
#endif // DR_MULTIPLAYER

		esi = 0;
		D(___243878h) = esi;
		eax = D(___243878h);
		D(___243330h) = eax;
		D(___243894h) = eax;
		eax = D(___243894h);
		D(___243874h) = eax;
		eax = D(___243874h);
		D(___243898h) = eax;
		eax = 0x35e*D(___243ce8h);
		ecx = 0x10000;
		edx = 0x2c;
		D(eax+___1e6ed0h+0xa4) = esi;
		ebx = esi;
		D(eax+___1e6ed0h+0xa0) = esi;
		eax = 0x5;
		dRally_Sound_pushEffect(eax, SFX_BEEP, ebx, ecx, 0x28000, 0x8000);
___42379h:
		edx = D(___243334h);
		eax = D(___243320h);
		eax += edx;
		if((int)eax > 0x50) goto ___4239eh;
		ecx = D(___243320h);
		eax = edx+edx;
		ecx += eax;
		D(___243320h) = ecx;
		goto ___423a8h;
___4239eh:
		D(___243320h) = 0x50;
___423a8h:
		esi = D(___243320h);
		ecx = 0x3c;
		ebxp = ___243d80h+0x150+esi;
		esip = ___243d6ch+0x2580;
		edx = 0x50;
		edi = 0x2;
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				D(ebxp) = D(esip);
				ebxp += 4;
				esip += 4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebxp += 0x200;
			L(edx) <<= 2;
			ebxp -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		D(___196de0h) = edi;
___42402h:
		ebp = D(___243ca4h);
		if((int)ebp <= 0x82) goto ___424beh;
		if((int)ebp > 0xbe) goto ___424beh;
		if(D(___196de0h) != 0) goto ___4246ch;

#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) != 0){

			if(D(CONNECTION_TYPE) != 2){

				eax = 0x2;
				___44130h_cdecl(eax);
			}
			else {
			
				___44194h();
			}
		}
#endif // DR_MULTIPLAYER

		ecx = 0x10000;
		edx = 0x2c;
		eax = 0x5;
		ebx = 0;
		dRally_Sound_pushEffect(eax, SFX_BEEP, ebx, ecx, 0x20000, 0x8000);
___4246ch:
		esi = 0x1;
		ecx = 0x3c;
		edx = 0x50;
		D(___196de0h) = esi;
		esip = ___243d6ch+0x12c0;
		ebxp = ___243d80h+0x150;
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);
		
			while(1){

				D(ebxp) = D(esip);
				ebxp += 4;
				esip += 4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebxp += 0x200;
			L(edx) <<= 2;
			ebxp -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

___424beh:
		return;
}

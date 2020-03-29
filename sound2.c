#include "drally.h"

extern byte ___24e790h[];
extern byte ___24e794h[];
extern byte ___24e79ch[];
extern byte ___24e7a4h[];
extern byte ___68c38h[];

void * dRally_Memory_alloc(dword, dword);
void * dRally_Memory_resize(void * mem, dword size);
void dRally_Memory_free(dword);
void ___677cch_cdecl(dword, dword, dword);
void ___67994h_cdecl(void *, void *, void *, void *, dword);
dword ___71b70h_cdecl(dword);

void ___67bbch(dword eax, dword edx, dword ebx, dword ecx){

	dword 	esi, edi, ebp, p_eax;
	byte 	esp[0x3c];

	D(esp+0x1c) = eax;
	D(esp+0x18) = edx;
	D(esp+0x10) = ebx;
	D(esp+0x14) = ecx;
	ebp = D(___24e790h)-D(___24e794h);
	D(esp+0xc) = dRally_Memory_alloc(ebp, 1);
	memcpy(D(esp+0xc), D(___24e794h), ebp);
	D(esp+4) = D(esp+0xc)-D(___24e794h);
	D(esp) = B(___24e7a4h);

	if(D(___24e794h)){
			
		dRally_Memory_free(D(___24e794h));
		D(___24e794h) = 0;
	}

	___677cch_cdecl(ebp, D(esp), 1);
	D(esp+0x24) = 0;

	if(D(esp) > 0){

		D(esp+0x20) = 0;

		while(1){
			
			esi = D(esp+0x20);
			edx = D(___68c38h);
			edx += esi;
			edx = D(edx);
			ebx = D(esp+4);
			eax = D(edx);
			ebx += eax;
			D(esp+0x2c) = ebx;
			eax = D(edx+4);
			ebx = D(esp+4);
			ebx += eax;
			D(esp+0x34) = ebx;
			eax = D(edx+8);
			ebx = D(esp+4);
			ebx += eax;
			D(esp+8) = ebx;
			eax = D(edx+0xc);
			ebx = D(esp+4);
			ebx += eax;
			L(eax) = B(edx+0x10);
			edi = D(esp+0x10);
			B(esp+0x38) = L(eax);
			eax = D(esp+0x24);
			D(esp+0x28) = ebx;

			if(((int)eax >= (int)edi)&&((int)eax < (int)D(esp+0x14))){
					
				if(D(esp+0x1c)&&(B(esp+0x38)&4)){
					
					edx = D(esp+0x2c);
					ebx = D(esp+0x34);
					ebp = edx;

					if(edx <= ebx){

						ecx = D(esp+0x34);

						while(1){

							L(ebx) = B(edx+1);
							ebp++;
							L(ebx) ^= 0x80;
							edx += 2;
							B(ebp-1) = L(ebx);
							
							if(edx > ecx) break;
						}
					}

					edx = D(esp+0x34);
					esi = D(esp+0x2c);
					edx -= esi;
					eax = edx;
					edx = (int)edx>>0x1f;
					eax -= edx;
					eax = (int)eax>>1;
					edx = esi+eax;
					D(esp+0x34) = edx;
					edx = D(esp+8);
					edx -= esi;
					eax = edx;
					edx = (int)edx>>0x1f;
					eax -= edx;
					eax = (int)eax>>1;
					edx = esi+eax;
					D(esp+8) = edx;
					edx = D(esp+0x28);
					edx -= esi;
					eax = edx;
					edx = (int)edx>>0x1f;
					eax -= edx;
					eax = (int)eax>>1;
					edx = esi+eax;
					D(esp+0x28) = edx;
					B(esp+0x38) &= 0xfb;
				}

				if(D(esp+0x18) != 0){

					edx = D(esp+0x2c);
					L(ecx) = B(esp+0x38);
					ebx = edx;
					L(eax) = (L(ecx)&4) ? 1 : 0;
					eax &= 0xff;
					eax++;
					ecx = D(esp+0x34);
					ebp = eax;

					if(edx <= ecx){
						
						D(esp+0x30) = 2*eax;

						while(1){

							memcpy(ebx, edx, ebp);
							edx += D(esp+0x30);
							ebx += ebp;

							if(edx > D(esp+0x34)) break;
						}
					}

					edx = D(esp+0x34);
					ebp = D(esp+0x2c);
					edx -= ebp;
					eax = edx;
					edx = (int)edx>>0x1f;
					eax -= edx;
					eax = (int)eax>>1;
					edx = eax+ebp;
					D(esp+0x34) = edx;
					edx = D(esp+8);
					edx -= ebp;
					eax = edx;
					edx = (int)edx>>0x1f;
					eax -= edx;
					eax = (int)eax>>1;
					edx = eax+ebp;
					D(esp+8) = edx;
					edx = D(esp+0x28);
					edx -= ebp;
					eax = edx;
					edx = (int)edx>>0x1f;
					eax -= edx;
					eax = (int)eax>>1;
					edx = eax+ebp;
					D(esp+0x28) = edx;
				}
			}

			___67994h_cdecl(D(esp+0x2c), D(esp+0x34), D(esp+8), D(esp+0x28), B(esp+0x38));
			D(esp+0x20) += 4;
			D(esp+0x24)++;

			if(D(esp+0x24) >= D(esp)) break;
		}
	}

	dRally_Memory_free(D(esp+0xc));
	dRally_Memory_resize(D(___24e794h), D(___24e790h)-D(___24e794h)); 
}

extern byte ___24e864h[];
extern byte ___24e850h[];
extern byte ___24e798h[];

typedef unsigned long long 	qword;

void ___71608h_cdecl(dword eax, dword edx, dword ebx, dword ecx){

	void 	* src, * esi, * edi;
	qword	ll_tmp;

	src = edx+16*W(edx+ebx+0xe);
	esi = src+D(edx+ebx+0x10)-1;
	edi = src+D(edx+ebx+0x18)-1;

	if(B(edx+ebx+0x1f)&1) esi = edi = (esi < edi) ? esi : edi;

	if(eax){

		B(ecx+D(___24e864h)+1) = B(edx+ebx+0x1c);
		D(D(___24e850h)+4*ecx+4) = D(edx+ebx+0x20);
		D(D(___24e798h)+4*ecx+4) = 0;
		D(D(___24e79ch)+4*ecx+4) = 0;
	}
	else {

		D(D(___24e798h)+4*ecx+4) = B(edx+ebx+0x1c) << 0xa;
		ll_tmp = 0x2000 * 0x6d3b * D(edx+ebx+0x20);
		eax = ll_tmp/(0x6cc * 0x5780);
		D(D(___24e79ch)+4*ecx+4) = (eax>>1)+(eax&1);
	}

	___67994h_cdecl(src, esi, src+D(edx+ebx+0x14)-1, edi, B(edx+ebx+0x1f)&1);
}

dword ___5f248h_cdecl(dword, dword);
dword ___5f26ch_cdecl(dword); 
void ___5f2b4h_cdecl(void);

extern byte ___19a464h[];
extern byte ___24e86ch[];
extern byte ___24e86eh[];
extern byte ___24e854h[];
extern byte ___24e858h[];
extern byte ___24e85ch[];
extern byte ___24e860h[];

//dword ___716fch(dword ???, s3m_t * ptr, dword size);
dword ___716fch(dword eax, dword edx, dword ebx){

	dword 	ecx, esi, edi, ebp;
	byte 	esp[0x14];

		D(esp+4) = eax;
		esi = edx;
		ebx += edx;
		ebx--;
		D(esp+8) = ebx;
		ebx = edx;
		edx = 0;
		ecx = esi+0x60;
		D(esp+0xc) = edx;
		if(eax == 0) goto ___7183dh;
		edx = 1;
		eax = 0x8000;
	eax = ___5f248h_cdecl(eax, edx);
		D(___19a464h) = eax;
		eax = 0;
		X(eax) = W(esi+0x22);
		D(esp+0x10) = eax;
		L(eax) = B(esi+0x20);
		B(___24e86eh) = L(eax);
		X(eax) = W(esi+0x24);
		W(___24e86ch) = X(eax);
		eax = esi+0x40;
		D(___24e858h) = eax;
		if(B(esi+0x35) != 0xfc) goto ___71787h;
		edx = 0;
		eax = D(esp+0x10);
		L(edx) = B(___24e86eh);
		eax += eax;
		edx += ecx;
		edx += eax;
		eax = 0;
		X(eax) = W(___24e86ch);
		eax += eax;
		edx += eax;
		D(___24e860h) = edx;
		goto ___7178fh;
___71787h:
		ebp = 0;
		D(___24e860h) = ebp;
___7178fh:
		edi = 0;
___71791h:
		eax = D(___24e858h);
		if(B(edi+eax) > 0xf) goto ___717a0h;
		D(esp+0xc)++;
___717a0h:
		edi++;
		if(edi != 0x20) goto ___71791h;
		eax = D(esp+0x10);
		eax++;
	eax = ___5f26ch_cdecl(eax);
		D(___24e864h) = eax;
		eax = D(esp+0x10);
		eax <<= 2;
		eax += 4;
	eax = ___5f26ch_cdecl(eax);
		D(___24e850h) = eax;
		eax = esi+0x60;
		D(___24e85ch) = eax;
		eax = 0;
		X(eax) = W(___24e86ch);
		eax <<= 2;
		edx = 0;
	eax = ___5f26ch_cdecl(eax);
		L(edx) = B(___24e86eh);
		D(___24e854h) = eax;
		eax = D(___24e85ch);
		eax += edx;
		D(esp) = eax;
		eax = D(esp+0x10);
		edx = D(esp);
		eax += eax;
		ebp = 0;
		eax += edx;
		edx = 0;
		goto ___7182eh;
___71809h:
		edi = 0;
		X(edi) = W(eax);
		edi <<= 4;
		edi += 2;
		ecx = esi+edi;
		edi = D(___24e854h);
		edi += edx;
		D(edi) = ecx;
		if(ebx >= ecx) goto ___71827h;
		ebx = ecx;
___71827h:
		eax += 2;
		ebp++;
		edx += 4;
___7182eh:
		ecx = 0;
		X(ecx) = W(___24e86ch);
		if((int)ebp >= (int)ecx) goto ___71850h;
		goto ___71809h;
___7183dh:
		X(eax) = W(esi+0x22);
		D(esp+0x10) = eax;
		eax = 0;
		X(eax) = W(esi+0x20);
		ecx += eax;
		D(esp) = ecx;
___71850h:
		edi = D(esp+0x10);
		eax = 0;
		if((int)edi <= 0) goto ___71891h;
		edx = D(esp);
		ebp = D(esp+0x10);
___71861h:
		edi = 0;
		X(edi) = W(edx);
		edi <<= 4;
		X(edi) = W(edi+esi+0xe);
		edi &= 0xffff;
		edi <<= 4;
		ecx = D(esp+8);
		edi += esi;
		if(edi >= ecx) goto ___71889h;
		if(edi <= ebx) goto ___71889h;
		D(esp+8) = edi;
___71889h:
		eax++;
		edx += 2;
		if((int)eax < (int)ebp) goto ___71861h;
___71891h:
		eax = D(esp+0x10);
		edi = 0;
		if((int)eax <= 0) goto ___718c0h;
		ebp = D(esp);
___7189eh:
		eax = D(esp+4);
		ebx = 0;
		ecx = edi;
		X(ebx) = W(ebp);
		edx = esi;
		ebx <<= 4;
		edi++;
	___71608h_cdecl(eax, edx, ebx, ecx);
		eax = D(esp+0x10);
		ebp += 2;
		if((int)edi < (int)eax) goto ___7189eh;
___718c0h:
		edx = D(esp+8);
		eax = esi;
		edx -= esi;
		dRally_Memory_resize(eax, edx);
		if(D(esp+4) == 0) goto ___718dfh;
	___5f2b4h_cdecl();
		eax = D(esp+0xc);
		goto ___718e1h;
___718dfh:
		eax = 0;
___718e1h:
	return eax;
}

void ___71a38h_cdecl(void){
	
	dRally_Memory_free(D(___19a464h));
}

extern byte SOUND_TYPE[];
extern byte ___19a27bh[];
extern enum { AMIGA_FREQUENCE_TABLE, LINEAR_FREQUENCE_TABLE } XM_FrequenceTable;
extern byte ___19ae07h[];
extern byte ___19ae04h[];

void ___7569ch_cdecl(dword eax, dword edx, dword ebx, dword ecx, dword stk1){

	dword 	p_eax, esi, edi, ebp;
	byte 	esp[0x18+0x28];

	D(esp+0x3c) = stk1;

		D(esp+0x10) = eax;
		ebp = edx;
		edi = ebx;
		D(esp+4) = ecx;
		if(D(esp+0x3c) == 0) goto ___756f3h;
		ecx = ___19ae07h;
		ebx = ___19ae04h;
		edx = ecx;
		eax = ebx;
		esi = D(esp+0x10);
		___67994h_cdecl(eax, edx, ebx, ecx, 0);
		if(esi) goto ___75836h;
		eax = D(esp+4);
		edx = D(___24e798h);
		D(edx+eax*4+4) = esi;
		edx = D(___24e79ch);
		D(edx+eax*4+4) = esi;
		goto ___75836h;
___756f3h:
		L(eax) = B(ebx+0xe);
		L(eax) &= 0x10;
		eax &= 0xff;
		L(edx) = B(ebx+0xe);
		eax = (int)eax>>2;
		L(edx) &= 3;
		edx &= 0xff;
		eax |= edx;
		B(esp+0x14) = L(eax);
		edx = 0;
		L(eax) = !!(L(eax)&4);
		L(edx) = L(eax);
		eax = D(ebx);
		edx++;
		eax += ebp;
		eax -= edx;
		D(esp) = eax;
		edx = D(ebx+4);
		L(ebx) = B(esp+0x14);
		edx += ebp;
		L(eax) = !!(L(ebx)&4);
		eax &= 0xff;
		eax++;
		edx -= eax;
		ebx = D(edi+8);
		D(esp+8) = edx;
		eax = edx+ebx;
		D(esp+0xc) = eax;
		if(ebx) goto ___75753h;
		B(esp+0x14) &= 0xfc;
___75753h:
		L(ecx) = B(esp+0x14);
		esi = D(edi);
		L(eax) = !!(L(ecx)&4);
		ecx = esi;
		if(L(eax)) goto ___75783h;
		ebx = 0;
		L(edx) = 0;
		if((int)esi <= 0) goto ___757adh;
		eax = ebp;
___7576fh:
		H(edx) = B(eax);
		L(edx) += H(edx);
		H(edx) = L(edx);
		eax++;
		H(edx) ^= 0x80;
		ebx++;
		B(eax-1) = H(edx);
		if((int)ebx >= (int)ecx) goto ___757adh;
		goto ___7576fh;
___75783h:
		edx = esi;
		eax = esi;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		ecx ^= esi;
		ebx = 0;
		esi = eax;
		eax = ebp;
		if((int)esi <= 0) goto ___757adh;
___7579ah:
		X(edx) = W(eax);
		eax += 2;
		edx += ecx;
		ebx++;
		ecx = edx;
		W(eax-2) = X(edx);
		if((int)ebx < (int)esi) goto ___7579ah;
___757adh:
		if((B(esp+0x14)&3) == 0) goto ___757c8h;
		eax = D(esp);
		edx = D(esp+0xc);
		if((int)eax < (int)edx) goto ___757c1h;
		eax = edx;
___757c1h:
		D(esp) = eax;
		D(esp+0xc) = eax;
___757c8h:
		if(D(esp+0x10) != 0) goto ___7581ch;
		H(ebx) = LINEAR_FREQUENCE_TABLE;//1;
		L(ecx) = XM_FrequenceTable;
		eax = D(___24e798h);
		edx = 0;
		XM_FrequenceTable = H(ebx);
		L(edx) = B(edi+0xc);
		ebx = D(esp+4);
		edx <<= 0xa;
		D(eax+ebx*4+4) = edx;
		edx = D(edi+0xa);
		L(eax) = B(edi+0x10);
		edx = (int)edx>>0x18;
		L(eax) += 0x31;
		eax &= 0xff;
		eax = XM_getPeriod(eax, edx);
		eax = ___71b70h_cdecl(eax);
		edx = D(___24e79ch);
		XM_FrequenceTable = L(ecx);
		D(edx+ebx*4+4) = eax;
___7581ch:
		eax = 0;
		ecx = D(esp+0xc);
		L(eax) = B(esp+0x14);
		ebx = D(esp+8);
	p_eax = eax;
		edx = D(esp);
		eax = ebp;
	___67994h_cdecl(eax, edx, ebx, ecx, p_eax);
	
___75836h:
	return;
}

extern byte ___24e9cch[];
extern byte ___24e9c8h[];
extern byte ___24e9a8h[];
extern byte ___24e9c0h[];
extern byte ___24e9c4h[];
extern byte ___24e8a4h[];
extern byte ___24e9b8h[];
extern byte ___24e9a4h[];
extern byte ___24e9b0h[];
extern byte ___24e9b4h[];
extern byte ___24e9ach[];
extern byte ___19a688h[];
extern byte ___24e9d4h[];
extern byte ___24e9ceh[];
extern byte ___24e9d0h[];
extern byte ___24e9d2h[];


dword ___75840h(dword eax, dword edx, dword ebx){

	dword 	ecx, esi, edi, ebp, p_eax;
	byte 	esp[0x38];

		D(esp+0x34) = eax;
		D(esp+0x10) = edx;
		ebx += edx;
		ebx--;
		D(esp) = ebx;
		ebx = edx+0x3c;
		if(eax == 0) goto ___75965h;
		edx = 1;
		eax = 0x10000;
		eax = ___5f248h_cdecl(eax, edx);
		D(___19a688h) = eax;
		eax = D(esp+0x10);
		X(eax) = W(eax+0x40);
		W(___24e9d4h) = X(eax);
		eax = D(esp+0x10);
		X(eax) = W(eax+0x42);
		edx = D(esp+0x10);
		W(___24e9ceh) = X(eax);
		eax = 0;
		L(eax) = B(edx+0x44);
		D(___24e9b4h) = eax;
		eax = 0;
		X(eax) = W(edx+0x46);
		D(___24e9a8h) = eax;
		eax = 0;
		X(eax) = W(edx+0x48);
		D(___24e9ach) = eax;
		X(eax) = W(edx+0x4a);
		W(___24e9d0h) = X(eax);
		XM_FrequenceTable = (B(___24e9d0h)&1) ? LINEAR_FREQUENCE_TABLE : AMIGA_FREQUENCE_TABLE;
		X(eax) = W(edx+0x4c);
		W(___24e9d2h) = X(eax);
		X(eax) = W(edx+0x4e);
		W(___24e9cch) = X(eax);
		eax = edx+0x50;
		D(___24e9c8h) = eax;
		eax = D(___24e9a8h);
		eax <<= 2;
		edi = D(edx+0x3c);
		eax = ___5f26ch_cdecl(eax);
		D(___24e9c0h) = eax;
		eax = D(___24e9a8h);
		eax += eax;
		ebx += edi;
		eax = ___5f26ch_cdecl(eax);
		ebp = D(___24e9a8h);
		D(___24e9c4h) = eax;
		eax = 0;
		if((int)ebp <= 0) goto ___75956h;
		edx = 0;
		edi = 0;
___75923h:
		ecx = D(___24e9c4h);
		X(esi) = W(ebx+5);
		edi += 4;
		W(ecx+edx) = X(esi);
		ecx = D(___24e9c0h);
		esi = D(ebx);
		ebp = W(ebx+7);
		ebx += esi;
		eax++;
		D(ecx+edi-4) = ebx;
		ebx += ebp;
		ebp = D(___24e9a8h);
		edx += 2;
		if((int)eax < (int)ebp) goto ___75923h;
___75956h:
		eax = 0;
		D(esp+4) = eax;
		eax = ebx;
		ecx = 0;
		goto ___759deh;
___75965h:
		eax = edx;
		esi = D(edx+0x3c);
		eax ^= edx;
		ebx += esi;
		goto ___7597dh;
___75970h:
		edx = 0;
		ecx = D(ebx);
		X(edx) = W(ebx+7);
		ebx += ecx;
		eax++;
		ebx += edx;
___7597dh:
		ecx = D(esp+0x10);
		edx = 0;
		X(edx) = W(ecx+0x46);
		if((int)eax < (int)edx) goto ___75970h;
		eax = 0;
		X(eax) = W(ecx+0x48);
		D(esp+4) = eax;
		eax = ebx;
		ecx = 0;
		goto ___759deh;
___7599bh:
		esi = D(esp+0x34);
		ebp = W(eax+0x1b);
		edi = D(eax+0x1d);
		edx = 0;
		if(esi == 0) goto ___759b0h;
		D(esp+4) += ebp;
___759b0h:
		eax += D(eax);
		esi = edi;
		esi = (int)esi*(int)ebp;
		esi += eax;
		D(esp+8) = esi;
		esi = D(esp);
		if(esi <= D(esp+8)) goto ___759cdh;
		esi = D(esp+8);
		D(esp) = esi;
___759cdh:
		ebp--;
		if(ebp == 0xffffffff) goto ___759dbh;
		esi = D(eax);
		eax += edi;
		edx += esi;
		goto ___759cdh;
___759dbh:
		ecx++;
		eax += edx;
___759deh:
		esi = D(esp+0x10);
		edx = 0;
		X(edx) = W(esi+0x48);
		if((int)ecx < (int)edx) goto ___7599bh;
		if(D(esp+0x34) == 0) goto ___75a38h;
		eax = D(esp+4);
		eax <<= 2;
		eax = ___5f26ch_cdecl(eax);
		D(___24e9b0h) = eax;
		eax = D(___24e9ach);
		eax <<= 2;
		eax = ___5f26ch_cdecl(eax);
		D(___24e9a4h) = eax;
		eax = D(___24e9ach);
		ecx = 0x100;
		eax += eax;
		edx = 0;
		eax = ___5f26ch_cdecl(eax);
		D(___24e9b8h) = eax;
		eax = ___24e8a4h;
		memset(eax, edx, ecx);
___75a38h:
		if(D(esp+0x34) == 0) goto ___75a45h;
		esi = 0;
		D(esp+0x28) = esi;
___75a45h:
		edi = 0;
		ebp = ebx;
		D(esp+0x18) = edi;
		D(esp+0x14) = edi;
		D(esp+0xc) = edi;
		goto ___75befh;
___75a5ah:
		eax = D(ebp+0x1d);
		ebx = D(esp+0x34);
		D(esp+0x20) = eax;
		eax = 0;
		edx = 0;
		X(eax) = W(ebp+0x1b);
		D(esp+0x2c) = edx;
		D(esp+0x30) = eax;
		if(ebx == 0) goto ___75ae6h;
		if(eax) goto ___75a98h;
		edi = D(esp+0x14);
		eax = D(___24e9a4h);
		eax += edi;
		D(eax) = edx;
		eax = D(esp+0x18);
		H(edx) = 0;
		B(eax+___24e8a4h) = H(edx);
		goto ___75ad4h;
___75a98h:
		eax = 0xf5;
		esi = D(esp+0x14);
		eax = ___5f26ch_cdecl(eax);
		edi = D(___24e9a4h);
		edi += esi;
		ecx = 0xf5;
		esi = ebp;
		D(edi) = eax;
		edi = eax;
	memcpy(edi, esi, ecx);
		eax = D(esp+0x18);
		B(eax+___24e8a4h) = 1;
___75ad4h:
		edx = D(esp+0xc);
		eax = D(___24e9b8h);
		eax += edx;
		edx = D(esp+0x28);
		W(eax) = X(edx);
___75ae6h:
		eax = D(esp+0x20);
		ecx = D(esp+0x30);
		eax = (int)eax*(int)ecx;
		ebp += D(ebp);
		edx = eax+ebp;
		esi = D(esp+0x34);
		D(esp+0x1c) = edx;
		if(esi) goto ___75b21h;
		L(eax) = ((int)ecx <= 0);
		eax &= 0xff;
		ecx = D(esp+0x18);
	p_eax = eax;
		eax = D(esp+0x2c);
		ebx = ebp;
		edx += eax;
		eax = esi;
	___7569ch_cdecl(eax, edx, ebx, ecx, p_eax);
___75b21h:
		eax = D(esp+0x28);
		eax <<= 2;
		D(esp+0x24) = eax;
___75b2ch:
		edx = D(esp+0x30);
		edx--;
		D(esp+0x30) = edx;
		if(edx == 0xffffffff) goto ___75bcah;
		if(D(esp+0x34) == 0) goto ___75b92h;
		eax = 0x28;
		ebx = D(esp+0x24);
		eax = ___5f26ch_cdecl(eax);
		edx = eax;
		eax = D(___24e9b0h);
		ecx = 0x28;
		eax += ebx;
		esi = ebp;
		edi = edx;
		D(eax) = edx;
		memcpy(edi, esi, ecx);
		ebx = ebp;
		edx = D(esp+0x1c);
		ecx = D(esp+0x30);
		eax = D(esp+0x34);
		edx += ecx;
		ecx = D(esp+0x28);
		___7569ch_cdecl(eax, edx, ebx, ecx, 0);
___75b92h:
		esi = D(esp+0x2c);
		eax = D(ebp);
		edi = D(esp+0x20);
		esi += eax;
		ebp += edi;
		eax = D(esp+0x34);
		D(esp+0x2c) = esi;
		if(eax == 0) goto ___75b2ch;
		ebx = D(esp+0x28);
		edx = D(esp+0x24);
		ebx++;
		edx += 4;
		D(esp+0x28) = ebx;
		D(esp+0x24) = edx;
		goto ___75b2ch;
___75bcah:
		esi = D(esp+0x14);
		edi = D(esp+0xc);
		eax = D(esp+0x18);
		ecx = D(esp+0x2c);
		esi += 4;
		edi += 2;
		eax++;
		ebp += ecx;
		D(esp+0x14) = esi;
		D(esp+0xc) = edi;
		D(esp+0x18) = eax;
___75befh:
		edx = D(esp+0x10);
		eax = 0;
		edi = D(esp+0x18);
		X(eax) = W(edx+0x48);
		if((int)eax > (int)edi) goto ___75a5ah;
		ebp = D(esp+0x10);
		edx = D(esp);
		eax = ebp;
		edx -= ebp;
		eax = dRally_Memory_resize(eax, edx);
		eax = D(esp+0x34);
		if(eax == 0) goto ___75c27h;
		___5f2b4h_cdecl();
		eax = D(___24e9b4h);
___75c27h:
		return eax;
}

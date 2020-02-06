#include <stdio.h>
#include <string.h>

#pragma pack(1)

typedef unsigned int 	dword;
typedef unsigned short 	word;
typedef unsigned char 	byte;

#define D(d)	(*(dword *)(d))
#define W(w)	(*(word *)(w))
#define B(b)	(*(byte *)(b))

#define X(r)	(*(word *)&r)
#define H(r)	(*((byte *)&r + 1))
#define L(r)	(*(byte *)&r)

extern byte ___24e790h[];
extern byte ___24e794h[];
extern byte ___24e79ch[];
extern byte ___24e7a4h[];
extern byte ___68c38h[];


void ___67994h_cdecl(dword eax, dword edx, dword ebx, dword ecx, dword stk1){

	dword 	esi, edi, ebp;
	byte 	esp[0xc+0x28];

	D(esp+0x30) = stk1;

	ebp = eax;
	D(esp+4) = ecx;
	eax = 0;
	ecx = edx;
	ecx -= ebp;
	esi = eax;
	ecx++;
	if(eax){
		edi = D(___24e790h);
		D(esp+8) = edi;
		edi = D(___24e794h);
		D(esp+8) -= edi;
		edi = D(esp+8);
		D(esp) = edi;
		edi += eax;
		eax--;
		eax = ~eax;
		eax &= edi;
		edi = D(esp);
		edi += ecx;
		if((int)eax < (int)edi){
			edi = D(___24e794h);
			eax += edi;
			eax += 2;
			D(___24e790h) = eax;
		}
		if((int)ecx > (int)esi){
			edx = esi+ebp-4;
			if((int)ebx > (int)edx){
				H(eax) = B(esp+0x30);
				H(eax) &= 0xfc;
				ebx = ebp;
				B(esp+0x30) = H(eax);
			}
			if((int)edx < (int)D(esp+4)) D(esp+4) = edx;
			eax = D(esp+4);
			esi = (int)esi>>6;
			eax -= ebx;
			if((int)eax <= (int)esi) B(esp+0x30) &= 0xfc;
		}
	}
	edi = D(___24e790h);
	esi = ebp;
	memcpy(edi, esi, ecx);
	eax = 0;
	L(eax) = B(___24e7a4h);
	ecx = D(___68c38h);
	eax <<= 2;
	eax += ecx;
	esi = D(eax);
	ecx = D(___24e790h);
	D(esi) = ecx;
	esi = ecx+edx;
	edi = D(eax);
	esi -= ebp;
	D(edi+4) = esi;
	esi = ebx+ecx;
	ebx = D(eax);
	esi -= ebp;
	D(ebx+8) = esi;
	ebx = D(esp+4);
	ebx += ecx;
	esi = D(eax);
	ebx -= ebp;
	edx -= ebp;
	D(esi+0xc) = ebx;
	edx++;
	eax = D(eax);
	L(ebx) = B(esp+0x30);
	ecx += edx;
	B(eax+0x10) = L(ebx);
	L(eax) = L(ebx);
	D(___24e790h) = ecx;
	H(eax) = (L(ebx)&4) ? 1 : 0;
	esi = H(eax);
	esi++;
	edx = esi;
	if(L(ebx)&3){
		L(eax) &= 3;
		if(L(eax) != 1){
			ebx = 0;
			eax = D(___68c38h);
			L(ebx) = B(___24e7a4h);
			eax = D(eax+ebx*4);
			eax = D(eax+0xc);
			eax -= esi;
			esi = eax;
		}
		else {
			eax = 0;
			L(eax) = B(___24e7a4h);
			ebx = eax*4;
			eax = D(___68c38h);
			esi = D(ebx+eax);
			esi = D(esi+8);
		}
	}
	else {
		eax = 0;
		L(eax) = B(___24e7a4h);
		ebx = eax*4;
		eax = D(___68c38h);
		esi = D(ebx+eax);
		esi = D(esi+4);
	}
	edi = D(___24e790h);
	ecx = edx;
	memcpy(edi, esi, ecx);
	ebx = D(___24e790h);
	ebx += edx;
	D(___24e790h) = ebx;
	eax = ebx+3;
	L(eax) &= 0xfc;
	L(edx) = B(___24e7a4h);
	D(___24e790h) = eax;
	eax = 0;
	L(eax) = L(edx);
	L(edx)++;
	B(___24e7a4h) = L(edx);
}


void * dRally_Memory_alloc(dword, dword);
void * dRally_Memory_resize(void * mem, dword size);
void dRally_Memory_free(dword);
void ___677cch_cdecl(dword, dword, dword);

void ___67bbch(dword eax, dword edx, dword ebx, dword ecx){

	dword 	esi, edi, ebp, p_eax;
	byte 	esp[0x3c];

	D(esp+0x1c) = eax;
	D(esp+0x18) = edx;
	D(esp+0x10) = ebx;
	D(esp+0x14) = ecx;
	ebp = D(___24e790h);
	ebp -= D(___24e794h);
	edx = 1;
	eax = ebp;
	eax = dRally_Memory_alloc(eax, edx);
	ecx = ebp;
	ebx = D(___24e794h);
	D(esp+0xc) = eax;
	edi = eax;
	esi = ebx;
	edx = eax;
	memcpy(edi, esi, ecx);
	edx -= ebx;
	ecx = D(___24e794h);
	eax = 0;
	D(esp+4) = edx;
	L(eax) = B(___24e7a4h);
	L(edx) = 1;
	D(esp) = eax;
	if(ecx == 0) goto ___67c37h;
	eax = ecx;
	esi = 0;
	dRally_Memory_free(eax);
	D(___24e794h) = esi;
___67c37h:
	if(L(edx)) goto ___67c45h;
	eax = D(___24e79ch);
	dRally_Memory_free(eax);
___67c45h:
	ebx = 1;
	edx = D(esp);
	eax = ebp;
	___677cch_cdecl(eax, edx, ebx);
	edi = 0;
	ebp = D(esp);
	D(esp+0x24) = edi;
	if((int)ebp <= 0) goto ___67e23h;
	D(esp+0x20) = edi;
___67c69h:
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
	if((int)eax < (int)edi) goto ___67de8h;
	if((int)eax >= (int)D(esp+0x14)) goto ___67de8h;
	if(D(esp+0x1c) == 0) goto ___67d4bh;
	if((B(esp+0x38)&4) == 0) goto ___67d4bh;
	edx = D(esp+0x2c);
	ebx = D(esp+0x34);
	ebp = edx;
	if(edx > ebx) goto ___67d00h;
	ecx = D(esp+0x34);
___67cefh:
	L(ebx) = B(edx+1);
	ebp++;
	L(ebx) ^= 0x80;
	edx += 2;
	B(ebp-1) = L(ebx);
	if(edx <= ecx) goto ___67cefh;
___67d00h:
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
___67d4bh:
	if(D(esp+0x18) == 0) goto ___67de8h;
	edx = D(esp+0x2c);
	L(ecx) = B(esp+0x38);
	ebx = edx;
	L(eax) = (L(ecx)&4) ? 1 : 0;
	eax &= 0xff;
	eax++;
	ecx = D(esp+0x34);
	ebp = eax;
	if(edx > ecx) goto ___67da2h;
	eax += eax;
	D(esp+0x30) = eax;
___67d7ch:
	ecx = ebp;
	esi = edx;
	edi = ebx;
	memcpy(edi, esi, ecx);
	esi = D(esp+0x30);
	edi = D(esp+0x34);
	edx += esi;
	ebx += ebp;
	if(edx <= edi) goto ___67d7ch;
___67da2h:
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
___67de8h:
	eax = 0;
	ecx = D(esp+0x28);
	L(eax) = B(esp+0x38);
	ebx = D(esp+8);
	p_eax = eax;
	edx = D(esp+0x34);
	eax = D(esp+0x2c);
	___67994h_cdecl(eax, edx, ebx, ecx, p_eax);
	eax = D(esp+0x20);
	edx = D(esp+0x24);
	ebx = D(esp);
	eax += 4;
	edx++;
	D(esp+0x20) = eax;
	D(esp+0x24) = edx;
	if((int)edx < (int)ebx) goto ___67c69h;
___67e23h:
	dRally_Memory_free(D(esp+0xc));
	dRally_Memory_resize(D(___24e794h), D(___24e790h)-D(___24e794h)); 
}

extern byte ___19a279h[];

void ___6879ch_cdecl(void){

	if(B(___19a279h)) B(___19a279h) = 0;
}

extern byte ___688d0h[];
extern byte ___68910h[];
extern byte ___68990h[];
extern byte ___68a10h[];
extern byte ___68b10h[];
extern byte ___68b30h[];

void ___68c42h_cdecl(void){

	dword 	n;

	n = -1;
	while(++n < 0x20){

		W(n*2+___688d0h) = 0xffff;
		D(n*4+___68910h) = 0;
		D(n*4+___68990h) = 0;
		D(n*4+___68a10h) = 0;
		B(n+___68b10h) = 1;
		D(n*4+___68b30h) = 0;
	}
}

extern byte ___24e864h[];
extern byte ___24e850h[];
extern byte ___24e798h[];

void ___71608h_cdecl(dword eax, dword edx, dword ebx, dword ecx){

	dword 	esi, edi, ebp, p_eax;
	long long ll_tmp;
	byte 	esp[0x10];

		D(esp) = eax;
		eax = edx+ebx;
		ebx = 0;
		X(ebx) = W(eax+0xe);
		ebx <<= 4;
		edi = edx+ebx;
		edx = D(eax+0x14);
		edx += edi;
		esi = D(eax+0x10);
		edx--;
		D(esp+4) = edi;
		D(esp+8) = edx;
		edx = D(eax+0x18);
		esi += edi;
		edi += edx;
		L(edx) = B(eax+0x1f);
		esi--;
		L(edx) &= 1;
		edi--;
		B(esp+0xc) = L(edx);
		if((L(edx)&3) == 0) goto ___71651h;
		if((int)esi < (int)edi) goto ___7164fh;
		esi = edi;
___7164fh:
		edi = esi;
___71651h:
		ebx = D(esp);
		ebp = ecx*4;
		if(ebx == 0) goto ___71696h;
		edx = D(___24e864h);
		ecx += edx;
		L(edx) = B(eax+0x1c);
		B(ecx+1) = L(edx);
		edx = D(___24e850h);
		eax = D(eax+0x20);
		D(edx+ebp+4) = eax;
		eax = D(___24e798h);
		D(eax+ebp+4) = 0;
		eax = D(___24e79ch);
		D(eax+ebp+4) = 0;
		goto ___716ddh;
___71696h:
		edx = 0;
		L(edx) = B(eax+0x1c);
		ebx = edx;
		edx = D(___24e798h);
		ebx <<= 0xa;
		D(edx+ebp+4) = ebx;
		ebx = 0x6cc;
		ecx = D(eax+0x20);
		eax = 0;
		if(ebx == 0) goto ___716d3h;
		eax = 0x6d3b;
		ll_tmp = (int)eax * (int)ecx;
		eax = ll_tmp;
		edx = ll_tmp>>0x20;
		edx = (edx<<0xd)|(eax>>0x13);
		eax <<= 0xd;
		ebx = (int)ebx * (int)0x5780;
		ll_tmp = edx;
		ll_tmp <<= 0x20;
		ll_tmp |= eax;
		eax = ll_tmp/(int)ebx;
		edx = ll_tmp%(int)ebx;
		eax = (eax>>1)+(eax&1);
___716d3h:
		edx = D(___24e79ch);
		D(edx+ebp+4) = eax;
___716ddh:
		eax = 0;
		ebx = D(esp+8);
		L(eax) = B(esp+0xc);
		ecx = edi;
		p_eax = eax;
		edx = esi;
		eax = D(esp+4);
		___67994h_cdecl(eax, edx, ebx, ecx, p_eax);
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
extern byte ___19a469h[];
extern byte ___19a46ah[];

dword ___71a44h_cdecl(void){

	dword 	rslt;

	if(B(SOUND_TYPE)&&B(___19a27bh)&&B(___19a469h)){

		rslt = B(___19a469h)-1;
		rslt <<= 8;
		rslt += B(___19a46ah);

		return rslt&0xffff;
	}

	return 0xffffffff;
}

extern byte ___19a46ch[];

byte ___71a88h_cdecl(dword eax){

	if(B(SOUND_TYPE)&&B(___19a27bh)){

		D(___19a46ch) = eax;
		return 1;
	}

	return 0;
}

void ___6ef2ch(void);
void SET_AUDIO_DATA_CB(void (*)(void));
void ___685a4h_cdecl(void);

extern byte ___68a8ch[];
extern byte MSX_struct_content_ptr[];
extern byte ___19a280h[];
extern byte ___19a281h[];
extern byte ___19a468h[];
extern byte ___24e86fh[];
extern byte ___24e870h[];
extern byte ___24e871h[];
extern byte ___68c40h[];
extern byte ___68a90h[];
extern byte ___24e830h[];
extern byte ___24e750h[];
byte get___19a468h(void);
//extern volatile byte volatile___19a468h;

void ___718ech_cdecl(void){

	dword		eax, ebx, ecx, edx, esi, edi, ebp;
	long long	 ll_tmp;

		ecx = 0;
		if(B(SOUND_TYPE) == 0) goto ___71a2fh;
		if(B(___19a27bh) == 0) goto ___71a2fh;
		if(B(___19a280h) != 0) goto ___71a2fh;
		edx = D(MSX_struct_content_ptr);
		if(edx == 0) goto ___71a2fh;
		B(___19a468h) = 1;
		eax = edx;
		L(edx) = B(edx+0x30);
		B(___24e870h) = L(edx);
		L(edx) = B(eax+0x31);
		L(eax) = B(eax+0x32);
		B(___24e86fh) = L(eax);
		esi = L(eax);
		eax = 0x7a12;
		B(___24e871h) = L(edx);
		edx = eax;
		edx = (int)edx>>0x1f;
		ll_tmp = edx;
		ll_tmp <<= 0x20;
		ll_tmp |= eax;
		eax = ll_tmp/(int)eax;
		edx = ll_tmp%(int)edx;
		edi = D(___24e860h);
		W(___68c40h) = X(eax);
		edx = 0;
		eax = 0;
___7196ch:
		esi = D(___24e858h);
		esi += eax;
		H(ebx) = B(esi);
		if(H(ebx) > 0xf) goto ___719bfh;
		if(H(ebx) > 7) goto ___7198ch;
		D(edx+___68a90h) = 0x3000;
		goto ___71996h;
___7198ch:
		D(edx+___68a90h) = 0xc000;
___71996h:
		if(edi == 0) goto ___719b3h;
		esi = edi+eax;
		L(ebx) = B(esi);
		if((L(ebx)&0x20) == 0) goto ___719b3h;
		L(ebx) &= 0xf;
		esi = L(ebx);
		esi <<= 0xc;
		D(edx+___68a90h) = esi;
___719b3h:
		edx += 4;
		B(eax+___24e830h) = L(ecx);
		ecx++;
		goto ___719c6h;
___719bfh:
		B(eax+___24e830h) = 0xff;
___719c6h:
		eax++;
		if((int)eax < 0x20) goto ___7196ch;
		ebp = 0x8000;
		eax = ecx*4;
___719d8h:
		if((int)eax >= 0x80) goto ___719ebh;
		eax += 4;
		ecx++;
		D(eax+___68a8ch) = ebp;
		goto ___719d8h;
___719ebh:
		ecx = 0x40;
		edx = 0xffffffff;
		eax = ___24e750h;
		memset(eax, edx, ecx);
		H(ebx) = 0;
		eax = ___6ef2ch;
		L(ecx) = 1;
	SET_AUDIO_DATA_CB(eax);
	___685a4h_cdecl();
		B(___19a281h) = H(ebx);
		B(___19a280h) = L(ecx);
		if(L(ecx) != get___19a468h()) goto ___71a2fh;
		//if(L(ecx) != volatile___19a468h) goto ___71a2fh;
___71a26h:
		if(get___19a468h() == 1) goto ___71a26h;
		//if(volatile___19a468h == 1) goto ___71a26h;
___71a2fh:   
	return;
}

extern byte ___24e9dah[];
extern byte ___19a724h[];
extern byte ___19a804h[];


dword ___71ab0h_cdecl(byte arg1, int arg2){
	
	dword 	edx, ebx, esi;

	if(B(___24e9dah)){

		return 0x1e00 - 0x40*arg1 - arg2/2;
	}

	esi = (arg1%0xc)*8 + arg2/8;
	edx = 4*W(esi*2+___19a724h+2);
	edx = (edx>>(arg1/0xc))*(arg2&7);
	ebx = 4*W(esi*2+___19a724h);
	ebx = (ebx>>(arg1/0xc))*(8-(arg2&7));
	edx += ebx;

	return edx;
}

dword ___71b70h_cdecl(dword eax){

	dword 	ecx;

	if(B(___24e9dah)){

		if(eax > 0x1e00) eax = 0x1e00;
		eax = 0x1e00-eax;
		ecx = 0xa-(eax/0x300);
		eax = 0x1c700*W((eax%0x300)*2+___19a804h);

		return (eax/0x519)>>L(ecx);
	}

	return eax ? ((eax>>1)+0x2820000)/eax : 0;
}

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
		H(ebx) = 1;
		L(ecx) = B(___24e9dah);
		eax = D(___24e798h);
		edx = 0;
		B(___24e9dah) = H(ebx);
		L(edx) = B(edi+0xc);
		ebx = D(esp+4);
		edx <<= 0xa;
		D(eax+ebx*4+4) = edx;
		edx = D(edi+0xa);
		L(eax) = B(edi+0x10);
		edx = (int)edx>>0x18;
		L(eax) += 0x31;
		eax &= 0xff;
		eax = ___71ab0h_cdecl(eax, edx);
		eax = ___71b70h_cdecl(eax);
		edx = D(___24e79ch);
		B(___24e9dah) = L(ecx);
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
		H(eax) = B(___24e9d0h);
		L(eax) = !!(H(eax)&1);
		B(___24e9dah) = L(eax);
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

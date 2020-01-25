typedef unsigned int 	dword;
typedef unsigned short 	word;
typedef unsigned char 	byte;

#define D(d)	(*(dword *)(d))
#define W(w)	(*(word *)(w))
#define B(b)	(*(byte *)(b))

#define X(r)	(*(word *)&r)
#define H(r)	(*((byte *)&r + 1))
#define L(r)	(*(byte *)&r)

extern byte ___68d7ch[];
extern byte ___68e14h[];
extern byte ___68d88h[];
extern byte ___68d84h[];
extern byte ___68d90h[];
extern byte ___68e94h[];
extern byte ___68d94h[];
extern byte ___68d7dh[];
extern byte ___68d48h[];
extern byte ___68d40h[];
extern byte ___68d80h[];

dword ___694c0h_cdecl(dword esi, dword ** edi){

	dword 	n, eax, ebx, ecx, edx, ebp, p_esi;

	p_esi = esi;

		eax = D(___68d7ch);
		ecx = D(esi*4+___68e14h);
		edx = D(___68d88h);
		ebp = D(___68d84h);

		if(B(esi+___68e94h)){

			edx = ~edx;
			ebp = ~ebp;
			edx += 1;
			ebp += !edx;
		}

		esi = D(esi*4+___68d94h);

		while(D(___68d90h)){

			ebx = B(esi+1);
			eax = B(esi);
			ebx -= eax;
			ebx = (ebx<<5)|(ecx>>0x1b);
			H(eax) = B(___68d7dh);
			ebx += D(___68d48h);
			L(eax) += B(ebx+0x1fe0);
			ecx += edx;
			ebx = D(eax*4+D(___68d40h));
			esi += ebp+!!(ecx < edx);
			**edi += ebx;
			(*edi)++;
			D(___68d90h)--;
		}

		D(p_esi*4+___68e14h) = ecx;
		D(p_esi*4+___68d94h) = esi;

		return esi;
}

dword ___69923h_cdecl(dword esi, dword ** edi){

	dword 	n, eax, ebx, ecx, edx, ebp, p_esi;

	p_esi = esi;

		eax = D(___68d7ch);
		ecx = D(esi*4+___68e14h);
		edx = D(___68d88h);
		ebp = D(___68d84h);

		if(B(esi+___68e94h)){
				
			edx = ~edx;
			ebp = ~ebp;
			edx += 1;
			ebp += !edx;
		}

		esi = D(esi*4+___68d94h);

		while(D(___68d90h)){

			ebx = B(esi+1);
			eax = B(esi);
			ebx -= eax;
			ebx = (ebx<<5)|(ecx>>0x1b);
			H(eax) = B(___68d7dh);
			ebx += D(___68d48h);
			L(eax) += B(ebx+0x1fe0);
			ecx += edx;
			ebx = D(eax*4+D(___68d40h));
			esi += ebp+!!(ecx < edx);
			**edi += ebx;
			*(*edi+0x3c0) += ebx;
			(*edi)++;
			D(___68d90h)--;
		}

		D(p_esi*4+___68e14h) = ecx;
		D(p_esi*4+___68d94h) = esi;

		return esi;
}

dword ___69e52h_cdecl(dword esi, dword ** edi){

	dword 	n, eax, ebx, ecx, edx, edx2, ebp, p_esi;

	p_esi = esi;

		eax = D(___68d7ch);
		ecx = D(esi*4+___68e14h);
		edx2 = D(___68d80h);
		ebp = D(___68d84h);
		edx = D(___68d88h);

		if(B(esi+___68e94h)){
				
			edx = ~edx;
			ebp = ~ebp;
			edx += 1;
			ebp += !edx;
		}

		esi = D(esi*4+___68d94h);

		while(D(___68d90h)){

			ebx = B(esi+1);
			eax = B(esi);
			ebx -= eax;
			ebx = (ebx<<5)|(ecx>>0x1b);
			H(eax) = B(___68d7dh);
			ebx += D(___68d48h);
			L(eax) += B(ebx+0x1fe0);
			ecx += edx;
			L(edx2) = L(eax);
			ebx = D(eax*4+D(___68d40h));
			esi += ebp+!!(ecx < edx);
			**edi += ebx;
			ebx = D(edx2*4+D(___68d40h));
			*(*edi+0x3c0) += ebx;
			(*edi)++;
			D(___68d90h)--;
		}

		D(p_esi*4+___68e14h) = ecx;
		D(p_esi*4+___68d94h) = esi;

		return esi;
}

extern byte ___68d5eh[];
extern byte ___68d5ch[];
extern byte ___68d5dh[];
extern byte ___68d68h[];
extern byte ___68d34h[];
extern byte ___68d38h[];
extern byte ___68d60h[];
extern byte ___68d44h[];
extern byte ___68d64h[];

void new___6a600h_cdecl(void){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;

	if(B(___68d5eh)) goto ___6b4d8h;
	if(B(___68d5ch) == 0) goto ___6afdfh;
	if(B(___68d5dh)) goto ___6a850h;
		ebp = D(___68d68h);
		esi = D(___68d34h);
		ecx = D(___68d38h);
		edi = D(___68d60h);
		ebx = 0;
		edx = D(___68d44h);
___6a828h:
		eax = (int)(short)W(esi+2);
		D(esi) = ebx;
		L(eax) = B(edx+eax);
		B(edi+1) = L(eax);
		eax = (int)(short)W(ecx+2);
		D(ecx) = ebx;
		L(eax) = B(edx+eax);
		B(edi) = L(eax);
		edi += 2;
		esi += 4;
		ecx += 4;
		ebp--;
		//jne     ___6a828h
		if(ebp) goto ___6a828h;
		goto ___6bcf7h;
___6a850h:
		ebp = D(___68d68h);
		esi = D(___68d34h);
		ecx = D(___68d38h);
		edi = D(___68d60h);
		ebx = 0;
___6ace5h:
		eax = D(esi);
		edx = D(ecx);
		D(esi) = ebx;
		D(ecx) = ebx;
		if((int)eax < (int)0xffff8000) eax = 0xffff8000;
		if((int)eax > (int)0x7fff) eax = 0x7fff;
		if((int)edx < (int)0xffff8000) edx = 0xffff8000;
		if((int)edx > (int)0x7fff) edx = 0x7fff;
		B(edi+2) = L(eax);
		B(edi) = L(edx);
		B(edi+3) = H(eax);
		B(edi+1) = H(edx);
		edi += 4;
		esi += 4;
		ecx += 4;
		ebp--;
		//jne     ___6ace5h
		if(ebp) goto ___6ace5h;
		goto ___6bcf7h;
___6afdfh:
		//cmp     byte [___68d5dh], 0
		//jne     ___6b109h
		if(B(___68d5dh)) goto ___6b109h;
		ecx = D(___68d68h);
		esi = D(___68d34h);
		edi = D(___68d60h);
		ebx = 0;
		edx = D(___68d44h);
___6b0f1h:
		eax = (int)(short)W(esi+2);
		D(esi) = ebx;
		L(eax) = B(edx+eax);
		B(edi) = L(eax);
		edi += 1;
		esi += 4;
		//loop    ___6b0f1h
		ecx--;
		if(ecx) goto ___6b0f1h;
		goto ___6bcf7h;
___6b109h:
		ebp = D(___68d68h);
		esi = D(___68d34h);
		edi = D(___68d60h);
		ebx = 0;
___6b357h:
		eax = D(esi);
		D(esi) = ebx;
		if((int)eax < (int)0xffff8000) eax = 0xffff8000;
		if((int)eax > (int)0x7fff) eax = 0x7fff;
		B(edi) = L(eax);
		B(edi+1) = H(eax);
		edi += 2;
		esi += 4;
		ebp--;
		//jne     ___6b357h
		if(ebp) goto ___6b357h;
		goto ___6bcf7h;
___6b4d8h:
		ebp = D(___68d68h);
		esi = D(___68d34h);
		ecx = D(___68d38h);
		edi = D(___68d60h);
		ebx = D(___68d64h);
___6b9f3h:
		eax = D(esi);
		edx = D(ecx);
		D(esi) = 0;
		D(ecx) = 0;
		if((int)eax < (int)0xffff8000) eax = 0xffff8000;
		if((int)eax > (int)0x7fff) eax = 0x7fff;
		if((int)edx < (int)0xffff8000) edx = 0xffff8000;
		if((int)edx > (int)0x7fff) edx = 0x7fff;
		B(edi) = L(eax);
		B(ebx) = L(edx);
		B(edi+1) = H(eax);
		B(ebx+1) = H(edx);
		edi += 2;
		ebx += 2;
		esi += 4;
		ecx += 4;
		ebp--;
		//jne     ___6b9f3h
		if(ebp) goto ___6b9f3h;
		goto ___6bcf7h;
___6bcf7h: 
	return;
}

extern byte ___68d60h[];
extern byte ___68d64h[];
extern byte ___68d68h[];
extern byte ___68d6ch[];
extern byte ___68d78h[];
extern byte ___68d72h[];
extern byte S3M_CALLBACK[];
extern byte ___68c34h[];
extern byte ___68c40h[];
extern byte SOUND_SAMPLERATE[];
extern byte ___68d70h[];
extern byte ___68d74h[];
extern byte ___688d0h[];
extern byte ___68d94h[];
extern byte ___68e14h[];
extern byte ___68e94h[];
extern byte ___68b30h[];
extern byte ___68b10h[];
extern byte ___68c38h[];
extern byte ___68910h[];
extern byte ___68a10h[];
extern byte ___68bb0h[];
extern byte ___68d7ch[];
extern byte ___68990h[];
extern byte ___68d30h[];
extern byte ___68d84h[];
extern byte ___68d8ch[];
extern byte ___68d5ch[];
extern byte ___68a90h[];
extern byte ___68d38h[];
extern byte ___68d34h[];
extern byte ___68eb4h[];
extern byte ___68d90h[];
extern byte ___68c3ch[];
dword ___694bch;

void new___6a600h_cdecl(void);
dword ___694c0h_cdecl(dword, dword **);
dword ___69923h_cdecl(dword, dword **);
dword ___69e52h_cdecl(dword, dword **);


void ___691deh_cdecl(dword eax, dword edx, dword edi){

	dword 	ebx, ecx, esi, ebp;
	unsigned long long 	ll_tmp, ll_tmp_sig;

		D(___68d60h) = edi;
		D(___68d64h) = edx;
		D(___68d68h) = eax;
		D(___68d6ch) = eax;
		D(___68d78h) = 0;

___691ffh:
		if(W(___68d72h)) goto ___6923bh;
		(*(void (**)(void))S3M_CALLBACK)();
		(*(void (**)(void))___68c34h)();
		edx = W(___68c40h);
		eax = W(SOUND_SAMPLERATE);
		ll_tmp = (long long)(int)eax * (long long)(int)edx;
		eax = ll_tmp;
		edx = ll_tmp >> 0x20;
		edx = (edx<<0x10)|(eax>>0x10);
		eax <<= 0x10;
		ebx = 0x30d4;
		ll_tmp = edx;
		ll_tmp <<= 0x20;
		ll_tmp |= eax;
		eax = ll_tmp/ebx;
		edx = ll_tmp%ebx;
		D(___68d70h) += eax;
___6923bh:
		eax = W(___68d72h);
		if(eax <= D(___68d6ch)) goto ___6924fh;
		eax = D(___68d6ch);
___6924fh:
		W(___68d72h) -= X(eax);
		D(___68d74h) = eax;
		esi = 0;
___6925dh:
		ebx = W(esi*2+___688d0h);
		if(ebx == 0) goto ___6934dh;
		if(X(ebx) != 0xffff) goto ___6929dh;
___69274h:
		eax = 0;
		D(esi*4+___68d94h) = eax;
		D(esi*4+___68e14h) = eax;
		B(esi+___68e94h) = L(eax);
		D(esi*4+___68b30h) = eax;
		B(esi+___68b10h) = 1;
		goto ___69338h;
___6929dh:
		ebx--;
		ebx <<= 2;
		ebx += D(___68c38h);
		ebx = D(ebx);
		D(esi*4+___68b30h) = ebx;
		B(esi+___68e94h) = 0;
		eax = D(ebx);
		eax += D(esi*4+___68910h);
		L(edx) = B(ebx+0x10);
		L(edx) &= 3;
		if(L(edx)) goto ___692cfh;
		if(eax >= D(ebx+4)) goto ___69274h;
		goto ___69326h;
___692cfh:
		if(L(edx) != 1) goto ___692f1h;
		if(eax < D(ebx+4)) goto ___69326h;
		if(eax <= D(ebx+8)) goto ___69326h;
		eax -= D(ebx+8);
		ebp = D(ebx+4);
		ebp -= D(ebx+8);
		ll_tmp_sig = (long long)(int)eax;
		eax = ll_tmp_sig/(int)ebp;
		edx = ll_tmp_sig%(int)ebp;
		eax = edx;
		eax += D(ebx+8);
		goto ___69326h;
___692f1h:
		if(eax < D(ebx+4)) goto ___69326h;
		if(eax <= D(ebx+8)) goto ___69326h;
		eax -= D(ebx+8);
		ebp = D(ebx+4);
		ebp -= D(ebx+8);
		ebp <<= 1;
		ll_tmp_sig = (long long)(int)eax;
		eax = ll_tmp_sig/(int)ebp;
		edx = ll_tmp_sig%(int)ebp;
		ebp >>= 1;
		if(eax > ebp) goto ___69316h;
		eax = edx;
		eax += D(ebx+8);
		goto ___69326h;
___69316h:
		B(esi+___68e94h) = 1;
		eax = edx;
		eax = 0-eax;
		eax += ebp;
		eax += D(ebx+8);
___69326h:
		D(esi*4+___68d94h) = eax;
		D(esi*4+___68e14h) = 0;
___69338h:
		W(esi*2+___688d0h) = 0;
		D(esi*4+___68910h) = 0;
___6934dh:
		ebx = D(esi*4+___68b30h);
		if(ebx == 0) goto ___6a600h;
		eax = D(esi*4+___68a10h);
		ll_tmp = (long long)(int)eax * (long long)(int)D(esi*4+___68bb0h);
		eax = ll_tmp;
		edx = ll_tmp>>0x20;
		eax = (eax>>0x19)|(edx<<7);
		eax <<= 8;
		if(eax == 0) goto ___6a600h;
		H(eax)--;
		D(___68d7ch) = eax;
		eax = D(esi*4+___68990h);
		ll_tmp = (long long)(int)eax * (long long)(int)D(___68d30h);
		eax = ll_tmp;
		edx = ll_tmp>>0x20;
		D(___68d84h) = edx;
		X(eax) = 0;
		D(___68d88h) = eax;
		eax = (eax>>0x10)|(edx<<0x10);
		D(___68d8ch) = eax;
		edi = D(___68d78h);
		edi <<= 2;
		if((B(___68d5ch)&1) == 0) goto ___693ceh;
		eax = D(esi*4+___68a90h);
		eax >>= 0xc;
		if(eax == 0) goto ___693ceh;
		if(L(eax) < 0xf) goto ___693e0h;
		edi += D(___68d38h);
		goto ___693d4h;
___693ceh:
		edi += D(___68d34h);
___693d4h:
		___694bch = 1;
		goto ___6944dh;
___693e0h:
		if(L(eax) < 7) goto ___6940ch;
		if(L(eax) > 8) goto ___6940ch;
		edi += D(___68d34h);
		eax = (int)D(___68d7ch)*0x96;
		eax >>= 8;
		D(___68d7ch) = eax;
		___694bch = 2;
		goto ___6944dh;
___6940ch:
		edx = B(eax+___68eb4h);
		edx = (int)edx * (int)D(___68d7ch);
		edx >>= 8;
		L(eax) = 0-L(eax);
		L(eax) += 0x10;
		eax = B(eax+___68eb4h);
		eax = (int)eax * (int)D(___68d7ch);
		eax >>= 8;
		D(___68d7ch) = edx;
		D(___68d80h) = eax;
		edi += D(___68d34h);
		___694bch = 3;
		goto ___6944dh;



___6944dh:
		ecx = D(___68d74h);
___69453h:
		if(B(esi+___68e94h) == 0) goto ___69468h;
		eax = D(esi*4+___68d94h);
		eax -= D(ebx+8);
		goto ___69472h;
___69468h:
		eax = D(ebx+4);
		eax -= D(esi*4+___68d94h);
___69472h:
		if((int)eax >= 0) goto ___69476h;
		eax = 0;
___69476h:
		edx = 0;
		if(D(___68d8ch) == edx) goto ___694afh;
		edx = (edx<<0x10)|(eax>>0x10);
		eax <<= 0x10;
		X(eax) = W(esi*4+___68e14h);
		if(B(esi+___68e94h)) goto ___6949bh;
		X(eax) = 0-X(eax);
___6949bh:
		ll_tmp = edx;
		ll_tmp <<= 0x20;
		ll_tmp |= eax;
		eax = ll_tmp/D(___68d8ch);
		edx = ll_tmp%D(___68d8ch);
		eax++;
		D(___68d90h) = eax;
		if(D(___68d90h) <= ecx) goto ___694b5h;
___694afh:
		D(___68d90h) = ecx;
___694b5h:
		ecx -= D(___68d90h);

		switch(___694bch){
		case 1:
			eax = ___694c0h_cdecl(esi, &edi);
			break;
		case 2:
			eax = ___69923h_cdecl(esi, &edi);
			break;
		case 3:
			eax = ___69e52h_cdecl(esi, &edi);
			break;
		default:
			//printf("[dRally.___691deh_cdecl] I shouldn't get here!!!\n");
			///////		eax = esi;
			///////		pop     ebx
			///////		pop     esi
			///////		mov     [esi*4+___68e14h], ecx
			///////		D(esi*4+___68d94h) = eax;
			///////		pop     ecx
			///////		jmp 	new___6a550h
			break;
		}

		if(ecx == 0) goto ___6a600h;
		if((B(ebx+0x10)&3) == 0) goto ___6a5e2h;
		if((B(ebx+0x10)&2) != 0) goto ___6a589h;
		eax -= D(ebx+0xc);
		eax += D(ebx+8);
		D(esi*4+___68d94h) = eax;
		goto ___69453h;
___6a589h:
		if(B(esi+___68e94h)) goto ___6a5b5h;
		eax -= D(ebx+0xc);
		D(esi*4+___68e14h) = ~D(esi*4+___68e14h);
		eax = ~eax;
		D(esi*4+___68e14h) += 1;
		eax += 1+!D(esi*4+___68e14h);
		eax += D(ebx+0xc);
		D(esi*4+___68d94h) = eax;
		goto ___6a5d6h;
___6a5b5h:
		eax -= D(ebx+8);
		D(esi*4+___68e14h) = ~D(esi*4+___68e14h);
		eax = ~eax;
		D(esi*4+___68e14h) += 1;
		//adc     eax, byte 1
		eax += 1+!D(esi*4+___68e14h);
		eax += D(ebx+8);
		D(esi*4+___68d94h) = eax;
___6a5d6h:
		B(esi+___68e94h) ^= 1;
		goto ___69453h;
___6a5e2h:
		eax = 0;
		D(esi*4+___68d94h) = eax;
		D(esi*4+___68e14h) = eax;
		D(esi*4+___68b30h) = eax;
		B(esi+___68b10h) = 1;
___6a600h:
		esi++;
		if(esi <= D(___68c3ch)) goto ___6925dh;
		eax = D(___68d74h);
		D(___68d78h) += eax;
		D(___68d6ch) -= eax;
		if(D(___68d6ch)) goto ___691ffh;

	new___6a600h_cdecl();
}

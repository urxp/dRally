typedef unsigned int 	dword;
typedef unsigned short 	word;
typedef unsigned char 	byte;

#define D(d)	(*(dword *)(d))
#define W(w)	(*(word *)(w))
#define B(b)	(*(byte *)(b))

#define X(r)	(*(word *)&r)
#define H(r)	(*((byte *)&r + 1))
#define L(r)	(*(byte *)&r)

extern byte ___19a468h[];

// has to be in separate object to avoid being "optimized out"
byte get___19a468h(void){

    return B(___19a468h);
}

extern byte ___19a281h[];
extern byte ___19a469h[];
extern byte ___19a53dh[];
extern byte ___19a53ch[];
extern byte ___19a46ah[];
extern byte ___19a53eh[];
extern byte ___19a540h[];
extern byte ___19a53fh[];
extern byte ___19a684h[];
extern byte ___19a685h[];
extern byte ___19a686h[];
extern byte ___19a5e2h[];
extern byte ___24e87eh[];
extern byte ___19a542h[];
extern byte ___19a562h[];
extern byte ___19a582h[];
extern byte ___19a592h[];
extern byte ___19a5a2h[];
extern byte ___19a5b2h[];
extern byte ___19a5c2h[];
extern byte ___19a5d2h[];
extern byte ___19a5e4h[];
extern byte ___19a5f4h[];
extern byte ___19a604h[];
extern byte ___19a624h[];
extern byte ___19a644h[];
extern byte ___24e880h[];
extern byte ___19a664h[];
extern byte ___19a674h[];
extern byte ___19a46ch[];
extern byte ___24e7a6h[];
extern byte ___24e7a5h[];
extern byte SFX_struct_content_ptr[];
extern byte ___24e86eh[];
extern byte ___24e85ch[];
extern byte ___19a279h[];
extern byte ___24e872h[];
extern byte ___688d0h[];
extern byte ___68910h[];
extern byte ___68990h[];
extern byte ___68a10h[];
extern byte ___24e854h[];
extern byte ___24e8a0h[];
extern byte ___24e87fh[];
extern byte ___24e87dh[];
extern byte ___24e830h[];
extern byte ___24e87ah[];
extern byte ___24e7a0h[];
extern byte ___24e87ch[];
extern byte ___24e879h[];
extern byte ___24e878h[];
extern byte ___19a484h[];
extern byte ___24e864h[];
extern byte ___24e86fh[];
extern byte ___24e871h[];
extern byte ___68c40h[];
extern byte ___24e850h[];
extern byte ___19a470h[];
extern byte ___19a474h[];
extern byte ___19a49ch[];
extern byte ___68a90h[];
extern byte ___19a478h[];
extern byte ___19a47ch[];
extern byte ___19a480h[];
extern byte ___24e870h[];
extern byte ___19a5e0h[];
extern byte ___19a4bah[];
extern byte ___24e874h[];
extern byte ___19a4bch[];


void ___68c42h_cdecl(void);
dword rand_(void);

void ___6ef2ch(void){

    dword   eax, ebx, ecx, edx, esi, edi, ebp;
    long long   ll_tmp;

//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
		H(eax) = B(___19a281h);
		//test    ah, ah
		//jne     near ___71588h
        if(H(eax)) goto ___71588h;
		//cmp     byte [___19a468h], 0
		//je      near ___6f02fh
        if(B(___19a468h) == 0) goto ___6f02fh;
		B(___19a469h) = H(eax);
		L(ebx) = 1;
		B(___19a53dh) = H(eax);
		B(___19a53ch) = L(ebx);
		H(ebx) = 0;
		B(___19a46ah) = H(eax);
		B(___19a53eh) = H(eax);
		B(___19a540h) = L(ebx);
		L(eax) = 0;
		L(ebx) = 0;
		B(___19a53fh) = H(eax);
		B(___19a684h) = H(eax);
		B(___19a685h) = H(eax);
		B(___19a686h) = H(eax);
		W(___19a5e2h) = X(eax);
		B(___24e87eh) = H(eax);
___6ef9dh:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(ecx) = L(eax);
		W(eax*2+___19a542h) = X(ebx);
		W(eax*2+___19a562h) = X(ebx);
		B(eax+___19a582h) = L(ebx);
		B(eax+___19a592h) = L(ebx);
		B(eax+___19a5a2h) = L(ebx);
		B(eax+___19a5b2h) = L(ebx);
		B(eax+___19a5c2h) = L(ebx);
		B(eax+___19a5d2h) = L(ebx);
		B(eax+___19a5e4h) = L(ebx);
		B(eax+___19a5f4h) = L(ebx);
		W(eax*2+___19a604h) = X(ebx);
		W(eax*2+___19a624h) = X(ebx);
		W(eax*2+___19a644h) = X(ebx);
		W(eax*2+___24e880h) = X(ebx);
		B(eax+___19a664h) = L(ebx);
		L(ecx)++;
		B(eax+___19a674h) = L(ebx);
		B(___24e87eh) = L(ecx);
		//cmp     cl, 10h
		//jne     near ___6ef9dh
        if(L(ecx) != 0x10) goto ___6ef9dh;

	//push 	edx
	//push 	ecx
	//push 	eax
	//	call    near ___68c42h_cdecl
        ___68c42h_cdecl();
	//pop 	eax
	//pop 	ecx
	//pop 	edx
	
		L(eax) = 0;
		B(___19a468h) = L(eax);
___6f02fh:
		edx = D(___19a46ch);
		//cmp     edx, byte 0ffffffffh
		//je      short ___6f079h
        if(edx == 0xffffffff) goto ___6f079h;
		eax = edx;
		eax = (int)eax>>8;
		eax &= 0xff;
		B(___19a469h) = L(eax);
		L(eax) = B(___19a46ch);
		B(___19a53fh) = L(eax);
		//cmp     al, 3fh
		//jbe     short ___6f05eh
        if(L(eax) <= 0x3f) goto ___6f05eh;
		B(___19a53fh) = 0x3f;
___6f05eh:
		L(ebx) = 0;
		H(edx) = 1;
		B(___19a53dh) = L(ebx);
		ebx = 0xffffffff;
		B(___19a53ch) = H(edx);
		D(___19a46ch) = ebx;
___6f079h:
		//cmp     byte [___19a53eh], 0
		//jne     near ___70119h
        if(B(___19a53eh) != 0) goto ___70119h;
		//cmp     byte [___24e7a6h], 0
		//jne     near ___70119h
        if(B(___24e7a6h) != 0) goto ___70119h;
		H(ecx) = 1;
		B(___24e7a5h) = H(ecx);
		//cmp     ch, [___19a53ch]
		//jne     near ___6f2b8h
        if(H(ecx) != B(___19a53ch)) goto ___6f2b8h;
		ecx = 0xffff;
		esi = D(SFX_struct_content_ptr);
		ebx = 0;
___6f0b4h:
		//cmp     bl, [___19a53dh]
		//jne     near ___6f1cch
        if(L(ebx) != B(___19a53dh)) goto ___6f1cch;
		L(eax) = B(___19a469h);
		//cmp     al, [___24e86eh]
		//jae     short ___6f0e4h
        if(L(eax) >= B(___24e86eh)) goto ___6f0e4h;
		eax = 0;
		L(eax) = B(___19a469h);
		edx = D(___24e85ch);
		//cmp     byte [edx+eax*1], 0ffh
		//jne     near ___6f1cch
        if(B(edx+eax) != 0xff) goto ___6f1cch;
___6f0e4h:
		B(___19a468h) = L(ebx);
		//cmp     ebx, esi
		//je      short ___6f0f8h
        if(ebx == esi) goto ___6f0f8h;
		eax = D(___19a279h);
		eax = (int)eax>>0x18;
		//jmp     short ___6f0fdh
        goto ___6f0fdh;
___6f0f8h:
		eax = 0x10;
___6f0fdh:
		B(___24e87eh) = L(ebx);
		B(___24e872h) = L(eax);
		//cmp     bl, al
		//jae     near ___6f1b3h
        if(L(ebx) >= L(eax)) goto ___6f1b3h;
___6f110h:
		eax = 0;
		L(eax) = B(___24e87eh);
		W(eax*2+___19a542h) = X(ebx);
		W(eax*2+___19a562h) = X(ebx);
		B(eax+___19a582h) = L(ebx);
		B(eax+___19a592h) = L(ebx);
		B(eax+___19a5a2h) = L(ebx);
		B(eax+___19a5b2h) = L(ebx);
		B(eax+___19a5c2h) = L(ebx);
		B(eax+___19a5d2h) = L(ebx);
		B(eax+___19a5e4h) = L(ebx);
		B(eax+___19a5f4h) = L(ebx);
		W(eax*2+___19a604h) = X(ebx);
		W(eax*2+___19a624h) = X(ebx);
		W(eax*2+___19a644h) = X(ebx);
		W(eax*2+___24e880h) = X(ebx);
		B(eax+___19a664h) = L(ebx);
		B(eax+___19a674h) = L(ebx);
		W(eax*2+___688d0h) = X(ecx);
		D(eax*4+___68910h) = ebx;
		D(eax*4+___68990h) = ebx;
		D(eax*4+___68a10h) = ebx;
		L(eax)++;
		B(___24e87eh) = L(eax);
		//cmp     al, [___24e872h]
		//jb      near ___6f110h
        if(L(eax) < B(___24e872h)) goto ___6f110h;
___6f1b3h:
		B(___19a685h) = L(ebx);
		B(___19a686h) = L(ebx);
		W(___19a5e2h) = X(ebx);
		B(___19a684h) = L(ebx);
___6f1cch:
		//cmp     bl, [___19a53dh]
		//jne     short ___6f1f7h
        if(L(ebx) != B(___19a53dh)) goto ___6f1f7h;
		eax = 0;
		L(eax) = B(___19a469h);
		edx = D(___24e85ch);
		//cmp     byte [edx+eax*1], 0feh
		//jne     short ___6f20ah
        if(B(edx+eax) != 0xfe) goto ___6f20ah;
		L(eax) = B(___19a469h);
		B(___19a469h)++;
		//jmp     near ___6f0b4h
        goto ___6f0b4h;
___6f1f7h:
		L(eax) = B(___19a469h);
		B(___19a469h)--;
		L(ebx) = 0;
		B(___19a53dh) = L(ebx);
___6f20ah:
		L(eax) = B(___19a469h);
		B(___19a469h)++;
		edx = 0;
		L(edx) = L(eax);
		eax = D(___24e85ch);
		L(eax) = B(edx+eax);
		edx = D(___24e854h);
		eax &= 0xff;
		eax = D(edx+eax*4);
		L(ecx) = 0;
		D(___24e8a0h) = eax;
		B(___19a46ah) = L(ecx);
		L(eax) = B(___19a53fh);
		B(___19a53ch) = L(ecx);
		//test    al, al
		//jbe     near ___6f2b8h
        if(L(eax) <= 0) goto ___6f2b8h;
		ebx = 2;
		H(edx) = 0;
___6f256h:
		eax = D(___24e8a0h);
		L(edx) = B(eax);
		eax++;
		B(___24e87fh) = L(edx);
		D(___24e8a0h) = eax;
		//cmp     dh, dl
		//je      short ___6f29bh
        if(H(edx) == L(edx)) goto ___6f29bh;
		//test    dl, 20h
		//je      short ___6f27bh
        if((L(edx)&0x20) == 0) goto ___6f27bh;
		edi = eax+ebx;
		D(___24e8a0h) = edi;
___6f27bh:
		//test    byte [___24e87fh], 40h
		//je      short ___6f28ah
        if((B(___24e87fh)&0x40) == 0) goto ___6f28ah;
		D(___24e8a0h)++;
___6f28ah:
		//test    byte [___24e87fh], 80h
		//je      short ___6f256h
        if((B(___24e87fh)&0x80) == 0) goto ___6f256h;
		D(___24e8a0h) += ebx;
		//jmp     short ___6f256h
        goto ___6f256h;
___6f29bh:
		L(ecx) = B(___19a53fh);
		L(ecx)--;
		B(___19a53fh) = L(ecx);
		L(eax) = B(___19a46ah);
		B(___19a46ah)++;
		//cmp     dl, cl
		//jb      short ___6f256h
        if(L(edx) < L(ecx)) goto ___6f256h;
___6f2b8h:
		H(ecx) = 0;
		B(___24e87eh) = H(ecx);
___6f2c0h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(edx) = 0;
		B(eax+___19a592h) = L(edx);
		H(edx) = L(eax);
		H(edx)++;
		B(___24e87eh) = H(edx);
		//cmp     dh, 10h
		//jne     short ___6f2c0h
        if(H(edx) != 0x10) goto ___6f2c0h;
		esi = 0x7a12;
___6f2e3h:
		eax = D(___24e8a0h);
		L(edx) = B(eax);
		eax++;
		B(___24e87fh) = L(edx);
		D(___24e8a0h) = eax;
		//test    dl, dl
		//je      near ___700ech
        if(L(edx) == 0) goto ___700ech;
		L(eax) = L(edx);
		L(eax) &= 0x1f;
		eax &= 0xff;
		H(edx) = 0;
		ebx = 0;
		B(___24e87dh) = H(edx);
		L(eax) = B(eax+___24e830h);
		W(___24e87ah) = X(ebx);
		B(___24e87eh) = L(eax);
		//cmp     al, 0ffh
		//jne     short ___6f359h
        if(L(eax) != 0xff) goto ___6f359h;
		//test    dl, 20h
		//je      short ___6f333h
        if((L(edx)&0x20) == 0) goto ___6f333h;
		D(___24e8a0h) += 2;
___6f333h:
		//test    byte [___24e87fh], 40h
		//je      short ___6f342h
        if((B(___24e87fh)&0x40) == 0) goto ___6f342h;
		D(___24e8a0h)++;
___6f342h:
		//test    byte [___24e87fh], 80h
		//je      short ___6f352h
        if((B(___24e87fh)&0x80) == 0) goto ___6f352h;
		D(___24e8a0h) += 2;
___6f352h:
		L(eax) = 0;
		B(___24e87fh) = L(eax);
___6f359h:
		//test    byte [___24e87fh], 20h
		//je      short ___6f3bbh
        if((B(___24e87fh)&0x20) == 0) goto ___6f3bbh;
		eax = D(___24e8a0h);
		L(edx) = B(eax);
		eax++;
		B(___24e87dh) = L(edx);
		D(___24e8a0h) = eax;
		//cmp     dl, 0feh
		//jne     short ___6f38bh
        if(L(edx) != 0xfe) goto ___6f38bh;
		eax = 0;
		L(eax) = B(___24e87eh);
		W(eax*2+___688d0h) = 0xffff;
___6f38bh:
		eax = D(___24e8a0h);
		H(edx) = 0;
		L(edx) = B(eax);
		ebx = 0;
		W(___24e87ah) = X(edx);
		L(ebx) = L(edx);
		edx = D(___24e7a0h);
		eax++;
		edx = (int)edx>>0x10;
		D(___24e8a0h) = eax;
		//cmp     ebx, edx
		//jle     short ___6f3bbh
        if((int)ebx <= (int)edx) goto ___6f3bbh;
		edi = 0;
		W(___24e87ah) = X(edi);
___6f3bbh:
		//test    byte [___24e87fh], 40h
		//je      short ___6f3d7h
        if((B(___24e87fh)&0x40) == 0) goto ___6f3d7h;
		eax = D(___24e8a0h);
		L(edx) = B(eax);
		eax++;
		B(___24e87ch) = L(edx);
		D(___24e8a0h) = eax;
___6f3d7h:
		//test    byte [___24e87fh], 80h
		//je      near ___6f582h
        if((B(___24e87fh)&0x80) == 0) goto ___6f582h;
		eax = D(___24e8a0h);
		eax++;
		L(edx) = B(eax-1);
		D(___24e8a0h) = eax;
		eax++;
		B(___24e879h) = L(edx);
		L(edx) = B(eax-1);
		D(___24e8a0h) = eax;
		L(eax) = B(___24e879h);
		B(___24e878h) = L(edx);
		//cmp     al, 7
		//jb      near ___6f582h
        if(L(eax) < 7) goto ___6f582h;
		//jbe     short ___6f423h
        if(L(eax) <= 7) goto ___6f423h;
		//cmp     al, 13h
		//je      near ___6f505h
        if(L(eax) == 0x13) goto ___6f505h;
		//jmp     near ___6f582h
        goto ___6f582h;
___6f423h:
		//test    dl, dl
		//jne     short ___6f439h
        if(L(edx)) goto ___6f439h;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5a2h);
		B(___24e878h) = L(eax);
___6f439h:
		//cmp     byte [___24e87dh], 0
		//je      near ___6f4dch
        if(B(___24e87dh) == 0) goto ___6f4dch;
		//cmp     word [___24e87ah], byte 0
		//jne     short ___6f481h
        if(W(___24e87ah) != 0) goto ___6f481h;
		eax = 0;
		L(eax) = B(___24e87eh);
		//cmp     word [NoSplit eax*2+___19a542h], byte 0
		//jne     short ___6f481h
        if(W(eax*2+___19a542h) != 0) goto ___6f481h;
		L(ecx) = 0;
		L(eax) = B(___24e87fh);
		B(___24e878h) = L(ecx);
		L(eax) &= 0xdf;
		B(___24e879h) = L(ecx);
		B(___24e87fh) = L(eax);
		//jmp     near ___6f582h
        goto ___6f582h;
___6f481h:
		L(eax) = B(___24e87dh);
		L(eax) &= 0xf;
		eax &= 0xff;
		X(eax) = W(eax*2+___19a484h);
		ecx = 0;
		L(ecx) = B(___24e87dh);
		eax &= 0xffff;
		ecx = (int)ecx>>4;
		eax = (int)eax>>L(ecx);
		edx = eax;
		eax = 0;
		L(ebx) = 0;
		L(eax) = B(___24e87eh);
		B(___24e87dh) = L(ebx);
		X(ebx) = W(___24e87ah);
		W(eax*2+___19a644h) = X(edx);
		//test    bx, bx
		//jne     near ___6f582h
        if(X(ebx)) goto ___6f582h;
		B(___24e87fh) &= 0xdf;
		//jmp     near ___6f582h
        goto ___6f582h;
___6f4dch:
		eax = 0;
		L(eax) = B(___24e87eh);
		//cmp     word [NoSplit eax*2+___19a644h], byte 0
		//jne     near ___6f582h
        if(W(eax*2+___19a644h) != 0) goto ___6f582h;
		L(edx) = 0;
		B(___24e878h) = L(edx);
		B(___24e879h) = L(edx);
		//jmp     near ___6f582h
        goto ___6f582h;
___6f505h:
		eax = 0;
		L(eax) = L(edx);
		eax = (int)eax>>4;
		//cmp     eax, byte 0dh
		//jne     short ___6f582h
        if(eax != 0xd) goto ___6f582h;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(edx) &= 0xf;
		B(eax+___19a5e4h) = L(edx);
		//test    dl, dl
		//setnz   dl
        L(edx) = !!L(edx);
		edx &= 0xff;
		//je      short ___6f535h
        if(edx == 0) goto ___6f535h;
		B(eax+___19a5e4h) = 0xf;
___6f535h:
		H(eax) = 0;
		L(eax) = B(___24e87fh);
		edx = eax;
		L(eax) = B(___24e87ch);
		edx <<= 8;
		edx += eax;
		eax = 0;
		L(eax) = B(___24e87eh);
		W(eax*2+___19a604h) = X(edx);
		H(edx) = 0;
		X(ebx) = W(___24e87ah);
		L(edx) = B(___24e87dh);
		H(ecx) = B(___24e87fh);
		edx <<= 8;
		H(ecx) &= 0x9f;
		edx += ebx;
		B(___24e87fh) = H(ecx);
		W(eax*2+___19a624h) = X(edx);
___6f582h:
		//test    byte [___24e87fh], 20h
		//je      near ___6f68bh
        if((B(___24e87fh)&0x20) == 0) goto ___6f68bh;
		X(ecx) = W(___24e87ah);
		//test    cx, cx
		//jne     near ___6f616h
        if(X(ecx)) goto ___6f616h;
		eax = 0;
		L(eax) = B(___24e87eh);
		X(eax) = W(eax*2+___19a542h);
		edx = 0;
		W(___24e87ah) = X(eax);
		X(edx) = X(eax);
		eax = D(___24e7a0h);
		eax = (int)eax>>0x10;
		//cmp     edx, eax
		//jle     short ___6f5e5h
        if((int)edx <= (int)eax) goto ___6f5e5h;
		L(ebx) = 0;
		B(___24e87dh) = L(ebx);
		H(ebx) = B(___24e87fh);
		H(ebx) &= 0xdf;
		W(___24e87ah) = X(ecx);
		B(___24e87fh) = H(ebx);
		//jmp     short ___6f639h
        goto ___6f639h;
___6f5e5h:
		L(edx) = B(___24e87dh);
		//cmp     dl, 0ffh
		//je      short ___6f5f4h
        if(L(edx) == 0xff) goto ___6f5f4h;
		//test    dl, dl
		//jne     short ___6f639h
        if(L(edx)) goto ___6f639h;
___6f5f4h:
		eax = 0;
		edx = D(___24e864h);
		X(eax) = W(___24e87ah);
		eax += edx;
		edx = 0;
		L(edx) = B(___24e87eh);
		L(eax) = B(eax);
		B(edx+___19a582h) = L(eax);
		//jmp     short ___6f639h
        goto ___6f639h;
___6f616h:
		eax = 0;
		edx = 0;
		L(eax) = B(___24e87eh);
		ebx = D(___24e864h);
		X(edx) = X(ecx);
		W(eax*2+___19a542h) = X(ecx);
		L(edx) = B(edx+ebx);
		B(eax+___19a582h) = L(edx);
___6f639h:
		L(ecx) = B(___24e87dh);
		//cmp     cl, 0ffh
		//je      short ___6f68bh
        if(L(ecx) == 0xff) goto ___6f68bh;
		//test    cl, cl
		//je      short ___6f68bh
        if(L(ecx) == 0) goto ___6f68bh;
		L(eax) = L(ecx);
		L(eax) &= 0xf;
		eax &= 0xff;
		X(eax) = W(eax*2+___19a484h);
		ecx = 0;
		L(ecx) = B(___24e87dh);
		eax &= 0xffff;
		ecx = (int)ecx>>4;
		eax = (int)eax>>L(ecx);
		edx = eax;
		eax = 0;
		L(eax) = B(___24e87eh);
		W(eax*2+___19a562h) = X(edx);
		X(edx) = W(___24e87ah);
		W(eax*2+___688d0h) = X(edx);
___6f68bh:
		//test    byte [___24e87fh], 40h
		//je      short ___6f6a7h
        if((B(___24e87fh)&0x40) == 0) goto ___6f6a7h;
		edx = 0;
		L(edx) = B(___24e87eh);
		L(eax) = B(___24e87ch);
		B(edx+___19a582h) = L(eax);
___6f6a7h:
		//test    byte [___24e87fh], 80h
		//je      near ___70004h
        if((B(___24e87fh)&0x80) == 0) goto ___70004h;
		L(eax) = B(___24e879h);
		L(eax)--;
		//cmp     al, 15h
		//ja      near ___6ffcah
        if(L(eax) > 0x15) goto ___6ffcah;
		eax &= 0xff;
		//jmp     near dword [cs:eax*4+___6edd0h]

        switch(eax){
        case 0: goto ___6f6d0h;
        case 1: goto ___6f704h;
        case 2: goto ___6f728h;
        case 3: goto ___6f788h;
        case 4: goto ___6f821h;
        case 5: goto ___6f981h;
        case 6: goto ___6ffe5h;
        case 7: goto ___6fae2h;
        case 8: goto ___6fb15h;
        case 9: goto ___6fb39h;
        case 0xa: goto ___6fc40h;
        case 0xb: goto ___6fc64h;
        case 0xc: goto ___6ffcah;
        case 0xd: goto ___6ffcah;
        case 0xe: goto ___6fc88h;
        case 0xf: goto ___6ffcah;
        case 0x10: goto ___6fce0h;
        case 0x11: goto ___6fd04h;
        case 0x12: goto ___6fd37h;
        case 0x13: goto ___6ff7dh;
        case 0x14: goto ___6ffcah;
        case 0x15: goto ___6ffb0h;
        default:
            break;
        }

___6f6d0h:
		L(eax) = B(___24e878h);
		ebx = 0;
		edx = esi;
		L(ebx) = B(___24e86fh);
		B(___24e871h) = L(eax);
		edx = (int)edx>>0x1f;
		eax = esi;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		H(ebx) = 0;
		W(___68c40h) = X(eax);
		B(___24e879h) = H(ebx);
		B(___24e878h) = H(ebx);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6f704h:
		L(eax) = B(___24e878h);
		B(___19a469h) = L(eax);
		B(___19a53ch) = 1;
		H(edx) = 0;
		B(___24e879h) = H(edx);
		B(___24e878h) = H(edx);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6f728h:
		L(eax) = B(___24e878h);
		L(ebx) = 1;
		L(eax) &= 0xf;
		B(___19a53ch) = L(ebx);
		//cmp     al, 9
		//jbe     short ___6f742h
        if(L(eax) <= 9) goto ___6f742h;
		B(___24e878h) += 6;
___6f742h:
		eax = 0;
		L(eax) = B(___24e878h);
		eax = (int)eax>>4;
		edx = (int)eax*0xa;
		L(eax) = B(___24e878h);
		L(eax) &= 0xf;
		eax &= 0xff;
		eax += edx;
		B(___24e878h) = L(eax);
		//cmp     al, 3fh
		//jbe     short ___6f76dh
        if(L(eax) <= 0x3f) goto ___6f76dh;
		B(___24e878h) = 0x3f;
___6f76dh:
		L(eax) = B(___24e878h);
		B(___19a53fh) = L(eax);
		L(eax) = 0;
		B(___24e879h) = L(eax);
		B(___24e878h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6f788h:
		//cmp     byte [___24e878h], 0
		//jne     short ___6f7a3h
        if(B(___24e878h) != 0) goto ___6f7a3h;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5a2h);
		B(___24e878h) = L(eax);
___6f7a3h:
		L(eax) = B(___24e878h);
		L(eax) &= 0xf;
		//cmp     al, 0fh
		//jne     short ___6f7deh
        if(L(eax) != 0xf) goto ___6f7deh;
		edx = 0;
		eax = 0;
		L(edx) = B(___24e878h);
		L(eax) = B(___24e87eh);
		ebx = edx;
		edx = 0;
		ebx = (int)ebx>>4;
		L(edx) = B(eax+___19a582h);
		edx += ebx;
		B(eax+___19a582h) = L(edx);
		//cmp     dl, 40h
		//jbe     short ___6f7deh
        if(L(edx) <= 0x40) goto ___6f7deh;
		B(eax+___19a582h) = 0x40;
___6f7deh:
		L(eax) = B(___24e878h);
		L(eax) &= 0xf0;
		//cmp     al, 0f0h
		//jne     near ___6ffe5h
        if(L(eax) != 0xf0) goto ___6ffe5h;
		eax = 0;
		L(edx) = B(___24e878h);
		L(eax) = B(___24e87eh);
		L(edx) &= 0xf;
		H(ecx) = B(eax+___19a582h);
		H(ecx) -= L(edx);
		B(eax+___19a582h) = H(ecx);
		//cmp     ch, 40h
		//jbe     near ___6ffe5h
        if(H(ecx) <= 0x40) goto ___6ffe5h;
		H(edx) = 0;
		B(eax+___19a582h) = H(edx);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6f821h:
		//cmp     byte [___24e878h], 0
		//jne     short ___6f83ch
        if(B(___24e878h) != 0) goto ___6f83ch;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5a2h);
		B(___24e878h) = L(eax);
___6f83ch:
		L(edx) = B(___24e878h);
		//cmp     dl, 0e0h
		//jb      near ___6ffe5h
        if(L(edx) < 0xe0) goto ___6ffe5h;
		edi = 0x7dff;
		L(edx) &= 0xf;
		eax = 0;
		ecx = 0;
		ebx = 0;
		L(eax) = B(___24e87eh);
		L(ebx) = L(edx);
		eax += eax;
		ebx <<= 2;
		X(ecx) = W(eax+___19a562h);
		edi -= ebx;
		//cmp     ecx, edi
		//jg      near ___6f96bh
        if((int)ecx > (int)edi) goto ___6f96bh;
		H(edx) = B(___24e878h);
		H(edx) &= 0xf0;
		//cmp     dh, 0f0h
		//jne     short ___6f8dbh
        if(H(edx) != 0xf0) goto ___6f8dbh;
		H(edx) = 0;
		edi = ecx;
		edx <<= 2;
		edi += edx;
		edx = 0;
		ebx = D(___24e850h);
		X(edx) = W(eax+___19a542h);
		W(eax+___19a562h) = X(edi);
		ecx = D(ebx+edx*4);
		ebx = 0;
		X(ebx) = X(edi);
		eax = 0;
		//or      ebx, ebx
		//je      short ___6f8cch
        if(ebx == 0) goto ___6f8cch;
		eax = 0x6d3b;
		//imul    ecx
        ll_tmp = (long long)(int)eax * (long long)(int)ecx;
        edx = ll_tmp>>0x20;
        eax = ll_tmp;
		edx = (edx<<0xd)|(eax>>0x13);
		eax <<= 0xd;
		ebx = (int)ebx*0x5780;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		//shr     eax, 1
		//adc     eax, byte 0
        eax = (eax&1) ? (eax>>1)+1 : eax>>1;
___6f8cch:
		edx = 0;
		L(edx) = B(___24e87eh);
		D(edx*4+___68990h) = eax;
___6f8dbh:
		L(eax) = B(___24e878h);
		L(eax) &= 0xf0;
		//cmp     al, 0e0h
		//jne     near ___6f974h
        if(L(eax) != 0xe0) goto ___6f974h;
		eax = 0;
		L(edx) = B(___24e878h);
		L(eax) = B(___24e87eh);
		L(edx) &= 0xf;
		X(ebx) = W(eax*2+___19a562h);
		H(edx) = 0;
		ebx += edx;
		edx = 0;
		W(eax*2+___19a562h) = X(ebx);
		ebx = D(___24e850h);
		X(edx) = W(eax*2+___19a542h);
		ecx = D(ebx+edx*4);
		X(eax) = W(eax*2+___19a562h);
		ebx = 0;
		X(ebx) = X(eax);
		eax = 0;
		//or      ebx, ebx
		//je      short ___6f94fh
        if(ebx == 0) goto ___6f94fh;
		eax = 0x6d3b;
		//imul    ecx
        ll_tmp = (long long)(int)eax * (long long)(int)ecx;
        edx = ll_tmp>>0x20;
        eax = ll_tmp;
		edx = (edx<<0xd)|(eax>>0x13);
		eax <<= 0xd;
		ebx = (int)ebx*0x5780;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		//shr     eax, 1
		//adc     eax, byte 0
        eax = (eax&1) ? (eax>>1)+1 : eax>>1;
___6f94fh:
		edx = 0;
		L(edx) = B(___24e87eh);
		D(edx*4+___68990h) = eax;
		H(edx) = 0;
		B(___24e879h) = H(edx);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6f96bh:
		W(eax+___688d0h) = 0xffff;
___6f974h:
		H(edx) = 0;
		B(___24e879h) = H(edx);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6f981h:
		//cmp     byte [___24e878h], 0
		//jne     short ___6f99ch
        if(B(___24e878h) != 0) goto ___6f99ch;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5a2h);
		B(___24e878h) = L(eax);
___6f99ch:
		//cmp     byte [___24e878h], 0e0h
		//jb      near ___6ffe5h
        if(B(___24e878h)< 0xe0) goto ___6ffe5h;
		L(edx) = B(___24e878h);
		eax = 0;
		ecx = 0;
		ebx = 0;
		L(edx) &= 0xf;
		L(eax) = B(___24e87eh);
		L(ebx) = L(edx);
		eax += eax;
		ebx <<= 2;
		X(ecx) = W(eax+___19a562h);
		ebx += 0x200;
		//cmp     ecx, ebx
		//jl      near ___6facdh
        if((int)ecx < (int)ebx) goto ___6facdh;
		H(edx) = B(___24e878h);
		H(edx) &= 0xf0;
		//cmp     dh, 0f0h
		//jne     short ___6fa3eh
        if(H(edx) != 0xf0) goto ___6fa3eh;
		H(edx) = 0;
		edi = ecx;
		edx <<= 2;
		edi -= edx;
		edx = 0;
		ebx = D(___24e850h);
		X(edx) = W(eax+___19a542h);
		W(eax+___19a562h) = X(edi);
		ecx = D(ebx+edx*4);
		ebx = 0;
		X(ebx) = X(edi);
		eax = 0;
		//or      ebx, ebx
		//je      short ___6fa2fh
        if(ebx == 0) goto ___6fa2fh;
		eax = 0x6d3b;
		//imul    ecx
        ll_tmp = (long long)(int)eax * (long long)(int)ecx;
        edx = ll_tmp>>0x20;
        eax = ll_tmp;
		edx = (edx<<0xd)|(eax>>0x13);
		eax <<= 0xd;
		ebx = (int)ebx*0x5780;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		//shr     eax, 1
		//adc     eax, byte 0
        eax = (eax&1) ? (eax>>1)+1 : eax>>1;
___6fa2fh:
		edx = 0;
		L(edx) = B(___24e87eh);
		D(edx*4+___68990h) = eax;
___6fa3eh:
		L(eax) = B(___24e878h);
		L(eax) &= 0xf0;
		//cmp     al, 0e0h
		//jne     near ___6fad6h
        if(L(eax) != 0xe0) goto ___6fad6h;
		eax = 0;
		L(edx) = B(___24e878h);
		L(eax) = B(___24e87eh);
		L(edx) &= 0xf;
		X(ebx) = W(eax*2+___19a562h);
		H(edx) = 0;
		ebx -= edx;
		edx = 0;
		W(eax*2+___19a562h) = X(ebx);
		ebx = D(___24e850h);
		X(edx) = W(eax*2+___19a542h);
		ecx = D(ebx+edx*4);
		X(eax) = W(eax*2+___19a562h);
		ebx = 0;
		X(ebx) = X(eax);
		eax = 0;
		//or      ebx, ebx
		//je      short ___6fab2h
        if(ebx == 0) goto ___6fab2h;
		eax = 0x6d3b;
		//imul    ecx
        ll_tmp = (long long)(int)eax * (long long)(int)ecx;
        edx = ll_tmp>>0x20;
        eax = ll_tmp;
		edx = (edx<<0xd)|(eax>>0x13);
		eax <<= 0xd;
		ebx = (int)ebx*0x5780;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		//shr     eax, 1
		//adc     eax, byte 0
        eax = (eax&1) ? (eax>>1)+1 : eax>>1;
___6fab2h:
		edx = 0;
		L(edx) = B(___24e87eh);
		D(edx*4+___68990h) = eax;
		L(eax) = 0;
		B(___24e879h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6facdh:
		W(eax+___688d0h) = 0xffff;
___6fad6h:
		L(eax) = 0;
		B(___24e879h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fae2h:
		//cmp     byte [___24e878h], 0
		//jne     short ___6fafdh
        if(B(___24e878h) != 0) goto ___6fafdh;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5a2h);
		B(___24e878h) = L(eax);
___6fafdh:
		edx = 0;
		L(edx) = B(___24e87eh);
		L(eax) = B(___24e878h);
		B(edx+___19a5c2h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fb15h:
		//cmp     byte [___24e878h], 0
		//jne     near ___6ffe5h
        if(B(___24e878h) != 0) goto ___6ffe5h;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5a2h);
		B(___24e878h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fb39h:
		//cmp     byte [___24e878h], 0
		//jne     short ___6fb54h
        if(B(___24e878h) != 0) goto ___6fb54h;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5a2h);
		B(___24e878h) = L(eax);
___6fb54h:
		L(eax) = B(___24e87dh);
		//cmp     al, 0ffh
		//je      short ___6fb61h
        if(L(eax) == 0xff) goto ___6fb61h;
		//test    al, al
		//jne     short ___6fb73h
        if(L(eax)) goto ___6fb73h;
___6fb61h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5f4h);
		B(___24e87dh) = L(eax);
___6fb73h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(edx) = 0;
		B(eax+___19a5e4h) = L(edx);
		L(edx) = B(___24e87dh);
		B(eax+___19a5f4h) = L(edx);
		L(eax) = L(edx);
		L(eax) &= 0xf;
		edx = 0;
		L(edx) = L(eax);
		eax = 0;
		L(eax) = B(___24e878h);
		eax = (int)eax>>4;
		eax += edx;
		B(___24e87dh) = L(eax);
		//cmp     al, 0ch
		//jb      short ___6fbb6h
        if(L(eax) < 0xc) goto ___6fbb6h;
		L(ebx) = L(eax);
		L(ebx) += 4;
		B(___24e87dh) = L(ebx);
___6fbb6h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(edx) = B(eax+___19a5f4h);
		H(ebx) = B(___24e87dh);
		L(edx) &= 0xf0;
		H(ebx) += L(edx);
		H(edx) = 0;
		L(edx) = H(ebx);
		edx <<= 8;
		W(eax*2+___19a604h) = X(edx);
		H(eax) = B(eax+___19a5f4h);
		H(eax) &= 0xf;
		L(eax) = B(___24e878h);
		L(eax) &= 0xf;
		B(___24e87dh) = H(ebx);
		H(eax) += L(eax);
		B(___24e87dh) = H(eax);
		//cmp     ah, 0ch
		//jb      short ___6fc0bh
        if(H(eax) < 0xc) goto ___6fc0bh;
		H(ecx) = H(eax);
		H(ecx) += 4;
		B(___24e87dh) = H(ecx);
___6fc0bh:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(edx) = B(eax+___19a5f4h);
		L(edx) &= 0xf0;
		B(___24e87dh) += L(edx);
		H(edx) = 0;
		X(ebx) = W(eax*2+___19a604h);
		L(edx) = B(___24e87dh);
		ebx += edx;
		W(eax*2+___19a604h) = X(ebx);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fc40h:
		//cmp     byte [___24e878h], 0
		//jne     near ___6ffe5h
        if(B(___24e878h) != 0) goto ___6ffe5h;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5a2h);
		B(___24e878h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fc64h:
		//cmp     byte [___24e878h], 0
		//jne     near ___6ffe5h
        if(B(___24e878h) != 0) goto ___6ffe5h;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5a2h);
		B(___24e878h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fc88h:
		//cmp     byte [___24e878h], 0
		//jne     short ___6fca3h
        if(B(___24e878h) != 0) goto ___6fca3h;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5a2h);
		B(___24e878h) = L(eax);
___6fca3h:
		eax = 0;
		L(eax) = B(___24e878h);
		edx = eax;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx <<= 8;
		D(eax*4+___68910h) = edx;
		X(edx) = W(eax*2+___19a542h);
		W(eax*2+___688d0h) = X(edx);
		H(edx) = 0;
		B(___24e879h) = H(edx);
		B(___24e878h) = H(edx);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fce0h:
		//cmp     byte [___24e878h], 0
		//jne     near ___6ffe5h
        if(B(___24e878h) != 0) goto ___6ffe5h;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5a2h);
		B(___24e878h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fd04h:
		//cmp     byte [___24e878h], 0
		//jne     short ___6fd1fh
        if(B(___24e878h) != 0) goto ___6fd1fh;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5a2h);
		B(___24e878h) = L(eax);
___6fd1fh:
		edx = 0;
		L(edx) = B(___24e87eh);
		L(eax) = B(___24e878h);
		B(edx+___19a5c2h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fd37h:
		eax = 0;
		L(eax) = B(___24e878h);
		eax = (int)eax>>4;
		//cmp     eax, byte 0fh
		//ja      near ___6ff60h
        if(eax > 0xf) goto ___6ff60h;
		//jmp     near dword [cs:eax*4+___6ee28h]

        switch(eax){
        case 0: goto ___6fd52h;
        case 1: goto ___6fd6bh;
        case 2: goto ___6fd84h;
        case 3: goto ___6fdb1h;
        case 4: goto ___6fde3h;
        case 5: goto ___6ff60h;
        case 6: goto ___6ff60h;
        case 7: goto ___6ff60h;
        case 8: goto ___6fe1ah;
        case 9: goto ___6ff60h;
        case 0xa: goto ___6fe4dh;
        case 0xb: goto ___6fe66h;
        case 0xc: goto ___6ff15h;
        case 0xd: goto ___6ffe5h;
        case 0xe: goto ___6ff2fh;
        case 0xf: goto ___6ff42h;
        default:
            break;
        }

___6fd52h:
		L(ecx) = 0;
		B(___24e878h) = L(ecx);
		B(___24e879h) = L(ecx);
		D(___19a470h)++;
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fd6bh:
		L(ebx) = 0;
		B(___24e878h) = L(ebx);
		B(___24e879h) = L(ebx);
		D(___19a474h)++;
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fd84h:
		L(eax) = B(___24e878h);
		L(eax) &= 0xf;
		L(edx) = 0;
		eax &= 0xff;
		B(___24e879h) = L(edx);
		X(eax) = W(eax*2+___19a49ch);
		B(___24e878h) = L(edx);
		W(___19a5e2h) = X(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fdb1h:
		eax = 0;
		L(eax) = B(___24e87eh);
		H(edx) = B(eax+___19a5d2h);
		H(edx) &= 0xfc;
		L(edx) = B(___24e878h);
		L(edx) &= 3;
		L(edx) |= H(edx);
		B(eax+___19a5d2h) = L(edx);
		L(eax) = 0;
		B(___24e879h) = L(eax);
		B(___24e878h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fde3h:
		eax = 0;
		L(eax) = B(___24e87eh);
		H(edx) = B(eax+___19a5d2h);
		H(edx) &= 0xf3;
		L(edx) = B(___24e878h);
		L(edx) &= 3;
		L(ecx) = 0;
		L(edx) <<= 2;
		B(___24e879h) = L(ecx);
		L(edx) |= H(edx);
		B(___24e878h) = L(ecx);
		B(eax+___19a5d2h) = L(edx);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fe1ah:
		L(eax) = B(___24e878h);
		L(eax) &= 0xf;
		edx = eax;
		L(ebx) = 0;
		edx &= 0xff;
		eax = 0;
		B(___24e879h) = L(ebx);
		L(eax) = B(___24e87eh);
		edx <<= 0xc;
		B(___24e878h) = L(ebx);
		D(eax*4+___68a90h) = edx;
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fe4dh:
		L(edx) = 0;
		B(___24e878h) = L(edx);
		B(___24e879h) = L(edx);
		D(___19a478h)++;
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fe66h:
		H(ebx) = B(___24e878h);
		//test    bh, 0fh
		//jne     near ___6ff04h
        if(H(ebx)&0xf) goto ___6ff04h;
		L(ecx) = B(___19a686h);
		//test    cl, cl
		//jne     short ___6fe8eh
        if(L(ecx)) goto ___6fe8eh;
		L(eax) = B(___19a46ah);
		B(___19a684h) = L(eax);
		//jmp     near ___6ff04h
        goto ___6ff04h;
___6fe8eh:
		//jne     short ___6fec8h
        if(L(ecx)) goto ___6fec8h;
		L(eax) = H(ebx);
		L(eax) &= 0xf;
		H(ebx) = 1;
		B(___19a685h) = L(eax);
		B(___19a686h) = H(ebx);
		B(___19a53ch) = H(ebx);
		L(eax) = B(___19a684h);
		B(___19a53dh) = H(ebx);
		B(___19a53fh) = L(eax);
		L(eax) = 0;
		B(___24e878h) = L(eax);
		B(___24e879h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6fec8h:
		L(eax) = B(___19a685h);
		L(eax)--;
		B(___19a685h) = L(eax);
		//je      short ___6feffh
        if(L(eax) == 0) goto ___6feffh;
		L(eax) = B(___19a684h);
		H(edx) = 1;
		B(___19a53fh) = L(eax);
		B(___19a53ch) = H(edx);
		B(___19a53dh) = H(edx);
		L(eax) = 0;
		B(___24e878h) = L(eax);
		B(___24e879h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6feffh:
		B(___19a686h) = L(eax);
___6ff04h:
		L(eax) = 0;
		B(___24e878h) = L(eax);
		B(___24e879h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6ff15h:
		edx = 0;
		L(eax) = B(___24e878h);
		L(edx) = B(___24e87eh);
		L(eax) &= 0xf;
		B(edx+___19a5e4h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6ff2fh:
		L(eax) = B(___24e878h);
		L(eax) &= 0xf;
		L(eax)++;
		B(___19a540h) = L(eax);
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6ff42h:
		H(edx) = 0;
		eax = D(___19a47ch);
		B(___24e878h) = H(edx);
		eax++;
		B(___24e879h) = H(edx);
		D(___19a47ch) = eax;
		//jmp     near ___6ffe5h
        goto ___6ffe5h;
___6ff60h:
		H(eax) = 0;
		ebp = D(___19a480h);
		B(___24e878h) = H(eax);
		ebp++;
		B(___24e879h) = H(eax);
		D(___19a480h) = ebp;
		//jmp     short ___6ffe5h
        goto ___6ffe5h;
___6ff7dh:
		L(ecx) = B(___24e878h);
		//test    cl, cl
		//je      short ___6ffa0h
        if(L(ecx) == 0) goto ___6ffa0h;
		eax = esi;
		ebx = 0;
		edx = esi;
		L(ebx) = L(ecx);
		edx = (int)edx>>0x1f;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		B(___24e86fh) = L(ecx);
		W(___68c40h) = X(eax);
___6ffa0h:
		H(ecx) = 0;
		B(___24e878h) = H(ecx);
		B(___24e879h) = H(ecx);
		//jmp     short ___6ffe5h
        goto ___6ffe5h;
___6ffb0h:
		L(eax) = B(___24e878h);
		L(ebx) = 0;
		B(___24e870h) = L(eax);
		B(___24e879h) = L(ebx);
		B(___24e878h) = L(ebx);
		//jmp     short ___6ffe5h
        goto ___6ffe5h;
___6ffcah:
		L(edx) = 0;
		edi = D(___19a480h);
		B(___24e878h) = L(edx);
		edi++;
		B(___24e879h) = L(edx);
		D(___19a480h) = edi;
___6ffe5h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(edx) = B(___24e879h);
		B(eax+___19a592h) = L(edx);
		L(edx) = B(___24e878h);
		B(eax+___19a5a2h) = L(edx);
___70004h:
		//cmp     byte [___24e87eh], 0ffh
		//je      near ___6f2e3h
        if(B(___24e87eh) == 0xff) goto ___6f2e3h;
		//cmp     word [___19a5e2h], byte 0
		//jne     short ___7006dh
        if(W(___19a5e2h) != 0) goto ___7006dh;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		ebx = D(___24e850h);
		X(edx) = W(eax*2+___19a542h);
		ecx = D(ebx+edx*4);
		X(eax) = W(eax*2+___19a562h);
		ebx = 0;
		X(ebx) = X(eax);
		eax = 0;
		//or      ebx, ebx
		//je      short ___70063h
        if(ebx == 0) goto ___70063h;
		eax = 0x6d3b;
		//imul    ecx
        ll_tmp = (long long)(int)eax * (long long)(int)ecx;
        edx = ll_tmp>>0x20;
        eax = ll_tmp;
		edx = (edx<<0xd)|(eax>>0x13);
		eax <<= 0xd;
		ebx = (int)ebx*0x5780;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		//shr     eax, 1
		//adc     eax, byte 0
        eax = (eax&1) ? (eax>>1)+1 : eax>>1;
___70063h:
		edx = 0;
		L(edx) = B(___24e87eh);
		//jmp     short ___700bch
        goto ___700bch;
___7006dh:
		eax = 0;
		L(eax) = B(___24e87eh);
		ecx = D(___19a5e0h);
		ebx = 0;
		X(eax) = W(eax*2+___19a562h);
		ecx = (int)ecx>>0x10;
		X(ebx) = X(eax);
		eax = 0;
		//or      ebx, ebx
		//je      short ___700abh
        if(ebx == 0) goto ___700abh;
		eax = 0x6d3b;
		//imul    ecx
        ll_tmp = (long long)(int)eax * (long long)(int)ecx;
        edx = ll_tmp>>0x20;
        eax = ll_tmp;
		edx = (edx<<0xd)|(eax>>0x13);
		eax <<= 0xd;
		ebx = (int)ebx*0x5780;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		//shr     eax, 1
		//adc     eax, byte 0
        eax = (eax&1) ? (eax>>1)+1 : eax>>1;
___700abh:
		edx = 0;
		edi = 0;
		L(edx) = B(___24e87eh);
		W(___19a5e2h) = X(edi);
___700bch:
		D(edx*4+___68990h) = eax;
		eax = 0;
		edx = 0;
		L(eax) = B(___24e87eh);
		ebx = 0;
		L(edx) = B(___24e870h);
		L(ebx) = B(eax+___19a582h);
		edx = (int)edx*(int)ebx;
		edx <<= 4;
		D(eax*4+___68a10h) = edx;
		//jmp     near ___6f2e3h
        goto ___6f2e3h;
___700ech:
		L(eax) = B(___19a46ah);
		B(___19a46ah)++;
		//cmp     byte [___19a46ah], 40h
		///jb      short ___70107h
        if(B(___19a46ah) < 0x40) goto ___70107h;
		B(___19a53ch) = 1;
___70107h:
		L(edx) = B(___19a540h);
		L(eax) = B(___24e871h);
		X(eax) = L(eax)*L(edx);
		B(___19a53eh) = L(eax);
___70119h:
		//cmp     byte [___19a53eh], 0
		//je      near ___71588h
        if(B(___19a53eh) == 0) goto ___71588h;
		H(eax) = 0;
		B(___24e87eh) = H(eax);
		esi = 0xffff;
___70133h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(edx) = B(eax+___19a592h);
		//test    dl, dl
		//je      near ___71566h
        if(L(edx) == 0) goto ___71566h;
		B(___24e879h) = L(edx);
		L(edx) = B(eax+___19a5a2h);
		B(___24e878h) = L(edx);
		L(edx) = B(___24e879h);
		L(edx) -= 4;
		//cmp     dl, 11h
		//ja      near ___71566h
        if(L(edx) > 0x11) goto ___71566h;
		edx &= 0xff;
		//jmp     near dword [cs:edx*4+___6ee68h]

        switch(edx){
        case 0: goto ___7017ah;
        case 1: goto ___70241h;
        case 2: goto ___702d7h;
        case 3: goto ___70356h;
        case 4: goto ___704a8h;
        case 5: goto ___7064bh;
        case 6: goto ___70732h;
        case 7: goto ___7080eh;
        case 8: goto ___70a82h;
        case 9: goto ___71566h;
        case 0xa: goto ___71566h;
        case 0xb: goto ___71566h;
        case 0xc: goto ___71566h;
        case 0xd: goto ___70d06h;
        case 0xe: goto ___71040h;
        case 0xf: goto ___711d1h;
        case 0x10: goto ___71566h;
        case 0x11: goto ___713feh;
        default:
            break;
        }

___7017ah:
		L(ecx) = B(___24e878h);
		//test    cl, 0fh
		//jne     short ___701cdh
        if(L(ecx)&0xf) goto ___701cdh;
		H(ecx) = B(___24e871h);
		//cmp     ch, [___19a53eh]
		//je      short ___701cdh
        if(H(ecx) == B(___19a53eh)) goto ___701cdh;
		ebx = 0;
		edx = 0;
		eax = 0;
		L(ebx) = L(ecx);
		L(edx) = B(___24e87eh);
		ebx = (int)ebx>>4;
		L(eax) = B(edx+___19a582h);
		eax += ebx;
		B(edx+___19a582h) = L(eax);
		eax = 0;
		L(eax) = L(edx);
		//cmp     byte [eax+___19a582h], 40h
		//jbe     short ___701cdh
        if(B(eax+___19a582h) <= 0x40) goto ___701cdh;
		eax = 0;
		L(eax) = B(___24e87eh);
		B(eax+___19a582h) = 0x40;
___701cdh:
		//test    byte [___24e878h], 0f0h
		//jne     short ___70218h
        if(B(___24e878h)&0xf0) goto ___70218h;
		H(ebx) = B(___24e871h);
		//cmp     bh, [___19a53eh]
		//je      short ___70218h
        if(H(ebx) == B(___19a53eh)) goto ___70218h;
		L(edx) = B(___24e878h);
		eax = 0;
		ecx = 0;
		L(eax) = B(___24e87eh);
		L(edx) &= 0xf;
		ebx = 0;
		L(ecx) = L(edx);
		L(ebx) = B(eax+___19a582h);
		//cmp     ebx, ecx
		//jl      short ___70210h
        if((int)ebx < (int)ecx) goto ___70210h;
		H(ecx) = L(ebx);
		H(ecx) -= L(edx);
		B(eax+___19a582h) = H(ecx);
		//jmp     short ___70218h
        goto ___70218h;
___70210h:
		L(ecx) ^= L(edx);
		B(eax+___19a582h) = L(ecx);
___70218h:
		eax = 0;
		edx = 0;
		L(eax) = B(___24e87eh);
		ebx = 0;
		L(edx) = B(___24e870h);
		L(ebx) = B(eax+___19a582h);
		edx = (int)edx*(int)ebx;
		edx <<= 4;
		D(eax*4+___68a10h) = edx;
		//jmp     near ___71566h
        goto ___71566h;
___70241h:
		H(ebx) = B(___24e878h);
		//cmp     bh, 0e0h
		//jae     near ___71566h
        if(H(ebx) >= 0xe0) goto ___71566h;
		eax = 0;
		L(eax) = B(___24e87eh);
		X(eax) = W(eax*2+___19a562h);
		edx = 0;
		L(edx) = H(ebx);
		ebx = 0x7dff;
		edx <<= 2;
		eax &= 0xffff;
		ebx -= edx;
		//cmp     eax, ebx
		//jg      short ___702c3h
        if((int)eax > (int)ebx) goto ___702c3h;
		H(edx) = 0;
		eax = 0;
		L(edx) = B(___24e878h);
		L(eax) = B(___24e87eh);
		edx <<= 2;
		W(eax*2+___19a562h) += X(edx);
		eax = 0;
		L(eax) = B(___24e87eh);
		X(eax) = W(eax*2+___19a542h);
		edx = D(___24e850h);
		eax &= 0xffff;
		ecx = D(edx+eax*4);
		eax = 0;
		L(eax) = B(___24e87eh);
		ebx = 0;
		X(eax) = W(eax*2+___19a562h);
		//jmp     near ___71533h
        goto ___71533h;
___702c3h:
		eax = 0;
		L(eax) = B(___24e87eh);
		W(eax*2+___688d0h) = X(esi);
		//jmp     near ___71566h
        goto ___71566h;
___702d7h:
		L(ebx) = B(___24e878h);
		//cmp     bl, 0e0h
		//jae     near ___71566h
        if(L(ebx) >= 0xe0) goto ___71566h;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		X(edx) = W(eax*2+___19a562h);
		eax = 0;
		L(eax) = L(ebx);
		eax <<= 2;
		eax += 0x200;
		//cmp     edx, eax
		//jl      short ___702c3h
        if((int)edx < (int)eax) goto ___702c3h;
		H(edx) = 0;
		eax = 0;
		L(edx) = L(ebx);
		L(eax) = B(___24e87eh);
		edx <<= 2;
		W(eax*2+___19a562h) -= X(edx);
		eax = 0;
		L(eax) = B(___24e87eh);
		X(eax) = W(eax*2+___19a542h);
		eax &= 0xffff;
		edx = eax*4;
		eax = D(___24e850h);
		ecx = D(edx+eax);
		eax = 0;
		L(eax) = B(___24e87eh);
		ebx = 0;
		X(eax) = W(eax*2+___19a562h);
		//jmp     near ___71533h
        goto ___71533h;
___70356h:
		eax = 0;
		edx = 0;
		L(eax) = B(___24e87eh);
		L(edx) = L(eax);
		X(eax) = W(eax*2+___19a644h);
		//cmp     ax, [NoSplit edx*2+___19a562h]
		//je      near ___71566h
        if(X(eax) == W(edx*2+___19a562h)) goto ___71566h;
		edx = 0;
		H(eax) = 0;
		L(edx) = B(___24e87eh);
		L(eax) = B(___24e878h);
		W(edx*2+___24e880h) = X(eax);
		eax = 0;
		L(eax) = L(edx);
		edx = 0;
		L(edx) = L(eax);
		X(eax) = W(eax*2+___19a644h);
		//cmp     ax, [NoSplit edx*2+___19a562h]
		//jbe     short ___70413h
        if(X(eax) <= W(edx*2+___19a562h)) goto ___70413h;
		eax = 0;
		L(eax) = L(edx);
		H(edx) = 0;
		L(edx) = B(___24e878h);
		X(edi) = W(eax*2+___19a562h);
		edx <<= 2;
		ebx = 0;
		edi += edx;
		L(ebx) = L(eax);
		W(eax*2+___19a562h) = X(edi);
		eax = 0;
		L(eax) = L(ebx);
		edx = eax*2;
		X(eax) = W(ebx*2+___19a562h);
		//cmp     ax, [edx+___19a644h]
		//jbe     near ___7047fh
        if(X(eax) <= W(edx+___19a644h)) goto ___7047fh;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = eax*2;
		eax = 0;
		L(eax) = B(___24e87eh);
		X(edx) = W(edx+___19a644h);
		W(eax*2+___19a562h) = X(edx);
		//jmp     short ___7047fh
        goto ___7047fh;
___70413h:
		eax = 0;
		L(eax) = L(edx);
		edx = 0;
		X(edx) = W(eax*2+___19a562h);
		eax = 0;
		L(eax) = B(___24e878h);
		eax <<= 2;
		//cmp     eax, edx
		//jg      short ___7044bh
        if((int)eax > (int)edx) goto ___7044bh;
		H(edx) = 0;
		eax = 0;
		L(edx) = B(___24e878h);
		L(eax) = B(___24e87eh);
		edx <<= 2;
		W(eax*2+___19a562h) -= X(edx);
		//jmp     short ___7045ch
        goto ___7045ch;
___7044bh:
		eax = 0;
		L(eax) = B(___24e87eh);
		edi = 0;
		W(eax*2+___19a562h) = X(edi);
___7045ch:
		eax = 0;
		L(eax) = B(___24e87eh);
		eax += eax;
		X(edx) = W(eax+___19a562h);
		X(ecx) = W(eax+___19a644h);
		//cmp     dx, cx
		//jae     short ___7047fh
        if(X(edx) >= X(ecx)) goto ___7047fh;
		W(eax+___19a562h) = X(ecx);
___7047fh:
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		ebx = D(___24e850h);
		X(edx) = W(eax*2+___19a542h);
		ecx = D(ebx+edx*4);
		X(eax) = W(eax*2+___19a562h);
		ebx = 0;
		//jmp     near ___71533h
        goto ___71533h;
___704a8h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5d2h);
		L(eax) &= 3;
		//cmp     al, 3
		//ja      near ___705d1h
        if(L(eax) > 3) goto ___705d1h;
		eax &= 0xff;
		//jmp     near dword [cs:eax*4+___6eeb0h]

        switch(eax){
        case 0: goto ___704cch;
        case 1: goto ___7050bh;
        case 2: goto ___70550h;
        case 3: goto ___705a1h;
        default:
            break;
        }

___704cch:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5b2h);
		eax &= 0xff;
		edx = D(eax*2+___19a4bah);
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		edx = (int)edx>>0x10;
		L(eax) &= 0xf;
		eax &= 0xff;
		eax <<= 2;
		eax = (int)eax*(int)edx;
		eax++;
		eax = (int)eax>>9;
		//jmp     near ___705cch
        goto ___705cch;
___7050bh:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		L(eax) &= 0xf;
		eax &= 0xff;
		edx = eax*4;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5b2h);
		ebx = 0x20;
		eax &= 0xff;
		ebx -= eax;
		edx = (int)edx*(int)ebx;
		edx = (int)edx>>4;
		D(___24e874h) = edx;
		//jmp     near ___705d1h
        goto ___705d1h;
___70550h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5b2h);
		eax &= 0xff;
		//cmp     word [NoSplit eax*2+___19a4bch], byte 0
		//jl      short ___70586h
        if((short)W(eax*2+___19a4bch) < 0) goto ___70586h;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		L(eax) &= 0xf;
		eax &= 0xff;
		eax <<= 2;
		//jmp     short ___705cch
        goto ___705cch;
___70586h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		L(eax) &= 0xf;
		eax &= 0xff;
		eax <<= 2;
		eax = 0-eax;
		//jmp     short ___705cch
        goto ___705cch;
___705a1h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		L(eax) &= 0xf;
		eax &= 0xff;
		edx = eax*4;
		eax = rand_();
		eax -= 0x4000;
		eax = (int)eax*(int)edx;
		eax = (int)eax>>0xe;
___705cch:
		D(___24e874h) = eax;
___705d1h:
		L(eax) = B(___19a53eh);
		//cmp     al, [___24e871h]
		//je      short ___70612h
        if(L(eax) == B(___24e871h)) goto ___70612h;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		L(edx) = B(eax+___19a5c2h);
		ebx = edx;
		edx = 0;
		ebx = (int)ebx>>4;
		L(edx) = B(eax+___19a5b2h);
		edx += ebx;
		B(eax+___19a5b2h) = L(edx);
		//cmp     dl, 40h
		//jb      short ___70612h
        if(L(edx) < 0x40) goto ___70612h;
		H(edx) = L(edx);
		H(edx) -= 0x40;
		B(eax+___19a5b2h) = H(edx);
___70612h:
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		X(edx) = W(eax*2+___19a542h);
		X(edi) = W(___24e874h);
		ebx = edx*4;
		X(eax) = W(eax*2+___19a562h);
		edx = D(___24e850h);
		eax += edi;
		ecx = D(edx+ebx);
		ebx = 0;
		//jmp     near ___71533h
        goto ___71533h;
___7064bh:
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		L(edx) = B(eax+___19a664h);
		eax = 0;
		L(eax) = B(___24e878h);
		eax = (int)eax>>4;
		eax++;
		//cmp     edx, eax
		//jge     short ___706a8h
        if((int)edx >= (int)eax) goto ___706a8h;
		eax = 0;
		edx = 0;
		L(eax) = B(___24e87eh);
		L(edx) = L(eax);
		ebx = 0;
		L(ebx) = B(edx+___19a582h);
		edx = 0;
		L(edx) = B(___24e870h);
		ebx = (int)ebx*(int)edx;
		H(ecx) = B(eax+___19a664h);
		edx = 0;
		H(ecx)++;
		L(edx) = L(eax);
		ebx <<= 4;
		B(eax+___19a664h) = H(ecx);
		D(edx*4+___68a10h) = ebx;
		//jmp     near ___71566h
        goto ___71566h;
___706a8h:
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		L(edx) = B(eax+___19a674h);
		eax = 0;
		L(eax) = B(___24e878h);
		eax = (int)eax>>4;
		eax++;
		//cmp     edx, eax
		//jge     near ___71566h
        if((int)edx >= (int)eax) goto ___71566h;
		eax = 0;
		edx = 0;
		L(eax) = B(___24e87eh);
		L(edx) = L(eax);
		edi = 0;
		L(ebx) = B(eax+___19a674h);
		D(edx*4+___68a10h) = edi;
		edx = 0;
		L(ebx)++;
		L(edx) = L(eax);
		B(eax+___19a674h) = L(ebx);
		L(edx) = B(edx+___19a674h);
		eax = 0;
		L(eax) = B(___24e878h);
		eax = (int)eax>>4;
		edx &= 0xff;
		eax++;
		//cmp     edx, eax
		//jl      near ___71566h
        if((int)edx < (int)eax) goto ___71566h;
		eax = 0;
		L(eax) = B(___24e87eh);
		H(ebx) = 0;
		B(eax+___19a664h) = H(ebx);
		eax = 0;
		L(eax) = B(___24e87eh);
		L(ecx) = 0;
		B(eax+___19a674h) = L(ecx);
		//jmp     near ___71566h
        goto ___71566h;
___70732h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5e4h);
		//cmp     al, 1
		//jb      short ___7074eh
        if(L(eax) < 1) goto ___7074eh;
		//jbe     short ___70774h
        if(L(eax) <= 1) goto ___70774h;
		//cmp     al, 2
		//je      short ___707a0h
        if(L(eax) == 2) goto ___707a0h;
		//jmp     near ___707c2h
        goto ___707c2h;
___7074eh:
		//test    al, al
		//jne     short ___707c2h
        if(L(eax)) goto ___707c2h;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5f4h);
		B(___24e87dh) = L(eax);
		eax = 0;
		L(eax) = B(___24e87eh);
		B(eax+___19a5e4h) = 1;
		//jmp     short ___707c2h
        goto ___707c2h;
___70774h:
		eax = 0;
		L(eax) = B(___24e87eh);
		X(eax) = W(eax*2+___19a604h);
		eax &= 0xffff;
		eax = (int)eax>>8;
		B(___24e87dh) = L(eax);
		eax = 0;
		L(eax) = B(___24e87eh);
		B(eax+___19a5e4h) = 2;
		//jmp     short ___707c2h
        goto ___707c2h;
___707a0h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax*2+___19a604h);
		B(___24e87dh) = L(eax);
		eax = 0;
		L(eax) = B(___24e87eh);
		L(ecx) = 0;
		B(eax+___19a5e4h) = L(ecx);
___707c2h:
		eax = 0;
		L(eax) = B(___24e87eh);
		X(eax) = W(eax*2+___19a542h);
		edx = D(___24e850h);
		eax &= 0xffff;
		edx = D(edx+eax*4);
		L(eax) = B(___24e87dh);
		L(eax) &= 0xf;
		eax &= 0xff;
		X(eax) = W(eax*2+___19a484h);
		ecx = 0;
		L(ecx) = B(___24e87dh);
		eax &= 0xffff;
		ecx = (int)ecx>>4;
		ebx = 0;
		eax = (int)eax>>L(ecx);
		ecx = edx;
		//jmp     near ___71533h
        goto ___71533h;
___7080eh:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5d2h);
		L(eax) &= 3;
		//cmp     al, 3
		//ja      near ___70932h
        if(L(eax) > 3) goto ___70932h;
		eax &= 0xff;
		//jmp     near dword [cs:eax*4+___6eec0h]

        switch(eax){
        case 0: goto ___70832h;
        case 1: goto ___70871h;
        case 2: goto ___708b1h;
        case 3: goto ___70902h;
        default:
            break;
        }

___70832h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5b2h);
		eax &= 0xff;
		edx = D(eax*2+___19a4bah);
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		edx = (int)edx>>0x10;
		L(eax) &= 0xf;
		eax &= 0xff;
		eax <<= 2;
		eax = (int)eax*(int)edx;
		eax++;
		eax = (int)eax>>9;
		//jmp     near ___7092dh
        goto ___7092dh;
___70871h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		edx = 0;
		L(eax) &= 0xf;
		L(edx) = L(eax);
		eax = 0;
		L(eax) = B(___24e87eh);
		edx <<= 2;
		L(eax) = B(eax+___19a5b2h);
		ebx = 0x20;
		eax &= 0xff;
		ebx -= eax;
		edx = (int)edx*(int)ebx;
		edx = (int)edx>>4;
		D(___24e874h) = edx;
		//jmp     near ___70932h
        goto ___70932h;
___708b1h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5b2h);
		eax &= 0xff;
		//cmp     word [NoSplit eax*2+___19a4bch], byte 0
		//jl      short ___708e7h
        if((short)W(eax*2+___19a4bch) < 0) goto ___708e7h;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		L(eax) &= 0xf;
		eax &= 0xff;
		eax <<= 2;
		//jmp     short ___7092dh
        goto ___7092dh;
___708e7h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		L(eax) &= 0xf;
		eax &= 0xff;
		eax <<= 2;
		eax = 0-eax;
		//jmp     short ___7092dh
        goto ___7092dh;
___70902h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		L(eax) &= 0xf;
		eax &= 0xff;
		edx = eax*4;
		eax = rand_();
		eax -= 0x4000;
		eax = (int)eax*(int)edx;
		eax = (int)eax>>0xe;
___7092dh:
		D(___24e874h) = eax;
___70932h:
		H(edx) = B(___24e871h);
		//cmp     dh, [___19a53eh]
		//je      short ___70974h
        if(H(edx) == B(___19a53eh)) goto ___70974h;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		L(edx) = B(eax+___19a5c2h);
		ebx = edx;
		edx = 0;
		ebx = (int)ebx>>4;
		L(edx) = B(eax+___19a5b2h);
		edx += ebx;
		B(eax+___19a5b2h) = L(edx);
		//cmp     dl, 40h
		//jb      short ___70974h
        if(L(edx) < 0x40) goto ___70974h;
		H(ebx) = L(edx);
		H(ebx) -= 0x40;
		B(eax+___19a5b2h) = H(ebx);
___70974h:
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		ebx = D(___24e850h);
		X(edx) = W(eax*2+___19a542h);
		ecx = D(ebx+edx*4);
		X(eax) = W(eax*2+___19a562h);
		X(eax) += W(___24e874h);
		ebx = 0;
		X(ebx) = X(eax);
		eax = 0;
		//or      ebx, ebx
		//je      short ___709c3h
        if(ebx == 0) goto ___709c3h;
		eax = 0x6d3b;
		//imul    ecx
        ll_tmp = (long long)(int)eax * (long long)(int)ecx;
        edx = ll_tmp>>0x20;
        eax = ll_tmp;
		edx = (edx<<0xd)|(eax>>0x13);
		eax <<= 0xd;
		ebx = (int)ebx*0x5780;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		//shr     eax, 1
		//adc     eax, byte 0
        eax = (eax&1) ? (eax>>1)+1 : eax>>1;
___709c3h:
		edx = eax;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(ecx) = B(___24e878h);
		D(eax*4+___68990h) = edx;
		//test    cl, cl
		//je      near ___70a59h
        if(L(ecx) == 0) goto ___70a59h;
		//test    cl, 0fh
		//jne     short ___70a19h
        if(L(ecx)&0xf) goto ___70a19h;
		L(edx) = B(___19a53eh);
		//cmp     dl, [___24e871h]
		//je      short ___70a19h
        if(L(edx) == B(___24e871h)) goto ___70a19h;
		edx = 0;
		L(edx) = L(ecx);
		ebx = edx;
		edx = 0;
		ebx = (int)ebx>>4;
		L(edx) = B(eax+___19a582h);
		edx += ebx;
		B(eax+___19a582h) = L(edx);
		//cmp     dl, 40h
		//jbe     short ___70a19h
        if(L(edx) <= 0x40) goto ___70a19h;
		B(eax+___19a582h) = 0x40;
___70a19h:
		L(ecx) = B(___24e878h);
		//test    cl, 0f0h
		//jne     short ___70a59h
        if(L(ecx)&0xf0) goto ___70a59h;
		H(ecx) = B(___24e871h);
		//cmp     ch, [___19a53eh]
		//je      short ___70a59h
        if(H(ecx) == B(___19a53eh)) goto ___70a59h;
		eax = 0;
		L(edx) = L(ecx);
		L(eax) = B(___24e87eh);
		L(edx) &= 0xf;
		H(edx) = B(eax+___19a582h);
		H(edx) -= L(edx);
		B(eax+___19a582h) = H(edx);
		//cmp     dh, 40h
		//jbe     short ___70a59h
        if(H(edx) <= 0x40) goto ___70a59h;
		H(ebx) = 0;
		B(eax+___19a582h) = H(ebx);
___70a59h:
		eax = 0;
		ebx = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		L(ebx) = B(___24e870h);
		L(edx) = B(eax+___19a582h);
		edx = (int)edx*(int)ebx;
		edx <<= 4;
		D(eax*4+___68a10h) = edx;
		//jmp     near ___71566h
        goto ___71566h;
___70a82h:
		eax = 0;
		L(eax) = B(___24e87eh);
		ebx = eax*2;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = eax*2;
		X(eax) = W(ebx+___19a644h);
		//cmp     ax, [edx+___19a562h]
		//je      near ___70c51h
        if(X(eax) == W(edx+___19a562h)) goto ___70c51h;
		eax = 0;
		L(eax) = B(___24e87eh);
		ebx = eax*2;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = eax*2;
		X(eax) = W(ebx+___19a644h);
		//cmp     ax, [edx+___19a562h]
		//jbe     near ___70b69h
        if(X(eax) <= W(edx+___19a562h)) goto ___70b69h;
		eax = 0;
		edx = 0;
		L(eax) = B(___24e87eh);
		L(edx) = L(eax);
		X(edx) = W(edx*2+___24e880h);
		X(ecx) = W(eax*2+___19a562h);
		edx <<= 2;
		ecx += edx;
		W(eax*2+___19a562h) = X(ecx);
		eax = 0;
		L(eax) = B(___24e87eh);
		ebx = eax*2;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = eax*2;
		X(eax) = W(ebx+___19a562h);
		//cmp     ax, [edx+___19a644h]
		//jbe     near ___70bfah
        if(X(eax) <= W(edx+___19a644h)) goto ___70bfah;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = eax*2;
		eax = 0;
		L(eax) = B(___24e87eh);
		ebx = eax*2;
		X(eax) = W(edx+___19a644h);
		W(ebx+___19a562h) = X(eax);
		//jmp     near ___70bfah
        goto ___70bfah;
___70b69h:
		eax = 0;
		L(eax) = B(___24e87eh);
		X(eax) = W(eax*2+___24e880h);
		eax &= 0xffff;
		edx = eax*4;
		eax = 0;
		L(eax) = B(___24e87eh);
		X(eax) = W(eax*2+___19a562h);
		eax &= 0xffff;
		//cmp     edx, eax
		//jg      short ___70bc6h
        if((int)edx > (int)eax) goto ___70bc6h;
		eax = 0;
		edx = 0;
		L(eax) = B(___24e87eh);
		L(edx) = L(eax);
		X(edx) = W(edx*2+___24e880h);
		X(edi) = W(eax*2+___19a562h);
		edx <<= 2;
		edi -= edx;
		W(eax*2+___19a562h) = X(edi);
		//jmp     short ___70bd7h
        goto ___70bd7h;
___70bc6h:
		eax = 0;
		L(eax) = B(___24e87eh);
		ecx = 0;
		W(eax*2+___19a562h) = X(ecx);
___70bd7h:
		eax = 0;
		L(eax) = B(___24e87eh);
		eax += eax;
		X(edx) = W(eax+___19a562h);
		X(ebx) = W(eax+___19a644h);
		//cmp     dx, bx
		//jae     short ___70bfah
        if(X(edx) >= X(ebx)) goto ___70bfah;
		W(eax+___19a562h) = X(ebx);
___70bfah:
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		ebx = D(___24e850h);
		X(edx) = W(eax*2+___19a542h);
		ecx = D(ebx+edx*4);
		X(eax) = W(eax*2+___19a562h);
		ebx = 0;
		X(ebx) = X(eax);
		eax = 0;
		//or      ebx, ebx
		//je      short ___70c42h
        if(ebx == 0) goto ___70c42h;
		eax = 0x6d3b;
		//imul    ecx
        ll_tmp = (long long)(int)eax * (long long)(int)ecx;
        edx = ll_tmp>>0x20;
        eax = ll_tmp;
		edx = (edx<<0xd)|(eax>>0x13);
		eax <<= 0xd;
		ebx = (int)ebx*0x5780;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		//shr     eax, 1
		//adc     eax, byte 0
        eax = (eax&1) ? (eax>>1)+1 : eax>>1;
___70c42h:
		edx = 0;
		L(edx) = B(___24e87eh);
		D(edx*4+___68990h) = eax;
___70c51h:
		H(ecx) = B(___24e878h);
		//test    ch, ch
		//je      near ___70cddh
        if(H(ecx) == 0) goto ___70cddh;
		//test    ch, 0fh
		//jne     short ___70c9dh
        if(H(ecx)&0xf) goto ___70c9dh;
		L(eax) = B(___19a53eh);
		//cmp     al, [___24e871h]
		//je      short ___70c9dh
        if(L(eax) == B(___24e871h)) goto ___70c9dh;
		edx = 0;
		eax = 0;
		L(edx) = H(ecx);
		L(eax) = B(___24e87eh);
		ebx = edx;
		edx = 0;
		ebx = (int)ebx>>4;
		L(edx) = B(eax+___19a582h);
		edx += ebx;
		B(eax+___19a582h) = L(edx);
		//cmp     dl, 40h
		//jbe     short ___70c9dh
        if(L(edx) <= 0x40) goto ___70c9dh;
		B(eax+___19a582h) = 0x40;
___70c9dh:
		L(ebx) = B(___24e878h);
		//test    bl, 0f0h
		//jne     short ___70cddh
        if(L(ebx)&0xf0) goto ___70cddh;
		H(ebx) = B(___24e871h);
		//cmp     bh, [___19a53eh]
		//je      short ___70cddh
        if(H(ebx) == B(___19a53eh)) goto ___70cddh;
		eax = 0;
		L(edx) = L(ebx);
		L(eax) = B(___24e87eh);
		L(edx) &= 0xf;
		L(ecx) = B(eax+___19a582h);
		L(ecx) -= L(edx);
		B(eax+___19a582h) = L(ecx);
		//cmp     cl, 40h
		//jbe     short ___70cddh
        if(L(ecx) <= 0x40) goto ___70cddh;
		L(edx) = 0;
		B(eax+___19a582h) = L(edx);
___70cddh:
		eax = 0;
		edx = 0;
		L(eax) = B(___24e87eh);
		ebx = 0;
		L(edx) = B(___24e870h);
		L(ebx) = B(eax+___19a582h);
		edx = (int)edx*(int)ebx;
		edx <<= 4;
		D(eax*4+___68a10h) = edx;
		//jmp     near ___71566h
        goto ___71566h;
___70d06h:
		eax = 0;
		edx = 0;
		L(eax) = B(___19a540h);
		L(edx) = B(___24e871h);
		edx = (int)edx*(int)eax;
		eax = 0;
		L(eax) = B(___19a53eh);
		edx -= eax;
		L(eax) = B(___24e878h);
		ebx = 0;
		L(eax) &= 0xf;
		L(ebx) = L(eax);
		eax = edx;
		edx = (int)edx>>0x1f;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		//test    edx, edx
		//jne     near ___71566h
        if(edx) goto ___71566h;
		eax = 0;
		L(edx) = B(___24e871h);
		L(eax) = B(___19a540h);
		edx = (int)edx*(int)eax;
		eax = 0;
		L(eax) = B(___19a53eh);
		//cmp     edx, eax
		//je      near ___71566h
        if(edx == eax) goto ___71566h;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = eax*2;
		eax = 0;
		L(eax) = B(___24e87eh);
		ebx = eax*2;
		X(eax) = W(edx+___19a542h);
		W(ebx+___688d0h) = X(eax);
		eax = 0;
		L(eax) = B(___24e878h);
		eax = (int)eax>>4;
		eax--;
		//cmp     eax, byte 0eh
		//ja      near ___71017h
        if(eax > 0xe) goto ___71017h;
		//jmp     near dword [cs:eax*4+___6eed0h]

        switch(eax){
        case 0: goto ___70da0h;
        case 1: goto ___70dd6h;
        case 2: goto ___70e0dh;
        case 3: goto ___70e30h;
        case 4: goto ___70e53h;
        case 5: goto ___70e7ah;
        case 6: goto ___70eaah;
        case 7: goto ___71017h;
        case 8: goto ___70ebch;
        case 9: goto ___70eebh;
        case 0xa: goto ___70f1bh;
        case 0xb: goto ___70f4bh;
        case 0xc: goto ___70f7bh;
        case 0xd: goto ___70fa8h;
        case 0xe: goto ___70fe4h;
        default:
            break;
        }

___70da0h:
		eax = 0;
		L(eax) = B(___24e87eh);
		//cmp     byte [eax+___19a582h], 1
		//jb      short ___70dc2h
        if(B(eax+___19a582h) < 1) goto ___70dc2h;
		eax = 0;
		L(eax) = B(___24e87eh);
		B(eax+___19a582h)--;
		//jmp     near ___71017h
        goto ___71017h;
___70dc2h:
		eax = 0;
		L(eax) = B(___24e87eh);
		H(ebx) = 0;
		B(eax+___19a582h) = H(ebx);
		//jmp     near ___71017h
        goto ___71017h;
___70dd6h:
		eax = 0;
		L(eax) = B(___24e87eh);
		//cmp     byte [eax+___19a582h], 2
		//jb      short ___70df9h
        if(B(eax+___19a582h) < 2) goto ___70df9h;
		eax = 0;
		L(eax) = B(___24e87eh);
		B(eax+___19a582h) -= 2;
		//jmp     near ___71017h
        goto ___71017h;
___70df9h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(edx) = 0;
		B(eax+___19a582h) = L(edx);
		//jmp     near ___71017h
        goto ___71017h;
___70e0dh:
		eax = 0;
		L(eax) = B(___24e87eh);
		//cmp     byte [eax+___19a582h], 4
		//jb      short ___70dc2h
        if(B(eax+___19a582h) < 4) goto ___70dc2h;
		eax = 0;
		L(eax) = B(___24e87eh);
		B(eax+___19a582h) -= 4;
		//jmp     near ___71017h
        goto ___71017h;
___70e30h:
		eax = 0;
		L(eax) = B(___24e87eh);
		//cmp     byte [eax+___19a582h], 8
		//jb      short ___70df9h
        if(B(eax+___19a582h) < 8) goto ___70df9h;
		eax = 0;
		L(eax) = B(___24e87eh);
		B(eax+___19a582h) -= 8;
		//jmp     near ___71017h
        goto ___71017h;
___70e53h:
		eax = 0;
		L(eax) = B(___24e87eh);
		//cmp     byte [eax+___19a582h], 10h
		//jb      near ___70dc2h
        if(B(eax+___19a582h) < 0x10) goto ___70dc2h;
		eax = 0;
		L(eax) = B(___24e87eh);
		B(eax+___19a582h) -= 0x10;
		//jmp     near ___71017h
        goto ___71017h;
___70e7ah:
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		L(edx) = B(eax+___19a582h);
		edx += edx;
		ebx = 3;
		eax = edx;
		edx = (int)edx>>0x1f;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		edx = 0;
		L(edx) = B(___24e87eh);
		B(edx+___19a582h) = L(eax);
		//jmp     near ___71017h
        goto ___71017h;
___70eaah:
		eax = 0;
		L(eax) = B(___24e87eh);
		B(eax+___19a582h) >>= 1;
		//jmp     near ___71017h
        goto ___71017h;
___70ebch:
		eax = 0;
		L(eax) = B(___24e87eh);
		H(ecx) = B(eax+___19a582h);
		edx = 0;
		H(ecx)++;
		L(edx) = L(eax);
		B(eax+___19a582h) = H(ecx);
		//cmp     byte [edx+___19a582h], 40h
		//jbe     near ___71017h
        if(B(edx+___19a582h) <= 0x40) goto ___71017h;
		eax = 0;
		L(eax) = L(edx);
		//jmp     near ___71010h
        goto ___71010h;
___70eebh:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(ebx) = B(eax+___19a582h);
		edx = 0;
		L(ebx) += 2;
		L(edx) = L(eax);
		B(eax+___19a582h) = L(ebx);
		//cmp     byte [edx+___19a582h], 40h
		//jbe     near ___71017h
        if(B(edx+___19a582h) <= 0x40) goto ___71017h;
		eax = 0;
		L(eax) = L(edx);
		//jmp     near ___71010h
        goto ___71010h;
___70f1bh:
		eax = 0;
		L(eax) = B(___24e87eh);
		H(ecx) = B(eax+___19a582h);
		edx = 0;
		H(ecx) += 4;
		L(edx) = L(eax);
		B(eax+___19a582h) = H(ecx);
		//cmp     byte [edx+___19a582h], 40h
		//jbe     near ___71017h
        if(B(edx+___19a582h) <= 0x40) goto ___71017h;
		eax = 0;
		L(eax) = L(edx);
		//jmp     near ___71010h
        goto ___71010h;
___70f4bh:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(ebx) = B(eax+___19a582h);
		edx = 0;
		L(ebx) += 8;
		L(edx) = L(eax);
		B(eax+___19a582h) = L(ebx);
		//cmp     byte [edx+___19a582h], 40h
		//jbe     near ___71017h
        if(B(edx+___19a582h) <= 0x40) goto ___71017h;
		eax = 0;
		L(eax) = L(edx);
		//jmp     near ___71010h
        goto ___71010h;
___70f7bh:
		eax = 0;
		L(eax) = B(___24e87eh);
		H(ecx) = B(eax+___19a582h);
		edx = 0;
		H(ecx) += 0x10;
		L(edx) = L(eax);
		B(eax+___19a582h) = H(ecx);
		//cmp     byte [edx+___19a582h], 40h
		//jbe     near ___71017h
        if(B(edx+___19a582h) <= 0x40) goto ___71017h;
		eax = 0;
		L(eax) = L(edx);
		//jmp     short ___71010h
        goto ___71010h;
___70fa8h:
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		L(edx) = B(eax+___19a582h);
		edx = edx+edx*2;
		eax = edx;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		L(edx) = L(eax);
		eax = 0;
		L(eax) = B(___24e87eh);
		B(eax+___19a582h) = L(edx);
		eax = 0;
		L(eax) = B(___24e87eh);
		//cmp     byte [eax+___19a582h], 40h
		//jbe     short ___71017h
        if(B(eax+___19a582h) <= 0x40) goto ___71017h;
		//jmp     short ___71009h
        goto ___71009h;
___70fe4h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(edx) = B(eax+___19a582h);
		L(edx) += L(edx);
		B(eax+___19a582h) = L(edx);
		eax = 0;
		L(eax) = B(___24e87eh);
		//cmp     byte [eax+___19a582h], 40h
		//jbe     short ___71017h
        if(B(eax+___19a582h) <= 0x40) goto ___71017h;
___71009h:
		eax = 0;
		L(eax) = B(___24e87eh);
___71010h:
		B(eax+___19a582h) = 0x40;
___71017h:
		eax = 0;
		edx = 0;
		L(eax) = B(___24e87eh);
		ebx = 0;
		L(edx) = B(___24e870h);
		L(ebx) = B(eax+___19a582h);
		edx = (int)edx*(int)ebx;
		edx <<= 4;
		D(eax*4+___68a10h) = edx;
		//jmp     near ___71566h
        goto ___71566h;
___71040h:
		L(edx) = B(eax+___19a5d2h);
		L(edx) &= 0xc;
		edx &= 0xff;
		edx = (int)edx>>2;
		//cmp     edx, byte 3
		//ja      near ___7112eh
        if(edx > 3) goto ___7112eh;
		//jmp     near dword [cs:edx*4+___6ef0ch]

        switch(edx){
        case 0: goto ___71063h;
        case 1: goto ___7109eh;
        case 2: goto ___710d3h;
        case 3: goto ___7110dh;
        default:
            break;
        }

___71063h:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5b2h);
		eax &= 0xff;
		edx = D(eax*2+___19a4bah);
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		edx = (int)edx>>0x10;
		L(eax) &= 0xf;
		eax &= 0xff;
		eax = (int)eax*(int)edx;
		eax = (int)eax>>8;
		//mp     near ___71129h
        goto ___71129h;
___7109eh:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5b2h);
		edx = 0x20;
		eax &= 0xff;
		edx -= eax;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		L(eax) &= 0xf;
		eax &= 0xff;
		eax = (int)eax*(int)edx;
		eax = (int)eax>>6;
		//jmp     short ___71129h
        goto ___71129h;
___710d3h:
		edx = 0;
		L(edx) = B(eax+___19a5b2h);
		//cmp     word [NoSplit edx*2+___19a4bch], byte 0
		//jl      short ___710fch
        if((short)W(edx*2+___19a4bch) < 0) goto ___710fch;
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a5c2h);
		L(eax) &= 0xf;
		eax &= 0xff;
		//jmp     short ___71129h
        goto ___71129h;
___710fch:
		L(eax) = B(eax+___19a5c2h);
		L(eax) &= 0xf;
		eax &= 0xff;
		eax = 0-eax;
		//jmp     short ___71129h
        goto ___71129h;
___7110dh:
		L(eax) = B(eax+___19a5c2h);
		edx = 0;
		L(eax) &= 0xf;
		L(edx) = L(eax);
		eax = rand_();
		eax -= 0x4000;
		eax = (int)eax*(int)edx;
		eax = (int)eax>>0xd;
___71129h:
		D(___24e874h) = eax;
___7112eh:
		L(ecx) = B(___24e871h);
		//cmp     cl, [___19a53eh]
		//je      short ___7116bh
        if(L(ecx) == B(___19a53eh)) goto ___7116bh;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		L(edx) = B(eax+___19a5c2h);
		ebx = edx;
		edx = 0;
		ebx = (int)ebx>>4;
		L(edx) = B(eax+___19a5b2h);
		edx += ebx;
		H(ecx) = L(edx);
		B(eax+___19a5b2h) = L(edx);
		H(ecx) &= 0x3f;
		B(eax+___19a5b2h) = H(ecx);
___7116bh:
		eax = 0;
		L(eax) = B(___24e87eh);
		L(eax) = B(eax+___19a582h);
		edi = D(___24e874h);
		eax &= 0xff;
		edi += eax;
		D(___24e874h) = edi;
		//test    edi, edi
		//jge     short ___71196h
        if((int)edi >= 0) goto ___71196h;
		eax = 0;
		D(___24e874h) = eax;
___71196h:
		//cmp     dword [___24e874h], byte 40h
		//jle     short ___711a9h
        if((int)D(___24e874h) <= 0x40) goto ___711a9h;
		D(___24e874h) = 0x40;
___711a9h:
		eax = 0;
		L(eax) = B(___24e870h);
		ecx = D(___24e874h);
		edx = eax;
		edx = (int)edx*(int)ecx;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx <<= 4;
		D(eax*4+___68a10h) = edx;
		//jmp     near ___71566h
        goto ___71566h;
___711d1h:
		edx = 0;
		L(edx) = B(___24e878h);
		edx = (int)edx>>4;
		//cmp     edx, byte 0ch
		//jb      near ___71566h
        if(edx < 0xc) goto ___71566h;
		ecx = eax*2;
		//jbe     short ___711f8h
        if(edx <= 0xc) goto ___711f8h;
		//cmp     edx, byte 0dh
		//je      short ___71229h
        if(edx == 0xd) goto ___71229h;
  		//jmp     near ___71566h
        goto ___71566h;
___711f8h:
		L(edx) = B(eax+___19a5e4h);
		//test    dl, dl
		//je      short ___71211h
        if(L(edx) == 0) goto ___71211h;
		H(ebx) = L(edx);
		H(ebx)--;
		B(eax+___19a5e4h) = H(ebx);
		//jmp     near ___71566h
        goto ___71566h;
___71211h:
		B(eax+___19a592h) = L(edx);
		B(eax+___19a5a2h) = L(edx);
		W(ecx+___688d0h) = X(esi);
		//jmp     near ___71566h
        goto ___71566h;
___71229h:
		L(edx) = B(eax+___19a5e4h);
		//test    dl, dl
		//je      short ___71242h
        if(L(edx) == 0) goto ___71242h;
		L(ecx) = L(edx);
		L(ecx)--;
		B(eax+___19a5e4h) = L(ecx);
		//jmp     near ___71566h
        goto ___71566h;
___71242h:
		edx = 0;
		X(edx) = W(ecx+___19a604h);
		edx = (int)edx>>8;
		B(___24e87fh) = L(edx);
		L(edx) = B(ecx+___19a604h);
		B(___24e87ch) = L(edx);
		edx = 0;
		X(edx) = W(ecx+___19a624h);
		edx = (int)edx>>8;
		B(___24e87dh) = L(edx);
		X(edx) = W(ecx+___19a624h);
		H(edx) = 0;
		W(___24e87ah) = X(edx);
		//test    byte [___24e87fh], 20h
		//je      near ___7135ah
        if((B(___24e87fh)&0x20) == 0) goto ___7135ah;
		X(edx) = W(___24e87ah);
		//test    dx, dx
		//jne     short ___712e8h
        if(X(edx)) goto ___712e8h;
		X(eax) = W(ecx+___19a542h);
		W(___24e87ah) = X(eax);
		//test    ax, ax
		//jne     short ___712b7h
        if(X(eax)) goto ___712b7h;
		L(ecx) = 0;
		B(___24e87dh) = L(ecx);
		//jmp     short ___71307h
        goto ___71307h;
___712b7h:
		L(ebx) = B(___24e87dh);
		//cmp     bl, 0ffh
		//je      short ___712c6h
        if(L(ebx) == 0xff) goto ___712c6h;
		//test    bl, bl
		//jne     short ___71307h
        if(L(ebx)) goto ___71307h;
___712c6h:
		eax = 0;
		edx = D(___24e864h);
		X(eax) = W(___24e87ah);
		eax += edx;
		edx = 0;
		L(edx) = B(___24e87eh);
		L(eax) = B(eax);
		B(edx+___19a582h) = L(eax);
		//jmp     short ___71307h
        goto ___71307h;
___712e8h:
		W(ecx+___19a542h) = X(edx);
		edx = 0;
		ebx = D(___24e864h);
		X(edx) = W(___24e87ah);
		L(edx) = B(edx+ebx);
		B(eax+___19a582h) = L(edx);
___71307h:
		eax = 0;
		L(eax) = B(___24e87eh);
		eax += eax;
		X(edx) = W(___24e87ah);
		H(ecx) = B(___24e87dh);
		W(eax+___688d0h) = X(edx);
		//cmp     ch, 0ffh
		//je      short ___7135ah
        if(H(ecx) == 0xff) goto ___7135ah;
 		//test    ch, ch
		//je      short ___7135ah
        if(H(ecx) == 0) goto ___7135ah;
		L(edx) = H(ecx);
		L(edx) &= 0xf;
		edx &= 0xff;
		X(edx) = W(edx*2+___19a484h);
		ecx = 0;
		L(ecx) = B(___24e87dh);
		edx &= 0xffff;
		ecx = (int)ecx>>4;
		edx = (int)edx>>L(ecx);
		W(eax+___19a562h) = X(edx);
___7135ah:
		//test    byte [___24e87fh], 40h
		//je      short ___71376h
        if((B(___24e87fh)&0x40) == 0) goto ___71376h;
		edx = 0;
		L(edx) = B(___24e87eh);
		L(eax) = B(___24e87ch);
		B(edx+___19a582h) = L(eax);
___71376h:
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		ebx = D(___24e850h);
		X(edx) = W(eax*2+___19a542h);
		ecx = D(ebx+edx*4);
		X(eax) = W(eax*2+___19a562h);
		ebx = 0;
		X(ebx) = X(eax);
		eax = 0;
		//or      ebx, ebx
		//je      short ___713beh
        if(ebx == 0) goto ___713beh;
		eax = 0x6d3b;
		//imul    ecx
        ll_tmp = (long long)(int)eax * (long long)(int)ecx;
        edx = ll_tmp>>0x20;
        eax = ll_tmp;
		edx = (edx<<0xd)|(eax>>0x13);
		eax <<= 0xd;
		ebx = (int)ebx*0x5780;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		//shr     eax, 1
		//adc     eax, byte 0
        eax = (eax&1) ? (eax>>1)+1 : eax>>1;
___713beh:
		edx = eax;
		eax = 0;
		L(eax) = B(___24e87eh);
		ebx = 0;
		D(eax*4+___68990h) = edx;
		edx = 0;
		L(ebx) = B(eax+___19a582h);
		L(edx) = B(___24e870h);
		edx = (int)edx*(int)ebx;
		edx <<= 4;
		L(ebx) = 0;
		D(eax*4+___68a10h) = edx;
		B(eax+___19a592h) = L(ebx);
		B(eax+___19a5a2h) = L(ebx);
		//jmp     near ___71566h
        goto ___71566h;
___713feh:
		L(edx) = B(eax+___19a5d2h);
		L(edx) &= 3;
		//cmp     dl, 3
		//ja      near ___714c4h
        if(L(edx) > 3) goto ___714c4h;
		edx &= 0xff;
		//jmp     near dword [cs:edx*4+___6ef1ch]

        switch(edx){
        case 0: goto ___7141eh;
        case 1: goto ___71449h;
        case 2: goto ___7146dh;
        case 3: goto ___714a3h;
        default:
            break;
        }

___7141eh:
		edx = 0;
		L(edx) = B(eax+___19a5b2h);
		edx = D(edx*2+___19a4bah);
		L(eax) = B(eax+___19a5c2h);
		edx = (int)edx>>0x10;
		L(eax) &= 0xf;
		eax &= 0xff;
		eax = (int)eax*(int)edx;
		eax++;
		eax = (int)eax>>9;
		//jmp     near ___714bfh
        goto ___714bfh;
___71449h:
		edx = 0;
		ebx = 0x20;
		L(edx) = B(eax+___19a5b2h);
		L(eax) = B(eax+___19a5c2h);
		ebx -= edx;
		L(eax) &= 0xf;
		eax &= 0xff;
		eax = (int)eax*(int)ebx;
		eax = (int)eax>>4;
		//jmp     short ___714bfh
        goto ___714bfh;
___7146dh:
		edx = 0;
		L(edx) = B(eax+___19a5b2h);
		//cmp     word [NoSplit edx*2+___19a4bch], byte 0
		//jl      short ___7148fh
        if((short)W(edx*2+___19a4bch) < 0) goto ___7148fh;
		L(eax) = B(eax+___19a5c2h);
		L(eax) &= 0xf;
		eax &= 0xff;
		//jmp     short ___714bfh
        goto ___714bfh;
___7148fh:
		L(eax) = B(eax+___19a5c2h);
		L(eax) &= 0xf;
		eax &= 0xff;
		eax <<= 2;
		eax = 0-eax;
		//jmp     short ___714bfh
        goto ___714bfh;
___714a3h:
		L(eax) = B(eax+___19a5c2h);
		edx = 0;
		L(eax) &= 0xf;
		L(edx) = L(eax);
		eax = rand_();
		eax -= 0x4000;
		eax = (int)eax*(int)edx;
		eax = (int)eax>>0xe;
___714bfh:
		D(___24e874h) = eax;
___714c4h:
		H(edx) = B(___24e871h);
		//cmp     dh, [___19a53eh]
		//je      short ___71506h
        if(H(edx) == B(___19a53eh)) goto ___71506h;
		eax = 0;
		L(eax) = B(___24e87eh);
		edx = 0;
		L(edx) = B(eax+___19a5c2h);
		ebx = edx;
		edx = 0;
		ebx = (int)ebx>>4;
		L(edx) = B(eax+___19a5b2h);
		edx += ebx;
		B(eax+___19a5b2h) = L(edx);
		//cmp     dl, 40h
		//jb      short ___71506h
        if(L(edx) < 0x40) goto ___71506h;
		H(ebx) = L(edx);
		H(ebx) -= 0x40;
		B(eax+___19a5b2h) = H(ebx);
___71506h:
		eax = 0;
		ecx = D(___24e850h);
		L(eax) = B(___24e87eh);
		edx = 0;
		X(edi) = W(___24e874h);
		X(edx) = W(eax*2+___19a542h);
		X(eax) = W(eax*2+___19a562h);
		ebx = 0;
		eax += edi;
		ecx = D(ecx+edx*4);
___71533h:
		X(ebx) = X(eax);
		eax = 0;
		//or      ebx, ebx
		//je      short ___71557h
        if(ebx == 0) goto ___71557h;
		eax = 0x6d3b;
		//imul    ecx
        ll_tmp = (long long)(int)eax * (long long)(int)ecx;
        edx = ll_tmp>>0x20;
        eax = ll_tmp;
		edx = (edx<<0xd)|(eax>>0x13);
		eax <<= 0xd;
		ebx = (int)ebx*0x5780;
		//idiv    ebx
        ll_tmp = edx;
        ll_tmp <<= 0x20;
        ll_tmp |= eax;
        eax = ll_tmp/(int)ebx;
        edx = ll_tmp%(int)ebx;
		//shr     eax, 1
		//adc     eax, byte 0
        eax = (eax&1) ? (eax>>1)+1 : eax>>1;
___71557h:
		edx = 0;
		L(edx) = B(___24e87eh);
		D(edx*4+___68990h) = eax;
___71566h:
		L(eax) = B(___24e87eh);
		L(eax)++;
		B(___24e87eh) = L(eax);
		//cmp     al, 10h
		//jne     near ___70133h
        if(L(eax) != 0x10) goto ___70133h;
		L(edx) = 1;
		B(___19a540h) = L(edx);
		B(___19a53eh) -= L(edx);
___71588h:
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
        return;
}

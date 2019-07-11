#include "x86.h"

    extern byte ___688d0h[];
    extern byte ___68910h[];
    extern byte ___68990h[];
    extern byte ___68a10h[];
    extern byte ___68a90h[];
    extern byte ___68c40h[];
    extern byte ___19a279h[];
    extern byte ___19a281h[];
    extern byte SFX_Ptr[];
    extern byte ___19a468h[];
    extern byte ___19a469h[];
    extern byte ___19a46ah[];
    extern byte ___19a46ch[];
    extern byte ___19a470h[];
    extern byte ___19a474h[];
    extern byte ___19a478h[];
    extern byte ___19a47ch[];
    extern byte ___19a480h[];
    extern byte ___19a484h[];
    extern byte ___19a49ch[];
    extern byte ___19a4bah[];
    extern byte ___19a4bch[];
    extern byte ___19a53ch[];
    extern byte ___19a53dh[];
    extern byte ___19a53eh[];
    extern byte ___19a53fh[];
    extern byte ___19a540h[];
    extern byte ___19a542h[];
    extern byte ___19a562h[];
    extern byte ___19a582h[];
    extern byte ___19a592h[];
    extern byte ___19a5a2h[];
    extern byte ___19a5b2h[];
    extern byte ___19a5c2h[];
    extern byte ___19a5d2h[];
    extern byte ___19a5e0h[];
    extern byte ___19a5e2h[];
    extern byte ___19a5e4h[];
    extern byte ___19a5f4h[];
    extern byte ___19a604h[];
    extern byte ___19a624h[];
    extern byte ___19a644h[];
    extern byte ___19a664h[];
    extern byte ___19a674h[];
    extern byte ___19a684h[];
    extern byte ___19a685h[];
    extern byte ___19a686h[];
    extern byte ___24e7a0h[];
    extern byte ___24e7a5h[];
    extern byte ___24e7a6h[];
    extern byte ___24e830h[];
    extern byte ___24e850h[];
    extern byte ___24e854h[];
    extern byte ___24e85ch[];
    extern byte ___24e864h[];
    extern byte ___24e86eh[];
    extern byte S3M_InitialTempo[];
    extern byte S3M_GlobalVolume[];
    extern byte S3M_InitialSpeed[];
    extern byte ___24e872h[];
    extern byte ___24e874h[];
    extern byte ___24e878h[];
    extern byte ___24e879h[];
    extern byte ___24e87ah[];
    extern byte ___24e87ch[];
    extern byte ___24e87dh[];
    extern byte ___24e87eh[];
    extern byte ___24e87fh[];
    extern byte ___24e880h[];
    extern byte ___24e8a0h[];

	void ___68c42h(void);
    int rand__clib3r(void);

    static dword idiv_quo(dword, dword, dword);
    #pragma aux idiv_quo =      \
        "idiv   ebx"            \
        parm [eax][edx][ebx]

	static dword idiv_rem(dword, dword, dword);
    #pragma aux idiv_rem =          \
        "idiv   ebx"                \
        parm [eax][edx][ebx]      \
        value [edx]

    static dword imul_edx(dword, dword);
    #pragma aux imul_edx =      \
        "imul edx"              \
        parm [eax][edx]         \
        value [edx]

    static dword imul_eax(dword, dword);
    #pragma aux imul_eax =      \
        "imul edx"              \
        parm [eax][edx]         \
        value [eax]


// 6ef2ch
void ___6ef2ch__audio(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;

	byte 	__esp[8];	
	byte * 	esp = __esp + 8;


//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		mov     ah, [__CEXT_V(___19a281h)]
	ah = B(___19a281h);
//		test    ah, ah
//		jne     ___71588h
	if(ah != 0) goto ___71588h;
//		cmp     byte [__CEXT_V(___19a468h)], 0
//		je      ___6f02fh
	if(B(___19a468h) == 0) goto ___6f02fh;
//		mov     [__CEXT_V(___19a469h)], ah
	B(___19a469h) = ah;
//		mov     bl, 1
	bl = 1;
//		mov     [__CEXT_V(___19a53dh)], ah
	B(___19a53dh) = ah;
//		mov     [__CEXT_V(___19a53ch)], bl
	B(___19a53ch) = bl;
//		xor     bh, bh
	bh = 0;
//		mov     [__CEXT_V(___19a46ah)], ah
	B(___19a46ah) = ah;
//		mov     [__CEXT_V(___19a53eh)], ah
	B(___19a53eh) = ah;
//		mov     [__CEXT_V(___19a540h)], bl
	B(___19a540h) = bl;
//		xor     al, al
	al = 0;
//		xor     bl, bl
	bl = 0;
//		mov     [__CEXT_V(___19a53fh)], ah
	B(___19a53fh) = ah;
//		mov     [__CEXT_V(___19a684h)], ah
	B(___19a684h) = ah;
//		mov     [__CEXT_V(___19a685h)], ah
	B(___19a685h) = ah;
//		mov     [__CEXT_V(___19a686h)], ah
	B(___19a686h) = ah;
//		mov     [__CEXT_V(___19a5e2h)], ax
	W(___19a5e2h) = ax;
//		mov     [__CEXT_V(___24e87eh)], ah
	B(___24e87eh) = ah;
___6ef9dh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     cl, al
	cl = al;
//		mov     [eax*2+__CEXT_V(___19a542h)], bx
	W(eax*2+___19a542h) = bx;
//		mov     [eax*2+__CEXT_V(___19a562h)], bx
	W(eax*2+___19a562h) = bx;
//		mov     [eax+__CEXT_V(___19a582h)], bl
	B(eax+___19a582h) = bl;
//		mov     [eax+__CEXT_V(___19a592h)], bl
	B(eax+___19a592h) = bl;
//		mov     [eax+__CEXT_V(___19a5a2h)], bl
	B(eax+___19a5a2h) = bl;
//		mov     [eax+__CEXT_V(___19a5b2h)], bl
	B(eax+___19a5b2h) = bl;
//		mov     [eax+__CEXT_V(___19a5c2h)], bl
	B(eax+___19a5c2h) = bl;
//		mov     [eax+__CEXT_V(___19a5d2h)], bl
	B(eax+___19a5d2h) = bl;
//		mov     [eax+__CEXT_V(___19a5e4h)], bl
	B(eax+___19a5e4h) = bl;
//		mov     [eax+__CEXT_V(___19a5f4h)], bl
	B(eax+___19a5f4h) = bl;
//		mov     [eax*2+__CEXT_V(___19a604h)], bx
	W(eax*2+___19a604h) = bx;
//		mov     [eax*2+__CEXT_V(___19a624h)], bx
	W(eax*2+___19a624h) = bx;
//		mov     [eax*2+__CEXT_V(___19a644h)], bx
	W(eax*2+___19a644h) = bx;
//		mov     [eax*2+__CEXT_V(___24e880h)], bx
	W(eax*2+___24e880h) = bx;
//		mov     [eax+__CEXT_V(___19a664h)], bl
	B(eax+___19a664h) = bl;
//		inc     cl
	cl++;
//		mov     [eax+__CEXT_V(___19a674h)], bl
	B(eax+___19a674h) = bl;
//		mov     [__CEXT_V(___24e87eh)], cl
	B(___24e87eh) = cl;
//		cmp     cl, 10h
//		jne     ___6ef9dh
	if(cl != 0x10) goto ___6ef9dh;
//		call    __CEXT_F(___68c42h)
	___68c42h();
//		xor     al, al
	al = 0;
//		mov     [__CEXT_V(___19a468h)], al
	B(___19a468h) = al;
___6f02fh:
//		mov     edx, [__CEXT_V(___19a46ch)]
	edx = D(___19a46ch);
//		cmp     edx, byte 0ffffffffh
//		je      ___6f079h
	if(edx == 0xffffffff) goto ___6f079h;
//		mov     eax, edx
	eax = edx;
//		sar     eax, 8
	eax = (int)eax >> 8;
//		and     eax, 0ffh
	eax &= 0xff;
//		mov     [__CEXT_V(___19a469h)], al
	B(___19a469h) = al;
//		mov     al, [__CEXT_V(___19a46ch)]
	al = B(___19a46ch);
//		mov     [__CEXT_V(___19a53fh)], al
	B(___19a53fh) = al;
//		cmp     al, 3fh
//		jbe     ___6f05eh
	if(al <= 0x3f) goto ___6f05eh;
//		mov     byte [__CEXT_V(___19a53fh)], 3fh
	B(___19a53fh) = 0x3f;
___6f05eh:
//		xor     bl, bl
	bl = 0;
//		mov     dh, 1
	dh = 1;
//		mov     [__CEXT_V(___19a53dh)], bl
	B(___19a53dh) = bl;
//		mov     ebx, 0ffffffffh
	ebx = 0xffffffff;
//		mov     [__CEXT_V(___19a53ch)], dh
	B(___19a53ch) = dh;
//		mov     [__CEXT_V(___19a46ch)], ebx
	D(___19a46ch) = ebx;
___6f079h:
//		cmp     byte [__CEXT_V(___19a53eh)], 0
//		jne     ___70119h
	if(B(___19a53eh) != 0) goto ___70119h;
//		cmp     byte [__CEXT_V(___24e7a6h)], 0
//		jne     ___70119h
	if(B(___24e7a6h) != 0) goto ___70119h;
//		mov     ch, 1
	ch = 1;
//		mov     [__CEXT_V(___24e7a5h)], ch
	B(___24e7a5h) = ch;
//		cmp     ch, [__CEXT_V(___19a53ch)]
//		jne     ___6f2b8h
	if(ch != B(___19a53ch)) goto ___6f2b8h;
//		mov     ecx, 0ffffh
	ecx = 0xffff;
//		mov     esi, [__CEXT_V(SFX_Ptr)]
	esi = D(SFX_Ptr);
//		xor     ebx, ebx
	ebx = 0;
___6f0b4h:
//		cmp     bl, [__CEXT_V(___19a53dh)]
//		jne     ___6f1cch
	if(bl != B(___19a53dh)) goto ___6f1cch;
//		mov     al, [__CEXT_V(___19a469h)]
	al = B(___19a469h);
//		cmp     al, [__CEXT_V(___24e86eh)]
//		jae     ___6f0e4h
	if(al >= B(___24e86eh)) goto ___6f0e4h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___19a469h)]
	al = B(___19a469h);
//		mov     edx, [__CEXT_V(___24e85ch)]
	edx = D(___24e85ch);
//		cmp     byte [edx+eax], 0ffh
//		jne     ___6f1cch
	if(B(edx+eax) != 0xff) goto ___6f1cch;
___6f0e4h:
//		mov     [__CEXT_V(___19a469h)], bl
	B(___19a469h) = bl;
//		cmp     ebx, esi
//		je      ___6f0f8h
	if(ebx == esi) goto ___6f0f8h;
//		mov     eax, [__CEXT_V(___19a279h)]
	eax = D(___19a279h);
//		sar     eax, 18h
	eax = (int)eax >> 0x18;
//		jmp     ___6f0fdh
	goto ___6f0fdh;
___6f0f8h:
//		mov     eax, 10h
	eax = 0x10;
___6f0fdh:
//		mov     [__CEXT_V(___24e87eh)], bl
	B(___24e87eh) = bl;
//		mov     [__CEXT_V(___24e872h)], al
	B(___24e872h) = al;
//		cmp     bl, al
//		jae     ___6f1b3h
	if(bl >= al) goto ___6f1b3h;
___6f110h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     [eax*2+__CEXT_V(___19a542h)], bx
	W(eax*2+___19a542h) = bx;
//		mov     [eax*2+__CEXT_V(___19a562h)], bx
	W(eax*2+___19a562h) = bx;
//		mov     [eax+__CEXT_V(___19a582h)], bl
	B(eax+___19a582h) = bl;
//		mov     [eax+__CEXT_V(___19a592h)], bl
	B(eax+___19a592h) = bl;
//		mov     [eax+__CEXT_V(___19a5a2h)], bl
	B(eax+___19a5a2h) = bl;
//		mov     [eax+__CEXT_V(___19a5b2h)], bl
	B(eax+___19a5b2h) = bl;
//		mov     [eax+__CEXT_V(___19a5c2h)], bl
	B(eax+___19a5c2h) = bl;
//		mov     [eax+__CEXT_V(___19a5d2h)], bl
	B(eax+___19a5d2h) = bl;
//		mov     [eax+__CEXT_V(___19a5e4h)], bl
	B(eax+___19a5e4h) = bl;
//		mov     [eax+__CEXT_V(___19a5f4h)], bl
	B(eax+___19a5f4h) = bl;
//		mov     [eax*2+__CEXT_V(___19a604h)], bx
	W(eax*2+___19a604h) = bx;
//		mov     [eax*2+__CEXT_V(___19a624h)], bx
	W(eax*2+___19a624h) = bx;
//		mov     [eax*2+__CEXT_V(___19a644h)], bx
	W(eax*2+___19a644h) = bx;
//		mov     [eax*2+__CEXT_V(___24e880h)], bx
	W(eax*2+___24e880h) = bx;
//		mov     [eax+__CEXT_V(___19a664h)], bl
	B(eax+___19a664h) = bl;
//		mov     [eax+__CEXT_V(___19a674h)], bl
	B(eax+___19a674h) = bl;
//		mov     [eax*2+__CEXT_V(___688d0h)], cx
	W(eax*2+___688d0h) = cx;
//		mov     [eax*4+__CEXT_V(___68910h)], ebx
	D(eax*4+___68910h) = ebx;
//		mov     [eax*4+__CEXT_V(___68990h)], ebx
	D(eax*4+___68990h) = ebx;
//		mov     [eax*4+__CEXT_V(___68a10h)], ebx
	D(eax*4+___68a10h) = ebx;
//		inc     al
	al++;
//		mov     [__CEXT_V(___24e87eh)], al
	B(___24e87eh) = al;
//		cmp     al, [__CEXT_V(___24e872h)]
//		jb      ___6f110h
	if(al < B(___24e872h)) goto ___6f110h;
___6f1b3h:
//		mov     [__CEXT_V(___19a685h)], bl
	B(___19a685h) = bl;
//		mov     [__CEXT_V(___19a686h)], bl
	B(___19a686h) = bl;
//		mov     [__CEXT_V(___19a5e2h)], bx
	W(___19a5e2h) = bx;
//		mov     [__CEXT_V(___19a684h)], bl
	B(___19a684h) = bl;
___6f1cch:
//		cmp     bl, [__CEXT_V(___19a53dh)]
//		jne     ___6f1f7h
	if(bl != B(___19a53dh)) goto ___6f1f7h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___19a469h)]
	al = B(___19a469h);
//		mov     edx, [__CEXT_V(___24e85ch)]
	edx = D(___24e85ch);
//		cmp     byte [edx+eax], 0feh
//		jne     ___6f20ah
	if(B(edx+eax) != 0xfe) goto ___6f20ah;
//		mov     al, [__CEXT_V(___19a469h)]
	al = B(___19a469h);
//		inc     byte [__CEXT_V(___19a469h)]
	B(___19a469h)++;
//		jmp     ___6f0b4h
	goto ___6f0b4h;
___6f1f7h:
//		mov     al, [__CEXT_V(___19a469h)]
	al = B(___19a469h);
//		dec     byte [__CEXT_V(___19a469h)]
	B(___19a469h)--;
//		xor     bl, bl
	bl = 0;
//		mov     [__CEXT_V(___19a53dh)], bl
	B(___19a53dh) = bl;
___6f20ah:
//		mov     al, [__CEXT_V(___19a469h)]
	al = B(___19a469h);
//		inc     byte [__CEXT_V(___19a469h)]
	B(___19a469h)++;
//		xor     edx, edx
	edx = 0;
//		mov     dl, al
	dl = al;
//		mov     eax, [__CEXT_V(___24e85ch)]
	eax = D(___24e85ch);
//		mov     al, [edx+eax]
	al = B(edx+eax);
//		mov     edx, [__CEXT_V(___24e854h)]
	edx = D(___24e854h);
//		and     eax, 0ffh
	eax &= 0xff;
//		mov     eax, [edx+eax*4]
	eax = D(edx+eax*4);
//		xor     cl, cl
	cl = 0;
//		mov     [__CEXT_V(___24e8a0h)], eax
	D(___24e8a0h) = eax;
//		mov     [__CEXT_V(___19a46ah)], cl
	B(___19a46ah) = cl;
//		mov     al, [__CEXT_V(___19a53fh)]
	al = B(___19a53fh);
//		mov     [__CEXT_V(___19a53ch)], cl
	B(___19a53ch) = cl;
//		test    al, al
//		jbe     ___6f2b8h
	if(al <= 0) goto ___6f2b8h;
//		mov     ebx, 2
	ebx = 2;
//		xor     dh, dh
	dh = 0;
___6f256h:
//		mov     eax, [__CEXT_V(___24e8a0h)]
	eax = D(___24e8a0h);
//		mov     dl, [eax]
	dl = B(eax);
//		inc     eax
	eax++;
//		mov     [__CEXT_V(___24e87fh)], dl
	B(___24e87fh) = dl;
//		mov     [__CEXT_V(___24e8a0h)], eax
	D(___24e8a0h) = eax;
//		cmp     dh, dl
//		je      ___6f29bh
	if(dh == dl) goto ___6f29bh;
//		test    dl, 20h
//		je      ___6f27bh
	if((dl&0x20) == 0) goto ___6f27bh;
//		lea     edi, [eax+ebx]
	edi = eax+ebx;
//		mov     [__CEXT_V(___24e8a0h)], edi
	D(___24e8a0h) = edi;
___6f27bh:
//		test    byte [__CEXT_V(___24e87fh)], 40h
//		je      ___6f28ah
	if((B(___24e87fh)&0x40) == 0) goto ___6f28ah;
//		inc     dword [__CEXT_V(___24e8a0h)]
	D(___24e8a0h)++;
___6f28ah:
//		test    byte [__CEXT_V(___24e87fh)], 80h
//		je      ___6f256h
	if((B(___24e87fh)&0x80) == 0) goto ___6f256h;
//		add     [__CEXT_V(___24e8a0h)], ebx
	D(___24e8a0h) += ebx;
//		jmp     ___6f256h
	goto ___6f256h;
___6f29bh:
//		mov     cl, [__CEXT_V(___19a53fh)]
	cl = B(___19a53fh);
//		dec     cl
	cl--;
//		mov     [__CEXT_V(___19a53fh)], cl
	B(___19a53fh) = cl;
//		mov     al, [__CEXT_V(___19a46ah)]
	al = B(___19a46ah);
//		inc     byte [__CEXT_V(___19a46ah)]
	B(___19a46ah)++;
//		cmp     dl, cl
//		jb      ___6f256h
	if(dl < cl) goto ___6f256h;
___6f2b8h:
//		xor     ch, ch
	ch = 0;
//		mov     [__CEXT_V(___24e87eh)], ch
	B(___24e87eh) = ch;
___6f2c0h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     dl, dl
	dl = 0;
//		mov     [eax+__CEXT_V(___19a592h)], dl
	B(eax+___19a592h) = dl;
//		mov     dh, al
	dh = al;
//		inc     dh
	dh++;
//		mov     [__CEXT_V(___24e87eh)], dh
	B(___24e87eh) = dh;
//		cmp     dh, 10h
//		jne     ___6f2c0h
	if(dh != 0x10) goto ___6f2c0h;
//		mov     esi, 7a12h
	esi = 0x7a12;
___6f2e3h:
//		mov     eax, [__CEXT_V(___24e8a0h)]
	eax = D(___24e8a0h);
//		mov     dl, [eax]
	dl = B(eax);
//		inc     eax
	eax++;
//		mov     [__CEXT_V(___24e87fh)], dl
	B(___24e87fh) = dl;
//		mov     [__CEXT_V(___24e8a0h)], eax
	D(___24e8a0h) = eax;
//		test    dl, dl
//		je      ___700ech
	if(dl == 0) goto ___700ech;
//		mov     al, dl
	al = dl;
//		and     al, 1fh
	al &= 0x1f;
//		and     eax, 0ffh
	eax &= 0xff;
//		xor     dh, dh
	dh = 0;
//		xor     ebx, ebx
	ebx = 0;
//		mov     [__CEXT_V(___24e87dh)], dh
	B(___24e87dh) = dh;
//		mov     al, [eax+__CEXT_V(___24e830h)]
	al = B(eax+___24e830h);
//		mov     [__CEXT_V(___24e87ah)], bx
	W(___24e87ah) = bx;
//		mov     [__CEXT_V(___24e87eh)], al
	B(___24e87eh) = al;
//		cmp     al, 0ffh
//		jne     ___6f359h
	if(al != 0xff) goto ___6f359h;
//		test    dl, 20h
//		je      ___6f333h
	if((dl&0x20) == 0) goto ___6f333h;
//		add     dword [__CEXT_V(___24e8a0h)], byte 2
	D(___24e8a0h) += 2;
___6f333h:
//		test    byte [__CEXT_V(___24e87fh)], 40h
//		je      ___6f342h
	if((B(___24e87fh)&0x40) == 0) goto ___6f342h;
//		inc     dword [__CEXT_V(___24e8a0h)]
	D(___24e8a0h)++;
___6f342h:
//		test    byte [__CEXT_V(___24e87fh)], 80h
//		je      ___6f352h
	if((B(___24e87fh)&0x80) == 0) goto ___6f352h;
//		add     dword [__CEXT_V(___24e8a0h)], byte 2
	D(___24e8a0h) += 2;
___6f352h:
//		xor     al, al
	al = 0;
//		mov     [__CEXT_V(___24e87fh)], al
	B(___24e87fh) = al;
___6f359h:
//		test    byte [__CEXT_V(___24e87fh)], 20h
//		je      ___6f3bbh
	if((B(___24e87fh)&0x20) == 0) goto ___6f3bbh;
//		mov     eax, [__CEXT_V(___24e8a0h)]
	eax = D(___24e8a0h);
//		mov     dl, [eax]
	dl = B(eax);
//		inc     eax
	eax++;
//		mov     [__CEXT_V(___24e87dh)], dl
	B(___24e87dh) = dl;
//		mov     [__CEXT_V(___24e8a0h)], eax
	D(___24e8a0h) = eax;
//		cmp     dl, 0feh
//		jne     ___6f38bh
	if(dl != 0xfe) goto ___6f38bh;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     word [eax*2+__CEXT_V(___688d0h)], 0ffffh
	W(eax*2+___688d0h) = 0xffff;
___6f38bh:
//		mov     eax, [__CEXT_V(___24e8a0h)]
	eax = D(___24e8a0h);
//		xor     dh, dh
	dh = 0;
//		mov     dl, [eax]
	dl = B(eax);
//		xor     ebx, ebx
	ebx = 0;
//		mov     [__CEXT_V(___24e87ah)], dx
	W(___24e87ah) = dx;
//		mov     bl, dl
	bl = dl;
//		mov     edx, [__CEXT_V(___24e7a0h)]
	edx = D(___24e7a0h);
//		inc     eax
	eax++;
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		mov     [__CEXT_V(___24e8a0h)], eax
	D(___24e8a0h) = eax;
//		cmp     ebx, edx
//		jle     ___6f3bbh
	if((int)ebx <= (int)edx) goto ___6f3bbh;
//		xor     edi, edi
	edi = 0;
//		mov     [__CEXT_V(___24e87ah)], di
	W(___24e87ah) = di;
___6f3bbh:
//		test    byte [__CEXT_V(___24e87fh)], 40h
//		je      ___6f3d7h
	if((B(___24e87fh)&0x40) == 0) goto ___6f3d7h;
//		mov     eax, [__CEXT_V(___24e8a0h)]
	eax = D(___24e8a0h);
//		mov     dl, [eax]
	dl = B(eax);
//		inc     eax
	eax++;
//		mov     [__CEXT_V(___24e87ch)], dl
	B(___24e87ch) = dl;
//		mov     [__CEXT_V(___24e8a0h)], eax
	D(___24e8a0h) = eax;
___6f3d7h:
//		test    byte [__CEXT_V(___24e87fh)], 80h
//		je      ___6f582h
	if((B(___24e87fh)&0x80) == 0) goto ___6f582h;
//		mov     eax, [__CEXT_V(___24e8a0h)]
	eax = D(___24e8a0h);
//		inc     eax
	eax++;
//		mov     dl, [eax-1]
	dl = B(eax-1);
//		mov     [__CEXT_V(___24e8a0h)], eax
	D(___24e8a0h) = eax;
//		inc     eax
	eax++;
//		mov     [__CEXT_V(___24e879h)], dl
	B(___24e879h) = dl;
//		mov     dl, [eax-1]
	dl = B(eax-1);
//		mov     [__CEXT_V(___24e8a0h)], eax
	D(___24e8a0h) = eax;
//		mov     al, [__CEXT_V(___24e879h)]
	al = B(___24e879h);
//		mov     [__CEXT_V(___24e878h)], dl
	B(___24e878h) = dl;
//		cmp     al, 7
//		jb      ___6f582h
	if(al < 7) goto ___6f582h;
//		jbe     ___6f423h
	if(al <= 7) goto ___6f423h;
//		cmp     al, 13h
//		je      ___6f505h
	if(al == 0x13) goto ___6f505h;
//		jmp     ___6f582h
	goto ___6f582h;
___6f423h:
//		test    dl, dl
//		jne     ___6f439h
	if(dl != 0) goto ___6f439h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5a2h)]
	al = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
___6f439h:
//		cmp     byte [__CEXT_V(___24e87dh)], 0
//		je      ___6f4dch
	if(B(___24e87dh) == 0) goto ___6f4dch;
//		cmp     word [__CEXT_V(___24e87ah)], byte 0
//		jne     ___6f481h
	if(W(___24e87ah) != 0) goto ___6f481h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		cmp     word [eax*2+__CEXT_V(___19a542h)], byte 0
//		jne     ___6f481h
	if(W(eax*2+___19a542h) != 0) goto ___6f481h;
//		xor     cl, cl
	cl = 0;
//		mov     al, [__CEXT_V(___24e87fh)]
	al = B(___24e87fh);
//		mov     [__CEXT_V(___24e878h)], cl
	B(___24e878h) = cl;
//		and     al, 0dfh
	al &= 0xdf;
//		mov     [__CEXT_V(___24e879h)], cl
	B(___24e879h) = cl;
//		mov     [__CEXT_V(___24e87fh)], al
	B(___24e87fh) = al;
//		jmp     ___6f582h
	goto ___6f582h;
___6f481h:
//		mov     al, [__CEXT_V(___24e87dh)]
	al = B(___24e87dh);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		mov     ax, [eax*2+__CEXT_V(___19a484h)]
	ax = W(eax*2+___19a484h);
//		xor     ecx, ecx
	ecx = 0;
//		mov     cl, [__CEXT_V(___24e87dh)]
	cl = B(___24e87dh);
//		and     eax, 0ffffh
	eax &= 0xffff;
//		sar     ecx, 4
	ecx = (int)ecx >> 4;
//		sar     eax, cl
	eax = (int)eax >> cl;
//		mov     edx, eax
	edx = eax;
//		xor     eax, eax
	eax = 0;
//		xor     bl, bl
	bl = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     [__CEXT_V(___24e87dh)], bl
	B(___24e87dh) = bl;
//		mov     bx, [__CEXT_V(___24e87ah)]
	bx = W(___24e87ah);
//		mov     [eax*2+__CEXT_V(___19a644h)], dx
	W(eax*2+___19a644h) = dx;
//		test    bx, bx
//		jne     ___6f582h
	if(bx != 0) goto ___6f582h;
//		and     byte [__CEXT_V(___24e87fh)], 0dfh
	B(___24e87fh) &= 0xdf;
//		jmp     ___6f582h
	goto ___6f582h;
___6f4dch:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		cmp     word [eax*2+__CEXT_V(___19a644h)], byte 0
//		jne     ___6f582h
	if(W(eax*2+___19a644h) != 0) goto ___6f582h;
//		xor     dl, dl
	dl = 0;
//		mov     [__CEXT_V(___24e878h)], dl
	B(___24e878h) = dl;
//		mov     [__CEXT_V(___24e879h)], dl
	B(___24e879h) = dl;
//		jmp     ___6f582h
	goto ___6f582h;
___6f505h:
//		xor     eax, eax
	eax = 0;
//		mov     al, dl
	al = dl;
//		sar     eax, 4
	eax = (int)eax >> 4;
//		cmp     eax, byte 0dh
//		jne     ___6f582h
	if(eax != 0xd) goto ___6f582h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		and     dl, 0fh
	dl &= 0xf;
//		mov     [eax+__CEXT_V(___19a5e4h)], dl
	B(eax+___19a5e4h) = dl;
//		test    dl, dl
//		setnz   dl
	dl = (dl != 0) ? 1 : 0;
//		and     edx, 0ffh
	edx &= 0xff;
//		je      ___6f535h
	if(edx == 0) goto ___6f535h;
//		mov     byte [eax+__CEXT_V(___19a5e4h)], 0fh
	B(eax+___19a5e4h) = 0xf;
___6f535h:
//		xor     ah, ah
	ah = 0;
//		mov     al, [__CEXT_V(___24e87fh)]
	al = B(___24e87fh);
//		mov     edx, eax
	edx = eax;
//		mov     al, [__CEXT_V(___24e87ch)]
	al = B(___24e87ch);
//		shl     edx, 8
	edx <<= 8;
//		add     edx, eax
	edx += eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     [eax*2+__CEXT_V(___19a604h)], dx
	W(eax*2+___19a604h) = dx;
//		xor     dh, dh
	dh = 0;
//		mov     bx, [__CEXT_V(___24e87ah)]
	bx = W(___24e87ah);
//		mov     dl, [__CEXT_V(___24e87dh)]
	dl = B(___24e87dh);
//		mov     ch, [__CEXT_V(___24e87fh)]
	ch = B(___24e87fh);
//		shl     edx, 8
	edx <<= 8;
//		and     ch, 9fh
	ch &= 0x9f;
//		add     edx, ebx
	edx += ebx;
//		mov     [__CEXT_V(___24e87fh)], ch
	B(___24e87fh) = ch;
//		mov     [eax*2+__CEXT_V(___19a624h)], dx
	W(eax*2+___19a624h) = dx;
___6f582h:
//		test    byte [__CEXT_V(___24e87fh)], 20h
//		je      ___6f68bh
	if((B(___24e87fh)&0x20) == 0) goto ___6f68bh;
//		mov     cx, [__CEXT_V(___24e87ah)]
	cx = W(___24e87ah);
//		test    cx, cx
//		jne     ___6f616h
	if(cx != 0) goto ___6f616h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ax, [eax*2+__CEXT_V(___19a542h)]
	ax = W(eax*2+___19a542h);
//		xor     edx, edx
	edx = 0;
//		mov     [__CEXT_V(___24e87ah)], ax
	W(___24e87ah) = ax;
//		mov     dx, ax
	dx = ax;
//		mov     eax, [__CEXT_V(___24e7a0h)]
	eax = D(___24e7a0h);
//		sar     eax, 10h
	eax = (int)eax >> 0x10;
//		cmp     edx, eax
//		jle     ___6f5e5h
	if((int)edx <= (int)eax) goto ___6f5e5h;
//		xor     bl, bl
	bl = 0;
//		mov     [__CEXT_V(___24e87dh)], bl
	B(___24e87dh) = bl;
//		mov     bh, [__CEXT_V(___24e87fh)]
	bh = B(___24e87fh);
//		and     bh, 0dfh
	bh &= 0xdf;
//		mov     [__CEXT_V(___24e87ah)], cx
	W(___24e87ah) = cx;
//		mov     [__CEXT_V(___24e87fh)], bh
	B(___24e87fh) = bh;
//		jmp     ___6f639h
	goto ___6f639h;
___6f5e5h:
//		mov     dl, [__CEXT_V(___24e87dh)]
	dl = B(___24e87dh);
//		cmp     dl, 0ffh
//		je      ___6f5f4h
	if(dl == 0xff) goto ___6f5f4h;
//		test    dl, dl
//		jne     ___6f639h
	if(dl != 0) goto ___6f639h;
___6f5f4h:
//		xor     eax, eax
	eax = 0;
//		mov     edx, [__CEXT_V(___24e864h)]
	edx = D(___24e864h);
//		mov     ax, [__CEXT_V(___24e87ah)]
	ax = W(___24e87ah);
//		add     eax, edx
	eax += edx;
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     al, [eax]
	al = B(eax);
//		mov     [edx+__CEXT_V(___19a582h)], al
	B(edx+___19a582h) = al;
//		jmp     ___6f639h
	goto ___6f639h;
___6f616h:
//		xor     eax, eax
	eax = 0;
//		xor     edx, edx
	edx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ebx, [__CEXT_V(___24e864h)]
	ebx = D(___24e864h);
//		mov     dx, cx
	dx = cx;
//		mov     [eax*2+__CEXT_V(___19a542h)], cx
	W(eax*2+___19a542h) = cx;
//		mov     dl, [edx+ebx]
	dl = B(edx+ebx);
//		mov     [eax+__CEXT_V(___19a582h)], dl
	B(eax+___19a582h) = dl;
___6f639h:
//		mov     cl, [__CEXT_V(___24e87dh)]
	cl = B(___24e87dh);
//		cmp     cl, 0ffh
//		je      ___6f68bh
	if(cl == 0xff) goto ___6f68bh;
//		test    cl, cl
//		je      ___6f68bh
	if(cl == 0) goto ___6f68bh;
//		mov     al, cl
	al = cl;
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		mov     ax, [eax*2+__CEXT_V(___19a484h)]
	ax = W(eax*2+___19a484h);
//		xor     ecx, ecx
	ecx = 0;
//		mov     cl, [__CEXT_V(___24e87dh)]
	cl = B(___24e87dh);
//		and     eax, 0ffffh
	eax &= 0xffff;
//		sar     ecx, 4
	ecx = (int)ecx >> 4;
//		sar     eax, cl
	eax = (int)eax >> cl;
//		mov     edx, eax
	edx = eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     [eax*2+__CEXT_V(___19a562h)], dx
	W(eax*2+___19a562h) = dx;
//		mov     dx, [__CEXT_V(___24e87ah)]
	dx = W(___24e87ah);
//		mov     [eax*2+__CEXT_V(___688d0h)], dx
	W(eax*2+___688d0h) = dx;
___6f68bh:
//		test    byte [__CEXT_V(___24e87fh)], 40h
//		je      ___6f6a7h
	if((B(___24e87fh)&0x40) == 0) goto ___6f6a7h;
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     al, [__CEXT_V(___24e87ch)]
	al = B(___24e87ch);
//		mov     [edx+__CEXT_V(___19a582h)], al
	B(edx+___19a582h) = al;
___6f6a7h:
//		test    byte [__CEXT_V(___24e87fh)], 80h
//		je      ___70004h
	if((B(___24e87fh)&0x80) == 0) goto ___70004h;
//		mov     al, [__CEXT_V(___24e879h)]
	al = B(___24e879h);
//		dec     al
	al--;
//		cmp     al, 15h
//		ja      ___6ffcah
	if(al > 0x15) goto ___6ffcah;
//		and     eax, 0ffh
	eax &= 0xff;
//		jmp     dword [cs:eax*4+___6edd0h]

	/*
		___6edd0h:
		dd	___6f6d0h
		dd	___6f704h
		dd	___6f728h
		dd	___6f788h
		dd	___6f821h
		dd	___6f981h
		dd	___6ffe5h
		dd	___6fae2h
		dd	___6fb15h
		dd	___6fb39h
		dd	___6fc40h
		dd	___6fc64h
		dd	___6ffcah
		dd	___6ffcah
		dd	___6fc88h
		dd	___6ffcah
		dd	___6fce0h
		dd	___6fd04h
		dd	___6fd37h
		dd	___6ff7dh
		dd	___6ffcah
		dd	___6ffb0h
	*/

	switch(eax){
		case 0:		goto ___6f6d0h;
		case 1:		goto ___6f704h;
		case 2:		goto ___6f728h;
		case 3:		goto ___6f788h;
		case 4:		goto ___6f821h;
		case 5:		goto ___6f981h;
		case 6:		goto ___6ffe5h;
		case 7:		goto ___6fae2h;
		case 8:		goto ___6fb15h;
		case 9:		goto ___6fb39h;
		case 10:	goto ___6fc40h;
		case 11:	goto ___6fc64h;
		case 12:	goto ___6ffcah;
		case 13:	goto ___6ffcah;
		case 14:	goto ___6fc88h;
		case 15:	goto ___6ffcah;
		case 16:	goto ___6fce0h;
		case 17:	goto ___6fd04h;
		case 18:	goto ___6fd37h;
		case 19:	goto ___6ff7dh;
		case 20:	goto ___6ffcah;
		case 21:	goto ___6ffb0h;
		default:	goto ___6ffcah;
	}

___6f6d0h:
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		xor     ebx, ebx
	ebx = 0;
//		mov     edx, esi
	edx = esi;
//		mov     bl, [__CEXT_V(S3M_InitialTempo)]
	bl = B(S3M_InitialTempo);
//		mov     [__CEXT_V(S3M_InitialSpeed)], al
	B(S3M_InitialSpeed) = al;
//		sar     edx, 1fh
	edx = (int)edx >> 0x1f;
//		mov     eax, esi
	eax = esi;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		xor     bh, bh
	bh = 0;
//		mov     [__CEXT_V(___68c40h)], ax
	W(___68c40h) = ax;
//		mov     [__CEXT_V(___24e879h)], bh
	B(___24e879h) = bh;
//		mov     [__CEXT_V(___24e878h)], bh
	B(___24e878h) = bh;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6f704h:
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		mov     [__CEXT_V(___19a469h)], al
	B(___19a469h) = al;
//		mov     byte [__CEXT_V(___19a53ch)], 1
	B(___19a53ch) = 1;
//		xor     dh, dh
	dh = 0;
//		mov     [__CEXT_V(___24e879h)], dh
	B(___24e879h) = dh;
//		mov     [__CEXT_V(___24e878h)], dh
	B(___24e878h) = dh;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6f728h:
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		mov     bl, 1
	bl = 1;
//		and     al, 0fh
	al &= 0xf;
//		mov     [__CEXT_V(___19a53ch)], bl
	B(___19a53ch) = bl;
//		cmp     al, 9
//		jbe     ___6f742h
	if(al <= 9) goto ___6f742h;
//		add     byte [__CEXT_V(___24e878h)], 6
	B(___24e878h) += 6;
___6f742h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		sar     eax, 4
	eax = (int)eax >> 4;
//		imul    edx, eax, byte 0ah
	edx = (int)eax * 0xa;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		add     eax, edx
	eax += edx;
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
//		cmp     al, 3fh
//		jbe     ___6f76dh
	if(al <= 0x3f) goto ___6f76dh;
//		mov     byte [__CEXT_V(___24e878h)], 3fh
	B(___24e878h) = 0x3f;
___6f76dh:
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		mov     [__CEXT_V(___19a53fh)], al
	B(___19a53fh) = al;
//		xor     al, al
	al = 0;
//		mov     [__CEXT_V(___24e879h)], al
	B(___24e879h) = al;
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6f788h:
//		cmp     byte [__CEXT_V(___24e878h)], 0
//		jne     ___6f7a3h
	if(B(___24e878h) != 0) goto ___6f7a3h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5a2h)]
	al = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
___6f7a3h:
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		and     al, 0fh
	al &= 0xf;
//		cmp     al, 0fh
//		jne     ___6f7deh
	if(al != 0xf) goto ___6f7deh;
//		xor     edx, edx
	edx = 0;
//		xor     eax, eax
	eax = 0;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ebx, edx
	ebx = edx;
//		xor     edx, edx
	edx = 0;
//		sar     ebx, 4
	ebx = (int)ebx >> 4;
//		mov     dl, [eax+__CEXT_V(___19a582h)]
	dl = B(eax+___19a582h);
//		add     edx, ebx
	edx += ebx;
//		mov     [eax+__CEXT_V(___19a582h)], dl
	B(eax+___19a582h) = dl;
//		cmp     dl, 40h
//		jbe     ___6f7deh
	if(dl <= 0x40) goto ___6f7deh;
//		mov     byte [eax+__CEXT_V(___19a582h)], 40h
	B(eax+___19a582h) = 0x40;
___6f7deh:
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		and     al, 0f0h
	al &= 0xf0;
//		cmp     al, 0f0h
//		jne     ___6ffe5h
	if(al != 0xf0) goto ___6ffe5h;
//		xor     eax, eax
	eax = 0;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		and     dl, 0fh
	dl &= 0xf;
//		mov     ch, [eax+__CEXT_V(___19a582h)]
	ch = B(eax+___19a582h);
//		sub     ch, dl
	ch -= dl;
//		mov     [eax+__CEXT_V(___19a582h)], ch
	B(eax+___19a582h) = ch;
//		cmp     ch, 40h
//		jbe     ___6ffe5h
	if(ch <= 0x40) goto ___6ffe5h;
//		xor     dh, dh
	dh = 0;
//		mov     [eax+__CEXT_V(___19a582h)], dh
	B(eax+___19a582h) = dh;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6f821h:
//		cmp     byte [__CEXT_V(___24e878h)], 0
//		jne     ___6f83ch
	if(B(___24e878h) != 0) goto ___6f83ch;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5a2h)]
	al = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
___6f83ch:
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		cmp     dl, 0e0h
//		jb      ___6ffe5h
	if(dl < 0xe0) goto ___6ffe5h;
//		mov     edi, 7dffh
	edi = 0x7dff;
//		and     dl, 0fh
	dl &= 0xf;
//		xor     eax, eax
	eax = 0;
//		xor     ecx, ecx
	ecx = 0;
//		xor     ebx, ebx
	ebx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     bl, dl
	bl = dl;
//		add     eax, eax
	eax += eax;
//		shl     ebx, 2
	ebx <<= 2;
//		mov     cx, [eax+__CEXT_V(___19a562h)]
	cx = W(eax+___19a562h);
//		sub     edi, ebx
	edi -= ebx;
//		cmp     ecx, edi
//		jg      ___6f96bh
	if((int)ecx > (int)edi) goto ___6f96bh;
//		mov     dh, [__CEXT_V(___24e878h)]
	dh = B(___24e878h);
//		and     dh, 0f0h
	dh &= 0xf0;
//		cmp     dh, 0f0h
//		jne     ___6f8dbh
	if(dh != 0xf0) goto ___6f8dbh;
//		xor     dh, dh
	dh = 0;
//		mov     edi, ecx
	edi = ecx;
//		shl     edx, 2
	edx <<= 2;
//		add     edi, edx
	edi += edx;
//		xor     edx, edx
	edx = 0;
//		mov     ebx, [__CEXT_V(___24e850h)]
	ebx = D(___24e850h);
//		mov     dx, [eax+__CEXT_V(___19a542h)]
	dx = W(eax+___19a542h);
//		mov     [eax+__CEXT_V(___19a562h)], di
	W(eax+___19a562h) = di;
//		mov     ecx, [ebx+edx*4]
	ecx = D(ebx+edx*4);
//		xor     ebx, ebx
	ebx = 0;
//		mov     bx, di
	bx = di;
//		xor     eax, eax
	eax = 0;
//		or      ebx, ebx
	ebx |= ebx;
//		je      ___6f8cch
	if(ebx == 0) goto ___6f8cch;
//		mov     eax, 6d3bh
	eax = 0x6d3b;
//		imul    ecx
	PUSH(imul_eax(eax, ecx));
	PUSH(imul_edx(eax, ecx));
	POP(edx);
	POP(eax);
//		shld    edx, eax, 0dh
	edx = (edx << 0xd) | (eax >> (0x20 - 0xd));
//		shl     eax, 0dh
	eax <<= 0xd;
//		imul    ebx, ebx, 5780h
	ebx = (int)ebx * 0x5780;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		shr     eax, 1
//		adc     eax, byte 0
	eax = (eax >> 1) + (eax & 1);
___6f8cch:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     [edx*4+__CEXT_V(___68990h)], eax
	D(edx*4+___68990h) = eax;
___6f8dbh:
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		and     al, 0f0h
	al &= 0xf0;
//		cmp     al, 0e0h
//		jne     ___6f974h
	if(al != 0xe0) goto ___6f974h;
//		xor     eax, eax
	eax = 0;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		and     dl, 0fh
	dl &= 0xf;
//		mov     bx, [eax*2+__CEXT_V(___19a562h)]
	bx = W(eax*2+___19a562h);
//		xor     dh, dh
	dh = 0;
//		add     ebx, edx
	ebx += edx;
//		xor     edx, edx
	edx = 0;
//		mov     [eax*2+__CEXT_V(___19a562h)], bx
	W(eax*2+___19a562h) = bx;
//		mov     ebx, [__CEXT_V(___24e850h)]
	ebx = D(___24e850h);
//		mov     dx, [eax*2+__CEXT_V(___19a542h)]
	dx = W(eax*2+___19a542h);
//		mov     ecx, [ebx+edx*4]
	ecx = D(ebx+edx*4);
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		xor     ebx, ebx
	ebx = 0;
//		mov     bx, ax
	bx = ax;
//		xor     eax, eax
	eax = 0;
//		or      ebx, ebx
	ebx |= ebx;
//		je      ___6f94fh
	if(ebx == 0) goto ___6f94fh;
//		mov     eax, 6d3bh
	eax = 0x6d3b;
//		imul    ecx
	PUSH(imul_eax(eax, ecx));
	PUSH(imul_edx(eax, ecx));
	POP(edx);
	POP(eax);
//		shld    edx, eax, 0dh
	edx = (edx << 0xd) | (eax >> (0x20 - 0xd));
//		shl     eax, 0dh
	eax <<= 0xd;
//		imul    ebx, ebx, 5780h
	ebx = (int)ebx * 0x5780;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		shr     eax, 1
//		adc     eax, byte 0
	eax = (eax >> 1) + (eax & 1);
___6f94fh:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     [edx*4+__CEXT_V(___68990h)], eax
	D(edx*4+___68990h) = eax;
//		xor     dh, dh
	dh = 0;
//		mov     [__CEXT_V(___24e879h)], dh
	B(___24e879h) = dh;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6f96bh:
//		mov     word [eax+__CEXT_V(___688d0h)], 0ffffh
	W(eax+___688d0h) = 0xffff;
___6f974h:
//		xor     dh, dh
	dh = 0;
//		mov     [__CEXT_V(___24e879h)], dh
	B(___24e879h) = dh;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6f981h:
//		cmp     byte [__CEXT_V(___24e878h)], 0
//		jne     ___6f99ch
	if(B(___24e878h) != 0) goto ___6f99ch;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5a2h)]
	al = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
___6f99ch:
//		cmp     byte [__CEXT_V(___24e878h)], 0e0h
//		jb      ___6ffe5h
	if(B(___24e878h) < 0xe0) goto ___6ffe5h;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		xor     eax, eax
	eax = 0;
//		xor     ecx, ecx
	ecx = 0;
//		xor     ebx, ebx
	ebx = 0;
//		and     dl, 0fh
	dl &= 0xf;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     bl, dl
	bl = dl;
//		add     eax, eax
	eax += eax;
//		shl     ebx, 2
	ebx <<= 2;
//		mov     cx, [eax+__CEXT_V(___19a562h)]
	cx = W(eax+___19a562h);
//		add     ebx, 200h
	ebx += 0x200;
//		cmp     ecx, ebx
//		jl      ___6facdh
	if((int)ecx < (int)ebx) goto ___6facdh;
//		mov     dh, [__CEXT_V(___24e878h)]
	dh = B(___24e878h);
//		and     dh, 0f0h
	dh &= 0xf0;
//		cmp     dh, 0f0h
//		jne     ___6fa3eh
	if(dh != 0xf0) goto ___6fa3eh;
//		xor     dh, dh
	dh = 0;
//		mov     edi, ecx
	edi = ecx;
//		shl     edx, 2
	edx <<= 2;
//		sub     edi, edx
	edi -= edx;
//		xor     edx, edx
	edx = 0;
//		mov     ebx, [__CEXT_V(___24e850h)]
	ebx = D(___24e850h);
//		mov     dx, [eax+__CEXT_V(___19a542h)]
	dx = W(eax+___19a542h);
//		mov     [eax+__CEXT_V(___19a562h)], di
	W(eax+___19a562h) = di;
//		mov     ecx, [ebx+edx*4]
	ecx = D(ebx+edx*4);
//		xor     ebx, ebx
	ebx = 0;
//		mov     bx, di
	bx = di;
//		xor     eax, eax
	eax = 0;
//		or      ebx, ebx
	ebx |= ebx;
//		je      ___6fa2fh
	if(ebx == 0) goto ___6fa2fh;
//		mov     eax, 6d3bh
	eax = 0x6d3b;
//		imul    ecx
	PUSH(imul_eax(eax, ecx));
	PUSH(imul_edx(eax, ecx));
	POP(edx);
	POP(eax);
//		shld    edx, eax, 0dh
	edx = (edx << 0xd) | (eax >> (0x20 - 0xd));
//		shl     eax, 0dh
	eax <<= 0xd;
//		imul    ebx, ebx, 5780h
	ebx = (int)ebx * 0x5780;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		shr     eax, 1
//		adc     eax, byte 0
	eax = (eax >> 1) + (eax & 1);
___6fa2fh:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     [edx*4+__CEXT_V(___68990h)], eax
	D(edx*4+___68990h) = eax;
___6fa3eh:
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		and     al, 0f0h
	al &= 0xf0;
//		cmp     al, 0e0h
//		jne     ___6fad6h
	if(al != 0xe0) goto ___6fad6h;
//		xor     eax, eax
	eax = 0;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		and     dl, 0fh
	dl &= 0xf;
//		mov     bx, [eax*2+__CEXT_V(___19a562h)]
	bx = W(eax*2+___19a562h);
//		xor     dh, dh
	dh = 0;
//		sub     ebx, edx
	ebx -= edx;
//		xor     edx, edx
	edx = 0;
//		mov     [eax*2+__CEXT_V(___19a562h)], bx
	W(eax*2+___19a562h) = bx;
//		mov     ebx, [__CEXT_V(___24e850h)]
	ebx = D(___24e850h);
//		mov     dx, [eax*2+__CEXT_V(___19a542h)]
	dx = W(eax*2+___19a542h);
//		mov     ecx, [ebx+edx*4]
	ecx = D(ebx+edx*4);
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		xor     ebx, ebx
	ebx = 0;
//		mov     bx, ax
	bx = ax;
//		xor     eax, eax
	eax = 0;
//		or      ebx, ebx
	ebx |= ebx;
//		je      ___6fab2h
	if(ebx == 0) goto ___6fab2h;
//		mov     eax, 6d3bh
	eax = 0x6d3b;
//		imul    ecx
	PUSH(imul_eax(eax, ecx));
	PUSH(imul_edx(eax, ecx));
	POP(edx);
	POP(eax);
//		shld    edx, eax, 0dh
	edx = (edx << 0xd) | (eax >> (0x20 - 0xd));
//		shl     eax, 0dh
	eax <<= 0xd;
//		imul    ebx, ebx, 5780h
	ebx = (int)ebx * 0x5780;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		shr     eax, 1
//		adc     eax, byte 0
	eax = (eax >> 1) + (eax & 1);
___6fab2h:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     [edx*4+__CEXT_V(___68990h)], eax
	D(edx*4+___68990h) = eax;
//		xor     al, al
	al = 0;
//		mov     [__CEXT_V(___24e879h)], al
	B(___24e879h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6facdh:
//		mov     word [eax+__CEXT_V(___688d0h)], 0ffffh
	W(eax+___688d0h) = 0xffff;
___6fad6h:
//		xor     al, al
	al = 0;
//		mov     [__CEXT_V(___24e879h)], al
	B(___24e879h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fae2h:
//		cmp     byte [__CEXT_V(___24e878h)], 0
//		jne     ___6fafdh
	if(B(___24e878h) != 0) goto ___6fafdh;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5a2h)]
	al = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
___6fafdh:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		mov     [edx+__CEXT_V(___19a5c2h)], al
	B(edx+___19a5c2h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fb15h:
//		cmp     byte [__CEXT_V(___24e878h)], 0
//		jne     ___6ffe5h
	if(B(___24e878h) != 0) goto ___6ffe5h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5a2h)]
	al = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fb39h:
//		cmp     byte [__CEXT_V(___24e878h)], 0
//		jne     ___6fb54h
	if(B(___24e878h) != 0) goto ___6fb54h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5a2h)]
	al = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
___6fb54h:
//		mov     al, [__CEXT_V(___24e87dh)]
	al = B(___24e87dh);
//		cmp     al, 0ffh
//		je      ___6fb61h
	if(al == 0xff) goto ___6fb61h;
//		test    al, al
//		jne     ___6fb73h
	if(al != 0) goto ___6fb73h;
___6fb61h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5f4h)]
	al = B(eax+___19a5f4h);
//		mov     [__CEXT_V(___24e87dh)], al
	B(___24e87dh) = al;
___6fb73h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     dl, dl
	dl = 0;
//		mov     [eax+__CEXT_V(___19a5e4h)], dl
	B(eax+___19a5e4h) = dl;
//		mov     dl, [__CEXT_V(___24e87dh)]
	dl = B(___24e87dh);
//		mov     [eax+__CEXT_V(___19a5f4h)], dl
	B(eax+___19a5f4h) = dl;
//		mov     al, dl
	al = dl;
//		and     al, 0fh
	al &= 0xf;
//		xor     edx, edx
	edx = 0;
//		mov     dl, al
	dl = al;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		sar     eax, 4
	eax = (int)eax >> 4;
//		add     eax, edx
	eax += edx;
//		mov     [__CEXT_V(___24e87dh)], al
	B(___24e87dh) = al;
//		cmp     al, 0ch
//		jb      ___6fbb6h
	if(al < 0xc) goto ___6fbb6h;
//		mov     bl, al
	bl = al;
//		add     bl, 4
	bl += 4;
//		mov     [__CEXT_V(___24e87dh)], bl
	B(___24e87dh) = bl;
___6fbb6h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dl, [eax+__CEXT_V(___19a5f4h)]
	dl = B(eax+___19a5f4h);
//		mov     bh, [__CEXT_V(___24e87dh)]
	bh = B(___24e87dh);
//		and     dl, 0f0h
	dl &= 0xf0;
//		add     bh, dl
	bh += dl;
//		xor     dh, dh
	dh = 0;
//		mov     dl, bh
	dl = bh;
//		shl     edx, 8
	edx <<= 8;
//		mov     [eax*2+__CEXT_V(___19a604h)], dx
	W(eax*2+___19a604h) = dx;
//		mov     ah, [eax+__CEXT_V(___19a5f4h)]
	ah = B(eax+___19a5f4h);
//		and     ah, 0fh
	ah &= 0xf;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		and     al, 0fh
	al &= 0xf;
//		mov     [__CEXT_V(___24e87dh)], bh
	B(___24e87dh) = bh;
//		add     ah, al
	ah += al;
//		mov     [__CEXT_V(___24e87dh)], ah
	B(___24e87dh) = ah;
//		cmp     ah, 0ch
//		jb      ___6fc0bh
	if(ah < 0xc) goto ___6fc0bh;
//		mov     ch, ah
	ch = ah;
//		add     ch, 4
	ch += 4;
//		mov     [__CEXT_V(___24e87dh)], ch
	B(___24e87dh) = ch;
___6fc0bh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dl, [eax+__CEXT_V(___19a5f4h)]
	dl = B(eax+___19a5f4h);
//		and     dl, 0f0h
	dl &= 0xf0;
//		add     [__CEXT_V(___24e87dh)], dl
	B(___24e87dh) += dl;
//		xor     dh, dh
	dh = 0;
//		mov     bx, [eax*2+__CEXT_V(___19a604h)]
	bx = W(eax*2+___19a604h);
//		mov     dl, [__CEXT_V(___24e87dh)]
	dl = B(___24e87dh);
//		add     ebx, edx
	ebx += edx;
//		mov     [eax*2+__CEXT_V(___19a604h)], bx
	W(eax*2+___19a604h) = bx;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fc40h:
//		cmp     byte [__CEXT_V(___24e878h)], 0
//		jne     ___6ffe5h
	if(B(___24e878h) != 0) goto ___6ffe5h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5a2h)]
	al = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fc64h:
//		cmp     byte [__CEXT_V(___24e878h)], 0
//		jne     ___6ffe5h
	if(B(___24e878h) != 0) goto ___6ffe5h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5a2h)]
	al = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fc88h:
//		cmp     byte [__CEXT_V(___24e878h)], 0
//		jne     ___6fca3h
	if(B(___24e878h) != 0) goto ___6fca3h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5a2h)]
	al = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
___6fca3h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		mov     edx, eax
	edx = eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		shl     edx, 8
	edx <<= 8;
//		mov     [eax*4+__CEXT_V(___68910h)], edx
	D(eax*4+___68910h) = edx;
//		mov     dx, [eax*2+__CEXT_V(___19a542h)]
	dx = W(eax*2+___19a542h);
//		mov     [eax*2+__CEXT_V(___688d0h)], dx
	W(eax*2+___688d0h) = dx;
//		xor     dh, dh
	dh = 0;
//		mov     [__CEXT_V(___24e879h)], dh
	B(___24e879h) = dh;
//		mov     [__CEXT_V(___24e878h)], dh
	B(___24e878h) = dh;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fce0h:
//		cmp     byte [__CEXT_V(___24e878h)], 0
//		jne     ___6ffe5h
	if(B(___24e878h) != 0) goto ___6ffe5h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5a2h)]
	al = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fd04h:
//		cmp     byte [__CEXT_V(___24e878h)], 0
//		jne     ___6fd1fh
	if(B(___24e878h) != 0) goto ___6fd1fh;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5a2h)]
	al = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
___6fd1fh:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		mov     [edx+__CEXT_V(___19a5c2h)], al
	B(edx+___19a5c2h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fd37h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		sar     eax, 4
	eax = (int)eax >> 4;
//		cmp     eax, byte 0fh
//		ja      ___6ff60h
	if(eax > 0xf) goto ___6ff60h;
//		jmp     dword [cs:eax*4+___6ee28h]

	/*
		___6ee28h:
		dd	___6fd52h
		dd	___6fd6bh
		dd	___6fd84h
		dd	___6fdb1h
		dd	___6fde3h
		dd	___6ff60h
		dd	___6ff60h
		dd	___6ff60h
		dd	___6fe1ah
		dd	___6ff60h
		dd	___6fe4dh
		dd	___6fe66h
		dd	___6ff15h
		dd	___6ffe5h
		dd	___6ff2fh
		dd	___6ff42h
	*/

	switch(eax){
		case 0: 	goto ___6fd52h;
		case 1: 	goto ___6fd6bh;
		case 2: 	goto ___6fd84h;
		case 3: 	goto ___6fdb1h;
		case 4: 	goto ___6fde3h;
		case 5: 	goto ___6ff60h;
		case 6: 	goto ___6ff60h;
		case 7: 	goto ___6ff60h;
		case 8: 	goto ___6fe1ah;
		case 9: 	goto ___6ff60h;
		case 10: 	goto ___6fe4dh;
		case 11: 	goto ___6fe66h;
		case 12: 	goto ___6ff15h;
		case 13: 	goto ___6ffe5h;
		case 14: 	goto ___6ff2fh;
		case 15: 	goto ___6ff42h;
		default: 	goto ___6ff60h;
	}

___6fd52h:
//		xor     cl, cl
	cl = 0;
//		mov     [__CEXT_V(___24e878h)], cl
	B(___24e878h) = cl;
//		mov     [__CEXT_V(___24e879h)], cl
	B(___24e879h) = cl;
//		inc     dword [__CEXT_V(___19a470h)]
	D(___19a470h)++;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fd6bh:
//		xor     bl, bl
	bl = 0;
//		mov     [__CEXT_V(___24e878h)], bl
	B(___24e878h) = bl;
//		mov     [__CEXT_V(___24e879h)], bl
	B(___24e879h) = bl;
//		inc     dword [__CEXT_V(___19a474h)]
	D(___19a474h)++;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fd84h:
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		and     al, 0fh
	al &= 0xf;
//		xor     dl, dl
	dl = 0;
//		and     eax, 0ffh
	eax &= 0xff;
//		mov     [__CEXT_V(___24e879h)], dl
	B(___24e879h) = dl;
//		mov     ax, [eax*2+__CEXT_V(___19a49ch)]
	ax = W(eax*2+___19a49ch);
//		mov     [__CEXT_V(___24e878h)], dl
	B(___24e878h) = dl;
//		mov     [__CEXT_V(___19a5e2h)], ax
	W(___19a5e2h) = ax;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fdb1h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dh, [eax+__CEXT_V(___19a5d2h)]
	dh = B(eax+___19a5d2h);
//		and     dh, 0fch
	dh &= 0xfc;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		and     dl, 3
	dl &= 3;
//		or      dl, dh
	dl |= dh;
//		mov     [eax+__CEXT_V(___19a5d2h)], dl
	B(eax+___19a5d2h) = dl;
//		xor     al, al
	al = 0;
//		mov     [__CEXT_V(___24e879h)], al
	B(___24e879h) = al;
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fde3h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dh, [eax+__CEXT_V(___19a5d2h)]
	dh = B(eax+___19a5d2h);
//		and     dh, 0f3h
	dh &= 0xf3;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		and     dl, 3
	dl &= 3;
//		xor     cl, cl
	cl = 0;
//		shl     dl, 2
	dl <<= 2;
//		mov     [__CEXT_V(___24e879h)], cl
	B(___24e879h) = cl;
//		or      dl, dh
	dl |= dh;
//		mov     [__CEXT_V(___24e878h)], cl
	B(___24e878h) = cl;
//		mov     [eax+__CEXT_V(___19a5d2h)], dl
	B(eax+___19a5d2h) = dl;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fe1ah:
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		and     al, 0fh
	al &= 0xf;
//		mov     edx, eax
	edx = eax;
//		xor     bl, bl
	bl = 0;
//		and     edx, 0ffh
	edx &= 0xff;
//		xor     eax, eax
	eax = 0;
//		mov     [__CEXT_V(___24e879h)], bl
	B(___24e879h) = bl;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		shl     edx, 0ch
	edx <<= 0xc;
//		mov     [__CEXT_V(___24e878h)], bl
	B(___24e878h) = bl;
//		mov     [eax*4+__CEXT_V(___68a90h)], edx
	D(eax*4+___68a90h) = edx;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fe4dh:
//		xor     dl, dl
	dl = 0;
//		mov     [__CEXT_V(___24e878h)], dl
	B(___24e878h) = dl;
//		mov     [__CEXT_V(___24e879h)], dl
	B(___24e879h) = dl;
//		inc     dword [__CEXT_V(___19a478h)]
	D(___19a478h)++;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fe66h:
//		mov     bh, [__CEXT_V(___24e878h)]
	bh = B(___24e878h);
//		test    bh, 0fh
//		jne     ___6ff04h
	if((bh&0xf) != 0) goto ___6ff04h;
//		mov     cl, [__CEXT_V(___19a686h)]
	cl = B(___19a686h);
//		test    cl, cl
//		jne     ___6fe8eh
	if(cl != 0) goto ___6fe8eh;
//		mov     al, [__CEXT_V(___19a46ah)]
	al = B(___19a46ah);
//		mov     [__CEXT_V(___19a684h)], al
	B(___19a684h) = al;
//		jmp     ___6ff04h
	goto ___6ff04h;
___6fe8eh:
//		jne     ___6fec8h
	goto ___6fec8h;
//		mov     al, bh
	al = bh;
//		and     al, 0fh
	al &= 0xf;
//		mov     bh, 1
	bh = 1;
//		mov     [__CEXT_V(___19a685h)], al
	B(___19a685h) = al;
//		mov     [__CEXT_V(___19a686h)], bh
	B(___19a686h) = bh;
//		mov     [__CEXT_V(___19a53ch)], bh
	B(___19a53ch) = bh;
//		mov     al, [__CEXT_V(___19a684h)]
	al = B(___19a684h);
//		mov     [__CEXT_V(___19a53dh)], bh
	B(___19a53dh) = bh;
//		mov     [__CEXT_V(___19a53fh)], al
	B(___19a53fh) = al;
//		xor     al, al
	al = 0;
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
//		mov     [__CEXT_V(___24e879h)], al
	B(___24e879h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6fec8h:
//		mov     al, [__CEXT_V(___19a685h)]
	al = B(___19a685h);
//		dec     al
	al--;
//		mov     [__CEXT_V(___19a685h)], al
	B(___19a685h) = al;
//		je      ___6feffh
	if(al == 0) goto ___6feffh;
//		mov     al, [__CEXT_V(___19a684h)]
	al = B(___19a684h);
//		mov     dh, 1
	dh = 1;
//		mov     [__CEXT_V(___19a53fh)], al
	B(___19a53fh) = al;
//		mov     [__CEXT_V(___19a53ch)], dh
	B(___19a53ch) = dh;
//		mov     [__CEXT_V(___19a53dh)], dh
	B(___19a53dh) = dh;
//		xor     al, al
	al = 0;
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
//		mov     [__CEXT_V(___24e879h)], al
	B(___24e879h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6feffh:
//		mov     [__CEXT_V(___19a686h)], al
	B(___19a686h) = al;
___6ff04h:
//		xor     al, al
	al = 0;
//		mov     [__CEXT_V(___24e878h)], al
	B(___24e878h) = al;
//		mov     [__CEXT_V(___24e879h)], al
	B(___24e879h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6ff15h:
//		xor     edx, edx
	edx = 0;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		and     al, 0fh
	al &= 0xf;
//		mov     [edx+__CEXT_V(___19a5e4h)], al
	B(edx+___19a5e4h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6ff2fh:
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		and     al, 0fh
	al &= 0xf;
//		inc     al
	al++;
//		mov     [__CEXT_V(___19a540h)], al
	B(___19a540h) = al;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6ff42h:
//		xor     dh, dh
	dh = 0;
//		mov     eax, [__CEXT_V(___19a47ch)]
	eax = D(___19a47ch);
//		mov     [__CEXT_V(___24e878h)], dh
	B(___24e878h) = dh;
//		inc     eax
	eax++;
//		mov     [__CEXT_V(___24e879h)], dh
	B(___24e879h) = dh;
//		mov     [__CEXT_V(___19a47ch)], eax
	D(___19a47ch) = eax;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6ff60h:
//		xor     ah, ah
	ah = 0;
//		mov     ebp, [__CEXT_V(___19a480h)]
	ebp = D(___19a480h);
//		mov     [__CEXT_V(___24e878h)], ah
	B(___24e878h) = ah;
//		inc     ebp
	ebp++;
//		mov     [__CEXT_V(___24e879h)], ah
	B(___24e879h) = ah;
//		mov     [__CEXT_V(___19a480h)], ebp
	D(___19a480h) = ebp;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6ff7dh:
//		mov     cl, [__CEXT_V(___24e878h)]
	cl = B(___24e878h);
//		test    cl, cl
//		je      ___6ffa0h
	if(cl == 0) goto ___6ffa0h;
//		mov     eax, esi
	eax = esi;
//		xor     ebx, ebx
	ebx = 0;
//		mov     edx, esi
	edx = esi;
//		mov     bl, cl
	bl = cl;
//		sar     edx, 1fh
	edx = (int)edx >> 0x1f;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		mov     [__CEXT_V(S3M_InitialTempo)], cl
	B(S3M_InitialTempo) = cl;
//		mov     [__CEXT_V(___68c40h)], ax
	W(___68c40h) = ax;
___6ffa0h:
//		xor     ch, ch
	ch = 0;
//		mov     [__CEXT_V(___24e878h)], ch
	B(___24e878h) = ch;
//		mov     [__CEXT_V(___24e879h)], ch
	B(___24e879h) = ch;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6ffb0h:
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		xor     bl, bl
	bl = 0;
//		mov     [__CEXT_V(S3M_GlobalVolume)], al
	B(S3M_GlobalVolume) = al;
//		mov     [__CEXT_V(___24e879h)], bl
	B(___24e879h) = bl;
//		mov     [__CEXT_V(___24e878h)], bl
	B(___24e878h) = bl;
//		jmp     ___6ffe5h
	goto ___6ffe5h;
___6ffcah:
//		xor     dl, dl
	dl = 0;
//		mov     edi, [__CEXT_V(___19a480h)]
	edi = D(___19a480h);
//		mov     [__CEXT_V(___24e878h)], dl
	B(___24e878h) = dl;
//		inc     edi
	edi++;
//		mov     [__CEXT_V(___24e879h)], dl
	B(___24e879h) = dl;
//		mov     [__CEXT_V(___19a480h)], edi
	D(___19a480h) = edi;
___6ffe5h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dl, [__CEXT_V(___24e879h)]
	dl = B(___24e879h);
//		mov     [eax+__CEXT_V(___19a592h)], dl
	B(eax+___19a592h) = dl;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		mov     [eax+__CEXT_V(___19a5a2h)], dl
	B(eax+___19a5a2h) = dl;
___70004h:
//		cmp     byte [__CEXT_V(___24e87eh)], 0ffh
//		je      ___6f2e3h
	if(B(___24e87eh) == 0xff) goto ___6f2e3h;
//		cmp     word [__CEXT_V(___19a5e2h)], byte 0
//		jne     ___7006dh
	if(W(___19a5e2h) != 0) goto ___7006dh;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     ebx, [__CEXT_V(___24e850h)]
	ebx = D(___24e850h);
//		mov     dx, [eax*2+__CEXT_V(___19a542h)]
	dx = W(eax*2+___19a542h);
//		mov     ecx, [ebx+edx*4]
	ecx = D(ebx+edx*4);
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		xor     ebx, ebx
	ebx = 0;
//		mov     bx, ax
	bx = ax;
//		xor     eax, eax
	eax = 0;
//		or      ebx, ebx
	ebx |= ebx;
//		je      ___70063h
	if(ebx == 0) goto ___70063h;
//		mov     eax, 6d3bh
	eax = 0x6d3b;
//		imul    ecx
	PUSH(imul_eax(eax, ecx));
	PUSH(imul_edx(eax, ecx));
	POP(edx);
	POP(eax);
//		shld    edx, eax, 0dh
	edx = (edx << 0xd) | (eax >> (0x20 - 0xd));
//		shl     eax, 0dh
	eax <<= 0xd;
//		imul    ebx, ebx, 5780h
	ebx = (int)ebx * 0x5780;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		shr     eax, 1
//		adc     eax, byte 0
	eax = (eax >> 1) + (eax & 1);
___70063h:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		jmp     ___700bch
	goto ___700bch;
___7006dh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ecx, [__CEXT_V(___19a5e0h)]
	ecx = D(___19a5e0h);
//		xor     ebx, ebx
	ebx = 0;
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		sar     ecx, 10h
	ecx = (int)ecx >> 0x10;
//		mov     bx, ax
	bx = ax;
//		xor     eax, eax
	eax = 0;
//		or      ebx, ebx
	ebx |= ebx;
//		je      ___700abh
	if(ebx == 0) goto ___700abh;
//		mov     eax, 6d3bh
	eax = 0x6d3b;
//		imul    ecx
	PUSH(imul_eax(eax, ecx));
	PUSH(imul_edx(eax, ecx));
	POP(edx);
	POP(eax);
//		shld    edx, eax, 0dh
	edx = (edx << 0xd) | (eax >> (0x20 - 0xd));
//		shl     eax, 0dh
	eax <<= 0xd;
//		imul    ebx, ebx, 5780h
	ebx = (int)ebx * 0x5780;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		shr     eax, 1
//		adc     eax, byte 0
	eax = (eax >> 1) + (eax & 1);
___700abh:
//		xor     edx, edx
	edx = 0;
//		xor     edi, edi
	edi = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     [__CEXT_V(___19a5e2h)], di
	W(___19a5e2h) = di;
___700bch:
//		mov     [edx*4+__CEXT_V(___68990h)], eax
	D(edx*4+___68990h) = eax;
//		xor     eax, eax
	eax = 0;
//		xor     edx, edx
	edx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     ebx, ebx
	ebx = 0;
//		mov     dl, [__CEXT_V(S3M_GlobalVolume)]
	dl = B(S3M_GlobalVolume);
//		mov     bl, [eax+__CEXT_V(___19a582h)]
	bl = B(eax+___19a582h);
//		imul    edx, ebx
	edx = (int)edx * (int)ebx;
//		shl     edx, 4
	edx <<= 4;
//		mov     [eax*4+__CEXT_V(___68a10h)], edx
	D(eax*4+___68a10h) = edx;
//		jmp     ___6f2e3h
	goto ___6f2e3h;
___700ech:
//		mov     al, [__CEXT_V(___19a46ah)]
	al = B(___19a46ah);
//		inc     byte [__CEXT_V(___19a46ah)]
	B(___19a46ah)++;
//		cmp     byte [__CEXT_V(___19a46ah)], 40h
//		jb      ___70107h
	if(B(___19a46ah) < 0x40) goto ___70107h;
//		mov     byte [__CEXT_V(___19a53ch)], 1
	B(___19a53ch) = 1;
___70107h:
//		mov     dl, [__CEXT_V(___19a540h)]
	dl = B(___19a540h);
//		mov     al, [__CEXT_V(S3M_InitialSpeed)]
	al = B(S3M_InitialSpeed);
//		mul     dl
	ax = al * dl;
//		mov     [__CEXT_V(___19a53eh)], al
	B(___19a53eh) = al;
___70119h:
//		cmp     byte [__CEXT_V(___19a53eh)], 0
//		je      ___71588h
	if(B(___19a53eh) == 0) goto ___71588h;
//		xor     ah, ah
	ah = 0;
//		mov     [__CEXT_V(___24e87eh)], ah
	B(___24e87eh) = ah;
//		mov     esi, 0ffffh
	esi = 0xffff;
___70133h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dl, [eax+__CEXT_V(___19a592h)]
	dl = B(eax+___19a592h);
//		test    dl, dl
//		je      ___71566h
	if(dl == 0) goto ___71566h;
//		mov     [__CEXT_V(___24e879h)], dl
	B(___24e879h) = dl;
//		mov     dl, [eax+__CEXT_V(___19a5a2h)]
	dl = B(eax+___19a5a2h);
//		mov     [__CEXT_V(___24e878h)], dl
	B(___24e878h) = dl;
//		mov     dl, [__CEXT_V(___24e879h)]
	dl = B(___24e879h);
//		sub     dl, 4
	dl -= 4;
//		cmp     dl, 11h
//		ja      ___71566h
	if(dl > 0x11) goto ___71566h;
//		and     edx, 0ffh
	edx &= 0xff;
//		jmp     dword [cs:edx*4+___6ee68h]

	/*
		___6ee68h:
		dd	___7017ah
		dd	___70241h
		dd	___702d7h
		dd	___70356h
		dd	___704a8h
		dd	___7064bh
		dd	___70732h
		dd	___7080eh
		dd	___70a82h
		dd	___71566h
		dd	___71566h
		dd	___71566h
		dd	___71566h
		dd	___70d06h
		dd	___71040h
		dd	___711d1h
		dd	___71566h
		dd	___713feh
	*/

	switch(edx){
		case 0:		goto ___7017ah;
		case 1:		goto ___70241h;
		case 2:		goto ___702d7h;
		case 3:		goto ___70356h;
		case 4:		goto ___704a8h;
		case 5:		goto ___7064bh;
		case 6:		goto ___70732h;
		case 7:		goto ___7080eh;
		case 8:		goto ___70a82h;
		case 9:		goto ___71566h;
		case 10:	goto ___71566h;
		case 11:	goto ___71566h;
		case 12:	goto ___71566h;
		case 13:	goto ___70d06h;
		case 14:	goto ___71040h;
		case 15:	goto ___711d1h;
		case 16:	goto ___71566h;
		case 17:	goto ___713feh;
		default: 	goto ___71566h;
	}

___7017ah:
//		mov     cl, [__CEXT_V(___24e878h)]
	cl = B(___24e878h);
//		test    cl, 0fh
//		jne     ___701cdh
	if((cl&0xf) != 0) goto ___701cdh;
//		mov     ch, [__CEXT_V(S3M_InitialSpeed)]
	ch = B(S3M_InitialSpeed);
//		cmp     ch, [__CEXT_V(___19a53eh)]
//		je      ___701cdh
	if(ch == B(___19a53eh)) goto ___701cdh;
//		xor     ebx, ebx
	ebx = 0;
//		xor     edx, edx
	edx = 0;
//		xor     eax, eax
	eax = 0;
//		mov     bl, cl
	bl = cl;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		sar     ebx, 4
	ebx = (int)ebx >> 4;
//		mov     al, [edx+__CEXT_V(___19a582h)]
	al = B(edx+___19a582h);
//		add     eax, ebx
	eax += ebx;
//		mov     [edx+__CEXT_V(___19a582h)], al
	B(edx+___19a582h) = al;
//		xor     eax, eax
	eax = 0;
//		mov     al, dl
	al = dl;
//		cmp     byte [eax+__CEXT_V(___19a582h)], 40h
//		jbe     ___701cdh
	if(B(eax+___19a582h) <= 0x40) goto ___701cdh;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     byte [eax+__CEXT_V(___19a582h)], 40h
	B(eax+___19a582h) = 0x40;
___701cdh:
//		test    byte [__CEXT_V(___24e878h)], 0f0h
//		jne     ___70218h
	if((B(___24e878h)&0xf0) != 0) goto ___70218h;
//		mov     bh, [__CEXT_V(S3M_InitialSpeed)]
	bh = B(S3M_InitialSpeed);
//		cmp     bh, [__CEXT_V(___19a53eh)]
//		je      ___70218h
	if(bh == B(___19a53eh)) goto ___70218h;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		xor     eax, eax
	eax = 0;
//		xor     ecx, ecx
	ecx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		and     dl, 0fh
	dl &= 0xf;
//		xor     ebx, ebx
	ebx = 0;
//		mov     cl, dl
	cl = dl;
//		mov     bl, [eax+__CEXT_V(___19a582h)]
	bl = B(eax+___19a582h);
//		cmp     ebx, ecx
//		jl      ___70210h
	if((int)ebx < (int)ecx)goto ___70210h;
//		mov     ch, bl
	ch = bl;
//		sub     ch, dl
	ch -= dl;
//		mov     [eax+__CEXT_V(___19a582h)], ch
	B(eax+___19a582h) = ch;
//		jmp     ___70218h
	goto ___70218h;
___70210h:
//		xor     cl, dl
	cl ^= dl;
//		mov     [eax+__CEXT_V(___19a582h)], cl
	B(eax+___19a582h) = cl;
___70218h:
//		xor     eax, eax
	eax = 0;
//		xor     edx, edx
	edx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     ebx, ebx
	ebx = 0;
//		mov     dl, [__CEXT_V(S3M_GlobalVolume)]
	dl = B(S3M_GlobalVolume);
//		mov     bl, [eax+__CEXT_V(___19a582h)]
	bl = B(eax+___19a582h);
//		imul    edx, ebx
	edx = (int)edx * (int)ebx;
//		shl     edx, 4
	edx <<= 4;
//		mov     [eax*4+__CEXT_V(___68a10h)], edx
	D(eax*4+___68a10h) = edx;
//		jmp     ___71566h
	goto ___71566h;
___70241h:
//		mov     bh, [__CEXT_V(___24e878h)]
	bh = B(___24e878h);
//		cmp     bh, 0e0h
//		jae     ___71566h
	if(bh >= 0xe0) goto ___71566h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		xor     edx, edx
	edx = 0;
//		mov     dl, bh
	dl = bh;
//		mov     ebx, 7dffh
	ebx = 0x7dff;
//		shl     edx, 2
	edx <<= 2;
//		and     eax, 0ffffh
	eax &= 0xffff;
//		sub     ebx, edx
	ebx -= edx;
//		cmp     eax, ebx
//		jg      ___702c3h
	if((int)eax > (int)ebx) goto ___702c3h;
//		xor     dh, dh
	dh = 0;
//		xor     eax, eax
	eax = 0;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		shl     edx, 2
	edx <<= 2;
//		add     [eax*2+__CEXT_V(___19a562h)], dx
	W(eax*2+___19a562h) += dx;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ax, [eax*2+__CEXT_V(___19a542h)]
	ax = W(eax*2+___19a542h);
//		mov     edx, [__CEXT_V(___24e850h)]
	edx = D(___24e850h);
//		and     eax, 0ffffh
	eax &= 0xffff;
//		mov     ecx, [edx+eax*4]
	ecx = D(edx+eax*4);
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     ebx, ebx
	ebx = 0;
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		jmp     ___71533h
	goto ___71533h;
___702c3h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     [eax*2+__CEXT_V(___688d0h)], si
	W(eax*2+___688d0h) = si;
//		jmp     ___71566h
	goto ___71566h;
___702d7h:
//		mov     bl, [__CEXT_V(___24e878h)]
	bl = B(___24e878h);
//		cmp     bl, 0e0h
//		jae     ___71566h
	if(bl >= 0xe0) goto ___71566h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     dx, [eax*2+__CEXT_V(___19a562h)]
	dx = W(eax*2+___19a562h);
//		xor     eax, eax
	eax = 0;
//		mov     al, bl
	al = bl;
//		shl     eax, 2
	eax <<= 2 ;
//		add     eax, 200h
	eax += 0x200;
//		cmp     edx, eax
//		jl      ___702c3h
	if((int)edx < (int)eax) goto ___702c3h;
//		xor     dh, dh
	dh = 0;
//		xor     eax, eax
	eax = 0;
//		mov     dl, bl
	dl = bl;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		shl     edx, 2
	edx <<= 2;
//		sub     [eax*2+__CEXT_V(___19a562h)], dx
	W(eax*2+___19a562h) -= dx;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ax, [eax*2+__CEXT_V(___19a542h)]
	ax = W(eax*2+___19a542h);
//		and     eax, 0ffffh
	eax &= 0xffff;
//		lea     edx, [eax*4+0]
	edx = eax*4;
//		mov     eax, [__CEXT_V(___24e850h)]
	eax = D(___24e850h);
//		mov     ecx, [edx+eax]
	ecx = D(edx+eax);
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     ebx, ebx
	ebx = 0;
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		jmp     ___71533h
	goto ___71533h;
___70356h:
//		xor     eax, eax
	eax = 0;
//		xor     edx, edx
	edx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dl, al
	dl = al;
//		mov     ax, [eax*2+__CEXT_V(___19a644h)]
	ax = W(eax*2+___19a644h);
//		cmp     ax, [edx*2+__CEXT_V(___19a562h)]
//		je      ___71566h
	if(ax == W(edx*2+___19a562h)) goto ___71566h;
//		xor     edx, edx
	edx = 0;
//		xor     ah, ah
	ah = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		mov     [edx*2+__CEXT_V(___24e880h)], ax
	W(edx*2+___24e880h) = ax;
//		xor     eax, eax
	eax = 0;
//		mov     al, dl
	al = dl;
//		xor     edx, edx
	edx = 0;
//		mov     dl, al
	dl = al;
//		mov     ax, [eax*2+__CEXT_V(___19a644h)]
	ax = W(eax*2+___19a644h);
//		cmp     ax, [edx*2+__CEXT_V(___19a562h)]
//		jbe     ___70413h
	if(ax <= W(edx*2+___19a562h)) goto ___70413h;
//		xor     eax, eax
	eax = 0;
//		mov     al, dl
	al = dl;
//		xor     dh, dh
	dh = 0;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		mov     di, [eax*2+__CEXT_V(___19a562h)]
	di = W(eax*2+___19a562h);
//		shl     edx, 2
	edx <<= 2;
//		xor     ebx, ebx
	ebx = 0;
//		add     edi, edx
	edi += edx;
//		mov     bl, al
	bl = al;
//		mov     [eax*2+__CEXT_V(___19a562h)], di
	W(eax*2+___19a562h) = di;
//		xor     eax, eax
	eax = 0;
//		mov     al, bl
	al = bl;
//		lea     edx, [eax*2+0]
	edx = eax*2;
//		mov     ax, [ebx*2+__CEXT_V(___19a562h)]
	ax = W(ebx*2+___19a562h);
//		cmp     ax, [edx+__CEXT_V(___19a644h)]
//		jbe     ___7047fh
	if(ax <= W(edx+___19a644h)) goto ___7047fh;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		lea     edx, [eax*2+0]
	edx = eax*2;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dx, [edx+__CEXT_V(___19a644h)]
	dx = W(edx+___19a644h);
//		mov     [eax*2+__CEXT_V(___19a562h)], dx
	W(eax*2+___19a562h) = dx;
//		jmp     ___7047fh
	goto ___7047fh;
___70413h:
//		xor     eax, eax
	eax = 0;
//		mov     al, dl
	al = dl;
//		xor     edx, edx
	edx = 0;
//		mov     dx, [eax*2+__CEXT_V(___19a562h)]
	dx = W(eax*2+___19a562h);
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		shl     eax, 2
	eax <<= 2 ;
//		cmp     eax, edx
//		jg      ___7044bh
	if((int)eax > (int)edx) goto ___7044bh;
//		xor     dh, dh
	dh = 0;
//		xor     eax, eax
	eax = 0;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		shl     edx, 2
	edx <<= 2;
//		sub     [eax*2+__CEXT_V(___19a562h)], dx
	W(eax*2+___19a562h) -= dx;
//		jmp     ___7045ch
	goto ___7045ch;
___7044bh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edi, edi
	edi = 0;
//		mov     [eax*2+__CEXT_V(___19a562h)], di
	W(eax*2+___19a562h) = di;
___7045ch:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		add     eax, eax
	eax += eax;
//		mov     dx, [eax+__CEXT_V(___19a562h)]
	dx = W(eax+___19a562h);
//		mov     cx, [eax+__CEXT_V(___19a644h)]
	cx = W(eax+___19a644h);
//		cmp     dx, cx
//		jae     ___7047fh
	if(dx >= cx) goto ___7047fh;
//		mov     [eax+__CEXT_V(___19a562h)], cx
	W(eax+___19a562h) = cx;
___7047fh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     ebx, [__CEXT_V(___24e850h)]
	ebx = D(___24e850h);
//		mov     dx, [eax*2+__CEXT_V(___19a542h)]
	dx = W(eax*2+___19a542h);
//		mov     ecx, [ebx+edx*4]
	ecx = D(ebx+edx*4);
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		xor     ebx, ebx
	ebx = 0;
//		jmp     ___71533h
	goto ___71533h;
___704a8h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5d2h)]
	al = B(eax+___19a5d2h);
//		and     al, 3
	al &= 3;
//		cmp     al, 3
//		ja      ___705d1h
	if(al > 3) goto ___705d1h;
//		and     eax, 0ffh
	eax &= 0xff;
//		jmp     dword [cs:eax*4+___6eeb0h]

	/*
		___6eeb0h:
		dd	___704cch
		dd	___7050bh
		dd	___70550h
		dd	___705a1h
	*/

	switch(eax){
		case 0:		goto ___704cch;
		case 1:		goto ___7050bh;
		case 2:		goto ___70550h;
		case 3:		goto ___705a1h;
		default: 	goto ___705d1h;
	}

___704cch:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5b2h)]
	al = B(eax+___19a5b2h);
//		and     eax, 0ffh
	eax &= 0xff;
//		mov     edx, [eax*2+__CEXT_V(___19a4bah)]
	edx = D(eax*2+___19a4bah);
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		shl     eax, 2
	eax <<= 2 ;
//		imul    eax, edx
	eax = (int)eax * (int)edx;
//		inc     eax
	eax++;
//		sar     eax, 9
	eax = (int)eax >> 9;
//		jmp     ___705cch
	goto ___705cch;
___7050bh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		lea     edx, [eax*4+0]
	edx = eax*4;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5b2h)]
	al = B(eax+___19a5b2h);
//		mov     ebx, 20h
	ebx = 0x20;
//		and     eax, 0ffh
	eax &= 0xff;
//		sub     ebx, eax
	ebx -= eax;
//		imul    edx, ebx
	edx = (int)edx * (int)ebx;
//		sar     edx, 4
	edx = (int)edx >> 4;
//		mov     [__CEXT_V(___24e874h)], edx
	D(___24e874h) = edx;
//		jmp     ___705d1h
	goto ___705d1h;
___70550h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5b2h)]
	al = B(eax+___19a5b2h);
//		and     eax, 0ffh
	eax &= 0xff;
//		cmp     word [eax*2+__CEXT_V(___19a4bch)], byte 0
//		jl      ___70586h
	if((short)W(eax*2+___19a4bch) < 0) goto ___70586h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		shl     eax, 2
	eax <<= 2 ;
//		jmp     ___705cch
	goto ___705cch;
___70586h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		shl     eax, 2
	eax <<= 2 ;
//		neg     eax
	eax = 0 - eax;
//		jmp     ___705cch
	goto ___705cch;
___705a1h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		lea     edx, [eax*4+0]
	edx = eax*4;
//		call    __CEXT_F(rand__clib3r)
	eax = rand__clib3r();
//		sub     eax, 4000h
	eax -= 0x4000;
//		imul    eax, edx
	eax = (int)eax * (int)edx;
//		sar     eax, 0eh
	eax = (int)eax >> 0xe;
___705cch:
//		mov     [__CEXT_V(___24e874h)], eax
	D(___24e874h) = eax;
___705d1h:
//		mov     al, [__CEXT_V(___19a53eh)]
	al = B(___19a53eh);
//		cmp     al, [__CEXT_V(S3M_InitialSpeed)]
//		je      ___70612h
	if(al == B(S3M_InitialSpeed)) goto ___70612h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     dl, [eax+__CEXT_V(___19a5c2h)]
	dl = B(eax+___19a5c2h);
//		mov     ebx, edx
	ebx = edx;
//		xor     edx, edx
	edx = 0;
//		sar     ebx, 4
	ebx = (int)ebx >> 4;
//		mov     dl, [eax+__CEXT_V(___19a5b2h)]
	dl = B(eax+___19a5b2h);
//		add     edx, ebx
	edx += ebx;
//		mov     [eax+__CEXT_V(___19a5b2h)], dl
	B(eax+___19a5b2h) = dl;
//		cmp     dl, 40h
//		jb      ___70612h
	if(dl < 0x40) goto ___70612h;
//		mov     dh, dl
	dh = dl;
//		sub     dh, 40h
	dh -= 0x40;
//		mov     [eax+__CEXT_V(___19a5b2h)], dh
	B(eax+___19a5b2h) = dh;
___70612h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     dx, [eax*2+__CEXT_V(___19a542h)]
	dx = W(eax*2+___19a542h);
//		mov     di, [__CEXT_V(___24e874h)]
	di = W(___24e874h);
//		lea     ebx, [edx*4+0]
	ebx = edx*4;
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		mov     edx, [__CEXT_V(___24e850h)]
	edx = D(___24e850h);
//		add     eax, edi
	eax += edi;
//		mov     ecx, [edx+ebx]
	ecx = D(edx+ebx);
//		xor     ebx, ebx
	ebx = 0;
//		jmp     ___71533h
	goto ___71533h;
___7064bh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     dl, [eax+__CEXT_V(___19a664h)]
	dl = B(eax+___19a664h);
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		sar     eax, 4
	eax = (int)eax >> 4;
//		inc     eax
	eax++;
//		cmp     edx, eax
//		jge     ___706a8h
	if((int)edx >= (int)eax) goto ___706a8h;
//		xor     eax, eax
	eax = 0;
//		xor     edx, edx
	edx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dl, al
	dl = al;
//		xor     ebx, ebx
	ebx = 0;
//		mov     bl, [edx+__CEXT_V(___19a582h)]
	bl = B(edx+___19a582h);
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(S3M_GlobalVolume)]
	dl = B(S3M_GlobalVolume);
//		imul    ebx, edx
	ebx = (int)ebx * (int)edx;
//		mov     ch, [eax+__CEXT_V(___19a664h)]
	ch = B(eax+___19a664h);
//		xor     edx, edx
	edx = 0;
//		inc     ch
	ch++;
//		mov     dl, al
	dl = al;
//		shl     ebx, 4
	ebx <<= 4;
//		mov     [eax+__CEXT_V(___19a664h)], ch
	B(eax+ ___19a664h) = ch;
//		mov     [edx*4+__CEXT_V(___68a10h)], ebx
	D(edx*4+___68a10h) = ebx;
//		jmp     ___71566h
	goto ___71566h;
___706a8h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     dl, [eax+__CEXT_V(___19a674h)]
	dl = B(eax+___19a674h);
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		sar     eax, 4
	eax = (int)eax >> 4;
//		inc     eax
	eax++;
//		cmp     edx, eax
//		jge     ___71566h
	if((int)edx >= (int)eax) goto ___71566h;
//		xor     eax, eax
	eax = 0;
//		xor     edx, edx
	edx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dl, al
	dl = al;
//		xor     edi, edi
	edi = 0;
//		mov     bl, [eax+__CEXT_V(___19a674h)]
	bl = B(eax+___19a674h);
//		mov     [edx*4+__CEXT_V(___68a10h)], edi
	D(edx*4+___68a10h) = edi;
//		xor     edx, edx
	edx = 0;
//		inc     bl
	bl++;
//		mov     dl, al
	dl = al;
//		mov     [eax+__CEXT_V(___19a674h)], bl
	B(eax+___19a674h) = bl;
//		mov     dl, [edx+__CEXT_V(___19a674h)]
	dl = B(edx+___19a674h);
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		sar     eax, 4
	eax = (int)eax >> 4;
//		and     edx, 0ffh
	edx &= 0xff;
//		inc     eax
	eax++;
//		cmp     edx, eax
//		jl      ___71566h
	if((int)edx < (int)eax) goto ___71566h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     bh, bh
	bh = 0;
//		mov     [eax+__CEXT_V(___19a664h)], bh
	B(eax+___19a664h) = bh;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     cl, cl
	cl = 0;
//		mov     [eax+__CEXT_V(___19a674h)], cl
	B(eax+___19a674h) = cl;
//		jmp     ___71566h
	goto ___71566h;
___70732h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5e4h)]
	al = B(eax+___19a5e4h);
//		cmp     al, 1
//		jb      ___7074eh
	if(al < 1) goto ___7074eh;
//		jbe     ___70774h
	if(al <= 1) goto ___70774h;
//		cmp     al, 2
//		je      ___707a0h
	if(al == 2) goto ___707a0h;
//		jmp     ___707c2h
	goto ___707c2h;
___7074eh:
//		test    al, al
//		jne     ___707c2h
	if(al != 0) goto ___707c2h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5f4h)]
	al = B(eax+___19a5f4h);
//		mov     [__CEXT_V(___24e87dh)], al
	B(___24e87dh) = al;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     byte [eax+__CEXT_V(___19a5e4h)], 1
	B(eax+___19a5e4h) = 1;
//		jmp     ___707c2h
	goto ___707c2h;
___70774h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ax, [eax*2+__CEXT_V(___19a604h)]
	ax = W(eax*2+___19a604h);
//		and     eax, 0ffffh
	eax &= 0xffff;
//		sar     eax, 8
	eax = (int)eax >> 8;
//		mov     [__CEXT_V(___24e87dh)], al
	B(___24e87dh) = al;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     byte [eax+__CEXT_V(___19a5e4h)], 2
	B(eax+___19a5e4h) = 2;
//		jmp     ___707c2h
	goto ___707c2h;
___707a0h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax*2+__CEXT_V(___19a604h)]
	al = B(eax*2+___19a604h);
//		mov     [__CEXT_V(___24e87dh)], al
	B(___24e87dh) = al;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     cl, cl
	cl = 0;
//		mov     [eax+__CEXT_V(___19a5e4h)], cl
	B(eax+___19a5e4h) = cl;
___707c2h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ax, [eax*2+__CEXT_V(___19a542h)]
	ax = W(eax*2+___19a542h);
//		mov     edx, [__CEXT_V(___24e850h)]
	edx = D(___24e850h);
//		and     eax, 0ffffh
	eax &= 0xffff;
//		mov     edx, [edx+eax*4]
	edx = D(edx+eax*4);
//		mov     al, [__CEXT_V(___24e87dh)]
	al = B(___24e87dh);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		mov     ax, [eax*2+__CEXT_V(___19a484h)]
	ax = W(eax*2+___19a484h);
//		xor     ecx, ecx
	ecx = 0;
//		mov     cl, [__CEXT_V(___24e87dh)]
	cl = B(___24e87dh);
//		and     eax, 0ffffh
	eax &= 0xffff;
//		sar     ecx, 4
	ecx = (int)ecx >> 4;
//		xor     ebx, ebx
	ebx = 0;
//		sar     eax, cl
	eax = (int)eax >> cl;
//		mov     ecx, edx
	ecx = edx;
//		jmp     ___71533h
	goto ___71533h;
___7080eh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5d2h)]
	al = B(eax+___19a5d2h);
//		and     al, 3
	al &= 3;
//		cmp     al, 3
//		ja      ___70932h
	if(al > 3) goto ___70932h;
//		and     eax, 0ffh
	eax &= 0xff;
//		jmp     dword [cs:eax*4+___6eec0h]

	/*
		___6eec0h:
		dd	___70832h
		dd	___70871h
		dd	___708b1h
		dd	___70902h
	*/

	switch(eax){
		case 0:		goto ___70832h;
		case 1:		goto ___70871h;
		case 2:		goto ___708b1h;
		case 3:		goto ___70902h;
		default: 	goto ___70932h;
	}

___70832h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5b2h)]
	al = B(eax+___19a5b2h);
//		and     eax, 0ffh
	eax &= 0xff;
//		mov     edx, [eax*2+__CEXT_V(___19a4bah)]
	edx = D(eax*2+___19a4bah);
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		shl     eax, 2
	eax <<= 2 ;
//		imul    eax, edx
	eax = (int)eax * (int)edx;
//		inc     eax
	eax++;
//		sar     eax, 9
	eax = (int)eax >> 9;
//		jmp     ___7092dh
	goto ___7092dh;
___70871h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		xor     edx, edx
	edx = 0;
//		and     al, 0fh
	al &= 0xf;
//		mov     dl, al
	dl = al;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		shl     edx, 2
	edx <<= 2;
//		mov     al, [eax+__CEXT_V(___19a5b2h)]
	al = B(eax+___19a5b2h);
//		mov     ebx, 20h
	ebx = 0x20;
//		and     eax, 0ffh
	eax &= 0xff;
//		sub     ebx, eax
	ebx -= eax;
//		imul    edx, ebx
	edx = (int)edx * (int)ebx;
//		sar     edx, 4
	edx = (int)edx >> 4;
//		mov     [__CEXT_V(___24e874h)], edx
	D(___24e874h) = edx;
//		jmp     ___70932h
	goto ___70932h;
___708b1h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5b2h)]
	al = B(eax+___19a5b2h);
//		and     eax, 0ffh
	eax &= 0xff;
//		cmp     word [eax*2+__CEXT_V(___19a4bch)], byte 0
//		jl      ___708e7h
	if((short)W(eax*2+___19a4bch) < 0) goto ___708e7h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		shl     eax, 2
	eax <<= 2 ;
//		jmp     ___7092dh
	goto ___7092dh;
___708e7h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		shl     eax, 2
	eax <<= 2 ;
//		neg     eax
	eax = 0 - eax;
//		jmp     ___7092dh
	goto ___7092dh;
___70902h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		lea     edx, [eax*4+0]
	edx = eax*4;
//		call    __CEXT_F(rand__clib3r)
	eax = rand__clib3r();
//		sub     eax, 4000h
	eax -= 0x4000;
//		imul    eax, edx
	eax = (int)eax * (int)edx;
//		sar     eax, 0eh
	eax = (int)eax >> 0xe;
___7092dh:
//		mov     [__CEXT_V(___24e874h)], eax
	D(___24e874h) = eax;
___70932h:
//		mov     dh, [__CEXT_V(S3M_InitialSpeed)]
	dh = B(S3M_InitialSpeed);
//		cmp     dh, [__CEXT_V(___19a53eh)]
//		je      ___70974h
	if(dh == B(___19a53eh)) goto ___70974h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     dl, [eax+__CEXT_V(___19a5c2h)]
	dl = B(eax+___19a5c2h);
//		mov     ebx, edx
	ebx = edx;
//		xor     edx, edx
	edx = 0;
//		sar     ebx, 4
	ebx = (int)ebx >> 4;
//		mov     dl, [eax+__CEXT_V(___19a5b2h)]
	dl = B(eax+___19a5b2h);
//		add     edx, ebx
	edx += ebx;
//		mov     [eax+__CEXT_V(___19a5b2h)], dl
	B(eax+___19a5b2h) = dl;
//		cmp     dl, 40h
//		jb      ___70974h
	if(dl < 0x40) goto ___70974h;
//		mov     bh, dl
	bh = dl;
//		sub     bh, 40h
	bh -= 0x40;
//		mov     [eax+__CEXT_V(___19a5b2h)], bh
	B(eax+___19a5b2h) = bh;
___70974h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     ebx, [__CEXT_V(___24e850h)]
	ebx = D(___24e850h);
//		mov     dx, [eax*2+__CEXT_V(___19a542h)]
	dx = W(eax*2+___19a542h);
//		mov     ecx, [ebx+edx*4]
	ecx = D(ebx+edx*4);
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		add     ax, [__CEXT_V(___24e874h)]
	ax += W(___24e874h);
//		xor     ebx, ebx
	ebx = 0;
//		mov     bx, ax
	bx = ax;
//		xor     eax, eax
	eax = 0;
//		or      ebx, ebx
	ebx |= ebx;
//		je      ___709c3h
	if(ebx == 0) goto ___709c3h;
//		mov     eax, 6d3bh
	eax = 0x6d3b;
//		imul    ecx
	PUSH(imul_eax(eax, ecx));
	PUSH(imul_edx(eax, ecx));
	POP(edx);
	POP(eax);
//		shld    edx, eax, 0dh
	edx = (edx << 0xd) | (eax >> (0x20 - 0xd));
//		shl     eax, 0dh
	eax <<= 0xd;
//		imul    ebx, ebx, 5780h
	ebx = (int)ebx * 0x5780;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		shr     eax, 1
//		adc     eax, byte 0
	eax = (eax >> 1) + (eax & 1);
___709c3h:
//		mov     edx, eax
	edx = eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     cl, [__CEXT_V(___24e878h)]
	cl = B(___24e878h);
//		mov     [eax*4+__CEXT_V(___68990h)], edx
	D(eax*4+___68990h) = edx;
//		test    cl, cl
//		je      ___70a59h
	if(cl == 0) goto ___70a59h;
//		test    cl, 0fh
//		jne     ___70a19h
	if((cl&0xf) != 0) goto ___70a19h;
//		mov     dl, [__CEXT_V(___19a53eh)]
	dl = B(___19a53eh);
//		cmp     dl, [__CEXT_V(S3M_InitialSpeed)]
//		je      ___70a19h
	if(dl == B(S3M_InitialSpeed)) goto ___70a19h;
//		xor     edx, edx
	edx = 0;
//		mov     dl, cl
	dl = cl;
//		mov     ebx, edx
	ebx = edx;
//		xor     edx, edx
	edx = 0;
//		sar     ebx, 4
	ebx = (int)ebx >> 4;
//		mov     dl, [eax+__CEXT_V(___19a582h)]
	dl = B(eax+___19a582h);
//		add     edx, ebx
	edx += ebx;
//		mov     [eax+__CEXT_V(___19a582h)], dl
	B(eax+___19a582h) = dl;
//		cmp     dl, 40h
//		jbe     ___70a19h
	if(dl <= 0x40) goto ___70a19h;
//		mov     byte [eax+__CEXT_V(___19a582h)], 40h
	B(eax+___19a582h) = 0x40;
___70a19h:
//		mov     cl, [__CEXT_V(___24e878h)]
	cl = B(___24e878h);
//		test    cl, 0f0h
//		jne     ___70a59h
	if((cl&0xf0) != 0) goto ___70a59h;
//		mov     ch, [__CEXT_V(S3M_InitialSpeed)]
	ch = B(S3M_InitialSpeed);
//		cmp     ch, [__CEXT_V(___19a53eh)]
//		je      ___70a59h
	if(ch == B(___19a53eh)) goto ___70a59h;
//		xor     eax, eax
	eax = 0;
//		mov     dl, cl
	dl = cl;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		and     dl, 0fh
	dl &= 0xf;
//		mov     dh, [eax+__CEXT_V(___19a582h)]
	dh = B(eax+___19a582h);
//		sub     dh, dl
	dh -= dl;
//		mov     [eax+__CEXT_V(___19a582h)], dh
	B(eax+___19a582h) = dh;
//		cmp     dh, 40h
//		jbe     ___70a59h
	if(dh <= 0x40) goto ___70a59h;
//		xor     bh, bh
	bh = 0;
//		mov     [eax+__CEXT_V(___19a582h)], bh
	B(eax+___19a582h) = bh;
___70a59h:
//		xor     eax, eax
	eax = 0;
//		xor     ebx, ebx
	ebx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     bl, [__CEXT_V(S3M_GlobalVolume)]
	bl = B(S3M_GlobalVolume);
//		mov     dl, [eax+__CEXT_V(___19a582h)]
	dl = B(eax+___19a582h);
//		imul    edx, ebx
	edx = (int)edx * (int)ebx;
//		shl     edx, 4
	edx <<= 4;
//		mov     [eax*4+__CEXT_V(___68a10h)], edx
	D(eax*4+___68a10h) = edx;
//		jmp     ___71566h
	goto ___71566h;
___70a82h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		lea     ebx, [eax*2+0]
	ebx = eax*2;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		lea     edx, [eax*2+0]
	edx = eax*2;
//		mov     ax, [ebx+__CEXT_V(___19a644h)]
	ax = W(ebx+___19a644h);
//		cmp     ax, [edx+__CEXT_V(___19a562h)]
//		je      ___70c51h
	if(ax == W(edx+___19a562h)) goto ___70c51h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		lea     ebx, [eax*2+0]
	ebx = eax*2;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		lea     edx, [eax*2+0]
	edx = eax*2;
//		mov     ax, [ebx+__CEXT_V(___19a644h)]
	ax = W(ebx+___19a644h);
//		cmp     ax, [edx+__CEXT_V(___19a562h)]
//		jbe     ___70b69h
	if(ax <= W(edx+___19a562h)) goto ___70b69h;
//		xor     eax, eax
	eax = 0;
//		xor     edx, edx
	edx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dl, al
	dl = al;
//		mov     dx, [edx*2+__CEXT_V(___24e880h)]
	dx = W(edx*2+___24e880h);
//		mov     cx, [eax*2+__CEXT_V(___19a562h)]
	cx = W(eax*2+___19a562h);
//		shl     edx, 2
	edx <<= 2;
//		add     ecx, edx
	ecx += edx;
//		mov     [eax*2+__CEXT_V(___19a562h)], cx
	W(eax*2+___19a562h) = cx;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		lea     ebx, [eax*2+0]
	ebx = eax*2;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		lea     edx, [eax*2+0]
	edx = eax*2;
//		mov     ax, [ebx+__CEXT_V(___19a562h)]
	ax = W(ebx+___19a562h);
//		cmp     ax, [edx+__CEXT_V(___19a644h)]
//		jbe     ___70bfah
	if(ax <= W(edx+___19a644h)) goto ___70bfah;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		lea     edx, [eax*2+0]
	edx = eax*2;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		lea     ebx, [eax*2+0]
	ebx = eax*2;
//		mov     ax, [edx+__CEXT_V(___19a644h)]
	ax = W(edx+___19a644h);
//		mov     [ebx+__CEXT_V(___19a562h)], ax
	W(ebx+___19a562h) = ax;
//		jmp     ___70bfah
	goto ___70bfah;
___70b69h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ax, [eax*2+__CEXT_V(___24e880h)]
	ax = W(eax*2+___24e880h);
//		and     eax, 0ffffh
	eax &= 0xffff;
//		lea     edx, [eax*4+0]
	edx = eax*4;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		and     eax, 0ffffh
	eax &= 0xffff;
//		cmp     edx, eax
//		jg      ___70bc6h
	if((int)edx > (int)eax) goto ___70bc6h;
//		xor     eax, eax
	eax = 0;
//		xor     edx, edx
	edx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dl, al
	dl = al;
//		mov     dx, [edx*2+__CEXT_V(___24e880h)]
	dx = W(edx*2+___24e880h);
//		mov     di, [eax*2+__CEXT_V(___19a562h)]
	di = W(eax*2+___19a562h);
//		shl     edx, 2
	edx <<= 2;
//		sub     edi, edx
	edi -= edx;
//		mov     [eax*2+__CEXT_V(___19a562h)], di
	W(eax*2+___19a562h) = di;
//		jmp     ___70bd7h
	goto ___70bd7h;
___70bc6h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     ecx, ecx
	ecx = 0;
//		mov     [eax*2+__CEXT_V(___19a562h)], cx
	W(eax*2+___19a562h) = cx;
___70bd7h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		add     eax, eax
	eax += eax;
//		mov     dx, [eax+__CEXT_V(___19a562h)]
	dx = W(eax+___19a562h);
//		mov     bx, [eax+__CEXT_V(___19a644h)]
	bx = W(eax+___19a644h);
//		cmp     dx, bx
//		jae     ___70bfah
	if(dx >= bx) goto ___70bfah;
//		mov     [eax+__CEXT_V(___19a562h)], bx
	W(eax+___19a562h) = bx;
___70bfah:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     ebx, [__CEXT_V(___24e850h)]
	ebx = D(___24e850h);
//		mov     dx, [eax*2+__CEXT_V(___19a542h)]
	dx = W(eax*2+___19a542h);
//		mov     ecx, [ebx+edx*4]
	ecx = D(ebx+edx*4);
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		xor     ebx, ebx
	ebx = 0;
//		mov     bx, ax
	bx = ax;
//		xor     eax, eax
	eax = 0;
//		or      ebx, ebx
	ebx |= ebx;
//		je      ___70c42h
	if(ebx == 0) goto ___70c42h;
//		mov     eax, 6d3bh
	eax = 0x6d3b;
//		imul    ecx
	PUSH(imul_eax(eax, ecx));
	PUSH(imul_edx(eax, ecx));
	POP(edx);
	POP(eax);
//		shld    edx, eax, 0dh
	edx = (edx << 0xd) | (eax >> (0x20 - 0xd));
//		shl     eax, 0dh
	eax <<= 0xd;
//		imul    ebx, ebx, 5780h
	ebx = (int)ebx * 0x5780;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		shr     eax, 1
//		adc     eax, byte 0
	eax = (eax >> 1) + (eax & 1);
___70c42h:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     [edx*4+__CEXT_V(___68990h)], eax
	D(edx*4+___68990h) = eax;
___70c51h:
//		mov     ch, [__CEXT_V(___24e878h)]
	ch = B(___24e878h);
//		test    ch, ch
//		je      ___70cddh
	if(ch == 0) goto ___70cddh;
//		test    ch, 0fh
//		jne     ___70c9dh
	if((ch&0xf) != 0) goto ___70c9dh;
//		mov     al, [__CEXT_V(___19a53eh)]
	al = B(___19a53eh);
//		cmp     al, [__CEXT_V(S3M_InitialSpeed)]
//		je      ___70c9dh
	if(al == B(S3M_InitialSpeed)) goto ___70c9dh;
//		xor     edx, edx
	edx = 0;
//		xor     eax, eax
	eax = 0;
//		mov     dl, ch
	dl = ch;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ebx, edx
	ebx = edx;
//		xor     edx, edx
	edx = 0;
//		sar     ebx, 4
	ebx = (int)ebx >> 4;
//		mov     dl, [eax+__CEXT_V(___19a582h)]
	dl = B(eax+___19a582h);
//		add     edx, ebx
	edx += ebx;
//		mov     [eax+__CEXT_V(___19a582h)], dl
	B(eax+___19a582h) = dl;
//		cmp     dl, 40h
//		jbe     ___70c9dh
	if(dl <= 0x40) goto ___70c9dh;
//		mov     byte [eax+__CEXT_V(___19a582h)], 40h
	B(eax+___19a582h) = 0x40;
___70c9dh:
//		mov     bl, [__CEXT_V(___24e878h)]
	bl = B(___24e878h);
//		test    bl, 0f0h
//		jne     ___70cddh
	if((bl&0xf0) != 0) goto ___70cddh;
//		mov     bh, [__CEXT_V(S3M_InitialSpeed)]
	bh = B(S3M_InitialSpeed);
//		cmp     bh, [__CEXT_V(___19a53eh)]
//		je      ___70cddh
	if(bh == B(___19a53eh)) goto ___70cddh;
//		xor     eax, eax
	eax = 0;
//		mov     dl, bl
	dl = bl;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		and     dl, 0fh
	dl &= 0xf;
//		mov     cl, [eax+__CEXT_V(___19a582h)]
	cl = B(eax+___19a582h);
//		sub     cl, dl
	cl -= dl;
//		mov     [eax+__CEXT_V(___19a582h)], cl
	B(eax+___19a582h) = cl;
//		cmp     cl, 40h
//		jbe     ___70cddh
	if(cl <= 0x40) goto ___70cddh;
//		xor     dl, dl
	dl = 0;
//		mov     [eax+__CEXT_V(___19a582h)], dl
	B(eax+___19a582h) = dl;
___70cddh:
//		xor     eax, eax
	eax = 0;
//		xor     edx, edx
	edx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     ebx, ebx
	ebx = 0;
//		mov     dl, [__CEXT_V(S3M_GlobalVolume)]
	dl = B(S3M_GlobalVolume);
//		mov     bl, [eax+__CEXT_V(___19a582h)]
	bl = B(eax+___19a582h);
//		imul    edx, ebx
	edx = (int)edx * (int)ebx;
//		shl     edx, 4
	edx <<= 4;
//		mov     [eax*4+__CEXT_V(___68a10h)], edx
	D(eax*4+___68a10h) = edx;
//		jmp     ___71566h
	goto ___71566h;
___70d06h:
//		xor     eax, eax
	eax = 0;
//		xor     edx, edx
	edx = 0;
//		mov     al, [__CEXT_V(___19a540h)]
	al = B(___19a540h);
//		mov     dl, [__CEXT_V(S3M_InitialSpeed)]
	dl = B(S3M_InitialSpeed);
//		imul    edx, eax
	edx = (int)edx * (int)eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___19a53eh)]
	al = B(___19a53eh);
//		sub     edx, eax
	edx -= eax;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		xor     ebx, ebx
	ebx = 0;
//		and     al, 0fh
	al &= 0xf;
//		mov     bl, al
	bl = al;
//		mov     eax, edx
	eax = edx;
//		sar     edx, 1fh
	edx = (int)edx >> 0x1f;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		test    edx, edx
//		jne     ___71566h
	if(edx != 0) goto ___71566h;
//		xor     eax, eax
	eax = 0;
//		mov     dl, [__CEXT_V(S3M_InitialSpeed)]
	dl = B(S3M_InitialSpeed);
//		mov     al, [__CEXT_V(___19a540h)]
	al = B(___19a540h);
//		imul    edx, eax
	edx = (int)edx * (int)eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___19a53eh)]
	al = B(___19a53eh);
//		cmp     edx, eax
//		je      ___71566h
	if(edx == eax) goto ___71566h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		lea     edx, [eax*2+0]
	edx = eax*2;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		lea     ebx, [eax*2+0]
	ebx = eax*2;
//		mov     ax, [edx+__CEXT_V(___19a542h)]
	ax = W(edx+___19a542h);
//		mov     [ebx+__CEXT_V(___688d0h)], ax
	W(ebx+___688d0h) = ax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e878h)]
	al = B(___24e878h);
//		sar     eax, 4
	eax = (int)eax >> 4;
//		dec     eax
	eax--;
//		cmp     eax, byte 0eh
//		ja      ___71017h
	if(eax > 0xe) goto ___71017h;
//		jmp     dword [cs:eax*4+___6eed0h]

	/*
		___6eed0h:
		dd	___70da0h
		dd	___70dd6h
		dd	___70e0dh
		dd	___70e30h
		dd	___70e53h
		dd	___70e7ah
		dd	___70eaah
		dd	___71017h
		dd	___70ebch
		dd	___70eebh
		dd	___70f1bh
		dd	___70f4bh
		dd	___70f7bh
		dd	___70fa8h
		dd	___70fe4h
	*/

	switch(eax){
		case 0:		goto ___70da0h;
		case 1:		goto ___70dd6h;
		case 2:		goto ___70e0dh;
		case 3:		goto ___70e30h;
		case 4:		goto ___70e53h;
		case 5:		goto ___70e7ah;
		case 6:		goto ___70eaah;
		case 7:		goto ___71017h;
		case 8:		goto ___70ebch;
		case 9:		goto ___70eebh;
		case 10:	goto ___70f1bh;
		case 11:	goto ___70f4bh;
		case 12:	goto ___70f7bh;
		case 13:	goto ___70fa8h;
		case 14:	goto ___70fe4h;
		default:	goto ___71017h;
	}

___70da0h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		cmp     byte [eax+__CEXT_V(___19a582h)], 1
//		jb      ___70dc2h
	if(B(eax+___19a582h) < 1) goto ___70dc2h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		dec     byte [eax+__CEXT_V(___19a582h)]
	B(eax+___19a582h)--;
//		jmp     ___71017h
	goto ___71017h;
___70dc2h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     bh, bh
	bh = 0;
//		mov     [eax+__CEXT_V(___19a582h)], bh
	B(eax+___19a582h) = bh;
//		jmp     ___71017h
	goto ___71017h;
___70dd6h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		cmp     byte [eax+__CEXT_V(___19a582h)], 2
//		jb      ___70df9h
	if(B(eax+___19a582h) < 2) goto ___70df9h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		sub     byte [eax+__CEXT_V(___19a582h)], 2
	B(eax+___19a582h) -= 2;
//		jmp     ___71017h
	goto ___71017h;
___70df9h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     dl, dl
	dl = 0;
//		mov     [eax+__CEXT_V(___19a582h)], dl
	B(eax+___19a582h) = dl;
//		jmp     ___71017h
	goto ___71017h;
___70e0dh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		cmp     byte [eax+__CEXT_V(___19a582h)], 4
//		jb      ___70dc2h
	if(B(eax+___19a582h) < 4) goto ___70dc2h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		sub     byte [eax+__CEXT_V(___19a582h)], 4
	B(eax+___19a582h) -= 4;
//		jmp     ___71017h
	goto ___71017h;
___70e30h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		cmp     byte [eax+__CEXT_V(___19a582h)], 8
//		jb      ___70df9h
	if(B(eax+___19a582h) < 8) goto ___70df9h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		sub     byte [eax+__CEXT_V(___19a582h)], 8
	B(eax+___19a582h) -= 8;
//		jmp     ___71017h
	goto ___71017h;
___70e53h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		cmp     byte [eax+__CEXT_V(___19a582h)], 10h
//		jb      ___70dc2h
	if(B(eax+___19a582h) < 0x10) goto ___70dc2h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		sub     byte [eax+__CEXT_V(___19a582h)], 10h
	B(eax+___19a582h) -= 0x10;
//		jmp     ___71017h
	goto ___71017h;
___70e7ah:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     dl, [eax+__CEXT_V(___19a582h)]
	dl = B(eax+___19a582h);
//		add     edx, edx
	edx += edx;
//		mov     ebx, 3
	ebx = 3;
//		mov     eax, edx
	eax = edx;
//		sar     edx, 1fh
	edx = (int)edx >> 0x1f;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     [edx+__CEXT_V(___19a582h)], al
	B(edx+___19a582h) = al;
//		jmp     ___71017h
	goto ___71017h;
___70eaah:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		shr     byte [eax+__CEXT_V(___19a582h)], 1
	B(eax+___19a582h) >>= 1;
//		jmp     ___71017h
	goto ___71017h;
___70ebch:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ch, [eax+__CEXT_V(___19a582h)]
	ch = B(eax+___19a582h);
//		xor     edx, edx
	edx = 0;
//		inc     ch
	ch++;
//		mov     dl, al
	dl = al;
//		mov     [eax+__CEXT_V(___19a582h)], ch
	B(eax+___19a582h) = ch;
//		cmp     byte [edx+__CEXT_V(___19a582h)], 40h
//		jbe     ___71017h
	if(B(edx+___19a582h) <= 0x40) goto ___71017h;
//		xor     eax, eax
	eax = 0;
//		mov     al, dl
	al = dl;
//		jmp     ___71010h
	goto ___71010h;
___70eebh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     bl, [eax+__CEXT_V(___19a582h)]
	bl = B(eax+___19a582h);
//		xor     edx, edx
	edx = 0;
//		add     bl, 2
	bl += 2;
//		mov     dl, al
	dl = al;
//		mov     [eax+__CEXT_V(___19a582h)], bl
	B(eax+___19a582h) = bl;
//		cmp     byte [edx+__CEXT_V(___19a582h)], 40h
//		jbe     ___71017h
	if(B(edx+___19a582h) <= 0x40) goto ___71017h;
//		xor     eax, eax
	eax = 0;
//		mov     al, dl
	al = dl;
//		jmp     ___71010h
	goto ___71010h;
___70f1bh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ch, [eax+__CEXT_V(___19a582h)]
	ch = B(eax+___19a582h);
//		xor     edx, edx
	edx = 0;
//		add     ch, 4
	ch += 4;
//		mov     dl, al
	dl = al;
//		mov     [eax+__CEXT_V(___19a582h)], ch
	B(eax+___19a582h) = ch;
//		cmp     byte [edx+__CEXT_V(___19a582h)], 40h
//		jbe     ___71017h
	if(B(edx+___19a582h) <= 0x40) goto ___71017h;
//		xor     eax, eax
	eax = 0;
//		mov     al, dl
	al = dl;
//		jmp     ___71010h
	goto ___71010h;
___70f4bh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     bl, [eax+__CEXT_V(___19a582h)]
	bl = B(eax+___19a582h);
//		xor     edx, edx
	edx = 0;
//		add     bl, 8
	bl += 8;
//		mov     dl, al
	dl = al;
//		mov     [eax+__CEXT_V(___19a582h)], bl
	B(eax+___19a582h) = bl;
//		cmp     byte [edx+__CEXT_V(___19a582h)], 40h
//		jbe     ___71017h
	if(B(edx+___19a582h) <= 0x40) goto ___71017h;
//		xor     eax, eax
	eax = 0;
//		mov     al, dl
	al = dl;
//		jmp     ___71010h
	goto ___71010h;
___70f7bh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     ch, [eax+__CEXT_V(___19a582h)]
	ch = B(eax+___19a582h);
//		xor     edx, edx
	edx = 0;
//		add     ch, 10h
	ch += 0x10;
//		mov     dl, al
	dl = al;
//		mov     [eax+__CEXT_V(___19a582h)], ch
	B(eax+___19a582h) = ch;
//		cmp     byte [edx+__CEXT_V(___19a582h)], 40h
//		jbe     ___71017h
	if(B(edx+___19a582h) <= 0x40) goto ___71017h;
//		xor     eax, eax
	eax = 0;
//		mov     al, dl
	al = dl;
//		jmp     ___71010h
	goto ___71010h;
___70fa8h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     dl, [eax+__CEXT_V(___19a582h)]
	dl = B(eax+___19a582h);
//		lea     edx, [edx+edx*2]
	edx = edx+edx*2;
//		mov     eax, edx
	eax = edx;
//		sar     edx, 1fh
	edx = (int)edx >> 0x1f;
//		sub     eax, edx
	eax -= edx;
//		sar     eax, 1
	eax = (int)eax >> 1;
//		mov     dl, al
	dl = al;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     [eax+__CEXT_V(___19a582h)], dl
	B(eax+___19a582h) = dl;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		cmp     byte [eax+__CEXT_V(___19a582h)], 40h
//		jbe     ___71017h
	if(B(eax+___19a582h) <= 0x40) goto ___71017h;
//		jmp     ___71009h
	goto ___71009h;
___70fe4h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     dl, [eax+__CEXT_V(___19a582h)]
	dl = B(eax+___19a582h);
//		add     dl, dl
	dl += dl;
//		mov     [eax+__CEXT_V(___19a582h)], dl
	B(eax+___19a582h) = dl;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		cmp     byte [eax+__CEXT_V(___19a582h)], 40h
//		jbe     ___71017h
	if(B(eax+___19a582h) <= 0x40) goto ___71017h;
___71009h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
___71010h:
//		mov     byte [eax+__CEXT_V(___19a582h)], 40h
	B(eax+___19a582h) = 0x40;
___71017h:
//		xor     eax, eax
	eax = 0;
//		xor     edx, edx
	edx = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     ebx, ebx
	ebx = 0;
//		mov     dl, [__CEXT_V(S3M_GlobalVolume)]
	dl = B(S3M_GlobalVolume);
//		mov     bl, [eax+__CEXT_V(___19a582h)]
	bl = B(eax+___19a582h);
//		imul    edx, ebx
	edx = (int)edx * (int)ebx;
//		shl     edx, 4
	edx <<= 4;
//		mov     [eax*4+__CEXT_V(___68a10h)], edx
	D(eax*4+___68a10h) = edx;
//		jmp     ___71566h
	goto ___71566h;
___71040h:
//		mov     dl, [eax+__CEXT_V(___19a5d2h)]
	dl = B(eax+___19a5d2h);
//		and     dl, 0ch
	dl &= 0xc;
//		and     edx, 0ffh
	edx &= 0xff;
//		sar     edx, 2
	edx = (int)edx >> 2;
//		cmp     edx, byte 3
//		ja      ___7112eh
	if(edx > 3) goto ___7112eh;
//		jmp     dword [cs:edx*4+___6ef0ch]

	/*
		___6ef0ch:
		dd	___71063h
		dd	___7109eh
		dd	___710d3h
		dd	___7110dh
	*/

	switch(edx){
		case 0:		goto ___71063h;
		case 1: 	goto ___7109eh;
		case 2:		goto ___710d3h;
		case 3:		goto ___7110dh;
		default: 	goto ___7112eh;
	}

___71063h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5b2h)]
	al = B(eax+___19a5b2h);
//		and     eax, 0ffh
	eax &= 0xff;
//		mov     edx, [eax*2+__CEXT_V(___19a4bah)]
	edx = D(eax*2+___19a4bah);
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		imul    eax, edx
	eax = (int)eax * (int)edx;
//		sar     eax, 8
	eax = (int)eax >> 8;
//		jmp     ___71129h
	goto ___71129h;
___7109eh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5b2h)]
	al = B(eax+___19a5b2h);
//		mov     edx, 20h
	edx = 0x20;
//		and     eax, 0ffh
	eax &= 0xff;
//		sub     edx, eax
	edx -= eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		imul    eax, edx
	eax = (int)eax * (int)edx;
//		sar     eax, 6
	eax = (int)eax >> 6;
//		jmp     ___71129h
	goto ___71129h;
___710d3h:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [eax+__CEXT_V(___19a5b2h)]
	dl = B(eax+___19a5b2h);
//		cmp     word [edx*2+__CEXT_V(___19a4bch)], byte 0
//		jl      ___710fch
	if((short)W(edx*2+___19a4bch) < 0) goto ___710fch;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		jmp     ___71129h
	goto ___71129h;
___710fch:
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		neg     eax
	eax = 0 - eax;
//		jmp     ___71129h
	goto ___71129h;
___7110dh:
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		xor     edx, edx
	edx = 0;
//		and     al, 0fh
	al &= 0xf;
//		mov     dl, al
	dl = al;
//		call    __CEXT_F(rand__clib3r)
	eax = rand__clib3r();
//		sub     eax, 4000h
	eax -= 0x4000;
//		imul    eax, edx
	eax = (int)eax * (int)edx;
//		sar     eax, 0dh
	eax = (int)eax >> 0xd;
___71129h:
//		mov     [__CEXT_V(___24e874h)], eax
	D(___24e874h) = eax;
___7112eh:
//		mov     cl, [__CEXT_V(S3M_InitialSpeed)]
	cl = B(S3M_InitialSpeed);
//		cmp     cl, [__CEXT_V(___19a53eh)]
//		je      ___7116bh
	if(cl == B(___19a53eh)) goto ___7116bh;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     dl, [eax+__CEXT_V(___19a5c2h)]
	dl = B(eax+___19a5c2h);
//		mov     ebx, edx
	ebx = edx;
//		xor     edx, edx
	edx = 0;
//		sar     ebx, 4
	ebx = (int)ebx >> 4;
//		mov     dl, [eax+__CEXT_V(___19a5b2h)]
	dl = B(eax+___19a5b2h);
//		add     edx, ebx
	edx += ebx;
//		mov     ch, dl
	ch = dl;
//		mov     [eax+__CEXT_V(___19a5b2h)], dl
	B(eax+___19a5b2h) = dl;
//		and     ch, 3fh
	ch &= 0x3f;
//		mov     [eax+__CEXT_V(___19a5b2h)], ch
	B(eax+___19a5b2h) = ch;
___7116bh:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		mov     al, [eax+__CEXT_V(___19a582h)]
	al = B(eax+___19a582h);
//		mov     edi, [__CEXT_V(___24e874h)]
	edi = D(___24e874h);
//		and     eax, 0ffh
	eax &= 0xff;
//		add     edi, eax
	edi += eax;
//		mov     [__CEXT_V(___24e874h)], edi
	D(___24e874h) = edi;
//		test    edi, edi
//		jge     ___71196h
	if((int)edi >= 0) goto ___71196h;
//		xor     eax, eax
	eax = 0;
//		mov     [__CEXT_V(___24e874h)], eax
	D(___24e874h) = eax;
___71196h:
//		cmp     dword [__CEXT_V(___24e874h)], byte 40h
//		jle     ___711a9h
	if((int)D(___24e874h) <= 0x40) goto ___711a9h;
//		mov     dword [__CEXT_V(___24e874h)], 40h
	D(___24e874h) = 0x40;
___711a9h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(S3M_GlobalVolume)]
	al = B(S3M_GlobalVolume);
//		mov     ecx, [__CEXT_V(___24e874h)]
	ecx = D(___24e874h);
//		mov     edx, eax
	edx = eax;
//		imul    edx, ecx
	edx = (int)edx * (int)ecx;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		shl     edx, 4
	edx <<= 4;
//		mov     [eax*4+__CEXT_V(___68a10h)], edx
	D(eax*4+___68a10h) = edx;
//		jmp     ___71566h
	goto ___71566h;
___711d1h:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e878h)]
	dl = B(___24e878h);
//		sar     edx, 4
	edx = (int)edx >> 4;
//		cmp     edx, byte 0ch
//		jb      ___71566h
	if(edx < 0xc) goto ___71566h;
//		lea     ecx, [eax*2+0]
	ecx = eax*2;
//		jbe     ___711f8h
	if(edx <= 0xc) goto ___711f8h;
//		cmp     edx, byte 0dh
//		je      ___71229h
	if(edx == 0xd) goto ___71229h;
//		jmp     ___71566h
	goto ___71566h;
___711f8h:
//		mov     dl, [eax+__CEXT_V(___19a5e4h)]
	dl = B(eax+___19a5e4h);
//		test    dl, dl
//		je      ___71211h
	if(dl == 0) goto ___71211h;
//		mov     bh, dl
	bh = dl;
//		dec     bh
	bh--;
//		mov     [eax+__CEXT_V(___19a5e4h)], bh
	B(eax+___19a5e4h) = bh;
//		jmp     ___71566h
	goto ___71566h;
___71211h:
//		mov     [eax+__CEXT_V(___19a592h)], dl
	B(eax+___19a592h) = dl;
//		mov     [eax+__CEXT_V(___19a5a2h)], dl
	B(eax+___19a5a2h) = dl;
//		mov     [ecx+__CEXT_V(___688d0h)], si
	W(ecx+___688d0h) = si;
//		jmp     ___71566h
	goto ___71566h;
___71229h:
//		mov     dl, [eax+__CEXT_V(___19a5e4h)]
	dl = B(eax+___19a5e4h);
//		test    dl, dl
//		je      ___71242h
	if(dl == 0) goto ___71242h;
//		mov     cl, dl
	cl = dl;
//		dec     cl
	cl--;
//		mov     [eax+__CEXT_V(___19a5e4h)], cl
	B(eax+___19a5e4h) = cl;
//		jmp     ___71566h
	goto ___71566h;
___71242h:
//		xor     edx, edx
	edx = 0;
//		mov     dx, [ecx+__CEXT_V(___19a604h)]
	dx = W(ecx+___19a604h);
//		sar     edx, 8
	edx = (int)edx >> 8;
//		mov     [__CEXT_V(___24e87fh)], dl
	B(___24e87fh) = dl;
//		mov     dl, [ecx+__CEXT_V(___19a604h)]
	dl = B(ecx+___19a604h);
//		mov     [__CEXT_V(___24e87ch)], dl
	B(___24e87ch) = dl;
//		xor     edx, edx
	edx = 0;
//		mov     dx, [ecx+__CEXT_V(___19a624h)]
	dx = W(ecx+___19a624h);
//		sar     edx, 8
	edx = (int)edx >> 8;
//		mov     [__CEXT_V(___24e87dh)], dl
	B(___24e87dh) = dl;
//		mov     dx, [ecx+__CEXT_V(___19a624h)]
	dx = W(ecx+___19a624h);
//		xor     dh, dh
	dh = 0;
//		mov     [__CEXT_V(___24e87ah)], dx
	W(___24e87ah) = dx;
//		test    byte [__CEXT_V(___24e87fh)], 20h
//		je      ___7135ah
	if((B(___24e87fh)&0x20) == 0) goto ___7135ah;
//		mov     dx, [__CEXT_V(___24e87ah)]
	dx = W(___24e87ah);
//		test    dx, dx
//		jne     ___712e8h
	if(dx != 0) goto ___712e8h;
//		mov     ax, [ecx+__CEXT_V(___19a542h)]
	ax = W(ecx+___19a542h);
//		mov     [__CEXT_V(___24e87ah)], ax
	W(___24e87ah) = ax;
//		test    ax, ax
//		jne     ___712b7h
	if(ax != 0) goto ___712b7h;
//		xor     cl, cl
	cl = 0;
//		mov     [__CEXT_V(___24e87dh)], cl
	B(___24e87dh) = cl;
//		jmp     ___71307h
	goto ___71307h;
___712b7h:
//		mov     bl, [__CEXT_V(___24e87dh)]
	bl = B(___24e87dh);
//		cmp     bl, 0ffh
//		je      ___712c6h
	if(bl == 0xff) goto ___712c6h;
//		test    bl, bl
//		jne     ___71307h
	if(bl != 0) goto ___71307h;
___712c6h:
//		xor     eax, eax
	eax = 0;
//		mov     edx, [__CEXT_V(___24e864h)]
	edx = D(___24e864h);
//		mov     ax, [__CEXT_V(___24e87ah)]
	ax = W(___24e87ah);
//		add     eax, edx
	eax += edx;
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     al, [eax]
	al = B(eax);
//		mov     [edx+__CEXT_V(___19a582h)], al
	B(edx+___19a582h) = al;
//		jmp     ___71307h
	goto ___71307h;
___712e8h:
//		mov     [ecx+__CEXT_V(___19a542h)], dx
	W(ecx+___19a542h) = dx;
//		xor     edx, edx
	edx = 0;
//		mov     ebx, [__CEXT_V(___24e864h)]
	ebx = D(___24e864h);
//		mov     dx, [__CEXT_V(___24e87ah)]
	dx = W(___24e87ah);
//		mov     dl, [edx+ebx]
	dl = B(edx+ebx);
//		mov     [eax+__CEXT_V(___19a582h)], dl
	B(eax+___19a582h) = dl;
___71307h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		add     eax, eax
	eax += eax;
//		mov     dx, [__CEXT_V(___24e87ah)]
	dx = W(___24e87ah);
//		mov     ch, [__CEXT_V(___24e87dh)]
	ch = B(___24e87dh);
//		mov     [eax+__CEXT_V(___688d0h)], dx
	W(eax+___688d0h) = dx;
//		cmp     ch, 0ffh
//		je      ___7135ah
	if(ch == 0xff) goto ___7135ah;
//		test    ch, ch
//		je      ___7135ah
	if(ch == 0) goto ___7135ah;
//		mov     dl, ch
	dl = ch;
//		and     dl, 0fh
	dl &= 0xf;
//		and     edx, 0ffh
	edx &= 0xff;
//		mov     dx, [edx*2+__CEXT_V(___19a484h)]
	dx = W(edx*2+___19a484h);
//		xor     ecx, ecx
	ecx = 0;
//		mov     cl, [__CEXT_V(___24e87dh)]
	cl = B(___24e87dh);
//		and     edx, 0ffffh
	edx &= 0xffff;
//		sar     ecx, 4
	ecx = (int)ecx >> 4;
//		sar     edx, cl
	edx = (int)edx >> cl;
//		mov     [eax+__CEXT_V(___19a562h)], dx
	W(eax+___19a562h) = dx;
___7135ah:
//		test    byte [__CEXT_V(___24e87fh)], 40h
//		je      ___71376h
	if((B(___24e87fh)&0x40) == 0) goto ___71376h;
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     al, [__CEXT_V(___24e87ch)]
	al = B(___24e87ch);
//		mov     [edx+__CEXT_V(___19a582h)], al
	B(edx+___19a582h) = al;
___71376h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     ebx, [__CEXT_V(___24e850h)]
	ebx = D(___24e850h);
//		mov     dx, [eax*2+__CEXT_V(___19a542h)]
	dx = W(eax*2+___19a542h);
//		mov     ecx, [ebx+edx*4]
	ecx = D(ebx+edx*4);
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		xor     ebx, ebx
	ebx = 0;
//		mov     bx, ax
	bx = ax;
//		xor     eax, eax
	eax = 0;
//		or      ebx, ebx
	ebx |= ebx;
//		je      ___713beh
	if(ebx == 0) goto ___713beh;
//		mov     eax, 6d3bh
	eax = 0x6d3b;
//		imul    ecx
	PUSH(imul_eax(eax, ecx));
	PUSH(imul_edx(eax, ecx));
	POP(edx);
	POP(eax);
//		shld    edx, eax, 0dh
	edx = (edx << 0xd) | (eax >> (0x20 - 0xd));
//		shl     eax, 0dh
	eax <<= 0xd;
//		imul    ebx, ebx, 5780h
	ebx = (int)ebx * 0x5780;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		shr     eax, 1
//		adc     eax, byte 0
	eax = (eax >> 1) + (eax & 1);
___713beh:
//		mov     edx, eax
	edx = eax;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     ebx, ebx
	ebx = 0;
//		mov     [eax*4+__CEXT_V(___68990h)], edx
	D(eax*4+___68990h) = edx;
//		xor     edx, edx
	edx = 0;
//		mov     bl, [eax+__CEXT_V(___19a582h)]
	bl = B(eax+___19a582h);
//		mov     dl, [__CEXT_V(S3M_GlobalVolume)]
	dl = B(S3M_GlobalVolume);
//		imul    edx, ebx
	edx = (int)edx * (int)ebx;
//		shl     edx, 4
	edx <<= 4;
//		xor     bl, bl
	bl = 0;
//		mov     [eax*4+__CEXT_V(___68a10h)], edx
	D(eax*4+___68a10h) = edx;
//		mov     [eax+__CEXT_V(___19a592h)], bl
	B(eax+___19a592h) = bl;
//		mov     [eax+__CEXT_V(___19a5a2h)], bl
	B(eax+___19a5a2h) = bl;
//		jmp     ___71566h
	goto ___71566h;
___713feh:
//		mov     dl, [eax+__CEXT_V(___19a5d2h)]
	dl = B(eax+___19a5d2h);
//		and     dl, 3
	dl &= 3;
//		cmp     dl, 3
//		ja      ___714c4h
	if(dl > 3) goto ___714c4h;
//		and     edx, 0ffh
	edx &= 0xff;
//		jmp     dword [cs:edx*4+___6ef1ch]

	/*
		___6ef1ch:
		dd	___7141eh
		dd	___71449h
		dd	___7146dh
		dd	___714a3h
	*/

	switch(edx){
		case 0:		goto ___7141eh;
		case 1:		goto ___71449h;
		case 2:		goto ___7146dh;
		case 3:		goto ___714a3h;
		default:	goto ___714c4h;
	}

___7141eh:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [eax+__CEXT_V(___19a5b2h)]
	dl = B(eax+___19a5b2h);
//		mov     edx, [edx*2+__CEXT_V(___19a4bah)]
	edx = D(edx*2+___19a4bah);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		imul    eax, edx
	eax = (int)eax * (int)edx;
//		inc     eax
	eax++;
//		sar     eax, 9
	eax = (int)eax >> 9;
//		jmp     ___714bfh
	goto ___714bfh;
___71449h:
//		xor     edx, edx
	edx = 0;
//		mov     ebx, 20h
	ebx = 0x20;
//		mov     dl, [eax+__CEXT_V(___19a5b2h)]
	dl = B(eax+___19a5b2h);
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		sub     ebx, edx
	ebx -= edx;
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		imul    eax, ebx
	eax = (int)eax * (int)ebx;
//		sar     eax, 4
	eax = (int)eax >> 4;
//		jmp     ___714bfh
	goto ___714bfh;
___7146dh:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [eax+__CEXT_V(___19a5b2h)]
	dl = B(eax+___19a5b2h);
//		cmp     word [edx*2+__CEXT_V(___19a4bch)], byte 0
//		jl      ___7148fh
	if((short)W(edx*2+___19a4bch) < 0) goto ___7148fh;
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		jmp     ___714bfh
	goto ___714bfh;
___7148fh:
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		and     al, 0fh
	al &= 0xf;
//		and     eax, 0ffh
	eax &= 0xff;
//		shl     eax, 2
	eax <<= 2;
//		neg     eax
	eax = 0 - eax;
//		jmp     ___714bfh
	goto ___714bfh;
___714a3h:
//		mov     al, [eax+__CEXT_V(___19a5c2h)]
	al = B(eax+___19a5c2h);
//		xor     edx, edx
	edx = 0;
//		and     al, 0fh
	al &= 0xf;
//		mov     dl, al
	dl = al;
//		call    __CEXT_F(rand__clib3r)
	eax = rand__clib3r();
//		sub     eax, 4000h
	eax -= 0x4000;
//		imul    eax, edx
	eax = (int)eax * (int)edx;
//		sar     eax, 0eh
	eax = (int)eax >> 0xe;
___714bfh:
//		mov     [__CEXT_V(___24e874h)], eax
	D(___24e874h) = eax;
___714c4h:
//		mov     dh, [__CEXT_V(S3M_InitialSpeed)]
	dh = B(S3M_InitialSpeed);
//		cmp     dh, [__CEXT_V(___19a53eh)]
//		je      ___71506h
	if(dh == B(___19a53eh)) goto ___71506h;
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     dl, [eax+__CEXT_V(___19a5c2h)]
	dl = B(eax+___19a5c2h);
//		mov     ebx, edx
	ebx = edx;
//		xor     edx, edx
	edx = 0;
//		sar     ebx, 4
	ebx = (int)ebx >> 4;
//		mov     dl, [eax+__CEXT_V(___19a5b2h)]
	dl = B(eax+___19a5b2h);
//		add     edx, ebx
	edx += ebx;
//		mov     [eax+__CEXT_V(___19a5b2h)], dl
	B(eax+___19a5b2h) = dl;
//		cmp     dl, 40h
//		jb      ___71506h
	if(dl < 0x40) goto ___71506h;
//		mov     bh, dl
	bh = dl;
//		sub     bh, 40h
	bh -= 0x40;
//		mov     [eax+__CEXT_V(___19a5b2h)], bh
	B(eax+___19a5b2h) = bh;
___71506h:
//		xor     eax, eax
	eax = 0;
//		mov     ecx, [__CEXT_V(___24e850h)]
	ecx = D(___24e850h);
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		xor     edx, edx
	edx = 0;
//		mov     di, [__CEXT_V(___24e874h)]
	di = W(___24e874h);
//		mov     dx, [eax*2+__CEXT_V(___19a542h)]
	dx = W(eax*2+___19a542h);
//		mov     ax, [eax*2+__CEXT_V(___19a562h)]
	ax = W(eax*2+___19a562h);
//		xor     ebx, ebx
	ebx = 0;
//		add     eax, edi
	eax += edi;
//		mov     ecx, [ecx+edx*4]
	ecx = D(ecx+edx*4);
___71533h:
//		mov     bx, ax
	bx = ax;
//		xor     eax, eax
	eax = 0;
//		or      ebx, ebx
	ebx |= ebx;
//		je      ___71557h
	if(ebx == 0) goto ___71557h;
//		mov     eax, 6d3bh
	eax = 0x6d3b;
//		imul    ecx
	PUSH(imul_eax(eax, ecx));
	PUSH(imul_edx(eax, ecx));
	POP(edx);
	POP(eax);
//		shld    edx, eax, 0dh
	edx = (edx << 0xd) | (eax >> (0x20 - 0xd));
//		shl     eax, 0dh
	eax <<= 0xd;
//		imul    ebx, ebx, 5780h
	ebx = (int)ebx * 0x5780;
//		idiv    ebx
	PUSH(idiv_quo(eax, edx, ebx));
	PUSH(idiv_rem(eax, edx, ebx));
	POP(edx);
	POP(eax);
//		shr     eax, 1
//		adc     eax, byte 0
	eax = (eax >> 1) + (eax & 1);
___71557h:
//		xor     edx, edx
	edx = 0;
//		mov     dl, [__CEXT_V(___24e87eh)]
	dl = B(___24e87eh);
//		mov     [edx*4+__CEXT_V(___68990h)], eax
	D(edx*4+___68990h) = eax;
___71566h:
//		mov     al, [__CEXT_V(___24e87eh)]
	al = B(___24e87eh);
//		inc     al
	al++;
//		mov     [__CEXT_V(___24e87eh)], al
	B(___24e87eh) = al;
//		cmp     al, 10h
//		jne     ___70133h
	if(al != 0x10) goto ___70133h;
//		mov     dl, 1
	dl = 1;
//		mov     [__CEXT_V(___19a540h)], dl
	B(___19a540h) = dl;
//		sub     [__CEXT_V(___19a53eh)], dl
	B(___19a53eh) -= dl;
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

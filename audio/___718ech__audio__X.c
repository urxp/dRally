#include "x86.h"

	void __STOSB__clib3r(void *, byte, dword);
    #pragma aux __STOSB__clib3r parm [eax][edx][ecx]

	void ___6ef2ch__audio(void);
	void ___68cfbh(dword);
	void ___685a4h(void);

	extern byte Sound_CardType[];
	extern byte IsSoundEnabled[];
	extern byte ___19a280h[];
	extern byte MSX_Ptr[];
	extern byte ___19a468h[];
	extern byte S3M_GlobalVolume[];
	extern byte S3M_InitialTempo[];
	extern byte S3M_InitialSpeed[];
	extern byte ___24e860h[];
	extern byte ___68c40h[];
	extern byte ___24e858h[];
	extern byte ___68a90h[];
	extern byte ___68a90h[];
	extern byte ___68a90h[];
	extern byte ___24e830h[];
	extern byte ___24e830h[];
	extern byte ___24e750h[];
	extern byte ___19a281h[];
	extern byte ___19a280h[];
	extern byte ___19a468h[];
	extern byte ___19a468h[];


static int idiv_quo(int, int, int);
#if defined(__WATCOMC__)
#pragma aux idiv_quo =      \
    "idiv   ebx"            \
    parm [eax] [edx] [ebx]
#endif

void ___718ech(void){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;

//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		mov     ah, [__CEXT_V(Sound_CardType)]
	ah = B(Sound_CardType);
//		xor     ecx, ecx
	ecx = 0;
//		test    ah, ah
//		je      ___71a2fh
	if(ah == 0) goto ___71a2fh;
//		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
//		je      ___71a2fh
	if(B(IsSoundEnabled) == 0) goto ___71a2fh;
//		cmp     byte [__CEXT_V(___19a280h)], 0
//		jne     ___71a2fh
	if(B(___19a280h) != 0) goto ___71a2fh;
//		mov     edx, [__CEXT_V(MSX_Ptr)]
	edx = D(MSX_Ptr);
//		test    edx, edx
//		je      ___71a2fh
	if(edx == 0) goto ___71a2fh;
//		mov     byte [__CEXT_V(___19a468h)], 1
	B(___19a468h) = 1;
//		mov     eax, edx
	eax = edx;
//		mov     dl, [edx+30h]
	dl = B(edx+0x30);
//		mov     [__CEXT_V(S3M_GlobalVolume)], dl
	B(S3M_GlobalVolume) = dl;
//		mov     dl, [eax+31h]
	dl = B(eax+0x31);
//		mov     al, [eax+32h]
	al = B(eax+0x32);
//		mov     [__CEXT_V(S3M_InitialTempo)], al
	B(S3M_InitialTempo) = al;
//		movzx   esi, al
	esi = 0x000000ff & al;
//		mov     eax, 7a12h
	eax = 0x7a12;
//		mov     [__CEXT_V(S3M_InitialSpeed)], dl
	B(S3M_InitialSpeed) = dl;
//		mov     edx, eax
	edx = eax;
//		sar     edx, 1fh
	edx = (int)edx >> 0x1f;
//		idiv    esi
	eax = idiv_quo(eax, edx, esi);
//		mov     edi, [__CEXT_V(___24e860h)]
	edi = D(___24e860h);
//		mov     [__CEXT_V(___68c40h)], ax
	W(___68c40h) = ax;
//		xor     edx, edx
	edx = 0;
//		xor     eax, eax
	eax = 0;
___7196ch:
//		mov     esi, [__CEXT_V(___24e858h)]
	esi = D(___24e858h);
//		add     esi, eax
	esi += eax;
//		mov     bh, [esi]
	bh = B(esi);
//		cmp     bh, 0fh
//		ja      ___719bfh
	if(bh > 0xf) goto ___719bfh;
//		cmp     bh, 7
//		ja      ___7198ch
	if(bh > 7) goto ___7198ch;
//		mov     dword [edx+__CEXT_V(___68a90h)], 3000h
	D(edx+___68a90h) = 0x3000;
//		jmp     ___71996h
	goto ___71996h;
___7198ch:
//		mov     dword [edx+__CEXT_V(___68a90h)], 0c000h
	D(edx+___68a90h) = 0xc000;
___71996h:
//		test    edi, edi
//		je      ___719b3h
	if(edi == 0) goto ___719b3h;
//		lea     esi, [edi+eax]
	esi = edi+eax;
//		mov     bl, [esi]
	bl = B(esi);
//		test    bl, 20h
//		je      ___719b3h
	if(bl == 0x20) goto ___719b3h;
//		and     bl, 0fh
	bl &= 0xf;
//		movzx   esi, bl
	esi = 0x000000ff & bl;
//		shl     esi, 0ch
	esi <<= 0xc;
//		mov     [edx+__CEXT_V(___68a90h)], esi
	D(edx+___68a90h) = esi;
___719b3h:
//		add     edx, 4
	edx += 4;
//		mov     [eax+__CEXT_V(___24e830h)], cl
	B(eax+___24e830h) = cl;
//		inc     ecx
	ecx++;
//		jmp     ___719c6h
	goto ___719c6h;
___719bfh:
//		mov     byte [eax+__CEXT_V(___24e830h)], 0ffh
	B(eax+___24e830h) = 0xff;
___719c6h:
//		inc     eax
	eax++;
//		cmp     eax, 20h
//		jl      ___7196ch
	if((int)eax < 0x20) goto ___7196ch;
//		mov     ebp, 8000h
	ebp = 0x8000;
//		lea     eax, [ecx*4+0]
	eax = ecx*4;
___719d8h:
//		cmp     eax, 80h
//		jge     ___719ebh
	if((int)eax >= 0x80) goto ___719ebh;
//		inc     ecx
	ecx++;
//		mov     [eax+__CEXT_V(___68a90h)], ebp
	D(eax+___68a90h);
//		add     eax, 4
	eax += 4;
//		jmp     ___719d8h
	goto ___719d8h;
___719ebh:
//		mov     ecx, 40h
	ecx = 0x40;
//		mov     edx, 0ffffffffh
	edx = 0xffffffff;
//		mov     eax, __CEXT_V(___24e750h)
	eax = ___24e750h;
//		call    __CEXT_F(__STOSB__clib3r)
	__STOSB__clib3r(eax, edx, ecx);
//		xor     bh, bh
	bh = 0;
//		mov     eax, __CEXT_F(___6ef2ch__audio)
	eax = ___6ef2ch__audio;
//		mov     cl, 1
	cl = 1;
//		call    __CEXT_F(___68cfbh)
	___68cfbh(eax);
//		call    __CEXT_F(___685a4h)
	___685a4h();
//		mov     [__CEXT_V(___19a281h)], bh
	B(___19a281h) = bh;
//		mov     [__CEXT_V(___19a280h)], cl
	B(___19a280h) = cl;
//		cmp     cl, [__CEXT_V(___19a468h)]
//		jne     ___71a2fh
	if(cl != B(___19a468h)) goto ___71a2fh;
___71a26h:	// [CHECK] make sure this loop isn't optimized out
//		cmp     byte [__CEXT_V(___19a468h)], 1
//		je      ___71a26h
	if(B(___19a468h) == 1) goto ___71a26h;
___71a2fh:
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
    return;
}

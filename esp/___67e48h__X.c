#include "x86.h"

    dword ___5f080h(dword, dword);
    void ___677cch(dword, dword, dword);
    dword ___67bbch(dword, dword, dword, dword);
    void ___68398h(void);
    extern byte ___68c3ch[];
    extern byte ___68d58h[];
    dword ___716fch(dword, dword, dword);
    dword ___75840h(dword, dword, dword);
    extern byte ___19a279h[];
    extern byte ___19a27ch[];
    extern byte SFX_Number[];
    extern byte ___19a27eh[];
    extern byte MSX_Tracker[];
    extern byte SFX_Ptr[];
    extern byte SFX_Tracker[];
    extern byte ___24e790h[];
    extern byte ___24e794h[];
    extern byte ___24e79eh[];
    extern byte ___24e7a0h[];
    extern byte ___24e7a2h[];
    extern byte ___24e7a4h[];

    void * loadS3M(dword A, const char * cmf, dword * size, dword * instrumentCount);
    extern byte MSX_Ptr[];
    void * loadXM(dword A, const char * cmf, dword * size, dword * instrumentCount);
    void freeMemory(dword);
    extern byte Sound_CardType[];
    extern byte IsSoundEnabled[];


// 67e48h
void ___67e48h__esp(dword A1, dword A2, dword A3, dword A4, dword A5){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	byte 	esp[0x24];

	eax = A1;
	edx = A2;
	ebx = A3;
	ecx = A4;
	D(esp+0x20) = A5;

//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, byte 10h
//		mov     edi, ebx
	edi = ebx;
//		mov     esi, ecx
	esi = ecx;
//		xor     ebx, ebx
	ebx = 0;
//		mov     [esp+8], ebx
	D(esp+8) = ebx;
//		mov     [esp+4], ebx
	D(esp+4) = ebx;
//		mov     [esp], ebx
	D(esp) = ebx;
//		mov     [esp+0ch], ebx
	D(esp+0xc) = ebx;
//		test    eax, eax
//		jne     ___67e69h
	if(eax != 0) goto ___67e69h;
//		xor     edx, edx
	edx = 0;
___67e69h:
//		test    edi, edi
//		jne     ___67e6fh
	if(edi != 0) goto ___67e6fh;
//		xor     esi, esi
	esi = 0;
___67e6fh:
//		test    edx, edx
//		jne     ___67e75h
	if(edx != 0) goto ___67e75h;
//		xor     eax, eax
	eax = 0;
___67e75h:
//		test    esi, esi
//		jne     ___67e7bh
	if(esi != 0) goto ___67e7bh;
//		xor     edi, edi
	edi = 0;
___67e7bh:
//		test    edx, edx
//		jne     ___67e87h
	if(edx != 0) goto ___67e87h;
//		test    esi, esi
//		je      ___680bdh
	if(esi == 0) goto ___680bdh;
___67e87h:
//		test    esi, esi
//		je      ___67e9ah
	if(esi == 0) goto ___67e9ah;
//		cmp     dword [esp+20h], byte 1
//		jge     ___67e9ah
	if((int)D(esp+0x20) >= 1) goto ___67e9ah;
//		mov     dword [esp+20h], 1
	D(esp+0x20) = 1;
___67e9ah:
//		test    esi, esi
//		jne     ___67ea2h
	if(esi != 0) goto ___67ea2h;
//		mov     [esp+20h], esi
	D(esp+0x20) = esi;
___67ea2h:
//		mov     [__CEXT_V(MSX_Tracker)], eax
	D(MSX_Tracker) = eax;
//		cmp     eax, byte 1
//		jb      ___67ee7h
	if(eax < 1) goto ___67ee7h;
//		jbe     ___67eb5h
	if(eax <= 1) goto ___67eb5h;
//		cmp     eax, byte 2
//		je      ___67eceh
	if(eax == 2) goto ___67eceh;
//		jmp     ___67ee7h
	goto ___67ee7h;
___67eb5h:
//		lea     ecx, [esp+8]
	ecx = esp+8;
//		lea     ebx, [esp+0ch]
	ebx = esp+0xc;
//		mov     eax, 1
	eax = 1;
//		call    __CEXT_F(loadS3M)
	eax = loadS3M(eax, edx, ebx, ecx);
//		mov     [__CEXT_V(MSX_Ptr)], eax
	D(MSX_Ptr) = eax;
//		jmp     ___67eefh
	goto ___67eefh;
___67eceh:
//		lea     ecx, [esp+8]
	ecx = esp+8;
//		lea     ebx, [esp+0ch]
	ebx = esp+0xc;
//		mov     eax, 1
	eax = 1;
//		call    __CEXT_F(loadXM)
	eax = loadXM(eax, edx, ebx, ecx);
//		mov     [__CEXT_V(MSX_Ptr)], eax
	D(MSX_Ptr) = eax;
//		jmp     ___67eefh
	goto ___67eefh;
___67ee7h:
//		xor     ecx, ecx
	ecx = 0;
//		mov     [__CEXT_V(MSX_Tracker)], ecx
	D(MSX_Tracker) = ecx;
___67eefh:
//		mov     [__CEXT_V(SFX_Tracker)], edi
	D(SFX_Tracker) = edi;
//		cmp     edi, byte 1
//		jb      ___67f2fh
	if(edi < 1) goto ___67f2fh;
//		jbe     ___67f03h
	if(edi <= 1) goto ___67f03h;
//		cmp     edi, byte 2
//		je      ___67f19h
	if(edi == 2) goto ___67f19h;
//		jmp     ___67f2fh
	goto ___67f2fh;
___67f03h:
//		mov     ecx, esp
	ecx = esp;
//		lea     ebx, [esp+4]
	ebx = esp+4;
//		mov     edx, esi
	edx = esi;
//		xor     eax, eax
	eax = 0;
//		call    __CEXT_F(loadS3M)
	eax = loadS3M(eax, edx, ebx, ecx);
//		mov     [__CEXT_V(SFX_Ptr)], eax
	D(SFX_Ptr) = eax;
//		jmp     ___67f37h
	goto ___67f37h;
___67f19h:
//		mov     ecx, esp
	ecx = esp;
//		lea     ebx, [esp+4]
	ebx = esp+4;
//		mov     edx, esi
	edx = esi;
//		xor     eax, eax
	eax = 0;
//		call    __CEXT_F(loadXM)
	eax = loadXM(eax, edx, ebx, ecx);
//		mov     [__CEXT_V(SFX_Ptr)], eax
	D(SFX_Ptr) = eax;
//		jmp     ___67f37h
	goto ___67f37h;
___67f2fh:
//		xor     esi, esi
	esi = 0;
//		mov     [__CEXT_V(SFX_Tracker)], esi
	D(SFX_Tracker) = esi;
___67f37h:
//		mov     edx, [esp+8]
	edx = D(esp+8);
//		mov     edi, [esp]
	edi = D(esp);
//		mov     eax, [esp+0ch]
	eax = D(esp+0xc);
//		mov     ebp, [esp+4]
	ebp = D(esp+4);
//		xor     ebx, ebx
	ebx = 0;
//		add     edx, edi
	edx += edi;
//		add     eax, ebp
	eax += ebp;
//		call    __CEXT_F(___677cch)
	___677cch(eax, edx, ebx);
//		mov     byte [__CEXT_V(___19a27ch)], 0ffh
	B(___19a27ch) = 0xff;
//		mov     eax, [__CEXT_V(MSX_Tracker)]
	eax = D(MSX_Tracker);
//		cmp     eax, byte 1
//		jb      ___67f9ch
	if(eax < 1) goto ___67f9ch;
//		jbe     ___67f6bh
	if(eax <= 1) goto ___67f6bh;
//		cmp     eax, byte 2
//		je      ___67f81h
	if(eax == 2) goto ___67f81h;
//		jmp     ___67f9ch
	goto ___67f9ch;
___67f6bh:
//		mov     ebx, [esp+0ch]
	ebx = D(esp+0xc);
//		mov     eax, 1
	eax = 1;
//		mov     edx, [__CEXT_V(MSX_Ptr)]
	edx = D(MSX_Ptr);
//		call    __CEXT_F(___716fch)
	eax = ___716fch(eax, edx, ebx);
//		jmp     ___67f95h
	goto ___67f95h;
___67f81h:
//		mov     ebx, [esp+0ch]
	ebx = D(esp+0xc);
//		mov     eax, 1
	eax = 1;
//		mov     edx, [__CEXT_V(MSX_Ptr)]
	edx = D(MSX_Ptr);
//		call    __CEXT_F(___75840h)
	eax = ___75840h(eax, edx, ebx);
___67f95h:
//		dec     al
	al--;
//		mov     [__CEXT_V(___19a27ch)], al
	B(___19a27ch) = al;
___67f9ch:
//		xor     eax, eax
	eax = 0;
//		mov     al, [__CEXT_V(___24e7a4h)]
	al = B(___24e7a4h);
//		mov     [__CEXT_V(___19a27eh)], ax
	W(___19a27eh) = ax;
//		mov     [__CEXT_V(___24e7a2h)], ax
	W(___24e7a2h) = ax;
//		mov     al, [esp+20h]
	al = B(esp+0x20);
//		mov     [__CEXT_V(SFX_Number)], al
	B(SFX_Number) = al;
//		mov     eax, [__CEXT_V(SFX_Tracker)]
	eax = D(SFX_Tracker);
//		cmp     eax, byte 1
//		jb      ___67fefh
	if(eax < 1) goto ___67fefh;
//		jbe     ___67fcbh
	if(eax <= 1) goto ___67fcbh;
//		cmp     eax, byte 2
//		je      ___67fdeh
	if(eax == 2) goto ___67fdeh;
//		jmp     ___67fefh
	goto ___67fefh;
___67fcbh:
//		mov     ebx, [esp+4]
	ebx = D(esp+4);
//		mov     edx, [__CEXT_V(SFX_Ptr)]
	edx = D(SFX_Ptr);
//		xor     eax, eax
	eax = 0;
//		call    __CEXT_F(___716fch)
	eax = ___716fch(eax, edx, ebx);
//		jmp     ___67fefh
	goto ___67fefh;
___67fdeh:
//		mov     ebx, [esp+4]
	ebx = D(esp+4);
//		mov     edx, [__CEXT_V(SFX_Ptr)]
	edx = D(SFX_Ptr);
//		xor     eax, eax
	eax = 0;
//		call    __CEXT_F(___75840h)
	eax = ___75840h(eax, edx, ebx);
___67fefh:
//		xor     eax, eax
	eax = 0;
//		mov     edx, [__CEXT_V(___19a279h)]
	edx = D(___19a279h);
//		mov     al, [__CEXT_V(SFX_Number)]
	al = B(SFX_Number);
//		sar     edx, 18h
	edx = (int)edx >> 0x18;
//		add     edx, eax
	edx += eax;
//		mov     eax, [__CEXT_V(___24e790h)]
	eax = D(___24e790h);
//		mov     [__CEXT_V(___68c3ch)], edx
	D(___68c3ch) = edx;
//		mov     edx, [__CEXT_V(___24e794h)]
	edx = D(___24e794h);
//		sub     eax, edx
	eax -= edx;
//		mov     ebx, edx
	ebx = edx;
//		mov     edx, eax
	edx = eax;
//		mov     eax, ebx
	eax = ebx;
//		call    __CEXT_F(___5f080h)
	eax = ___5f080h(eax, edx);
//		xor     eax, eax
	eax = 0;
//		mov     dx, [__CEXT_V(___24e7a2h)]
	dx = W(___24e7a2h);
//		mov     al, [__CEXT_V(___24e7a4h)]
	al = B(___24e7a4h);
//		sub     eax, edx
	eax -= edx;
//		mov     ebx, [__CEXT_V(SFX_Ptr)]
	ebx = D(SFX_Ptr);
//		mov     [__CEXT_V(___24e7a0h)], ax
	W(___24e7a0h) = ax;
//		test    ebx, ebx
//		je      ___68046h
	if(ebx == 0) goto ___68046h;
//		mov     eax, ebx
	eax = ebx;
//		call    __CEXT_F(freeMemory)
	freeMemory(eax);
___68046h:
//		mov     al, [__CEXT_V(Sound_CardType)]
	al = B(Sound_CardType);
//		cmp     al, 19h
//		jb      ___6805fh
	if(al < 0x19) goto ___6805fh;
//		cmp     al, 1ah
//		jbe     ___68078h
	if(al <= 0x1a) goto ___68078h;
//		cmp     al, 20h
//		jb      ___68089h
	if(al < 0x20) goto ___68089h;
//		jbe     ___68071h
	if(al <= 0x20) goto ___68071h;
//		cmp     al, 21h
//		je      ___68078h
	if(al == 0x21) goto ___68078h;
//		jmp     ___68089h
	goto ___68089h;
___6805fh:
//		cmp     al, 1
//		jb      ___68089h
	if(al < 1) goto ___68089h;
//		cmp     al, 2
//		jbe     ___68078h
	if(al <= 2) goto ___68078h;
//		cmp     al, 11h
//		jb      ___68089h
	if(al < 0x11) goto ___68089h;
//		cmp     al, 13h
//		jbe     ___68078h
	if(al <= 0x13) goto ___68078h;
//		jmp     ___68089h
	goto ___68089h;
___68071h:
//		mov     eax, 1
	eax = 1;
//		jmp     ___6808bh
	goto ___6808bh;
___68078h:
//		cmp     byte [__CEXT_V(___68d58h)], 0
//		setnz   al
	al = (B(___68d58h) != 0) ? 1 : 0;
//		and     eax, 0ffh
	eax &= 0xff;
//		jmp     ___6808bh
	goto ___6808bh;
___68089h:
//		xor     eax, eax
	eax = 0;
___6808bh:
//		test    eax, eax
//		jne     ___680b0h
	if(eax != 0) goto ___680b0h;
//		mov     eax, [__CEXT_V(___24e7a0h)]
	eax = D(___24e7a0h);
//		mov     ecx, [__CEXT_V(___24e79eh)]
	ecx = D(___24e79eh);
//		xor     ebx, ebx
	ebx = 0;
//		sar     eax, 10h
	eax = (int)eax >> 0x10;
//		sar     ecx, 10h
	ecx = (int)ecx >> 0x10;
//		xor     edx, edx
	edx = 0;
//		add     ecx, eax
	ecx += eax;
//		mov     eax, 1
	eax = 1;
//		call    __CEXT_F(___67bbch)
	eax = ___67bbch(eax, edx, ebx, ecx);
___680b0h:
//		mov     dh, 1
	dh = 1;
//		call    __CEXT_F(___68398h)
	___68398h();
//		mov     [__CEXT_V(IsSoundEnabled)], dh
	B(IsSoundEnabled) = dh;
___680bdh:
//		add     esp, byte 10h
//		pop     ebp
//		pop     edi
//		pop     esi
//		ret     4
	return;
}

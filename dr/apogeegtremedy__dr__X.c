#include "x86.h"

    extern const char ___182818h[];	// "apogee.pal"
    extern const char ___182824h[];	// "apogee.bpk"
    extern const char ___182830h[];	// "gtlogo4.pal"
    extern const char ___18283ch[];	// "gtlogo4.bpk"
    extern const char ___182848h[];	// "remedy.pal"
    extern const char ___182854h[];	// "remedy.bpk"
    extern const char MENU_BPA[];	// "MENU.BPA"
    extern byte BPA_Buffer[];
    extern byte VGABufferPtr_0[];

    void read__bpa(const char *, void *, const char *);
    void loadPalette(dword);
    #pragma aux ___5e0f9h parm routine []
	void ___5e0f9h(dword, dword, dword, dword);
    #pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);
    void ___12cb8h(void);
    void ___3d1f0h(void);
    void ___58c60h(void);
	dword lastScanCode__keyboard(void);	
    void ___3d2bch(void);


// 3d38ch
void apogee_gt_remedy(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x80];
	byte *	esp = __esp + 0x80;

//		push    30h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, byte 4
	esp -= 4;
//		xor     edx, edx
	edx = 0;
//		mov     [esp], edx
	D(esp) = edx;
___3d3a4h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [esp]
	al = B(esp);
//		push    eax
	PUSH(eax);
//		push    byte 0
	PUSH(0);
//		push    byte 0
	PUSH(0);
//		push    byte 0
	PUSH(0);
//		call    __CEXT_F(___5e0f9h)
	___5e0f9h(D(esp), D(esp+4), D(esp+8), D(esp+0xc));
	esp += 0x10;
//		mov     ebx, [esp]
	ebx = D(esp);
//		inc     ebx
	ebx++;
//		mov     [esp], ebx
	D(esp) = ebx;
//		cmp     ebx, 100h
//		jl      ___3d3a4h
	if((int)ebx < 0x100) goto ___3d3a4h;
//		mov     eax, __CEXT_V(___182818h)
	eax = ___182818h;
//		mov     ebx, __CEXT_V(___182824h)
	ebx = ___182824h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		call    __CEXT_F(loadPalette)
	loadPalette(eax);
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     esi, [__CEXT_V(VGABufferPtr_0)]
	esi = D(VGABufferPtr_0);
//		xor     edi, edi
	edi = 0;
//		push    esi
	PUSH(esi);
//		mov     [esp+8], edi
	D(esp+8) = edi;
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		call    __CEXT_F(___12cb8h)
	___12cb8h();
//		call    __CEXT_F(___3d1f0h)
	___3d1f0h();
___3d403h:
//		mov     ebp, [esp]
	ebp = D(esp);
//		call    __CEXT_F(___58c60h)
	___58c60h();
//		inc     ebp
	ebp++;
//		call    __CEXT_F(lastScanCode__keyboard)
	eax = lastScanCode__keyboard();
//		mov     [esp], ebp
	D(esp) = ebp;
//		test    al, al
//		jne     ___3d420h
	if(al != 0) goto ___3d420h;
//		cmp     ebp, 0b4h
//		jl      ___3d403h
	if((int)ebp < 0xb4) goto ___3d403h;
___3d420h:
//		call    __CEXT_F(___3d2bch)
	___3d2bch();
//		mov     eax, __CEXT_V(___182830h)
	eax = ___182830h;
//		mov     ebx, __CEXT_V(___18283ch)
	ebx = ___18283ch;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		call    __CEXT_F(loadPalette)
	loadPalette(eax);
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edx, [__CEXT_V(VGABufferPtr_0)]
	edx = D(VGABufferPtr_0);
//		push    edx
	PUSH(edx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		call    __CEXT_F(___12cb8h)
	___12cb8h();
//		xor     ebx, ebx
	ebx = 0;
//		call    __CEXT_F(___3d1f0h)
	___3d1f0h();
//		mov     [esp], ebx
	D(esp) = ebx;
___3d463h:
//		mov     ecx, [esp]
	ecx = D(esp);
//		call    __CEXT_F(___58c60h)
	___58c60h();
//		inc     ecx
	ecx++;
//		call    __CEXT_F(lastScanCode__keyboard)
	eax = lastScanCode__keyboard();
//		mov     [esp], ecx
	D(esp) = ecx;
//		test    al, al
//		jne     ___3d480h
	if(al != 0) goto ___3d480h;
//		cmp     ecx, 0b4h
//		jl      ___3d463h
	if((int)ecx < 0xb4) goto ___3d463h;
___3d480h:
//		call    __CEXT_F(___3d2bch)
	___3d2bch();
//		mov     eax, __CEXT_V(___182848h)
	eax = ___182848h;
//		mov     ebx, __CEXT_V(___182854h)
	ebx = ___182854h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		call    __CEXT_F(loadPalette)
	loadPalette(eax);
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edi, [__CEXT_V(VGABufferPtr_0)]
	edi = D(VGABufferPtr_0);
//		xor     ebp, ebp
	ebp = 0;
//		push    edi
	PUSH(edi);
//		mov     [esp+8], ebp
	D(esp+8) = ebp;
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		call    __CEXT_F(___12cb8h)
	___12cb8h();
//		call    __CEXT_F(___3d1f0h)
	___3d1f0h();
___3d4c4h:
//		call    __CEXT_F(___58c60h)
	___58c60h();
//		inc     dword [esp]
	D(esp)++;
//		call    __CEXT_F(lastScanCode__keyboard)
	eax = lastScanCode__keyboard();
//		test    al, al
//		jne     ___3d4deh
	if(al != 0) goto ___3d4deh;
//		cmp     dword [esp], 0b4h
//		jl      ___3d4c4h
	if((int)D(esp) < 0xb4) goto ___3d4c4h;
___3d4deh:
//		call    __CEXT_F(___3d2bch)
	___3d2bch();
//		add     esp, byte 4
	esp += 4;
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return;
}

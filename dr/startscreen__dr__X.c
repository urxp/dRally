#include "x86.h"

    extern const char ___182890h[];		// "startscr.pal"
    extern const char ___1828a0h[];		// "startscr.bpk"
    extern const char MENU_BPA[];		// "MENU.BPA"
    extern byte BPA_Buffer[];
    extern byte VGABufferPtr_0[];

    #pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);
    void popScreen(void);
    void fadeinScreen(void);
    void read__bpa(const char *, void *, const char *);
    void loadPalette(dword);
    #pragma aux writeColor__video parm routine []
	void writeColor__video(dword, dword, dword, dword);


// 3d890h
void startingScreen__dr(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0X80];
	byte * 	esp = __esp + 0x80;

//		push    28h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		sub     esp, byte 4
	esp -= 4;
//		xor     edx, edx
	edx = 0;
//		mov     [esp], edx
	D(esp) = edx;
___3d8a6h:
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
//		call    __CEXT_F(writeColor__video)
	writeColor__video(D(esp), D(esp+4), D(esp+8), D(esp+0xc));
	esp += 0x10;
//		mov     ebx, [esp]
	ebx = D(esp);
//		inc     ebx
	ebx++;
//		mov     [esp], ebx
	D(esp) = ebx;
//		cmp     ebx, 100h
//		jl      ___3d8a6h
	if((int)ebx < 0x100) goto ___3d8a6h;
//		mov     eax, __CEXT_V(___182890h)
	eax = ___182890h;
//		mov     ebx, __CEXT_V(___1828a0h)
	ebx = ___1828a0h;
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
//		push    esi
	PUSH(esi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		call    __CEXT_F(popScreen)
	popScreen();
//		call    __CEXT_F(fadeinScreen)
	fadeinScreen();
//		add     esp, byte 4
	esp += 4;
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return;
}

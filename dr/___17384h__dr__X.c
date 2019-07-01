#include "x86.h"

    extern byte ___185ba9h[];
    extern byte ___1a10e0h[];
    extern byte ___18072ch[];
    extern byte ___196ae0h[];
    extern byte ___185cbch[];
    extern byte bpk_kupla_p[];
    extern byte ___1a1ed0h[];
    extern byte VGABufferPtr_0[];
    extern byte ___196ae4h[];


    void delay_TBD(void);
    void memset__clib3r(dword, dword, dword);
    void ___1398ch(dword, dword, dword, dword);
    void carAnimFrame(dword, dword, dword, dword, dword);
    void renderTextToBuffer__video(dword, dword, dword, dword);


// 17384h
void ___17384h(dword A0, dword A1, dword A2, dword A3, dword A4, dword A5){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	byte 	__esp[80];
	byte * esp = __esp+80;

	eax = A0;
	edx = A1;
	ebx = A2;
	ecx = A3;

	esp -= 4;
	D(esp) = A5;
	esp -= 4;
	D(esp) = A4;
	esp -= 4; 

//		push    1ch
//		call    __CHK
//		push    esi
//		push    edi
//		push    ebp
	esp -= 0xc;
//		sub     esp, byte 8
	esp -= 8;
//		mov     edi, eax
	edi = eax;
//		mov     [esp+4], edx
	D(esp+4) = edx;
//		mov     esi, ebx
	esi = ebx;
//		mov     [esp], ecx
	D(esp) = ecx;
//		call    __CEXT_F(delay_TBD)
	delay_TBD();
//		mov     edx, [__CEXT_V(___196ae0h)]
	edx = D(___196ae0h);
//		inc     edx
	edx++;
//		mov     [__CEXT_V(___196ae0h)], edx
	D(___196ae0h) = edx;
//		cmp     edx, byte 0ah
//		jle     ___173f7h
	if((int)edx <= 0xa) goto ___173f7h;
//		mov     edx, [esp+4]
	edx = D(esp+4);
//		add     edx, byte 2
	edx += 2;
//		lea     eax, [edx*4+0]
	eax = 4*edx;
//		add     eax, edx
	eax += edx;
//		shl     eax, 7
	eax <<= 7;
//		mov     ecx, eax
	ecx = eax;
//		lea     ebp, [eax+4b00h]
	ebp = eax + 0x4b00;
___173d1h:
//		mov     eax, [__CEXT_V(VGABufferPtr_0)]
	eax = D(VGABufferPtr_0);
//		add     eax, ecx
	eax += ecx;
//		mov     ebx, 14h
	ebx = 0x14;
//		add     eax, edi
	eax += edi;
//		mov     edx, 0c4h
	edx = 0xc4;
//		add     eax, esi
	eax += esi;
//		add     ecx, 280h
	ecx += 0x280;
//		call    __CEXT_F(memset__clib3r)
	memset__clib3r(eax, edx, ebx);
//		cmp     ecx, ebp
//		je      ___17420h
	if(ecx == ebp) goto ___17420h;
//		jmp     ___173d1h
	goto ___173d1h;
___173f7h:
//		mov     edx, [esp+4]
	edx = D(esp+4);
//		lea     eax, [edx*4+0]
	eax = 4*edx;
//		add     eax, edx
	eax += edx;
//		shl     eax, 7
	eax <<= 7;
//		lea     ecx, [eax+edi]
	ecx = eax + edi;
//		mov     edx, __CEXT_V(___185ba9h)
	edx = ___185ba9h;
//		mov     eax, [__CEXT_V(___1a10e0h)]
	eax = D(___1a10e0h);
//		add     ecx, ebx
	ecx += ebx;
//		mov     ebx, __CEXT_V(___18072ch)
	ebx = ___18072ch;
//		call    __CEXT_F(renderTextToBuffer__video)
	renderTextToBuffer__video(eax, edx, ebx, ecx);
___17420h:
//		cmp     dword [__CEXT_V(___196ae0h)], byte 14h
//		jle     ___17431h
	if((int)D(___196ae0h) <= 0x14) goto ___17431h;
//		xor     ebp, ebp
	ebp = 0;
//		mov     [__CEXT_V(___196ae0h)], ebp
	D(___196ae0h) = ebp;
___17431h:
//		mov     ecx, [esp+4]
	ecx = D(esp+4);
//		lea     eax, [ecx*4+0]
	eax = 4*ecx;
//		add     eax, ecx
	eax += ecx;
//		mov     edx, [__CEXT_V(VGABufferPtr_0)]
	edx = D(VGABufferPtr_0);
//		shl     eax, 7
	eax <<= 7;
//		mov     ebx, 14h
	ebx = 0x14;
//		add     edx, eax
	edx += eax;
//		mov     ecx, 20h
	ecx = 0x20;
//		add     edx, edi
	edx += edi;
//		add     eax, edi
	eax += edi;
//		add     edx, esi
	edx += esi;
//		add     eax, esi
	eax += esi;
//		call    __CEXT_F(___1398ch)
	___1398ch(eax, edx, ebx, ecx);
//		cmp     dword [__CEXT_V(___196ae4h)], byte 0
//		jne     ___174fdh
	if(D(___196ae4h) != 0) goto ___174fdh;
//		cmp     dword [esp], byte 0
//		je      ___174eah
	if(D(esp) == 0) goto ___174eah;
//		push    __CEXT_V(___185cbch)
	esp -= 4;
	D(esp) = ___185cbch;
//		mov     esi, [esp+20h]
	esi = D(esp+0x20);
//		mov     eax, [esp+1ch]
	eax = D(esp+0x1c);
//		mov     ecx, [__CEXT_V(bpk_kupla_p)]
	ecx = D(bpk_kupla_p);
//		mov     ebx, [__CEXT_V(___1a1ed0h)]
	ebx = D(___1a1ed0h);
//		add     esi, byte 50h
	esi += 0x50;
//		add     eax, 1a0h
	eax += 0x1a0;
//		mov     edx, esi
	edx = esi;
//		call    __CEXT_F(carAnimFrame)
	carAnimFrame(eax, edx, ebx, ecx, D(esp));
	esp += 4;
//		lea     eax, [esi*4+0]
	eax = 4*esi;
//		add     eax, esi
	eax += esi;
//		mov     edx, [__CEXT_V(VGABufferPtr_0)]
	edx = D(VGABufferPtr_0);
//		shl     eax, 7
	eax <<= 7;
//		mov     ecx, [esp+18h]
	ecx = D(esp+0x18);
//		add     edx, eax
	edx += eax;
//		mov     ebx, 60h
	ebx = 0x60;
//		add     edx, ecx
	edx += ecx;
//		add     eax, ecx
	eax += ecx;
//		mov     ecx, 40h
	ecx = 0x40;
//		add     edx, 1a0h
	edx += 0x1a0;
//		add     eax, 1a0h
	eax += 0x1a0;
//		call    __CEXT_F(___1398ch)
	___1398ch(eax, edx, ebx, ecx);
//		mov     edi, [__CEXT_V(___1a1ed0h)]
	edi = D(___1a1ed0h);
//		inc     edi
	edi++;
//		mov     [__CEXT_V(___1a1ed0h)], edi
	D(___1a1ed0h) = edi;
//		cmp     edi, byte 3fh
//		jle     ___174eah
	if((int)edi <= 0x3f) goto ___174eah;
//		xor     eax, eax
	eax = 0;
//		mov     [__CEXT_V(___1a1ed0h)], eax
	D(___1a1ed0h) = eax;
___174eah:
//		mov     dword [__CEXT_V(___196ae4h)], 1
	D(___196ae4h) = 1;
//		add     esp, byte 8
//		pop     ebp
//		pop     edi
//		pop     esi
//		ret     8
	return;
___174fdh:
//		xor     edx, edx
	edx = 0;
//		mov     [__CEXT_V(___196ae4h)], edx
	D(___196ae4h) = edx;
//		add     esp, byte 8
//		pop     ebp
//		pop     edi
//		pop     esi
//		ret     8
	return;
}

#include "x86.h"


    extern byte Pal8to24_1[];

    void waitSync__dr(void);
    #pragma aux writeColor__video parm routine []
	void writeColor__video(dword, dword, dword, dword);

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

// 3d2bch
void fadeoutScreen(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte	__esp[0x100];
	byte * 	esp = __esp + 0x100;

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
//		mov     ebp, 640000h
	ebp = 0x640000;
___3d2d4h:
//		call    __CEXT_F(waitSync__dr)
	waitSync__dr();
//		mov     esi, ebp
	esi = ebp;
//		xor     edx, edx
	edx = 0;
//		xor     edi, edi
	edi = 0;
//		mov     [esp], edx
	D(esp) = edx;
___3d2e2h:
//		xor     eax, eax
	eax = 0;
//		mov     al, [esp]
	al = B(esp);
//		push    eax
	PUSH(eax);
//		mov     edx, esi
	edx = esi;
//		mov     eax, [edi+__CEXT_V(Pal8to24_1)]
	eax = D(edi+Pal8to24_1);
//		imul    edx
	PUSH(imul_eax(eax, edx));
	PUSH(imul_edx(eax, edx));
	POP(edx);
	POP(eax);
//		add     eax, 8000h
	eax += 0x8000;
//		adc     edx, byte 0
	if(eax < 0x8000) edx++;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		add     eax, 8000h
	eax += 0x8000;
//		sar     eax, 10h
	eax = (int)eax >> 0x10;
//		and     eax, 0ffh
	eax &= 0xff;
//		push    eax
	PUSH(eax);
//		mov     edx, esi
	edx = esi;
//		mov     eax, [edi+__CEXT_V(Pal8to24_1)+4]
	eax = D(edi+Pal8to24_1+4);
//		imul    edx
	PUSH(imul_eax(eax, edx));
	PUSH(imul_edx(eax, edx));
	POP(edx);
	POP(eax);
//		add     eax, 8000h
	eax += 0x8000;
//		adc     edx, byte 0
	if(eax < 0x8000) edx++;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		add     eax, 8000h
	eax += 0x8000;
//		sar     eax, 10h
	eax = (int)eax >> 0x10;
//		and     eax, 0ffh
	eax &= 0xff;
//		push    eax
	PUSH(eax);
//		mov     edx, esi
	edx = esi;
//		mov     eax, [edi+__CEXT_V(Pal8to24_1)+8]
	eax = D(edi+Pal8to24_1+8);
//		imul    edx
	PUSH(imul_eax(eax, edx));
	PUSH(imul_edx(eax, edx));
	POP(edx);
	POP(eax);
//		add     eax, 8000h
	eax += 0x8000;
//		adc     edx, byte 0
	if(eax < 0x8000) edx++;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		add     eax, 8000h
	eax += 0x8000;
//		sar     eax, 10h
	eax = (int)eax >> 0x10;
//		and     eax, 0ffh
	eax &= 0xff;
//		push    eax
	PUSH(eax);
//		call    __CEXT_F(writeColor__video)
	writeColor__video(D(esp), D(esp+4), D(esp+8), D(esp+0xc));
	esp += 0x10;
//		mov     ebx, [esp]
	ebx = D(esp);
//		inc     ebx
	ebx++;
//		add     edi, byte 0ch
	edi += 0xc;
//		mov     [esp], ebx
	D(esp) = ebx;
//		cmp     ebx, 100h
//		jl      ___3d2e2h
	if((int)ebx < 0x100) goto ___3d2e2h;
//		sub     ebp, 40000h
	ebp -= 0x40000;
//		cmp     ebp, 0fffc0000h
//		jne     ___3d2d4h
	if(ebp != 0xfffc0000) goto ___3d2d4h;
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

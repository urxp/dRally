#include "x86.h"

    extern byte MSX_Volume[];
    extern byte AMP_Volume[];
    extern byte ___19a279h[];
    extern byte Sound_CardType[];
    extern byte IsSoundEnabled[];
    extern byte SFX_Volume[];
    extern byte SFX_Ptr[];
    extern byte ___24e5c0h[];
    extern byte ___68bb0h[];

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


	void updateVolume(void);


// 65710h
void updateAMPVolume(dword A0){

	dword 	eax;

	eax = A0;

//		cmp     byte [__CEXT_V(Sound_CardType)], 0
//		je      _1__6570eh
	if(B(Sound_CardType) == 0) goto _1__6570eh;
//		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
//		je      _1__6570eh
	if(B(IsSoundEnabled) == 0) goto _1__6570eh;
//		mov     [__CEXT_V(AMP_Volume)], eax
	D(AMP_Volume) = eax;
//		call     __CEXT_F(updateVolume)
	updateVolume();
_1__6570eh:
//		retn  
	return;
}

// 6572ch
void updateMSXVolume(dword A0){

	dword 	eax;

	eax = A0;

//		cmp     byte [__CEXT_V(Sound_CardType)], 0
//		je      _2__6570eh
	if(B(Sound_CardType) == 0) goto _2__6570eh;
//		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
//		je      _2__6570eh
	if(B(IsSoundEnabled) == 0) goto _2__6570eh;
//		mov     [__CEXT_V(MSX_Volume)], eax
	D(MSX_Volume) = eax;
//		call     __CEXT_F(updateVolume)
	updateVolume();
_2__6570eh:
//		retn  
	return;
}

// 65770h
void updateSFXVolume(dword A0){

	dword 	eax;

	eax = A0;

//		cmp     byte [__CEXT_V(Sound_CardType)], 0
//		je      _3__6570eh
	if(B(Sound_CardType) == 0) goto _3__6570eh;
//		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
//		je      _3__6570eh
	if(B(IsSoundEnabled) == 0) goto _3__6570eh;
//		mov     [__CEXT_V(SFX_Volume)], eax
	D(SFX_Volume) = eax;
//		call     __CEXT_F(updateVolume)
	updateVolume();
_3__6570eh:
//		retn  
	return;
}

// 65788h
void updateVolume(void){

	dword 	eax, ebx, ecx, edx, esi, edi, epb;
	byte 	__esp[0x80];
	byte * 	esp = __esp + 0x80;

//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		cmp     dword [__CEXT_V(SFX_Ptr)], byte 0
//		jne     ___6569eh
	if(D(SFX_Ptr) != 0) goto ___6569eh;
//		xor     ebx, ebx
	ebx = 0;
___6579bh:
//		mov     edx, [__CEXT_V(MSX_Volume)]
	edx = D(MSX_Volume);
//		mov     eax, [__CEXT_V(AMP_Volume)]
	eax = D(AMP_Volume);
//		mov     ecx, [ebx+__CEXT_V(___24e5c0h)]
	ecx = D(ebx+___24e5c0h);
//		imul    edx
	PUSH(imul_eax(eax, edx));
	PUSH(imul_edx(eax, edx));
	POP(edx);
	POP(eax);
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10)|(edx << 0x10);
//		mov     edx, ecx
	edx = ecx;
//		add     ebx, byte 4
	ebx += 4;
//		imul    edx
	PUSH(imul_eax(eax, edx));
	PUSH(imul_edx(eax, edx));
	POP(edx);
	POP(eax);
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10)|(edx << 0x10);
//		mov     [ebx+__CEXT_V(___68bb0h)-4], eax
	D(ebx+___68bb0h-4) = eax;
//		cmp     ebx, 80h
//		je      ___6570ah
	if(ebx == 0x80) goto ___6570ah;
//		jmp     ___6579bh
	goto ___6579bh;
___6569eh:
//		xor     ebx, ebx
	ebx = 0;
//		xor     ecx, ecx
	ecx = 0;
//		jmp     ___656cdh
	goto ___656cdh;
___656a4h:
//		mov     edx, [__CEXT_V(MSX_Volume)]
	edx = D(MSX_Volume);
//		mov     eax, [__CEXT_V(AMP_Volume)]
	eax = D(AMP_Volume);
//		mov     esi, [ebx+__CEXT_V(___24e5c0h)]
	esi = D(ebx+___24e5c0h);
//		imul    edx
	PUSH(imul_eax(eax, edx));
	PUSH(imul_edx(eax, edx));
	POP(edx);
	POP(eax);
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10)|(edx << 0x10);
//		add     ebx, byte 4
	ebx += 4;
//		mov     edx, esi
	edx = esi;
//		inc     ecx
	ecx++;
//		imul    edx
	PUSH(imul_eax(eax, edx));
	PUSH(imul_edx(eax, edx));
	POP(edx);
	POP(eax);
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10)|(edx << 0x10);
//		mov     [ebx+__CEXT_V(___68bb0h)-4], eax
	D(ebx+___68bb0h-4) = eax;
___656cdh:
//		mov     esi, [__CEXT_V(___19a279h)]
	esi = D(___19a279h);
//		sar     esi, 18h
	esi = (int)esi >> 0x18;
//		cmp     ecx, esi
//		jle     ___656a4h
	if((int)ecx <= (int)esi) goto ___656a4h;
//		inc     esi
	esi++;
//		cmp     esi, byte 20h
//		jge     ___6570ah
	if((int)esi >= 0x20) goto ___6570ah;
//		lea     ebx, [esi*4+0]
	ebx = 4*esi;
___656e7h:
//		mov     edx, [__CEXT_V(SFX_Volume)]
	edx = D(SFX_Volume);
//		mov     eax, [__CEXT_V(AMP_Volume)]
	eax = D(AMP_Volume);
//		add     ebx, byte 4
	ebx += 4;
//		imul    edx
	PUSH(imul_eax(eax, edx));
	PUSH(imul_edx(eax, edx));
	POP(edx);
	POP(eax);
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10)|(edx << 0x10);
//		inc     esi
	esi++;
//		mov     [ebx+__CEXT_V(___68bb0h)-4], eax
	D(ebx+___68bb0h-4) = eax;
//		cmp     ebx, 80h
//		jl      ___656e7h
	if((int)ebx < 0x80) goto ___656e7h;
___6570ah:
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return;
}

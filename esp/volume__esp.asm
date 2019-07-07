%include "macros.inc"

    extern  __CEXT_V(MSX_Volume)
    extern  __CEXT_V(AMP_Volume)
    extern  __CEXT_V(___19a279h)
    extern  __CEXT_V(Sound_CardType)
    extern  __CEXT_V(IsSoundEnabled)
    extern  __CEXT_V(SFX_Volume)
    extern  __CEXT_V(SFX_Ptr)
    extern  __CEXT_V(___24e5c0h)
    extern  __CEXT_V(___68bb0h)

%include "layout.inc"

section @text

;; 65710h
__GDECL(__CEXT_F(updateAMPVolume))
		cmp     byte [__CEXT_V(Sound_CardType)], 0
		je      _1__6570eh
		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
		je      _1__6570eh
		mov     [__CEXT_V(AMP_Volume)], eax
		call     __CEXT_F(updateVolume)
_1__6570eh:
		retn  

;; 6572ch
__GDECL(__CEXT_F(updateMSXVolume))
		cmp     byte [__CEXT_V(Sound_CardType)], 0
		je      _2__6570eh
		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
		je      _2__6570eh
		mov     [__CEXT_V(MSX_Volume)], eax
		call     __CEXT_F(updateVolume)
_2__6570eh:
		retn  

;; 65770h
__GDECL(__CEXT_F(updateSFXVolume))
		cmp     byte [__CEXT_V(Sound_CardType)], 0
		je      _3__6570eh
		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
		je      _3__6570eh
		mov     [__CEXT_V(SFX_Volume)], eax
		call     __CEXT_F(updateVolume)
_3__6570eh:
		retn  

;; 65788h
__GDECL(__CEXT_F(updateVolume))
		push    ebx
		push    ecx
		push    edx
		push    esi
		cmp     dword [__CEXT_V(SFX_Ptr)], byte 0
		jne     ___6569eh
		xor     ebx, ebx
___6579bh:
		mov     edx, [__CEXT_V(MSX_Volume)]
		mov     eax, [__CEXT_V(AMP_Volume)]
		mov     ecx, [ebx+__CEXT_V(___24e5c0h)]
		imul    edx
		shrd    eax, edx, 10h
		mov     edx, ecx
		add     ebx, byte 4
		imul    edx
		shrd    eax, edx, 10h
		mov     [ebx+__CEXT_V(___68bb0h)-4], eax
		cmp     ebx, 80h
		je      ___6570ah
		jmp     ___6579bh
___6569eh:
		xor     ebx, ebx
		xor     ecx, ecx
		jmp     ___656cdh
___656a4h:
		mov     edx, [__CEXT_V(MSX_Volume)]
		mov     eax, [__CEXT_V(AMP_Volume)]
		mov     esi, [ebx+__CEXT_V(___24e5c0h)]
		imul    edx
		shrd    eax, edx, 10h
		add     ebx, byte 4
		mov     edx, esi
		inc     ecx
		imul    edx
		shrd    eax, edx, 10h
		mov     [ebx+__CEXT_V(___68bb0h)-4], eax
___656cdh:
		mov     esi, [__CEXT_V(___19a279h)]
		sar     esi, 18h
		cmp     ecx, esi
		jle     ___656a4h
		inc     esi
		cmp     esi, byte 20h
		jge     ___6570ah
		lea     ebx, [esi*4+0]
___656e7h:
		mov     edx, [__CEXT_V(SFX_Volume)]
		mov     eax, [__CEXT_V(AMP_Volume)]
		add     ebx, byte 4
		imul    edx
		shrd    eax, edx, 10h
		inc     esi
		mov     [ebx+__CEXT_V(___68bb0h)-4], eax
		cmp     ebx, 80h
		jl      ___656e7h
___6570ah:
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

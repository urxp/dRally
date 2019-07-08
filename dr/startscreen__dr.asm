%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(writeColor__video)
    extern  __CEXT_V(___182890h)
    extern  __CEXT_V(___1828a0h)
    extern  __CEXT_F(loadPalette)
    extern  __CEXT_V(MENU_BPA)
    extern  __CEXT_F(read__bpa)
    extern  __CEXT_V(BPA_Buffer)
    extern  __CEXT_V(VGABufferPtr_0)
    extern  __CEXT_F(decode2__bpk)
    extern  __CEXT_F(popScreen)
    extern  __CEXT_F(fadeinScreen)

%include "layout.inc"

section @text

;; 3d890h
__GDECL(__CEXT_F(startingScreen__dr))
		push    28h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		sub     esp, byte 4
		xor     edx, edx
		mov     [esp], edx
___3d8a6h:
		xor     eax, eax
		mov     al, [esp]
		push    eax
		push    byte 0
		push    byte 0
		push    byte 0
		call    __CEXT_F(writeColor__video)
		mov     ebx, [esp]
		inc     ebx
		mov     [esp], ebx
		cmp     ebx, 100h
		jl      ___3d8a6h
		mov     eax, __CEXT_V(___182890h)
		mov     ebx, __CEXT_V(___1828a0h)
		mov     edx, __CEXT_V(BPA_Buffer)
		call    __CEXT_F(loadPalette)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(VGABufferPtr_0)]
		push    esi
		call    __CEXT_F(decode2__bpk)
		call    __CEXT_F(popScreen)
		call    __CEXT_F(fadeinScreen)
		add     esp, byte 4
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

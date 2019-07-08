%include "macros.inc"

	extern 	__CHK
	extern	__CEXT_F(setbank__video)
	extern	__CEXT_V(VGABufferPtr_0)

%include "layout.inc"

section @text

;; 12cb8h
__GDECL(__CEXT_F(popScreen))
		push    10h
		call    __CHK
		push    ecx
		push    esi
		push    edi
		mov     ecx, 4000h
		xor     eax, eax
		mov     edi, 0a0000h
		call    __CEXT_F(setbank__video)
		mov     esi, [__CEXT_V(VGABufferPtr_0)]
		rep movsd   
		mov     eax, 1
		mov     ecx, 4000h
		call    __CEXT_F(setbank__video)
		mov     esi, [__CEXT_V(VGABufferPtr_0)]
		mov     edi, 0a0000h
		add     esi, 10000h
		rep movsd   
		mov     eax, 2
		mov     ecx, 4000h
		call    __CEXT_F(setbank__video)
		mov     esi, [__CEXT_V(VGABufferPtr_0)]
		mov     edi, 0a0000h
		add     esi, 20000h
		rep movsd   
		mov     eax, 3
		mov     ecx, 4000h
		call    __CEXT_F(setbank__video)
		mov     esi, [__CEXT_V(VGABufferPtr_0)]
		mov     edi, 0a0000h
		add     esi, 30000h
		rep movsd   
		mov     eax, 4
		mov     ecx, 2c00h
		call    __CEXT_F(setbank__video)
		mov     esi, [__CEXT_V(VGABufferPtr_0)]
		mov     edi, 0a0000h
		add     esi, 40000h
		rep movsd   
		pop     edi
		pop     esi
		pop     ecx
		retn    

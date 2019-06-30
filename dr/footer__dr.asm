%include "macros.inc"

	extern 	__CHK
	extern 	GXBackBuffer
	extern 	__CEXT_V(VGABufferPtr_0)
	extern 	RowBoxBuffers
	extern 	RowBox0Colors
	extern 	Font0Props
	extern 	WhiteFont0Ptr
	extern 	__CEXT_F(renderTextToBuffer__video)
	extern 	GreyFont0Ptr
	extern 	LightBlueFont0Ptr

	extern 	__CEXT_F(memcpy__clib3r)

%include "layout.inc"

section @text

global footer__dr
footer__dr:
		push    1ch
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, 3b600h
___23245h:
		mov     ecx, 280h
		mov     esi, [GXBackBuffer]
		mov     edi, [__CEXT_V(VGABufferPtr_0)]
		add     esi, ebp
		add     edi, ebp
		add     ebp, 280h
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		cmp     ebp, 49480h
		jne     ___23245h
		mov     edi, RowBoxBuffers
		mov     esi, 3b10ch
		xor     ebp, ebp
		add     edi, 960h
___2328ah:
		cmp     byte [ebp+RowBox0Colors], 0
		jne     ___232a6h
		mov     edx, Font0Props
		mov     eax, [WhiteFont0Ptr]
		mov     ecx, esi
		mov     ebx, edi
		call    __CEXT_F(renderTextToBuffer__video)
___232a6h:
		cmp     byte [ebp+RowBox0Colors], 1
		jne     ___232c2h
		mov     edx, Font0Props
		mov     eax, [GreyFont0Ptr]
		mov     ecx, esi
		mov     ebx, edi
		call    __CEXT_F(renderTextToBuffer__video)
___232c2h:
		cmp     byte [ebp+RowBox0Colors], 2
		jne     ___232deh
		mov     edx, Font0Props
		mov     eax, [LightBlueFont0Ptr]
		mov     ecx, esi
		mov     ebx, edi
		call    __CEXT_F(renderTextToBuffer__video)
___232deh:
		add     esi, 2580h
		inc     ebp
		add     edi, 96h
		cmp     ebp, 6
		jl      ___2328ah
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
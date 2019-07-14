%include "macros.inc"

	extern 	__CHK
	extern 	__CEXT_V(p_bpk_menubg5)
	extern 	__CEXT_V(VGABufferPtr_0)
	extern 	__CEXT_V(ChatLinesBuffer)
	extern 	__CEXT_V(RowBox0Colors)
	extern 	__CEXT_V(Font0Props)
	extern 	__CEXT_V(p_bpk_f_sma3a)
	extern 	__CEXT_F(renderTextToBuffer__video)
	extern 	__CEXT_V(p_bpk_f_sma3b)
	extern 	__CEXT_V(p_bpk_f_sma3c)


%include "layout.inc"

section @text

__GDECL(__CEXT_F(footer__dr))
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
		mov     esi, [__CEXT_V(p_bpk_menubg5)]
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
		mov     edi, __CEXT_V(ChatLinesBuffer)
		mov     esi, 3b10ch
		xor     ebp, ebp
		add     edi, 960h
___2328ah:
		cmp     byte [ebp+__CEXT_V(RowBox0Colors)], 0
		jne     ___232a6h
		mov     edx, __CEXT_V(Font0Props)
		mov     eax, [__CEXT_V(p_bpk_f_sma3a)]
		mov     ecx, esi
		mov     ebx, edi
		call    __CEXT_F(renderTextToBuffer__video)
___232a6h:
		cmp     byte [ebp+__CEXT_V(RowBox0Colors)], 1
		jne     ___232c2h
		mov     edx, __CEXT_V(Font0Props)
		mov     eax, [__CEXT_V(p_bpk_f_sma3b)]
		mov     ecx, esi
		mov     ebx, edi
		call    __CEXT_F(renderTextToBuffer__video)
___232c2h:
		cmp     byte [ebp+__CEXT_V(RowBox0Colors)], 2
		jne     ___232deh
		mov     edx, __CEXT_V(Font0Props)
		mov     eax, [__CEXT_V(p_bpk_f_sma3c)]
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

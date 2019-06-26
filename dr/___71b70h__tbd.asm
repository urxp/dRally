%include "macros.inc"

	extern 	__CEXT_V(___24e9dah)
	extern 	__CEXT_V(___19a804h)

%include "layout.inc"

section @text

;; 71b70h
__GDECL(__CEXT_F(___71b70h))
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     ebx, eax
		cmp     byte [__CEXT_V(___24e9dah)], 0
		jne     ___71b97h
		xor     eax, eax
		or      ebx, ebx
		je      ___71b92h
		xor     edx, edx
		mov     eax, ebx
		shr     eax, 1
		add     eax, 2820000h
		idiv    ebx
___71b92h:
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___71b97h:
		cmp     ebx, 1e00h
		jbe     ___71ba4h
		mov     ebx, 1e00h
___71ba4h:
		mov     eax, 1e00h
		mov     ecx, 300h
		sub     eax, ebx
		xor     edx, edx
		mov     ebx, eax
		div     ecx
		xor     esi, esi
		mov     si, [edx*2+__CEXT_V(___19a804h)]
		lea     eax, [esi*8+0]
		sub     eax, esi
		shl     eax, 8
		mov     ecx, 519h
		mov     esi, eax
		shl     eax, 6
		xor     edx, edx
		add     eax, esi
		div     ecx
		mov     ecx, 300h
		mov     esi, eax
		xor     edx, edx
		mov     eax, ebx
		div     ecx
		mov     ecx, 0ah
		sub     ecx, eax
		mov     eax, esi
		shr     eax, cl
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(__CEXT_F(strcmp__clib3r))
		push    ebx
		push    ecx
		mov     ebx, eax
		cmp     eax, edx
		je      ___645b4h
___64548h:
		mov     eax, [ebx]
		mov     ecx, [edx]
		cmp     ecx, eax
		jne     ___645b9h
		not     ecx
		add     eax, 0fefefeffh
		and     eax, ecx
		and     eax, 80808080h
		jne     ___645b4h
		mov     eax, [ebx+4]
		mov     ecx, [edx+4]
		cmp     ecx, eax
		jne     ___645b9h
		not     ecx
		add     eax, 0fefefeffh
		and     eax, ecx
		and     eax, 80808080h
		jne     ___645b4h
		mov     eax, [ebx+8]
		mov     ecx, [edx+8]
		cmp     ecx, eax
		jne     ___645b9h
		not     ecx
		add     eax, 0fefefeffh
		and     eax, ecx
		and     eax, 80808080h
		jne     ___645b4h
		mov     eax, [ebx+0ch]
		mov     ecx, [edx+0ch]
		cmp     ecx, eax
		jne     ___645b9h
		add     ebx, byte 10h
		add     edx, byte 10h
		not     ecx
		add     eax, 0fefefeffh
		and     eax, ecx
		and     eax, 80808080h
		je      ___64548h
___645b4h:
		sub     eax, eax
		pop     ecx
		pop     ebx
		retn    
___645b9h:
		cmp     al, cl
		jne     ___645dah
		cmp     al, 0
		je      ___645b4h
		cmp     ah, ch
		jne     ___645dah
		cmp     ah, 0
		je      ___645b4h
		shr     eax, 10h
		shr     ecx, 10h
		cmp     al, cl
		jne     ___645dah
		cmp     al, 0
		je      ___645b4h
		cmp     ah, ch
___645dah:
		sbb     eax, eax
		or      al, 1
		pop     ecx
		pop     ebx
		retn    

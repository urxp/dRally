%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(strcat)
		push    ecx
		push    esi
		push    edi
		mov     esi, edx
		mov     edi, eax
		push    es
		push    ds
		pop     es
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___67068h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___67080h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___67068h
___67080h:
		pop     edi
		pop     es
		mov     eax, edi
		pop     edi
		pop     esi
		pop     ecx
		retn    

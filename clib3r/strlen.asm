%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(__CEXT_F(strlen__clib3r))
		push    ecx
		push    edi
		mov     edi, eax
		push    es
		mov     eax, ds
		mov     es, eax
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		pop     es
		mov     eax, ecx
		pop     edi
		pop     ecx
		retn    

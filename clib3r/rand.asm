%include "macros.inc"
%include "layout.inc"

section @text

initrandnext:
		mov     eax, _next
		retn    
__GDECL(__CEXT_F(rand__clib3r))
		push    edx
		call    initrandnext
		test    eax, eax
		je      ___65ebbh
		imul    edx, [eax], 41c64e6dh
		add     edx, 3039h
		mov     [eax], edx
		mov     eax, edx
		shr     eax, 10h
		and     eax, 7fffh
___65ebbh:
		pop     edx
		retn  
__GDECL(srand__clib3r)
		push    edx
		mov     edx, eax
		call    initrandnext
		test    eax, eax
		je      ___65ecbh
		mov     [eax], edx
___65ecbh:
		pop     edx
		retn    


section @data

_next:
db	1,0,0,0

    extern  __int386x__clib3r

%include "layout.inc"

section @text

global int386x__clib3r
int386x__clib3r:
		push    esi
		push    edi
		push    ebp
		mov     edi, edx
		mov     ebp, ebx
		mov     ebx, ecx
		mov     edx, ebp
		mov     esi, eax
		call    __int386x__clib3r
		mov     eax, [ebp+0]
		pop     ebp
		pop     edi
		pop     esi
		retn    

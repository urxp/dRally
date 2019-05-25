
    extern  segread__clib3r
    extern  int386x__clib3r

%include "layout.inc"

section @text

global int386__clib3r
int386__clib3r:
		push    ecx
		push    esi
		sub     esp, 0ch
		mov     esi, eax
		mov     eax, esp
		mov     ecx, esp
		call    segread__clib3r
		mov     eax, esi
		call    int386x__clib3r
		add     esp, 0ch
		pop     esi
		pop     ecx
		retn

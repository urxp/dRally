%include "layout.inc"

section @text

global _fmemcpy__clib3r
_fmemcpy__clib3r:
		push    esi
		push    edi
		mov     edi, eax
		mov     eax, [esp+0ch]
		mov     esi, ebx
		push    ds
		push    es
		push    edi
		xchg    ecx, eax
		mov     ds, eax
		mov     es, edx
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     eax
		pop     es
		pop     ds
		pop     edi
		pop     esi
		ret     4

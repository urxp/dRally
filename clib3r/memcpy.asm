%include "layout.inc"

section @text

global memcpy__clib3r
memcpy__clib3r:
		push    ecx
		push    esi
		push    edi
		mov     ecx, ebx
		mov     esi, edx
		mov     edi, eax
		push    es
		mov     eax, ds
		mov     es, eax
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		pop     es
		mov     eax, edi
		pop     edi
		pop     esi
		pop     ecx
		retn    

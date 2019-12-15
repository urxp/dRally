cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243890h
	extern	___24388ch
	extern	___19bd58h

section .text

__GDECL(___59db8h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		cli     
		mov     dx, 201h
		xor     ebx, ebx
		out     dx, ax
		mov     ecx, 1388h
		xor     esi, esi
		xor     edi, edi
___59dd9h:
		in      al, dx
		dec     ecx
		je      short ___59dfeh
		mov     bl, al
		mov     bh, al
		and     bl, 1
		je      short ___59de7h
		inc     esi
___59de7h:
		and     bh, 2
		je      short ___59dedh
		inc     edi
___59dedh:
		test    bx, bx
		jne     short ___59dd9h
		mov     [___243890h], esi
		mov     [___24388ch], edi
___59dfeh:
		sti     
		test    ecx, ecx
		jne     short ___59e09h
		mov     [___19bd58h], ecx
___59e09h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

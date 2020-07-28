cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243334h
	extern	___243328h
	extern	___243324h
	extern	___243d80h
	extern	___243d50h
	extern	___24332ch

section .text

__GDECL(race___4207ch)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, [___243334h]
		mov     eax, [___243328h]
		sub     eax, edx
		test    eax, eax
		jle     short ___420a3h
		mov     [___243328h], eax
		jmp     short ___420abh
___420a3h:
		xor     ebx, ebx
		mov     [___243328h], ebx
___420abh:
		mov     edx, [___243324h]
		add     edx, 8000h
		mov     ebx, [___243d80h]
		sar     edx, 10h
		mov     ecx, [___243328h]
		lea     eax, [edx*4+0]
		mov     esi, [___243d50h]
		add     eax, edx
		add     ebx, 150h
		shl     eax, 6
		add     ebx, ecx
		mov     edx, eax
		shl     eax, 4
		mov     ecx, 3ch
		sub     eax, edx
		mov     edx, 50h
		add     esi, eax
		shr     dl, 2
___420f6h:
		mov     ch, dl
___420f8h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___420f8h
		add     ebx, 200h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___420f6h
		mov     eax, [___24332ch]
		mov     esi, [___243324h]
		add     esi, eax
		mov     [___243324h], esi
		lea     eax, [esi+8000h]
		sar     eax, 10h
		cmp     eax, byte 3fh
		jle     short ___42141h
		xor     edi, edi
		mov     [___243324h], edi
___42141h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

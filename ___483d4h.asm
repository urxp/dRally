cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRLEN
	extern	___1d7810h

section .text

__GDECL(___483d4h)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     ebx, eax
		mov     [esp], edx
		xor     edx, edx
		mov     ebp, [esp]
		mov     [esp+4], edx
		jmp     short ___48438h
___483f6h:
		movzx   esi, byte [ebp+0]
		sub     esi, byte 20h
		imul    esi, esi, byte 24h
		mov     ecx, 6
		mov     edi, ebx
		mov     edx, ecx
		add     esi, ___1d7810h
___4840fh:
		mov     ch, dl
___48411h:
		mov     al, [esi]
		or      al, al
		je      short ___48419h
		mov     [edi], al
___48419h:
		inc     edi
		inc     esi
		dec     ch
		jne     short ___48411h
		add     edi, 140h
		sub     edi, edx
		dec     cl
		jne     short ___4840fh
		mov     edi, [esp+4]
		inc     ebp
		inc     edi
		add     ebx, byte 6
		mov     [esp+4], edi
___48438h:
		mov     edi, [esp]
		mov     esi, [esp+4]
		call 	__STRLEN
		cmp     ecx, esi
		ja      short ___483f6h
__GDECL(___4844dh)
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

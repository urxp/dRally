cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRLEN
	extern	___243d80h
	extern	___1d7810h

section .text

__GDECL(___424c8h)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     [esp], eax
		mov     [esp+4], edx
		xor     edx, edx
		mov     ebp, [esp+4]
		mov     [esp+8], edx
		mov     [esp+0ch], edx
		jmp     short ___4254bh
___424f1h:
		xor     ecx, ecx
		mov     cl, [ebp+0]
		sub     ecx, byte 20h
		imul    esi, ecx, byte 24h
		mov     edi, [esp]
		mov     ebx, [___243d80h]
		mov     eax, [esp+8]
		add     ebx, edi
		add     ebx, eax
		mov     ecx, 6
		add     esi, ___1d7810h
		mov     edx, ecx
		inc     ebp
___4251bh:
		mov     ch, dl
___4251dh:
		mov     al, [esi]
		or      al, al
		je      short ___42525h
		mov     [ebx], al
___42525h:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___4251dh
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___4251bh
		mov     edx, [esp+8]
		mov     ebx, [esp+0ch]
		add     edx, byte 6
		inc     ebx
		mov     [esp+8], edx
		mov     [esp+0ch], ebx
___4254bh:
		mov     edi, [esp+4]
		mov     esi, [esp+0ch]
		call 	__STRLEN
		cmp     ecx, esi
		ja      short ___424f1h
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

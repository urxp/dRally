cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRLEN
	extern	___243d70h
	extern	___1d7810h

section .text

__GDECL(race___47808h)
	push 	ebx
	mov 	ebx, [esp+10h]
	mov 	edx, [esp+0ch]
	mov 	eax, [esp+8]
	call	___47808h
	pop 	ebx
	retn

__GDECL(___47808h)
		push    24h
		call    near __CHK
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     ecx, edx
		mov     [esp+8], ebx
		mov     ebx, ecx
		shl     ebx, 2
		sub     ebx, ecx
		shl     ebx, 5
		mov     ecx, ebx
		shl     ebx, 4
		add     ebx, ecx
		mov     [esp+4], ebx
		lea     ebx, [eax*4+0]
		xor     edx, edx
		sub     ebx, eax
		xor     ebp, ebp
		add     ebx, ebx
		mov     [esp+0ch], edx
		mov     [esp], ebx
		mov     ebx, [esp+8]
		jmp     short ___478a9h
___47850h:
		mov     ecx, [___243d70h]
		add     ecx, 4ceh
		mov     edi, [esp+4]
		add     ecx, ebp
		add     ecx, edi
		mov     edi, [esp]
		add     edi, ecx
		xor     ecx, ecx
		mov     cl, [ebx]
		sub     ecx, byte 20h
		imul    esi, ecx, byte 24h
		mov     ecx, 6
		add     esi, ___1d7810h
		mov     edx, ecx
___47880h:
		mov     ch, dl
___47882h:
		mov     al, [esi]
		or      al, al
		je      short ___4788ah
		mov     [edi], al
___4788ah:
		inc     edi
		inc     esi
		dec     ch
		jne     short ___47882h
		add     edi, 0cch
		sub     edi, edx
		dec     cl
		jne     short ___47880h
		mov     eax, [esp+0ch]
		inc     ebx
		inc     eax
		add     ebp, byte 6
		mov     [esp+0ch], eax
___478a9h:
		mov     edi, [esp+8]
		mov     esi, [esp+0ch]
		call 	__STRLEN
		cmp     ecx, esi
		ja      short ___47850h
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    

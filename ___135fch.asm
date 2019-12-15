cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	___1a1138h__VESA101h_DefaultScreenBufferB
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a10b4h

section .text

__GDECL(___135fch)
		push    1ch
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     ebp, eax
		mov     [esp+4], edx
		mov     [esp], ecx
		test    ecx, ecx
		jle     short ___1367eh
		lea     edi, [edx*4+0]
		lea     esi, [ecx*4+0]
		add     edi, edx
		add     esi, ecx
		shl     edi, 7
		shl     esi, 7
		lea     edx, [edi+0fffff600h]
		sub     esi, 0a00h
		add     edi, esi
		sub     ebx, byte 6
		mov     [esp+8], edi
___13646h:
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, ebx
		add     esi, edx
		add     edi, edx
		add     esi, ebp
		add     edi, ebp
		add     esi, byte 2
		add     edi, byte 2
		add     edx, 280h
		call 	__MOVS
		cmp     edx, [esp+8]
		jl      short ___13646h
___1367eh:
		mov     ebx, [esp+4]
		inc     ebx
		lea     edx, [ebx*4+0]
		mov     ecx, 0ah
		add     edx, ebx
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     edx, 7
		mov     esi, [___1a10b4h]
		add     ebx, edx
		mov     edx, 280h
___136a7h:
		mov     edi, edx
___136a9h:
		mov     al, [esi]
		or      al, al
		je      short ___136b1h
		mov     [ebx], al
___136b1h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___136a9h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___136a7h
		mov     eax, [esp+4]
		add     eax, [esp]
		sub     eax, byte 9
		lea     edx, [eax*4+0]
		mov     ecx, 0ah
		add     edx, eax
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     edx, 7
		mov     esi, [___1a10b4h]
		add     ebx, edx
		mov     edx, 280h
___136efh:
		mov     edi, edx
___136f1h:
		mov     al, [esi]
		or      al, al
		je      short ___136f9h
		mov     [ebx], al
___136f9h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___136f1h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___136efh
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		retn    

cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___196e68h
	extern	___243314h
	extern	___196d98h
	extern	___243d80h
	extern 	VGA13_ACTIVESCREEN
	extern 	VGA13_PRESENTSCREEN

section .text

__GDECL(___454ach)
		push    3ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 20h
		mov     ebx, [___196e68h]
		add     ebx, byte 3
		;mov     edx, 0a0000h
	mov 	edx, VGA13_ACTIVESCREEN
		mov     [___196e68h], ebx
		cmp     ebx, 168h
		jl      short ___454e7h
		lea     esi, [ebx+0fffffe98h]
		mov     [___196e68h], esi
___454e7h:
		mov     ebx, [___243314h]
		mov     eax, [___196e68h]
		mov     eax, [ebx+eax*8]
		add     eax, eax
		add     eax, 0fa0h
		mov     [esp+4], eax
		mov     eax, [___196e68h]
		;mov     ebp, 0a0000h
	mov 	ebp, VGA13_ACTIVESCREEN
		mov     ebx, [ebx+eax*4+1f4h]
		mov     [esp+18h], eax
		add     ebx, ebx
		add     eax, eax
		add     ebx, 0fa0h
		mov     [esp+8], eax
		mov     [esp+10h], ebx
		xor     ebx, ebx
___45529h:
		mov     ecx, [___196d98h]
		mov     esi, [___243d80h]
		mov     edi, ebp
		add     esi, byte 60h
		add     ebp, 140h
		add     esi, ebx
		add     ebx, 200h
		call 	__MOVS
	;call 	VGA13_PRESENTSCREEN
		cmp     ebx, 19000h
		jne     short ___45529h
		mov     eax, [esp+8]
		xor     edi, edi
		shl     eax, 2
		mov     [esp+14h], edi
		mov     [esp+0ch], eax
___45571h:
		mov     eax, [esp+4]
		mov     ebp, [esp+18h]
		add     ebp, eax
		mov     [esp+18h], ebp
		cmp     ebp, 5a000h
		jl      short ___45591h
		lea     ebx, [ebp+0fffa6000h]
		mov     [esp+18h], ebx
___45591h:
		mov     ecx, [esp+0ch]
		mov     esi, [esp+8]
		mov     ebx, [___196e68h]
		mov     eax, [___243314h]
		mov     ebp, [___196d98h]
		add     ecx, byte 4
		inc     esi
		add     ebx, byte 4bh
		add     eax, ecx
		add     edx, ebp
		mov     [esp+0ch], ecx
		mov     ecx, [eax]
		mov     [esp+8], esi
		shl     ecx, 8
		cmp     ebp, 140h
		jge     near ___45697h
___455ceh:
		inc     ebx
		cmp     ebx, 168h
		jl      short ___455ddh
		sub     ebx, 168h
___455ddh:
		mov     eax, [___243314h]
		mov     esi, [eax+ebx*4]
		mov     edi, [esp+18h]
		shl     esi, 8
		add     esi, edi
		sar     esi, 0ah
		mov     [esp], esi
		mov     esi, [eax+esi*4+5a0h]
		sar     esi, 7
		mov     [esp+1ch], esi
		mov     esi, ecx
		sar     esi, 0ah
		mov     edi, [eax+esi*4+5a0h]
		mov     eax, [esp+10h]
		mov     [esp], esi
		add     ecx, eax
		sar     edi, 8
		cmp     ecx, 5a000h
		jl      short ___45628h
		sub     ecx, 5a000h
___45628h:
		mov     esi, [___196d98h]
		lea     eax, [edi+ebp*1]
		cmp     eax, esi
		jl      short ___45676h
		cmp     eax, dword 13fh
		jge     short ___45676h
		mov     eax, [esp+14h]
		add     eax, [esp+1ch]
		test    eax, eax
		jl      short ___45676h
		cmp     eax, dword 0c7h
		jge     short ___45676h
		mov     esi, [___243d80h]
		shl     eax, 9
		add     esi, byte 60h
		add     eax, esi
		add     eax, ebp
		lea     esi, [eax+edi*1]
		mov     edi, edx
		movsw   
		add     edi, 13eh
		add     esi, 1feh
		movsw   
		jmp     short ___45685h
___45676h:
		mov     edi, edx
		xor     ax, ax
		stosw   
		add     edi, 13eh
		stosw   
___45685h:
		add     ebp, byte 2
		add     edx, byte 2
		cmp     ebp, 140h
		jl      near ___455ceh
___45697h:
		mov     eax, [esp+14h]
		add     eax, byte 2
		add     edx, 140h
		mov     [esp+14h], eax
		cmp     eax, dword 0c8h
		jl      near ___45571h
	call 	VGA13_PRESENTSCREEN
		add     esp, byte 20h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__STRCAT
	extern 	___180710h
	extern 	___180144h
	extern 	___1a1114h
	extern 	bpa_read
	extern 	___1a54d0h
	extern 	bpk_decode2
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___196adch
	extern 	___1a1ef8h
	extern 	___18071ch
	extern 	___180720h
	extern 	itoa_
	extern 	___180724h
	extern 	___13094h
	extern 	___1a01e0h
	extern 	___1a0224h
	extern 	___180728h
	extern 	___1a0238h

section .text

__GDECL(___16e6ch)
		push    98h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 74h
		mov     ebx, ___180710h
		mov     eax, ___180144h
		mov     edx, [___1a1114h]
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		mov     edx, [___1a1114h]
		push    edx
		push    ___1a54d0h
		mov     esi, ___1a54d0h
		call 	bpk_decode2
		add 	esp, 8
		mov     ecx, 117h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 1e9h
		add     ebx, 0d4cbh
___16ec0h:
		mov     edi, edx
___16ec2h:
		mov     al, [esi]
		or      al, al
		je      short ___16ecah
		mov     [ebx], al
___16ecah:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___16ec2h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___16ec0h
		mov     ebx, [___196adch]
		xor     ebp, ebp
		test    ebx, ebx
		jle     near ___1715fh
		mov     ecx, 1e824h
		mov     esi, 1e8f4h
		mov     edi, 1e94bh
		mov     ebx, 1e7eah
		mov     [esp+68h], ecx
		mov     [esp+6ch], esi
		mov     [esp+70h], edi
		mov     [esp+64h], ebx
___16f0eh:
		mov     eax, [___196adch]
		sub     eax, ebp
		mov     edx, [___1a1ef8h]
		dec     eax
		cmp     eax, edx
		jne     short ___16f28h
		mov     ax, [___18071ch]
		jmp     short ___16f2eh
___16f28h:
		mov     ax, [___180720h]
___16f2eh:
		mov     [esp], ax
		mov     ebx, 0ah
		lea     edx, [esp+50h]
		lea     esi, [esp+50h]
		lea     eax, [ebp+1]
		mov     edi, esp
		call    near itoa_
		call 	__STRCAT
		mov     esi, ___180724h
		mov     edi, esp
		mov     edx, [esp+64h]
		call 	__STRCAT
		mov     eax, esp
		call    near ___13094h
		mov     eax, [___196adch]
		sub     eax, ebp
		mov     ebx, [___1a1ef8h]
		dec     eax
		cmp     eax, ebx
		jne     short ___16fb9h
		mov     ax, [___18071ch]
		jmp     short ___16fbfh
___16fb9h:
		mov     ax, [___180720h]
___16fbfh:
		mov     [esp], ax
		mov     eax, [___196adch]
		sub     eax, ebp
		dec     eax
		imul    eax, eax, byte 6ch
		mov     esi, ___1a01e0h
		mov     edi, esp
		add     esi, eax
		mov     edx, [esp+68h]
		call 	__STRCAT
		mov     eax, esp
		call    near ___13094h
		mov     eax, [___196adch]
		sub     eax, ebp
		mov     ecx, [___1a1ef8h]
		dec     eax
		cmp     eax, ecx
		jne     short ___1701eh
		mov     ax, [___18071ch]
		jmp     short ___17024h
___1701eh:
		mov     ax, [___180720h]
___17024h:
		mov     [esp], ax
		mov     eax, [___196adch]
		sub     eax, ebp
		dec     eax
		imul    eax, eax, byte 6ch
		mov     ebx, 0ah
		lea     edx, [esp+50h]
		lea     esi, [esp+50h]
		mov     eax, [eax+___1a0224h]
		mov     edi, esp
		call    near itoa_
		call 	__STRCAT
		mov     edx, [esp+6ch]
		mov     eax, esp
		call    near ___13094h
		mov     eax, [___196adch]
		sub     eax, ebp
		mov     esi, [___1a1ef8h]
		dec     eax
		cmp     eax, esi
		jne     short ___17094h
		mov     ax, [___18071ch]
		jmp     short ___1709ah
___17094h:
		mov     ax, [___180720h]
___1709ah:
		mov     [esp], ax
		mov     esi, ___180728h
		mov     edi, esp
		call 	__STRCAT
		mov     eax, [___196adch]
		sub     eax, ebp
		dec     eax
		imul    eax, eax, byte 6ch
		mov     ebx, 0ah
		lea     edx, [esp+50h]
		lea     esi, [esp+50h]
		mov     edi, esp
		mov     eax, [eax+___1a0238h]
		inc     ebp
		call    near itoa_
		call 	__STRCAT
		mov     edx, [esp+70h]
		mov     eax, esp
		mov     ecx, [esp+64h]
		mov     esi, [esp+68h]
		mov     edi, [esp+6ch]
		call    near ___13094h
		mov     eax, [esp+70h]
		mov     edx, [___196adch]
		add     ecx, 6180h
		add     esi, 6180h
		add     edi, 6180h
		mov     [esp+64h], ecx
		mov     [esp+68h], esi
		add     eax, 6180h
		mov     [esp+6ch], edi
		mov     [esp+70h], eax
		cmp     ebp, edx
		jl      near ___16f0eh
___1715fh:
		add     esp, byte 74h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

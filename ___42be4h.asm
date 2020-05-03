cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1830b8h
	extern	___1a54d0h
	extern	___1830c4h
	extern	bpa_read
	extern	___243ce8h
	extern	___1de5ach
	extern	___1c9f10h
	extern	bpk_decode4
	extern	___1cb910h
	extern	___1cc110h
	extern	___1cc910h
	extern	___1830d0h
	extern	___243d84h
	extern	bpk_decode2
	extern	___1de580h
	extern	___1830dch
	extern	___1830e8h
	extern	___1830f4h
	extern	___183100h
	extern	___18310ch
	extern	___183118h
	extern	___1d5890h
	extern	___183124h
	extern	___1de210h
	extern	___183130h
	extern	___1d7810h
	extern	___183140h
	extern	___1d8910h
	extern	___18314ch
	extern	___1d8a10h
	extern	___18315ch
	extern	___1d2710h
	extern	___18316ch
	extern	___243d3ch
	extern	___18317ch
	extern	___243d34h
	extern	___18318ch
	extern	___1d8110h

section .text

___42bcch:
dd	___42d4ch
dd	___42d53h
dd	___42d5ah
dd	___42d61h
dd	___42d68h
dd	___42d6fh
__GDECL(___42be4h)
		push    2ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebx, ___1830b8h
		mov     edx, ___1a54d0h
		mov     eax, ___1830c4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		mov     eax, [___243ce8h]
		lea     esi, [eax*8+0]
		add     esi, eax
		shl     esi, 2
		add     esi, eax
		cmp     dword [esi*4+___1de5ach], byte 0
		je      short ___42c3bh
		mov     edx, eax
		shl     eax, 4
		push    ___1a54d0h
		add     eax, edx
		push    ___1c9f10h
		shl     eax, 9
		jmp     short ___42c5ch
___42c3bh:
		lea     esi, [eax*4+0]
		sub     esi, eax
		shl     esi, 2
		add     esi, eax
		push    ___1a54d0h
		shl     esi, 9
		push    ___1c9f10h
		lea     eax, [esi+8800h]
___42c5ch:
		push    eax
		push    1a00h
		call 	bpk_decode4
		add 	esp, 10h
		mov     ebx, [___243ce8h]
		xor     esi, esi
		test    ebx, ebx
		jne     short ___42c78h
		mov     esi, 1
___42c78h:
		mov     eax, esi
		shl     eax, 4
		add     eax, esi
		push    ___1a54d0h
		shl     eax, 9
		push    ___1cb910h
		add     eax, 1a00h
		push    eax
		push    800h
		inc     esi
		call 	bpk_decode4
		add 	esp, 10h
		mov     ecx, [___243ce8h]
		cmp     esi, ecx
		jne     short ___42caah
		lea     esi, [ecx+1]
___42caah:
		mov     eax, esi
		shl     eax, 4
		add     eax, esi
		push    ___1a54d0h
		shl     eax, 9
		push    ___1cc110h
		add     eax, 1a00h
		push    eax
		push    800h
		inc     esi
		call 	bpk_decode4
		add 	esp, 10h
		mov     edi, [___243ce8h]
		cmp     esi, edi
		jne     short ___42cdch
		lea     esi, [edi+1]
___42cdch:
		mov     eax, esi
		shl     eax, 4
		add     eax, esi
		push    ___1a54d0h
		shl     eax, 9
		push    ___1cc910h
		add     eax, 1a00h
		push    eax
		push    800h
		call 	bpk_decode4
		add 	esp, 10h
		mov     ebx, ___1830d0h
		mov     edx, ___1a54d0h
		mov     eax, ___1830c4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebp, [___243d84h]
		push    ebp
		call 	bpk_decode2
		add 	esp, 8
		mov     eax, [___243ce8h]
		lea     esi, [eax*8+0]
		add     esi, eax
		shl     esi, 2
		add     esi, eax
		mov     eax, [esi*4+___1de580h]
		cmp     eax, byte 5
		ja      short ___42d83h
		jmp     near dword [cs:eax*4+___42bcch]
___42d4ch:
		mov     ebx, ___1830dch
		jmp     short ___42d74h
___42d53h:
		mov     ebx, ___1830e8h
		jmp     short ___42d74h
___42d5ah:
		mov     ebx, ___1830f4h
		jmp     short ___42d74h
___42d61h:
		mov     ebx, ___183100h
		jmp     short ___42d74h
___42d68h:
		mov     ebx, ___18310ch
		jmp     short ___42d74h
___42d6fh:
		mov     ebx, ___183118h
___42d74h:
		mov     edx, ___1a54d0h
		mov     eax, ___1830c4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

___42d83h:
		mov     esi, [___243ce8h]
		mov     eax, esi
		shl     eax, 6
		push    ___1a54d0h
		sub     eax, esi
		push    ___1d5890h
		shl     eax, 7
		push    eax
		push    1f80h
		call 	bpk_decode4
		add 	esp, 10h
		mov     ebx, ___183124h
		mov     edx, ___1a54d0h
		mov     eax, ___1830c4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		push    ___1de210h
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___183130h
		mov     edx, ___1a54d0h
		mov     eax, ___1830c4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		push    ___1d7810h
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___183140h
		mov     edx, ___1a54d0h
		mov     eax, ___1830c4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		push    ___1d8910h
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___18314ch
		mov     edx, ___1a54d0h
		mov     eax, ___1830c4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		push    ___1d8a10h
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___18315ch
		mov     edx, ___1a54d0h
		mov     eax, ___1830c4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		push    ___1d2710h
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___18316ch
		mov     edx, ___1a54d0h
		mov     eax, ___1830c4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     eax, [___243d3ch]
		push    eax
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___18317ch
		mov     edx, ___1a54d0h
		mov     eax, ___1830c4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edx, [___243d34h]
		push    edx
		call 	bpk_decode2
		add 	esp, 8
		mov     ebx, ___18318ch
		mov     edx, ___1a54d0h
		mov     eax, ___1830c4h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		mov     eax, [___243ce8h]
		lea     esi, [eax*8+0]
		add     esi, eax
		shl     esi, 2
		add     esi, eax
		mov     ebx, [esi*4+___1de5ach]
		shl     eax, 0bh
		test    ebx, ebx
		je      short ___42ee1h
		push    ___1a54d0h
		push    ___1d8110h
		jmp     short ___42ef0h
___42ee1h:
		push    ___1a54d0h
		push    ___1d8110h
		add     eax, 2000h
___42ef0h:
		push    eax
		push    800h
		call 	bpk_decode4
		add 	esp, 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

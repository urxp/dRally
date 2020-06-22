cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___2432cch
	extern	___2432d0h
	extern	___2432e0h
	extern	___2432e8h
	extern	___3f71ch__allocateMemory
	extern	___2432d8h
	extern	___2432d4h
	extern	memset_
	extern	___243d80h
	extern	___243e53h
	extern	___243e57h
	extern	___243e5fh
	extern	___243e5bh
	extern	___243e73h
	extern	rand_watcom106
	extern	___1a309ch
	extern	dRally_Sound_freeEffectChannel
	extern	dRally_Sound_pushEffect
	extern	kmap
	extern	__STOSB
	extern	___2432e4h
	extern	___59cd8h
	extern	kmap
	extern	kmap
	extern	kmap
	extern	kmap
	extern	kmap
	extern	___243d14h
	extern	___243898h
	extern	___243874h
	extern	___58c60h
	extern	___47304h
	extern	___24330ch
	extern	___243e74h
	extern	___2432dch
	extern	___243e94h
	extern	___243e80h
	extern	___243e7ch
	extern	___243d70h
	extern	___47620h
	extern	___3f77ch__freeMemory
	extern	___243894h
	extern	___243878h
	extern	___243330h
	extern 	VGA13_ACTIVESCREEN
	extern 	VGA13_PRESENTSCREEN

section .text

__GDECL(___478c8h_cdecl)
	mov 	eax, [esp+4]
	call 	___478c8h
	retn

__GDECL(___478c8h)
		push    35ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 338h
		mov     ebp, eax
		xor     edx, edx
		mov     eax, 0fa00h
		mov     [___2432cch], edx
		mov     [___2432d0h], edx
		mov     [___2432e0h], edx
		mov     [___2432e8h], edx
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     [___2432d8h], eax
		mov     eax, 0fa00h
		mov     ebx, 0fa00h
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     [___2432d4h], eax
		mov     eax, [___2432d8h]
		mov     [esp+330h], edx
		call    near memset_
		xor     ebx, ebx
		xor     edx, edx
___47932h:
		mov     ecx, 140h
		mov     esi, [___243d80h]
		mov     edi, [___2432d4h]
		add     esi, byte 60h
		add     edi, edx
		add     esi, ebx
		call 	__MOVS
		add     edx, 140h
		add     ebx, 200h
		cmp     edx, 0fa00h
		jl      short ___47932h
		xor     eax, eax
		mov     bl, 64h
		xor     edx, edx
___47974h:
		add     eax, byte 21h
		mov     [eax+___243e53h], edx
		mov     [eax+___243e57h], edx
		mov     [eax+___243e5fh], edx
		mov     [eax+___243e5bh], edx
		mov     [eax+___243e73h], bl
		cmp     eax, dword 7ce9h
		jne     short ___47974h
		mov     esi, 13ch
		xor     ebx, ebx
___479a3h:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    esi
		add     ebx, byte 4
		mov     [ebx+___1a309ch], edx
		cmp     ebx, 190h
		jne     short ___479a3h
		mov     ecx, 3e80h
		mov     esi, [___2432d4h]
		mov     edi, [___2432d8h]
		rep movsd   
		mov     ecx, 3e80h
		;mov     edi, 0a0000h
	mov 	edi, VGA13_ACTIVESCREEN
		mov     esi, [___2432d8h]
		rep movsd   
	call 	VGA13_PRESENTSCREEN
		mov     eax, 5
	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Sound_freeEffectChannel
	add 	esp, 4
	pop 	ecx
	pop 	edx
		push    8000h
		mov     edx, 11h
		xor     ebx, ebx
		push    28000h
		mov     ecx, 10000h
		mov     eax, 5
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		mov     ecx, 100h
		mov     eax, kmap
		xor     edx, edx
		call    near __STOSB
		xor     edx, edx
		xor     ebx, ebx
		mov     [___2432e4h], edx
___47a2ah:
		cmp     dword [___2432e4h], 3c8h
		jl      short ___47a49h
		test    ebx, ebx
		jne     short ___47a49h
		mov     eax, 5
		mov     ebx, 1
	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Sound_freeEffectChannel
	add 	esp, 4
	pop 	ecx
	pop 	edx
___47a49h:
		call    near ___59cd8h
		cmp     byte [kmap+1ch], 0
		jne     short ___47a72h
		cmp     byte [kmap+9ch], 0
		jne     short ___47a72h
		cmp     byte [kmap+15h], 0
		jne     short ___47a72h
		cmp     byte [kmap+31h], 0
		je      short ___47a77h
___47a72h:
		mov     edx, 1
___47a77h:
		cmp     byte [kmap+3bh], 0
		je      short ___47a8ch
		mov     edx, 1
		mov     [esp+330h], edx
___47a8ch:
		cmp     dword [___243d14h], byte 0ffffffffh
		jne     short ___47aa8h
		cmp     byte [kmap+15h], 1
		jne     short ___47aa8h
		mov     dword [___243d14h], 1
___47aa8h:
		xor     ecx, ecx
		mov     [___243898h], ecx
		mov     eax, [___243898h]
		mov     [___243874h], eax

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     ecx, 2a80h
		mov     esi, [___2432d8h]
		;mov     edi, 0a5000h
	mov 	edi, VGA13_ACTIVESCREEN+5000h
		add     esi, 5000h
		rep movsd   
	call 	VGA13_PRESENTSCREEN
		mov     ecx, 2a80h
		mov     esi, [___2432d4h]
		mov     edi, [___2432d8h]
		add     esi, 5000h
		add     edi, 5000h
		rep movsd   
		call    near ___47304h
		mov     eax, [___243898h]
		mov     [___24330ch], eax
		cmp     eax, byte 1
		jge     short ___47b14h
		mov     dword [___24330ch], 1
___47b14h:
		cmp     dword [___2432e4h], 3c8h
		jl      short ___47b29h
		test    ebp, ebp
		je      short ___47b29h
		mov     edx, 1
___47b29h:
		test    edx, edx
		je      near ___47a2ah
		mov     ecx, 100h
		mov     eax, kmap
		xor     edx, edx
		mov     esi, 19h
		call    near __STOSB
		xor     ebx, ebx
		mov     eax, 5
		xor     edi, edi
	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Sound_freeEffectChannel
	add 	esp, 4
	pop 	ecx
	pop 	edx
___47b55h:
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		idiv    esi
		add     edi, byte 4
		neg     eax
		inc     ebx
		mov     [esp+edi*1-4], eax
		cmp     ebx, byte 66h
		jl      short ___47b55h
		mov     eax, 198h
		mov     edx, eax
___47b74h:
		add     eax, byte 4
		mov     ebx, [esp+edx*1]
		sub     edx, byte 4
		mov     [esp+eax*1-4], ebx
		cmp     eax, dword 330h
		jne     short ___47b74h
		mov     esi, 3333h
		mov     ebp, ___243e74h
		xor     edx, edx
		xor     edi, edi
		mov     [___2432d0h], edx
		mov     [esp+334h], edx
		mov     [___2432dch], esi
		add     ebp, byte 10h
		mov     [___2432cch], edx
___47bb2h:
		imul    eax, edi, byte 21h
		cmp     byte [eax+___243e94h], 64h
		je      short ___47bc5h
		inc     dword [esp+334h]
___47bc5h:
		mov     ebx, [___2432cch]

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     esi, 3
		sar     edx, 1fh
		idiv    esi
		mov     ecx, [esp+ebx*4]
		imul    ebx, edi, byte 21h
		add     edx, ecx
		shl     edx, 10h
		mov     [ebx+___243e80h], edx

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     esi, 4
		sar     edx, 1fh
		idiv    esi
		lea     eax, [edx-2]
		shl     eax, 10h
		mov     esi, [___2432d0h]
		mov     [ebx+___243e7ch], eax
		imul    eax, esi, 0cch
		mov     ecx, 0cch
		mov     edx, [___243d70h]
		mov     ebx, ebp
		mov     esi, [___2432cch]
		add     eax, edx
		mov     edx, 4
		add     esi, eax
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, edx
		add     esi, ecx
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, edx
		add     esi, ecx
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, edx
		add     esi, ecx
		mov     eax, [esi]
		mov     [ebx], eax
		mov     eax, [___2432d0h]
		add     eax, byte 4
		mov     [___2432d0h], eax
		cmp     eax, byte 4ch
		jne     short ___47c77h
		mov     ecx, [___2432cch]
		xor     ebx, ebx
		add     ecx, byte 4
		mov     [___2432d0h], ebx
		mov     [___2432cch], ecx
___47c77h:
		inc     edi
		add     ebp, byte 21h
		cmp     edi, 3c9h
		jl      near ___47bb2h
		push    8000h
		mov     ecx, 10000h
		mov     edx, 15h
		mov     eax, 5
		push    28000h
		xor     ebx, ebx
		;mov     ebp, 0a0000h
	mov 	ebp, VGA13_ACTIVESCREEN
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		mov     edx, 3e80h
		mov     ebx, 1
___47cb6h:
		xor     esi, esi
		mov     [___243898h], esi
		mov     eax, [___243898h]
		mov     [___243874h], eax

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     esi, [___2432d8h]
		mov     ecx, edx
		mov     edi, ebp
		rep movsd   
	call 	VGA13_PRESENTSCREEN
		mov     esi, [___2432d4h]
		mov     edi, [___2432d8h]
		mov     ecx, edx
		rep movsd   
		mov     edi, [esp+334h]
		call    near ___47620h
		cmp     eax, edi
		jge     short ___47d0fh
		mov     eax, [___243898h]
		mov     [___24330ch], eax
		cmp     ebx, eax
		jle     short ___47cb6h
		mov     [___24330ch], ebx
		jmp     short ___47cb6h
___47d0fh:
		mov     eax, 5
		mov     ecx, 3e80h
		;mov     edi, 0a0000h
	mov 	edi, VGA13_ACTIVESCREEN
	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Sound_freeEffectChannel
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     esi, [___2432d4h]
		rep movsd   
	call 	VGA13_PRESENTSCREEN
		mov     eax, [___2432d8h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___2432d4h]
		xor     edx, edx
		call    near ___3f77ch__freeMemory
		mov     [___243898h], edx
		mov     eax, [___243898h]
		mov     [___243874h], eax
		mov     [___243894h], edx
		mov     eax, [___243878h]
		mov     [___243894h], eax
		mov     eax, [___243894h]
		mov     ecx, [esp+330h]
		mov     [___243330h], eax
		test    ecx, ecx
		je      short ___47d7dh
		mov     byte [kmap+3bh], 1
___47d7dh:
		add     esp, 338h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

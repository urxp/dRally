#include "drally.h"

void race___47ed8h(dword A0){

/*
cpu 386
%include "macros.inc"

	extern 	VGA13_ACTIVESCREEN

	extern	__CHK
	extern 	__MOVS
	extern	___24387ch
	extern	___2432cch
	extern	___2432d0h
	extern	___2432e0h
	extern	___2432e8h
	extern	___3f71ch__allocateMemory
	extern	___2432d8h
	extern	___2432d4h
	extern	memset
	extern	___243d80h
	extern	___243e74h
	extern	rand_watcom106
	extern	___1a30a0h
	extern	dRally_Sound_freeEffectChannel
	extern	dRally_Sound_pushEffect
	extern	kmap
	extern	__STOSB
	extern	___2432e4h
	extern	___59cd8h
	extern	___47d8ch
	extern	___243d14h
	extern	kmap
	extern	___47e90h
	extern	___243898h
	extern	___243874h
	extern	___58c60h
	extern	___47304h
	extern	___24330ch
	extern	___2432dch
	extern	___243d70h
	extern	___47620h
	extern	dRMemory_free
	extern	___243894h
	extern	___243878h
	extern	___243330h
	extern	___4495ch

section .text

__GDECL(race___47ed8h)
	mov 	eax, [esp+4]
	call 	___47ed8h
	retn

__GDECL(___47ed8h)
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
		mov     [___24387ch], edx
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
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		xor     ebx, ebx
		xor     edx, edx
___47f41h:
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
		jl      short ___47f41h
		xor     eax, eax
		mov     bl, 64h
		xor     edx, edx
___47f83h:
		mov     [eax+___243e74h], edx
		mov     [eax+___243e74h+4], edx
		mov     [eax+___243e74h+0xc], edx
		mov     [eax+___243e74h+8], edx
		mov     [eax+___243e74h+0x20], bl
		add     eax, byte 21h
		cmp     eax, dword 7ce9h
		jne     short ___47f83h
		mov     esi, 13ch
		xor     ebx, ebx
___47fb2h:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    esi
		mov     [ebx+___1a30a0h], edx
		add     ebx, byte 4
		cmp     ebx, 190h
		jne     short ___47fb2h
		mov     ecx, 3e80h
		mov     esi, [___2432d4h]
		mov     edi, [___2432d8h]
		rep movsd   
		mov     ecx, 3e80h
		;mov     edi, 0a0000h
		mov 	edi, VGA13_ACTIVESCREEN
		mov     esi, [___2432d8h]
		rep movsd   
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

	push 	ecx
	push 	edx
	push 	eax
		call    __STOSB
	add 	esp, 0ch

		xor     edx, edx
		mov     [___2432e4h], edx
		mov     [esp+334h], edx
___4803eh:
		cmp     dword [___2432e4h], 3c8h
		jl      near ___480dfh
		cmp     dword [esp+334h], byte 0
		jne     short ___4806eh
		mov     eax, 5
		mov     edi, 1
	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Sound_freeEffectChannel
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     [esp+334h], edi
___4806eh:
		test    ebp, ebp
		jne     short ___48077h

	push 	edx
	push 	ecx
	push 	eax
		call    ___59cd8h
	pop 	eax
	pop 	ecx
	pop 	edx

___48077h:
		test    ebp, ebp
		jne     short ___4808fh
		xor     eax, eax
___4807dh:
		xor     ebx, ebx
		mov     bl, [eax+kmap]
		inc     eax
		add     edx, ebx
		cmp     eax, dword 100h
		jl      short ___4807dh
___4808fh:
		cmp     ebp, byte 1
		jne     short ___480a4h
		mov     eax, 63h
		call    near ___47d8ch
		test    eax, eax
		je      short ___480a4h
		mov     edx, ebp
___480a4h:
		cmp     ebp, byte 1
		jne     short ___480bfh
		mov     eax, 62h
		call    near ___47d8ch
		test    eax, eax
		je      short ___480bfh
		mov     edx, ebp
		mov     [___243d14h], ebp
___480bfh:
		test    ebp, ebp
		jne     short ___480dfh
		cmp     dword [___243d14h], byte 0ffffffffh
		jne     short ___480dfh
		cmp     byte [kmap+15h], 1
		jne     short ___480dfh
		mov     dword [___243d14h], 1
___480dfh:
		cmp     dword [___243d14h], byte 1
		setnz   al
		and     eax, 0ffh
		add     eax, byte 62h
		test    ebp, ebp
		jne     short ___48103h
		test    edx, edx
		je      short ___48103h
		and     eax, 0ffh
		call    near ___47e90h
___48103h:
		xor     edi, edi
		mov     [___243898h], edi
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
		mov     ecx, 2a80h
		mov     esi, [___2432d4h]
		mov     edi, [___2432d8h]
		add     esi, 5000h
		add     edi, 5000h
		rep movsd   

	push 	edx
	push 	ecx
	push 	eax
		call    ___47304h
	pop		eax
	pop 	ecx
	pop 	edx
	
		mov     eax, [___243898h]
		mov     [___24330ch], eax
		cmp     eax, byte 1
		jge     short ___4816fh
		mov     dword [___24330ch], 1
___4816fh:
		test    edx, edx
		je      near ___4803eh
		mov     ecx, 100h
		mov     eax, kmap
		xor     edx, edx
		mov     esi, 19h

	push 	ecx
	push 	edx
	push 	eax
		call    __STOSB
	add 	esp, 0ch

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
___4819bh:
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		idiv    esi
		add     edi, byte 4
		neg     eax
		inc     ebx
		mov     [esp+edi*1-4], eax
		cmp     ebx, byte 66h
		jl      short ___4819bh
		mov     eax, 198h
		mov     edx, eax
___481bah:
		add     eax, byte 4
		mov     ebx, [esp+edx*1]
		sub     edx, byte 4
		mov     [esp+eax*1-4], ebx
		cmp     eax, dword 330h
		jne     short ___481bah
		mov     ebp, 3333h
		xor     ecx, ecx
		mov     edi, ___243e74h
		mov     [___2432d0h], ecx
		mov     [esp+330h], ecx
		mov     [___2432dch], ebp
		add     edi, byte 10h
		mov     [___2432cch], ecx
		xor     ebp, ebp
___481f8h:
		imul    eax, ebp, byte 21h
		cmp     byte [eax+___243e74h+0x20], 64h
		je      short ___4820bh
		inc     dword [esp+330h]
___4820bh:
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
		mov     eax, [esp+ebx*4]
		imul    ebx, ebp, byte 21h
		add     eax, edx
		shl     eax, 10h
		mov     [ebx+___243e74h+0xc], eax

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     esi, 4
		sar     edx, 1fh
		idiv    esi
		sub     edx, byte 2
		shl     edx, 10h
		mov     [ebx+___243e74h+8], edx
		imul    eax, [___2432d0h], 0cch
		mov     ecx, 0cch
		mov     esi, [___2432cch]
		mov     edx, [___243d70h]
		mov     ebx, edi
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
		mov     ebx, [___2432d0h]
		add     ebx, byte 4
		mov     [___2432d0h], ebx
		cmp     ebx, byte 4ch
		jne     short ___482bbh
		mov     eax, [___2432cch]
		xor     esi, esi
		add     eax, byte 4
		mov     [___2432d0h], esi
		mov     [___2432cch], eax
___482bbh:
		inc     ebp
		add     edi, byte 21h
		cmp     ebp, 3c9h
		jl      near ___481f8h
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
___482fah:
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

		mov     esi, [___2432d8h]
		mov     ecx, edx
		mov     edi, ebp
		rep movsd   
		mov     esi, [___2432d4h]
		mov     edi, [___2432d8h]
		mov     ecx, edx
		rep movsd   
		mov     esi, [esp+330h]

	push 	edx
	push 	ecx
		call    ___47620h
	pop 	ecx
	pop 	edx

		cmp     eax, esi
		jge     short ___48353h
		mov     eax, [___243898h]
		mov     [___24330ch], eax
		cmp     ebx, eax
		jle     short ___482fah
		mov     [___24330ch], ebx
		jmp     short ___482fah
___48353h:
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
		mov     eax, [___2432d8h]

	push 	edx
	push 	ecx
	push 	eax
		call    dRMemory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, [___2432d4h]
		xor     ebp, ebp

	push 	edx
	push 	ecx
	push 	eax
		call    dRMemory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     [___243898h], ebp
		mov     eax, [___243898h]
		mov     [___243874h], eax
		mov     [___243894h], ebp
		mov     eax, [___243878h]
		mov     [___243894h], eax
		mov     eax, [___243894h]
		mov     [___243330h], eax
		mov     [___243898h], ebp
		mov     ebx, 1
		call    near ___4495ch
		mov     [___24387ch], ebx
		add     esp, 338h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
*/
}

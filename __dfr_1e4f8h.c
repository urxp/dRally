#include "drally.h"

void ___1e4f8h(void){

/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1866b8h
	extern	CONNECTION_TYPE
	extern	___1866b8h
	extern	___185a5ch
	extern	___196a84h
	extern	___196a78h
	extern	___13710h
	extern	___2415ch
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___623d4h
	extern	___199f9ch
	extern	___61cd0h
	extern	___1123ch
	extern	___19bd60h
	extern	___60719h
	extern	___63b20h
	extern	___185b58h

section .text

__GDECL(___1e4f8h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, 1
		mov     edi, ___1866b8h+384h
		mov     esi, __dfr_180cc0h
		mov     ecx, [CONNECTION_TYPE]
		xor     ah, ah
		xor     ebx, ebx
		mov     [___185b58h+14h], ah
		mov     [___185b58h+15h], ah
		mov     [___185b58h+16h], ah
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		mov     [___185b58h+17h], ah
		mov     edi, ___1866b8h+3b6h
		mov     esi, __dfr_180cd8h
		mov     [___185a5ch+50h], ebx
		mov     [___196a84h], edx
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		cmp     ecx, byte 2
		jne     short ___1e568h
		mov     byte [___185b58h+14h], 1
___1e568h:
		cmp     dword [CONNECTION_TYPE], byte 1
		jne     short ___1e578h
		mov     byte [___185b58h+15h], 1
___1e578h:
		cmp     dword [CONNECTION_TYPE], byte 3
		jne     short ___1e588h
		mov     byte [___185b58h+16h], 1
___1e588h:
		cmp     dword [CONNECTION_TYPE], byte 4
		jne     short ___1e598h
		mov     byte [___185b58h+17h], 1
___1e598h:
		cmp     dword [___196a78h], byte 0
		je      short ___1e5c2h
		mov     edx, 1
		mov     eax, 2

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		xor     edx, edx
		mov     [___196a84h], edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___2415ch
	pop 	eax
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___1e5c2h:
		cmp     dword [CONNECTION_TYPE], byte 2
		jne     short ___1e61ch

	push 	edx
	push 	ecx
	push 	eax
		call    ___623d4h
	pop 	eax
	pop 	ecx
	pop 	edx

		xor     ecx, ecx
		mov     edx, [___199f9ch]
		mov     [___199f9ch], ecx

	push 	edx
	push 	ecx
		call    ___61cd0h
	pop 	ecx
	pop 	edx

		test    eax, eax
		jne     short ___1e5ech
		call    near ___1123ch
___1e5ech:
		cmp     dword [___19bd60h], byte 0
		je      short ___1e603h
		cmp     dword [CONNECTION_TYPE], byte 2
		jne     short ___1e603h

	push 	edx
	push 	ecx
	push 	eax
		call    near ___60719h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e603h:
		cmp     dword [___19bd60h], byte 0
		je      short ___1e61ch
		cmp     dword [CONNECTION_TYPE], byte 2
		jne     short ___1e61ch
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___63b20h
	add 	esp, 8
	pop  	ecx

___1e61ch:
		mov     dword [___19bd60h], 1
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
__dfr_180cc0h:
	db	49h,6eh,69h,74h,69h,61h,6ch,69h,7ah,65h,20h,41h,20h,4eh,65h,77h,20h,47h,61h,6dh,65h,0,0,0
__dfr_180cd8h:
	db	4ah,6fh,69h,6eh,20h,41h,6eh,20h,45h,78h,69h,73h,74h,69h,6eh,67h,20h,47h,61h,6dh,65h,0,0,0
*/
}

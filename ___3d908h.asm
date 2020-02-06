 cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___180130h
	extern	___1a214ah
	extern	___1a0d60h
	extern	___1828b0h
	extern	GET_FILE_SIZE
	extern	___181c90h
	extern	___1828bch
	extern	___10b80h
	extern	dRally_Audio____649a8h
	extern	dRally_Audio____64a28h

	extern 	exit_

section .text

__GDECL(___3d908h)
		push    88h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 64h
		mov     al, [___180130h]
		mov     [esp], al
		cmp     byte [___1a214ah], 2
		jne     short ___3d954h
		mov     esi, ___1a0d60h
		mov     edi, esp
		call 	__STRCAT
___3d954h:
		mov     esi, ___1828b0h
		mov     edi, esp
		call 	__STRCAT
		mov     eax, esp

	push 	edx
	push 	ecx
	push 	eax
		call    near GET_FILE_SIZE
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		test    eax, eax
		jle     short ___3d9b4h
		push    byte 78h
		push    byte 1
		mov     ecx, 2
		mov     ebx, ___181c90h
		push    ___1828bch
		mov     edx, 1
		mov     eax, ___1828b0h
		call    near ___10b80h
	push 	eax
	push 	ecx
	push 	edx
		call    near dRally_Audio____649a8h
	pop 	edx
	pop 	ecx
	pop 	eax
	push 	eax
	push 	ecx
	push 	edx
		call    near dRally_Audio____64a28h
	pop 	edx
	pop 	ecx
	pop 	eax
___3d9b4h:
		add     esp, byte 64h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___196c60h
	extern	GET_FILE_SIZE
	extern	___182a30h
	extern	printf_
	extern	___182a5ch
	extern	___5a101h
	extern	___5ec04h_freeMemPool
	extern	exit_
	extern	___196c6dh
	extern	___182aach
	extern	___182ae4h
	extern	___1a0d60h
	extern	___1a214ah
	extern	___196d50h
	extern	___180130h
	extern	___196d5dh
	extern	___182b34h
	extern	___182b6ch

section .text

__GDECL(___3e1c4h)
		push    124h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 100h
		mov     ebx, ___196c60h
		xor     edx, edx
		mov     ebp, 70h
___3e1e6h:
		mov     eax, ebx
		call    near GET_FILE_SIZE
		mov     edi, eax
		cmp     eax, byte 1
		jge     short ___3e220h
		push    ebx
		push    ___182a30h
		call    near printf_
		add     esp, byte 8
		push    ___182a5ch
		call    near printf_
		add     esp, byte 4
		call    near ___5a101h
		call    near ___5ec04h_freeMemPool
		mov     eax, ebp
		call    near exit_
___3e220h:
		cmp     edi, [edx+___196c6dh]
		je      short ___3e25bh
		mov     eax, ___196c60h
		add     eax, edx
		push    eax
		push    ___182aach
		call    near printf_
		add     esp, byte 8
		push    ___182ae4h
		call    near printf_
		add     esp, byte 4
		call    near ___5a101h
		call    near ___5ec04h_freeMemPool
		mov     eax, ebp
		call    near exit_
___3e25bh:
		add     edx, byte 11h
		add     ebx, byte 11h
		cmp     edx, 0eeh
		jne     near ___3e1e6h
		mov     ah, 2
		mov     esi, ___1a0d60h
		mov     edi, esp
		mov     [___1a214ah], ah
		call 	__STRCPY
		mov     esi, ___196d50h
		mov     edi, esp
		call 	__STRCAT
		mov     eax, esp
		call    near GET_FILE_SIZE
		cmp     eax, byte 1
		jge     short ___3e2d2h
		mov     byte [___1a214ah], 1
___3e2d2h:
		mov     edx, ___196d50h
		xor     ebx, ebx
___3e2d9h:
		mov     al, [___180130h]
		mov     cl, [___1a214ah]
		mov     [esp], al
		cmp     cl, 2
		jne     short ___3e315h
		mov     esi, ___1a0d60h
		mov     edi, esp
		call 	__STRCAT
___3e315h:
		imul    ebp, ebx, byte 11h
		mov     edi, esp
		mov     esi, edx
		call 	__STRCAT
		mov     eax, esp
		call    near GET_FILE_SIZE
		test    eax, eax
		jle     short ___3e380h
		cmp     eax, [ebp+___196d5dh]
		je      short ___3e380h
		push    edx
		push    ___182b34h
		call    near printf_
		add     esp, byte 8
		push    ___182b6ch
		call    near printf_
		add     esp, byte 4
		call    near ___5a101h
		call    near ___5ec04h_freeMemPool
		mov     eax, 70h
		call    near exit_
___3e380h:
		inc     ebx
		add     edx, byte 11h
		cmp     ebx, byte 3
		jl      near ___3e2d9h
		add     esp, 100h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

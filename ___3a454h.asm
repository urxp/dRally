cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRLEN
	extern	itoa_
	extern	___1826e4h
	extern	___1826ech
	extern	GET_FILE_SIZE
	extern	___1807bch
	extern	fopen_
	extern	___1a0ef4h
	extern	___196be0h
	extern	fwrite_
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___3a214h
	extern	fputc_
	extern	outp_
	extern	inp_
	extern	fclose_

section .text

__GDECL(___3a454h)
		push    3ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 20h
		xor     ebp, ebp
___3a469h:
		mov     ebx, 0ah
		lea     edx, [esp+10h]
		mov     eax, ebp
		lea     edi, [esp+10h]
		call    near itoa_
		call 	__STRLEN
		cmp     ecx, byte 2
		je      short ___3a4a0h
		mov     al, [esp+10h]
		xor     dl, dl
		mov     [esp+11h], al
		mov     ah, 30h
		mov     [esp+12h], dl
		mov     [esp+10h], ah
___3a4a0h:
		mov     edi, esp
		mov     esi, ___1826e4h
		movsd   
		movsw   
		movsb   
		lea     esi, [esp+10h]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___1826ech
		mov     edi, esp
		call 	__STRCAT
		mov     eax, esp
		call    near GET_FILE_SIZE
		cmp     eax, byte 1
		jl      short ___3a512h
		inc     ebp
		cmp     ebp, byte 64h
		jl      near ___3a469h
___3a512h:
		mov     edx, ___1807bch
		mov     eax, esp
		mov     ebx, 80h
		call    near fopen_
		mov     edx, 1
		mov     [___1a0ef4h], eax
		mov     ecx, eax
		mov     eax, ___196be0h
		xor     esi, esi
		call    near fwrite_
		mov     ecx, 280h
___3a540h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, ecx
		add     eax, esi
		add     esi, 280h
		call    near ___3a214h
		cmp     esi, 4b000h
		jne     short ___3a540h
		mov     eax, 0ch
		mov     edx, [___1a0ef4h]
		call    near fputc_
		xor     esi, esi
		mov     ebp, 3c9h
		mov     edi, 1
___3a578h:
		mov     eax, 3c7h
		mov     edx, esi
		call    near outp_
		mov     eax, ebp
		call    near inp_
		shl     al, 2
		mov     [esp+1ch], al
		mov     eax, ebp
		call    near inp_
		shl     al, 2
		mov     ebx, edi
		mov     [esp+18h], al
		mov     eax, ebp
		mov     edx, edi
		call    near inp_
		shl     al, 2
		mov     ecx, [___1a0ef4h]
		mov     [esp+14h], al
		lea     eax, [esp+1ch]
		call    near fwrite_
		lea     eax, [esp+18h]
		mov     ecx, [___1a0ef4h]
		mov     ebx, edi
		mov     edx, edi
		call    near fwrite_
		lea     eax, [esp+14h]
		mov     ecx, [___1a0ef4h]
		mov     ebx, edi
		mov     edx, edi
		inc     esi
		call    near fwrite_
		cmp     esi, 0ffh
		jle     short ___3a578h
		mov     eax, [___1a0ef4h]
		call    near fclose_
		add     esp, byte 20h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

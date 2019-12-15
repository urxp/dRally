cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	___180130h
	extern 	___1a214ah
	extern 	___1a0d60h
	extern 	___3f71ch__allocateMemory
	extern 	___1a1f20h__VGA13_BUFFER_A
	extern 	___1a1f0ch__VGA13_BUFFER_B
	extern 	___64864h
	extern 	___606dfh
	extern 	___60466h
	extern 	___65990h
	extern 	___648d8h
	extern 	___659b8h
	extern 	___180134h
	extern 	fopen_
	extern 	fgetc_
	extern 	ftell_
	extern 	fseek_
	extern 	___1a1f00h
	extern 	___1a1f10h
	extern 	___1a1f1ch
	extern 	___180138h
	extern 	___180144h
	extern 	bpa_read
	extern 	bpk_decode4
	extern 	___185a0ch
	extern 	___5994ch
	extern 	GET_FRAME_COUNTER
	extern 	fread_
	extern 	___108e8h
	extern 	___1a0a60h
	extern 	___654d4h
	extern 	fclose_
	extern 	___6563ch
	extern 	___3f77ch__freeMemory
	extern 	VGA13_SETMODE
	extern 	VRETRACE_WAIT_IF_INACTIVE
	extern 	VRETRACE_WAIT_IF_ACTIVE
	extern 	VRETRACE_WAIT_FOR_END
	extern 	VRETRACE_WAIT_FOR_START
	extern 	DISPLAY_SET_PALETTE_COLOR
	extern 	DISPLAY_SET_PALETTE_COLOR_NOUPDATE
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	VGA13_ACTIVESCREEN
	extern 	VGA13_PRESENTSCREEN
	extern 	DISPLAY_CLEAR_PALETTE
	extern 	printf_

section .text

__GDECL(___10b80h)
		push    42ch
		call    __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, 40ch
		mov     ebp, eax
		mov     [esp+408h], dl
		mov     edx, ebx
		mov     bl, cl
		mov     al, [___180130h]
		mov     ecx, 1
		mov     [esp+300h], al
		mov     ah, [___1a214ah]
		mov     [esp+404h], ecx
		cmp     ah, 2
		jne     ___10bf1h
		mov     esi, ___1a0d60h
		lea     edi, [esp+300h]
		call 	__STRCAT
___10bf1h:
		lea     edi, [esp+300h]
		mov     esi, ebp
		call 	__STRCAT
		mov     eax, 0fa00h
		call    ___3f71ch__allocateMemory
		mov     [___1a1f20h__VGA13_BUFFER_A], eax
		mov     eax, 0fa00h
		mov     bh, [esp+408h]
		call    ___3f71ch__allocateMemory
		mov     [___1a1f0ch__VGA13_BUFFER_B], eax
		test    bh, bh
		je      ___10c62h
		push    byte 6
		mov     ecx, [esp+420h]
		xor     eax, eax
		and     ebx, 0ffh
		mov     al, [esp+40ch]
		call    ___64864h
___10c62h:
		call    ___606dfh
		call 	VGA13_SETMODE
		mov 	edx, 1
		mov     eax, 46h
		call    ___60466h
		cmp     byte [esp+408h], 0
		je      ___10cb2h
		mov     eax, 5622h
		call    ___65990h
		call    ___648d8h
		mov     eax, 1
		call    ___659b8h
___10cb2h:
		mov     edx, ___180134h		;; "rb"
		lea     eax, [esp+300h]
		call    fopen_
		mov     ebp, eax
		call    fgetc_
		mov     edx, eax
		mov 	eax, ebp
		call 	fgetc_
		shl     eax, 8
		add     eax, edx
		mov     [___1a1f00h], eax
		call    ___3f71ch__allocateMemory
		mov     [___1a1f10h], eax
		mov     eax, [___1a1f00h]
		xor     ecx, ecx
		call    ___3f71ch__allocateMemory
		mov     edi, [___1a1f00h]
		mov     [___1a1f1ch], eax
		test    edi, edi
		jle     ___10dc4h
___10d78h:
		mov     eax, ebp
		call    fgetc_
		mov     edx, eax
		mov     eax, [___1a1f10h]
		inc     ecx
		mov     [ecx+eax*1-1], dl
		cmp     ecx, [___1a1f00h]
		jl      ___10d78h
___10dc4h:
		mov     edx, [___1a1f00h]
		xor     ecx, ecx
		test    edx, edx
		jle     ___10e1eh
___10dd0h:
		mov     eax, ebp
		call    fgetc_
		mov     ebx, eax
		mov     eax, [___1a1f1ch]
		inc     ecx
		mov     edi, [___1a1f00h]
		mov     [ecx+eax*1-1], bl
		cmp     ecx, edi
		jl      ___10dd0h
___10e1eh:
		call 	DISPLAY_CLEAR_PALETTE
		mov     ebx, ___180138h
		mov     eax, ___180144h
		mov     edx, [___1a1f0ch__VGA13_BUFFER_B]
		call    bpa_read
		mov     ebx, [___1a1f0ch__VGA13_BUFFER_B]
		push    ebx
		lea     eax, [esp+4]
		push    eax
		push    byte 0
		push    300h
		call    bpk_decode4
		mov     ecx, [___1a1f0ch__VGA13_BUFFER_B]
		push    ecx
		push    VGA13_ACTIVESCREEN
		push    300h
		push    0fa00h
		call    bpk_decode4
		call 	VGA13_PRESENTSCREEN
		xor     ebx, ebx
		xor     ecx, ecx
___10ea5h:
		movzx   esi, byte [esp+ecx*1]
		movzx	edx, byte [esp+ecx*1+1]
		movzx   edi, byte [esp+ecx*1+2]
		push 	ebx
		push 	esi
		push 	edx
		push 	edi
		call 	DISPLAY_SET_PALETTE_COLOR
		inc     ebx
		add     ecx, byte 3
		cmp     ebx, byte 10h
		jl      ___10ea5h
	call 	VGA13_PRESENTSCREEN
		xor     esi, esi
		mov     edi, [___1a1f00h]
		mov     [___185a0ch], esi
		test    edi, edi
		jle     ___11119h
___10f0fh:
		mov     bl, [esp+420h]
		call    ___5994ch
		test    bl, bl
		je      ___10f27h
		test    al, al
		jne     ___11119h
___10f27h:
		call    GET_FRAME_COUNTER
		mov     esi, eax
		mov     eax, ebp
		call    fgetc_
		mov     edx, eax
		mov     eax, ebp
		call    fgetc_
		mov     ecx, ebp
		shl     eax, 8
		mov     ebx, 1
		add     edx, eax
		mov     eax, [___1a1f0ch__VGA13_BUFFER_B]
		call    fread_
		call    ___108e8h
		mov     eax, [___1a1f1ch]
		add     eax, [___185a0ch]
		xor     ecx, ecx
		mov     cl, [eax]
		add     ecx, esi
		call    GET_FRAME_COUNTER
		cmp     eax, ecx
		jb      ___10ff8h
		call    GET_FRAME_COUNTER
		lea     ecx, [eax+1]
___10ff8h:
		call    GET_FRAME_COUNTER
		cmp     eax, ecx
		jb      ___10ff8h
		mov     ecx, 10h
		mov     ebx, 30h
___1102eh:
		push 	ecx
		movzx   edx, byte [ebx+___1a0a60h]
		push 	edx
		movzx   edx, byte [ebx+___1a0a60h+1]
		push 	edx
		movzx   edx, byte [ebx+___1a0a60h+2]
		push 	edx
		call 	DISPLAY_SET_PALETTE_COLOR_NOUPDATE
		inc 	ecx
		add 	ebx, byte 3
		cmp     ecx, 100h
		jl      ___1102eh
		cmp     byte [esp+424h], 64h
		jne     ___11086h
		mov     ecx, 7d00h		;; 32000:::320x100:::16:5(3.2)
		mov 	edi, VGA13_ACTIVESCREEN+3e80h
		mov     esi, [___1a1f20h__VGA13_BUFFER_A]
		add 	esi, 0c80h
		jmp     ___11090h
___11086h:
		mov     ecx, 9600h		;; 38400:::320x120:::8:3(2.67)
		mov 	edi, VGA13_ACTIVESCREEN+3200h
		mov     esi, [___1a1f20h__VGA13_BUFFER_A]
___11090h:
		call 	__MOVS
		call 	VGA13_PRESENTSCREEN
		mov     esi, [___185a0ch]
		mov     edx, [___1a1f10h]
		add     edx, esi
		mov     bh, [edx]
		test    bh, bh
		jbe     ___11100h
		push    8000h
		mov     dl, bh
		push    10000h
		mov     ecx, 10000h
		mov     edi, [esp+40ch]
		and     edx, 0ffh
		xor     eax, eax
		xor     ebx, ebx
		mov     al, [esp+40ch]
		inc     edi
		call    ___654d4h
		mov     [esp+404h], edi
		cmp     edi, byte 6
		jle     ___11100h
		mov     dword [esp+404h], 1
___11100h:
		mov     eax, [___185a0ch]
		inc     eax
		mov     edx, [___1a1f00h]
		mov     [___185a0ch], eax
		cmp     eax, edx
		jl      ___10f0fh
___11119h:
		mov     eax, ebp
		call    fclose_
		call 	DISPLAY_CLEAR_PALETTE
		mov     ecx, 1
___11160h:
		xor     eax, eax
		mov     al, cl
		inc     ecx
		call    ___6563ch
		cmp     ecx, byte 6
		jle     ___11160h
		mov     eax, [___1a1f20h__VGA13_BUFFER_A]
		call    ___3f77ch__freeMemory
		mov     eax, [___1a1f0ch__VGA13_BUFFER_B]
		call    ___3f77ch__freeMemory
		mov     eax, [___1a1f10h]
		call    ___3f77ch__freeMemory
		mov     eax, [___1a1f1ch]
		call    ___3f77ch__freeMemory
		add     esp, 40ch
		pop     ebp
		pop     edi
		pop     esi
		ret     0ch

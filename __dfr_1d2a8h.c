/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___19bd60h
	extern	___1d4e8h
	extern	___199fa4h_com_port_addr
	extern	___61b88h
	extern	___1ca00h
	extern	___13710h
	extern	___3ab5ch_cdecl
	extern	___1a1ef8h
	extern	CONNECTION_TYPE
	extern	___199fach
	extern	___1a01e0h
	extern	___2415ch
	extern	___2b5f0h
	extern	___61cd0h
	extern	___1123ch
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13248h_cdecl
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___60a84h
	extern	___5994ch
	extern	___199fa0h
	extern	___60b48h
	extern	___2ab50h
	extern	___13bd4h_cdecl
	extern	___611c0h
	extern	___61278h
	extern	___1866b8h
	extern	___1caf4h
	extern	___185b58h

section .text

__GDECL(___1d2a8h)
		push    2ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     ebx, 0c5h
		mov     edx, 97h
		mov     ecx, [___19bd60h]
		mov     [esp+4], ebx
		mov     [esp], edx
		test    ecx, ecx
		je      short ___1d2e0h
		call    near ___1d4e8h
		jmp     near ___1d4ddh
___1d2e0h:
		mov     eax, [___199fa4h_com_port_addr]
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___61b88h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    eax, eax
		jne     short ___1d2fdh
		call    near ___1ca00h
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1d2fdh:
		mov     eax, 2
		xor     edx, edx

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		xor     eax, eax

	push 	edx
	push 	ecx
	push 	eax
		call    ___3ab5ch_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		test    eax, eax
		je      near ___1d4ddh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     esi, 1
		shl     eax, 2
		mov     edi, 4b00h
		sub     eax, edx
		mov     [CONNECTION_TYPE], esi
		mov     [___199fach], edi
		mov     ebx, [eax*4+___1a01e0h+2ch]

	push 	edx
	push 	ecx
	push 	eax
		call    ___2415ch
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     [eax*4+___1a01e0h+2ch], ebx
	
	push 	edx
	push 	ecx
		call    ___2b5f0h
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___61cd0h
	pop 	ecx
	pop 	edx

		test    eax, eax
		jne     short ___1d37ch
		call    near ___1123ch
___1d37ch:
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 14eh

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 2
		xor     edx, edx
		mov     ecx, 41h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, [esp+8]
		mov     eax, [esp+4]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     edx, [esp+4]
		add     edx, byte 0dh
		lea     eax, [edx*4+0]
		mov     ecx, [esp]
		add     eax, edx
		mov     ebx, __dfr_180aa8h
		shl     eax, 7
		mov     edx, ___185c0bh
		add     ecx, eax
		mov     eax, [___1a1108h]
		add     ecx, byte 28h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+4]
		mov     ebp, [esp]
		add     edx, byte 1eh
		mov     esi, [esp+4]
		lea     eax, [edx*4+0]
		mov     edi, [esp]
		add     eax, edx
		add     esi, byte 13h
		shl     eax, 7
		add     edi, byte 0fh
		add     eax, ebp
		mov     ebx, __dfr_180ac8h
		lea     ecx, [eax+28h]
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		xor     ebp, ebp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx


	push 	eax
	push 	ecx
	push 	edx
		call    ___60a84h
	pop 	edx
	pop 	ecx
	pop 	eax

		xor     ecx, ecx
		xor     ebx, ebx
___1d452h:
		cmp     ebp, 0ffh
		je      short ___1d4a8h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     dword [esp+8], 0ah
		xor     ecx, ecx
		mov     edx, ebx
		mov     cl, al
		sar     edx, 1fh
		mov     eax, ebx
		idiv    dword [esp+8]
		cmp     edx, byte 1
		jne     short ___1d48fh
		mov     eax, [___199fa0h]
		mov     edx, 2
		add     eax, byte 5

	push 	ecx
	push 	edx
	push 	eax
		call    ___60b48h
	add 	esp, 8
	pop 	ecx

		mov     ebp, eax
___1d48fh:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     edx, esi
		mov     eax, edi
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___13bd4h_cdecl
	add 	esp, 8
	pop 	ecx

		inc     ebx
		cmp     ecx, byte 1
		jne     short ___1d452h
___1d4a8h:
		cmp     ecx, byte 1
		je      short ___1d4b6h
		xor     edx, edx
		xor     eax, eax
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___611c0h
	add 	esp, 8
	pop 	ecx

___1d4b6h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___61278h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     ecx, byte 1
		je      short ___1d4ddh
		mov     edi, ___1866b8h+41ah
		xor     ah, ah
		mov     esi, __dfr_180d18h
		mov     [___185b58h+18h], ah

	push 	edx
	push 	ecx
		call    ___1caf4h
	pop 	ecx
	pop 	edx
	
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
___1d4ddh:
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
__dfr_180aa8h:
	db 	"Waiting for remote player...",0,0,0,0
__dfr_180ac8h:
	db 	"Press ESC to abort",0,0
__dfr_180d18h:
	db	44h,69h,73h,63h,6fh,6eh,6eh,65h,63h,74h,20h,53h,65h,72h,69h,61h,6ch,0,0,0
*/

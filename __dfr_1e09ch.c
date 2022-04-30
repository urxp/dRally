/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern	___19bd60h
	extern	___1d4e8h
	extern	___1d83ch
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
	extern	___1d688h
	extern	___1a1138h__VESA101_BACKGROUND
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13248h_cdecl
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___13bd4h_cdecl
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___631d4h
	extern	___63228h
	extern	kmap
	extern	___63244h
	extern	memset
	extern	___2ab50h
	extern	___60a84h
	extern	___5994ch
	extern	___199fa0h
	extern	___60b48h
	extern	___611c0h
	extern	___61278h
	extern	___1866b8h
	extern	___1caf4h
	extern	___623d4h
	extern	___59b3ch
	extern	___185b58h

section .text

__GDECL(___1e09ch)
		push    64h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 44h
		mov     edx, 0c5h
		mov     edi, esp
		mov     esi, __dfr_181000h
		xor     ah, ah
		mov     [esp+24h], edx
		mov     [esp+41h], ah
		movsd   
		movsd   
		movsd   
		movsb   
		mov     dl, 0dh
		lea     esi, [esp+40h]
		mov     edi, esp
		mov     [esp+40h], dl
		call 	__STRCAT
		mov     ebx, [___19bd60h]
		mov     ebp, 0b4h
		test    ebx, ebx
		je      short ___1e110h
		call    near ___1d4e8h
		jmp     near ___1e4eeh
___1e110h:
		call    near ___1d83ch
		mov     eax, [___199fa4h_com_port_addr]
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___61b88h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    eax, eax
		jne     short ___1e132h
		call    near ___1ca00h
		add     esp, byte 44h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1e132h:
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
		je      near ___1e4eeh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     ecx, 4
		shl     eax, 2
		mov     esi, 4b00h
		sub     eax, edx
		mov     [CONNECTION_TYPE], ecx
		mov     [___199fach], esi
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
		jne     short ___1e1b1h
		call    near ___1123ch
___1e1b1h:
		call    near ___1d688h
		test    eax, eax
		je      near ___1e4e9h
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101_BACKGROUND]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 113h

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
		mov     edx, [esp+28h]
		mov     eax, ebp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     edx, [esp+24h]
		add     edx, byte 0dh
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, __dfr_181010h
		mov     [esp+18h], eax
		lea     esi, [eax+ebp*1]
		mov     edx, ___185c0bh
		add     esi, byte 28h
		mov     eax, [___1a1108h]
		mov     ecx, esi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+24h]
		add     edx, byte 1eh
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, __dfr_180ac8h
		lea     ecx, [eax+ebp*1]
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		add     ecx, byte 28h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ebx, [esp+24h]
		lea     edi, [ebp+0fh]
		add     ebx, byte 13h
		mov     eax, edi
		mov     edx, ebx
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___13bd4h_cdecl
	add 	esp, 8
	pop 	ecx


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     eax, esp

	push 	edx
	push 	ecx
	push 	eax
		call    ___631d4h
	add 	esp, 4
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___63228h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     dh, [kmap+1]
		xor     ecx, ecx
		test    dh, dh
		jne     near ___1e414h
		mov     eax, [esp+18h]
		mov     [esp+2ch], edi
		mov     [esp+28h], esi
		mov     [esp+34h], esi
		mov     [esp+30h], ebx
		mov     [esp+1ch], eax
		mov     [esp+20h], eax
___1e2c7h:
		test    ecx, ecx
		jne     near ___1e414h
		mov     eax, __dfr_181024h

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    eax, eax
		je      near ___1e36fh
		xor     esi, esi
		mov     ecx, 0c4h
		mov     edi, 0d8h
___1e2edh:
		mov     edx, [esp+20h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, edx
		add     eax, ebp
		mov     ebx, edi
		add     eax, byte 28h
		mov     edx, ecx
		add     eax, esi
		add     esi, 280h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		cmp     esi, 2800h
		jne     short ___1e2edh
		mov     ecx, [esp+34h]
		mov     ebx, __dfr_18102ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		lea     esi, [esp+40h]

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

		mov     eax, [__dfr_181044h]
		mov     edi, esp
		mov     [esp], eax
		call 	__STRCAT
		mov     eax, esp

	push 	edx
	push 	ecx
	push 	eax
		call    ___631d4h
	add 	esp, 4
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___63228h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e36fh:
		mov     eax, __dfr_180fb4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    eax, eax
		je      short ___1e3d4h
		xor     ecx, ecx
		mov     edi, 0c4h
		mov     esi, 0d8h
___1e389h:
		mov     ebx, [esp+1ch]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ebx
		add     eax, ebp
		mov     edx, edi
		add     eax, byte 28h
		mov     ebx, esi
		add     eax, ecx
		add     ecx, 280h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		cmp     ecx, 2800h
		jne     short ___1e389h
		mov     ecx, [esp+28h]
		mov     ebx, __dfr_181010h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

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


	push 	edx
	push 	ecx
	push 	eax
		call    ___63228h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e3d4h:
		mov     eax, __dfr_180fdch

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     ecx, eax
		test    eax, eax
		jne     short ___1e3f0h
		mov     eax, __dfr_180fe4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     ecx, eax
___1e3f0h:

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
	
		mov     edx, [esp+30h]
		mov     eax, [esp+2ch]
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___13bd4h_cdecl
	add 	esp, 8
	pop 	ecx

		cmp     byte [kmap+1], 0
		je      near ___1e2c7h
___1e414h:

	push 	eax
	push 	ecx
	push 	edx
		call    ___60a84h
	pop 	edx
	pop 	ecx
	pop 	eax

		mov     bh, [kmap+1]
		xor     edi, edi
		xor     esi, esi
		mov     [esp+38h], edi
		cmp     bh, 1
		jne     short ___1e430h
		mov     bl, bh
		jmp     short ___1e432h
___1e430h:
		xor     bl, bl
___1e432h:
		mov     edi, [esp+24h]
		add     ebp, byte 0fh
		add     edi, byte 13h
___1e43ch:
		cmp     bl, 1
		je      short ___1e49ah
		cmp     dword [esp+38h], 0ffh
		je      short ___1e49ah
		cmp     ecx, byte 1
		jne     short ___1e49ah

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     dword [esp+3ch], 0ah
		mov     bl, al
		mov     edx, esi
		mov     eax, esi
		sar     edx, 1fh
		idiv    dword [esp+3ch]
		cmp     edx, ecx
		jne     short ___1e484h
		mov     eax, [___199fa0h]
		mov     edx, 2
		add     eax, byte 6

	push 	ecx
	push 	edx
	push 	eax
		call    ___60b48h
	add 	esp, 8
	pop 	ecx

		mov     [esp+38h], eax
___1e484h:

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
	
		mov     edx, edi
		mov     eax, ebp
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___13bd4h_cdecl
	add 	esp, 8
	pop 	ecx

		inc     esi
		jmp     short ___1e43ch
___1e49ah:
		cmp     bl, 1
		je      short ___1e4a8h
		xor     edx, edx
		xor     eax, eax
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___611c0h
	add 	esp, 8
	pop 	ecx

___1e4a8h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___61278h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     bl, 1
		je      short ___1e4d0h
		mov     edi, ___1866b8h+47eh
		xor     cl, cl
		mov     esi, __dfr_180fech
		mov     [___185b58h+18h], cl

	push 	edx
	push 	ecx
		call    ___1caf4h
	pop 	ecx
	pop 	edx
	
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		jmp     short ___1e4d5h
___1e4d0h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___623d4h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e4d5h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx

		add     esp, byte 44h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1e4e9h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___623d4h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e4eeh:
		add     esp, byte 44h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
__dfr_180ac8h:
	db 	"Press ESC to abort",0,0
__dfr_180fb4h:
	db	4eh,4fh,20h,43h,41h,52h,52h,49h,45h,52h,0,0
__dfr_180fdch:
	db	43h,4fh,4eh,4eh,45h,43h,54h,0
__dfr_180fe4h:
	db	43h,41h,52h,52h,49h,45h,52h,0
__dfr_180fech:
	db	44h,69h,73h,63h,6fh,6eh,6eh,65h,63h,74h,20h,4dh,6fh,64h,65h,6dh,0,0,0,0
__dfr_181000h:
	db	41h,54h,45h,31h,58h,31h,56h,31h,53h,30h,3dh,30h,0,0,0,0
__dfr_181010h:
	db	57h,61h,69h,74h,69h,6eh,67h,20h,66h,6fh,72h,20h,63h,61h,6ch,6ch,2eh,2eh,2eh,0
__dfr_181024h:
	db	52h,49h,4eh,47h,0,0,0,0
__dfr_18102ch:
	db	45h,73h,74h,61h,62h,6ch,69h,73h,68h,69h,6eh,67h,20h,63h,6fh,6eh,6eh,65h,63h,74h,69h,6fh,6eh,0
__dfr_181044h:
	db	41h,54h,41h,0
*/

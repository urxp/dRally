#include "drally.h"

void ___3986ch(void){

	printf("TODO ___3986ch\n");
	exit(1);
/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___196adch
	extern	___1a1138h__VESA101_BACKGROUND
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a0fbch
	extern	___1a0fd8h
	extern	___1a1ef8h
	extern	___1a01e0h
	extern	itoa_watcom106
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___35dd0h
	extern	___1a0f18h
	extern	___1a1168h
	extern	___1de7d0h
	extern	___39634h
	extern	___196ad4h
	extern	___1a2010h
	extern	___18d492h
	extern	___25138h_cdecl
	extern	___38184h_cdecl
	extern	___38708h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___58c60h
	extern	___19eb50h
	extern	__DISPLAY_SET_PALETTE_COLOR
	extern	___2ab50h
	extern	___38768h
	extern	___5994ch
	extern	___36adch
	extern	___1240ch
	extern	___24548h
	extern	___2faf0h
	extern	___24cc54h_sfx_volume
	extern	dRally_Sound_pushEffect
	extern	___196a84h
	extern	___1e4f8h
	extern	CONNECTION_TYPE
	extern	___1e62ch
	extern	___2b318h
	extern	___185a14h_UseWeapons
	extern	___196a80h
	extern	___196a74h

section .text

__GDECL(___3986ch)
		push    8ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 60h
		mov     ecx, 4b000h
		mov     edx, 36h
		mov     eax, [___196adch]
		mov     esi, [___1a1138h__VESA101_BACKGROUND]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     [esp+58h], eax
		call 	__MOVS
		mov     ecx, 182h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fbch]
		add     ebx, 0d32ch
___398c5h:
		mov     edi, edx
___398c7h:
		mov     al, [esi]
		or      al, al
		je      short ___398cfh
		mov     [ebx], al
___398cfh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___398c7h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___398c5h
		mov     ecx, 182h
		mov     edx, 110h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fd8h]
		add     ebx, 0d362h
___398fbh:
		mov     edi, edx
___398fdh:
		mov     al, [esi]
		or      al, al
		je      short ___39905h
		mov     [ebx], al
___39905h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___398fdh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___398fbh
		mov     ecx, 182h
		mov     edx, 110h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fd8h]
		add     ebx, 0d20ah
___39931h:
		mov     edi, edx
___39933h:
		mov     al, [esi]
		or      al, al
		je      short ___3993bh
		mov     [ebx], al
___3993bh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___39933h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___39931h
		mov     edx, [___1a1ef8h]
		mov     edi, esp
		lea     eax, [edx*8+0]
		mov     ebx, 0ah
		sub     eax, edx
		mov     esi, __dfr_182564h
		shl     eax, 2
		movsd   
		movsd   
		movsd   
		movsw   
		sub     eax, edx
		lea     esi, [esp+28h]
		lea     edx, [esp+28h]
		mov     eax, [eax*4+___1a01e0h+50h]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     esi, __dfr_182574h
		mov     edi, esp
		mov     ebx, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     ecx, 46a2eh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 0d738h
		mov     ebx, __dfr_182580h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		xor     edx, edx

	push 	edx
	push 	ecx
		call    ___35dd0h
	pop 	ecx
	pop 	edx

		mov     [esp+5ch], edx
___39a0bh:
		mov     eax, [___196adch]
		mov     ebx, [esp+5ch]
		dec     eax
		cmp     eax, ebx
		jle     near ___39b64h
		mov     esi, [esp+5ch]
		imul    edx, esi, byte 6ch
		lea     eax, [ebx+1]
		imul    ebx, eax, byte 6ch
		mov     edx, [edx+___1a01e0h+58h]
		cmp     edx, [ebx+___1a01e0h+58h]
		jle     near ___39b5bh
		mov     ecx, [___1a1ef8h]
		mov     ebx, eax
		mov     edx, esi
		cmp     ecx, esi
		jne     short ___39a51h
		mov     [___1a1ef8h], eax
		jmp     short ___39a5bh
___39a51h:
		cmp     eax, ecx
		jne     short ___39a5bh
		mov     [___1a1ef8h], esi
___39a5bh:
		imul    eax, edx, byte 6ch
		imul    ebp, ebx, byte 6ch
		mov     ecx, ___1a01e0h
		add     ecx, eax
		mov     edi, ___1a0f18h
		mov     [esp+54h], ecx
		mov     ecx, 6ch
		mov     esi, [esp+54h]
		add     ebp, ___1a01e0h
		call 	__MOVS
		mov     ecx, 6ch
		mov     edi, [esp+54h]
		mov     esi, ebp
		call 	__MOVS
		mov     ecx, 6ch
		mov     esi, ___1a0f18h
		mov     edi, ebp
		call 	__MOVS
		xor     esi, esi
___39ac9h:
		xor     eax, eax
		mov     al, [esi+___1a1168h]
		cmp     eax, edx
		jne     short ___39addh
		mov     [esi+___1a1168h], bl
		jmp     short ___39ae7h
___39addh:
		cmp     eax, ebx
		jne     short ___39ae7h
		mov     [esi+___1a1168h], dl
___39ae7h:
		inc     esi
		cmp     esi, byte 4
		jl      short ___39ac9h
		imul    edx, edx, byte 54h
		imul    ebx, ebx, byte 54h
		mov     ecx, 54h
		add     edx, ___1de7d0h
		mov     edi, ___1a0f18h
		mov     esi, edx
		add     ebx, ___1de7d0h
		call 	__MOVS
		mov     ecx, 54h
		mov     esi, ebx
		mov     edi, edx
		call 	__MOVS
		mov     ecx, 54h
		mov     esi, ___1a0f18h
		mov     edi, ebx
		call 	__MOVS
		xor     esi, esi
		mov     [esp+5ch], esi
		jmp     near ___39a0bh
___39b5bh:
		mov     [esp+5ch], eax
		jmp     near ___39a0bh
___39b64h:
		xor     ecx, ecx
		mov     [esp+5ch], ecx
___39b6ah:
		mov     eax, [___196adch]
		mov     edi, [esp+5ch]
		dec     eax
		cmp     eax, edi
		jle     near ___39cb6h
		lea     eax, [edi+1]
		imul    ebx, edi, byte 6ch
		imul    edx, eax, byte 6ch
		mov     ebx, [ebx+___1a01e0h+44h]
		cmp     ebx, [edx+___1a01e0h+44h]
		jle     near ___39cadh
		mov     ecx, [___1a1ef8h]
		mov     ebx, eax
		mov     edx, edi
		cmp     ecx, edi
		jne     short ___39bach
		mov     [___1a1ef8h], eax
		jmp     short ___39bb6h
___39bach:
		cmp     eax, ecx
		jne     short ___39bb6h
		mov     [___1a1ef8h], edi
___39bb6h:
		imul    ebp, edx, byte 6ch
		mov     ecx, 6ch
		add     ebp, ___1a01e0h
		mov     edi, ___1a0f18h
		mov     esi, ebp
		call 	__MOVS
		imul    eax, ebx, byte 6ch
		mov     ecx, ___1a01e0h
		add     ecx, eax
		mov     edi, ebp
		mov     [esp+54h], ecx
		mov     ecx, 6ch
		mov     esi, [esp+54h]
		call 	__MOVS
		mov     ecx, 6ch
		mov     esi, ___1a0f18h
		mov     edi, [esp+54h]
		call 	__MOVS
		xor     eax, eax
___39c24h:
		movzx   esi, byte [eax+___1a1168h]
		cmp     esi, edx
		jne     short ___39c37h
		mov     [eax+___1a1168h], bl
		jmp     short ___39c41h
___39c37h:
		cmp     esi, ebx
		jne     short ___39c41h
		mov     [eax+___1a1168h], dl
___39c41h:
		inc     eax
		cmp     eax, byte 4
		jl      short ___39c24h
		imul    edx, edx, byte 54h
		mov     ebp, ___1de7d0h
		add     ebp, edx
		imul    edx, ebx, byte 54h
		mov     ecx, 54h
		mov     edi, ___1a0f18h
		mov     esi, ebp
		call 	__MOVS
		mov     ecx, 54h
		add     edx, ___1de7d0h
		mov     edi, ebp
		mov     esi, edx
		call 	__MOVS
		mov     ecx, 54h
		mov     esi, ___1a0f18h
		mov     edi, edx
		call 	__MOVS
		xor     eax, eax
___39cadh:
		mov     [esp+5ch], eax
		jmp     near ___39b6ah
___39cb6h:
		xor     ebp, ebp
		mov     eax, [___196adch]
		mov     [esp+5ch], ebp
		test    eax, eax
		jle     short ___39cf7h
		mov     ebx, [___196adch]
		mov     edx, ebx
		lea     esi, [ebx*8+0]
		sub     esi, ebx
		shl     esi, 2
		sub     esi, ebx
		xor     eax, eax
		shl     esi, 2
___39ce0h:
		mov     ebx, [esp+5ch]
		mov     [eax+___1a01e0h+48h], edx
		add     eax, byte 6ch
		inc     ebx
		dec     edx
		mov     [esp+5ch], ebx
		cmp     eax, esi
		jl      short ___39ce0h
___39cf7h:
		call    near ___39634h
		mov     eax, [___196ad4h]
		xor     edx, edx
		mov     dl, [eax+___1a2010h]
		mov     eax, edx
		mov     esi, ___18d492h
		shl     eax, 4
		mov     edi, esp
		sub     eax, edx
		mov     ebx, 0ah
		add     esi, eax
		lea     edx, [esp+28h]
		call 	__STRCPY
		mov     esi, __dfr_181f50h
		mov     eax, [___196adch]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		lea     esi, [esp+28h]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, __dfr_182628h
		mov     edi, esp
		call 	__STRCAT
		mov     eax, esp

	push 	edx
	push 	ecx
	push 	eax
		call    near ___25138h_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     ebx, esp
		mov     ecx, 0d8eah
		mov     edx, ___185c0bh
		sub     ecx, eax
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		xor     ecx, ecx
		mov     [esp+5ch], ecx
___39deeh:
		mov     eax, [esp+5ch]
		mov     dl, [esp+5ch]
		lea     esi, [eax+1]
		mov     [esp+eax*1+50h], dl
		mov     [esp+5ch], esi
		cmp     esi, byte 4
		jl      short ___39deeh
		xor     ebp, ebp
		mov     eax, [esp+58h]
		mov     [esp+5ch], ebp
		test    eax, eax
		jle     short ___39e6eh
		mov     ebx, [esp+58h]
		xor     eax, eax
___39e1ah:
		cmp     dword [eax+___1de7d0h+0x40], byte 1
		jne     short ___39e2bh
		mov     dl, [esp+5ch]
		mov     [esp+50h], dl
___39e2bh:
		cmp     dword [eax+___1de7d0h+0x40], byte 2
		jne     short ___39e3ch
		mov     dl, [esp+5ch]
		mov     [esp+51h], dl
___39e3ch:
		cmp     dword [eax+___1de7d0h+0x40], byte 3
		jne     short ___39e4dh
		mov     dl, [esp+5ch]
		mov     [esp+52h], dl
___39e4dh:
		cmp     dword [eax+___1de7d0h+0x40], byte 4
		jne     short ___39e5eh
		mov     dl, [esp+5ch]
		mov     [esp+53h], dl
___39e5eh:
		mov     edx, [esp+5ch]
		inc     edx
		add     eax, byte 54h
		mov     [esp+5ch], edx
		cmp     edx, ebx
		jl      short ___39e1ah
___39e6eh:
		lea     edx, [esp+50h]
		mov     ecx, 46b6eh
		mov     eax, [___196adch]
		mov     ebx, __dfr_18250ch
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___38184h_cdecl
	add 	esp, 8
	pop 	ecx
	
	
	push 	edx
	push 	ecx
		call    ___38708h
	pop 	ecx
	pop 	edx
	
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

___39ea1h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     esi, ebp
		xor     edx, edx
		xor     edi, edi
		mov     [esp+5ch], edx
___39eb0h:
		xor     eax, eax
		mov     al, [esp+5ch]
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h+4]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h+8]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax

		call    __DISPLAY_SET_PALETTE_COLOR
		add 	esp, 10h
		
		mov     ebx, [esp+5ch]
		inc     ebx
		add     edi, byte 0ch
		mov     [esp+5ch], ebx
		cmp     ebx, 100h
		jl      near ___39eb0h
		add     ebp, 20000h
		cmp     ebp, 640000h
		jne     near ___39ea1h
___39f52h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
	
	push 	edx
	push 	ecx
		call    ___38768h
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		test    al, al
		je      short ___39f52h
	
	push 	edx
	push 	ecx
		call    ___36adch
	pop 	ecx
	pop 	edx

		call    near ___39634h
	
	push 	edx
	push 	ecx
		call    ___38708h
	pop 	ecx
	pop 	edx
	
		mov     ecx, 46b6eh
		mov     ebx, __dfr_1826a8h
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


	push 	eax
	push 	ecx
	push 	edx
		call    near ___1240ch
	pop 	edx
	pop 	ecx
	pop 	eax
	

	push 	eax
	push 	ecx
	push 	edx
		call    ___24548h
	pop 	edx
	pop 	ecx
	pop 	eax


	push 	eax
	push 	ecx
	push 	edx
		call    near ___2faf0h
	pop 	edx
	pop 	ecx
	pop 	eax

	
	push 	edx
	push 	ecx
		call    ___38708h
	pop 	ecx
	pop 	edx
	
		push    8000h
		mov     edx, 1ch
		mov     esi, 28000h
		mov     eax, 1
		push    esi
		mov     ecx, [___24cc54h_sfx_volume]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		mov     ecx, 46b6eh
		mov     ebx, __dfr_18250ch
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

___39fe7h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
	
	push 	edx
	push 	ecx
		call    ___38768h
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		test    al, al
		je      short ___39fe7h
		mov     edx, [___196a84h]
		xor     edi, edi
		xor     eax, eax
		mov     [esp+5ch], edi
___3a008h:
		cmp     dword [eax+___1de7d0h+0x44], byte 0ffffffffh
		jne     short ___3a036h
		test    edx, edx
		jne     short ___3a036h
		call    near ___1e4f8h
		cmp     dword [CONNECTION_TYPE], byte 2
		je      short ___3a02ah
		xor     eax, eax
		call    near ___1e62ch
___3a02ah:
		mov     dword [___1a1ef8h], 13h
		jmp     short ___3a049h
___3a036h:
		mov     ebx, [esp+5ch]
		inc     ebx
		add     eax, byte 54h
		mov     [esp+5ch], ebx
		cmp     eax, dword 150h
		jl      short ___3a008h
___3a049h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2b318h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     dword [___185a14h_UseWeapons], byte 0
		jne     near ___3a1c7h
		cmp     dword [___196a80h], byte 0
		jne     near ___3a1c7h
		cmp     dword [___196a84h], byte 0
		jne     near ___3a1c7h
		mov     ebp, 640000h
___3a07ah:

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     esi, ebp
		xor     edx, edx
		xor     edi, edi
		mov     [esp+5ch], edx
___3a089h:
		xor     eax, eax
		mov     al, [esp+5ch]
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h+4]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h+8]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax

		call    __DISPLAY_SET_PALETTE_COLOR
		add 	esp, 10h
		
		mov     ebx, [esp+5ch]
		inc     ebx
		add     edi, byte 0ch
		mov     [esp+5ch], ebx
		cmp     ebx, byte 60h
		jl      near ___3a089h
		mov     esi, 80h
		mov     edi, 600h
		mov     [esp+5ch], esi
		mov     esi, ebp
___3a126h:
		xor     eax, eax
		mov     al, [esp+5ch]
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h+4]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h+8]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax

		call    __DISPLAY_SET_PALETTE_COLOR
		add 	esp, 10h
		
		mov     eax, [esp+5ch]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+5ch], eax
		cmp     eax, dword 100h
		jl      near ___3a126h
		sub     ebp, 20000h
		cmp     ebp, 0fffe0000h
		jne     near ___3a07ah
___3a1c7h:
		mov     ebx, 1

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     [___196a74h], ebx
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
__dfr_181f50h:
	db	20h,0,0,0
__dfr_18250ch:
	db 	"Press any key to continue...",0,0,0,0
__dfr_182564h:
	db 	"Status after ",0,0,0
__dfr_182574h:
	db 	" race(s)",0,0,0,0
__dfr_182580h:
	db 	"Multiplayer Ranking",0
__dfr_182628h:
	db 	"-player race:",0,0,0
__dfr_1826a8h:
	db 	"Please wait while loading...",0,0,0,0
*/
}

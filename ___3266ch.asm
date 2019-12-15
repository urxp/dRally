cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern	___1a1028h
	extern	___31588h
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a10e4h__VESA101h_DefaultScreenBufferA
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___30df8h
	extern	___185a3ch
	extern	___185a50h
	extern	___27f80h
	extern	___17248h
	extern	___1a1100h__VESA101h_DefaultScreenBuffer
	extern	___3a6a4h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___17324h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2ab50h
	extern	___3079ch
	extern	___5994ch
	extern	___1854ach
	extern	___24cc54h
	extern	___654d4h
	extern	___281d0h
	extern	___185a44h
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___3174ch
	extern	___185a48h
	extern	___1a1f67h
	extern	___18549ch
	extern	___1a0f98h
	extern	___1a0228h
	extern	itoa_
	extern	___180130h
	extern	___181f50h
	extern	___180724h
	extern	___1a01e0h
	extern	strupr_
	extern	___185c7ah
	extern	___1a10b8h
	extern	___12e78h
	extern	___1a0ef8h
	extern	___1a103ch
	extern	___1a1f68h
	extern	___1a1f69h
	extern	memset_
	extern	___1a0ef9h
	extern	___1a0efah
	extern	___1a0efbh
	extern	___32230h
	extern	___31868h
	extern	___33010h
	extern	___185a20h
	extern	___1854bch
	extern	___13248h
	extern	___1823d4h
	extern	___185ba9h
	extern	___1a10cch
	extern	___180848h
	extern	___185c0bh
	extern	___1a1108h
	extern	___1854a4h
	extern	___2b318h
	extern	___185a14h
	extern	___185a4ch
	extern	___65710h
	extern	___58c60h
	extern	___1a1ef4h
	extern	___658b8h
	extern	___185a28h
	extern	___6563ch
	extern	___12940h
	extern	___3892ch
	extern 	restoreDefaultScreenBuffer

section .text

__GDECL(___3266ch)
		push    90h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 64h
		mov     edx, 0ffffffffh
		mov     ebx, 0b0h
		mov     esi, 840h
		mov     [___1a1028h], edx
		call    near ___31588h
		mov     [esp+5ch], ebx
		mov     edi, 640000h
___326a2h:
		xor     eax, eax
		mov     al, [esp+5ch]
		push    eax
		mov     edx, edi
		mov     eax, [esi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, edi
		mov     eax, [esi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, edi
		mov     eax, [esi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ecx, [esp+5ch]
		inc     ecx
		add     esi, byte 0ch
		mov     [esp+5ch], ecx
		cmp     ecx, 0b7h
		jl      near ___326a2h
		mov     ecx, 4b000h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		call 	__MOVS
		mov     ecx, 28a00h
		mov     eax, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     [___1a112ch__VESA101_ACTIVESCREEN_PTR], eax
		add     esi, 10180h
		lea     edi, [eax+10180h]
		call 	__MOVS
		call    near ___30df8h
		cmp     dword [___185a3ch], byte 0
		jne     short ___327bbh
		mov     edx, [___185a50h]
		lea     eax, [edx*4+0]
		mov     ecx, 84h
		add     eax, edx
		mov     ebx, 94h
		shl     eax, 5
		mov     edx, 76h
		add     eax, byte 16h
		call    near ___27f80h
___327bbh:
		cmp     dword [___185a3ch], byte 0
		je      short ___327c9h
		call    near ___17248h
___327c9h:
		call 	restoreDefaultScreenBuffer
		call    near ___3a6a4h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		cmp     dword [___185a3ch], byte 0
		je      short ___3284bh
		call    near ___17324h
		mov     ecx, 28a00h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10180h
		add     edi, 10180h
		call 	__MOVS
		call    near ___30df8h
		mov     edx, [___185a50h]
		lea     eax, [edx*4+0]
		mov     ebx, 94h
		add     eax, edx
		mov     ecx, 84h
		shl     eax, 5
		mov     edx, 76h
		add     eax, byte 16h
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___3284bh:
		xor     esi, esi
___3284dh:
		call    near ___2ab50h
		call    near ___2ab50h
		mov     eax, 4bh
		call    near ___3079ch
		call    near ___5994ch
		cmp     al, 4dh
		jb      short ___32890h
		jbe     near ___32935h
		cmp     al, 0cbh
		jb      short ___32883h
		jbe     short ___328b0h
		cmp     al, 0cdh
		je      near ___32935h
		jmp     near ___32dddh
___32883h:
		cmp     al, 9ch
		je      near ___329b8h
		jmp     near ___32dddh
___32890h:
		cmp     al, 1ch
		jb      short ___328a3h
		jbe     near ___329b8h
		cmp     al, 4bh
		je      short ___328b0h
		jmp     near ___32dddh
___328a3h:
		cmp     al, 1
		je      near ___32db5h
		jmp     near ___32dddh
___328b0h:
		cmp     dword [___185a50h], byte 0
		jle     near ___32dddh
		push    8000h
		mov     edx, 19h
		mov     ecx, [___1854ach]
		mov     eax, 1
		push    ecx
		xor     ebx, ebx
		mov     ecx, [___24cc54h]
		call    near ___654d4h
		imul    eax, [___185a50h], 0a0h
		mov     ecx, 84h
		mov     ebx, 94h
		mov     edx, 76h
		add     eax, byte 16h
		call    near ___281d0h
		mov     ebp, [___185a50h]
		dec     ebp
		mov     [___185a50h], ebp
		imul    eax, ebp, 0a0h
		mov     ecx, 84h
		mov     ebx, 94h
		mov     edx, 76h
		add     eax, byte 16h
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		jmp     near ___32dddh
___32935h:
		cmp     dword [___185a50h], byte 2
		jge     near ___32dddh
		push    8000h
		mov     edx, 19h
		mov     edi, [___1854ach]
		mov     eax, 1
		push    edi
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
		imul    eax, [___185a50h], 0a0h
		mov     ecx, 84h
		mov     ebx, 94h
		mov     edx, 76h
		add     eax, byte 16h
		call    near ___281d0h
		mov     eax, [___185a50h]
		inc     eax
		mov     [___185a50h], eax
		imul    eax, eax, 0a0h
		mov     ecx, 84h
		mov     ebx, 94h
		mov     edx, 76h
		add     eax, byte 16h
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		jmp     near ___32dddh
___329b8h:
		mov     ebx, [___185a50h]
		cmp     ebx, byte 1
		jne     short ___329efh
		cmp     ebx, [___185a44h]
		jne     short ___329efh
		imul    eax, [___1a1ef8h], byte 6ch
		cmp     dword [eax+___1a01fch], byte 2
		jge     short ___329efh
		xor     eax, eax
		xor     edi, edi
		call    near ___3174ch
		mov     [___185a44h], edi
		jmp     near ___32dddh
___329efh:
		cmp     dword [___185a50h], byte 2
		jne     short ___32a27h
		mov     edx, [___185a48h]
		cmp     edx, byte 1
		jne     short ___32a27h
		imul    eax, [___1a1ef8h], byte 6ch
		cmp     dword [eax+___1a01fch], byte 4
		jge     short ___32a27h
		mov     eax, edx
		xor     ecx, ecx
		call    near ___3174ch
		mov     [___185a48h], ecx
		jmp     near ___32dddh
___32a27h:
		mov     eax, [___185a50h]
		cmp     byte [eax+___1a1f67h], 4
		jae     near ___32d90h
		push    8000h
		mov     edx, 15h
		mov     ebp, [___18549ch]
		mov     eax, 1
		push    ebp
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
		mov     eax, [___185a50h]
		xor     edx, edx
		mov     dl, [eax+___1a1f67h]
		imul    eax, eax, 0a0h
		inc     edx
		imul    edx, edx, byte 12h
		add     edx, 106h
		imul    edx, edx, 280h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, ebx
		mov     ecx, 2
		lea     ebx, [edx+eax*1]
		mov     esi, [___1a0f98h]
		mov     edx, 88h
		add     ebx, byte 1bh
___32a9dh:
		mov     edi, edx
___32a9fh:
		mov     al, [esi]
		or      al, al
		je      short ___32aa7h
		mov     [ebx], al
___32aa7h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___32a9fh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___32a9dh
		imul    eax, [___1a1ef8h], byte 6ch
		mov     ebx, 0ah
		lea     edx, [esp+3ch]
		mov     eax, [eax+___1a0228h]
		call    near itoa_
		mov     al, [___180130h]
		lea     edi, [esp+3ch]
		mov     [esp], al
		call 	__STRLEN
		cmp     ecx, byte 2
		jae     short ___32b16h
		mov     esi, ___181f50h
		mov     edi, esp
		call 	__STRCAT
___32b16h:
		lea     esi, [esp+3ch]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___180724h
		mov     edi, esp
		call 	__STRCAT
		imul    esi, [___1a1ef8h], byte 6ch
		lea     edi, [esp+50h]
		add     esi, ___1a01e0h
		call 	__STRCPY
		lea     eax, [esp+50h]
		lea     esi, [esp+50h]
		mov     edi, esp
		call    near strupr_
		call 	__STRCAT
		mov     eax, [___185a50h]
		xor     edx, edx
		mov     dl, [eax+___1a1f67h]
		imul    eax, eax, 0a0h
		inc     edx
		imul    edx, edx, byte 12h
		add     edx, 100h
		imul    edx, edx, 280h
		add     eax, edx
		mov     ebx, esp
		lea     ecx, [eax+22h]
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]
		call    near ___12e78h
		mov     eax, [___185a50h]
		xor     ebx, ebx
		mov     edx, eax
		mov     bl, [eax+___1a1f67h]
		mov     cl, [___1a1ef8h]
		mov     [___1a1028h], eax
		mov     [ebx+edx*4+___1a0ef8h], cl
		mov     dh, bl
		mov     [___1a103ch], ebx
		inc     dh
		mov     ebx, 3
		mov     [eax+___1a1f67h], dh
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		mov     dl, 4
___32c39h:
		call    near ___2ab50h
		call    near ___2ab50h
		mov     eax, ebx
		call    near ___3079ch
		cmp     dl, [___1a1f67h]
		ja      short ___32c39h
		cmp     dl, [___1a1f68h]
		ja      short ___32c39h
		cmp     dl, [___1a1f69h]
		ja      short ___32c39h
		xor     ecx, ecx
		xor     ebp, ebp
___32c66h:
		mov     ebx, 14h
		lea     eax, [esp+3ch]
		mov     edx, ebp
		call    near memset_
		mov     al, [ecx+___1a0ef8h]
		mov     [esp+50h], al
		mov     al, [ecx+___1a0ef9h]
		mov     [esp+51h], al
		mov     al, [ecx+___1a0efah]
		mov     esi, ebp
		mov     [esp+52h], al
		mov     al, [ecx+___1a0efbh]
		mov     edi, ecx
		mov     [esp+53h], al
___32ca2h:
		xor     eax, eax
___32ca4h:
		xor     edx, edx
		mov     dl, [esp+eax*1+50h]
		inc     eax
		mov     bl, [esp+edx*1+3ch]
		mov     [esp+5ch], edx
		test    bl, bl
		jne     short ___32ca4h
		xor     eax, eax
		mov     al, [esp+51h]
		cmp     eax, edx
		jle     short ___32ccch
		cmp     byte [esp+eax*1+3ch], 0
		jne     short ___32ccch
		mov     [esp+5ch], eax
___32ccch:
		xor     eax, eax
		mov     ebx, [esp+5ch]
		mov     al, [esp+52h]
		cmp     eax, ebx
		jle     short ___32ce5h
		cmp     byte [esp+eax*1+3ch], 0
		jne     short ___32ce5h
		mov     [esp+5ch], eax
___32ce5h:
		xor     eax, eax
		mov     edx, [esp+5ch]
		mov     al, [esp+53h]
		cmp     eax, edx
		jle     short ___32cfeh
		cmp     byte [esp+eax*1+3ch], 0
		jne     short ___32cfeh
		mov     [esp+5ch], eax
___32cfeh:
		mov     eax, [esp+5ch]
		mov     byte [esp+eax*1+3ch], 1
		mov     al, [esp+5ch]
		mov     ebx, [___1a1ef8h]
		mov     [edi+___1a0ef8h], al
		cmp     ebx, [esp+5ch]
		jne     short ___32d23h
		mov     [___1a103ch], esi
___32d23h:
		inc     esi
		inc     edi
		cmp     esi, byte 4
		jl      near ___32ca2h
		add     ecx, byte 4
		cmp     ecx, byte 0ch
		jne     near ___32c66h
		call    near ___32230h
		xor     ecx, ecx
		mov     edx, eax
		mov     [esp+5ch], ecx
		test    eax, eax
		jne     short ___32d52h
		call    near ___31868h
		mov     ecx, eax
___32d52h:
		test    edx, edx
		jne     short ___32d79h
		test    ecx, ecx
		jne     short ___32d79h
___32d5ah:
		mov     esi, [esp+5ch]
		call    near ___2ab50h
		inc     esi
		call    near ___5994ch
		mov     [esp+5ch], esi
		test    al, al
		jne     short ___32d79h
		cmp     esi, 118h
		jl      short ___32d5ah
___32d79h:
		mov     eax, 4
		mov     esi, 1
		call    near ___33010h
		mov     [___185a20h], esi
		jmp     short ___32dddh
___32d90h:
		push    8000h
		mov     edx, 1dh
		mov     edi, [___1854bch]
		mov     eax, 1
		push    edi
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
		jmp     short ___32dddh
___32db5h:
		mov     dl, 4
		mov     ebx, 1
___32dbch:
		mov     eax, ebx
		call    near ___3079ch
		cmp     dl, [___1a1f67h]
		ja      short ___32dbch
		cmp     dl, [___1a1f68h]
		ja      short ___32dbch
		cmp     dl, [___1a1f69h]
		ja      short ___32dbch
		xor     esi, esi
___32dddh:
		test    esi, esi
		jne     near ___32feeh
		mov     bh, [___1a1f67h]
		cmp     bh, 4
		jne     near ___32feeh
		cmp     bh, [___1a1f68h]
		jne     near ___32feeh
		cmp     bh, [___1a1f69h]
		jne     near ___32feeh
		push    byte 1
		mov     ecx, 70h
		mov     ebx, 244h
		mov     edx, 0c8h
		mov     eax, 21h
		call    near ___13248h
		mov     ecx, 232b0h
		mov     ebx, ___1823d4h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     ecx, 28d50h
		mov     ebx, ___180848h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		push    8000h
		mov     eax, [___1854a4h]
		mov     edx, 17h
		sub     eax, 1000h
		mov     ecx, [___24cc54h]
		push    eax
		xor     ebx, ebx
		mov     eax, 1
		call    near ___654d4h
___32e85h:
		call    near ___2ab50h
		call    near ___5994ch
		test    al, al
		je      short ___32e85h
		call    near ___2b318h
		mov     eax, 0ffdch
		mov     ebp, 640000h
		mov     [esp+60h], eax
___32ea6h:
		cmp     dword [___185a14h], byte 0
		je      short ___32ec1h
		cmp     dword [___185a4ch], byte 0
		je      short ___32ec1h
		mov     eax, [esp+60h]
		call    near ___65710h
___32ec1h:
		call    near ___58c60h
		mov     esi, ebp
		xor     ecx, ecx
		xor     edi, edi
		mov     [esp+5ch], ecx
___32ed0h:
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
		mov     eax, [edi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     eax, [esp+5ch]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+5ch], eax
		cmp     eax, dword 100h
		jl      near ___32ed0h
		mov     ebx, [esp+60h]
		sub     ebx, 51eh
		sub     ebp, 20000h
		mov     [esp+60h], ebx
		cmp     ebp, 0fffe0000h
		jne     near ___32ea6h
		cmp     dword [___185a14h], byte 0
		je      short ___32fadh
		cmp     dword [___185a4ch], byte 0
		je      short ___32fadh
		mov     eax, [___1a1ef4h]
		mov     edi, 1
		call    near ___658b8h
		mov     eax, edi
		mov     [___185a28h], edi
		call    near ___6563ch
___32fadh:
		xor     ebp, ebp
		call    near ___12940h
		mov     [esp+5ch], ebp
		xor     esi, esi
___32fbah:
		xor     eax, eax
		mov     al, [esp+5ch]
		push    eax
		push    esi
		push    esi
		push    esi
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     eax, [esp+5ch]
		inc     eax
		mov     [esp+5ch], eax
		cmp     eax, dword 100h
		jl      short ___32fbah
		mov     eax, 1
		mov     esi, 1
		call    near ___3892ch
		mov     [___185a20h], esi
___32feeh:
		test    esi, esi
		je      near ___3284dh
		add     esp, byte 64h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

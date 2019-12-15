cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern	___180130h
	extern	___1a214ah
	extern	___1a0d60h
	extern	___1828b0h
	extern	GET_FILE_SIZE
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___2b318h
	extern	___58c60h
	extern	___13a98h
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___1828c8h
	extern	___1828d4h
	extern	___3d9c0h
	extern	___1828e0h
	extern	___1828ech
	extern	___1828f8h
	extern	___182904h
	extern	___182910h
	extern	___18291ch
	extern	___182928h
	extern	___182934h
	extern	___18286ch
	extern	___182860h
	extern	___182884h
	extern	___182878h
	extern	___182824h
	extern	___182818h
	extern	___18283ch
	extern	___182830h
	extern	___182854h
	extern	___182848h
	extern	___1828a0h
	extern	___182890h
	extern	___649a8h
	extern	___64a28h
	extern	___181c90h
	extern	___1828bch
	extern	___10b80h
	extern	___181c9ch
	extern	___181ca8h
	extern	___64864h
	extern	___24cc58h
	extern	___6572ch
	extern	___24cc54h
	extern	___65770h
	extern	___658b8h
	extern	___65990h
	extern	___648d8h
	extern	___659b8h
	extern	___606dfh
	extern	___605deh
	extern	___59e11h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern 	VESA101_SETMODE

section .text

__GDECL(___3da48h)
		push    0a0h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 74h
		mov     al, [___180130h]
		mov     [esp], al
		cmp     byte [___1a214ah], 2
		jne     short ___3da95h
		mov     esi, ___1a0d60h
		mov     edi, esp
		call 	__STRCAT
___3da95h:
		mov     esi, ___1828b0h
		mov     edi, esp
		call 	__STRCAT
		mov     eax, esp
		call    near GET_FILE_SIZE
		test    eax, eax
		setg    al
		mov     ecx, 4b000h
		mov     ebp, 32h
		mov     edx, 640000h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		and     eax, 0ffh
		mov     edi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     [esp+6ch], eax
		call 	__MOVS
		call    near ___2b318h
		mov     [esp+70h], edx
___3db07h:
		call    near ___58c60h
		mov     esi, 2
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    esi
		test    edx, edx
		je      short ___3db25h
		xor     eax, eax
		call    near ___13a98h
___3db25h:
		mov     esi, [esp+70h]
		xor     ecx, ecx
		xor     edi, edi
		mov     [esp+64h], ecx
___3db31h:
		xor     eax, eax
		mov     al, [esp+64h]
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
		mov     ebx, [esp+64h]
		inc     ebx
		add     edi, byte 0ch
		mov     [esp+64h], ebx
		cmp     ebx, 100h
		jl      near ___3db31h
		mov     ebx, [esp+70h]
		sub     ebx, 20000h
		dec     ebp
		mov     [esp+70h], ebx
		test    ebp, ebp
		jge     near ___3db07h
		mov     esi, 0ah
		mov     ebp, 2
		xor     edi, edi
___3dbe4h:
		mov     edx, ___1828c8h
		mov     eax, ___1828d4h
		mov     ebx, esi
		call    near ___3d9c0h
		test    eax, eax
		jne     near ___3ddach
		mov     edx, ___1828e0h
		mov     eax, ___1828ech
		mov     ebx, esi
		call    near ___3d9c0h
		test    eax, eax
		jne     near ___3ddach
		mov     edx, ___1828f8h
		mov     eax, ___182904h
		mov     ebx, esi
		call    near ___3d9c0h
		test    eax, eax
		jne     near ___3ddach
		mov     edx, ___182910h
		mov     eax, ___18291ch
		mov     ebx, esi
		call    near ___3d9c0h
		test    eax, eax
		jne     near ___3ddach
		mov     edx, ___182928h
		mov     eax, ___182934h
		mov     ebx, esi
		call    near ___3d9c0h
		test    eax, eax
		jne     near ___3ddach
		mov     edx, ___18286ch
		mov     eax, ___182860h
		mov     ebx, esi
		call    near ___3d9c0h
		test    eax, eax
		jne     near ___3ddach
		mov     edx, ___182884h
		mov     eax, ___182878h
		mov     ebx, esi
		call    near ___3d9c0h
		test    eax, eax
		jne     near ___3ddach
		mov     edx, ___182824h
		mov     eax, ___182818h
		mov     ebx, ebp
		call    near ___3d9c0h
		test    eax, eax
		jne     near ___3ddach
		mov     edx, ___18283ch
		mov     eax, ___182830h
		mov     ebx, ebp
		call    near ___3d9c0h
		test    eax, eax
		jne     near ___3ddach
		mov     edx, ___182854h
		mov     eax, ___182848h
		mov     ebx, ebp
		call    near ___3d9c0h
		test    eax, eax
		jne     near ___3ddach
		mov     edx, ___1828a0h
		mov     eax, ___182890h
		mov     ebx, esi
		call    near ___3d9c0h
		test    eax, eax
		jne     near ___3ddach
		cmp     dword [esp+6ch], byte 1
		jne     near ___3dd9fh
		call    near ___649a8h
		call    near ___64a28h
		push    byte 78h
		push    byte 1
		mov     ebx, ___181c90h
		mov     edx, 1
		push    ___1828bch
		mov     eax, ___1828b0h
		mov     ecx, ebp
		call    near ___10b80h
		call    near ___649a8h
		call    near ___64a28h
		push    byte 5
		mov     ecx, ___181c9ch
		mov     edx, ___181ca8h
		mov     eax, 1
		mov     ebx, ebp
		call    near ___64864h
		mov     eax, [___24cc58h]
		call    near ___6572ch
		mov     eax, [___24cc54h]
		call    near ___65770h
		mov     eax, 2d00h
		call    near ___658b8h
		mov     eax, 5622h
		call    near ___65990h
		call    near ___648d8h
		mov     eax, 1
		call    near ___659b8h
		call    near ___606dfh
		call 	VESA101_SETMODE
		mov     eax, 3ch
		;mov     ebx, edi
		mov     edx, edi
		call    near ___605deh
___3dd9fh:
		cmp     byte [___59e11h], 1
		jne     near ___3dbe4h
___3ddach:
		call    near ___2b318h
		mov     ecx, 4b000h
		mov     esi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		call 	__MOVS
		xor     ebp, ebp
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		mov     [esp+68h], ebp
___3ddddh:
		call    near ___58c60h
		mov     esi, 2
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    esi
		test    edx, edx
		je      short ___3ddfbh
		xor     eax, eax
		call    near ___13a98h
___3ddfbh:
		xor     esi, esi
		xor     edi, edi
		mov     [esp+64h], esi
		mov     esi, [esp+68h]
___3de07h:
		xor     eax, eax
		mov     al, [esp+64h]
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
		mov     eax, [esp+64h]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+64h], eax
		cmp     eax, dword 100h
		jl      near ___3de07h
		mov     edx, [esp+6ah]
		add     edx, byte 2
		inc     ebp
		mov     [esp+6ah], dx
		cmp     ebp, byte 32h
		jl      near ___3ddddh
		add     esp, byte 74h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

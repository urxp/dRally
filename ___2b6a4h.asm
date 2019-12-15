cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___19bd60h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a10bch
	extern	___1a10e8h
	extern	___25330h
	extern	___185a3ch
	extern	___196a98h
	extern	___196a9ch
	extern	___196aa0h
	extern	___196aa4h
	extern	___196aa8h
	extern	___1a1ef8h
	extern	___1a0218h
	extern	___27f80h
	extern	___25a74h
	extern	___25e40h
	extern	___262b4h
	extern	___26650h
	extern	___269e4h
	extern	___26e54h

section .text

__GDECL(___2b6a4h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		cmp     dword [___19bd60h], byte 0
		jne     short ___2b6d4h
		mov     ecx, 10h
		mov     edx, 280h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10bch]
		jmp     short ___2b6eah
___2b6d4h:
		mov     ecx, 10h
		mov     edx, 280h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10e8h]
___2b6eah:
		add     ebx, 0e600h
___2b6f0h:
		mov     edi, edx
___2b6f2h:
		mov     al, [esi]
		or      al, al
		je      short ___2b6fah
		mov     [ebx], al
___2b6fah:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___2b6f2h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___2b6f0h
		call    near ___25330h
		cmp     dword [___185a3ch], byte 0
		jne     short ___2b77ch
		cmp     dword [___196a98h], byte 3
		je      short ___2b77ch
		cmp     dword [___196a9ch], byte 1
		je      short ___2b77ch
		cmp     dword [___196aa0h], byte 1
		je      short ___2b77ch
		cmp     dword [___196aa4h], byte 0
		jne     short ___2b77ch
		cmp     dword [___196aa8h], byte 0
		jne     short ___2b77ch
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a0218h], byte 4
		je      short ___2b77ch
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 1aah
		call    near ___27f80h
___2b77ch:
		call    near ___25a74h
		call    near ___25e40h
		call    near ___262b4h
		call    near ___26650h
		call    near ___269e4h
		call    near ___26e54h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

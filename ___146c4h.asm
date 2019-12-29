cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___196a84h
	extern 	___2ab50h
	extern 	___13a98h
	extern 	___5994ch
	extern 	___3da48h
	extern 	___185a5ch
	extern 	___185a74h
	extern 	___13cech
	extern 	___1854ach
	extern 	___24cc54h
	extern 	___1854a0h
	extern 	___1854b8h
	extern 	___19bd60h
	extern 	___23758h
	extern 	___14010h
	extern 	___14368h
	extern 	dRally_Audio_playSoundEffect

section .text

__GDECL(___146c4h)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     esi, eax
		lea     edx, [eax*8+0]
		sub     edx, eax
		mov     ebp, 0fffffffeh
		shl     edx, 2
		xor     edi, edi
		mov     [esp], edx
___146efh:
		mov     edx, [___196a84h]
		test    edx, edx
		jne     near ___148b2h
		call    near ___2ab50h
		call    near ___2ab50h
		mov     eax, esi
		call    near ___13a98h
		call    near ___5994ch
		mov     dl, al
		test    esi, esi
		jne     short ___14731h
		test    edx, edx
		jne     short ___14720h
		inc     edi
		jmp     short ___14722h
___14720h:
		xor     edi, edi
___14722h:
		cmp     edi, 708h
		jle     short ___14731h
		call    near ___3da48h
		xor     edi, edi
___14731h:
		cmp     edx, byte 3bh
		jl      short ___1478ah
		jle     near ___14848h
		cmp     edx, 9ch
		jl      short ___1476dh
		jle     near ___1481fh
		cmp     edx, 0c8h
		jl      near ___148a9h
		jle     near ___14858h
		cmp     edx, 0d0h
		je      near ___1487fh
		jmp     near ___148a9h
___1476dh:
		cmp     edx, byte 48h
		jl      near ___148a9h
		jle     near ___14858h
		cmp     edx, byte 50h
		je      near ___1487fh
		jmp     near ___148a9h
___1478ah:
		cmp     edx, byte 1
		jl      near ___148a9h
		jle     short ___147aeh
		cmp     edx, byte 1ch
		jl      near ___148a9h
		jle     near ___1481fh
		cmp     edx, byte 39h
		je      short ___1481fh
		jmp     near ___148a9h
___147aeh:
		test    esi, esi
		jne     short ___147f7h
		mov     edx, [esp]
		mov     ecx, [esp]
		mov     edx, [edx+___185a5ch]
		mov     eax, [ecx+___185a74h]
		dec     edx
		cmp     edx, eax
		je      near ___148a9h
		mov     eax, esi
		call    near ___13cech
		xor     ebx, ebx
		push    8000h
		mov     edx, [___1854ach]
		mov     eax, 1
		push    edx
		mov     ecx, [___24cc54h]
		mov     edx, 19h
		jmp     near ___148a4h
___147f7h:
		push    8000h
		mov     edx, 16h
		mov     eax, 1
		mov     ebx, [___1854a0h]
		mov     ecx, [___24cc54h]
		push    ebx
		xor     ebx, ebx
		mov     ebp, 0ffffffffh
		jmp     near ___148a4h
___1481fh:
		mov     ebp, [esp]
		push    8000h
		mov     eax, 1
		mov     edx, [___1854b8h]
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		push    edx
		mov     edx, 1ch
		mov     ebp, [ebp+___185a74h]
		jmp     short ___148a4h
___14848h:
		cmp     dword [___19bd60h], byte 0
		je      short ___148a9h
		call    near ___23758h
		jmp     short ___148a9h
___14858h:
		mov     eax, esi
		mov     edx, 19h
		call    near ___14010h
		push    8000h
		mov     ecx, [___1854ach]
		xor     ebx, ebx
		push    ecx
		mov     eax, 1
		mov     ecx, [___24cc54h]
		jmp     short ___148a4h
___1487fh:
		mov     eax, esi
		mov     edx, 19h
		call    near ___14368h
		push    8000h
		mov     ebx, [___1854ach]
		mov     eax, 1
		push    ebx
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
___148a4h:
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
___148a9h:
		cmp     ebp, byte 0fffffffeh
		je      near ___146efh
___148b2h:
		cmp     dword [___196a84h], byte 0
		je      short ___148c0h
		mov     ebp, 0ffffffffh
___148c0h:
		mov     eax, ebp
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

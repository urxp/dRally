cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___13248h
	extern 	___19bd60h
	extern 	___194f80h
	extern 	___13094h
	extern 	___194fd0h
	extern 	___195020h
	extern 	___195070h
	extern 	___1950c0h
	extern 	___195110h
	extern 	___195160h
	extern 	___1951b0h
	extern 	___195200h
	extern 	___195250h
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a1e84h
	extern 	___1952a0h
	extern 	___1952d2h
	extern 	___195304h
	extern 	___195336h
	extern 	___195368h
	extern 	___19539ah
	extern 	___1953cch
	extern 	___1953feh
	extern 	___195430h
	extern 	___195462h
	extern 	___180694h
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h
	extern 	___199f54h
	extern 	kmap

section .text

__GDECL(___165ach)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, 83h
		push    byte 1
		mov     ecx, 0e6h
		mov     ebx, 1e2h
		mov     eax, 21h
		mov     edx, ebp
		call    near ___13248h
		cmp     dword [___19bd60h], byte 0
		jne     near ___1667ch
		mov     edx, 160bch
		mov     eax, ___194f80h
		call    near ___13094h
		mov     edx, 188bch
		mov     eax, ___194fd0h
		call    near ___13094h
		mov     edx, 1b0bch
		mov     eax, ___195020h
		call    near ___13094h
		mov     edx, 1d8bch
		mov     eax, ___195070h
		call    near ___13094h
		mov     edx, 200bch
		mov     eax, ___1950c0h
		call    near ___13094h
		mov     edx, 228bch
		mov     eax, ___195110h
		call    near ___13094h
		mov     edx, 250bch
		mov     eax, ___195160h
		call    near ___13094h
		mov     edx, 278bch
		mov     eax, ___1951b0h
		call    near ___13094h
		mov     edx, 2a0bch
		mov     eax, ___195200h
		call    near ___13094h
		mov     edx, 2c8bch
		mov     eax, ___195250h
		jmp     near ___16743h
___1667ch:
		mov     ecx, 80h
		mov     edx, 68h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e84h]
		add     ebx, 1a42dh
___16698h:
		mov     edi, edx
___1669ah:
		mov     al, [esi]
		or      al, al
		je      short ___166a2h
		mov     [ebx], al
___166a2h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___1669ah
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___16698h
		mov     edx, 154a1h
		mov     eax, ___1952a0h
		call    near ___13094h
		mov     edx, 17ca1h
		mov     eax, ___1952d2h
		call    near ___13094h
		mov     edx, 1a4a1h
		mov     eax, ___195304h
		call    near ___13094h
		mov     edx, 1cca1h
		mov     eax, ___195336h
		call    near ___13094h
		mov     edx, 1f4a1h
		mov     eax, ___195368h
		call    near ___13094h
		mov     edx, 21ca1h
		mov     eax, ___19539ah
		call    near ___13094h
		mov     edx, 244a1h
		mov     eax, ___1953cch
		call    near ___13094h
		mov     edx, 26ca1h
		mov     eax, ___1953feh
		call    near ___13094h
		mov     edx, 294a1h
		mov     eax, ___195430h
		call    near ___13094h
		mov     edx, 2bca1h
		mov     eax, ___195462h
___16743h:
		call    near ___13094h
		lea     edx, [ebp+0b9h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, ___180694h
		lea     ecx, [eax+0c0h]
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		xor     ebx, ebx
		xor     ah, ah
		mov     [___199f54h], ebx
		mov     [kmap+1ch], ah
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

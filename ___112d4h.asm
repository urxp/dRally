cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	___196a8ch__VGATYPE

section .text

__GDECL(___112d4h__VGA_GETTYPE)
	retn
		push    1a8h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, 190h
		mov     edx, [___196a8ch__VGATYPE]
		mov     ecx, 190h
		mov     esi, 0c0000h
		mov     edi, esp
		call 	__MOVS
		xor     eax, eax
___1130dh:
		mov     dl, [esp+eax*1]
		cmp     dl, 60h
		jbe     short ___11322h
		cmp     dl, 84h
		jae     short ___11322h
		mov     bl, dl
		sub     bl, 20h
		mov     [esp+eax*1], bl
___11322h:
		inc     eax
		cmp     eax, dword 190h
		jl      short ___1130dh
		xor     eax, eax
		xor     edx, edx
___1132eh:
		cmp     byte [esp+eax*1], 43h
		jne     short ___1135dh
		cmp     byte [esp+eax*1+1], 49h
		jne     short ___1135dh
		mov     ch, [esp+eax*1+2]
		cmp     ch, 52h
		jne     short ___1135dh
		cmp     ch, [esp+eax*1+3]
		jne     short ___1135dh
		cmp     byte [esp+eax*1+4], 55h
		jne     short ___1135dh
		cmp     byte [esp+eax*1+5], 53h
		jne     short ___1135dh
		mov     edx, 2
___1135dh:
		inc     eax
		cmp     eax, dword 190h
		jl      short ___1132eh
		mov     [___196a8ch__VGATYPE], edx
		add     esp, 190h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

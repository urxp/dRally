cpu 386

	extern	__int7
	extern	_dos_setvect

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __hook387
__hook387:
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    es
		push    ebp
		push    edx
		mov     ebp, eax
		mov     ax, 1600h
		int     2fh
		test    al, al
		je      short dr@7b7beh
		and     eax, 0ffh
		cmp     eax, dword 80h
		je      short dr@7b7beh
		xor     ebx, ebx
		xor     ecx, ecx
		xor     edx, edx
		xor     al, al
		mov     ah, 0fah
		int     2fh
		cwde    
		cmp     eax, dword 666h
		jne     short dr@7b7beh
		mov     al, 22h
		xor     ebx, ebx
		xor     ecx, ecx
		xor     edx, edx
		mov     ah, 0fah
		int     2fh
		test    ax, ax
		jne     short dr@7b7beh
		mov     dh, 1
		mov     al, 1eh
		xor     ebx, ebx
		xor     ecx, ecx
		mov     [_has_wgod_emu], dh
		xor     edx, edx
		mov     ah, 0fah
		int     2fh
		;mov     eax, cs
		db	8ch,0c8h
		mov     ebx, _FPArea
		mov     edx, eax
		mov     ecx, ebx
		mov     al, 20h
		shr     ecx, 10h
		mov     ah, 0fah
		int     2fh
		mov     al, 1
		jmp     short dr@7b818h
dr@7b7beh:
		mov     edx, [esp]
		test    ebp, ebp
		jne     short dr@7b7cah
		test    dx, dx
		je      short dr@7b816h
dr@7b7cah:
		mov     eax, 0a00h
		mov     esi, L$7
		push    es
		int     31h
		sbb     eax, eax
		pop     es
		test    eax, eax
		jne     short dr@7b816h
		mov     ebx, __int7
		mov     eax, 7
		;mov     ecx, cs
		db	8ch,0c9h
		call    near _dos_setvect
		;mov     es, [esp]
		db	8eh,4,24h
		mov     ah, [es:ebp+40h]
		mov     byte [es:ebp+3eh], 1
		or      ah, 4
		mov     [es:ebp+40h], ah
		mov     eax, cr0
		or      al, 4
		mov     dl, 1
		mov     cr0, eax
		mov     ah, 30h
		int     21h
		mov     [_hooked], dl
dr@7b816h:
		xor     al, al
dr@7b818h:
		add     esp, byte 4
		pop     ebp
		pop     es
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn  
global __unhook387  
__unhook387:
		push    ebx
		push    ecx
		push    es
		;mov     es, edx
		db	8eh,0c2h
		mov     dl, [_has_wgod_emu]
		test    dl, dl
		je      short dr@7b851h
		;mov     eax, cs
		db	8ch,0c8h
		mov     edx, eax
		xor     ebx, ebx
		xor     ecx, ecx
		mov     al, 21h
		mov     ah, 0fah
		int     2fh
		mov     al, 1fh
		xor     ebx, ebx
		xor     ecx, ecx
		xor     edx, edx
		mov     ah, 0fah
		int     2fh
		mov     al, 1
		pop     es
		pop     ecx
		pop     ebx
		retn    
dr@7b851h:
		cmp     byte [_hooked], 0
		je      short dr@7b875h
		mov     bl, [es:eax+40h]
		mov     [es:eax+3eh], dl
		and     bl, 0fbh
		mov     [es:eax+40h], bl
		mov     eax, cr0
		and     al, 0fbh
		mov     cr0, eax
		mov     ah, 30h
		int     21h
dr@7b875h:
		xor     al, al
		pop     es
		pop     ecx
		pop     ebx
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
L$7:
    db  "RATIONAL DOS/4G",0

SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
global _hooked
_hooked:
    db	0
global _has_wgod_emu
_has_wgod_emu:
    db	0

SEGMENT _BSS    PUBLIC USE32 ALIGN=4 CLASS=BSS
global _FPArea
_FPArea:
    resb    80h
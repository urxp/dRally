cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___12200h
	extern 	___12a54h
	extern 	___24ec0h
	extern 	___2fc50h
	extern 	___64a28h_cdecl
	extern 	dRally_System_clean
	extern 	___5a101h
	extern 	VGA3_SETMODE
	extern 	___199fbch
	extern 	___18015ch
	extern 	___1801a8h
	extern 	___1801dch
	extern 	___18020ch
	extern 	___180238h
	extern 	___180268h
	extern 	printf_
	extern 	___180290h
	extern 	exit_

section .text

___11228h:
dd	___11286h
dd	___1128dh
dd	___11294h
dd	___1129bh
dd	___112a2h
__GDECL(___1123ch)
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		call    near ___12200h
		call    near ___12a54h
		call    near ___24ec0h
		call    near ___2fc50h
	push 	eax
	push 	ecx
	push 	edx
		call    near ___64a28h_cdecl
	pop 	edx
	pop 	ecx
	pop 	eax

	push 	eax
	push 	ecx
	push 	edx
		call    dRally_System_clean
	pop 	edx
	pop 	ecx
	pop 	eax
	
		call    near ___5a101h
		call    near VGA3_SETMODE
		mov     eax, [___199fbch]
		sub     eax, byte 64h
		cmp     eax, byte 4
		ja      short ___112a9h
		jmp     near dword [cs:eax*4+___11228h]
___11286h:
		push    ___18015ch
		jmp     short ___112aeh
___1128dh:
		push    ___1801a8h
		jmp     short ___112aeh
___11294h:
		push    ___1801dch
		jmp     short ___112aeh
___1129bh:
		push    ___18020ch
		jmp     short ___112aeh
___112a2h:
		push    ___180238h
		jmp     short ___112aeh
___112a9h:
		push    ___180268h
___112aeh:
		call    near printf_
		add     esp, byte 4
		push    ___180290h
		call    near printf_
		add     esp, byte 4
		mov     eax, 70h
		call    near exit_
		pop     edx
		pop     ecx
		pop     ebx
		retn    

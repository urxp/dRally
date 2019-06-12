%include "macros.inc"

	extern 	__CHK
	extern 	__CEXT_F(chkgx__video)
	extern 	__CEXT_F(setbank__video)

%include 'layout.inc'

section @text

__GDECL(__CEXT_F(chkbankswitch__video))
		push    4
		call    __CHK
		call    __CEXT_F(chkgx__video)
		xor     eax, eax
		call    __CEXT_F(setbank__video)
		mov     eax, 0a0000h
		mov     byte [eax], 0
		mov     eax, 1
		call    __CEXT_F(setbank__video)
		mov     eax, 0a0000h
		mov     byte [eax], 0
		xor     eax, eax
		call    __CEXT_F(setbank__video)
		mov     eax, 0a0000h
		mov     byte [eax], 1
		mov     eax, 1
		call    __CEXT_F(setbank__video)
		mov     eax, 0a0000h
		cmp     byte [eax], 1
		jne     ___12c91h
		mov     eax, 1
		retn    
___12c91h:
		xor     eax, eax
		call    __CEXT_F(setbank__video)
		mov     eax, 0a0000h
		mov     byte [eax], 0
		mov     eax, 1
		call    __CEXT_F(setbank__video)
		mov     eax, 0a0000h
		mov     byte [eax], 0
		xor     eax, eax
		retn

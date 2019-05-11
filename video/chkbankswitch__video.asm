
	extern 	__CHK
	extern 	chkgx__video
	extern 	setbank__video

%include 'layout.inc'

section @text

global chkbankswitch__video
chkbankswitch__video:
		push    4
		call    __CHK
		call    chkgx__video
		xor     eax, eax
		call    setbank__video
		mov     eax, 0a0000h
		mov     byte [eax], 0
		mov     eax, 1
		call    setbank__video
		mov     eax, 0a0000h
		mov     byte [eax], 0
		xor     eax, eax
		call    setbank__video
		mov     eax, 0a0000h
		mov     byte [eax], 1
		mov     eax, 1
		call    setbank__video
		mov     eax, 0a0000h
		cmp     byte [eax], 1
		jne     ___12c91h
		mov     eax, 1
		retn    
___12c91h:
		xor     eax, eax
		call    setbank__video
		mov     eax, 0a0000h
		mov     byte [eax], 0
		mov     eax, 1
		call    setbank__video
		mov     eax, 0a0000h
		mov     byte [eax], 0
		xor     eax, eax
		retn

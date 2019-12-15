cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___180004h
	extern 	printf_

section .text

__GDECL(___10060h)
		push    0ch
		call    near __CHK
		push    ___180004h
		call    near printf_
		add     esp, byte 4
		retn    

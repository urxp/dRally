cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___19bd54h
	extern 	___19bd20h
	extern 	___10060h
	extern 	___5eb70h
	extern 	___60466h
	extern 	___2432c8h
	extern 	___5a0c2h
	extern 	___3e720h
	extern 	___5a101h
	extern 	___19bd60h
	extern 	___623d4h
	extern 	___5ec04h
	extern 	___10110h
	extern 	___1800f0h
	extern 	___1800f8h
	extern 	bpa_read
	extern 	___100dch
	extern 	VGA3_PRESENTSCREEN

section .text

___1018ch:
__GDECL(main_)
		push    8
		call    __CHK
		push    ebx
		mov     [___19bd54h], eax
		xor     eax, eax
___1019eh:
		inc     eax
		mov     ebx, [edx]
		add     edx, byte 4
		mov     [eax*4+___19bd20h-4], ebx
		cmp     eax, byte 0ah
		jl      ___1019eh
		call    ___10060h
		call    ___5eb70h
		mov 	edx, 1
		mov     eax, 46h
___101e6h:
		call    ___60466h
		mov     dword [___2432c8h], ___100dch
		call    ___5a0c2h
		call    ___3e720h
		call    ___5a101h
		cmp     dword [___19bd60h], byte 0
		je      ___10212h
		call    ___623d4h
___10212h:
		call    ___5ec04h
		call    ___10110h
		;mov     ebx, ___1800f0h
		;mov     edx, B8000
		;mov     eax, ___1800f8h
		;call    bpa_read
		;call 	VGA3_PRESENTSCREEN
		pop     ebx
		retn    

section .bss
__GDECL(B8000)
	resb 	8000h

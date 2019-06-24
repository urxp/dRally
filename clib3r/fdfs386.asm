%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(__FDFS)
		push    ebx
		test    edx, 7ff00000h
		je      ___7820eh
		sub     ebx, ebx
		add     eax, eax
		adc     edx, edx
		rcr     ebx, 1
		add     eax, 20000000h
		adc     edx, byte 0
		je      ___78205h
		cmp     edx, 8fe00000h
		jae     ___78205h
		cmp     edx, 70200000h
		jb      ___7820eh
		sub     edx, 70000000h
		add     eax, eax
		adc     edx, edx
		add     eax, eax
		adc     edx, edx
		or      edx, ebx
		mov     eax, edx
		pop     ebx
		retn    
___78205h:
		mov     eax, 7f800000h
		or      eax, ebx
		pop     ebx
		retn    
___7820eh:
		sub     eax, eax
		pop     ebx
		retn    

cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __FDFS
__FDFS:
		push    ebx
		test    edx, 7ff00000h
		je      short dr@7820eh
		sub     ebx, ebx
		add     eax, eax
		adc     edx, edx
		rcr     ebx, 1
		add     eax, 20000000h
		adc     edx, byte 0
		je      short dr@78205h
		cmp     edx, 8fe00000h
		jae     short dr@78205h
		cmp     edx, 70200000h
		jb      short dr@7820eh
		sub     edx, 70000000h
		add     eax, eax
		adc     edx, edx
		add     eax, eax
		adc     edx, edx
		or      edx, ebx
		mov     eax, edx
		pop     ebx
		retn    
dr@78205h:
		mov     eax, 7f800000h
		or      eax, ebx
		pop     ebx
		retn    
dr@7820eh:
		sub     eax, eax
		pop     ebx
		retn
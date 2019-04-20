cpu 386

	extern	__math1err
	extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __log87_err
__log87_err:
		push    ebp
		mov     ebp, esp
		push    eax
		push    ebx
		push    edx
		mov     eax, [ebp+10h]
		and     eax, byte 1fh
		cmp     eax, byte 8
		je      short dr@7e35eh
		mov     edx, [ebp+0ch]
		mov     ebx, [ebp+8]
		test    edx, 7fffffffh
		jne     short dr@7e35eh
		test    ebx, ebx
		jne     short dr@7e35eh
		or      ax, 1080h
		jmp     short dr@7e362h
dr@7e35eh:
		or      ax, 1040h
dr@7e362h:
		lea     edx, [ebp+8]
		call    near __math1err
		pop     edx
		pop     ebx
		pop     eax
		pop     ebp
		ret     0ch
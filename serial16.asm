cpu 386
bits 16

___80000h:
		push    ds
		push    es
		pusha   
		mov     al, 20h
		out     20h, al
___80007h:
		mov     dx, [cs:0]
		add     dx, byte 2
		in      al, dx
		test    al, 1
		je      short ___80017h
		jmp     near ___800b7h
___80017h:
		mov     bl, al
		and     bl, 7
		cmp     bl, 2
		jne     short ___8005ch
		mov     cx, [cs:0ah]
___80026h:
		;mov     es, [cs:6]
		db	2eh,8eh,6,6,0
		mov     di, [cs:8]
		push    bx
		mov     bx, [es:di]
		add     di, byte 2
		mov     dx, [es:di]
		cmp     bx, dx
		pop     bx
		je      short ___8005ch
		add     di, byte 2
		and     dx, 0fffh
		add     di, dx
		mov     al, [es:di]
		mov     di, [cs:8]
		inc     word [es:di+2]
		mov     dx, [cs:0]
		out     dx, al
		loop    ___80026h
___8005ch:
		cmp     bl, 4
		jne     short ___80095h
___80061h:
		mov     dx, [cs:0]
		in      al, dx
		;mov     es, [cs:2]
		db	2eh,8eh,6,2,0
		mov     di, [cs:4]
		mov     cx, [es:di]
		add     di, byte 4
		and     cx, 0fffh
		add     di, cx
		mov     [es:di], al
		mov     di, [cs:4]
		inc     word [es:di]
		mov     dx, [cs:0]
		add     dx, byte 5
		in      al, dx
		test    al, 1
		jne     short ___80061h
___80095h:
		cmp     bl, 6
		jne     short ___800a3h
		mov     dx, [cs:0]
		add     dx, byte 5
		in      al, dx
___800a3h:
		cmp     bl, 0
		je      short ___800abh
		jmp     near ___80007h
___800abh:
		mov     dx, [cs:0]
		add     dx, byte 6
		in      al, dx
		jmp     near ___80007h
___800b7h:
		popa    
		pop     es
		pop     ds
		iret    

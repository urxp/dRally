cpu 386

    extern  __GETDS
    extern  outp
    extern  inp

    extern  dr@24e47ch
    extern  dr@199fc8h
    extern  dr@199fcch
    extern  dr@199fc4h
    extern  dr@24e4c4h
    extern  dr@24e46ch

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

dr@619e8h:
dd	dr@61a3eh
dd	dr@61ae2h
dd	dr@61a66h
dd	dr@61ae2h
dd	dr@61aa8h
dd	dr@61ae2h
dd	dr@61a52h

global SerialPort_PM_Handler
SerialPort_PM_Handler:
		pushad  
		push    ds
		push    es
		push    fs
		push    gs
		mov     ebp, esp
		cld     
		call    near __GETDS
		xor     ecx, ecx
dr@61a15h:
		test    ecx, ecx
		jne     near dr@61aech
		mov     eax, [dr@24e47ch]
		add     eax, byte 2
		call    near inp
		and     eax, byte 7
		cmp     eax, byte 6
		ja      near dr@61ae2h
		jmp     near dword [cs:eax*4+dr@619e8h]
dr@61a3eh:
		mov     eax, [dr@24e47ch]
		add     eax, byte 6
		call    near inp
		mov     [dr@199fc8h], eax
		jmp     short dr@61a15h
dr@61a52h:
		mov     eax, [dr@24e47ch]
		add     eax, byte 5
		call    near inp
		mov     [dr@199fcch], eax
		jmp     short dr@61a15h
dr@61a66h:
		mov     ebx, [dr@199fc4h]
dr@61a6ch:
		mov     eax, [dr@24e4c4h]
		mov     dx, [eax+2]
		cmp     dx, [eax]
		je      short dr@61a15h
		dec     ebx
		cmp     ebx, byte 0ffffffffh
		je      short dr@61a15h
		and     dh, 0fh
		and     edx, 0ffffh
		mov     dl, [edx+eax*1+4]
		and     edx, 0ffh
		mov     eax, [dr@24e47ch]
		call    near outp
		mov     eax, [dr@24e4c4h]
		inc     word [eax+2]
		jmp     short dr@61a6ch
dr@61aa8h:
		mov     eax, [dr@24e47ch]
		call    near inp
		mov     ebx, eax
		mov     eax, [dr@24e46ch]
		mov     dx, [eax]
		and     dh, 0fh
		and     edx, 0ffffh
		mov     [edx+eax*1+4], bl
		inc     word [eax]
		mov     eax, [dr@24e47ch]
		add     eax, byte 5
		call    near inp
		test    al, 1
		jne     short dr@61aa8h
		jmp     near dr@61a15h
dr@61ae2h:
		mov     ecx, 1
		jmp     near dr@61a15h
dr@61aech:
		mov     edx, 20h
		mov     eax, edx
		call    near outp
		pop     gs
		pop     fs
		pop     es
		pop     ds
		popad   
		iret


cpu 386

SEGMENT _TEXT16 	PUBLIC USE16 ALIGN=2 CLASS=CODE

global SerialPort_RM_Handler
SerialPort_RM_Handler:
		push    ds
		push    es
		pusha   
		mov     al, 20h
		out     20h, al
dr@80007h:
		mov     dx, [cs:0]
		add     dx, byte 2
		in      al, dx
		test    al, 1
		je      short dr@80017h
		jmp     near dr@800b7h
dr@80017h:
		mov     bl, al
		and     bl, 7
		cmp     bl, 2
		jne     short dr@8005ch
		mov     cx, [cs:0ah]
dr@80026h:
		;mov     es, [cs:6]
		db	2eh,8eh,6,6,0
		mov     di, [cs:8]
		push    bx
		mov     bx, [es:di]
		add     di, byte 2
		mov     dx, [es:di]
		cmp     bx, dx
		pop     bx
		je      short dr@8005ch
		add     di, byte 2
		and     dx, 0fffh
		add     di, dx
		mov     al, [es:di]
		mov     di, [cs:8]
		inc     word [es:di+2]
		mov     dx, [cs:0]
		out     dx, al
		loop    dr@80026h
dr@8005ch:
		cmp     bl, 4
		jne     short dr@80095h
dr@80061h:
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
		jne     short dr@80061h
dr@80095h:
		cmp     bl, 6
		jne     short dr@800a3h
		mov     dx, [cs:0]
		add     dx, byte 5
		in      al, dx
dr@800a3h:
		cmp     bl, 0
		je      short dr@800abh
		jmp     near dr@80007h
dr@800abh:
		mov     dx, [cs:0]
		add     dx, byte 6
		in      al, dx
		jmp     near dr@80007h
dr@800b7h:
		popa    
		pop     es
		pop     ds
		iret    
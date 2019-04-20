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

global dr@61a04h
dr@61a04h:
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
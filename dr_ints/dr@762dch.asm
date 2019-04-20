cpu 386

    extern  Saved_ds
    extern  dr@75f92h
    extern  dr@75fb2h
    extern  dr@75f9ch
    extern  dr@68c40h
    extern  dr@76ac5h
    extern  dr@68c30h
    extern  dr@68c34h
    extern  dr@7678eh
    extern  dr@75fa6h
    extern  dr@75fb4h
    extern  dr@75fb6h
    extern  dr@75f93h
    extern  dr@762d0h
    extern  dr@762d4h
    extern  dr@7c970h
    extern  dr@762cch
    extern  dr@770b8h

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global dr@762dch
dr@762dch:
		push    ds
		push    es
		mov     ds, [cs:Saved_ds]
		mov     es, [cs:Saved_ds]
		pushad  
		mov     al, 20h
		cmp     byte [dr@75f92h], 7
		jbe     short dr@762fch
		out     0a0h, al
dr@762fch:
		out     20h, al
dr@762feh:
		mov     dx, [dr@75fb2h]
		in      al, dx
		or      al, al
		je      near dr@7645bh
		test    al, 4
		je      near dr@76444h
		cmp     byte [dr@75f9ch], 1
		jne     short dr@76347h
		mov     ax, [dr@68c40h]
		call    near dr@76ac5h
		jb      near dr@7645bh
		sti     
		call    dword [dr@68c30h]
		call    dword [dr@68c34h]
		call    near dr@7678eh
		jmp     near dr@76456h
dr@76347h:
		mov     dx, [dr@75fa6h]
		mov     al, 45h
		out     dx, al
		add     dl, 2
		xor     al, al
		out     dx, al
		mov     dx, [dr@75fb4h]
		mov     al, 4
		out     dx, al
		mov     dx, [dr@75fb6h]
		mov     al, 80h
		out     dx, al
		in      al, dx
		xor     al, al
		out     dx, al
		mov     al, [dr@75f93h]
		mov     dl, 48h
		mov     esi, [dr@762d0h]
		mov     ecx, [dr@762d4h]
		shr     ecx, 1
		add     esi, ecx
		call    near dr@7c970h
		mov     dx, [dr@75fa6h]
		mov     al, 42h
		out     dx, al
		inc     dl
		mov     ebx, [dr@762d4h]
		shl     ebx, 2
		mov     eax, [dr@762d4h]
		imul    eax, [dr@762cch]
		shr     eax, 1
		add     eax, byte 20h
		add     eax, ebx
		shr     eax, 4
		cmp     byte [dr@75f93h], 3
		jbe     short dr@763c1h
		shr     eax, 1
dr@763c1h:
		out     dx, ax
		inc     dword [dr@762cch]
		cmp     dword [dr@762cch], byte 6
		jb      short dr@76426h
		mov     esi, [dr@762d0h]
		mov     edi, [dr@762d4h]
		lea     edi, [edi+edi*2]
		add     edi, byte 20h
		mov     al, [esi]
		call    near dr@770b8h
		inc     edi
		mov     al, [esi+1]
		call    near dr@770b8h
		mov     esi, [dr@762d4h]
		shr     esi, 1
		add     esi, [dr@762d0h]
		imul    edi, [dr@762d4h], byte 0bh
		add     edi, byte 20h
		mov     al, [esi]
		call    near dr@770b8h
		inc     edi
		mov     al, [esi+1]
		call    near dr@770b8h
		mov     dword [dr@762cch], 0
dr@76426h:
		mov     dx, [dr@75fa6h]
		mov     al, 41h
		out     dx, al
		add     dl, 2
		in      al, dx
		mov     al, 41h
		cmp     byte [dr@75f93h], 3
		jbe     short dr@76441h
		or      al, 4
dr@76441h:
		out     dx, al
		jmp     short dr@76456h
dr@76444h:
		test    al, 80h
		je      short dr@76456h
		mov     dx, [dr@75fa6h]
		mov     al, 41h
		out     dx, al
		add     dl, 2
		in      al, dx
dr@76456h:
		jmp     near dr@762feh
dr@7645bh:
		popad   
		pop     es
		pop     ds
		iret
cpu 386

    extern  Saved_ds
    extern  dr@77e38h
    extern  dr@77e34h
    extern  dr@60464h
    extern  dr@77e2ch
    extern  dr@60837h
    extern  dr@77e40h
    extern  dr@77e3ch
    extern  dr@691deh

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global dr@77e47h
dr@77e47h:
		push    ds
		push    es
		mov     ds, [cs:Saved_ds]
		mov     es, [cs:Saved_ds]
		push    eax
		push    edi
		mov     edi, [dr@77e38h]
		mov     al, 20h
		cmp     edi, [dr@77e34h]
		out     20h, al
		je      short dr@77e85h
dr@77e6dh:
		mov     al, [edi]
		inc     dword [dr@77e38h]
global dr@77e75h
dr@77e75h:
		out     42h, al
		dec     word [dr@60464h]
		pop     edi
		pop     eax
		je      short dr@77e93h
		pop     es
		pop     ds
		iret    
dr@77e85h:
		mov     edi, [dr@77e2ch]
		mov     [dr@77e38h], edi
		jmp     short dr@77e6dh
dr@77e93h:
		pushad  
		call    near dr@60837h
		mov     ebx, [dr@77e2ch]
		mov     edx, [dr@77e40h]
		add     ebx, edx
		mov     ecx, ebx
		mov     eax, [dr@77e38h]
		add     ecx, edx
		cmp     [dr@77e3ch], ecx
		jne     short dr@77ebeh
		cmp     eax, ebx
		jb      short dr@77ed4h
		jmp     short dr@77f07h
dr@77ebeh:
		cmp     [dr@77e3ch], ebx
		jne     short dr@77ecch
		cmp     eax, ecx
		jae     short dr@77ed4h
		jmp     short dr@77f07h
dr@77ecch:
		cmp     eax, ebx
		jb      short dr@77f07h
		cmp     eax, ecx
		ja      short dr@77f07h
dr@77ed4h:
		mov     eax, [dr@77e40h]
		mov     edi, [dr@77e3ch]
		call    near dr@691deh
		mov     eax, [dr@77e40h]
		add     [dr@77e3ch], eax
		mov     ebx, [dr@77e34h]
		cmp     [dr@77e3ch], ebx
		jne     short dr@77f07h
		mov     eax, [dr@77e2ch]
		mov     [dr@77e3ch], eax
dr@77f07h:
		popad   
		pop     es
		pop     ds
		iret
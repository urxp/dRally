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

global dr@77f2dh
dr@77f2dh:
		push    ds
		push    es
		mov     ds, [cs:Saved_ds]
		mov     es, [cs:Saved_ds]
		push    eax
		push    edx
		push    edi
		mov     edi, [dr@77e38h]
		mov     al, 20h
		cmp     edi, [dr@77e34h]
		out     20h, al
		je      short dr@77f70h
dr@77f54h:
		mov     al, [edi]
		inc     dword [dr@77e38h]
		mov     dx, 389h
global dr@77f60h
dr@77f60h:
		out     dx, al
		dec     word [dr@60464h]
		pop     edi
		pop     edx
		pop     eax
		je      short dr@77f7eh
		pop     es
		pop     ds
		iret    
dr@77f70h:
		mov     edi, [dr@77e2ch]
		mov     [dr@77e38h], edi
		jmp     short dr@77f54h
dr@77f7eh:
		pushad  
		call    near dr@60837h
		mov     ebx, [dr@77e2ch]
		mov     edx, [dr@77e40h]
		add     ebx, edx
		mov     ecx, ebx
		mov     eax, [dr@77e38h]
		add     ecx, edx
		cmp     [dr@77e3ch], ecx
		jne     short dr@77fa9h
		cmp     eax, ebx
		jb      short dr@77fbfh
		jmp     short dr@77ff2h
dr@77fa9h:
		cmp     [dr@77e3ch], ebx
		jne     short dr@77fb7h
		cmp     eax, ecx
		jae     short dr@77fbfh
		jmp     short dr@77ff2h
dr@77fb7h:
		cmp     eax, ebx
		jb      short dr@77ff2h
		cmp     eax, ecx
		ja      short dr@77ff2h
dr@77fbfh:
		mov     eax, [dr@77e40h]
		mov     edi, [dr@77e3ch]
		call    near dr@691deh
		mov     eax, [dr@77e40h]
		add     [dr@77e3ch], eax
		mov     ebx, [dr@77e34h]
		cmp     [dr@77e3ch], ebx
		jne     short dr@77ff2h
		mov     eax, [dr@77e2ch]
		mov     [dr@77e3ch], eax
dr@77ff2h:
		popad   
		pop     es
		pop     ds
		iret
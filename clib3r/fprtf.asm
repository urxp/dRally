cpu 386

    extern	fputc
    extern	__ioalloc
    extern	__prtf
    extern	__flush

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

file_putc:
		push    ebx
		mov     ebx, eax
		mov     eax, edx
		mov     edx, [ebx]
		call    near fputc
		inc     dword [ebx+10h]
		pop     ebx
		retn
global __fprtf    
__fprtf:
		push    ecx
		push    esi
		push    edi
		push    ebp
		mov     esi, eax
		mov     ebp, [eax+0ch]
		mov     ah, [eax+0ch]
		mov     ecx, [esi+8]
		and     ah, 0cfh
		and     ebp, byte 30h
		mov     [esi+0ch], ah
		test    ecx, ecx
		jne     short dr@66edbh
		mov     eax, esi
		call    near __ioalloc
dr@66edbh:
		mov     cl, [esi+0dh]
		xor     edi, edi
		test    cl, 4
		je      short dr@66ef6h
		mov     ch, cl
		and     ch, 0fah
		mov     al, ch
		or      al, 1
		mov     edi, 1
		mov     [esi+0dh], al
dr@66ef6h:
		mov     ecx, file_putc
		mov     eax, esi
		call    near __prtf
		mov     edx, eax
		test    edi, edi
		je      short dr@66f1dh
		mov     ah, [esi+0dh]
		and     ah, 0fah
		mov     bl, ah
		or      bl, 4
		mov     eax, esi
		mov     [esi+0dh], bl
		call    near __flush
dr@66f1dh:
		test    byte [esi+0ch], 20h
		je      short dr@66f28h
		mov     edx, 0ffffffffh
dr@66f28h:
		mov     edi, [esi+0ch]
		or      edi, ebp
		mov     eax, edx
		mov     [esi+0ch], edi
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn
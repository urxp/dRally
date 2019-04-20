cpu 386
		
    extern	___OpenStreams
    extern	__freefp
    extern	getpid
    extern	__flush
    extern	ftell
    extern	lseek
    extern	__close
    extern	free
    extern	remove

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global fclose
fclose:
		push    ebx
		push    edx
		mov     ebx, eax
		mov     eax, [___OpenStreams]
dr@643d6h:
		test    eax, eax
		jne     short dr@643e2h
		mov     eax, 0ffffffffh
		pop     edx
		pop     ebx
		retn    
dr@643e2h:
		cmp     ebx, [eax+4]
		je      short dr@643ebh
		mov     eax, [eax]
		jmp     short dr@643d6h
dr@643ebh:
		mov     edx, 1
		mov     eax, ebx
		call    near __shutdown_stream
		pop     edx
		pop     ebx
		retn 
global __shutdown_stream  
__shutdown_stream:
		push    ebx
		mov     ebx, eax
		call    near __doclose
		mov     edx, eax
		mov     eax, ebx
		call    near __freefp
		mov     eax, edx
		pop     ebx
		retn    
__hex:
		add     eax, byte 30h
		cmp     eax, byte 39h
		jle     short dr@6441ah
		add     eax, byte 27h
dr@6441ah:
		retn

global __MkTmpFile   
__MkTmpFile:
		push    ebx
		push    ecx
		push    esi
		push    edi
		mov     ecx, eax
		mov     edi, edx
		call    near getpid
		mov     ebx, eax
		lea     edx, [ecx+4]
		mov     byte [ecx], 74h
		mov     esi, ecx
dr@64432h:
		mov     eax, ebx
		and     eax, byte 0fh
		call    near __hex
		mov     [edx], al
		dec     edx
		shr     ebx, 4
		cmp     edx, esi
		jne     short dr@64432h
		mov     eax, edi
		sar     eax, 4
		and     eax, byte 0fh
		mov     byte [ecx+5], 5fh
		call    near __hex
		mov     [ecx+6], al
		mov     eax, edi
		and     eax, byte 0fh
		call    near __hex
		mov     byte [ecx+8], 2eh
		mov     byte [ecx+9], 74h
		mov     byte [ecx+0ah], 6dh
		mov     byte [ecx+0bh], 70h
		mov     byte [ecx+0ch], 0
		mov     [ecx+7], al
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn 
global __doclose
__doclose:
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     ecx, eax
		mov     edi, edx
		cmp     dword [eax+0ch], byte 0
		jne     short dr@6449ch
		mov     eax, 0ffffffffh
		jmp     near dr@64507h
dr@6449ch:
		mov     ah, [eax+0dh]
		xor     esi, esi
		test    ah, 10h
		je      short dr@644afh
		mov     eax, ecx
		call    near __flush
		mov     esi, eax
dr@644afh:
		mov     eax, ecx
		call    near ftell
		cmp     eax, byte 0ffffffffh
		je      short dr@644c9h
		mov     edx, eax
		mov     ebp, [ecx+10h]
		xor     ebx, ebx
		mov     eax, ebp
		call    near lseek
dr@644c9h:
		test    edi, edi
		je      short dr@644d7h
		mov     eax, [ecx+10h]
		call    near __close
		or      esi, eax
dr@644d7h:
		test    byte [ecx+0ch], 8
		je      short dr@644ech
		mov     eax, [ecx+8]
		call    near free
		mov     dword [ecx+8], 0
dr@644ech:
		test    byte [ecx+0dh], 8
		je      short dr@64505h
		xor     edx, edx
		mov     eax, esp
		mov     dl, [ecx+19h]
		call    near __MkTmpFile
		mov     eax, esp
		call    near remove
dr@64505h:
		mov     eax, esi
dr@64507h:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn
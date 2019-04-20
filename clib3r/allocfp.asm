cpu 386

    extern	___ClosedStreams
    extern	___iob
    extern	malloc
    extern	memset
    extern	___OpenStreams
    extern	__set_errno
    extern	free

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __allocfp
__allocfp:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     esi, [___ClosedStreams]
		test    esi, esi
		je      short dr@6746ah
		mov     ecx, [esi+4]
		mov     edi, [ecx+0ch]
		mov     eax, [esi]
		and     edi, 4003h
		mov     [___ClosedStreams], eax
		or      di, byte 3
		jmp     short dr@674b1h
dr@6746ah:
		mov     ecx, ___iob
		jmp     short dr@67491h
dr@67471h:
		test    byte [ecx+0ch], 3
		jne     short dr@6748eh
		mov     eax, 8
		call    near malloc
		mov     esi, eax
		test    eax, eax
		je      short dr@674d6h
		mov     edi, 3
		jmp     short dr@674b1h
dr@6748eh:
		add     ecx, byte 1ah
dr@67491h:
		cmp     ecx, ___iob+208h
		jb      short dr@67471h
		mov     eax, 22h
		mov     edi, 4003h
		call    near malloc
		mov     esi, eax
		test    eax, eax
		je      short dr@674d6h
		lea     ecx, [eax+8]
dr@674b1h:
		mov     ebx, 1ah
		mov     eax, ecx
		xor     edx, edx
		call    near memset
		mov     [ecx+0ch], edi
		mov     eax, [___OpenStreams]
		mov     [esi+4], ecx
		mov     [___OpenStreams], esi
		mov     [esi], eax
		mov     eax, ecx
		jmp     short dr@674e2h
dr@674d6h:
		mov     eax, 5
		call    near __set_errno
		xor     eax, eax
dr@674e2h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn   
global __freefp 
__freefp:
		push    ebx
		push    ecx
		push    edx
		mov     ebx, eax
		mov     edx, ___OpenStreams
dr@674f2h:
		mov     eax, [edx]
		test    eax, eax
		je      short dr@6751dh
		mov     ecx, [eax+4]
		cmp     ebx, ecx
		je      short dr@67503h
		mov     edx, eax
		jmp     short dr@674f2h
dr@67503h:
		mov     cl, [ecx+0ch]
		or      cl, 3
		mov     [ebx+0ch], cl
		mov     ebx, [eax]
		mov     [edx], ebx
		mov     edx, [___ClosedStreams]
		mov     [___ClosedStreams], eax
		mov     [eax], edx
dr@6751dh:
		pop     edx
		pop     ecx
		pop     ebx
		retn    
global __purgefp
__purgefp:
		push    edx
dr@67522h:
		mov     edx, [___ClosedStreams]
		test    edx, edx
		je      short dr@6753dh
		mov     eax, edx
		mov     edx, [edx]
		call    near free
		mov     [___ClosedStreams], edx
		jmp     short dr@67522h
dr@6753dh:
		pop     edx
		retn
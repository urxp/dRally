cpu 386

    extern	___iob
    extern	_nmalloc
    extern	malloc
    extern	__fatal_runtime_error
    extern	___OpenStreams
    extern	___ClosedStreams

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __InitFiles
__InitFiles:
		push    ebx
		push    ecx
		push    edx
		mov     ah, [___iob+41h]
		and     ah, 0f8h
		mov     dl, ah
		mov     [___iob+41h], ah
		or      dl, 4
		mov     ecx, ___iob
		mov     [___iob+41h], dl
		jmp     short dr@6ed21h
dr@6ecdfh:
		mov     eax, 8
		call    near _nmalloc
		mov     ebx, eax
		test    eax, eax
		jne     short dr@6ed0eh
		mov     eax, 8
		call    near malloc
		mov     ebx, eax
		test    eax, eax
		jne     short dr@6ed0eh
		mov     edx, 1
		mov     eax, L$4
		call    near __fatal_runtime_error
dr@6ed0eh:
		mov     eax, [___OpenStreams]
		mov     [ebx+4], ecx
		mov     [___OpenStreams], ebx
		add     ecx, byte 1ah
		mov     [ebx], eax
dr@6ed21h:
		mov     edx, [ecx+0ch]
		test    edx, edx
		jne     short dr@6ecdfh
		mov     [___ClosedStreams], edx
		pop     edx
		pop     ecx
		pop     ebx
		retn


SEGMENT CONST       PUBLIC USE32 ALIGN=4 CLASS=DATA
L$4:
    db  "Not enough memory to allocate file structures"
    db  0dh,0ah,0
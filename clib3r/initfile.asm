%include "macros.inc"

    extern  ___iob
    extern  __CEXT_F(malloc__clib3r)
    extern  __fatal_runtime_error
    extern  ___OpenStreams
    extern  ___ClosedStreams

%include "layout.inc"

section @text

__GDECL(__InitFiles)
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
		jmp     ___6ed21h
___6ecdfh:
		mov     eax, 8
		call    __CEXT_F(malloc__clib3r)
		mov     ebx, eax
		test    eax, eax
		jne     ___6ed0eh
		mov     eax, 8
		call    __CEXT_F(malloc__clib3r)
		mov     ebx, eax
		test    eax, eax
		jne     ___6ed0eh
		mov     edx, 1
		mov     eax, ___1850e4h
		call    __fatal_runtime_error
___6ed0eh:
		mov     eax, [___OpenStreams]
		mov     [ebx+4], ecx
		mov     [___OpenStreams], ebx
		add     ecx, byte 1ah
		mov     [ebx], eax
___6ed21h:
		mov     edx, [ecx+0ch]
		test    edx, edx
		jne     ___6ecdfh
		mov     [___ClosedStreams], edx
		pop     edx
		pop     ecx
		pop     ebx
		retn    


section @const

___1850e4h:
db	"Not enough memory to allocate file structures",0dh,0ah,0
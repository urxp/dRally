
    extern  __Extender
    extern  __amblksiz
    extern  __DPMI_hosted_
    extern  ___GETDSEnd_
    extern  __GETDS

%include 'layout.inc'

section @text

global __CommonInit__clib3r
__CommonInit__clib3r:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		xor     eax, eax
		mov     edx, 8000h
		mov     al, [__Extender]
		mov     [__amblksiz], edx
		cmp     eax, 2
		jl      ___6ec73h
		cmp     eax, 8
		jle     ___6ec7ah
___6ec73h:
		mov     eax, 1
		jmp     ___6ec7ch
___6ec7ah:
		xor     eax, eax
___6ec7ch:
		test    eax, eax
		je      ___6ecb5h
		call    __DPMI_hosted_
		cmp     eax, 1
		jne     ___6ecb5h
		mov     edx, ___GETDSEnd_
		mov     eax, __GETDS
		sub     edx, __GETDS
		mov     di, dx
		shr     edx, 10h
		mov     si, dx
		mov     bx, ax			;; [CHK] spec states BX:CX ???
		shr     eax, 10h
		mov     cx, ax			;; [CHK] spec states BX:CX ???
		mov     ax, 600h
		int     31h
		sbb     ax, ax
___6ecb5h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
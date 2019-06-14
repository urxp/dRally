%include "macros.inc"

    extern  __CHK
    extern  ___24e47ch
    extern  REGS0
	extern	REGS0_EAX
    extern  REGS0_EBX
    extern  __CEXT_F(int386__clib3r)
    extern  REGS0_ECX
    extern  ___24e4b0h
    extern  REGS0_EDX
    extern  ___24e4a8h
    extern  memset__clib3r
    extern  outp
    extern  ___61bb8h
    extern  ___60a28h
    extern  ___199fb0h
    extern  ___199fbch
    extern  ___199fc4h
    extern  RMSerialPtr
    extern  __CEXT_F(memcpy__clib3r)
    extern  ___199fa4h
    extern  ___24e468h
    extern  ___24e488h
    extern  ___24e46ch
    extern  ___24e4c4h
    extern  handler16__serial
    extern  _fmemcpy__clib3r
    extern  ___61a04h
    extern  inp
    extern  ___24e4d0h

%include "layout.inc"

section @text

___62c4ch:
dd	___62fbdh
dd	___62fe0h
dd	___62fe0h
dd	___62fe0h
dd	___62fd6h
dd	___62fe0h
dd	___62fc7h
global install__serial
install__serial:
		push    20h
		call    near __CHK
		push    ecx
		push    esi
		sub     esp, byte 10h
		mov     [esp], eax
		mov     [esp+8], edx
		mov     [___24e47ch], eax
		xor     edx, edx
		mov     eax, 1c200h
		div     ebx
		mov     ecx, eax
		mov     dword [REGS0_EAX], 204h
		mov     al, [esp+8]
		add     al, 8
		mov     [esp+0ch], al
		mov     [REGS0_EBX], al
		mov     ebx, REGS0
		mov     edx, ebx
		mov     eax, 31h
		call    near __CEXT_F(int386__clib3r)
		mov     eax, [REGS0_ECX]
		mov     [___24e4b0h], eax
		mov     eax, [REGS0_EDX]
		mov     [___24e4a8h], eax
		mov     dword [REGS0_EAX], 200h
		mov     al, [esp+0ch]
		mov     [REGS0_EBX], al
		mov     ebx, REGS0
		mov     edx, ebx
		mov     eax, 31h
		call    near __CEXT_F(int386__clib3r)
		mov     eax, [REGS0_ECX]
		mov     [___24e468h], eax
		mov     eax, [REGS0_EDX]
		mov     [___24e488h], eax
		mov     eax, [___24e46ch]
		mov     word [eax], 0
		mov     word [eax+2], 0
		mov     edx, [___24e4c4h]
		mov     word [edx], 0
		mov     word [edx+2], 0
		add     eax, byte 4
		mov     ebx, 1000h
		xor     edx, edx
		call    near memset__clib3r
		mov     eax, [___24e4c4h]
		add     eax, byte 4
		mov     ebx, 1000h
		xor     edx, edx
		call    near memset__clib3r
		mov     eax, [esp]
		inc     eax
		xor     edx, edx
		call    near outp
		mov     eax, [esp]
		add     eax, byte 3
		mov     edx, 83h
		call    near outp
		mov     edx, ecx
		mov     eax, [esp]
		call    near outp
		mov     eax, [esp]
		inc     eax
		xor     edx, edx
		call    near outp
		mov     eax, [esp]
		add     eax, byte 3
		mov     edx, 3
		call    near outp
		mov     eax, [esp]
		add     eax, byte 4
		mov     edx, 0bh
		call    near outp
		mov     edx, [esp]
		mov     eax, edx
		call    near ___61bb8h
		mov     eax, 1
		call    near ___60a28h
		mov     eax, edx
		call    near ___61bb8h
		mov     [___199fb0h], eax
		test    eax, eax
		jne     short ___62dcbh
		mov     dword [___199fbch], 68h
		jmp     near ___63037h
___62dcbh:
		cmp     eax, byte 4
		mov     dword [___199fc4h], 1
		mov     eax, [RMSerialPtr]
		mov     ebx, 2
		mov     edx, esp
		call    near __CEXT_F(memcpy__clib3r)
		mov     eax, [___24e46ch]
		shr     eax, 4
		and     eax, 0ffffh
		mov     [esp+4], eax
		mov     eax, [RMSerialPtr]
		add     eax, byte 2
		mov     ebx, 2
		lea     edx, [esp+4]
		call    near __CEXT_F(memcpy__clib3r)
		mov     eax, [___24e46ch]
		and     eax, byte 0fh
		mov     [esp+4], eax
		mov     eax, [RMSerialPtr]
		add     eax, byte 4
		mov     ebx, 2
		lea     edx, [esp+4]
		call    near __CEXT_F(memcpy__clib3r)
		mov     eax, [___24e4c4h]
		shr     eax, 4
		and     eax, 0ffffh
		mov     [esp+4], eax
		mov     eax, [RMSerialPtr]
		add     eax, byte 6
		mov     ebx, 2
		lea     edx, [esp+4]
		call    near __CEXT_F(memcpy__clib3r)
		mov     eax, [___24e4c4h]
		and     eax, byte 0fh
		mov     [esp+4], eax
		mov     eax, [RMSerialPtr]
		add     eax, byte 8
		mov     ebx, 2
		lea     edx, [esp+4]
		call    near __CEXT_F(memcpy__clib3r)
		mov     eax, [___199fc4h]
		mov     [esp+4], eax
		mov     eax, [RMSerialPtr]
		add     eax, byte 0ah
		mov     ebx, 2
		lea     edx, [esp+4]
		call    near __CEXT_F(memcpy__clib3r)
		mov     cl, [esp+8]
		mov     eax, 1
		shl     eax, cl
		mov     [esp+4], eax
		mov     eax, [RMSerialPtr]
		add     eax, byte 0ch
		mov     ebx, 2
		lea     edx, [esp+4]
		call    near __CEXT_F(memcpy__clib3r)
		mov     eax, [RMSerialPtr]
		mov     [esp+4], eax
		lea     esi, [eax+0eh]
		mov     [esp+4], esi
		mov     eax, esi
		mov     [RMSerialPtr], esi
		push    190h
		;mov     edx, ds
		db	8ch,0dah
		;mov     ecx, cs
		db	8ch,0c9h
		mov     ebx, handler16__serial
		call    near _fmemcpy__clib3r
		mov     dword [REGS0_EAX], 205h
		mov     ecx, [esp+8]
		add     ecx, byte 8
		mov     [REGS0_EBX], ecx
		;mov     edx, cs
		db	8ch,0cah
		mov     eax, ___61a04h
		xor     eax, eax
		mov     ax, dx
		mov     [REGS0_ECX], eax
		mov     dword [REGS0_EDX], ___61a04h
		mov     ebx, REGS0
		mov     edx, ebx
		mov     eax, 31h
		call    near __CEXT_F(int386__clib3r)
		mov     dword [REGS0_EAX], 201h
		mov     [REGS0_EBX], ecx
		mov     eax, [RMSerialPtr]
		shr     eax, 4
		and     eax, 0ffffh
		mov     [REGS0_ECX], eax
		mov     eax, [RMSerialPtr]
		and     eax, byte 0fh
		mov     [REGS0_EDX], eax
		mov     ebx, REGS0
		mov     edx, ebx
		mov     eax, 31h
		call    near __CEXT_F(int386__clib3r)
		mov     eax, [___199fa4h]
		add     eax, byte 2
		cmp     dword [___199fb0h], byte 4
		jne     short ___62f85h
		mov     edx, 0c7h
		jmp     short ___62f87h
___62f85h:
		xor     edx, edx
___62f87h:
		call    near outp
		xor     edx, edx
___62f8eh:
		mov     eax, [___199fa4h]
		call    near inp
		inc     edx
		cmp     edx, byte 10h
		jl      short ___62f8eh
___62f9eh:
		mov     eax, [___199fa4h]
		add     eax, byte 2
		call    near inp
		mov     edx, eax
		and     edx, byte 7
		cmp     edx, byte 6
		ja      short ___62fe0h
		jmp     near dword [cs:edx*4+___62c4ch]
___62fbdh:
		mov     eax, [___199fa4h]
		add     eax, byte 6
		jmp     short ___62fdbh
___62fc7h:
		mov     eax, [___199fa4h]
		add     eax, byte 5
		call    near inp
		jmp     short ___62fe0h
___62fd6h:
		mov     eax, [___199fa4h]
___62fdbh:
		call    near inp
___62fe0h:
		test    dl, 1
		je      short ___62f9eh
		mov     cl, [esp+8]
		mov     edx, 1
		shl     edx, cl
		not     edx
		mov     eax, 21h
		call    near inp
		and     edx, eax
		mov     eax, 21h
		call    near outp
		cli     
		mov     eax, [esp]
		inc     eax
		cmp     dword [___24e4d0h], byte 1
		jne     short ___6301dh
		mov     edx, 3
		jmp     short ___63022h
___6301dh:
		mov     edx, 0bh
___63022h:
		call    near outp
		mov     edx, 0c2h
		mov     eax, 20h
		call    near outp
		sti     
___63037h:
		add     esp, byte 10h
		pop     esi
		pop     ecx
		retn

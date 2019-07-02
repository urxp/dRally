%include "macros.inc"

    extern  __CHK
    extern  __CEXT_V(tex_carframe)
    extern  __CEXT_F(decode2__bpk)
    extern  __CEXT_V(VGABufferPtr_0)
    extern  __CEXT_V(tex_carframe)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(carAnimFrame))
		push    1ch
		call    __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     [esp], eax
		mov     edi, edx
		mov     esi, ebx
		xor     eax, eax
		xor     ebx, ebx
		test    esi, esi
		jle     ___25a0fh
		mov     edx, [esp+14h]
___25a03h:
		mov     ebp, [edx]
		add     edx, byte 4
		inc     eax
		add     ebx, ebp
		cmp     eax, esi
		jl      ___25a03h
___25a0fh:
		add     ebx, ecx
		push    ebx
		mov     eax, [__CEXT_V(tex_carframe)]
		push    eax
		call    __CEXT_F(decode2__bpk)
		mov     ebx, [esp]
		lea     eax, [edi*4+0]
		mov     ecx, 40h
		add     eax, edi
		mov     edx, [__CEXT_V(VGABufferPtr_0)]
		shl     eax, 7
		mov     esi, [__CEXT_V(tex_carframe)]
		add     eax, edx
		mov     edx, 60h
		add     ebx, eax
		shr     dl, 2
___25a49h:
		mov     ch, dl
___25a4bh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     ___25a4bh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     ___25a49h
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		ret     4

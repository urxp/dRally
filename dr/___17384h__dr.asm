%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(delay_TBD)
    extern  __CEXT_F(memset__clib3r)
    extern  __CEXT_V(___185ba9h)
    extern  __CEXT_V(___1a10e0h)
    extern  __CEXT_V(___18072ch)
    extern  __CEXT_F(renderTextToBuffer__video)
    extern  __CEXT_V(___196ae0h)
    extern  __CEXT_V(___185cbch)
    extern  __CEXT_V(bpk_kupla_p)
    extern  __CEXT_V(___1a1ed0h)
    extern  __CEXT_F(carAnimFrame)
    extern  __CEXT_V(VGABufferPtr_0)
    extern  __CEXT_F(___1398ch)
    extern  __CEXT_V(___196ae4h)

%include "layout.inc"

section @text

;; 17384h
__GDECL(__CEXT_F(___17384h))
		push    1ch
		call    __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     edi, eax
		mov     [esp+4], edx
		mov     esi, ebx
		mov     [esp], ecx
		call    __CEXT_F(delay_TBD)
		mov     edx, [__CEXT_V(___196ae0h)]
		inc     edx
		mov     [__CEXT_V(___196ae0h)], edx
		cmp     edx, byte 0ah
		jle     ___173f7h
		mov     edx, [esp+4]
		add     edx, byte 2
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ecx, eax
		lea     ebp, [eax+4b00h]
___173d1h:
		mov     eax, [__CEXT_V(VGABufferPtr_0)]
		add     eax, ecx
		mov     ebx, 14h
		add     eax, edi
		mov     edx, 0c4h
		add     eax, esi
		add     ecx, 280h
		call    __CEXT_F(memset__clib3r)
		cmp     ecx, ebp
		je      ___17420h
		jmp     ___173d1h
___173f7h:
		mov     edx, [esp+4]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     ecx, [eax+edi]
		mov     edx, __CEXT_V(___185ba9h)
		mov     eax, [__CEXT_V(___1a10e0h)]
		add     ecx, ebx
		mov     ebx, __CEXT_V(___18072ch)
		call    __CEXT_F(renderTextToBuffer__video)
___17420h:
		cmp     dword [__CEXT_V(___196ae0h)], byte 14h
		jle     ___17431h
		xor     ebp, ebp
		mov     [__CEXT_V(___196ae0h)], ebp
___17431h:
		mov     ecx, [esp+4]
		lea     eax, [ecx*4+0]
		add     eax, ecx
		mov     edx, [__CEXT_V(VGABufferPtr_0)]
		shl     eax, 7
		mov     ebx, 14h
		add     edx, eax
		mov     ecx, 20h
		add     edx, edi
		add     eax, edi
		add     edx, esi
		add     eax, esi
		call    __CEXT_F(___1398ch)
		cmp     dword [__CEXT_V(___196ae4h)], byte 0
		jne     ___174fdh
		cmp     dword [esp], byte 0
		je      ___174eah
		push    __CEXT_V(___185cbch)
		mov     esi, [esp+20h]
		mov     eax, [esp+1ch]
		mov     ecx, [__CEXT_V(bpk_kupla_p)]
		mov     ebx, [__CEXT_V(___1a1ed0h)]
		add     esi, byte 50h
		add     eax, 1a0h
		mov     edx, esi
		call    __CEXT_F(carAnimFrame)
		lea     eax, [esi*4+0]
		add     eax, esi
		mov     edx, [__CEXT_V(VGABufferPtr_0)]
		shl     eax, 7
		mov     ecx, [esp+18h]
		add     edx, eax
		mov     ebx, 60h
		add     edx, ecx
		add     eax, ecx
		mov     ecx, 40h
		add     edx, 1a0h
		add     eax, 1a0h
		call    __CEXT_F(___1398ch)
		mov     edi, [__CEXT_V(___1a1ed0h)]
		inc     edi
		mov     [__CEXT_V(___1a1ed0h)], edi
		cmp     edi, byte 3fh
		jle     ___174eah
		xor     eax, eax
		mov     [__CEXT_V(___1a1ed0h)], eax
___174eah:
		mov     dword [__CEXT_V(___196ae4h)], 1
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		ret     8
___174fdh:
		xor     edx, edx
		mov     [__CEXT_V(___196ae4h)], edx
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		ret     8

%include "macros.inc"

    extern  ___ClosedStreams
    extern  ___iob
    extern  __CEXT_F(malloc__clib3r)
    extern  ___tmpfnext
    extern  memset__clib3r
    extern  ___OpenStreams
    extern  __set_errno__clib3r
    extern  __CEXT_F(free__clib3r)

%include "layout.inc"

section @text

__GDECL(__allocfp)
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     esi, [___ClosedStreams]
		test    esi, esi
		je      ___6746ah
		mov     ecx, [esi+4]
		mov     edi, [ecx+0ch]
		mov     eax, [esi]
		and     edi, 4003h
		mov     [___ClosedStreams], eax
		or      di, byte 3
		jmp     ___674b1h
___6746ah:
		mov     ecx, ___iob
		jmp     ___67491h
___67471h:
		test    byte [ecx+0ch], 3
		jne     ___6748eh
		mov     eax, 8
		call    __CEXT_F(malloc__clib3r)
		mov     esi, eax
		test    eax, eax
		je      ___674d6h
		mov     edi, 3
		jmp     ___674b1h
___6748eh:
		add     ecx, byte 1ah
___67491h:
		cmp     ecx, ___tmpfnext
		jb      ___67471h
		mov     eax, 22h
		mov     edi, 4003h
		call    __CEXT_F(malloc__clib3r)
		mov     esi, eax
		test    eax, eax
		je      ___674d6h
		lea     ecx, [eax+8]
___674b1h:
		mov     ebx, 1ah
		mov     eax, ecx
		xor     edx, edx
		call    memset__clib3r
		mov     [ecx+0ch], edi
		mov     eax, [___OpenStreams]
		mov     [esi+4], ecx
		mov     [___OpenStreams], esi
		mov     [esi], eax
		mov     eax, ecx
		jmp     ___674e2h
___674d6h:
		mov     eax, 5
		call    __set_errno__clib3r
		xor     eax, eax
___674e2h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__GDECL(__freefp)
		push    ebx
		push    ecx
		push    edx
		mov     ebx, eax
		mov     edx, ___OpenStreams
___674f2h:
		mov     eax, [edx]
		test    eax, eax
		je      ___6751dh
		mov     ecx, [eax+4]
		cmp     ebx, ecx
		je      ___67503h
		mov     edx, eax
		jmp     ___674f2h
___67503h:
		mov     cl, [ecx+0ch]
		or      cl, 3
		mov     [ebx+0ch], cl
		mov     ebx, [eax]
		mov     [edx], ebx
		mov     edx, [___ClosedStreams]
		mov     [___ClosedStreams], eax
		mov     [eax], edx
___6751dh:
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__GDECL(__purgefp)
		push    edx
___67522h:
		mov     edx, [___ClosedStreams]
		test    edx, edx
		je      ___6753dh
		mov     eax, edx
		mov     edx, [edx]
		call    __CEXT_F(free__clib3r)
		mov     [___ClosedStreams], edx
		jmp     ___67522h
___6753dh:
		pop     edx
		retn    

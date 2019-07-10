%include "macros.inc"

    extern  __CHK

    extern  __CEXT_V(___182df4h)
    extern  __CEXT_V(___182e20h)
    extern  __CEXT_V(NetworkConnectionEstablished)
    
    extern  __CEXT_F(allocMemoryLock)
    extern  __CEXT_F(freeAllocInfoTable)
    extern  __CEXT_F(setmode3h__video)
    extern  __CEXT_F(printf__clib3r)
    extern  __CEXT_F(___623d4h)
    extern  __CEXT_F(exit__clib3r)

%include "layout.inc"

section @text

;; 3f71ch
__GDECL(__CEXT_F(allocMemSafe))
		push    18h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		xor     edx, edx
		call    __CEXT_F(allocMemoryLock)
		mov     esi, eax
		test    eax, eax
		jne     ___3f774h
		call    __CEXT_F(freeAllocInfoTable)
		call    __CEXT_F(setmode3h__video)
		push    __CEXT_V(___182df4h)
		call    __CEXT_F(printf__clib3r)
		add     esp, byte 4
		push    __CEXT_V(___182e20h)
		call    __CEXT_F(printf__clib3r)
		mov     edx, [__CEXT_V(NetworkConnectionEstablished)]
		add     esp, byte 4
		test    edx, edx
		je      ___3f76ah
		call    __CEXT_F(___623d4h)
___3f76ah:
		mov     eax, 70h
		call    __CEXT_F(exit__clib3r)
___3f774h:
		mov     eax, esi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

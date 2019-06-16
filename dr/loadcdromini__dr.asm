%include "macros.inc"

    extern  __CHK
    extern  __CEXT_V(rb_m)
    extern  __CEXT_V(string__CDROM_INI)
    extern  __CEXT_F(fopen__clib3r)
    extern  __CEXT_V(cdrom_ini)
    extern  __CEXT_V(___182bc8h)
    extern  __CEXT_F(fscanf__clib3r)
    extern  __CEXT_V(___182bcch)
    extern  __CEXT_V(___182bd0h)
    extern  __CEXT_F(printf__clib3r)
    extern  __CEXT_F(restore__keyboard)
    extern  __CEXT_F(freeAllocInfoTable)
    extern  __CEXT_F(exit__clib3r)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(loadcdromini__dr))
		push    20h
		call    __CHK
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, __CEXT_V(rb_m)         ;; "rb"
		mov     eax, __CEXT_V(string__CDROM_INI)         ;; "CDROM.INI"
		call    __CEXT_F(fopen__clib3r)
		test    eax, eax
		je      @nocdromini
		push    __CEXT_V(cdrom_ini)
		push    __CEXT_V(___182bc8h)              ;; "%s"
		push    eax
		call    __CEXT_F(fscanf__clib3r)
		add     esp, 0ch
		mov     edi, __CEXT_V(cdrom_ini)
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     byte [ecx+__CEXT_V(cdrom_ini)-1], 5ch  ;; '\'
		je      @ok
		mov     esi, __CEXT_V(___182bcch)             ;; "\"
		mov     edi, __CEXT_V(cdrom_ini)
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3e42bh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3e443h
		mov     al, [esi+1]
		add     esi, 2
		mov     [edi+1], al
		add     edi, 2
		cmp     al, 0
		jne     ___3e42bh
___3e443h:
		pop     edi
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		retn    
@nocdromini:
		push    __CEXT_V(___182bd0h)
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		call    __CEXT_F(restore__keyboard)
		call    __CEXT_F(freeAllocInfoTable)
		mov     eax, 70h
		call    __CEXT_F(exit__clib3r)
@ok:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		retn
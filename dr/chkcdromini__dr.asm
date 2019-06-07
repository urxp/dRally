%include "macros.inc"

    extern  __CHK
    extern  __CEXT_V(rb_m)
    extern  __CEXT_V(string__CDROM_INI)
    extern  fopen__clib3r
    extern  cdrom_ini
    extern  ___182bc8h
    extern  fscanf__clib3r
    extern  ___182bcch
    extern  ___182bd0h
    extern  printf__clib3r
    extern  restore__keyboard
    extern  ___5ec04h
    extern  exit__clib3r

%include "layout.inc"

section @text

global chkcdromini__dr
chkcdromini__dr:
		push    20h
		call    __CHK
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, __CEXT_V(rb_m)         ;; "rb"
		mov     eax, __CEXT_V(string__CDROM_INI)         ;; "CDROM.INI"
		call    fopen__clib3r
		test    eax, eax
		je      @nocdromini
		push    cdrom_ini
		push    ___182bc8h              ;; "%s"
		push    eax
		call    fscanf__clib3r
		add     esp, 0ch
		mov     edi, cdrom_ini
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		cmp     byte [ecx+cdrom_ini-1], 5ch  ;; '\'
		je      @ok
		mov     esi, ___182bcch             ;; "\"
		mov     edi, cdrom_ini
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
		push    ___182bd0h
		call    printf__clib3r
		add     esp, 4
		call    restore__keyboard
		call    ___5ec04h
		mov     eax, 70h
		call    exit__clib3r
@ok:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		retn
%include "macros.inc"

    extern  __CHK
    extern __CEXT_F(open__clib3r)
    extern __CEXT_F(filelength__clib3r)
    extern __CEXT_F(close__clib3r)

%include "layout.inc"

section @text


;; ~3a214h (-1 label)
__GDECL(__CEXT_F(getFileSize__dr))
		push    14h
		call    __CHK
		push    ebx
		push    edx
		push    200h			;; O_RDONLY | O_BINARY
		push    eax
		call    __CEXT_F(open__clib3r)
		add     esp, byte 8
		mov     edx, eax
		call    __CEXT_F(filelength__clib3r)
		mov     ebx, eax
		mov     eax, edx
		call    __CEXT_F(close__clib3r)
		mov     eax, ebx
		pop     edx
		pop     ebx
		retn  

%include "macros.inc"

    extern  __CHK
    
    extern  __CEXT_F(allocMemSafe)
    extern  __CEXT_V(VGABufferPtr_0)
    extern  __CEXT_V(___VGABufferPtr_0)

%include "layout.inc"

section @text

;; ~(1170ah-12200h)
__GDECL(__CEXT_F(allocVGABuffer))
		push    4
		call    __CHK
		mov     eax, 4b000h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(VGABufferPtr_0)], eax
		mov     [__CEXT_V(___VGABufferPtr_0)], eax
		retn   

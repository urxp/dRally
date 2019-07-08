%include "macros.inc"

    extern  __CEXT_V(___60434h)
    extern  __CEXT_V(___60442h)
    extern  __CEXT_V(___60441h)

%include "layout.inc"

section @text

;; 606dfh
__GDECL(__CEXT_F(___606dfh))
		pushad  
		movzx   eax, word [__CEXT_V(___60434h)]
		mov     [__CEXT_V(___60442h)], ax
		imul    eax, eax, 0aaaah
		shr     eax, 10h
		mov     [__CEXT_V(___60434h)], ax
		mov     byte [__CEXT_V(___60441h)], 1
		popad   
		retn    

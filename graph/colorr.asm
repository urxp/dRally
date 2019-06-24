%include "macros.inc"

    extern  __CurrColor
    extern  _GraphMode
    extern  __ConfigBuffer

%include "layout.inc"

section @text

__GDECL(_getcolor)
		mov     ax, [__CurrColor]
		retn    
__GDECL(_setcolor)
		push    edx
		mov     edx, eax
		call    near _GraphMode
		test    ax, ax
		je      short ___7bebdh
		movsx   eax, dx
		call    near _L2setcolor
		pop     edx
		retn    
___7bebdh:
		mov     eax, 0ffffffffh
		pop     edx
		retn    
__GDECL(_L2setcolor)
		push    ebx
		push    edx
		mov     edx, eax
		mov     bx, [__ConfigBuffer+8]
		dec     ebx
		and     edx, ebx
		mov     ax, [__CurrColor]
		mov     [__CurrColor], dx
		pop     edx
		pop     ebx
		retn    

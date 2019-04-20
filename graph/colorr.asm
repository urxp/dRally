cpu 386

	extern	__CurrColor
    extern	_GraphMode_
	extern	__ConfigBuffer

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _getcolor_
_getcolor_:
		mov     ax, [__CurrColor]
		retn    
global _setcolor_
_setcolor_:
		push    edx
		mov     edx, eax
		call    near _GraphMode_
		test    ax, ax
		je      short dr@7bebdh
		movsx   eax, dx
		call    near _L2setcolor_
		pop     edx
		retn    
dr@7bebdh:
		mov     eax, 0ffffffffh
		pop     edx
		retn    
global _L2setcolor_
_L2setcolor_:
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
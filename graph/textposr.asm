%include "macros.inc"

    extern  _InitState
    extern  __TextPos
    extern  __Tx_Row_Min
    extern  __Tx_Col_Min
    extern  _CursorOff
    extern  __Tx_Row_Max
    extern  __Tx_Col_Max
    extern  __CurrActivePage
    extern  _GrEpilog

%include "layout.inc"

section @text

__GDECL(_gettextposition)
		enter   4, 0
		call    near _InitState
		mov     ax, [__TextPos]
		sub     ax, [__Tx_Row_Min]
		inc     eax
		mov     [ebp-4], ax
		mov     ax, [__TextPos+2]
		sub     ax, [__Tx_Col_Min]
		inc     eax
		mov     [ebp-2], ax
		mov     eax, [ebp-4]
		leave   
		retn    
__GDECL(_settextposition)
		push    ebx
		push    ecx
		push    esi
		mov     ebx, eax
		call    near _CursorOff
		call    near _gettextposition
		mov     esi, eax
		mov     ax, [__Tx_Row_Min]
		dec     eax
		add     ebx, eax
		mov     ax, [__Tx_Col_Min]
		dec     eax
		add     edx, eax
		cmp     bx, [__Tx_Row_Min]
		jge     short ___666bah
		mov     bx, [__Tx_Row_Min]
___666bah:
		cmp     bx, [__Tx_Row_Max]
		jle     short ___666cah
		mov     bx, [__Tx_Row_Max]
___666cah:
		cmp     dx, [__Tx_Col_Min]
		jge     short ___666dah
		mov     dx, [__Tx_Col_Min]
___666dah:
		cmp     dx, [__Tx_Col_Max]
		jle     short ___666eah
		mov     dx, [__Tx_Col_Max]
___666eah:
		mov     eax, 200h
		mov     [__TextPos], bx
		shl     ebx, 8
		mov     [__TextPos+2], dx
		add     edx, ebx
		mov     bx, [__CurrActivePage]
		xor     ecx, ecx
		shl     ebx, 8
		push    bp
		int     10h
		pop     bp
		call    near _GrEpilog
		mov     eax, esi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

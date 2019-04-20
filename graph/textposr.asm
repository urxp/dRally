cpu 386

    extern	_InitState_
    extern	__TextPos
    extern	__Tx_Row_Min
    extern	__Tx_Col_Min
    extern	_CursorOff_
    extern	__Tx_Row_Max
    extern	__Tx_Col_Max
    extern	__CurrActivePage
    extern	_GrEpilog_

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _gettextposition_
_gettextposition_:
		enter   4, 0
		call    near _InitState_
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
global _settextposition_
_settextposition_:
		push    ebx
		push    ecx
		push    esi
		mov     ebx, eax
		call    near _CursorOff_
		call    near _gettextposition_
		mov     esi, eax
		mov     ax, [__Tx_Row_Min]
		dec     eax
		add     ebx, eax
		mov     ax, [__Tx_Col_Min]
		dec     eax
		add     edx, eax
		cmp     bx, [__Tx_Row_Min]
		jge     short dr@666bah
		mov     bx, [__Tx_Row_Min]
dr@666bah:
		cmp     bx, [__Tx_Row_Max]
		jle     short dr@666cah
		mov     bx, [__Tx_Row_Max]
dr@666cah:
		cmp     dx, [__Tx_Col_Min]
		jge     short dr@666dah
		mov     dx, [__Tx_Col_Min]
dr@666dah:
		cmp     dx, [__Tx_Col_Max]
		jle     short dr@666eah
		mov     dx, [__Tx_Col_Max]
dr@666eah:
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
		call    near _GrEpilog_
		mov     eax, esi
		pop     esi
		pop     ecx
		pop     ebx
		retn
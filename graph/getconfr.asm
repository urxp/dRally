%include "macros.inc"

    extern  __ConfigBuffer
    extern  __BiosOff
    extern  __BiosSeg
    extern  _SysMonType
    extern  __GrMode
    extern  __CursorShape
    extern  __StartUp
    extern  _InitSegments
    extern  __DefMode
    extern  __DefTextRows
    extern  __Tx_Row_Min
    extern  __Tx_Col_Min
    extern  __Tx_Row_Max
    extern  __TextPos
    extern  __Tx_Col_Max

%include "layout.inc"

section @text

__GDECL(_getvideoconfig)
		push    edx
		push    esi
		push    edi
		push    es
		mov     edx, eax
		call    near _InitState
		push    ds
		pop     es
		mov     edi, edx
		mov     esi, __ConfigBuffer
		mov     eax, edx
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		pop     es
		pop     edi
		pop     esi
		pop     edx
		retn    
__GDECL(_CalcNumPages)
		push    ebx
		push    edx
		push    es
		mov     dx, [__ConfigBuffer+6]
		imul    dx, [__ConfigBuffer+4]
		mov     eax, edx
		xor     al, dl
		and     ah, 0feh
		cmp     ax, dx
		jge     short ___6e6edh
		inc     ah
		inc     ah
___6e6edh:
		mov     edx, [__BiosOff]
		mov     ebx, eax
		;mov     es, [__BiosSeg]
		db	8eh,5
		dd	__BiosSeg
		add     edx, byte 4ch
		add     ebx, eax
		mov     [es:edx], bx
		movsx   edx, word [__ConfigBuffer+14h]
		cmp     edx, byte 40h
		jne     short ___6e717h
		mov     edx, 10h
		jmp     short ___6e71ch
___6e717h:
		mov     edx, 20h
___6e71ch:
		cwde    
		mov     ebx, eax
		movsx   eax, dx
		sar     ebx, 9
		cdq     
		idiv    ebx
		mov     edx, eax
		cwde    
		cmp     eax, byte 8
		jle     short ___6e735h
		mov     edx, 8
___6e735h:
		mov     [__ConfigBuffer+0ch], dx
		pop     es
		pop     edx
		pop     ebx
		retn    
__GDECL(_GetState)
		push    ebx
		push    ecx
		push    edx
		push    es
		mov     word [__ConfigBuffer], 0
		mov     word [__ConfigBuffer+2], 0
		mov     word [__ConfigBuffer+0ah], 0
		mov     word [__ConfigBuffer+38h], 0
		mov     eax, [__BiosOff]
		;mov     es, [__BiosSeg]
		db	8eh,5
		dd	__BiosSeg
		add     eax, 84h
		movzx   ax, byte [es:eax]
		inc     eax
		movsx   edx, ax
		cmp     edx, byte 1
		jne     short ___6e78bh
		mov     eax, 19h
___6e78bh:
		mov     [__ConfigBuffer+6], ax
		mov     eax, [__BiosOff]
		;mov     es, [__BiosSeg]
		db	8eh,5
		dd	__BiosSeg
		add     eax, byte 4ah
		xor     edx, edx
		xor     ecx, ecx
		mov     ax, [es:eax]
		xor     ebx, ebx
		mov     [__ConfigBuffer+4], ax
		mov     eax, 0f00h
		mov     word [__ConfigBuffer+8], 20h
		push    bp
		int     10h
		pop     bp
		xor     ah, ah
		and     al, 7fh
		mov     [__ConfigBuffer+0eh], ax
		call    near _SysMonType
		xor     ah, ah
		cwde    
		mov     dx, [NoSplit eax*2+__AdapTab]
		mov     ax, [NoSplit eax*2+__MonTab]
		mov     [__ConfigBuffer+12h], ax
		movsx   eax, dx
		mov     ax, [NoSplit eax*2+__MemoryTab]
		mov     [__ConfigBuffer+14h], ax
		cwde    
		mov     [__ConfigBuffer+10h], dx
		cmp     eax, byte 0ffffffffh
		jne     short ___6e82ah
		mov     ebx, 10h
		mov     eax, 1200h
		xor     edx, edx
		xor     ecx, ecx
		push    bp
		int     10h
		pop     bp
		xor     bh, bh
		inc     ebx
		shl     ebx, 6
		mov     [__ConfigBuffer+14h], bx
___6e82ah:
		cmp     byte [__GrMode], 0
		jne     short ___6e83fh
		movsx   eax, word [__ConfigBuffer+10h]
		cmp     eax, byte 4
		jge     short ___6e84ah
___6e83fh:
		mov     word [__ConfigBuffer+0ch], 8
		jmp     short ___6e84fh
___6e84ah:
		call    near _CalcNumPages
___6e84fh:
		mov     eax, [__BiosOff]
		;mov     es, [__BiosSeg]
		db	8eh,5
		dd	__BiosSeg
		add     eax, byte 60h
		mov     ax, [es:eax]
		mov     [__CursorShape], ax
		pop     es
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__GDECL(_InitState)
		push    ebx
		push    edx
		push    es
		cmp     byte [__StartUp], 0
		je      short ___6e8f1h
		mov     byte [__StartUp], 0
		call    near _InitSegments
		call    near _GetState
		mov     ax, [__ConfigBuffer+0eh]
		mov     dx, [__ConfigBuffer+6]
		mov     [__DefMode], ax
		mov     [__DefTextRows], dx
		mov     eax, [__BiosOff]
		;mov     es, [__BiosSeg]
		db	8eh,5
		dd	__BiosSeg
		add     eax, byte 50h
		dec     edx
		mov     word [__Tx_Row_Min], 0
		mov     ax, [es:eax]
		mov     word [__Tx_Col_Min], 0
		movzx   ebx, ax
		xor     ah, ah
		mov     [__Tx_Row_Max], dx
		mov     [__TextPos+2], ax
		mov     ax, [__ConfigBuffer+4]
		sar     ebx, 8
		dec     eax
		mov     [__TextPos], bx
		mov     [__Tx_Col_Max], ax
___6e8f1h:
		pop     es
		pop     edx
		pop     ebx
		retn    
__GDECL(_GrInit)
		push    esi
		push    ebp
		mov     ebp, esp
		mov     esi, eax
		mov     byte [__GrMode], 1
		call    near _GetState
		mov     eax, [ebp+14h]
		mov     [__ConfigBuffer], si
		mov     [__ConfigBuffer+2], dx
		mov     [__ConfigBuffer+8], bx
		mov     [__ConfigBuffer+0ah], cx
		mov     edx, [ebp+0ch]
		mov     [__ConfigBuffer+32h], eax
		mov     eax, [ebp+18h]
		mov     [__ConfigBuffer+0ch], dx
		mov     edx, [ebp+10h]
		mov     [__ConfigBuffer+36h], ax
		mov     eax, [ebp+1ch]
		mov     [__ConfigBuffer+30h], dx
		or      [__ConfigBuffer+38h], ax
		mov     eax, [ebp+14h]
		mov     [__ConfigBuffer+2ah], dx
		mov     [__ConfigBuffer+2ch], eax
		pop     ebp
		pop     esi
		ret     14h


section @data

__AdapTab:
    DB	0ffH, 0ffH, 1, 0, 2, 0, 5, 0
    DB	5, 0, 5, 0, 0, 0, 6, 0
    DB	6, 0, 0, 0, 4, 0, 4, 0
    DB	4, 0, 3, 0, 3, 0, 3, 0
    DB	7, 0, 7, 0
__MonTab:
    DB	0ffH, 0ffH, 1, 0, 2, 0, 3, 0
    DB	2, 0, 1, 0, 0, 0, 5, 0
    DB	6, 0, 0, 0, 2, 0, 5, 0
    DB	6, 0, 1, 0, 1, 0, 1, 0
    DB	5, 0, 6, 0
__MemoryTab:
    DB	0, 0, 10H, 0, 10H, 0, 40H, 0
    DB	0, 1, 0ffH, 0ffH, 0, 1, 0, 1

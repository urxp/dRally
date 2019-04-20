cpu 386

    extern	__GrCursor
    extern	__GrMode
    extern	__CurrActivePage
    extern	__BiosOff
    extern	__BiosSeg
    extern	__TextPos
    extern	__CursorShape
    extern	_setplotaction_
    extern	__ConfigBuffer
    extern	__CurrColor
    extern	_L1SLine_
    extern	_setcolor_

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _CursorOn_
_CursorOn_:
		cmp     word [__GrCursor], byte 0
		jne     short dr@6e993h
		cmp     byte [__GrMode], 0
		jne     short dr@6e985h
		mov     eax, 1
		call    near TextCursor_
		jmp     short dr@6e98ah
dr@6e985h:
		call    near GraphCursor_
dr@6e98ah:
		mov     word [__GrCursor], 1
dr@6e993h:
		retn    
global _CursorOff_
_CursorOff_:
		push    ebx
		push    edx
		push    es
		cmp     word [__GrCursor], byte 0
		je      short dr@6e9f9h
		cmp     byte [__GrMode], 0
		jne     short dr@6e9b3h
		xor     eax, eax
		call    near TextCursor_
		jmp     short dr@6e9f0h
dr@6e9b3h:
		movsx   eax, word [__CurrActivePage]
		mov     edx, [__BiosOff]
		add     eax, eax
		;mov     es, [__BiosSeg]
		db	8eh,5
		dd	__BiosSeg
		add     eax, edx
		movsx   edx, word [__TextPos]
		add     eax, byte 50h
		shl     edx, 8
		mov     bx, [es:eax]
		movsx   eax, word [__TextPos+2]
		add     eax, edx
		movsx   edx, bx
		cmp     edx, eax
		jne     short dr@6e9f0h
		call    near GraphCursor_
dr@6e9f0h:
		mov     word [__GrCursor], 0
dr@6e9f9h:
		pop     es
		pop     edx
		pop     ebx
		retn    
TextCursor_:
		push    ebx
		push    ecx
		push    edx
;30:0006ea00
		mov     cx, [__CursorShape]
		test    ax, ax
		jne     short dr@6ea0fh
		or      ch, 20h
dr@6ea0fh:
		mov     eax, 100h
		xor     edx, edx
		xor     ebx, ebx
		push    bp
		int     10h
		pop     bp
		pop     edx
		pop     ecx
		pop     ebx
		retn    
GraphCursor_:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		enter   4, 0
		mov     eax, 4
		call    near _setplotaction_
		mov     esi, eax
		mov     ax, [__ConfigBuffer+8]
		dec     eax
		xor     ah, ah
		and     al, 0fh
		mov     di, [__CurrColor]
		mov     [__CurrColor], ax
		movsx   eax, word [__ConfigBuffer]
		movsx   ebx, word [__ConfigBuffer+4]
		cdq     
		idiv    ebx
		mov     ecx, eax
		movsx   eax, word [__ConfigBuffer+2]
		movsx   ebx, word [__ConfigBuffer+6]
		cdq     
		idiv    ebx
		mov     ebx, eax
		movsx   edx, cx
		movsx   eax, word [__TextPos+2]
		imul    eax, edx
		add     edx, eax
		lea     ecx, [edx-1]
		movsx   edx, word [__TextPos]
		mov     [ebp-4], edx
		movsx   edx, bx
		mov     ebx, [ebp-4]
		inc     ebx
		imul    edx, ebx
		dec     edx
		cwde    
		movsx   edx, dx
		movsx   ebx, cx
		mov     ecx, edx
		call    near _L1SLine_
		movsx   eax, si
		call    near _setplotaction_
		movsx   eax, di
		call    near _setcolor_
		leave   
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
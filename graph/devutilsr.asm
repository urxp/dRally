cpu 386

    extern	__ErrorStatus
    extern	__GrMode
    extern	_CursorOff_
    extern	__CursState
    extern	_CursorOn_
    extern	__ConfigBuffer

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _GraphMode_
_GraphMode_:
		mov     word [__ErrorStatus], 0
		cmp     byte [__GrMode], 0
		jne     short dr@6eadch
		mov     word [__ErrorStatus], 0fffdh
dr@6eadch:
		movzx   ax, byte [__GrMode]
dr@6eae4h:
		retn    
global _GrProlog_
_GrProlog_:
		mov     word [__ErrorStatus], 0
		cmp     byte [__GrMode], 0
		jne     short dr@6eb02h
		mov     word [__ErrorStatus], 0fffdh
;30:0006eb00
		jmp     short dr@6eadch
dr@6eb02h:
		call    near _CursorOff_
		jmp     short dr@6eadch
global _GrEpilog_
_GrEpilog_:
		movsx   eax, word [__CursState]
		cmp     eax, byte 1
		jne     short dr@6eae4h
		jmp     near _CursorOn_
global _InitDevice_
_InitDevice_:
		push    edx
		mov     edx, [__ConfigBuffer+16h]
		cwde    
		call    dword [edx]
		pop     edx
		retn    
global _FiniDevice_
_FiniDevice_:
		mov     eax, [__ConfigBuffer+16h]
		call    dword [eax+4]
		retn  
global _StartDevice_  
_StartDevice_:
		mov     eax, [__ConfigBuffer+16h]
		call    dword [eax+8]
		retn    
global _ResetDevice_
_ResetDevice_:
		mov     eax, [__ConfigBuffer+16h]
		call    dword [eax+0ch]
		retn
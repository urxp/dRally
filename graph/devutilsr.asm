%include "macros.inc"

    extern  __ErrorStatus
    extern  __GrMode
    extern  _CursorOff
    extern  __CursState
    extern  _CursorOn
    extern  __ConfigBuffer

%include "layout.inc"

section @text

__GDECL(_GraphMode)
		mov     word [__ErrorStatus], 0
		cmp     byte [__GrMode], 0
		jne     short ___6eadch
		mov     word [__ErrorStatus], 0fffdh
___6eadch:
		movzx   ax, byte [__GrMode]
___6eae4h:
		retn    
__GDECL(_GrProlog)
		mov     word [__ErrorStatus], 0
		cmp     byte [__GrMode], 0
		jne     short ___6eb02h
		mov     word [__ErrorStatus], 0fffdh
		jmp     short ___6eadch
___6eb02h:
		call    near _CursorOff
		jmp     short ___6eadch
__GDECL(_GrEpilog)
		movsx   eax, word [__CursState]
		cmp     eax, byte 1
		jne     short ___6eae4h
		jmp     near _CursorOn
__GDECL(_InitDevice)
		push    edx
		mov     edx, [__ConfigBuffer+16h]
		cwde    
		call    dword [edx]
		pop     edx
		retn    
__GDECL(_FiniDevice)
		mov     eax, [__ConfigBuffer+16h]
		call    dword [eax+4]
		retn    
__GDECL(_StartDevice)
		mov     eax, [__ConfigBuffer+16h]
		call    dword [eax+8]
		retn    
__GDECL(_ResetDevice)
		mov     eax, [__ConfigBuffer+16h]
		call    dword [eax+0ch]
		retn    

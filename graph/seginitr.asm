cpu 386

    extern	__Extender
    extern	__StackSeg
    extern	__BiosSeg
    extern	__X32VM
    extern	__x386_zero_base_selector
    extern	__BiosOff
    extern	__MonoOff
    extern	__CgaOff
    extern	__EgaOff
    extern	__RomOff
    extern	__MonoSeg
    extern	__CgaSeg
    extern	__EgaSeg
    extern	__RomSeg
    extern	_RMInterrupt2_
    extern	__DBCSPairs
    extern	__IsDBCS

SEGMENT _TEXT    PUBLIC USE32 ALIGN=1 CLASS=CODE

global _InitSegments_
_InitSegments_:
		push    ebx
		push    edx
		push    es
		enter   4, 0
		lea     eax, [ebp-4]
		;mov     edx, ds
		db	8ch,0dah
		movzx   eax, byte [__Extender]
		mov     [__StackSeg], dx
		cmp     eax, byte 1
		je      short dr@7bb80h
		cmp     eax, byte 9
		jne     short dr@7bb8ch
;33:0007bb80
dr@7bb80h:
		mov     eax, __BiosSeg
		;mov     edx, ds
		db	8ch,0dah
		mov     [ebp-4], edx
		jmp     short dr@7bba7h
dr@7bb8ch:
		cmp     byte [__X32VM], 0
		je      short dr@7bba0h
		mov     ax, [__x386_zero_base_selector]
		mov     [ebp-4], eax
		jmp     short dr@7bba7h
dr@7bba0h:
		mov     dword [ebp-4], 0
dr@7bba7h:
		cmp     word [ebp-4], byte 0
		je      short dr@7bc01h
		mov     eax, [ebp-4]
		mov     dword [__BiosOff], 400h
		mov     dword [__MonoOff], 0b0000h
		mov     dword [__CgaOff], 0b8000h
		mov     dword [__EgaOff], 0a0000h
		mov     dword [__RomOff], 0c0000h
		mov     [__BiosSeg], ax
		mov     [__MonoSeg], ax
		mov     [__CgaSeg], ax
		mov     [__EgaSeg], ax
		mov     [__RomSeg], ax
dr@7bc01h:
		mov     edx, 6300h
		mov     eax, 21h
		call    near _RMInterrupt2_
		;mov     es, [__BiosSeg]
		db	8eh,5
		dd	__BiosSeg
		mov     edx, eax
		mov     eax, __DBCSPairs
dr@7bc1dh:
		cmp     byte [es:edx], 0
		je      short dr@7bc35h
		mov     bl, [es:edx]
		mov     [eax], bl
		inc     eax
		inc     eax
		mov     bl, [es:edx+1]
		inc     edx
		inc     edx
		mov     [eax-1], bl
		jmp     short dr@7bc1dh
dr@7bc35h:
		mov     byte [eax], 0
		mov     byte [eax+1], 0
		cmp     byte [__DBCSPairs], 0
		setnz   al
		mov     [__IsDBCS], al
		leave   
		pop     es
		pop     edx
		pop     ebx
		retn
cpu 386

    extern  Saved_ds
    extern  GXModeBuffer_Sel
    extern  TXModeBuffer_Sel
    extern  PIC_InterruptMaskReg
    extern  PIC_InterruptMaskRegCopy
    extern  PIC_Interrupts
    extern  create_Descriptor
    extern  setSegBaseAddress
    extern  setSegLimit

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global dr@60030h
dr@60030h:
		mov     [Saved_ds], ds
		push    ds
		pop     es
		pushad  
		mov     ax, 400h                ; Get Version
		int     31h                     
		mov     edi, PIC_Interrupts     
		mov     ecx, 8
.@1:
		mov     [edi], dh               ; DH = virtual master PIC base interrupt
		inc     edi
		inc     dh
		loop    .@1
		mov     ecx, 8
.@2:
		mov     [edi], dl               ; DL = virtual slave PIC base interrupt
		inc     edi
		inc     dl
		loop    .@2
		in      al, 0a1h
		mov     ah, al
		in      al, 21h
		mov     [PIC_InterruptMaskReg], ax
		mov     [PIC_InterruptMaskRegCopy], ax
		sti     
		call    create_Descriptor
		mov     [GXModeBuffer_Sel], ax
		mov     ebx, 0a0000h
		call    setSegBaseAddress
		mov     ebx, 10000h
		call    setSegLimit
		call    create_Descriptor
		mov     [TXModeBuffer_Sel], ax
		mov     ebx, 0b8000h
		call    setSegBaseAddress
		mov     ebx, 8000h
		call    setSegLimit
		popad   
		retn
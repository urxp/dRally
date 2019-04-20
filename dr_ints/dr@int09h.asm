cpu 386

	extern	ScanCodesMap
	extern	ScanCode
	extern	KeyCode
	extern	KeyCodes
	extern	ShiftKeyCodes
	extern	EScanCode
	
	extern 	ForcedExitCB

	;extern 	__GETDS

SEGMENT _DATA 	PUBLIC USE32 ALIGN=4 CLASS=DATA
SEGMENT _TEXT 	PUBLIC USE32 ALIGN=4 CLASS=CODE

global dr@int09h
dr@int09h:
		push    eax
		push    ebx
		push    ecx
		push    ds
		mov     ax, _DATA
		mov     ds, ax
		;call    __GETDS
		in      al, 60h					; 8042 Keyboard input/output buffer register
		mov     ah, al
		cmp     ah, 0e0h
		jae     @4
		movzx   ebx, ah
		and     bl, 7fh
		add     bl, [EScanCode]
		mov     byte [EScanCode], 0
		rol     ah, 1
		jb      @key_released
		mov     ah, 1
		sub     ah, [ebx+ScanCodesMap]
		mov     byte [ebx+ScanCodesMap], 1
		mov     [ScanCode], bl
		mov     al, [ebx+KeyCodes]
		mov     [KeyCode], al
		mov     al, [ScanCodesMap+2ah]			; Left Shift
		or      al, [ScanCodesMap+36h]			; Right Shift
		cmp     al, 0
		je      @1   
		mov     al, [ebx+ShiftKeyCodes]
		mov     [KeyCode], al
@1:
		mov     al, [ScanCodesMap+1dh]			; Left Ctrl
		add     al, [ScanCodesMap+1dh+80h]		; Right Ctrl
		cmp     al, 1
		jl      @eoi0
		mov     al, [ScanCodesMap+38h]			; Left Alt
		add     al, [ScanCodesMap+38h+80h]		; Right Alt
		cmp     al, 1
		jl      @eoi0
		mov     al, [ScanCodesMap+53h+80h]		; Grey Del
		add     al, [ScanCodesMap+53h]			; Del
		cmp     al, 1
		jl      @eoi0   
		mov     al, 20h					;
		out     20h, al					; EOI
		jmp     [ForcedExitCB]
@eoi0:
		jmp     @eoi
@key_released:										
		mov     byte [ScanCode], 0
		mov     byte [ebx+ScanCodesMap], 0
		jmp     @eoi
@4:
		mov     byte [EScanCode], 80h
@eoi:
		mov     al, 20h					;
		out     20h, al					; EOI
		pop     ds
		pop     ecx
		pop     ebx
		pop     eax
		iret
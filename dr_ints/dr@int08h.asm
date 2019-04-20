cpu 386

    extern  Saved_ds
    extern  dr@60447h
    extern  dr@60450h
    extern  dr@6045ch
    extern  IsWindows
    extern  dr@60441h
    extern  dr@60434h
    extern  dr@60444h
    extern  dr@60436h
    extern  dr@6043ah
    extern  dr@60446h
    extern  dr@6044ch
    extern  dr@60448h
    extern  dr@60454h
    extern  dr@6043fh
    extern  Saved_IRQ0Handler
    extern  dr@6043eh


SEGMENT _TEXT	PUBLIC USE32 ALIGN=4 CLASS=CODE

global dr@int08h
dr@int08h:
		push    ds
		push    es
		mov     ds, [cs:Saved_ds]
		mov     es, [cs:Saved_ds]
		pushad  
;; always falls through ;;;;;;;;;;;;;;;;;;
		cmp     byte [dr@60447h], 1		;;
		jne     @1						;;
		call    [dr@60450h]				;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
@1:
		cmp     dword [dr@6045ch], 0
		je      @4
		cmp     byte [IsWindows], 0
		jne     @4
		cmp     byte [dr@60441h], 0
		jne     @3
;; wait for vertical retrace interval ;;;;
		mov     dx, 3dah				;;
@2:										;;
		in      al, dx		; read input status register #1
		and     al, 8		; check for vertical retrace bit
		je      @2						;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
@3:
		mov     bx, [dr@60434h]
		sub     bx, [dr@60444h]
		mov     al, 30h				; select counter 0 
		out     43h, al				; write LSB followed by write of MSB mode
		mov     al, bl
		out     40h, al				; write LSB
		mov     al, bh
		out     40h, al				; write MSB
@4:
		mov     al, 20h				; EOI
		out     20h, al				; EOI
		inc     dword [dr@60436h]
		inc     dword [dr@6043ah]
		cmp     byte [dr@6043eh], 1
		je      @8
		mov     byte [dr@6043eh], 1
		sti     
		cmp     byte [dr@60446h], 1
		jne     @5
		call    [dr@6044ch]
@5:
		cmp     byte [dr@60448h], 1
		jne     @6
		call    [dr@60454h]
@6:
		mov     ax, [dr@60434h]
		add     [dr@6043fh], ax
		jae     @7
		pushfd  
		call    far [Saved_IRQ0Handler]
@7:
		mov     byte [dr@6043eh], 0
@8:
		popad   
		pop     es
		pop     ds
		iret
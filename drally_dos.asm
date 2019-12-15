cpu 386
%include "macros.inc"

    extern  printf_
	extern	___5fbc0h
	extern	___5fccah
	extern	___5fbc6h
	extern	___5fbc8h
	extern 	___24cc88h
	extern	___60450h
	extern	___6045ch
	extern	___60441h
	extern 	___60447h
	extern	___60434h
	extern	___60444h
	extern	___6043ah
	extern	___6043eh
	extern	___60446h
	extern	___6044ch
	extern	___60448h
	extern	___60454h
	extern	___6043fh
	extern	___60420h
	extern 	int386_
	extern	memset_
	extern	int386x_
	extern 	VGA13_ACTIVESCREEN
	extern 	__MOVS
	extern 	LAST_KEY
	extern	LAST_CHAR
	extern 	INT8_FRAME_COUNTER
	extern 	B8000

section .text



;__GDECL(function)
;	jmp		.around
;.error:	db 	"function not implemented",0ah,0
;.around:
;	push 	.error
;	call 	printf_
;	add 	esp, 4
;	retn


__GDECL(___60030h)
		mov     [___5fbc0h], ds
		push    ds
		pop     es
		pushad  
		mov     ax, 400h
		int     31h
		mov     edi, ___5fccah
		mov     ecx, 8
___6004ah:
		mov     [edi], dh
		inc     edi
		inc     dh
		loop    ___6004ah
		mov     ecx, 8
___60056h:
		mov     [edi], dl
		inc     edi
		inc     dl
		loop    ___60056h
		in      al, 0a1h
		mov     ah, al
		in      al, 21h
		mov     [___5fbc6h], ax
		mov     [___5fbc8h], ax
		sti     
		popad   
		retn    

__GDECL(VGA3_SETMODE)
		mov     ax, 3
		int     10h
		retn    
__GDECL(VGA13_SETMODE)
		mov     ax, 13h
		int     10h
		retn    

__GDECL(DISPLAY_SET_PALETTE_COLOR)
__GDECL(DISPLAY_SET_PALETTE_COLOR_NOUPDATE)
		push    ebp
		push    edi
		mov     ebp, esp
		mov     dx, 3c8h
		mov     al, [ebp+18h]
		out     dx, al
		inc     dx
		mov     al, [ebp+14h]
		out     dx, al
		mov     al, [ebp+10h]
		out     dx, al
		mov     al, [ebp+0ch]
		out     dx, al
		pop     edi
		pop     ebp
		ret     10h

__GDECL(VGA13_PRESENTSCREEN)
		push 	ecx
		push 	esi
		push 	edi
		mov		ecx, 0fa00h
		mov 	esi, VGA13_ACTIVESCREEN
		mov 	edi, 0a0000h
		call 	__MOVS
		pop 	edi
		pop 	esi
		pop 	ecx
		retn

__GDECL(VGA3_SET_CURSORSHAPE)
		push 	ebx
		push 	edx
		sub     esp, byte 1ch
		mov 	__CX(esp), ax
		mov     ebx, 100h
		mov     edx, esp
		mov     eax, 10h
		mov 	__AX(esp), bx
		mov     ebx, esp
		call    near int386_
		add     esp, byte 1ch
		pop		edx
		pop 	ebx
		retn

__GDECL(VGA3_SET_CURSORPOSITION)
		push 	ebx
		push 	edx
		push 	esi
		push 	edi
		sub     esp, byte 1ch
		mov 	__DX(esp), ax
		mov     esi, 200h
		xor     edi, edi
		mov     ebx, esp
		mov     edx, esp
		mov 	__AX(esp), si
		mov     eax, 10h
		mov 	__BX(esp), di
		call    near int386_
		add     esp, byte 1ch
		pop 	edi
		pop		esi
		pop 	edx
		pop 	ebx
		retn


__GDECL(DPMI_ALLOCATE_MEMORY_BLOCK)
	push 	edx
	push 	ebx
		mov     edx, 501h
		mov     ebx, ___24cc88h
		mov 	__AX(___24cc88h), dx
		mov 	__CX(___24cc88h), ax
		shr     eax, 10h
		mov 	__BX(___24cc88h), ax
		mov     edx, ebx
		mov     eax, 31h
		call    near int386_
	xor 	eax, eax
	cmp     __CF(___24cc88h), byte 0
	jne 	.unsuccessful
		mov 	ax, __BX(___24cc88h)
		shl 	eax, 10h
		mov 	ax, __CX(___24cc88h)

.unsuccessful:
	pop 	ebx
	pop 	edx
		retn

__GDECL(DPMI_ALLOCATE_DOS_MEMORY_BLOCK)
		push 	ebx
		push 	ecx
		push 	edx
		mov     ebx, 100h
		mov     __EAX(___24cc88h), 0
		mov     __AX(___24cc88h), bx
		add 	eax, 0fh
		shr     eax, 4
		mov     ebx, ___24cc88h
		mov     __BX(___24cc88h), ax
		mov     eax, 31h
		mov     edx, ebx
		call    near int386_
		xor		eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne      .failed
		mov 	eax, 1
.failed:
		pop 	edx
		pop 	ecx
		pop 	ebx
		retn



__GDECL(DPMI_LOCK_LINEAR_REGION)
		push 	ebx
		push 	ecx
		push 	edx
		push 	esi
		mov     esi, 600h
		mov     edx, [eax+1]
		mov     ebx, ___24cc88h
		shr     edx, 10h
		mov     __AX(___24cc88h), si
		mov     __BX(___24cc88h), dx
		mov     edx, [eax+5]
		mov     si, [eax+1]
		shr     edx, 10h
		mov     ax, [eax+5]
		mov     __SI(___24cc88h), dx
		mov     __DI(___24cc88h), ax
		mov     eax, 31h
		mov     edx, ebx
		mov     __CX(___24cc88h), si
		call    near int386_
		xor 	eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne     .failed
		mov 	eax, 1
.failed:
		pop 	esi
		pop 	edx
		pop 	ecx
		pop 	ebx
		retn

__GDECL(DPMI_UNLOCK_LINEAR_REGION)
	push 	ebx
	push 	ecx
	push 	edx
	push 	edi
		mov 	edi, eax
		mov     eax, [edi+1]
		shr     eax, 10h
		mov     __BX(___24cc88h), ax
		mov     ax, [edi+1]
		mov     edx, 601h
		mov     __CX(___24cc88h), ax
		mov     eax, [edi+5]
		mov     ebx, ___24cc88h
		shr     eax, 10h
		mov     __AX(___24cc88h), dx
		mov     __SI(___24cc88h), ax
		mov     ax, [edi+5]
		mov     edx, ebx
		mov     __DI(___24cc88h), ax
		mov     eax, 31h
		call    near int386_
		xor 	eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne     .failed
		mov 	eax, 1
.failed:
	pop 	edi
	pop 	edx
	pop 	ecx
	pop 	ebx
		retn



__GDECL(DPMI_FREE_MEMORY_BLOCK)
	push 	ecx
	push 	ebx
	push 	edx	
		mov     __DI(___24cc88h), ax
		shr     eax, 10h
		mov     ecx, 502h
		mov     __SI(___24cc88h), ax
		mov     eax, 31h
		mov     __AX(___24cc88h), cx
		mov     ebx, ___24cc88h
		mov     edx, ebx
		call    near int386_
		xor 	eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne     .failed
		mov 	eax, 1
.failed:
	pop 	edx
	pop 	ebx
	pop 	ecx
	retn

__GDECL(DPMI_FREE_DOS_MEMORY_BLOCK)
	push 	ebx
	push 	edx
		mov     ebx, 101h
		mov     __AX(___24cc88h), bx
		mov     __DX(___24cc88h), ax
		mov     ebx, ___24cc88h
		mov     eax, 31h
		mov     edx, ebx
		call    near int386_
		xor 	eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne     .failed
		mov 	eax, 1
.failed:
	pop 	edx
	pop 	ebx
	retn



__GDECL(DPMI_RESIZE_MEMORY_BLOCK)
	push 	edi
	push 	ebx
	push 	edx
		mov 	edi, edx
		mov     edx, 503h
		mov     __AX(___24cc88h), dx
		mov     __DI(___24cc88h), ax
		shr     eax, 10h
		mov     __SI(___24cc88h), ax
		mov     eax, edi
		mov     ebx, ___24cc88h
		shr     eax, 10h
		mov     edx, ebx
		mov     __BX(___24cc88h), ax
		mov     eax, 31h
		mov     __CX(___24cc88h), di
		call    near int386_
		xor 	eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne		.failed
		mov 	eax, 1
.failed:
	pop 	edx
	pop 	ebx
	pop 	edi
	retn


__GDECL(DPMI_RESIZE_DOS_MEMORY_BLOCK)
	push 	edi
	push 	ebx
		mov 	edi, edx
		mov     __AX(___24cc88h), 102h
		lea     ebx, [edi+0fh]
		shr     ebx, 4
		mov     __DX(___24cc88h), ax
		mov     __BX(___24cc88h), bx
		mov     ebx, ___24cc88h
		mov     eax, 31h
		mov     edx, ebx
		call    near int386_
		xor 	eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne		.failed
		mov 	eax, 1
.failed:
	pop 	ebx
	pop 	edi
	retn


__GDECL(GET_IRQ_ISR)
	cli
		push    eax
		push    ebx
		push 	ecx
		push    ds
		push    es
		movzx   eax, al
		mov     al, [eax+___5fccah]
		xor     ebx, ebx
		mov     ds, ebx
		mov     es, ebx
		mov     ah, 35h
		int     21h
		mov 	[edx], ebx
		mov     ecx, es
		mov 	[edx+4], cx
		pop     es
		pop     ds
		pop 	ecx
		pop     ebx
		pop     eax
	sti
		retn    


__GDECL(SET_IRQ_ISR)
	cli
		pushad  
		push    ds
		push    es
		movzx   eax, al
		mov     al, [eax+___5fccah]
		xor     ebx, ebx
		xor 	ecx, ecx
		mov 	cx, [edx+4]
		mov 	edx, [edx]
		mov     es, ebx
		mov     ds, ecx
		mov     ah, 25h
		int     21h
		pop     es
		pop     ds
		popad   
	sti
		retn    

__GDECL(GET_VRETRACE_INTERVAL)
	push 	ebx
	push 	ecx
	push 	edx
	xor 	ecx, ecx
		pushfd  
		cli     
		call 	VRETRACE_WAIT_FOR_START
		mov     al, 30h
		out     43h, al
		xor     al, al
		out     40h, al
		out     40h, al
		call 	VRETRACE_WAIT_FOR_START
		xor     al, al
		out     43h, al
		in      al, 40h
		mov     bl, al
		in      al, 40h
		mov     bh, al
		call 	VRETRACE_WAIT_FOR_START
		xor     al, al
		out     43h, al
		in      al, 40h
		mov     cl, al
		in      al, 40h
		mov     ch, al
		neg     cx
		add     cx, bx
		mov 	eax, ecx
		popfd   
	pop 	edx
	pop 	ecx
	pop 	ebx
	retn

__GDECL(VRETRACE_WAIT_FOR_START)
		push    eax
		push    edx
		mov     dx, 3dah
.active:
		in      al, dx
		and     al, 8
		jne     .active
.inactive:
		in      al, dx
		and     al, 8
		je      .inactive
		pop     edx
		pop     eax
		retn

__GDECL(TIMER_SET_TIMER)
	push 	eax
	push 	ecx
		mov 	ecx, eax
		mov     al, 30h
		out     43h, al
		mov     al, cl
		out     40h, al
		mov     al, ch
		out     40h, al
	pop 	ecx
	pop 	eax
	retn 

__GDECL(TIMER_SET_INTERVAL)
	push 	eax
	push 	ecx
		mov 	ecx, eax
		mov     al, 36h
		out     43h, al
		mov 	al, cl
		out     40h, al
		mov 	al, ch
		out     40h, al
	pop 	ecx
	pop 	eax
	retn

__GDECL(ENABLE_IRQ)
		pushad  
		pushfd  
		cli     
		mov     cl, al
		in      al, 0a1h
		mov     ah, al
		in      al, 21h
		mov     bx, 1
		shl     bx, cl
		not     bx
		and     ax, bx
		out     21h, al
		mov     al, ah
		out     0a1h, al
		popfd   
		popad   
		retn     

__GDECL(RESTORE_IRQ_MASKS)
		pushad  
		mov     ax, [___5fbc6h]
		out     21h, al
		mov     al, ah
		out     0a1h, al
		sti     
		popad   
		retn   

__GDECL(DPMI_GET_FREE_MEMORY_INFORMATION)
		push    ebx
		push    ecx
		push    edx
		sub     esp, byte 58h
		mov     edx, 500h
		mov     ebx, 0ch
		lea     eax, [esp+4ch]
		mov 	__EAX(esp+30h), edx
		xor     edx, edx
		lea     ecx, [esp+4ch]
		call    near memset_
		mov     eax, esp
		mov     edx, ds
		lea     ebx, [esp+30h]
		mov     eax, esp
		mov 	__ES(esp+4ch), dx
		lea     edx, [esp+30h]
		mov 	__EDI(esp+30h), eax
		mov     eax, 31h
		call    near int386x_
		mov     eax, [esp]
		add     esp, byte 58h
		pop     edx
		pop     ecx
		pop     ebx
		retn    

__GDECL(POP_LAST_CHAR)
		cli     
		xor     eax, eax
		mov     al, [LAST_CHAR]
		mov     byte [LAST_CHAR], 0
		sti     
		retn    
__GDECL(POP_LAST_KEY)
		cli     
		xor     eax, eax
		mov     al, [LAST_KEY]
		mov     byte [LAST_KEY], 0
		sti     
		retn    

__GDECL(getTimerTicks)
		;mov     eax, 46ch
		;mov     eax, [eax]
        mov     eax, [46ch]
        retn

__GDECL(VESA101_SETMODE)
        push    ebx
		mov     ax, 4f02h
		mov     bx, 101h
		int     10h
        pop     ebx
        retn
__GDECL(VESA101_PRESENTSCREEN)
        retn


__GDECL(GET_FRAME_COUNTER)
		mov     eax, [INT8_FRAME_COUNTER]
		retn    


__GDECL(VRETRACE_WAIT_IF_INACTIVE)
		mov     dx, 3dah
.inactive:
		in      al, dx
		and     al, 8
		je      .inactive
		retn

__GDECL(IRQ0_TimerISR)
		push    ds
		push    es
		mov     ds, [cs:___5fbc0h]
		mov     es, [cs:___5fbc0h]
		pushad  
		cmp     byte [___60447h], 1
		jne     ___60799h
		call    dword [___60450h]
___60799h:
		cmp     dword [___6045ch], byte 0
		je      ___607d7h
		cmp     byte [___60441h], 0
		jne     ___607bdh
		call 	VRETRACE_WAIT_IF_INACTIVE
___607bdh:
		mov     bx, [___60434h]
		sub     bx, [___60444h]
		mov     al, 30h
		out     43h, al
		mov     al, bl
		out     40h, al
		mov     al, bh
		out     40h, al
___607d7h:
		mov     al, 20h
		out     20h, al
		inc     dword [INT8_FRAME_COUNTER]
		inc     dword [___6043ah]
		cmp     byte [___6043eh], 1
		je      ___60833h
		mov     byte [___6043eh], 1
		sti     
		cmp     byte [___60446h], 1
		jne     ___60807h
		call    dword [___6044ch]
___60807h:
		cmp     byte [___60448h], 1
		jne     ___60816h
		call    dword [___60454h]
___60816h:
		mov     ax, [___60434h]
		add     [___6043fh], ax
		jae     ___6082ch
		pushfd  
		call    far dword far [___60420h]
___6082ch:
		mov     byte [___6043eh], 0
___60833h:
		popad   
		pop     es
		pop     ds
		iret    

__GDECL(DISPLAY_GET_PALETTE)
	push 	edx
	push 	ebx
	push 	ecx
	push 	esi
		mov 	esi, [esp+14h]
		xor 	ebx, ebx
___45831h:
		mov     al, bl
		mov     edx, 3c7h
		out     dx, al
		mov     edx, 3c9h
		sub     eax, eax
		in      al, dx
		inc     ebx
		mov     [esi], al
		sub     eax, eax
		in      al, dx
		mov     [esi+1], al
		sub     eax, eax
		in      al, dx
		mov     [esi+2], al
		add     esi, byte 3
		cmp     ebx, 100h
		jl      short ___45831h
	pop 	esi
	pop 	ecx
	pop 	ebx
	pop 	edx
		retn

__GDECL(VGA3_PRESENTSCREEN)
		push 	ecx
		push 	esi
		push 	edi
		mov		ecx, 0fa0h
		mov 	esi, B8000
		mov 	edi, 0b8000h
		call 	__MOVS
		pop 	edi
		pop 	esi
		pop 	ecx
		retn

__GDECL(WAIT_5)
	retn

cpu 386
%include "macros.inc"

    extern 	main_
    extern  printf
	extern 	fscanf
	extern 	open
	extern 	close
    extern  strcasecmp
    extern  strcmp
    extern  rand
    extern  memset
	extern 	memcpy
    extern  getenv
    extern	fopen
	extern 	fclose
	extern 	fread
	extern 	fgetc
	extern 	fwrite
	extern 	fputc
	extern 	fseek
	extern 	strupr
	extern 	putchar
	extern 	malloc
	extern 	realloc
	extern 	free
	extern 	exit
	extern 	srand
	extern 	strncmp
	extern	___60447h
	extern	___60450h
	extern	___6045ch
	extern	___60441h
	extern	___6043ah
	extern	___6043eh
	extern	___60446h
	extern	___6044ch
	extern	___60448h
	extern	___60454h
    extern  __STRCPY
	extern 	__VGA13_SETMODE
	extern 	__VGA13_PRESENTSCREEN
	extern 	__VESA101_PRESENTSCREEN
	extern 	__MOVS
	extern 	INT8_FRAME_COUNTER
	extern 	__DISPLAY_SET_PALETTE_COLOR
	extern 	__DISPLAY_SET_PALETTE_COLOR_NOUPDATE
	extern 	LAST_KEY
	extern 	__GET_FRAME_COUNTER
	extern 	__VESA101_SETMODE
	extern 	__TIMER_SET_TIMER
	extern 	__VRETRACE_WAIT_FOR_START
	extern 	__VRETRACE_WAIT_IF_INACTIVE 	
	extern 	__DPMI_ALLOCATE_DOS_MEMORY_BLOCK
	extern 	__DPMI_FREE_DOS_MEMORY_BLOCK
	extern	___5a0bah
	extern	___59e10h
	extern	___59f12h
	extern	LAST_CHAR
	extern	___59e3ah
	extern	___59e46h
	extern	___59fe6h
	extern	___59e2dh
	extern	___59eadh
	extern	___59e48h
	extern	___59ec8h
	extern	___59ee3h
	extern	___59e63h
	extern	___2432c8h
	extern 	__GET_TIMER_TICKS
	extern 	__VGA3_PRESENTSCREEN
	extern 	__WAIT_5
	extern 	mlock
	extern 	munlock

section .text

__GDECL(WAIT_5)
	pushad
	call 	__WAIT_5
	popad
	retn

__GDECL(drally_main)
        mov     eax, [esp+4]
        mov     edx, [esp+8]
        call    main_
        retn

__GDECL(exit_)
	push 	eax
	call 	exit
	add 	esp, 4
	retn


__GDECL(__CHP)
	push		eax
	fstcw		[esp]
	fwait
	push		dword [esp]
	mov			byte [esp+1], 1fh
	fldcw		[esp]
	frndint
	fldcw		[esp+4]
	fwait
	lea			esp, [esp+8]
	ret

__GDECL(__STOSB)
	or		ecx,ecx
	je		.L$3
	cmp		[eax],dl
.L$1:
	test	al,3
	je		.L$2
	mov		[eax],dl
	inc		eax
	ror		edx,8
	dec		ecx
	jne		.L$1
.L$2:
	push	ecx
	shr		ecx,2
	call	__STOSD
	pop		ecx
	and		ecx,3
	je		.L$3
	mov		[eax],dl
	dec		ecx
	je		.L$3
	mov		[eax+1],dh
	dec		ecx
	je		.L$3
	mov		[eax+2],dl
.L$3:
	ret

__GDECL(__STOSD)
	or		ecx,ecx
	je		.L$10
.L$4:
	test	al,1fh
	je		.L$5
	mov		[eax],edx
	lea		eax,[eax+4]
	dec		ecx
	jne		.L$4
.L$5:
	push	ecx
	shr		ecx,2
	je		.L$9
	dec		ecx
	je		.L$8
.L$6:
	mov		[eax],edx
	mov		[eax+4],edx
	dec		ecx
	mov		[eax+8],edx
	mov		[eax+0ch],edx
	je		.L$7
	cmp		[eax+20h],dl
	mov		[eax+10h],edx
	mov		[eax+14h],edx
	dec		ecx
	mov		[eax+18h],edx
	mov		[eax+1ch],edx
	lea		eax,[eax+20h]
	jne		.L$6
	lea		eax,[eax-10h]
.L$7:
	lea		eax,[eax+10h]
.L$8:
	mov		[eax],edx
	mov		[eax+4],edx
	mov		[eax+8],edx
	mov		[eax+0ch],edx
	lea		eax,[eax+10h]
.L$9:
	pop		ecx
	and		ecx,3
	je		.L$10
	mov		[eax],edx
	lea		eax,[eax+4]
	dec		ecx
	je		.L$10
	mov		[eax],edx
	lea		eax,[eax+4]
	dec		ecx
	je		.L$10
	mov		[eax],edx
	lea		eax,[eax+4]
.L$10:
	ret



__GDECL(__CHK)
        retn    4

__GDECL(printf_)
	;jmp 	printf
		mov 	[save_ecx], ecx
		mov 	[save_edx], edx
		pop 	dword [save_esp]
        call	printf
		push 	dword [save_esp]
		mov 	edx, [save_edx]
		mov 	ecx, [save_ecx]
		retn

__GDECL(putchar_)
		push 	edx
		push 	ecx
		push 	eax
		call 	putchar
		add 	esp, 4
		pop 	ecx
		pop 	edx
		retn



__GDECL(fscanf_)
		mov 	[save_ecx], ecx
		mov 	[save_edx], edx
		pop 	dword [save_esp]
        call	fscanf
		push 	dword [save_esp]
		mov 	edx, [save_edx]
		mov 	ecx, [save_ecx]
		retn
__GDECL(open_)
		mov 	[save_ecx], ecx
		mov 	[save_edx], edx
		pop 	dword [save_esp]
        call	open
		push 	dword [save_esp]
		mov 	edx, [save_edx]
		mov 	ecx, [save_ecx]
		retn


__GDECL(close_)
	push 	ecx
	push 	edx
	push 	eax
	call 	close
	add 	esp, 4
	pop 	edx
	pop 	ecx
	retn


__GDECL(stricmp_)
        push    edx
        push    eax
        call    strcasecmp
        add     esp, 8
        retn
__GDECL(strcmp_)
		push 	ecx
        push    edx
        push    eax
        call    strcmp
        add     esp, 8
		pop 	ecx
        retn
__GDECL(memset_)
		push 	ecx
        push    ebx
        push    edx
        push    eax
        call    memset
        add     esp, 0ch
		pop 	ecx
        retn

initrandnext_:
	mov		eax, rand_next
	ret
__GDECL(rand_)
	push		edx
	call		initrandnext_
	test		eax,eax
	je		.L$1
	imul		edx, dword [eax], 41c64e6dH
	add		edx,3039H
	mov		[eax],edx
	mov		eax,edx
	shr		eax,10H
	and		eax,7fffH
.L$1:
	pop		edx
	ret
__GDECL(srand_)
	push		edx
	mov		edx,eax
	call		initrandnext_
	test		eax,eax
	je		.L$2
	mov		[eax],edx
.L$2:
	pop		edx
	ret




__GDECL(getenv_)
        push    eax
        call    getenv
        add     esp, 4
        retn



__GDECL(fopen_)
		push 	ecx
       	push    esi
        push    edi
		push 	ebx

		push    edx

        mov     esi, eax
        mov     edi, filename
        call    __STRCPY
        mov     eax, filename
        call    strupr_

		push 	filename
		call 	fopen
        add     esp, 8
		pop 	ebx
		pop		edi
		pop 	esi
		pop 	ecx
        retn



__GDECL(fclose_)
		push 	edx
		push 	ecx
        push    eax
        call    fclose
        add     esp, 4
		pop 	ecx
		pop 	edx
        retn
__GDECL(fread_)
		push 	ecx
		push 	ebx
        push    edx
        push    eax
        call    fread
        add     esp, 10h
        retn
__GDECL(fgetc_)
		push 	ecx
		push 	edx
        push    eax
        call    fgetc
        add     esp, 4
		pop 	edx
		pop 	ecx
        retn
__GDECL(fwrite_)
		push 	ecx
		push 	ebx
        push    edx
        push    eax
        call    fwrite
        add     esp, 10h
        retn
__GDECL(fputc_)
		push 	ecx
        push    edx
        push    eax
        call    fputc
        add     esp, 8
		pop 	ecx
        retn




__GDECL(strupr_)
		push		ebx
		push		ecx
		push		edx
		mov		ecx,eax
		mov		edx,eax
.L$1:
		mov		al,[edx]
		test		al,al
		je		.L$3
		sub		al,61h
		xor		ebx,ebx
		mov		bl,al
		cmp		ebx,19h
		jg		.L$2
		add		al,41h
		mov		[edx],al
.L$2:
		inc		edx
		jmp		.L$1
.L$3:
		mov		eax,ecx
		pop		edx
		pop		ecx
		pop		ebx
		retn

__GDECL(strlwr_)
	push		ebx
	push		ecx
	push		edx
	mov		ecx,eax
	mov		edx,eax
.L$1:
	mov		al,[edx]
	test		al,al
	je		.L$3
	sub		al,41h
	xor		ebx,ebx
	mov		bl,al
	cmp		ebx,19h
	jg		.L$2
	add		al,61h
	mov		[edx],al
.L$2:
	inc		edx
	jmp		.L$1
.L$3:
	mov		eax,ecx
	pop		edx
	pop		ecx
	pop		ebx
	ret

__GDECL(ceil_)
	push		ebp
	mov		ebp,esp
	push		eax
	fld		qword [ebp+8]
	sub		esp,8
	fchs
	fstp		qword [esp]
	call		floor_
	fchs
	pop		eax
	pop		ebp
	ret		8

__GDECL(floor_)
	push		ebp
	mov		ebp,esp
	push		eax
	push		ebx
	push		edx
	sub		esp,8
	lea		eax,[ebp-14h]
	push		eax
	mov		edx,[ebp+0ch]
	push		edx
	mov		ebx,[ebp+8]
	push		ebx
	call		modf_
	fldz
	fcompp
	fnstsw		ax
	sahf
	jbe		.L$1
	fld		qword [ebp-14h]
	fadd		qword [floor_const]
	fstp		qword [ebp-14h]
.L$1:
	fld		qword [ebp-14h]
	lea		esp,[ebp-0ch]
	pop		edx
	pop		ebx
	pop		eax
	pop		ebp
	ret		8

floor_const:
db	0, 0, 0, 0, 0, 0, 0f0H, 0bfH

modf_:
	push		eax
	fld		qword [esp+8]
	fld		st0
	call		__CHP
	fsub		st1,st0
	mov		eax,[esp+10h]
	fstp		qword [eax]
	pop		eax
	fwait
	ret		0cH



__GDECL(fseek_)
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
	call 	fseek
	add 	esp, 0ch
	pop 	ecx
	retn

__GDECL(strncmp_)
		push 	edi
		push 	esi
		push 	ecx
		push 	ebx
		push 	edx
		push 	eax
		call 	strncmp
		add 	esp, 0ch
		pop 	ecx
		pop 	esi
		pop 	edi
		retn










__GDECL(int386x_)
	jmp		.around
.error:	db 	"int386x_ not implemented",0ah,0
.around:
	pushad
	push 	.error
	call 	printf
	add 	esp, 4
	popad
	retn
__GDECL(int386_)
	jmp		.around
.error:	db 	"int386_ not implemented",0ah,0
.around:
	push 	edx
	push 	ecx
	push 	.error
	call 	printf
	add 	esp, 4
	pop 	ecx
	pop 	edx
	retn
__GDECL(toupper_)
	jmp		.around
.error:	db 	"toupper_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn
__GDECL(strcat_)
	jmp		.around
.error:	db 	"strcat_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn
__GDECL(outp_)
	jmp		.around
.error:	db 	"outp_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn
__GDECL(inp_)
	jmp		.around
.error:	db 	"inp_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn

__GDECL(ftell_)
	jmp		.around
.error:	db 	"ftell_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn


__GDECL(malloc_)
	push 	edx
	push 	ecx
	push 	eax
	call 	malloc
	add 	esp, 4
	pop 	ecx
	pop 	edx
	retn

__GDECL(free_)
	push 	edx
	push 	ecx
	push 	eax
	call 	free
	add 	esp, 4
	pop 	ecx
	pop 	edx
	retn


__GDECL(strlen_)
	jmp		.around
.error:	db 	"strlen_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn
__GDECL(_fmemcpy_)
	jmp		.around
.error:	db 	"_fmemcpy_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn
__GDECL(memcpy_)
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
	call 	memcpy
	add 	esp, 4
	pop 	ecx
	retn
__GDECL(sscanf_)
	jmp		.around
.error:	db 	"sscanf_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn
__GDECL(scanf_)
	jmp		.around
.error:	db 	"scanf_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn
__GDECL(vsprintf_)
	jmp		.around
.error:	db 	"vsprintf_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn
__GDECL(__GETDS)
	jmp		.around
.error:	db 	"__GETDS not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn
__GDECL(strcpy_)
	jmp		.around
.error:	db 	"strcpy_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn

__GDECL(putch_)
	jmp		.around
.error:	db 	"putch_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn


__GDECL(_settextposition_)
	jmp		.around
.error:	db 	"_settextposition_(%d, %d) not implemented",0ah,0
.around:
	push 	ecx
	push 	edx
	push 	eax
	push 	.error
	call 	printf
	add 	esp, 0ch
	pop 	ecx
	retn

__GDECL(kbhit_)
	jmp		.around
.error:	db 	"kbhit_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn
__GDECL(filelength_)
	jmp		.around
.error:	db 	"filelength_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn
__GDECL(_dos_gettime_)
	jmp		.around
.error:	db 	"_dos_gettime_ not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn
__GDECL(strstr_)
	jmp		.around
.error:	db 	"function not implemented",0ah,0
.around:
	push 	.error
	call 	printf
	add 	esp, 4
	retn



__GDECL(GET_FRAME_COUNTER)
;		jmp		.around
;.error:	db 	"GET_FRAME_COUNTER not implemented",0ah,0
;.around:
;		pushad
;		push 	.error
;		call 	printf
;		add 	esp, 4
;		popad
;		mov     eax, [INT8_FRAME_COUNTER]
;		inc 	dword [INT8_FRAME_COUNTER] ;;;; TEST
;		retn   
	push 	ecx
	push 	edx
	call 	__GET_FRAME_COUNTER
	pop 	edx
	pop 	ecx
	retn

__GDECL(___60030h)
	jmp		.around
.error:	db 	"___60030h not implemented",0ah,0
.around:
	pushad
	push 	.error
	call 	printf
	add 	esp, 4
	popad
	retn

__GDECL(VGA3_SETMODE)
	jmp		.around
.error:	db 	"VGA3_SETMODE not implemented",0ah,0
.around:
	pushad
	push 	.error
	call 	printf
	add 	esp, 4
	popad
	retn
__GDECL(VGA13_SETMODE)
	jmp		.around
.error:	db 	"VGA13_SETMODE not implemented",0ah,0
.around:
	pushad
	push 	.error
	call 	printf
	add 	esp, 4
	call 	__VGA13_SETMODE
	popad
	retn


__GDECL(DISPLAY_SET_PALETTE_COLOR)
		mov 	[save_eax], eax
		mov 	[save_ecx], ecx
		mov 	[save_edx], edx
		pop 	dword [save_esp]
        call	__DISPLAY_SET_PALETTE_COLOR
		push 	dword [save_esp]
		mov 	edx, [save_edx]
		mov 	ecx, [save_ecx]
		mov 	eax, [save_eax]
		ret     10h

__GDECL(DISPLAY_SET_PALETTE_COLOR_NOUPDATE)
		mov 	[save_eax], eax
		mov 	[save_ecx], ecx
		mov 	[save_edx], edx
		pop 	dword [save_esp]
        call	__DISPLAY_SET_PALETTE_COLOR_NOUPDATE
		push 	dword [save_esp]
		mov 	edx, [save_edx]
		mov 	ecx, [save_ecx]
		mov 	eax, [save_eax]
		ret     10h

__GDECL(VGA13_PRESENTSCREEN)
		;pushad
		;call 	__VGA13_PRESENTSCREEN
		;popad
		retn
__GDECL(VESA101_PRESENTSCREEN)
		;pushad
		;call 	__VESA101_PRESENTSCREEN
		;popad
		retn

__GDECL(POP_LAST_CHAR)
		;cli     
		xor     eax, eax
		mov     al, [LAST_CHAR]
		mov     byte [LAST_CHAR], 0
		;sti     
		retn     
__GDECL(POP_LAST_KEY)
		;cli     
		xor     eax, eax
		mov     al, [LAST_KEY]
		mov     byte [LAST_KEY], 0
		;sti     
		retn 

__GDECL(getTimerTicks)
		jmp		.around
.error:	db 	"[FIX] getTimerTicks sufficient, however not correctly implemented",0ah,0
.around:
		pushad
		push 	.error
		call 	printf
		add 	esp, 4
		popad

		push 	ecx
		push 	edx
		call 	__GET_TIMER_TICKS
		pop 	edx
		pop 	ecx

		retn

__GDECL(VESA101_SETMODE)
	jmp		.around
.error:	db 	"VESA101_SETMODE not implemented",0ah,0
.around:
	pushad
	push 	.error
	call 	printf
	add 	esp, 4
	call 	__VESA101_SETMODE
	popad
	retn

__GDECL(VGA3_PRESENTSCREEN)
	pushad
	push 	eax
	call 	__VGA3_PRESENTSCREEN
	add 	esp, 4
	popad
	retn

















__GDECL(VGA3_SET_CURSORSHAPE)
__GDECL(VGA3_SET_CURSORPOSITION)
	retn


__GDECL(GET_IRQ_ISR)
	jmp		.around
.error:	db 	"GET_IRQ_ISR not implemented",0ah,0
.around:
		push    eax
		push    edx
		push 	ecx
	push 	.error
	call 	printf
	add 	esp, 4
		pop 	ecx
		pop     edx
		pop     eax
		retn    

__GDECL(SET_IRQ_ISR)
	jmp		.around
.error:	db 	"SET_IRQ_ISR not implemented",0ah,0
.around:
		push    eax
		push    edx
		push 	ecx
	push 	.error
	call 	printf
	add 	esp, 4
		pop 	ecx
		pop     edx
		pop     eax
		retn    

__GDECL(GET_VRETRACE_INTERVAL)
	jmp		.around
.error:	db 	"GET_VRETRACE_INTERVAL not implemented",0ah,0
.around:
		push    eax
		push    edx
		push 	ecx
	push 	.error
	call 	printf
	add 	esp, 4
		pop 	ecx
		pop     edx
		pop     eax
		retn    

__GDECL(VRETRACE_WAIT_FOR_START)
	jmp		.around
.error:	db 	"VRETRACE_WAIT_FOR_START not implemented",0ah,0
.around:
		pushad
	push 	.error
	call 	printf
	add 	esp, 4
	call 	__VRETRACE_WAIT_FOR_START
		popad
		retn    

__GDECL(TIMER_SET_TIMER)
	jmp		.around
.error:	db 	"TIMER_SET_TIMER not implemented",0ah,0
.around:
		pushad
	push 	.error
	call 	printf
	add 	esp, 4
	call 	__TIMER_SET_TIMER
		popad
		retn    

__GDECL(TIMER_SET_INTERVAL)
	jmp		.around
.error:	db 	"TIMER_SET_INTERVAL not implemented",0ah,0
.around:
		push    eax
		push    edx
		push 	ecx
	push 	.error
	call 	printf
	add 	esp, 4
		pop 	ecx
		pop     edx
		pop     eax
		retn    

__GDECL(ENABLE_IRQ)
	jmp		.around
.error:	db 	"ENABLE_IRQ not implemented",0ah,0
.around:
		push    eax
		push    edx
		push 	ecx
	push 	.error
	call 	printf
	add 	esp, 4
		pop 	ecx
		pop     edx
		pop     eax
		retn    

__GDECL(RESTORE_IRQ_MASKS)
	jmp		.around
.error:	db 	"RESTORE_IRQ_MASKS not implemented",0ah,0
.around:
		push    eax
		push    edx
		push 	ecx
	push 	.error
	call 	printf
	add 	esp, 4
		pop 	ecx
		pop     edx
		pop     eax
		retn    

__GDECL(DPMI_GET_FREE_MEMORY_INFORMATION)
		mov 	eax, 57b0cch
		retn    

__GDECL(VRETRACE_WAIT_IF_INACTIVE)
	push 	ecx
	push 	edx
	push 	eax
	call 	__VRETRACE_WAIT_IF_INACTIVE
	pop 	eax
	pop 	edx
	pop 	ecx
		retn 

__GDECL(IRQ0_TimerISR)
;	jmp		.around
;.error:	db 	"IRQ0_TimerISR not implemented",0ah,0
;.around:
		pushad
;	push 	.error
;	call 	printf
;	add 	esp, 4

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
	;	mov     bx, [___60434h]
	;	sub     bx, [___60444h]
	;	mov     al, 30h
	;	out     43h, al
	;	mov     al, bl
	;	out     40h, al
	;	mov     al, bh
	;	out     40h, al
___607d7h:
	;	mov     al, 20h
	;	out     20h, al
		inc     dword [INT8_FRAME_COUNTER]
		inc     dword [___6043ah]
		cmp     byte [___6043eh], 1
		je      ___60833h
		mov     byte [___6043eh], 1
;		sti     
		cmp     byte [___60446h], 1
		jne     ___60807h
		call    dword [___6044ch]
___60807h:
		cmp     byte [___60448h], 1
		jne     ___60816h
		call    dword [___60454h]
___60816h:
;		mov     ax, [___60434h]
;		add     [___6043fh], ax
;		jae     ___6082ch
;		pushfd  
;		call    far dword far [___60420h]
;___6082ch:
		mov     byte [___6043eh], 0
___60833h:

		popad
		retn 



__GDECL(IRQ1_KeyboardISR_EMU)
		push    eax
		push    ebx
		;push    ecx
		;push    ds
		;call 	__GETDS
		;in      al, 60h
	mov 	eax, [esp+0ch]
		mov     ah, al
		cmp     ah, 0e0h
		jae     near ___5a21ch
		movzx   ebx, ah
		and     bl, 7fh
		add     bl, [___5a0bah]
		mov     byte [___5a0bah], 0
		rol     ah, 1
		jb      near ___5a209h
		mov     ah, 1
		sub     ah, [ebx+___59e10h]
		mov     byte [ebx+___59e10h], 1
		mov     [LAST_KEY], bl
		mov     al, [ebx+___59f12h]
		mov     [LAST_CHAR], al
		mov     al, [___59e3ah]
		or      al, [___59e46h]
		cmp     al, 0
		je      short ___5a1c1h
		nop     
		nop     
		nop     
		nop     
		mov     al, [ebx+___59fe6h]
		mov     [LAST_CHAR], al
___5a1c1h:
		mov     al, [___59e2dh]
		add     al, [___59eadh]
		cmp     al, 1
		jl      short ___5a204h
		nop     
		nop     
		nop     
		nop     
		mov     al, [___59e48h]
		add     al, [___59ec8h]
		cmp     al, 1
		jl      short ___5a204h
		nop     
		nop     
		nop     
		nop     
		mov     al, [___59ee3h]
		add     al, [___59e63h]
		cmp     al, 1
		jl      short ___5a204h
		nop     
		nop     
		nop     
		nop     
		;mov     al, 20h
		;out     20h, al
		jmp     near dword [___2432c8h]
___5a204h:
		jmp     short ___5a223h
		nop     
		nop     
		nop     
___5a209h:
		mov     byte [LAST_KEY], 0
		mov     byte [ebx+___59e10h], 0
		jmp     short ___5a223h
		nop     
		nop     
		nop     
___5a21ch:
		mov     byte [___5a0bah], 80h
___5a223h:
		;mov     al, 20h
		;out     20h, al
		;pop     ds
		;pop     ecx
		pop     ebx
		pop     eax
		;iret
		retn    


_Alphabet:
    DB	30H, 31H, 32H, 33H, 34H, 35H, 36H, 37H
    DB	38H, 39H, 61H, 62H, 63H, 64H, 65H, 66H
    DB	67H, 68H, 69H, 6aH, 6bH, 6cH, 6dH, 6eH
    DB	6fH, 70H, 71H, 72H, 73H, 74H, 75H, 76H
    DB	77H, 78H, 79H, 7aH, 0
utoa_:
	push		ecx
	push		esi
	push		edi
	push		ebp
	sub		esp,28H
	mov		ebp,edx
	mov		edi,ebx
	mov		esi,edx
	xor		dl,dl
	lea		ecx,[esp+1]
	mov		[esp],dl
.L$1:
	lea		ebx,[esp+24h]
	mov		[esp+24h],edi
	xor		edx,edx
	div		dword [ebx]
	mov		[ebx],eax
	mov		al,[edx+_Alphabet]
	mov		[ecx],al
	mov		eax,[esp+24h]
	inc		ecx
	test		eax,eax
	jne		.L$1
.L$2:
	dec		ecx
	mov		al,[ecx]
	mov		[esi],al
	inc		esi
	test		al,al
	jne		.L$2
	mov		eax,ebp
	add		esp,28H
	pop		ebp
	pop		edi
	pop		esi
	pop		ecx
	ret

__GDECL(itoa_)
	push		ecx
	mov		ecx,edx
	cmp		ebx,0aH
	jne		.L$3
	test		eax,eax
	jge		.L$3
	neg		eax
	mov		byte [edx],2dH
	inc		edx
.L$3:
	call	utoa_
	mov		eax,ecx
	pop		ecx
	ret



__GDECL(atoi_)
	push		ebx
	push		ecx
	push		edx
.L$1:
	mov		dl,[eax]
	inc		dl
	and		edx,0ffH
	mov		dl,[edx+__IsTable]
	and		dl,2
	and		edx,0ffH
	je		.L$2
	inc		eax
	jmp		.L$1
.L$2:
	mov		cl,[eax]
	mov		dl,cl
	cmp		edx,2bH
	je		.L$3
	cmp		edx,2dH
	jne		.L$4
.L$3:
	inc		eax
.L$4:
	xor		ebx,ebx
.L$5:
	mov		dl,[eax]
	inc		dl
	and		edx,0ffH
	mov		dl,[edx+__IsTable]
	and		dl,20H
	and		edx,0ffH
	je		.L$6
	imul		ebx,0aH
	xor		edx,edx
	mov		dl,[eax]
	add		ebx,edx
	inc		eax
	sub		ebx,30H
	jmp		.L$5
.L$6:
	xor		eax,eax
	mov		al,cl
	cmp		eax,2dH
	jne		.L$7
	neg		ebx
.L$7:
	mov		eax,ebx
	pop		edx
	pop		ecx
	pop		ebx
	ret




section .data
rand_next:
db 	1,0,0,0
__IsTable:
db	0,1,1,1,1,1,1,1,1,1,3,3,3,3,3,1
db	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
db	1,0ah,0ch,0ch,0ch,0ch,0ch,0ch,0ch,0ch,0ch,0ch,0ch,0ch,0ch,0ch
db	0ch,38h,38h,38h,38h,38h,38h,38h,38h,38h,38h,0ch,0ch,0ch,0ch,0ch
db	0ch,0ch,58h,58h,58h,58h,58h,58h,48h,48h,48h,48h,48h,48h,48h,48h
db	48h,48h,48h,48h,48h,48h,48h,48h,48h,48h,48h,48h,0ch,0ch,0ch,0ch
db	0ch,0ch,98h,98h,98h,98h,98h,98h,88h,88h,88h,88h,88h,88h,88h,88h
db	88h,88h,88h,88h,88h,88h,88h,88h,88h,88h,88h,88h,0ch,0ch,0ch,0ch
db	1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0


section .bss
filename:
    resb    20h

save_eax:
	resb	4
save_ecx:
	resb	4
save_edx:
	resb 	4
save_esp:
	resb 	4

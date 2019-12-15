cpu 386
%include "macros.inc"

    extern  printf

section .text

__GDECL(DSP_RESET)
	jmp		.around
.error:	db 	"[dRally.SOUND] DSP_RESET not implemented",0ah,0
.around:
	pushad
	push 	.error
	call 	printf
	add 	esp, 4
	popad
	retn

__GDECL(DSP_READ)
	jmp		.around
.error:	db 	"[dRally.SOUND] DSP_READ not implemented",0ah,0
.around:
	pushad
	push 	.error
	call 	printf
	add 	esp, 4
	popad
	retn

__GDECL(DSP_WRITE)
	jmp		.around
.error:	db 	"[dRally.SOUND] DSP_WRITE not implemented",0ah,0
.around:
	pushad
	push 	.error
	call 	printf
	add 	esp, 4
	popad
	retn

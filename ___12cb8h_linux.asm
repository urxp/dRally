cpu 386
%include "macros.inc"

	extern 	printf
	;extern 	VESA101_PRESENTSCREEN
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR

section .text

__GDECL(___12cb8h__VESA101_PRESENTSCREEN)
;	jmp		.around
;.error:	db 	"___12cb8h__VESA101_PRESENTSCREEN not implemented",0ah,0
;.around:
	pushad
;	push 	.error
;	call 	printf
;	add 	esp, 4



		mov     ecx, 4000h
		;xor     eax, eax
		mov     edi, VESA101_ACTIVESCREEN
		;call    ___12bd4h__VESA101_SETBANK
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		rep movsd   
		;mov     eax, 1
		mov     ecx, 4000h
		;call    ___12bd4h__VESA101_SETBANK
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		;mov     edi, VESA101_ACTIVESCREEN
		add     esi, 10000h
		rep movsd   
		;mov     eax, 2
		mov     ecx, 4000h
		;call    ___12bd4h__VESA101_SETBANK
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		;mov     edi, VESA101_ACTIVESCREEN
		add     esi, 20000h
		rep movsd   
		;mov     eax, 3
		mov     ecx, 4000h
		;call    ___12bd4h__VESA101_SETBANK
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		;mov     edi, VESA101_ACTIVESCREEN
		add     esi, 30000h
		rep movsd   
		;mov     eax, 4
		mov     ecx, 2c00h
		;call    ___12bd4h__VESA101_SETBANK
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		;mov     edi, VESA101_ACTIVESCREEN
		add     esi, 40000h
		rep movsd   


	;call 	VESA101_PRESENTSCREEN
	popad
	retn
__GDECL(___12d6ch__VESA101_PRESENTBOTTOMSCREEN)
	jmp		.around
.error:	db 	"___12d6ch__VESA101_PRESENTBOTTOMSCREEN not implemented",0ah,0
.around:
	pushad
	push 	.error
	call 	printf
	add 	esp, 4

	;mov     eax, 3
	mov     ecx, 4000h
	;call    near ___12bd4h__VESA101_SETBANK
	mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
	mov     edi, VESA101_ACTIVESCREEN
	add     esi, 30000h
	add 	edi, 30000h
	rep movsd   
	;mov     eax, 4
	mov     ecx, 2c00h
	;call    near ___12bd4h__VESA101_SETBANK
	mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
	;mov     edi, VESA101_ACTIVESCREEN
	add     esi, 40000h
	rep movsd   

	;call 	VESA101_PRESENTSCREEN
	popad
	retn


section .bss

__GDECL(VESA101_ACTIVESCREEN)
	resb 	4b000h

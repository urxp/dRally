cpu 386
%include "macros.inc"

	extern 	my_ceil

section .text

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

__GDECL(__CHK)
        retn    4

__GDECL(ceil_)
	push 	esi
	push 	edi
	push 	edx
	push 	ecx
	sub 	esp, 8
	lea 	edi, [esp]
	lea 	esi, [esp+1ch]
	movsd
	movsd
	mov 	eax, esp
	push 	eax
	call 	my_ceil
	add 	esp, 4
	fld 	qword [esp]
	add 	esp, 8
	pop 	ecx
	pop 	edx
	pop 	edi
	pop 	esi
	ret 	8

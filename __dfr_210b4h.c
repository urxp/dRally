/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern	___1f6e4h
	extern	___1a1138h__VESA101_BACKGROUND
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13710h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___146c4h_cdecl
	extern	___13248h_cdecl
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___20f78h
	extern	___1866b8h
	extern	___1a1164h_gp_accelerate
	extern	___59b3ch
	extern	___5994ch
	extern	___1a1f6ah
	extern	___1866b8h
	extern	___1a113ch_gp_brake
	extern	___1866b8h
	extern	___1a1110h_gp_steer_left
	extern	___1866b8h
	extern	___1a1130h_gp_steer_right
	extern	___1866b8h
	extern	___1a1120h_gp_turbo_boost
	extern	___1866b8h
	extern	___1a1118h_gp_machine_gun
	extern	___1866b8h
	extern	___1a111ch_gp_drop_mine
	extern	___20d18h
	extern	___185a5ch
	extern	___185b58h

section .text

___21090h:
dd	___21746h
dd	___211bdh
dd	___21288h
dd	___21350h
dd	___21417h
dd	___214e1h
dd	___215aeh
dd	___2167bh
dd	___21746h
__GDECL(___210b4h)
		push    54h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 34h

	push 	edx
	push 	ecx
	push 	eax
		call    ___1f6e4h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		cmp     esi, byte 0ffffffffh
		je      near ___2127eh
		mov     edx, 15031h
		mov     ebx, 95h
		mov     ecx, 19631h
		mov     esi, 0b1h
		mov     edi, 1dc31h
		mov     ebp, 0cdh
		mov     eax, 22231h
		mov     [esp+2ch], edx
		mov     [esp+24h], ebx
		mov     [esp+28h], ecx
		mov     [esp+18h], esi
		mov     [esp+14h], edi
		mov     [esp+1ch], ebp
		mov     [esp+8], eax
		mov     edx, 0e9h
		mov     ebx, 26831h
		mov     ecx, 105h
		mov     esi, 2ae31h
		mov     edi, 121h
		mov     ebp, 2f431h
		mov     [esp+20h], edx
		mov     [esp+4], ebx
		mov     [esp+0ch], ecx
		mov     [esp+30h], esi
		mov     [esp], edi
		mov     [esp+10h], ebp
___21149h:
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101_BACKGROUND]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 3
		xor     edx, edx

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1
		mov     eax, 8

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     eax, 8

	push 	edx
	push 	ecx
	push 	eax
		call    ___146c4h_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		mov     ebp, eax
		inc     eax
		cmp     eax, byte 8
		ja      near ___21275h
		jmp     near dword [cs:eax*4+___21090h]
___211bdh:
		xor     edx, edx
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 8
		xor     edx, edx
		mov     ebx, 143h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 79h
		mov     eax, 127h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, [esp+2ch]
		mov     ebx, __dfr_181b04h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___20f78h
		mov     edi, ___1866b8h+0e10h
		and     eax, 0ffh
		mov     esi, __dfr_1818d8h
		mov     [___1a1164h_gp_accelerate], eax

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     edx, [___1a1164h_gp_accelerate]
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
		imul    esi, edx, byte 0fh
		mov     edi, ___1866b8h+0e10h
		add     esi, ___1a1f6ah
		call 	__STRCAT
___21275h:
		cmp     ebp, byte 0ffffffffh
		jne     near ___21149h
___2127eh:
		add     esp, byte 34h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___21288h:
		xor     edx, edx
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 8
		xor     edx, edx
		mov     ebx, 143h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, [esp+28h]
		mov     eax, 127h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, [esp+28h]
		mov     ebx, __dfr_181b24h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___20f78h
		mov     edi, ___1866b8h+0e42h
		and     eax, 0ffh
		mov     esi, __dfr_1818e8h
		mov     [___1a113ch_gp_brake], eax

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     eax, [___1a113ch_gp_brake]
		movsd   
		movsd   
		movsd   
		movsw   
		imul    esi, eax, byte 0fh
		mov     edi, ___1866b8h+0e42h
		add     esi, ___1a1f6ah
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___21149h
		add     esp, byte 34h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___21350h:
		xor     edx, edx
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 8
		xor     edx, edx
		mov     ebx, 143h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, [esp+1ch]
		mov     eax, 127h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, [esp+14h]
		mov     ebx, __dfr_181b40h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___20f78h
		mov     edi, ___1866b8h+0e74h
		and     eax, 0ffh
		mov     esi, __dfr_1818f8h
		mov     [___1a1110h_gp_steer_left], eax

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		imul    esi, [___1a1110h_gp_steer_left], byte 0fh
		mov     edi, ___1866b8h+0e74h
		add     esi, ___1a1f6ah
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___21149h
		add     esp, byte 34h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___21417h:
		xor     edx, edx
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 8
		xor     edx, edx
		mov     ebx, 143h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, [esp+20h]
		mov     eax, 127h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, [esp+8]
		mov     ebx, __dfr_181b60h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___20f78h
		mov     edi, ___1866b8h+0ea6h
		and     eax, 0ffh
		mov     esi, __dfr_18190ch
		mov     [___1a1130h_gp_steer_right], eax

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     ecx, [___1a1130h_gp_steer_right]
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		imul    esi, ecx, byte 0fh
		mov     edi, ___1866b8h+0ea6h
		add     esi, ___1a1f6ah
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___21149h
		add     esp, byte 34h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___214e1h:
		xor     edx, edx
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 8
		xor     edx, edx
		mov     ebx, 143h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, [esp+24h]
		mov     eax, 127h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, [esp+4]
		mov     ebx, __dfr_181b80h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___20f78h
		mov     ecx, 6
		mov     edi, ___1866b8h+0ed8h
		and     eax, 0ffh
		mov     esi, __dfr_181924h
		mov     [___1a1120h_gp_turbo_boost], eax

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     ebx, [___1a1120h_gp_turbo_boost]
		rep movsd   
		movsw   
		imul    esi, ebx, byte 0fh
		mov     edi, ___1866b8h+0ed8h
		add     esi, ___1a1f6ah
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___21149h
		add     esp, byte 34h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___215aeh:
		xor     edx, edx
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 8
		xor     edx, edx
		mov     ebx, 143h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, [esp+10h]
		mov     eax, 127h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, [esp+30h]
		mov     ebx, __dfr_181ba0h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___20f78h
		mov     ecx, 6
		mov     edi, ___1866b8h+0f0ah
		and     eax, 0ffh
		mov     esi, __dfr_181940h
		mov     [___1a1118h_gp_machine_gun], eax

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     edx, [___1a1118h_gp_machine_gun]
		rep movsd   
		movsw   
		imul    esi, edx, byte 0fh
		mov     edi, ___1866b8h+0f0ah
		add     esi, ___1a1f6ah
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___21149h
		add     esp, byte 34h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2167bh:
		xor     edx, edx
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 8
		xor     edx, edx
		mov     ebx, 143h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, [esp+4]
		mov     eax, 127h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, [esp+10h]
		mov     ebx, __dfr_181bc4h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___20f78h
		mov     ecx, 6
		mov     edi, ___1866b8h+0f3ch
		and     eax, 0ffh
		mov     esi, __dfr_18195ch
		mov     [___1a111ch_gp_drop_mine], eax

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     eax, [___1a111ch_gp_drop_mine]
		rep movsd   
		movsb   
		imul    esi, eax, byte 0fh
		mov     edi, ___1866b8h+0f3ch
		add     esi, ___1a1f6ah
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___21149h
		add     esp, byte 34h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___21746h:
		xor     eax, eax
		call    near ___20d18h
		cmp     eax, byte 1
		jne     short ___2176ah
		mov     ebp, 0fffffffeh
		cmp     ebp, byte 0ffffffffh
		jne     near ___21149h
		add     esp, byte 34h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2176ah:
		cmp     ebp, byte 7
		jne     near ___21275h
		xor     ebx, ebx
		mov     ebp, 0ffffffffh
		mov     [___185a5ch+0f8h], ebx
___21780h:
		mov     eax, [___185a5ch+0f8h]
		cmp     byte [eax+___185b58h+0x48], 0
		jne     near ___21275h
		mov     esi, [___185a5ch+0e0h]
		dec     esi
		cmp     eax, esi
		jge     short ___217a5h
		inc     eax
		mov     [___185a5ch+0f8h], eax
		jmp     short ___21780h
___217a5h:
		xor     ecx, ecx
		mov     [___185a5ch+0f8h], ecx
		jmp     short ___21780h


section .data
__dfr_1818d8h:
	db 	"Accelerate    ",0,0
__dfr_1818e8h:
	db 	"Brake        ",0,0,0
__dfr_1818f8h:
	db 	"Steer Left    ",0fah,0fah,0,0,0,0
__dfr_18190ch:
	db 	"Steer Right   ",0fah,0fah,0fah,0fah,0fah,0fah,0,0,0,0
__dfr_181924h:
	db 	"Turbo Boost  ",0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0,0,0
__dfr_181940h:
	db 	"Machine Gun  ",0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0,0,0
__dfr_18195ch:
	db 	"Drop Mine    ",0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0fah,0,0,0,0
__dfr_181b04h:
	db 	"Move gamepad for accelerate...",0,0
__dfr_181b24h:
	db 	"Move gamepad for brake...",0,0,0
__dfr_181b40h:
	db 	"Move gamepad for left steer...",0,0
__dfr_181b60h:
	db 	"Move gamepad for right steer...",0
__dfr__181b80h:
	db 	"Move gamepad for turbo boost...",0
__dfr_181ba0h:
	db 	"Move gamepad  for machine gun...",0,0,0,0
__dfr_181bc4h:
	db 	"Move gamepad for drop mine...",0,0,0
*/

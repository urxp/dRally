/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1164h_gp_accelerate
	extern	___199f3dh
	extern	___1a113ch_gp_brake
	extern	___1a1110h_gp_steer_left
	extern	___1a1130h_gp_steer_right
	extern	___1a1120h_gp_turbo_boost
	extern	___1a1118h_gp_machine_gun
	extern	___1a111ch_gp_drop_mine
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___13248h_cdecl
	extern	___185ba9h
	extern	___252e0h_cdecl
	extern	___1a10cch
	extern	___12e78h_cdecl
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___24cc54h_sfx_volume
	extern	dRally_Sound_pushEffect
	extern	___5994ch
	extern	___59b3ch

section .text

__GDECL(___20d18h)
		push    4ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 28h
		mov     ebp, [___1a1164h_gp_accelerate]
		xor     ebx, ebx
		mov     bl, [___199f3dh]
		xor     al, al
		cmp     ebp, ebx
		je      short ___20d71h
		cmp     ebp, [___1a113ch_gp_brake]
		je      short ___20d6fh
		cmp     ebp, [___1a1110h_gp_steer_left]
		je      short ___20d6fh
		cmp     ebp, [___1a1130h_gp_steer_right]
		je      short ___20d6fh
		cmp     ebp, [___1a1120h_gp_turbo_boost]
		je      short ___20d6fh
		cmp     ebp, [___1a1118h_gp_machine_gun]
		je      short ___20d6fh
		cmp     ebp, [___1a111ch_gp_drop_mine]
		jne     short ___20d71h
___20d6fh:
		mov     al, 1
___20d71h:
		xor     ebx, ebx
		mov     esi, [___1a113ch_gp_brake]
		mov     bl, [___199f3dh]
		cmp     ebx, esi
		je      short ___20dafh
		cmp     esi, [___1a1110h_gp_steer_left]
		je      short ___20dadh
		cmp     esi, [___1a1130h_gp_steer_right]
		je      short ___20dadh
		cmp     esi, [___1a1120h_gp_turbo_boost]
		je      short ___20dadh
		mov     ebx, esi
		cmp     ebx, [___1a1118h_gp_machine_gun]
		je      short ___20dadh
		cmp     ebx, [___1a111ch_gp_drop_mine]
		jne     short ___20dafh
___20dadh:
		mov     al, 1
___20dafh:
		xor     ebx, ebx
		mov     edx, [___1a1110h_gp_steer_left]
		mov     bl, [___199f3dh]
		cmp     ebx, edx
		je      short ___20de5h
		cmp     edx, [___1a1130h_gp_steer_right]
		je      short ___20de3h
		cmp     edx, [___1a1120h_gp_turbo_boost]
		je      short ___20de3h
		cmp     edx, [___1a1118h_gp_machine_gun]
		je      short ___20de3h
		mov     ebx, edx
		cmp     ebx, [___1a111ch_gp_drop_mine]
		jne     short ___20de5h
___20de3h:
		mov     al, 1
___20de5h:
		xor     ebx, ebx
		mov     ecx, [___1a1130h_gp_steer_right]
		mov     bl, [___199f3dh]
		cmp     ebx, ecx
		je      short ___20e11h
		cmp     ecx, [___1a1120h_gp_turbo_boost]
		je      short ___20e0fh
		cmp     ecx, [___1a1118h_gp_machine_gun]
		je      short ___20e0fh
		cmp     ecx, [___1a111ch_gp_drop_mine]
		jne     short ___20e11h
___20e0fh:
		mov     al, 1
___20e11h:
		xor     ebx, ebx
		mov     ecx, [___1a1120h_gp_turbo_boost]
		mov     bl, [___199f3dh]
		cmp     ebx, ecx
		je      short ___20e35h
		cmp     ecx, [___1a1118h_gp_machine_gun]
		je      short ___20e33h
		cmp     ecx, [___1a111ch_gp_drop_mine]
		jne     short ___20e35h
___20e33h:
		mov     al, 1
___20e35h:
		xor     ebx, ebx
		mov     edx, [___1a1118h_gp_machine_gun]
		mov     bl, [___199f3dh]
		cmp     ebx, edx
		je      short ___20e51h
		cmp     edx, [___1a111ch_gp_drop_mine]
		jne     short ___20e51h
		mov     al, 1
___20e51h:
		mov     [___1a1164h_gp_accelerate], ebp
		cmp     al, 1
		jne     near ___20f66h
		mov     ecx, 4b000h
		mov     ebx, 253h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     edx, 0c2h
		call 	__MOVS
		push    byte 1
		mov     ecx, 56h
		mov     eax, 1ah
		lea     edi, [esp+4]
		mov     esi, __dfr_181ae4h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 7
		mov     eax, esp
		mov     ebx, esp
		rep movsd   
		movsw   
		movsb   
		mov     edx, ___185ba9h
		mov     ecx, 1fcc2h

	push 	edx
	push 	ecx
	push 	eax
		call    ___252e0h_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		sub     ecx, eax
		mov     eax, [___1a10cch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 24bdfh
		mov     ebx, __dfr_1819b4h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]

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

		push    8000h
		mov     edx, 1dh
		mov     esi, 28000h
		mov     eax, 1
		push    esi
		mov     ecx, [___24cc54h_sfx_volume]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx

___20f18h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		test    al, al
		je      short ___20f18h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx

		mov     ecx, 4b000h
		mov     esi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		call 	__MOVS

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     eax, 1
		mov     ebp, [___1a1164h_gp_accelerate]
		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___20f66h:
		xor     eax, eax
		mov     ebp, [___1a1164h_gp_accelerate]
		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
__dfr_1819b4h:
	db 	"Press any key to re-enter.",0,0
__dfr_181ae4h:
	db 	"Invalid gamepad configuration!",0,0
*/

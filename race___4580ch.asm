cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a4ebdh
	extern	___1a4ebeh
	extern	___1a4ebfh
	extern	___1a4ec0h
	extern	___183495h
	extern	__CHP
	extern	___1a4ec1h
	extern	___1a4ec2h
	extern	__DISPLAY_SET_PALETTE_COLOR
	extern 	DISPLAY_GET_PALETTE
	extern	___58c60h
	extern	___18348dh
	extern	dRally_Sound_setMasterVolume

section .text



__GDECL(race___4580ch)
		push    4ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 20h
		and     esp, byte 0fffffff8h
		xor     edx, edx
		;xor     esi, esi
		mov     [esp+8], edx


;		mov     edi, 3c9h
;___45831h:
;		mov     al, [esp+8]
;		mov     edx, 3c7h
;		mov     ebx, [esp+8]
;		out     dx, al
;		mov     edx, edi
;		add     esi, byte 3
;		sub     eax, eax
;		in      al, dx
;		inc     ebx
;		mov     [esi+___1a4ebdh], al
;		sub     eax, eax
;		in      al, dx
;		mov     [esp+8], ebx
;		mov     [esi+___1a4ebeh], al
;		sub     eax, eax
;		in      al, dx
;		mov     [esi+___1a4ebfh], al
;;		cmp     ebx, 100h
;		jl      short ___45831h
	push 	___1a4ec0h
	call 	DISPLAY_GET_PALETTE
	add 	esp, 4

		mov     dword [esp+1ch], 28h
___45874h:
		xor     ebx, ebx
		xor     esi, esi
		mov     [esp+8], ebx
___4587ch:
		xor     eax, eax
		mov     al, [esp+8]
		push    eax
		xor     eax, eax
		mov     al, [esi+___1a4ec0h]
		mov     [esp+14h], eax
		fild    word [esp+14h]
		fild    dword [esp+20h]
		fst     qword [esp+18h]
		fdiv    qword [___183495h]
		fxch    st0, st1
		fmul    st0, st1
		call    near __CHP
		fistp   dword [esp+10h]
		mov     al, [esp+10h]
		and     eax, 0ffh
		push    eax
		xor     eax, eax
		mov     al, [esi+___1a4ec1h]
		mov     [esp+18h], eax
		fild    word [esp+18h]
		fmul    st0, st1
		call    near __CHP
		fistp   dword [esp+14h]
		mov     al, [esp+14h]
		and     eax, 0ffh
		push    eax
		xor     eax, eax
		mov     al, [esi+___1a4ec2h]
		mov     [esp+1ch], eax
		fild    word [esp+1ch]
		fmulp   st1, st0
		call    near __CHP
		fistp   dword [esp+18h]
		mov     al, [esp+18h]
		and     eax, 0ffh
		push    eax

		call    __DISPLAY_SET_PALETTE_COLOR
		add 	esp, 10h
		
		mov     ecx, [esp+8]
		inc     ecx
		add     esi, byte 3
		mov     [esp+8], ecx
		cmp     ecx, 100h
		jl      near ___4587ch

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		fld     qword [esp+14h]
		fmul    qword [___18348dh]
		call    near __CHP
		fistp   dword [esp+0ch]
		mov     eax, [esp+0ch]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [esp+1ch]
		dec     eax
		mov     [esp+1ch], eax
		test    eax, eax
		jge     near ___45874h
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

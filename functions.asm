cpu 386
%include "macros.inc"

    extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a1100h__VESA101h_DefaultScreenBuffer
    extern  ___1a10e4h__VESA101h_DefaultScreenBufferA
	extern  ___1a1124h__VESA101h_ScreenBufferA
	extern 	DISPLAY_SET_PALETTE_COLOR

    extern  memset_

section .text

__GDECL(restoreDefaultScreenBuffer)
        mov     eax, [___1a1100h__VESA101h_DefaultScreenBuffer]
        mov     [___1a112ch__VESA101_ACTIVESCREEN_PTR], eax
        retn

__GDECL(restoreDefaultScreenBufferA)
		mov     eax, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     [___1a1124h__VESA101h_ScreenBufferA], eax
        retn


__GDECL(__MOVS)
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
        retn
__GDECL(__STRCPY)
		push    edi
___10261h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___10279h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___10261h
___10279h:
		pop     edi
        retn
__GDECL(__STRCAT)
        push    ecx     ;;;;; added
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___10367h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___1037fh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___10367h
___1037fh:
		pop     edi
        pop     ecx     ;;;;; added
        retn
__GDECL(__STRLEN)
        push    edi     ;;;;; added
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
        pop     edi     ;;;;; added
        retn



__GDECL(VRETRACE_WAIT_IF_ACTIVE)
		mov     dx, 3dah
.active:
		in      al, dx
		and     al, 8
		jne     .active
		retn
__GDECL(DISPLAY_WAIT_IF_DISABLED)
		mov     dx, 3dah
.disabled:
		in      al, dx
		and     al, 1
		jne     .disabled
		retn
__GDECL(DISPLAY_WAIT_IF_ENABLED)
		mov     dx, 3dah
.enabled:
		in      al, dx
		and     al, 1
		je      .enabled
		retn

__GDECL(VRETRACE_WAIT_FOR_END)
		cli
		mov     dx, 3dah
.inactive:
		in      al, dx
		and     al, 8
		je      .inactive
.active:
		in      al, dx
		and     al, 8
		jne     .active
		sti
		retn


__GDECL(DISPLAY_CLEAR_PALETTE)
		push 	ecx			;;;;;
		xor     ecx, ecx
___1112eh:
		push 	ecx
		push 	0
		push 	0
		push 	0
		call 	DISPLAY_SET_PALETTE_COLOR
		inc     ecx
		cmp     ecx, 100h
		jl      ___1112eh
		pop 	ecx 		;;;;;
		retn




section .bss
__GDECL(B8000)
	resb 	8000h
__GDECL(VGA13_ACTIVESCREEN)
	resb 	0fa00h

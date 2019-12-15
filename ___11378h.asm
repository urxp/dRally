cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___1802e0h
	extern 	___1802e8h
	extern 	__CHP
	extern 	DISPLAY_SET_PALETTE_COLOR
	extern 	___1802f0h
	extern 	___1802f4h

section .text

__GDECL(___11378h)
		push    70h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 48h
		and     esp, byte 0fffffff8h
		mov     eax, [ebp+18h]
		mov     [esp+44h], eax
		mov     eax, [ebp+1ch]
		mov     [esp+40h], eax
		mov     eax, [ebp+20h]
		mov     [esp+3ch], eax
		fld     dword [esp+44h]
		fld     st0
		fld     qword [___1802e0h]
		fxch    st0, st1
		fdiv    st0, st1
		fld     dword [esp+40h]
		fld     st0
		fdiv    st0, st3
		fld     dword [esp+3ch]
		fdivr   st4, st0
		fxch    st0, st3
		fsubp   st5, st0
		fxch    st0, st4
		fld     qword [___1802e8h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st5
		fsubp   st2, st0
		fxch    st0, st3
		fsubp   st2, st0
		fmul    st0, st2
		fxch    st0, st1
		fmulp   st2, st0
		mov     edx, 40h
		xor     ebx, ebx
		mov     [esp+28h], edx
		mov     [esp+38h], ebx
		fxch    st0, st2
		fstp    dword [esp+24h]
		fxch    st0, st1
		fstp    dword [esp+20h]
		fstp    dword [esp+2ch]
___113ffh:
		fild    dword [esp+38h]
		fld     st0
		fmul    dword [esp+24h]
		fld     dword [esp+44h]
		fdiv    qword [___1802e0h]
		fld     st2
		fmul    dword [esp+20h]
		fld     dword [esp+40h]
		fdiv    qword [___1802e0h]
		fxch    st0, st4
		fmul    dword [esp+2ch]
		fld     dword [esp+3ch]
		fdiv    qword [___1802e0h]
		xor     eax, eax
		mov     al, [esp+28h]
		push    eax
		xor     eax, eax
		fxch    st0, st3
		faddp   st4, st0
		fxch    st0, st4
		faddp   st1, st0
		fxch    st0, st1
		faddp   st3, st0
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+0ch]
		mov     al, [esp+0ch]
		call    near __CHP
		push    eax
		xor     eax, eax
		fistp   dword [esp+18h]
		mov     al, [esp+18h]
		call    near __CHP
		push    eax
		xor     eax, eax
		fistp   dword [esp+18h]
		mov     al, [esp+18h]
		push    eax
		mov     esi, [esp+48h]
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ecx, [esp+28h]
		inc     esi
		inc     ecx
		mov     [esp+38h], esi
		mov     [esp+28h], ecx
		cmp     esi, byte 10h
		jl      near ___113ffh
		fld     dword [___1802f0h]
		fld     st0
		fld     st1
		fxch    st0, st1
		fsub    dword [esp+44h]
		fxch    st0, st1
		fsub    dword [esp+40h]
		fxch    st0, st1
		fld     dword [___1802f4h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmul    st0, st1
		fxch    st0, st3
		fsub    dword [esp+3ch]
		xor     eax, eax
		fmulp   st1, st0
		mov     [esp+18h], eax
		fxch    st0, st2
		fstp    dword [esp+34h]
		fxch    st0, st1
		fstp    dword [esp+14h]
		fstp    dword [esp+30h]
___114dch:
		fild    dword [esp+18h]
		fld     st0
		fmul    dword [esp+30h]
		xor     eax, eax
		fld     st1
		fmul    dword [esp+34h]
		mov     al, [esp+28h]
		fxch    st0, st2
		fmul    dword [esp+14h]
		push    eax
		xor     eax, eax
		fxch    st0, st1
		fadd    dword [esp+48h]
		fxch    st0, st2
		fadd    dword [esp+44h]
		fxch    st0, st1
		fadd    dword [esp+40h]
		fxch    st0, st2
		call    near __CHP
		fistp   dword [esp+0ch]
		mov     al, [esp+0ch]
		call    near __CHP
		push    eax
		xor     eax, eax
		fistp   dword [esp+18h]
		mov     al, [esp+18h]
		call    near __CHP
		push    eax
		xor     eax, eax
		fistp   dword [esp+18h]
		mov     al, [esp+18h]
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     edx, [esp+28h]
		mov     ebx, [esp+18h]
		inc     edx
		inc     ebx
		mov     [esp+28h], edx
		mov     [esp+18h], ebx
		cmp     ebx, byte 10h
		jl      short ___114dch
		mov     esp, ebp
		pop     ebp
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		ret     0ch

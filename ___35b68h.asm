cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1824d4h
	extern	___1824dch
	extern	__CHP
	extern	___19eb44h
	extern	___19eb48h
	extern	___19eb4ch
	extern	___1824e4h
	extern	___1824e8h

section .text

__GDECL(___35b68h)
		push    60h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 44h
		and     esp, byte 0fffffff8h
		mov     esi, eax
		mov     eax, [ebp+1ch]
		mov     [esp+40h], eax
		mov     eax, [ebp+20h]
		mov     [esp+3ch], eax
		mov     eax, [ebp+24h]
		mov     [esp+38h], eax
		fld     dword [esp+40h]
		fld     st0
		fld     qword [___1824d4h]
		fxch    st0, st1
		fdiv    st0, st1
		fld     dword [esp+3ch]
		fld     st0
		fdiv    st0, st3
		fld     dword [esp+38h]
		fdivr   st4, st0
		fxch    st0, st3
		fsubp   st5, st0
		fxch    st0, st4
		fld     qword [___1824dch]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st5
		fsubp   st2, st0
		xor     edx, edx
		fxch    st0, st1
		fmul    st0, st1
		mov     [esp+34h], edx
		mov     edx, esi
		fxch    st0, st3
		fsubp   st2, st0
		lea     ecx, [edx*4+0]
		fmulp   st1, st0
		sub     ecx, edx
		mov     edi, 640000h
		shl     ecx, 2
		fxch    st0, st2
		fstp    dword [esp+24h]
		fstp    dword [esp+20h]
		fstp    dword [esp+1ch]
___35bfah:
		fild    dword [esp+34h]
		fld     st0
		fmul    dword [esp+24h]
		fld     dword [esp+40h]
		fdiv    qword [___1824d4h]
		fld     st2
		fmul    dword [esp+20h]
		fld     dword [esp+3ch]
		fdiv    qword [___1824d4h]
		fxch    st0, st4
		fmul    dword [esp+1ch]
		fld     dword [esp+38h]
		fdiv    qword [___1824d4h]
		mov     ebx, edi
		add     ecx, byte 0ch
		fxch    st0, st3
		faddp   st4, st0
		fxch    st0, st4
		faddp   st1, st0
		fxch    st0, st1
		faddp   st3, st0
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+10h]
		mov     edx, [esp+10h]
		fxch    st0, st1
		fistp   dword [esp+8]
		shl     edx, 10h
		fistp   dword [esp+0ch]
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [esp+8]
		mov     ebx, edi
		shl     edx, 10h
		mov     [ecx+___19eb44h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [esp+0ch]
		mov     ebx, edi
		shl     edx, 10h
		mov     [ecx+___19eb48h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [esp+34h]
		inc     esi
		inc     ebx
		mov     [ecx+___19eb4ch], eax
		mov     [esp+34h], ebx
		cmp     ebx, byte 8
		jl      near ___35bfah
		fld     dword [___1824e4h]
		fld     st0
		fsub    dword [esp+40h]
		fld     dword [___1824e8h]
		fxch    st0, st1
		fmul    st0, st1
		fld     st2
		fsub    dword [esp+3ch]
		fxch    st0, st3
		fsub    dword [esp+38h]
		fxch    st0, st3
		fmul    st0, st2
		fxch    st0, st3
		fmulp   st2, st0
		mov     edi, 640000h
		lea     ecx, [esi*4+0]
		xor     edx, edx
		sub     ecx, esi
		mov     [esp+18h], edx
		shl     ecx, 2
		fxch    st0, st2
		fstp    dword [esp+2ch]
		fstp    dword [esp+30h]
		fstp    dword [esp+28h]
___35d12h:
		fild    dword [esp+18h]
		fld     st0
		fmul    dword [esp+28h]
		fld     st1
		fmul    dword [esp+2ch]
		fxch    st0, st2
		fmul    dword [esp+30h]
		mov     ebx, edi
		add     ecx, byte 0ch
		fxch    st0, st1
		fadd    dword [esp+40h]
		fxch    st0, st2
		fadd    dword [esp+3ch]
		fxch    st0, st1
		fadd    dword [esp+38h]
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+10h]
		mov     edx, [esp+10h]
		fxch    st0, st1
		fistp   dword [esp+8]
		shl     edx, 10h
		fistp   dword [esp+0ch]
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [esp+8]
		mov     ebx, edi
		shl     edx, 10h
		mov     [ecx+___19eb44h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [esp+0ch]
		mov     ebx, edi
		shl     edx, 10h
		mov     [ecx+___19eb48h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [esp+18h]
		inc     esi
		inc     ebx
		mov     [ecx+___19eb4ch], eax
		mov     [esp+18h], ebx
		cmp     ebx, byte 8
		jl      near ___35d12h
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		ret     0ch

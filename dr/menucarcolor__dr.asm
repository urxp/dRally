%include "macros.inc"

	extern 	__CHK
	extern 	__CHP

	extern 	__CEXT_V(___1802f8h)
	extern 	__CEXT_V(___180300h)
	extern 	__CEXT_V(___180308h)
	extern 	__CEXT_V(___18030ch)

	extern 	__CEXT_V(Pal8to24_1)

%include "layout.inc"

section @text

;; 11564h
__GDECL(__CEXT_F(loadMenuCarColor))
		push    60h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 44h
		and     esp, byte 0fffffff8h
		mov     eax, [ebp+1ch]
		mov     [esp+38h], eax
		mov     eax, [ebp+20h]
		mov     [esp+40h], eax
		mov     eax, [ebp+24h]
		mov     [esp+3ch], eax
		fld     dword [esp+38h]
		fld     st0
		fld     qword [__CEXT_V(___1802f8h)]
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
		fld     qword [__CEXT_V(___180300h)]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st5
		fsubp   st2, st0
		fxch    st0, st3
		fsubp   st2, st0
		fmul    st0, st2
		fxch    st0, st1
		fmulp   st2, st0
		mov     esi, 40h
		mov     ecx, 300h
		xor     edx, edx
		mov     edi, 640000h
		mov     [esp+34h], edx
		fxch    st0, st2
		fstp    dword [esp+1ch]
		fxch    st0, st1
		fstp    dword [esp+24h]
		fstp    dword [esp+20h]
___115f2h:
		fild    dword [esp+34h]
		fld     st0
		fmul    dword [esp+1ch]
		fld     dword [esp+38h]
		fdiv    qword [__CEXT_V(___1802f8h)]
		fld     st2
		fmul    dword [esp+24h]
		fld     dword [esp+40h]
		fdiv    qword [__CEXT_V(___1802f8h)]
		fxch    st0, st4
		fmul    dword [esp+20h]
		fld     dword [esp+3ch]
		fdiv    qword [__CEXT_V(___1802f8h)]
		mov     ebx, edi
		add     ecx, byte 0ch
		fxch    st0, st3
		faddp   st4, st0
		fxch    st0, st4
		faddp   st1, st0
		fxch    st0, st1
		faddp   st3, st0
		fxch    st0, st1
		call    __CHP
		fxch    st0, st1
		call    __CHP
		fxch    st0, st2
		call    __CHP
		fxch    st0, st1
		fistp   dword [esp+8]
		mov     edx, [esp+8]
		fxch    st0, st1
		fistp   dword [esp+10h]
		shl     edx, 10h
		fistp   dword [esp+0ch]
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [esp+10h]
		mov     ebx, edi
		shl     edx, 10h
		mov     [ecx+__CEXT_V(Pal8to24_1)-0ch], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [esp+0ch]
		mov     ebx, edi
		shl     edx, 10h
		mov     [ecx+__CEXT_V(Pal8to24_1)-8], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [esp+34h]
		inc     esi
		inc     ebx
		mov     [ecx+__CEXT_V(Pal8to24_1)-4], eax
		mov     [esp+34h], ebx
		cmp     ebx, byte 10h
		jl      ___115f2h
		fld     dword [__CEXT_V(___180308h)]
		fld     st0
		fsub    dword [esp+38h]
		fld     dword [__CEXT_V(___18030ch)]
		fxch    st0, st1
		fmul    st0, st1
		fld     st2
		fsub    dword [esp+40h]
		fxch    st0, st3
		fsub    dword [esp+3ch]
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
___1170ah:
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
		fadd    dword [esp+38h]
		fxch    st0, st2
		fadd    dword [esp+40h]
		fxch    st0, st1
		fadd    dword [esp+3ch]
		fxch    st0, st2
		call    __CHP
		fxch    st0, st1
		call    __CHP
		fxch    st0, st2
		call    __CHP
		fxch    st0, st1
		fistp   dword [esp+8]
		mov     edx, [esp+8]
		fxch    st0, st1
		fistp   dword [esp+10h]
		shl     edx, 10h
		fistp   dword [esp+0ch]
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [esp+10h]
		mov     ebx, edi
		shl     edx, 10h
		mov     [ecx+__CEXT_V(Pal8to24_1)-0ch], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [esp+0ch]
		mov     ebx, edi
		shl     edx, 10h
		mov     [ecx+__CEXT_V(Pal8to24_1)-8], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [esp+18h]
		inc     esi
		inc     ebx
		mov     [ecx+__CEXT_V(Pal8to24_1)-4], eax
		mov     [esp+18h], ebx
		cmp     ebx, byte 10h
		jl      ___1170ah
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		ret     0ch

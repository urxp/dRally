cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___183f59h
	extern	___183f61h
	extern	__CHP
	extern	___1a51cdh
	extern	___1a51ceh
	extern	___1a51cfh
	extern	___183f69h
	extern	___183f6dh
	extern	___1a51d0h
	extern	___1a51d1h
	extern	___1a51d2h

section .text

__GDECL(___4a064h)
		push    50h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 38h
		and     esp, byte 0fffffff8h
		mov     edx, eax
		mov     eax, [ebp+18h]
		mov     [esp+34h], eax
		mov     eax, [ebp+1ch]
		mov     [esp+2ch], eax
		mov     eax, [ebp+20h]
		mov     [esp+30h], eax
		fld     dword [esp+34h]
		fld     st0
		fld     qword [___183f59h]
		fxch    st0, st1
		fdiv    st0, st1
		fld     dword [esp+2ch]
		fld     st0
		fdiv    st0, st3
		fld     dword [esp+30h]
		fdivr   st4, st0
		fxch    st0, st3
		fsubp   st5, st0
		fxch    st0, st4
		fld     qword [___183f61h]
		fxch    st0, st1
		fdiv    st0, st1
		fxch    st0, st5
		fsubp   st2, st0
		fxch    st0, st1
		fdiv    st0, st1
		fxch    st0, st3
		fsubp   st2, st0
		fdivp   st1, st0
		xor     ebx, ebx
		mov     [esp+20h], ebx
		mov     ebx, edx
		lea     eax, [ebx*4+0]
		sub     eax, ebx
		fxch    st0, st2
		fstp    dword [esp+10h]
		fstp    dword [esp+0ch]
		fstp    dword [esp+14h]
___4a0edh:
		fild    dword [esp+20h]
		fld     st0
		fmul    dword [esp+10h]
		fld     dword [esp+34h]
		fdiv    qword [___183f59h]
		fld     st2
		fmul    dword [esp+0ch]
		fld     dword [esp+2ch]
		fdiv    qword [___183f59h]
		fxch    st0, st4
		fmul    dword [esp+14h]
		fld     dword [esp+30h]
		fdiv    qword [___183f59h]
		mov     ecx, [esp+20h]
		add     eax, byte 3
		inc     edx
		inc     ecx
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
		fistp   dword [esp+28h]
		mov     bl, [esp+28h]
		fxch    st0, st1
		fistp   dword [esp+28h]
		mov     [eax+___1a51cdh], bl
		mov     bl, [esp+28h]
		fistp   dword [esp+28h]
		mov     [eax+___1a51ceh], bl
		mov     bl, [esp+28h]
		mov     [esp+20h], ecx
		mov     [eax+___1a51cfh], bl
		cmp     ecx, byte 5
		jl      near ___4a0edh
		fld     dword [___183f69h]
		fld     st0
		fsub    dword [esp+2ch]
		fld     dword [___183f6dh]
		fxch    st0, st1
		fdiv    st0, st1
		fld     st2
		fsub    dword [esp+30h]
		fdiv    st0, st2
		fxch    st0, st3
		fsub    dword [esp+34h]
		fdivrp  st2, st0
		xor     edi, edi
		lea     eax, [edx*4+0]
		mov     [esp+24h], edi
		sub     eax, edx
		fstp    dword [esp+18h]
		fxch    st0, st1
		fstp    dword [esp+1ch]
		fstp    dword [esp+8]
		fld     dword [esp+2ch]
		fld     dword [esp+18h]
		fld     dword [esp+34h]
___4a1d5h:
		fild    dword [esp+24h]
		fld     st0
		fmul    dword [esp+8]
		fld     st1
		fmul    st0, st4
		fxch    st0, st2
		fmul    dword [esp+1ch]
		fxch    st0, st1
		fadd    st0, st3
		fxch    st0, st2
		fadd    st0, st5
		fxch    st0, st1
		fadd    dword [esp+30h]
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+28h]
		mov     bl, [esp+28h]
		fxch    st0, st1
		fistp   dword [esp+28h]
		mov     [eax+___1a51d0h], bl
		mov     bl, [esp+28h]
		fistp   dword [esp+28h]
		mov     [eax+___1a51d1h], bl
		mov     bl, [esp+28h]
		mov     [eax+___1a51d2h], bl
		mov     ebx, [esp+24h]
		add     eax, byte 3
		inc     ebx
		inc     edx
		mov     [esp+24h], ebx
		cmp     ebx, byte 5
		jl      short ___4a1d5h
		fstp    st0
		fstp    st0
		fstp    st0
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     edx
		pop     ecx
		pop     ebx
		ret     0ch

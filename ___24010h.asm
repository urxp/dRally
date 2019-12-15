cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___181cffh
	extern	___181d03h
	extern	__CHP
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb4ch

section .text

__GDECL(___24010h)
		push    44h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 28h
		and     esp, byte 0fffffff8h
		mov     eax, [ebp+1ch]
		mov     [esp+24h], eax
		mov     eax, [ebp+20h]
		mov     [esp+1ch], eax
		mov     eax, [ebp+24h]
		mov     [esp+20h], eax
		fld     dword [___181cffh]
		fld     dword [esp+24h]
		fdiv    st0, st1
		fld     dword [esp+1ch]
		fdiv    st0, st2
		fld     dword [esp+20h]
		fdivrp  st3, st0
		mov     ecx, 840h
		xor     edx, edx
		mov     edi, 640000h
		mov     [esp+18h], edx
		fxch    st0, st1
		fstp    dword [esp+4]
		fstp    dword [esp+8]
		fstp    dword [esp]
		mov     esi, 3fh
___24077h:
		fild    dword [esp+18h]
		fmul    dword [esp+4]
		fld     dword [esp+24h]
		fdiv    qword [___181d03h]
		faddp   st1, st0
		call    near __CHP
		fistp   dword [esp+14h]
		cmp     esi, [esp+14h]
		jge     short ___2409eh
		mov     [esp+14h], esi
___2409eh:
		fild    dword [esp+18h]
		fmul    dword [esp+8]
		fld     dword [esp+1ch]
		fdiv    qword [___181d03h]
		faddp   st1, st0
		call    near __CHP
		fistp   dword [esp+10h]
		cmp     esi, [esp+10h]
		jge     short ___240c5h
		mov     [esp+10h], esi
___240c5h:
		fild    dword [esp+18h]
		fmul    dword [esp]
		fld     dword [esp+20h]
		fdiv    qword [___181d03h]
		faddp   st1, st0
		call    near __CHP
		fistp   dword [esp+0ch]
		cmp     esi, [esp+0ch]
		jge     short ___240ebh
		mov     [esp+0ch], esi
___240ebh:
		mov     edx, [esp+14h]
		mov     ebx, edi
		shl     edx, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [esp+10h]
		mov     ebx, edi
		shl     edx, 10h
		mov     [ecx+___19eb50h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [esp+0ch]
		mov     ebx, edi
		shl     edx, 10h
		mov     [ecx+___19eb54h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [esp+18h]
		add     ecx, byte 0ch
		inc     ebx
		mov     [ecx+___19eb4ch], eax
		mov     [esp+18h], ebx
		cmp     ebx, byte 7
		jl      near ___24077h
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		ret     0ch

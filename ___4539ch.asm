cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243310h
	extern	___243314h
	extern	___3f71ch__allocateMemory
	extern	___183485h
	extern	___18347dh
	extern	__CHP

section .text

__GDECL(___4539ch)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 0ch
		and     esp, byte 0fffffff8h
		mov     ecx, [___243310h]
		mov     esi, [___243314h]
		mov     eax, 3844h
		call    near ___3f71ch__allocateMemory
		xor     edx, edx
		mov     esi, eax
		mov     [esp+8], edx
		mov     eax, 3844h
		mov     [___243314h], esi
		call    near ___3f71ch__allocateMemory
		mov     esi, [___243314h]
		mov     ecx, eax
		fld     qword [___183485h]
		fld     qword [___18347dh]
___453f5h:
		fild    dword [esp+8]
		fmul    st0, st1
		fsin    
		fmul    st0, st2
		mov     ebx, esi
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		mov     [edx+ebx*1], eax
		mov     ebx, [esp+8]
		inc     ebx
		add     edx, byte 4
		mov     [esp+8], ebx
		cmp     ebx, 0e10h
		jl      short ___453f5h
		fstp    st0
		fstp    st0
		xor     eax, eax
		xor     edx, edx
		mov     [esp+4], eax
		fld     qword [___183485h]
		fld     qword [___18347dh]
___4543bh:
		fild    dword [esp+4]
		fmul    st0, st1
		fcos    
		fmul    st0, st2
		lea     ebx, [ecx+edx*1]
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		mov     [ebx], eax
		mov     ebx, [esp+4]
		inc     ebx
		add     edx, byte 4
		mov     [esp+4], ebx
		cmp     ebx, 0e10h
		jl      short ___4543bh
		fstp    st0
		fstp    st0
		mov     [___243314h], esi
		mov     [___243310h], ecx
		mov     esp, ebp
		pop     ebp
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243c60h
	extern	___1de5d8h
	extern	___1de5b4h
	extern	___1de5a0h
	extern	___1e6f7ch
	extern	___18421dh
	extern	___184221h
	extern	___184229h
	extern	___1de590h
	extern	___184231h
	extern	__CHP
	extern	___184239h
	extern	___184241h
	extern	___1e6ed4h
	extern	___1e6ed8h
	extern	___1e6edch
	extern	___196efch
	extern	___243290h
	extern	___243d80h
	extern	___1e70aeh
	extern	__GET_FRAME_COUNTER

section .text

__GDECL(race___51204h)
		push    0bch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, 0a0h
		and     esp, byte 0fffffff8h
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     edx, eax
		shl     edx, 2
		cmp     dword [edx+___1de5d8h], byte 1
		jne     near ___514b1h
		cmp     dword [edx+___1de5b4h], byte 0
		jle     near ___514b1h
		cmp     dword [edx+___1de5a0h], byte 0
		je      near ___514b1h
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f7ch]
		fadd    dword [___18421dh]
		fmul    qword [___184221h]
		fdiv    qword [___184229h]
		fsin    
		fld     dword [edx+___1de590h]
		fmul    qword [___184231h]
		fstp    qword [esp+78h]
		fmul    qword [esp+78h]
		fst     qword [esp+80h]
		call    near __CHP
		fistp   dword [esp+9ch]
		fild    dword [esp+9ch]
		fsubr   qword [esp+80h]
		fcomp   qword [___184239h]
		fnstsw  ax
		sahf    
		jb      short ___512d5h
		fld1    
		fadd    qword [esp+80h]
		call    near __CHP
		fistp   dword [esp+64h]
		jmp     short ___512e0h
___512d5h:
		mov     eax, [esp+9ch]
		mov     [esp+64h], eax
___512e0h:
		mov     edx, [___243c60h]
		imul    eax, edx, 35eh
		fld     dword [eax+___1e6f7ch]
		fadd    dword [___18421dh]
		fmul    qword [___184221h]
		fdiv    qword [___184229h]
		fcos    
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fld     dword [eax*4+___1de590h]
		fmul    qword [___184231h]
		fxch    st0, st1
		fmul    qword [___184241h]
		fxch    st0, st1
		fstp    qword [esp+90h]
		fmul    qword [esp+90h]
		fst     qword [esp+88h]
		call    near __CHP
		fistp   dword [esp+98h]
		fild    dword [esp+98h]
		fsubr   qword [esp+88h]
		mov     ebx, [esp+64h]
		fcomp   qword [___184239h]
		fnstsw  ax
		sahf    
		jb      short ___5137dh
		fld1    
		fadd    qword [esp+88h]
		call    near __CHP
		fistp   dword [esp+60h]
		jmp     short ___51388h
___5137dh:
		mov     eax, [esp+98h]
		mov     [esp+60h], eax
___51388h:
		imul    edx, [___243c60h], 35eh
		mov     eax, [edx+___1e6ed4h]
		sub     eax, byte 8
		add     eax, ebx
		mov     ebx, [edx+___1e6ed8h]
		mov     esi, [esp+60h]
		sub     ebx, byte 8
		mov     [esp+74h], eax
		add     ebx, esi
		test    eax, eax
		jl      near ___514b1h
		add     eax, byte 10h
		cmp     eax, dword 140h
		jge     near ___514b1h
		test    ebx, ebx
		jl      near ___514b1h
		lea     eax, [ebx+10h]
		cmp     eax, dword 0c8h
		jge     near ___514b1h
		mov     eax, [edx+___1e6edch]
		mov     edx, eax
		sar     edx, 1fh
		shl     edx, 2
		sbb     eax, edx
		sar     eax, 2
		shl     eax, 8
		shl     ebx, 9
		mov     [esp+70h], eax
		xor     eax, eax
		mov     [esp+68h], ebx
		mov     [esp+6ch], eax
		mov     edi, 10h
___51408h:
		mov     esi, [esp+68h]
		mov     ecx, [esp+6ch]
		xor     eax, eax
___51412h:
		mov     edx, [___196efch]
		mov     edx, [edx*4+___243290h]
		add     edx, eax
		mov     ebx, [esp+70h]
		add     edx, ecx
		add     edx, ebx
		cmp     byte [edx], 0
		je      short ___51440h
		mov     ebx, [___243d80h]
		add     ebx, [esp+74h]
		add     ebx, eax
		mov     dl, [edx]
		mov     [esi+ebx*1+60h], dl
___51440h:
		inc     eax
		cmp     eax, byte 10h
		jl      short ___51412h
		mov     esi, [esp+68h]
		mov     ecx, [esp+6ch]
		add     esi, 200h
		add     ecx, edi
		mov     [esp+68h], esi
		mov     [esp+6ch], ecx
		cmp     ecx, 100h
		jne     short ___51408h
		imul    eax, [___243c60h], 35eh
		mov     edx, [eax+___1e70aeh]
		add     edx, byte 4

	push 	edx
	push 	ecx
		call    __GET_FRAME_COUNTER
	pop		ecx
	pop		edx

		cmp     eax, edx
		jb      short ___514b1h
		mov     ebx, [___196efch]
		inc     ebx
		mov     [___196efch], ebx
		cmp     ebx, byte 1
		jle     short ___5149ch
		xor     esi, esi
		mov     [___196efch], esi
___5149ch:

	push 	edx
	push 	ecx
		call    __GET_FRAME_COUNTER
	pop		ecx
	pop		edx

		imul    edx, [___243c60h], 35eh
		mov     [edx+___1e70aeh], eax
___514b1h:
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		xor     edx, edx
		mov     [eax*4+___1de5d8h], edx
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

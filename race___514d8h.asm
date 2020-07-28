cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243c60h
	extern	___1e7076h
	extern	___1de598h
	extern	___1e6fdah
	extern	___243ca8h
	extern	___1e6ef0h
	extern	___1de5a8h
	extern	___243ca4h
	extern	___1e6f7ch
	extern	___184249h
	extern	___184251h
	extern	___184259h
	extern	___1de590h
	extern	__CHP
	extern	___184261h
	extern	___1e6f84h
	extern	___18426dh
	extern	___184269h
	extern	___1e6f88h
	extern	___2438d0h
	extern	___1df520h
	extern	___1df524h
	extern	___243ce8h
	extern	dRally_Sound_pushEffect
	extern	___243d8ch
	extern	___243d58h
	extern	___243d28h
	extern	___243d74h
	extern	___1e6ee0h
	extern	___1df528h
	extern	___243d7ch
	extern	___1de59ch
	extern	rand_watcom106
	extern	___1e6fcch
	extern	___1e6fd0h
	extern	___1e6f80h
	extern	___184275h
	extern	___1e6fd4h

section .text

__GDECL(race___514d8h)
		push    0ech
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, 0c8h
		and     esp, byte 0fffffff8h
		imul    eax, [___243c60h], 35eh
		mov     ebx, [eax+___1e7076h]
		test    ebx, ebx
		jle     short ___51510h
		lea     ecx, [ebx-1]
		mov     [eax+___1e7076h], ecx
___51510h:
		mov     edx, [___243c60h]
		lea     ebx, [edx*8+0]
		add     ebx, edx
		shl     ebx, 2
		add     ebx, edx
		shl     ebx, 2
		cmp     dword [ebx+___1de598h], byte 0
		jle     near ___5191dh
		imul    eax, edx, 35eh
		cmp     dword [eax+___1e6fdah], byte 0
		jne     near ___5191dh
		mov     edx, [___243ca8h]
		shl     edx, 2
		add     edx, eax
		test    byte [edx+___1e6ef0h], 40h
		je      near ___5191dh
		cmp     dword [ebx+___1de5a8h], byte 0
		jle     near ___5191dh
		cmp     dword [___243ca4h], 1aeh
		jle     near ___5191dh
		cmp     dword [eax+___1e7076h], byte 0
		jne     near ___5191dh
		mov     ch, [edx+___1e6ef0h]
		test    ch, 2
		je      short ___5159dh
		test    ch, 40h
		jne     near ___5191dh
___5159dh:
		mov     edx, [___243c60h]
		imul    eax, edx, 35eh
		mov     ebx, 32h
		fld     dword [eax+___1e6f7ch]
		mov     [eax+___1e7076h], ebx
		fmul    qword [___184249h]
		fdiv    qword [___184251h]
		fsin    
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fmul    qword [___184259h]
		fld     dword [eax*4+___1de590h]
		fstp    qword [esp+0a8h]
		fmul    qword [esp+0a8h]
		fst     qword [esp+0b8h]
		call    near __CHP
		fistp   dword [esp+0c4h]
		fild    dword [esp+0c4h]
		fsubr   qword [esp+0b8h]
		fcomp   qword [___184261h]
		fnstsw  ax
		sahf    
		jb      short ___51631h
		fld1    
		fadd    qword [esp+0b8h]
		call    near __CHP
		fistp   dword [esp+60h]
		jmp     short ___5163ch
___51631h:
		mov     eax, [esp+0c4h]
		mov     [esp+60h], eax
___5163ch:
		mov     ecx, [___243c60h]
		imul    eax, ecx, 35eh
		fild    dword [esp+60h]
		fld     dword [eax+___1e6f84h]
		fld     dword [eax+___1e6f7ch]
		fmul    qword [___184249h]
		fdiv    qword [___184251h]
		fcos    
		lea     eax, [ecx*8+0]
		fmul    qword [___18426dh]
		add     eax, ecx
		fmul    qword [___184259h]
		shl     eax, 2
		fxch    st0, st1
		fadd    dword [___184269h]
		add     eax, ecx
		faddp   st2, st0
		fld     dword [eax*4+___1de590h]
		fstp    qword [esp+0a0h]
		fmul    qword [esp+0a0h]
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fst     qword [esp+0b0h]
		call    near __CHP
		fistp   dword [esp+0c0h]
		fild    dword [esp+0c0h]
		fsubr   qword [esp+0b0h]
		fxch    st0, st1
		fistp   dword [esp+88h]
		fcomp   qword [___184261h]
		fnstsw  ax
		sahf    
		jb      short ___516f1h
		fld1    
		fadd    qword [esp+0b0h]
		call    near __CHP
		fistp   dword [esp+70h]
		jmp     short ___516fch
___516f1h:
		mov     eax, [esp+0c0h]
		mov     [esp+70h], eax
___516fch:
		imul    eax, [___243c60h], 35eh
		fild    dword [esp+70h]
		fld     dword [eax+___1e6f88h]
		fadd    dword [___184269h]
		mov     edi, [___2438d0h]
		faddp   st1, st0
		xor     ebx, ebx
		call    near __CHP
		fistp   dword [esp+74h]
		test    edi, edi
		jle     short ___5177fh
		mov     eax, [esp+88h]
		mov     esi, [esp+74h]
		mov     ecx, edi
		add     eax, byte 4
		shl     ecx, 4
		mov     [esp+78h], eax
		add     esi, byte 4
		mov     edi, [esp+78h]
		xor     eax, eax
___5174dh:
		mov     edx, [eax+___1df520h]
		sub     edx, edi
		test    edx, edx
		jge     short ___5175bh
		neg     edx
___5175bh:
		cmp     edx, byte 8
		jge     short ___51778h
		mov     edx, [eax+___1df524h]
		sub     edx, esi
		test    edx, edx
		jge     short ___5176eh
		neg     edx
___5176eh:
		cmp     edx, byte 8
		jge     short ___51778h
		mov     ebx, 1
___51778h:
		add     eax, byte 10h
		cmp     eax, ecx
		jl      short ___5174dh
___5177fh:
		test    ebx, ebx
		jne     near ___5191dh
		mov     edx, [___243ce8h]
		mov     eax, [___243c60h]
		cmp     eax, edx
		jne     short ___517a5h
		push    8000h
		mov     ecx, 9000h
		jmp     near ___51830h
___517a5h:
		imul    eax, eax, 35eh
		imul    edx, edx, 35eh
		fld     dword [eax+___1e6f88h]
		fld     dword [eax+___1e6f84h]
		fsub    dword [edx+___1e6f84h]
		fxch    st0, st1
		fsub    dword [edx+___1e6f88h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+64h]
		mov     edx, [esp+64h]
		imul    edx, edx
		call    near __CHP
		fistp   dword [esp+68h]
		mov     eax, [esp+68h]
		imul    eax, eax
		add     edx, eax
		mov     [esp+6ch], edx
		fild    dword [esp+6ch]
		fsqrt   
		call    near __CHP
		fistp   dword [esp+9ch]
		mov     edx, [esp+9ch]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, eax
		shl     eax, 4
		mov     ecx, 10000h
		sub     eax, edx
		sub     ecx, eax
		cmp     ecx, 1000h
		jle     short ___51844h
		push    8000h
___51830h:
		push    21000h
		mov     edx, 12h
		mov     eax, 4
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
___51844h:
		mov     edx, [___2438d0h]
		mov     eax, [esp+88h]
		shl     edx, 4
		add     eax, byte 4
		mov     [edx+___1df520h], eax
		mov     eax, [esp+74h]
		add     eax, byte 4
		mov     [edx+___1df524h], eax
		mov     eax, [___2438d0h]
		mov     edi, 8
		inc     eax
		xor     edx, edx
		mov     [___2438d0h], eax
		mov     eax, [esp+74h]
		mov     [esp+84h], edx
		mov     [esp+80h], eax
___5188eh:
		mov     edx, [esp+80h]
		mov     esi, [esp+84h]
		xor     eax, eax
		mov     [esp+8ch], edx
___518a5h:
		mov     edx, [___243d8ch]
		add     edx, eax
		add     edx, esi
		cmp     byte [edx], 0
		je      short ___518d8h
		mov     ebx, [___243d58h]
		mov     ecx, [esp+88h]
		add     ebx, eax
		add     ecx, ebx
		mov     ebx, [esp+8ch]
		imul    ebx, [___243d28h]
		mov     dl, [edx]
		mov     [ecx+ebx*1], dl
___518d8h:
		inc     eax
		cmp     eax, byte 8
		jl      short ___518a5h
		mov     edx, [esp+80h]
		mov     eax, [esp+84h]
		inc     edx
		add     eax, edi
		mov     [esp+80h], edx
		mov     [esp+84h], eax
		cmp     eax, byte 40h
		jne     short ___5188eh
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		dec     dword [eax*4+___1de5a8h]
___5191dh:
		xor     esi, esi
		mov     edi, [___2438d0h]
		mov     [esp+7ch], esi
		test    edi, edi
		jle     near ___51cd5h
		xor     edi, edi
___51933h:
		imul    eax, [___243c60h], 35eh
		mov     ecx, [edi+___1df520h]
		mov     esi, [edi+___1df524h]
		fld     dword [eax+___1e6f88h]
		fld     dword [eax+___1e6f84h]
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+6ch]
		fistp   dword [esp+9ch]
		mov     edx, [esp+6ch]
		mov     eax, [esp+9ch]
		sub     edx, ecx
		sub     eax, esi
		test    edx, edx
		jge     short ___51987h
		mov     ebx, edx
		neg     ebx
		jmp     short ___51989h
___51987h:
		mov     ebx, edx
___51989h:
		cmp     ebx, byte 14h
		jge     near ___51cbbh
		test    eax, eax
		jge     short ___5199ch
		mov     ebx, eax
		neg     ebx
		jmp     short ___5199eh
___5199ch:
		mov     ebx, eax
___5199eh:
		cmp     ebx, byte 14h
		jge     near ___51cbbh
		imul    ecx, [___243c60h], 35eh
		add     eax, byte 14h
		imul    eax, eax, byte 28h
		mov     ebx, [___243d74h]
		add     ebx, [ecx+___1e6ee0h]
		add     edx, ebx
		cmp     byte [edx+eax*1+14h], 3
		jbe     near ___51cbbh
		cmp     dword [edi+___1df528h], byte 0ffffffffh
		jne     near ___51cbbh
		xor     ebx, ebx
		xor     ecx, ecx
		mov     [esp+98h], ebx
		mov     [esp+90h], ecx
		mov     ebx, edi
___519f1h:
		mov     edx, [esp+90h]
		xor     eax, eax
		mov     [esp+94h], edx
___51a01h:
		mov     edx, [___243d7ch]
		mov     esi, [esp+94h]
		add     edx, eax
		add     edx, esi
		cmp     byte [edx+500h], 0
		je      short ___51a4eh
		mov     esi, [esp+98h]
		mov     ecx, [ebx+___1df524h]
		add     ecx, esi
		mov     esi, [___243d28h]
		sub     ecx, byte 8
		imul    esi, ecx
		mov     ecx, [___243d58h]
		add     ecx, [ebx+___1df520h]
		add     ecx, eax
		mov     dl, [edx+500h]
		mov     [ecx+esi*1-8], dl
___51a4eh:
		inc     eax
		cmp     eax, byte 10h
		jl      short ___51a01h
		mov     edx, [esp+98h]
		mov     eax, [esp+90h]
		inc     edx
		add     eax, byte 10h
		mov     [esp+98h], edx
		mov     [esp+90h], eax
		cmp     edx, byte 10h
		jl      near ___519f1h
		mov     edx, [___243c60h]
		imul    eax, edx, 35eh
		xor     esi, esi
		mov     ebx, [eax+___1e6fdah]
		mov     [edi+___1df528h], esi
		test    ebx, ebx
		jne     short ___51ab5h
		imul    eax, edx, 94h
		mov     edx, 400h
		sub     edx, [eax+___1de59ch]
		imul    edx, edx, byte 14h
		sub     [eax+___1de598h], edx
___51ab5h:
		imul    eax, [___243c60h], 94h
		cmp     dword [eax+___1de598h], byte 0
		jge     short ___51ad0h
		xor     edx, edx
		mov     [eax+___1de598h], edx
___51ad0h:
		imul    ebx, [___243c60h], 35eh

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		mov     ecx, 3
		idiv    ecx
		dec     edx
		mov     [esp+9ch], edx
		fild    dword [esp+9ch]
		fmul    qword [___184261h]
		fld     dword [ebx+___1e6fcch]
		fxch    st0, st1
		fadd    st0, st1
		mov     esi, [___243c60h]
		fstp    st1
		fstp    dword [ebx+___1e6fcch]

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    ecx
		imul    ebx, esi, 35eh
		dec     edx
		mov     [esp+9ch], edx
		fild    dword [esp+9ch]
		fmul    qword [___184261h]
		fld     dword [ebx+___1e6fd0h]
		fxch    st0, st1
		fadd    st0, st1
		mov     eax, [___243c60h]
		fstp    st1
		fstp    dword [ebx+___1e6fd0h]
		imul    ebx, eax, 35eh

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ecx, 0bh
		sar     edx, 1fh
		idiv    ecx
		sub     edx, byte 5
		mov     [esp+9ch], edx
		fild    dword [esp+9ch]
		fadd    dword [ebx+___1e6f84h]
		mov     edx, [___243c60h]
		fstp    dword [ebx+___1e6f84h]
		imul    ebx, edx, 35eh

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    ecx
		sub     edx, byte 5
		mov     [esp+9ch], edx
		fild    dword [esp+9ch]
		fadd    dword [ebx+___1e6f88h]
		fstp    dword [ebx+___1e6f88h]

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 16h
		sar     edx, 1fh
		idiv    ebx
		mov     ebx, [___243c60h]
		imul    eax, ebx, 35eh
		sub     edx, byte 0ah
		fld     dword [eax+___1e6f80h]
		fmul    qword [___184275h]
		mov     [esp+9ch], edx
		mov     ecx, [___243ce8h]
		fild    dword [esp+9ch]
		fxch    st0, st1
		fsubr   dword [eax+___1e6f80h]
		fxch    st0, st1
		fstp    dword [eax+___1e6fd4h]
		fstp    dword [eax+___1e6f80h]
		cmp     ebx, ecx
		jne     short ___51c28h
		push    8000h
		mov     ecx, 9000h
		jmp     near ___51ca5h
___51c28h:
		imul    edx, ecx, 35eh
		fld     dword [eax+___1e6f88h]
		fld     dword [eax+___1e6f84h]
		fsub    dword [edx+___1e6f84h]
		fxch    st0, st1
		fsub    dword [edx+___1e6f88h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+64h]
		mov     edx, [esp+64h]
		imul    edx, edx
		call    near __CHP
		fistp   dword [esp+68h]
		mov     eax, [esp+68h]
		imul    eax, eax
		add     edx, eax
		mov     [esp+9ch], edx
		fild    dword [esp+9ch]
		fsqrt   
		call    near __CHP
		fistp   dword [esp+9ch]
		imul    ecx, [esp+9ch], byte 4bh
		mov     eax, 10000h
		sub     eax, ecx
		mov     ecx, eax
		cmp     eax, dword 1000h
		jle     short ___51cbbh
		push    8000h
___51ca5h:
		mov     edx, 17h
		push    21000h
		mov     eax, 4
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
___51cbbh:
		mov     eax, [esp+7ch]
		mov     edx, [___2438d0h]
		inc     eax
		add     edi, byte 10h
		mov     [esp+7ch], eax
		cmp     eax, edx
		jl      near ___51933h
___51cd5h:
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

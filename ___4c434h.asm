cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243c60h
	extern	___1e6f80h
	extern	___18400dh
	extern	___243cfch
	extern	___1e702eh
	extern	___1e702ah
	extern	___1de598h
	extern	___1e6fdah
	extern	___243ca8h
	extern	___1e6ef0h
	extern	___1de5b4h
	extern	___1de5a0h
	extern	___1de584h
	extern	___184029h
	extern	___184019h
	extern	___1de5d8h
	extern	___184021h
	extern	___184011h
	extern	___184031h
	extern	___243ce8h
	extern	___196db8h
	extern	___184035h
	extern	___1e6f90h
	extern	___1de58ch
	extern	___1e6f8ch
	extern	___184041h
	extern	___184045h
	extern	___184039h
	extern	___1e6ee8h
	extern	___1e6eech
	extern	___18404dh
	extern	___1e6f78h
	extern	___1de590h
	extern	___184051h
	extern	___184055h
	extern	___1e6f7ch
	extern	___184059h
	extern	___18405dh
	extern	___184065h
	extern	___184069h
	extern	___184071h
	extern	___184075h
	extern	___1e6fd4h
	extern	___18407dh
	extern	___184081h
	extern	___184089h
	extern	___184099h
	extern	___18409dh
	extern	___184091h
	extern	___243d24h
	extern	___243d20h
	extern	___1840a5h
	extern	___1840b1h
	extern	___1840a9h
	extern	___1e6fcch
	extern	___1e6fd0h
	extern	___1e6f94h
	extern	___1e6f9ch
	extern	___1e6f98h
	extern	___1e6fa0h
	extern	___1840b5h
	extern	___1840b9h
	extern	___1840bdh
	extern	___1e6fa4h
	extern	___1e6fach
	extern	___1e6fb4h
	extern	___1e6fa8h
	extern	___1e6fb0h
	extern	___1840c5h
	extern	___1e6f88h
	extern	___1e6fc8h
	extern	___243d28h
	extern	__CHP
	extern	___1e6fc4h
	extern	___1e6f84h
	extern	___1e6fbch
	extern	___1e6fc0h
	extern	___1e6fb8h
	extern	___243d2ch
	extern	___243d60h
	extern	___1840cdh
	extern	___1e6edch
	extern	___1840d5h
	extern	___1e6ee0h
	extern	___243d74h
	extern	___243cb0h
	extern	___243cb4h
	extern	___1e6ee4h
	extern	___1e7042h
	extern	___1e705eh
	extern	___1e7062h
	extern	___1e7046h
	extern	___1e703ah
	extern	___1e703eh
	extern	rand_watcom106
	extern	___1e7032h
	extern	___1e7036h
	extern	___1840d9h
	extern	___1840e1h
	extern	___1840e9h
	extern	___1840f1h
	extern	___1840f5h
	extern	___1840fdh
	extern	___184105h
	extern	___184109h
	extern	___184111h
	extern	___184119h
	extern	___18411dh
	extern	___184125h
	extern	___18412dh
	extern	___184135h
	extern	___18413dh

section .text

__GDECL(___4c434h)
		push    80h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 64h
		and     esp, byte 0fffffff8h
		mov     ebx, [___243c60h]
		imul    eax, ebx, 35eh
		fld     dword [eax+___1e6f80h]
		fdiv    dword [___18400dh]
		xor     edx, edx
		mov     [___243cfch], edx
		mov     [eax+___1e702eh], edx
		lea     edx, [ebx*8+0]
		add     edx, ebx
		shl     edx, 2
		fld     dword [eax+___1e702eh]
		add     edx, ebx
		fstp    dword [eax+___1e702ah]
		shl     edx, 2
		fsubr   dword [eax+___1e6f80h]
		mov     esi, [edx+___1de598h]
		fstp    dword [eax+___1e6f80h]
		test    esi, esi
		jle     near ___4cb16h
		cmp     dword [eax+___1e6fdah], byte 0
		jne     near ___4c771h
		mov     ebx, [___243ca8h]
		shl     ebx, 2
		add     ebx, eax
		mov     cl, [ebx+___1e6ef0h]
		test    cl, 1
		je      near ___4c5d6h
		test    cl, 10h
		je      near ___4c569h
		cmp     dword [edx+___1de5b4h], byte 0
		jle     near ___4c569h
		cmp     dword [edx+___1de5a0h], byte 0
		je      short ___4c549h
		fld     dword [edx+___1de584h]
		fmul    qword [___184029h]
		fdiv    qword [___184019h]
		mov     edi, [edx+___1de598h]
		sub     edi, byte 16h
		fadd    dword [eax+___1e6f80h]
		mov     [edx+___1de598h], edi
		fstp    dword [eax+___1e6f80h]
		test    edi, edi
		jge     short ___4c528h
		xor     ebx, ebx
		mov     [edx+___1de598h], ebx
___4c528h:
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     dword [eax*4+___1de5d8h], 1
		jmp     short ___4c5a2h
___4c549h:
		fld     dword [edx+___1de584h]
		fmul    qword [___184021h]
		fdiv    qword [___184019h]
		fadd    dword [eax+___1e6f80h]
		fstp    dword [eax+___1e6f80h]
		jmp     short ___4c5a2h
___4c569h:
		mov     ecx, [___243c60h]
		imul    ebx, ecx, 35eh
		lea     eax, [ecx*8+0]
		add     eax, ecx
		shl     eax, 2
		add     eax, ecx
		fld     dword [eax*4+___1de584h]
		fmul    qword [___184011h]
		fdiv    qword [___184019h]
		fadd    dword [ebx+___1e6f80h]
		fstp    dword [ebx+___1e6f80h]
___4c5a2h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f80h]
		fdiv    dword [___184031h]
		fsubr   dword [eax+___1e6f80h]
		fst     dword [eax+___1e6f80h]
		fdiv    dword [___18400dh]
		fadd    dword [eax+___1e6f80h]
		fstp    dword [eax+___1e6f80h]
___4c5d6h:
		mov     edi, [___243ce8h]
		cmp     edi, [___243c60h]
		jne     short ___4c60ah
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     edx, [eax*4+___1de5d8h]
		cmp     edx, byte 1
		jne     short ___4c60ah
		add     [___196db8h], edx
___4c60ah:
		mov     ecx, [___243ce8h]
		cmp     ecx, [___243c60h]
		jne     short ___4c63dh
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     esi, [eax*4+___1de5d8h]
		test    esi, esi
		jne     short ___4c63dh
		mov     [___196db8h], esi
___4c63dh:
		imul    edx, [___243c60h], 35eh
		mov     eax, [___243ca8h]
		shl     eax, 2
		add     eax, edx
		mov     dl, [eax+___1e6ef0h]
		test    dl, 2
		je      short ___4c6c3h
		test    dl, 2
		je      short ___4c666h
		test    dl, 40h
		jne     short ___4c6c3h
___4c666h:
		mov     ebx, [___243c60h]
		imul    edx, ebx, 35eh
		lea     eax, [ebx*8+0]
		add     eax, ebx
		shl     eax, 2
		add     eax, ebx
		fld     dword [eax*4+___1de584h]
		fdiv    dword [___184035h]
		fdiv    qword [___184019h]
		fsubr   dword [edx+___1e6f80h]
		fst     dword [edx+___1e6f80h]
		fdiv    dword [___184031h]
		fsubr   dword [edx+___1e6f80h]
		fst     dword [edx+___1e6f80h]
		fdiv    dword [___18400dh]
		fadd    dword [edx+___1e6f80h]
		fstp    dword [edx+___1e6f80h]
___4c6c3h:
		mov     ecx, [___243c60h]
		imul    edx, ecx, 35eh
		mov     eax, [___243ca8h]
		test    byte [edx+eax*4+___1e6ef0h], 10h
		je      short ___4c71ah
		lea     eax, [ecx*8+0]
		add     eax, ecx
		shl     eax, 2
		add     eax, ecx
		shl     eax, 2
		mov     esi, [eax+___1de5b4h]
		test    esi, esi
		jle     short ___4c71ah
		cmp     dword [eax+___1de598h], byte 0
		jle     short ___4c71ah
		lea     edx, [esi+0fffffe70h]
		mov     [eax+___1de5b4h], edx
		test    edx, edx
		jge     short ___4c71ah
		xor     ecx, ecx
		mov     [eax+___1de5b4h], ecx
___4c71ah:
		mov     esi, [___243c60h]
		imul    eax, esi, 35eh
		mov     edx, [___243ca8h]
		test    byte [eax+edx*4+___1e6ef0h], 10h
		jne     short ___4c771h
		lea     eax, [esi*8+0]
		add     eax, esi
		shl     eax, 2
		add     eax, esi
		shl     eax, 2
		cmp     dword [eax+___1de598h], byte 0
		jle     short ___4c771h
		mov     edx, [eax+___1de5b4h]
		add     edx, byte 14h
		mov     [eax+___1de5b4h], edx
		cmp     edx, 19000h
		jle     short ___4c771h
		mov     dword [eax+___1de5b4h], 19000h
___4c771h:
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
		cmp     dword [eax+___1de598h], byte 0
		jg      short ___4c799h
		xor     edi, edi
		mov     [eax+___1de584h], edi
___4c799h:
		mov     eax, [___243c60h]
		imul    edx, eax, 35eh
		cmp     dword [edx+___1e6fdah], byte 0
		jne     near ___4c847h
		mov     ebx, eax
		shl     eax, 3
		add     eax, ebx
		shl     eax, 2
		add     ebx, eax
		shl     ebx, 2
		fldz    
		fcomp   dword [ebx+___1de584h]
		fnstsw  ax
		sahf    
		jae     near ___4c847h
		fld     dword [edx+___1e6f90h]
		fmul    dword [edx+___1e6f80h]
		fmul    dword [ebx+___1de58ch]
		fdiv    dword [ebx+___1de584h]
		fldz    
		fxch    st0, st1
		fstp    dword [edx+___1e6f8ch]
		fcomp   dword [edx+___1e6f8ch]
		fnstsw  ax
		sahf    
		jbe     short ___4c80ch
		fld     dword [edx+___1e6f8ch]
		fchs    
		fstp    dword [esp+18h]
		jmp     short ___4c816h
___4c80ch:
		mov     eax, [edx+___1e6f8ch]
		mov     [esp+18h], eax
___4c816h:
		fld     dword [esp+18h]
		fcomp   dword [___184041h]
		fnstsw  ax
		sahf    
		jbe     short ___4c867h
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f80h]
		fld     st0
		fdiv    qword [___184045h]
		fsubp   st1, st0
		fstp    dword [eax+___1e6f80h]
		jmp     short ___4c867h
___4c847h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f8ch]
		fld     st0
		fdiv    qword [___184039h]
		fsubp   st1, st0
		fstp    dword [eax+___1e6f8ch]
___4c867h:
		mov     edi, [___243c60h]
		imul    edx, edi, 35eh
		mov     eax, [___243ca8h]
		test    byte [edx+eax*4+___1e6ef0h], 8
		je      near ___4c92ah
		cmp     dword [edx+___1e6ee8h], byte 0
		jne     near ___4c92ah
		cmp     dword [edx+___1e6eech], byte 0
		jne     near ___4c92ah
		fld     dword [___18404dh]
		fdiv    dword [edx+___1e6f78h]
		lea     eax, [edi*8+0]
		add     eax, edi
		shl     eax, 2
		add     eax, edi
		fdivr   dword [eax*4+___1de590h]
		fld     dword [edx+___1e6f8ch]
		fdiv    dword [___184051h]
		fxch    st0, st1
		fsubr   dword [___243cfch]
		fst     dword [___243cfch]
		fmul    dword [___184055h]
		fmulp   st1, st0
		fld     dword [edx+___1e6f90h]
		fld     dword [edx+___1e6f78h]
		fsubr   dword [edx+___1e6f7ch]
		fxch    st0, st2
		fsubr   dword [___243cfch]
		fxch    st0, st2
		fstp    dword [edx+___1e6f7ch]
		fxch    st0, st1
		fstp    dword [___243cfch]
		fcomp   dword [___184059h]
		fnstsw  ax
		sahf    
		jbe     short ___4c92ah
		fld     dword [edx+___1e6f90h]
		fadd    qword [___18405dh]
		fstp    dword [edx+___1e6f90h]
___4c92ah:
		imul    edx, [___243c60h], 35eh
		fldz    
		fcomp   dword [edx+___1e6f7ch]
		fnstsw  ax
		sahf    
		jbe     short ___4c953h
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___184065h]
		fstp    dword [edx+___1e6f7ch]
___4c953h:
		mov     esi, [___243c60h]
		imul    edx, esi, 35eh
		mov     eax, [___243ca8h]
		test    byte [edx+eax*4+___1e6ef0h], 4
		je      near ___4ca15h
		cmp     dword [edx+___1e6ee8h], byte 0
		jne     near ___4ca15h
		cmp     dword [edx+___1e6eech], byte 0
		jne     near ___4ca15h
		fld     dword [___18404dh]
		fdiv    dword [edx+___1e6f78h]
		lea     eax, [esi*8+0]
		add     eax, esi
		shl     eax, 2
		add     eax, esi
		fdivr   dword [eax*4+___1de590h]
		fld     dword [edx+___1e6f8ch]
		fdiv    dword [___184051h]
		fxch    st0, st1
		fadd    dword [___243cfch]
		fst     dword [___243cfch]
		fmul    dword [___184055h]
		fmulp   st1, st0
		fld     dword [edx+___1e6f78h]
		mov     ebx, [edx+___1e6f90h]
		fadd    dword [edx+___1e6f7ch]
		fxch    st0, st1
		fadd    dword [___243cfch]
		fxch    st0, st1
		fstp    dword [edx+___1e6f7ch]
		fstp    dword [___243cfch]
		cmp     ebx, 42100000h
		jge     short ___4ca15h
		fld     dword [edx+___1e6f90h]
		fld     st0
		fadd    qword [___184069h]
		fstp    st1
		fstp    dword [edx+___1e6f90h]
___4ca15h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e6f7ch], 43b40000h
		jl      short ___4ca3dh
		fld     dword [eax+___1e6f7ch]
		fadd    dword [___184071h]
		fstp    dword [eax+___1e6f7ch]
___4ca3dh:
		imul    edx, [___243c60h], 35eh
		fldz    
		fcomp   dword [edx+___1e6f90h]
		fnstsw  ax
		sahf    
		jae     short ___4ca66h
		fld     dword [edx+___1e6f90h]
		fadd    qword [___184075h]
		fstp    dword [edx+___1e6f90h]
___4ca66h:
		imul    edx, [___243c60h], 35eh
		fldz    
		fcomp   dword [edx+___1e6f90h]
		fnstsw  ax
		sahf    
		jbe     short ___4ca8bh
		fld1    
		fadd    dword [edx+___1e6f90h]
		fstp    dword [edx+___1e6f90h]
___4ca8bh:
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		cmp     dword [eax*4+___1de598h], byte 0
		jle     short ___4cac5h
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6fd4h]
		fadd    dword [eax+___1e6f7ch]
		fstp    dword [eax+___1e6f7ch]
___4cac5h:
		imul    edx, [___243c60h], 35eh
		fldz    
		fcomp   dword [edx+___1e6f7ch]
		fnstsw  ax
		sahf    
		jbe     short ___4caeeh
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___184065h]
		fstp    dword [edx+___1e6f7ch]
___4caeeh:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e6f7ch], 43b40000h
		jl      short ___4cb16h
		fld     dword [eax+___1e6f7ch]
		fadd    dword [___184071h]
		fstp    dword [eax+___1e6f7ch]
___4cb16h:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___18407dh]
		fld     qword [___184081h]
		fxch    st0, st1
		fmul    st0, st1
		fld     qword [___184089h]
		fxch    st0, st1
		fdiv    st0, st1
		fld     st0
		fsin    
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___18404dh]
		fadd    dword [___18407dh]
		fmul    st0, st4
		fdiv    st0, st3
		fld     st0
		fsin    
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___184099h]
		fadd    dword [___18407dh]
		fmulp   st6, st0
		fxch    st0, st5
		fdivrp  st4, st0
		fld     st3
		fsin    
		fxch    st0, st3
		fcos    
		fxch    st0, st1
		fcos    
		fxch    st0, st4
		fcos    
		fstp    qword [esp+10h]
		fld     dword [edx+___1e6f8ch]
		fxch    st0, st3
		fmul    st0, st3
		fdiv    qword [___18409dh]
		fld     qword [esp+10h]
		fmul    qword [___184091h]
		fmulp   st4, st0
		fxch    st0, st3
		fdiv    qword [___18409dh]
		fxch    st0, st1
		fstp    qword [esp+10h]
		fld     dword [edx+___1e6f80h]
		fxch    st0, st2
		fmul    st0, st2
		fld     qword [esp+10h]
		fmul    qword [___184091h]
		fmulp   st3, st0
		fxch    st0, st4
		fstp    qword [esp+8]
		fld     dword [___243cfch]
		fxch    st0, st5
		fmul    st0, st5
		fxch    st0, st4
		fst     dword [esp+34h]
		fxch    st0, st3
		fstp    dword [esp+38h]
		fxch    st0, st2
		fadd    dword [esp+38h]
		fld     qword [esp+8]
		fmul    qword [___184091h]
		fxch    st0, st1
		fmul    st0, st0
		fxch    st0, st2
		fstp    dword [esp+30h]
		fxch    st0, st2
		fstp    dword [esp+3ch]
		fld     dword [esp+30h]
		fadd    dword [esp+3ch]
		fxch    st0, st2
		fmulp   st4, st0
		fxch    st0, st1
		fmul    st0, st0
		fxch    st0, st2
		fstp    dword [___243d24h]
		faddp   st1, st0
		fxch    st0, st1
		fstp    dword [___243d20h]
		fldz    
		fcompp  
		fnstsw  ax
		sahf    
		je      short ___4cc7ah
		fldz    
		fcomp   dword [edx+___1e6f80h]
		fnstsw  ax
		sahf    
		jbe     short ___4cc4ch
		fld     dword [edx+___1e6f80h]
		fchs    
		fstp    dword [esp+60h]
		jmp     short ___4cc56h
___4cc4ch:
		mov     eax, [edx+___1e6f80h]
		mov     [esp+60h], eax
___4cc56h:
		fld     dword [esp+60h]
		fld     dword [esp+34h]
		fadd    dword [esp+38h]
		fmul    st0, st0
		fld     dword [esp+30h]
		fadd    dword [esp+3ch]
		fmul    st0, st0
		faddp   st1, st0
		fsqrt   
		fdivp   st1, st0
		fstp    dword [esp+58h]
		jmp     short ___4cc82h
___4cc7ah:
		mov     dword [esp+58h], 3f800000h
___4cc82h:
		imul    edx, [___243c60h], 35eh
		fld     dword [___18407dh]
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st1
		fld     dword [___1840a5h]
		fxch    st0, st1
		fadd    st0, st1
		fld     qword [___184081h]
		fxch    st0, st1
		fmul    st0, st1
		fld     qword [___184089h]
		fxch    st0, st1
		fdiv    st0, st1
		fsin    
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st5
		faddp   st4, st0
		fxch    st0, st3
		fmul    st0, st2
		fdiv    st0, st1
		fcos    
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st5
		fadd    dword [___1840b1h]
		fmul    st0, st3
		fdiv    st0, st2
		fsin    
		fld     dword [edx+___1e6f7ch]
		faddp   st6, st0
		fxch    st0, st5
		fadd    dword [___1840b1h]
		fmulp   st3, st0
		fxch    st0, st2
		fdivrp  st1, st0
		fcos    
		fld     dword [esp+58h]
		fmul    dword [esp+34h]
		fld     dword [esp+58h]
		fmul    dword [esp+38h]
		fld     dword [esp+58h]
		fmul    dword [esp+30h]
		fxch    st0, st2
		fstp    dword [edx+___1e702ah]
		fld     dword [esp+58h]
		fmul    dword [esp+3ch]
		fxch    st0, st5
		fmul    qword [___1840a9h]
		fxch    st0, st4
		fmul    qword [___184091h]
		fxch    st0, st6
		fmul    qword [___1840a9h]
		fxch    st0, st3
		fmul    qword [___184091h]
		fxch    st0, st6
		fmul    qword [___1840a9h]
		fxch    st0, st1
		fadd    dword [edx+___1e702ah]
		fxch    st0, st6
		fmul    qword [___1840a9h]
		fxch    st0, st6
		fstp    dword [edx+___1e702ah]
		fld     dword [___243d24h]
		xor     ecx, ecx
		fxch    st0, st2
		fstp    dword [edx+___1e702eh]
		fld     dword [___243d20h]
		mov     [___243d24h], ecx
		fxch    st0, st5
		fadd    dword [edx+___1e702eh]
		mov     [___243d20h], ecx
		fstp    dword [edx+___1e702eh]
		fld     dword [edx+___1e6fcch]
		fxch    st0, st2
		fadd    dword [edx+___1e702ah]
		fxch    st0, st5
		fadd    dword [edx+___1e702eh]
		fxch    st0, st5
		fstp    dword [edx+___1e702ah]
		fld     dword [edx+___1e6fd0h]
		fxch    st0, st5
		fstp    dword [edx+___1e702eh]
		fxch    st0, st1
		fadd    dword [edx+___1e702ah]
		fxch    st0, st4
		fadd    dword [edx+___1e702eh]
		fxch    st0, st4
		fstp    dword [edx+___1e702ah]
		fxch    st0, st3
		fstp    dword [edx+___1e702eh]
		fld     dword [edx+___1e702ah]
		fld     st0
		fld     dword [edx+___1e702eh]
		fxch    st0, st2
		faddp   st4, st0
		faddp   st2, st0
		fxch    st0, st2
		fstp    dword [edx+___1e6f94h]
		fld     dword [edx+___1e702eh]
		fxch    st0, st1
		fstp    dword [edx+___1e6f9ch]
		fxch    st0, st1
		faddp   st2, st0
		faddp   st2, st0
		fstp    dword [edx+___1e6f98h]
		fstp    dword [edx+___1e6fa0h]
		fld     dword [___18407dh]
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st1
		fld     dword [___1840b5h]
		fxch    st0, st1
		fadd    st0, st1
		fmul    qword [___184081h]
		fld     qword [___184089h]
		fxch    st0, st1
		fdiv    st0, st1
		fsin    
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st4
		faddp   st3, st0
		fxch    st0, st2
		fmul    qword [___184081h]
		fdiv    st0, st1
		fcos    
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st4
		fld     dword [___1840b9h]
		fxch    st0, st1
		fadd    st0, st1
		fmul    qword [___184081h]
		fdiv    st0, st3
		fsin    
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st6
		faddp   st2, st0
		fxch    st0, st1
		fmul    qword [___184081h]
		fdiv    st0, st3
		fcos    
		fld     dword [edx+___1e6f7ch]
		faddp   st6, st0
		fxch    st0, st5
		fadd    dword [___18404dh]
		fmul    qword [___184081h]
		fdivrp  st3, st0
		fxch    st0, st2
		fsin    
		fxch    st0, st3
		fld     qword [___1840a9h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fld     qword [___184091h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st4
		fmul    st0, st2
		fxch    st0, st6
		fmulp   st1, st0
		fxch    st0, st4
		fmul    qword [___1840bdh]
		fxch    st0, st3
		fmul    st0, st1
		fxch    st0, st4
		fmulp   st1, st0
		fld     dword [edx+___1e702ah]
		faddp   st2, st0
		fld     dword [edx+___1e702ah]
		fxch    st0, st2
		fstp    dword [edx+___1e6fa4h]
		fld     dword [edx+___1e702ah]
		fld     dword [edx+___1e702eh]
		fxch    st0, st3
		faddp   st6, st0
		faddp   st3, st0
		fxch    st0, st4
		fstp    dword [edx+___1e6fach]
		fld     dword [edx+___1e702eh]
		fxch    st0, st2
		fstp    dword [edx+___1e6fb4h]
		faddp   st2, st0
		faddp   st2, st0
		fstp    dword [edx+___1e6fa8h]
		fstp    dword [edx+___1e6fb0h]
		fld     dword [___18407dh]
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st1
		fld     qword [___184081h]
		fxch    st0, st1
		fmul    st0, st1
		fdiv    qword [___184089h]
		fsin    
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st3
		fmul    st0, st2
		fdiv    qword [___184089h]
		fcos    
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st4
		fadd    dword [___18404dh]
		fmul    st0, st3
		fdiv    qword [___184089h]
		fcos    
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st5
		fadd    dword [___184099h]
		fmul    st0, st4
		fdiv    qword [___184089h]
		fsin    
		fld     dword [edx+___1e6f7ch]
		faddp   st6, st0
		fxch    st0, st5
		fadd    dword [___184099h]
		fmulp   st4, st0
		fxch    st0, st3
		fdiv    qword [___184089h]
		fcos    
		fxch    st0, st1
		fld     qword [___184091h]
		fxch    st0, st1
		fmul    st0, st1
		fmul    qword [___1840c5h]
		fadd    dword [edx+___1e702eh]
		fld     dword [edx+___1e6f88h]
		fxch    st0, st1
		fstp    dword [edx+___1e6fc8h]
		fadd    dword [edx+___1e6fc8h]
		mov     edi, [___243d28h]
		call    near __CHP
		fistp   dword [esp+5ch]
		mov     eax, [esp+5ch]
		imul    eax, edi
		fxch    st0, st2
		fmul    qword [___1840c5h]
		fxch    st0, st3
		fmul    st0, st2
		fxch    st0, st4
		fld     qword [___1840bdh]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmulp   st3, st0
		fxch    st0, st4
		fmul    st0, st4
		fld     dword [edx+___1e702ah]
		faddp   st4, st0
		fxch    st0, st2
		fmulp   st4, st0
		fxch    st0, st2
		fstp    dword [edx+___1e6fc4h]
		fld     dword [edx+___1e702ah]
		faddp   st2, st0
		fld     dword [edx+___1e6f84h]
		fxch    st0, st2
		fstp    dword [edx+___1e6fbch]
		fld     dword [edx+___1e702eh]
		fxch    st0, st2
		fadd    dword [edx+___1e6fc4h]
		fld     dword [edx+___1e702eh]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+5ch]
		faddp   st3, st0
		faddp   st1, st0
		fxch    st0, st1
		fstp    dword [edx+___1e6fc0h]
		fstp    dword [edx+___1e6fb8h]
		add     eax, [esp+5ch]
		test    eax, eax
		jl      short ___4d08ch
		mov     ebx, [___243d2ch]
		mov     edx, edi
		imul    edx, ebx
		cmp     eax, edx
		jge     short ___4d08ch
		mov     edx, [___243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+2ch], eax
		jmp     short ___4d094h
___4d08ch:
		mov     dword [esp+2ch], 0fh
___4d094h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f88h]
		fadd    dword [eax+___1e6f98h]
		mov     edi, [___243d28h]
		call    near __CHP
		fistp   dword [esp+5ch]
		mov     edx, [esp+5ch]
		imul    edx, edi
		fld     dword [eax+___1e6f84h]
		fadd    dword [eax+___1e6f94h]
		call    near __CHP
		fistp   dword [esp+5ch]
		mov     eax, [esp+5ch]
		add     eax, edx
		test    eax, eax
		jl      short ___4d104h
		mov     ebx, [___243d2ch]
		mov     edx, edi
		imul    edx, ebx
		cmp     eax, edx
		jge     short ___4d104h
		mov     edx, [___243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+50h], eax
		jmp     short ___4d10ch
___4d104h:
		mov     dword [esp+50h], 0fh
___4d10ch:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f88h]
		fadd    dword [eax+___1e6fa0h]
		mov     edi, [___243d28h]
		call    near __CHP
		fistp   dword [esp+5ch]
		mov     edx, [esp+5ch]
		imul    edx, edi
		fld     dword [eax+___1e6f84h]
		fadd    dword [eax+___1e6f9ch]
		call    near __CHP
		fistp   dword [esp+5ch]
		add     edx, [esp+5ch]
		test    edx, edx
		jl      short ___4d179h
		mov     ebx, [___243d2ch]
		mov     eax, edi
		imul    eax, ebx
		cmp     edx, eax
		jge     short ___4d179h
		mov     eax, [___243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+48h], eax
		jmp     short ___4d181h
___4d179h:
		mov     dword [esp+48h], 0fh
___4d181h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f88h]
		fadd    dword [eax+___1e6fa8h]
		mov     edi, [___243d28h]
		call    near __CHP
		fistp   dword [esp+5ch]
		mov     edx, [esp+5ch]
		imul    edx, edi
		fld     dword [eax+___1e6f84h]
		fadd    dword [eax+___1e6fa4h]
		call    near __CHP
		fistp   dword [esp+5ch]
		add     edx, [esp+5ch]
		test    edx, edx
		jl      short ___4d1eeh
		mov     ebx, [___243d2ch]
		mov     eax, edi
		imul    eax, ebx
		cmp     edx, eax
		jge     short ___4d1eeh
		mov     eax, [___243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+4ch], eax
		jmp     short ___4d1f6h
___4d1eeh:
		mov     dword [esp+4ch], 0fh
___4d1f6h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f88h]
		fadd    dword [eax+___1e6fb0h]
		mov     edi, [___243d28h]
		call    near __CHP
		fistp   dword [esp+5ch]
		mov     edx, [esp+5ch]
		imul    edx, edi
		fld     dword [eax+___1e6f84h]
		fadd    dword [eax+___1e6fach]
		call    near __CHP
		fistp   dword [esp+5ch]
		mov     eax, [esp+5ch]
		add     eax, edx
		test    eax, eax
		jl      short ___4d266h
		mov     ebx, [___243d2ch]
		mov     edx, edi
		imul    edx, ebx
		cmp     eax, edx
		jge     short ___4d266h
		mov     edx, [___243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+54h], eax
		jmp     short ___4d26eh
___4d266h:
		mov     dword [esp+54h], 0fh
___4d26eh:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f88h]
		fadd    dword [eax+___1e6fb8h]
		mov     edi, [___243d28h]
		call    near __CHP
		fistp   dword [esp+5ch]
		mov     edx, [esp+5ch]
		imul    edx, edi
		fld     dword [eax+___1e6f84h]
		fadd    dword [eax+___1e6fb4h]
		call    near __CHP
		fistp   dword [esp+5ch]
		add     edx, [esp+5ch]
		test    edx, edx
		jl      short ___4d2dbh
		mov     ebx, [___243d2ch]
		mov     eax, edi
		imul    eax, ebx
		cmp     edx, eax
		jge     short ___4d2dbh
		mov     eax, [___243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+40h], eax
		jmp     short ___4d2e3h
___4d2dbh:
		mov     dword [esp+40h], 0fh
___4d2e3h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f88h]
		fadd    dword [eax+___1e6fc0h]
		mov     edi, [___243d28h]
		call    near __CHP
		fistp   dword [esp+5ch]
		mov     edx, [esp+5ch]
		imul    edx, edi
		fld     dword [eax+___1e6f84h]
		fadd    dword [eax+___1e6fbch]
		call    near __CHP
		fistp   dword [esp+5ch]
		add     edx, [esp+5ch]
		test    edx, edx
		jl      short ___4d350h
		mov     ebx, [___243d2ch]
		mov     eax, edi
		imul    eax, ebx
		cmp     edx, eax
		jge     short ___4d350h
		mov     eax, [___243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+44h], eax
		jmp     short ___4d358h
___4d350h:
		mov     dword [esp+44h], 0fh
___4d358h:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e6f7ch]
		fdiv    qword [___1840cdh]
		mov     ebx, [___243c60h]
		call    near __CHP
		fistp   dword [esp+5ch]
		mov     eax, [esp+5ch]
		fld     dword [edx+___1e6f84h]
		mov     [edx+___1e6edch], eax
		lea     esi, [eax*4+0]
		fld     dword [edx+___1e6f88h]
		sub     esi, eax
		fxch    st0, st1
		call    near __CHP
		shl     esi, 3
		fistp   dword [esp+5ch]
		add     esi, eax
		lea     eax, [ebx*4+0]
		fadd    dword [___1840d5h]
		add     eax, ebx
		mov     edi, [esp+5ch]
		shl     eax, 0bh
		fadd    dword [edx+___1e702eh]
		mov     ebx, eax
		shl     eax, 4
		shl     esi, 6
		sub     eax, ebx
		call    near __CHP
		add     eax, esi
		fistp   dword [esp+5ch]
		mov     [edx+___1e6ee0h], eax
		mov     eax, [___243d60h]
		mov     ecx, [esp+5ch]
		add     eax, edi
		mov     edi, [___243d28h]
		imul    edi, ecx
		fld     dword [edx+___1e702ah]
		call    near __CHP
		fistp   dword [esp+5ch]
		mov     ebx, [esp+5ch]
		sub     eax, byte 14h
		mov     esi, [edx+___1e6ee0h]
		add     eax, ebx
		mov     ebx, [___243d74h]
		add     ebx, esi
		add     edi, eax
		mov     esi, 0fh
		xor     edx, edx
		xor     eax, eax
___4d428h:
		xor     ecx, ecx
___4d42ah:
		cmp     byte [ebx], 3
		jle     short ___4d447h
		mov     al, [edi]
		and     al, 0fh
		cmp     al, 4
		jge     short ___4d447h
		mov     esi, eax
		mov     [___243cb0h], ecx
		mov     [___243cb4h], edx
		jmp     short ___4d45eh
___4d447h:
		inc     edi
		inc     ebx
		inc     ecx
		cmp     ecx, byte 28h
		jne     short ___4d42ah
		add     edi, [___243d28h]
		sub     edi, byte 28h
		inc     edx
		cmp     edx, byte 28h
		jne     short ___4d428h
___4d45eh:
		imul    eax, [___243c60h], 35eh
		mov     [eax+___1e6ee4h], esi
		cmp     esi, byte 4
		jge     near ___4d7deh
		mov     edx, [___243cb0h]
		sub     edx, byte 14h
		mov     [eax+___1e7042h], edx
		mov     edx, [___243cb4h]
		mov     [eax+___1e705eh], esi
		sub     edx, byte 14h
		mov     ecx, [eax+___1e7062h]
		mov     [eax+___1e7046h], edx
		cmp     ecx, byte 3
		jle     near ___4d693h
		xor     esi, esi
		mov     edi, 1
		mov     [eax+___1e6f80h], esi
		mov     [eax+___1e703ah], edi
		mov     [eax+___1e703eh], esi
___4d4c3h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e6ee4h], byte 4
		jge     near ___4d68bh
		mov     ebx, [eax+___1e703ah]

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		add     ebx, ebx
		mov     edx, eax
		inc     ebx
		sar     edx, 1fh
		idiv    ebx
		imul    eax, [___243c60h], 35eh
		mov     ebx, [eax+___1e703ah]
		sub     edx, ebx
		mov     [esp+5ch], edx
		mov     ebx, [eax+___1e703ah]
		fild    dword [esp+5ch]
		fstp    dword [eax+___1e7032h]

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		add     ebx, ebx
		mov     edx, eax
		inc     ebx
		sar     edx, 1fh
		idiv    ebx
		imul    ebx, [___243c60h], 35eh
		mov     edi, [ebx+___1e703eh]
		mov     esi, [ebx+___1e703ah]
		inc     edi
		sub     edx, esi
		mov     esi, 5
		mov     [esp+5ch], edx
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    esi
		mov     [ebx+___1e703eh], edi
		fild    dword [esp+5ch]
		fstp    dword [ebx+___1e7036h]
		test    edx, edx
		jne     short ___4d577h
		mov     eax, [ebx+___1e703ah]
		cmp     eax, byte 1eh
		jge     short ___4d577h
		lea     edx, [eax+1]
		mov     [ebx+___1e703ah], edx
___4d577h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e7036h]
		fadd    dword [eax+___1e6f88h]
		fst     dword [eax+___1e6f88h]
		fadd    dword [___1840d5h]
		fadd    dword [eax+___1e702eh]
		mov     edi, [___243d28h]
		call    near __CHP
		fistp   dword [esp+5ch]
		imul    edi, [esp+5ch]
		mov     edx, [___243d60h]
		fld     dword [eax+___1e702ah]
		fld     dword [eax+___1e7032h]
		fadd    dword [eax+___1e6f84h]
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fst     dword [eax+___1e6f84h]
		call    near __CHP
		fistp   dword [esp+5ch]
		mov     ecx, [esp+5ch]
		fistp   dword [esp+5ch]
		add     edx, ecx
		mov     esi, [esp+5ch]
		sub     edx, byte 14h
		mov     ecx, [eax+___1e6ee0h]
		add     edx, esi
		mov     ebx, [___243d74h]
		add     edi, edx
		add     ebx, ecx
		mov     esi, 0fh
		xor     edx, edx
		xor     eax, eax
___4d60fh:
		xor     ecx, ecx
___4d611h:
		cmp     byte [ebx], 3
		jle     short ___4d62eh
		mov     al, [edi]
		and     al, 0fh
		cmp     al, 4
		jge     short ___4d62eh
		mov     esi, eax
		mov     [___243cb0h], ecx
		mov     [___243cb4h], edx
		jmp     short ___4d645h
___4d62eh:
		inc     edi
		inc     ebx
		inc     ecx
		cmp     ecx, byte 28h
		jne     short ___4d611h
		add     edi, [___243d28h]
		sub     edi, byte 28h
		inc     edx
		cmp     edx, byte 28h
		jne     short ___4d60fh
___4d645h:
		imul    eax, [___243c60h], 35eh
		mov     [eax+___1e6ee4h], esi
		cmp     esi, byte 4
		jge     near ___4d4c3h
		fld     dword [eax+___1e7032h]
		fld     dword [eax+___1e7036h]
		fsubr   dword [eax+___1e6f88h]
		fxch    st0, st1
		fsubr   dword [eax+___1e6f84h]
		fxch    st0, st1
		fstp    dword [eax+___1e6f88h]
		fstp    dword [eax+___1e6f84h]
		jmp     near ___4d4c3h
___4d68bh:
		xor     esi, esi
		mov     [eax+___1e6ee4h], esi
___4d693h:
		imul    eax, [___243c60h], 35eh
		mov     ecx, [eax+___1e7062h]
		test    ecx, ecx
		je      short ___4d6e3h
		cmp     ecx, byte 3
		jg      short ___4d6e3h
		fld     qword [___184075h]
		fld     dword [eax+___1e702ah]
		fmul    st0, st1
		fld     dword [eax+___1e702eh]
		fmulp   st2, st0
		xor     edi, edi
		mov     edx, 1
		mov     [eax+___1e6f80h], edi
		mov     [eax+___1e6ee4h], edx
		fxch    st0, st1
		fstp    dword [eax+___1e6fd0h]
		fstp    dword [eax+___1e6fcch]
___4d6e3h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e7062h], byte 0
		jne     near ___4d7e6h
		cmp     dword [esp+48h], byte 4
		jl      short ___4d708h
		cmp     dword [esp+4ch], byte 4
		jge     short ___4d72fh
___4d708h:
		cmp     dword [esp+2ch], byte 4
		jl      short ___4d72fh
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f7ch]
		fld     st0
		fadd    qword [___1840d9h]
		fstp    st1
		fstp    dword [eax+___1e6f7ch]
___4d72fh:
		cmp     dword [esp+50h], byte 4
		jl      short ___4d73dh
		cmp     dword [esp+54h], byte 4
		jge     short ___4d760h
___4d73dh:
		cmp     dword [esp+2ch], byte 4
		jl      short ___4d760h
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f7ch]
		fadd    qword [___1840e1h]
		fstp    dword [eax+___1e6f7ch]
___4d760h:
		imul    edx, [___243c60h], 35eh
		fldz    
		fcomp   dword [edx+___1e6f7ch]
		fnstsw  ax
		sahf    
		jbe     short ___4d789h
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___184065h]
		fstp    dword [edx+___1e6f7ch]
___4d789h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e6f7ch], 43b40000h
		jl      short ___4d7b1h
		fld     dword [eax+___1e6f7ch]
		fadd    dword [___184071h]
		fstp    dword [eax+___1e6f7ch]
___4d7b1h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f80h]
		fld     st0
		fmul    qword [___1840e9h]
		mov     esi, 1
		fsubp   st1, st0
		mov     [eax+___1e6ee4h], esi
		fstp    dword [eax+___1e6f80h]
		jmp     short ___4d7e6h
___4d7deh:
		xor     ebx, ebx
		mov     [eax+___1e6ee4h], ebx
___4d7e6h:
		cmp     dword [esp+50h], byte 4
		je      short ___4d810h
		cmp     dword [esp+48h], byte 4
		je      short ___4d810h
		cmp     dword [esp+4ch], byte 4
		je      short ___4d810h
		cmp     dword [esp+54h], byte 4
		je      short ___4d810h
		cmp     dword [esp+40h], byte 4
		je      short ___4d810h
		cmp     dword [esp+44h], byte 4
		jne     short ___4d832h
___4d810h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f80h]
		fdiv    dword [___1840f1h]
		fsubr   dword [eax+___1e6f80h]
		fstp    dword [eax+___1e6f80h]
___4d832h:
		cmp     dword [esp+48h], byte 5
		je      short ___4d840h
		cmp     dword [esp+4ch], byte 5
		jne     short ___4d87ch
___4d840h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f80h]
		fdiv    dword [___184031h]
		fld     dword [eax+___1e6fd4h]
		fld     st0
		fadd    qword [___1840f5h]
		fstp    st1
		fxch    st0, st1
		fsubr   dword [eax+___1e6f80h]
		fxch    st0, st1
		fstp    dword [eax+___1e6fd4h]
		fstp    dword [eax+___1e6f80h]
___4d87ch:
		cmp     dword [esp+50h], byte 5
		je      short ___4d88ah
		cmp     dword [esp+54h], byte 5
		jne     short ___4d8c2h
___4d88ah:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f80h]
		fdiv    dword [___184031h]
		fld     dword [eax+___1e6fd4h]
		fadd    qword [___1840fdh]
		fxch    st0, st1
		fsubr   dword [eax+___1e6f80h]
		fxch    st0, st1
		fstp    dword [eax+___1e6fd4h]
		fstp    dword [eax+___1e6f80h]
___4d8c2h:
		cmp     dword [esp+50h], byte 6
		je      short ___4d8ech
		cmp     dword [esp+48h], byte 6
		je      short ___4d8ech
		cmp     dword [esp+4ch], byte 6
		je      short ___4d8ech
		cmp     dword [esp+54h], byte 6
		je      short ___4d8ech
		cmp     dword [esp+40h], byte 6
		je      short ___4d8ech
		cmp     dword [esp+44h], byte 6
		jne     short ___4d90eh
___4d8ech:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f80h]
		fdiv    dword [___184105h]
		fsubr   dword [eax+___1e6f80h]
		fstp    dword [eax+___1e6f80h]
___4d90eh:
		cmp     dword [esp+50h], byte 7
		je      short ___4d938h
		cmp     dword [esp+48h], byte 7
		je      short ___4d938h
		cmp     dword [esp+4ch], byte 7
		je      short ___4d938h
		cmp     dword [esp+54h], byte 7
		je      short ___4d938h
		cmp     dword [esp+40h], byte 7
		je      short ___4d938h
		cmp     dword [esp+44h], byte 7
		jne     short ___4d95ah
___4d938h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f80h]
		fdiv    dword [___184041h]
		fsubr   dword [eax+___1e6f80h]
		fstp    dword [eax+___1e6f80h]
___4d95ah:
		cmp     dword [esp+50h], byte 0ah
		je      short ___4d968h
		cmp     dword [esp+4ch], byte 0ah
		jne     short ___4d984h
___4d968h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6fd4h]
		fadd    qword [___184109h]
		fstp    dword [eax+___1e6fd4h]
___4d984h:
		cmp     dword [esp+48h], byte 0ah
		je      short ___4d992h
		cmp     dword [esp+54h], byte 0ah
		jne     short ___4d9b2h
___4d992h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6fd4h]
		fld     st0
		fadd    qword [___184111h]
		fstp    st1
		fstp    dword [eax+___1e6fd4h]
___4d9b2h:
		cmp     dword [esp+50h], byte 0bh
		je      short ___4d9dch
		cmp     dword [esp+48h], byte 0bh
		je      short ___4d9dch
		cmp     dword [esp+4ch], byte 0bh
		je      short ___4d9dch
		cmp     dword [esp+54h], byte 0bh
		je      short ___4d9dch
		cmp     dword [esp+40h], byte 0bh
		je      short ___4d9dch
		cmp     dword [esp+44h], byte 0bh
		jne     short ___4d9feh
___4d9dch:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f80h]
		fdiv    dword [___184119h]
		fadd    dword [eax+___1e6f80h]
		fstp    dword [eax+___1e6f80h]
___4d9feh:
		cmp     dword [esp+50h], byte 0ch
		je      short ___4da0ch
		cmp     dword [esp+4ch], byte 0ch
		jne     short ___4da28h
___4da0ch:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6fd4h]
		fadd    qword [___18411dh]
		fstp    dword [eax+___1e6fd4h]
___4da28h:
		cmp     dword [esp+48h], byte 0ch
		je      short ___4da36h
		cmp     dword [esp+54h], byte 0ch
		jne     short ___4da56h
___4da36h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6fd4h]
		fld     st0
		fadd    qword [___184125h]
		fstp    st1
		fstp    dword [eax+___1e6fd4h]
___4da56h:
		cmp     dword [esp+50h], byte 0dh
		je      short ___4da84h
		cmp     dword [esp+48h], byte 0dh
		je      short ___4da84h
		cmp     dword [esp+4ch], byte 0dh
		je      short ___4da84h
		cmp     dword [esp+54h], byte 0dh
		je      short ___4da84h
		cmp     dword [esp+40h], byte 0dh
		je      short ___4da84h
		cmp     dword [esp+44h], byte 0dh
		jne     near ___4db80h
___4da84h:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e6f80h]
		fmul    qword [___18412dh]
		fstp    qword [esp+10h]

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     [esp+5ch], eax
		fild    dword [esp+5ch]
		fmul    qword [esp+10h]
		fmul    qword [___184135h]
		fld     dword [edx+___1e6f7ch]
		fxch    st0, st1
		fadd    st0, st1
		mov     eax, [___243c60h]
		fstp    st1
		fstp    dword [edx+___1e6f7ch]
		imul    edx, eax, 35eh
		fld     dword [edx+___1e6f80h]
		fmul    qword [___18412dh]
		fstp    qword [esp+10h]

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     [esp+5ch], eax
		fild    dword [esp+5ch]
		fmul    qword [esp+10h]
		fmul    qword [___184135h]
		fld     dword [edx+___1e6f7ch]
		fxch    st0, st1
		fsubr   st0, st1
		mov     ebx, [___243c60h]
		fstp    st1
		fstp    dword [edx+___1e6f7ch]
		imul    edx, ebx, 35eh
		fldz    
		fcomp   dword [edx+___1e6f7ch]
		fnstsw  ax
		sahf    
		jbe     short ___4db36h
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___184065h]
		fstp    dword [edx+___1e6f7ch]
___4db36h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e6f7ch], 43b40000h
		jl      short ___4db5eh
		fld     dword [eax+___1e6f7ch]
		fadd    dword [___184071h]
		fstp    dword [eax+___1e6f7ch]
___4db5eh:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f80h]
		fdiv    dword [___184031h]
		fsubr   dword [eax+___1e6f80h]
		fstp    dword [eax+___1e6f80h]
___4db80h:
		cmp     dword [esp+50h], byte 0eh
		je      short ___4dbaah
		cmp     dword [esp+48h], byte 0eh
		je      short ___4dbaah
		cmp     dword [esp+4ch], byte 0eh
		je      short ___4dbaah
		cmp     dword [esp+54h], byte 0eh
		je      short ___4dbaah
		cmp     dword [esp+40h], byte 0eh
		je      short ___4dbaah
		cmp     dword [esp+44h], byte 0eh
		jne     short ___4dbcch
___4dbaah:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f80h]
		fdiv    dword [___18413dh]
		fsubr   dword [eax+___1e6f80h]
		fstp    dword [eax+___1e6f80h]
___4dbcch:
		imul    edx, [___243c60h], 35eh
		mov     eax, [___243d28h]
		sub     eax, byte 14h
		mov     [esp+20h], eax
		fild    dword [esp+20h]
		fstp    dword [esp+28h]
		fld     dword [edx+___1e702eh]
		fld     dword [edx+___1e702ah]
		fadd    dword [edx+___1e6f84h]
		fxch    st0, st1
		fadd    dword [edx+___1e6f88h]
		fxch    st0, st1
		fstp    dword [edx+___1e6f84h]
		fstp    dword [edx+___1e6f88h]
		fld     dword [edx+___1e6f84h]
		fcomp   dword [esp+28h]
		fnstsw  ax
		sahf    
		jbe     short ___4dc2bh
		mov     eax, [esp+28h]
		mov     [edx+___1e6f84h], eax
___4dc2bh:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e6f84h], 41a00000h
		jge     short ___4dc4bh
		mov     dword [eax+___1e6f84h], 41a00000h
___4dc4bh:
		imul    edx, [___243c60h], 35eh
		mov     eax, [___243d2ch]
		sub     eax, byte 14h
		mov     [esp+1ch], eax
		fld     dword [edx+___1e6f88h]
		fild    dword [esp+1ch]
		fstp    dword [esp+24h]
		fcomp   dword [esp+24h]
		fnstsw  ax
		sahf    
		jbe     short ___4dc82h
		mov     eax, [esp+24h]
		mov     [edx+___1e6f88h], eax
___4dc82h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e6f88h], 41a00000h
		jge     short ___4dca2h
		mov     dword [eax+___1e6f88h], 41a00000h
___4dca2h:
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

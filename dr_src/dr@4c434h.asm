cpu 386

    extern  __CHK
    extern  dr@1e702eh
    extern  dr@1e702ah
    extern  dr@1de598h
    extern  dr@1e6fdah
    extern  dr@243ca8h
    extern  dr@1e6ef0h
    extern  dr@1de5a0h
    extern  dr@1de5d8h
    extern  dr@1de584h
    extern  dr@243ce8h
    extern  dr@1de5b4h
    extern  dr@243cfch
    extern  dr@1e6f90h
    extern  dr@1e6f7ch
    extern  dr@243d24h
    extern  dr@196db8h
    extern  dr@1de58ch
    extern  dr@1de590h
    extern  dr@1e6f8ch
    extern  dr@1e6f78h
    extern  dr@243d20h
    extern  dr@1e6ee8h
    extern  dr@1e6eech
    extern  dr@1e6fd4h
    extern  dr@1e6fcch
    extern  dr@1e6f94h
    extern  dr@1e6fc4h
    extern  dr@1e6f9ch
    extern  dr@1e6fb0h
    extern  dr@1e6fbch
    extern  dr@243d28h
    extern  dr@1e6fd4h
    extern  dr@243d2ch
    extern  dr@1e6f88h
    extern  dr@1e6fa8h
    extern  dr@1e6fa4h
    extern  dr@1e6fach
    extern  dr@1e6fb8h
    extern  dr@1e6fb4h
    extern  dr@1e6fc0h
    extern  dr@1e6edch
    extern  dr@243d74h
    extern  dr@1e6fc8h
    extern  dr@1e6f98h
    extern  dr@1e6fa0h
    extern  dr@243d60h
    extern  dr@1e6ee0h
    extern  dr@1e7036h
    extern  dr@1e6fd0h
    extern  dr@243cb0h
    extern  dr@1e7042h
    extern  dr@243cb4h
    extern  dr@1e705eh
    extern  dr@1e7062h
    extern  dr@1e7046h
    extern  dr@1e6f80h
    extern  dr@1e703ah
    extern  dr@1e703eh
    extern  dr@1e6ee4h
    extern  rand
    extern  dr@1e7032h
    extern  dr@243c60h
    extern  __CHP
    extern  dr@1e6f84h


SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global dr@4c434h
dr@4c434h:
		push    80h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 64h
		and     esp, byte 0fffffff8h
		mov     ebx, [dr@243c60h]
		imul    eax, ebx, 35eh
		fld     dword [eax+dr@1e6f80h]
		fdiv    dword [dr@18400dh]
		xor     edx, edx
		mov     [dr@243cfch], edx
		mov     [eax+dr@1e702eh], edx
		lea     edx, [ebx*8+0]
		add     edx, ebx
		shl     edx, 2
		fld     dword [eax+dr@1e702eh]
		add     edx, ebx
		fstp    dword [eax+dr@1e702ah]
		shl     edx, 2
		fsubr   dword [eax+dr@1e6f80h]
		mov     esi, [edx+dr@1de598h]
		fstp    dword [eax+dr@1e6f80h]
		test    esi, esi
		jle     dr@4cb16h
		cmp     dword [eax+dr@1e6fdah], byte 0
		jne     dr@4c771h
		mov     ebx, [dr@243ca8h]
		shl     ebx, 2
		add     ebx, eax
		mov     cl, [ebx+dr@1e6ef0h]
		test    cl, 1
		je      dr@4c5d6h
		test    cl, 10h
		je      dr@4c569h
		cmp     dword [edx+dr@1de5b4h], byte 0
		jle     dr@4c569h
		cmp     dword [edx+dr@1de5a0h], byte 0
		je      dr@4c549h
		fld     dword [edx+dr@1de584h]
		fmul    qword [dr@184029h]
		fdiv    qword [dr@184019h]
		mov     edi, [edx+dr@1de598h]
		sub     edi, byte 16h
		fadd    dword [eax+dr@1e6f80h]
		mov     [edx+dr@1de598h], edi
		fstp    dword [eax+dr@1e6f80h]
		test    edi, edi
		jge     dr@4c528h
		xor     ebx, ebx
		mov     [edx+dr@1de598h], ebx
dr@4c528h:
		mov     edx, [dr@243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     dword [eax*4+dr@1de5d8h], 1
		jmp     dr@4c5a2h
dr@4c549h:
		fld     dword [edx+dr@1de584h]
		fmul    qword [dr@184021h]
		fdiv    qword [dr@184019h]
		fadd    dword [eax+dr@1e6f80h]
		fstp    dword [eax+dr@1e6f80h]
		jmp     dr@4c5a2h
dr@4c569h:
		mov     ecx, [dr@243c60h]
		imul    ebx, ecx, 35eh
		lea     eax, [ecx*8+0]
		add     eax, ecx
		shl     eax, 2
		add     eax, ecx
		fld     dword [eax*4+dr@1de584h]
		fmul    qword [dr@184011h]
		fdiv    qword [dr@184019h]
		fadd    dword [ebx+dr@1e6f80h]
		fstp    dword [ebx+dr@1e6f80h]
dr@4c5a2h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f80h]
		fdiv    dword [dr@184031h]
		fsubr   dword [eax+dr@1e6f80h]
		fst     dword [eax+dr@1e6f80h]
		fdiv    dword [dr@18400dh]
		fadd    dword [eax+dr@1e6f80h]
		fstp    dword [eax+dr@1e6f80h]
dr@4c5d6h:
		mov     edi, [dr@243ce8h]
		cmp     edi, [dr@243c60h]
		jne     dr@4c60ah
		mov     edx, [dr@243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     edx, [eax*4+dr@1de5d8h]
		cmp     edx, byte 1
		jne     dr@4c60ah
		add     [dr@196db8h], edx
dr@4c60ah:
		mov     ecx, [dr@243ce8h]
		cmp     ecx, [dr@243c60h]
		jne     dr@4c63dh
		mov     edx, [dr@243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     esi, [eax*4+dr@1de5d8h]
		test    esi, esi
		jne     dr@4c63dh
		mov     [dr@196db8h], esi
dr@4c63dh:
		imul    edx, [dr@243c60h], 35eh
		mov     eax, [dr@243ca8h]
		shl     eax, 2
		add     eax, edx
		mov     dl, [eax+dr@1e6ef0h]
		test    dl, 2
		je      dr@4c6c3h
		test    dl, 2
		je      dr@4c666h
		test    dl, 40h
		jne     dr@4c6c3h
dr@4c666h:
		mov     ebx, [dr@243c60h]
		imul    edx, ebx, 35eh
		lea     eax, [ebx*8+0]
		add     eax, ebx
		shl     eax, 2
		add     eax, ebx
;18:0004c680
		fld     dword [eax*4+dr@1de584h]
		fdiv    dword [dr@184035h]
		fdiv    qword [dr@184019h]
		fsubr   dword [edx+dr@1e6f80h]
		fst     dword [edx+dr@1e6f80h]
		fdiv    dword [dr@184031h]
		fsubr   dword [edx+dr@1e6f80h]
		fst     dword [edx+dr@1e6f80h]
		fdiv    dword [dr@18400dh]
		fadd    dword [edx+dr@1e6f80h]
		fstp    dword [edx+dr@1e6f80h]
dr@4c6c3h:
		mov     ecx, [dr@243c60h]
		imul    edx, ecx, 35eh
		mov     eax, [dr@243ca8h]
		test    byte [edx+eax*4+dr@1e6ef0h], 10h
		je      dr@4c71ah
		lea     eax, [ecx*8+0]
		add     eax, ecx
		shl     eax, 2
		add     eax, ecx
		shl     eax, 2
		mov     esi, [eax+dr@1de5b4h]
		test    esi, esi
		jle     dr@4c71ah
		cmp     dword [eax+dr@1de598h], byte 0
;18:0004c700
		jle     dr@4c71ah
		lea     edx, [esi+0fffffe70h]
		mov     [eax+dr@1de5b4h], edx
		test    edx, edx
		jge     dr@4c71ah
		xor     ecx, ecx
		mov     [eax+dr@1de5b4h], ecx
dr@4c71ah:
		mov     esi, [dr@243c60h]
		imul    eax, esi, 35eh
		mov     edx, [dr@243ca8h]
		test    byte [eax+edx*4+dr@1e6ef0h], 10h
		jne     dr@4c771h
		lea     eax, [esi*8+0]
		add     eax, esi
		shl     eax, 2
		add     eax, esi
		shl     eax, 2
		cmp     dword [eax+dr@1de598h], byte 0
		jle     dr@4c771h
		mov     edx, [eax+dr@1de5b4h]
		add     edx, byte 14h
		mov     [eax+dr@1de5b4h], edx
		cmp     edx, 19000h
		jle     dr@4c771h
		mov     dword [eax+dr@1de5b4h], 19000h
dr@4c771h:
		mov     edx, [dr@243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
;18:0004c780
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
		cmp     dword [eax+dr@1de598h], byte 0
		jg      dr@4c799h
		xor     edi, edi
		mov     [eax+dr@1de584h], edi
dr@4c799h:
		mov     eax, [dr@243c60h]
		imul    edx, eax, 35eh
		cmp     dword [edx+dr@1e6fdah], byte 0
		jne     dr@4c847h
		mov     ebx, eax
		shl     eax, 3
		add     eax, ebx
		shl     eax, 2
		add     ebx, eax
		shl     ebx, 2
		fldz    
		fcomp   dword [ebx+dr@1de584h]
		fnstsw  ax
		sahf    
		jae     dr@4c847h
		fld     dword [edx+dr@1e6f90h]
		fmul    dword [edx+dr@1e6f80h]
		fmul    dword [ebx+dr@1de58ch]
		fdiv    dword [ebx+dr@1de584h]
		fldz    
		fxch    st0, st1
		fstp    dword [edx+dr@1e6f8ch]
		fcomp   dword [edx+dr@1e6f8ch]
		fnstsw  ax
		sahf    
		jbe     dr@4c80ch
		fld     dword [edx+dr@1e6f8ch]
		fchs    
		fstp    dword [esp+18h]
		jmp     dr@4c816h
dr@4c80ch:
		mov     eax, [edx+dr@1e6f8ch]
		mov     [esp+18h], eax
dr@4c816h:
		fld     dword [esp+18h]
		fcomp   dword [dr@184041h]
		fnstsw  ax
		sahf    
		jbe     dr@4c867h
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f80h]
		fld     st0
		fdiv    qword [dr@184045h]
		fsubp   st1, st0
		fstp    dword [eax+dr@1e6f80h]
		jmp     dr@4c867h
dr@4c847h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f8ch]
		fld     st0
		fdiv    qword [dr@184039h]
		fsubp   st1, st0
		fstp    dword [eax+dr@1e6f8ch]
dr@4c867h:
		mov     edi, [dr@243c60h]
		imul    edx, edi, 35eh
		mov     eax, [dr@243ca8h]
		test    byte [edx+eax*4+dr@1e6ef0h], 8
;18:0004c880
		je      dr@4c92ah
		cmp     dword [edx+dr@1e6ee8h], byte 0
		jne     dr@4c92ah
		cmp     dword [edx+dr@1e6eech], byte 0
		jne     dr@4c92ah
		fld     dword [dr@18404dh]
		fdiv    dword [edx+dr@1e6f78h]
		lea     eax, [edi*8+0]
		add     eax, edi
		shl     eax, 2
		add     eax, edi
		fdivr   dword [eax*4+dr@1de590h]
		fld     dword [edx+dr@1e6f8ch]
		fdiv    dword [dr@184051h]
		fxch    st0, st1
		fsubr   dword [dr@243cfch]
		fst     dword [dr@243cfch]
		fmul    dword [dr@184055h]
		fmulp   st1, st0
		fld     dword [edx+dr@1e6f90h]
		fld     dword [edx+dr@1e6f78h]
		fsubr   dword [edx+dr@1e6f7ch]
		fxch    st0, st2
		fsubr   dword [dr@243cfch]
		fxch    st0, st2
		fstp    dword [edx+dr@1e6f7ch]
		fxch    st0, st1
		fstp    dword [dr@243cfch]
		fcomp   dword [dr@184059h]
		fnstsw  ax
		sahf    
		jbe     dr@4c92ah
		fld     dword [edx+dr@1e6f90h]
		fadd    qword [dr@18405dh]
		fstp    dword [edx+dr@1e6f90h]
dr@4c92ah:
		imul    edx, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f7ch]
		fnstsw  ax
		sahf    
		jbe     dr@4c953h
		fld     dword [edx+dr@1e6f7ch]
		fadd    dword [dr@184065h]
		fstp    dword [edx+dr@1e6f7ch]
dr@4c953h:
		mov     esi, [dr@243c60h]
		imul    edx, esi, 35eh
		mov     eax, [dr@243ca8h]
		test    byte [edx+eax*4+dr@1e6ef0h], 4
		je      dr@4ca15h
		cmp     dword [edx+dr@1e6ee8h], byte 0
		jne     dr@4ca15h
		cmp     dword [edx+dr@1e6eech], byte 0
		jne     dr@4ca15h
		fld     dword [dr@18404dh]
		fdiv    dword [edx+dr@1e6f78h]
		lea     eax, [esi*8+0]
		add     eax, esi
		shl     eax, 2
		add     eax, esi
		fdivr   dword [eax*4+dr@1de590h]
		fld     dword [edx+dr@1e6f8ch]
		fdiv    dword [dr@184051h]
		fxch    st0, st1
		fadd    dword [dr@243cfch]
		fst     dword [dr@243cfch]
		fmul    dword [dr@184055h]
		fmulp   st1, st0
		fld     dword [edx+dr@1e6f78h]
		mov     ebx, [edx+dr@1e6f90h]
		fadd    dword [edx+dr@1e6f7ch]
		fxch    st0, st1
		fadd    dword [dr@243cfch]
		fxch    st0, st1
		fstp    dword [edx+dr@1e6f7ch]
		fstp    dword [dr@243cfch]
		cmp     ebx, 42100000h
		jge     dr@4ca15h
		fld     dword [edx+dr@1e6f90h]
		fld     st0
		fadd    qword [dr@184069h]
		fstp    st1
		fstp    dword [edx+dr@1e6f90h]
dr@4ca15h:
		imul    eax, [dr@243c60h], 35eh
		cmp     dword [eax+dr@1e6f7ch], 43b40000h
		jl      dr@4ca3dh
		fld     dword [eax+dr@1e6f7ch]
		fadd    dword [dr@184071h]
		fstp    dword [eax+dr@1e6f7ch]
dr@4ca3dh:
		imul    edx, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f90h]
		fnstsw  ax
		sahf    
		jae     dr@4ca66h
		fld     dword [edx+dr@1e6f90h]
		fadd    qword [dr@184075h]
		fstp    dword [edx+dr@1e6f90h]
dr@4ca66h:
		imul    edx, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f90h]
		fnstsw  ax
		sahf    
		jbe     dr@4ca8bh
		fld1    
		fadd    dword [edx+dr@1e6f90h]
		fstp    dword [edx+dr@1e6f90h]
dr@4ca8bh:
		mov     edx, [dr@243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		cmp     dword [eax*4+dr@1de598h], byte 0
		jle     dr@4cac5h
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6fd4h]
		fadd    dword [eax+dr@1e6f7ch]
		fstp    dword [eax+dr@1e6f7ch]
dr@4cac5h:
		imul    edx, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f7ch]
		fnstsw  ax
		sahf    
		jbe     dr@4caeeh
		fld     dword [edx+dr@1e6f7ch]
		fadd    dword [dr@184065h]
		fstp    dword [edx+dr@1e6f7ch]
dr@4caeeh:
		imul    eax, [dr@243c60h], 35eh
		cmp     dword [eax+dr@1e6f7ch], 43b40000h
		jl      dr@4cb16h
		fld     dword [eax+dr@1e6f7ch]
		fadd    dword [dr@184071h]
		fstp    dword [eax+dr@1e6f7ch]
dr@4cb16h:
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e6f7ch]
		fadd    dword [dr@18407dh]
		fld     qword [dr@184081h]
		fxch    st0, st1
		fmul    st0, st1
		fld     qword [dr@184089h]
		fxch    st0, st1
		fdiv    st0, st1
		fld     st0
		fsin    
		fld     dword [edx+dr@1e6f7ch]
		fadd    dword [dr@18404dh]
		fadd    dword [dr@18407dh]
		fmul    st0, st4
		fdiv    st0, st3
		fld     st0
		fsin    
		fld     dword [edx+dr@1e6f7ch]
		fadd    dword [dr@184099h]
		fadd    dword [dr@18407dh]
		fmulp   st6, st0
		fxch    st0, st5
		fdivrp  st4, st0
		fld     st3
		fsin    
		fxch    st0, st3
		fcos    
		fxch    st0, st1
;18:0004cb80
		fcos    
		fxch    st0, st4
		fcos    
		fstp    qword [esp+10h]
		fld     dword [edx+dr@1e6f8ch]
		fxch    st0, st3
		fmul    st0, st3
		fdiv    qword [dr@18409dh]
		fld     qword [esp+10h]
		fmul    qword [dr@184091h]
		fmulp   st4, st0
		fxch    st0, st3
		fdiv    qword [dr@18409dh]
		fxch    st0, st1
		fstp    qword [esp+10h]
		fld     dword [edx+dr@1e6f80h]
		fxch    st0, st2
		fmul    st0, st2
		fld     qword [esp+10h]
		fmul    qword [dr@184091h]
		fmulp   st3, st0
		fxch    st0, st4
		fstp    qword [esp+8]
		fld     dword [dr@243cfch]
		fxch    st0, st5
		fmul    st0, st5
		fxch    st0, st4
		fst     dword [esp+34h]
		fxch    st0, st3
		fstp    dword [esp+38h]
		fxch    st0, st2
		fadd    dword [esp+38h]
		fld     qword [esp+8]
		fmul    qword [dr@184091h]
		fxch    st0, st1
		fmul    st0, st0
		fxch    st0, st2
		fstp    dword [esp+30h]
;18:0004cc00
		fxch    st0, st2
		fstp    dword [esp+3ch]
		fld     dword [esp+30h]
		fadd    dword [esp+3ch]
		fxch    st0, st2
		fmulp   st4, st0
		fxch    st0, st1
		fmul    st0, st0
		fxch    st0, st2
		fstp    dword [dr@243d24h]
		faddp   st1, st0
		fxch    st0, st1
		fstp    dword [dr@243d20h]
		fldz    
		fcompp  
		fnstsw  ax
		sahf    
		je      dr@4cc7ah
		fldz    
		fcomp   dword [edx+dr@1e6f80h]
		fnstsw  ax
		sahf    
		jbe     dr@4cc4ch
		fld     dword [edx+dr@1e6f80h]
		fchs    
		fstp    dword [esp+60h]
		jmp     dr@4cc56h
dr@4cc4ch:
		mov     eax, [edx+dr@1e6f80h]
		mov     [esp+60h], eax
dr@4cc56h:
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
		jmp     dr@4cc82h
dr@4cc7ah:
		mov     dword [esp+58h], 3f800000h
dr@4cc82h:
		imul    edx, [dr@243c60h], 35eh
		fld     dword [dr@18407dh]
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st1
		fld     dword [dr@1840a5h]
		fxch    st0, st1
		fadd    st0, st1
		fld     qword [dr@184081h]
		fxch    st0, st1
		fmul    st0, st1
		fld     qword [dr@184089h]
		fxch    st0, st1
		fdiv    st0, st1
		fsin    
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st5
		faddp   st4, st0
		fxch    st0, st3
		fmul    st0, st2
		fdiv    st0, st1
		fcos    
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st5
		fadd    dword [dr@1840b1h]
		fmul    st0, st3
		fdiv    st0, st2
		fsin    
		fld     dword [edx+dr@1e6f7ch]
		faddp   st6, st0
		fxch    st0, st5
		fadd    dword [dr@1840b1h]
		fmulp   st3, st0
		fxch    st0, st2
		fdivrp  st1, st0
		fcos    
		fld     dword [esp+58h]
		fmul    dword [esp+34h]
;18:0004cd00
		fld     dword [esp+58h]
		fmul    dword [esp+38h]
		fld     dword [esp+58h]
		fmul    dword [esp+30h]
		fxch    st0, st2
		fstp    dword [edx+dr@1e702ah]
		fld     dword [esp+58h]
		fmul    dword [esp+3ch]
		fxch    st0, st5
		fmul    qword [dr@1840a9h]
		fxch    st0, st4
		fmul    qword [dr@184091h]
		fxch    st0, st6
		fmul    qword [dr@1840a9h]
		fxch    st0, st3
		fmul    qword [dr@184091h]
		fxch    st0, st6
		fmul    qword [dr@1840a9h]
		fxch    st0, st1
		fadd    dword [edx+dr@1e702ah]
		fxch    st0, st6
		fmul    qword [dr@1840a9h]
		fxch    st0, st6
		fstp    dword [edx+dr@1e702ah]
		fld     dword [dr@243d24h]
		xor     ecx, ecx
		fxch    st0, st2
		fstp    dword [edx+dr@1e702eh]
		fld     dword [dr@243d20h]
		mov     [dr@243d24h], ecx
		fxch    st0, st5
		fadd    dword [edx+dr@1e702eh]
		mov     [dr@243d20h], ecx
		fstp    dword [edx+dr@1e702eh]
		fld     dword [edx+dr@1e6fcch]
		fxch    st0, st2
		fadd    dword [edx+dr@1e702ah]
		fxch    st0, st5
		fadd    dword [edx+dr@1e702eh]
		fxch    st0, st5
		fstp    dword [edx+dr@1e702ah]
		fld     dword [edx+dr@1e6fd0h]
		fxch    st0, st5
		fstp    dword [edx+dr@1e702eh]
		fxch    st0, st1
		fadd    dword [edx+dr@1e702ah]
		fxch    st0, st4
		fadd    dword [edx+dr@1e702eh]
		fxch    st0, st4
		fstp    dword [edx+dr@1e702ah]
		fxch    st0, st3
		fstp    dword [edx+dr@1e702eh]
		fld     dword [edx+dr@1e702ah]
		fld     st0
		fld     dword [edx+dr@1e702eh]
		fxch    st0, st2
		faddp   st4, st0
		faddp   st2, st0
		fxch    st0, st2
		fstp    dword [edx+dr@1e6f94h]
		fld     dword [edx+dr@1e702eh]
		fxch    st0, st1
;18:0004ce00
		fstp    dword [edx+dr@1e6f9ch]
		fxch    st0, st1
		faddp   st2, st0
		faddp   st2, st0
		fstp    dword [edx+dr@1e6f98h]
		fstp    dword [edx+dr@1e6fa0h]
		fld     dword [dr@18407dh]
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st1
		fld     dword [dr@1840b5h]
		fxch    st0, st1
		fadd    st0, st1
		fmul    qword [dr@184081h]
		fld     qword [dr@184089h]
		fxch    st0, st1
		fdiv    st0, st1
		fsin    
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st4
		faddp   st3, st0
		fxch    st0, st2
		fmul    qword [dr@184081h]
		fdiv    st0, st1
		fcos    
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st4
		fld     dword [dr@1840b9h]
		fxch    st0, st1
		fadd    st0, st1
		fmul    qword [dr@184081h]
		fdiv    st0, st3
		fsin    
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st6
		faddp   st2, st0
		fxch    st0, st1
;18:0004ce80
		fmul    qword [dr@184081h]
		fdiv    st0, st3
		fcos    
		fld     dword [edx+dr@1e6f7ch]
		faddp   st6, st0
		fxch    st0, st5
		fadd    dword [dr@18404dh]
		fmul    qword [dr@184081h]
		fdivrp  st3, st0
		fxch    st0, st2
		fsin    
		fxch    st0, st3
		fld     qword [dr@1840a9h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fld     qword [dr@184091h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st4
		fmul    st0, st2
		fxch    st0, st6
		fmulp   st1, st0
		fxch    st0, st4
		fmul    qword [dr@1840bdh]
		fxch    st0, st3
		fmul    st0, st1
		fxch    st0, st4
		fmulp   st1, st0
		fld     dword [edx+dr@1e702ah]
		faddp   st2, st0
		fld     dword [edx+dr@1e702ah]
		fxch    st0, st2
		fstp    dword [edx+dr@1e6fa4h]
		fld     dword [edx+dr@1e702ah]
		fld     dword [edx+dr@1e702eh]
		fxch    st0, st3
		faddp   st6, st0
		faddp   st3, st0
		fxch    st0, st4
;18:0004cf00
		fstp    dword [edx+dr@1e6fach]
		fld     dword [edx+dr@1e702eh]
		fxch    st0, st2
		fstp    dword [edx+dr@1e6fb4h]
		faddp   st2, st0
		faddp   st2, st0
		fstp    dword [edx+dr@1e6fa8h]
		fstp    dword [edx+dr@1e6fb0h]
		fld     dword [dr@18407dh]
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st1
		fld     qword [dr@184081h]
		fxch    st0, st1
		fmul    st0, st1
		fdiv    qword [dr@184089h]
		fsin    
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st3
		fmul    st0, st2
		fdiv    qword [dr@184089h]
		fcos    
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st4
		fadd    dword [dr@18404dh]
		fmul    st0, st3
		fdiv    qword [dr@184089h]
		fcos    
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st5
		fadd    dword [dr@184099h]
		fmul    st0, st4
		fdiv    qword [dr@184089h]
		fsin    
		fld     dword [edx+dr@1e6f7ch]
		faddp   st6, st0
		fxch    st0, st5
		fadd    dword [dr@184099h]
		fmulp   st4, st0
		fxch    st0, st3
		fdiv    qword [dr@184089h]
		fcos    
		fxch    st0, st1
		fld     qword [dr@184091h]
		fxch    st0, st1
		fmul    st0, st1
		fmul    qword [dr@1840c5h]
		fadd    dword [edx+dr@1e702eh]
		fld     dword [edx+dr@1e6f88h]
		fxch    st0, st1
		fstp    dword [edx+dr@1e6fc8h]
		fadd    dword [edx+dr@1e6fc8h]
		mov     edi, [dr@243d28h]
		call    __CHP
		fistp   dword [esp+5ch]
		mov     eax, [esp+5ch]
		imul    eax, edi
		fxch    st0, st2
		fmul    qword [dr@1840c5h]
		fxch    st0, st3
		fmul    st0, st2
		fxch    st0, st4
		fld     qword [dr@1840bdh]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmulp   st3, st0
;19:0004d000
		fxch    st0, st4
		fmul    st0, st4
		fld     dword [edx+dr@1e702ah]
		faddp   st4, st0
		fxch    st0, st2
		fmulp   st4, st0
		fxch    st0, st2
		fstp    dword [edx+dr@1e6fc4h]
		fld     dword [edx+dr@1e702ah]
		faddp   st2, st0
		fld     dword [edx+dr@1e6f84h]
		fxch    st0, st2
		fstp    dword [edx+dr@1e6fbch]
		fld     dword [edx+dr@1e702eh]
		fxch    st0, st2
		fadd    dword [edx+dr@1e6fc4h]
		fld     dword [edx+dr@1e702eh]
		fxch    st0, st1
		call    __CHP
		fistp   dword [esp+5ch]
		faddp   st3, st0
		faddp   st1, st0
		fxch    st0, st1
		fstp    dword [edx+dr@1e6fc0h]
		fstp    dword [edx+dr@1e6fb8h]
		add     eax, [esp+5ch]
		test    eax, eax
		jl      dr@4d08ch
		mov     ebx, [dr@243d2ch]
		mov     edx, edi
		imul    edx, ebx
		cmp     eax, edx
		jge     dr@4d08ch
		mov     edx, [dr@243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+2ch], eax
		jmp     dr@4d094h
dr@4d08ch:
		mov     dword [esp+2ch], 0fh
dr@4d094h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f88h]
		fadd    dword [eax+dr@1e6f98h]
		mov     edi, [dr@243d28h]
		call    __CHP
		fistp   dword [esp+5ch]
		mov     edx, [esp+5ch]
		imul    edx, edi
		fld     dword [eax+dr@1e6f84h]
		fadd    dword [eax+dr@1e6f94h]
		call    __CHP
		fistp   dword [esp+5ch]
		mov     eax, [esp+5ch]
		add     eax, edx
		test    eax, eax
		jl      dr@4d104h
		mov     ebx, [dr@243d2ch]
		mov     edx, edi
		imul    edx, ebx
		cmp     eax, edx
		jge     dr@4d104h
		mov     edx, [dr@243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+50h], eax
		jmp     dr@4d10ch
dr@4d104h:
		mov     dword [esp+50h], 0fh
dr@4d10ch:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f88h]
		fadd    dword [eax+dr@1e6fa0h]
		mov     edi, [dr@243d28h]
		call    __CHP
		fistp   dword [esp+5ch]
		mov     edx, [esp+5ch]
		imul    edx, edi
		fld     dword [eax+dr@1e6f84h]
		fadd    dword [eax+dr@1e6f9ch]
		call    __CHP
		fistp   dword [esp+5ch]
		add     edx, [esp+5ch]
		test    edx, edx
		jl      dr@4d179h
		mov     ebx, [dr@243d2ch]
		mov     eax, edi
		imul    eax, ebx
		cmp     edx, eax
		jge     dr@4d179h
		mov     eax, [dr@243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+48h], eax
		jmp     dr@4d181h
dr@4d179h:
		mov     dword [esp+48h], 0fh
dr@4d181h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f88h]
		fadd    dword [eax+dr@1e6fa8h]
		mov     edi, [dr@243d28h]
		call    __CHP
		fistp   dword [esp+5ch]
		mov     edx, [esp+5ch]
		imul    edx, edi
		fld     dword [eax+dr@1e6f84h]
		fadd    dword [eax+dr@1e6fa4h]
		call    __CHP
		fistp   dword [esp+5ch]
		add     edx, [esp+5ch]
		test    edx, edx
		jl      dr@4d1eeh
		mov     ebx, [dr@243d2ch]
		mov     eax, edi
		imul    eax, ebx
		cmp     edx, eax
		jge     dr@4d1eeh
		mov     eax, [dr@243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+4ch], eax
		jmp     dr@4d1f6h
dr@4d1eeh:
		mov     dword [esp+4ch], 0fh
dr@4d1f6h:
		imul    eax, [dr@243c60h], 35eh
;19:0004d200
		fld     dword [eax+dr@1e6f88h]
		fadd    dword [eax+dr@1e6fb0h]
		mov     edi, [dr@243d28h]
		call    __CHP
		fistp   dword [esp+5ch]
		mov     edx, [esp+5ch]
		imul    edx, edi
		fld     dword [eax+dr@1e6f84h]
		fadd    dword [eax+dr@1e6fach]
		call    __CHP
		fistp   dword [esp+5ch]
		mov     eax, [esp+5ch]
		add     eax, edx
		test    eax, eax
		jl      dr@4d266h
		mov     ebx, [dr@243d2ch]
		mov     edx, edi
		imul    edx, ebx
		cmp     eax, edx
		jge     dr@4d266h
		mov     edx, [dr@243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+54h], eax
		jmp     dr@4d26eh
dr@4d266h:
		mov     dword [esp+54h], 0fh
dr@4d26eh:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f88h]
		fadd    dword [eax+dr@1e6fb8h]
		mov     edi, [dr@243d28h]
		call    __CHP
		fistp   dword [esp+5ch]
		mov     edx, [esp+5ch]
		imul    edx, edi
		fld     dword [eax+dr@1e6f84h]
		fadd    dword [eax+dr@1e6fb4h]
		call    __CHP
		fistp   dword [esp+5ch]
		add     edx, [esp+5ch]
		test    edx, edx
		jl      dr@4d2dbh
		mov     ebx, [dr@243d2ch]
		mov     eax, edi
		imul    eax, ebx
		cmp     edx, eax
		jge     dr@4d2dbh
		mov     eax, [dr@243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+40h], eax
		jmp     dr@4d2e3h
dr@4d2dbh:
		mov     dword [esp+40h], 0fh
dr@4d2e3h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f88h]
		fadd    dword [eax+dr@1e6fc0h]
		mov     edi, [dr@243d28h]
		call    __CHP
		fistp   dword [esp+5ch]
		mov     edx, [esp+5ch]
		imul    edx, edi
		fld     dword [eax+dr@1e6f84h]
		fadd    dword [eax+dr@1e6fbch]
		call    __CHP
		fistp   dword [esp+5ch]
		add     edx, [esp+5ch]
		test    edx, edx
		jl      dr@4d350h
		mov     ebx, [dr@243d2ch]
		mov     eax, edi
		imul    eax, ebx
		cmp     edx, eax
		jge     dr@4d350h
		mov     eax, [dr@243d60h]
		mov     al, [edx+eax*1]
		and     al, 0fh
		and     eax, 0ffh
		mov     [esp+44h], eax
		jmp     dr@4d358h
dr@4d350h:
		mov     dword [esp+44h], 0fh
dr@4d358h:
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e6f7ch]
		fdiv    qword [dr@1840cdh]
		mov     ebx, [dr@243c60h]
		call    __CHP
		fistp   dword [esp+5ch]
		mov     eax, [esp+5ch]
		fld     dword [edx+dr@1e6f84h]
		mov     [edx+dr@1e6edch], eax
		lea     esi, [eax*4+0]
		fld     dword [edx+dr@1e6f88h]
		sub     esi, eax
		fxch    st0, st1
		call    __CHP
		shl     esi, 3
		fistp   dword [esp+5ch]
		add     esi, eax
		lea     eax, [ebx*4+0]
		fadd    dword [dr@1840d5h]
		add     eax, ebx
		mov     edi, [esp+5ch]
		shl     eax, 0bh
		fadd    dword [edx+dr@1e702eh]
		mov     ebx, eax
		shl     eax, 4
		shl     esi, 6
		sub     eax, ebx
		call    __CHP
		add     eax, esi
		fistp   dword [esp+5ch]
		mov     [edx+dr@1e6ee0h], eax
		mov     eax, [dr@243d60h]
		mov     ecx, [esp+5ch]
		add     eax, edi
		mov     edi, [dr@243d28h]
		imul    edi, ecx
		fld     dword [edx+dr@1e702ah]
		call    __CHP
		fistp   dword [esp+5ch]
		mov     ebx, [esp+5ch]
		sub     eax, byte 14h
		mov     esi, [edx+dr@1e6ee0h]
		add     eax, ebx
		mov     ebx, [dr@243d74h]
		add     ebx, esi
		add     edi, eax
		mov     esi, 0fh
		xor     edx, edx
		xor     eax, eax
dr@4d428h:
		xor     ecx, ecx
dr@4d42ah:
		cmp     byte [ebx], 3
		jle     dr@4d447h
		mov     al, [edi]
		and     al, 0fh
		cmp     al, 4
		jge     dr@4d447h
		mov     esi, eax
		mov     [dr@243cb0h], ecx
		mov     [dr@243cb4h], edx
		jmp     dr@4d45eh
dr@4d447h:
		inc     edi
		inc     ebx
		inc     ecx
		cmp     ecx, byte 28h
		jne     dr@4d42ah
		add     edi, [dr@243d28h]
		sub     edi, byte 28h
		inc     edx
		cmp     edx, byte 28h
		jne     dr@4d428h
dr@4d45eh:
		imul    eax, [dr@243c60h], 35eh
		mov     [eax+dr@1e6ee4h], esi
		cmp     esi, byte 4
		jge     dr@4d7deh
		mov     edx, [dr@243cb0h]
		sub     edx, byte 14h
;19:0004d480
		mov     [eax+dr@1e7042h], edx
		mov     edx, [dr@243cb4h]
		mov     [eax+dr@1e705eh], esi
		sub     edx, byte 14h
		mov     ecx, [eax+dr@1e7062h]
		mov     [eax+dr@1e7046h], edx
		cmp     ecx, byte 3
		jle     dr@4d693h
		xor     esi, esi
		mov     edi, 1
		mov     [eax+dr@1e6f80h], esi
		mov     [eax+dr@1e703ah], edi
		mov     [eax+dr@1e703eh], esi
dr@4d4c3h:
		imul    eax, [dr@243c60h], 35eh
		cmp     dword [eax+dr@1e6ee4h], byte 4
		jge     dr@4d68bh
		mov     ebx, [eax+dr@1e703ah]
		call    rand
		add     ebx, ebx
		mov     edx, eax
		inc     ebx
		sar     edx, 1fh
		idiv    ebx
		imul    eax, [dr@243c60h], 35eh
		mov     ebx, [eax+dr@1e703ah]
		sub     edx, ebx
		mov     [esp+5ch], edx
		mov     ebx, [eax+dr@1e703ah]
		fild    dword [esp+5ch]
		fstp    dword [eax+dr@1e7032h]
		call    rand
		add     ebx, ebx
		mov     edx, eax
		inc     ebx
		sar     edx, 1fh
		idiv    ebx
		imul    ebx, [dr@243c60h], 35eh
		mov     edi, [ebx+dr@1e703eh]
		mov     esi, [ebx+dr@1e703ah]
		inc     edi
		sub     edx, esi
		mov     esi, 5
		mov     [esp+5ch], edx
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    esi
		mov     [ebx+dr@1e703eh], edi
		fild    dword [esp+5ch]
		fstp    dword [ebx+dr@1e7036h]
		test    edx, edx
		jne     dr@4d577h
		mov     eax, [ebx+dr@1e703ah]
		cmp     eax, byte 1eh
		jge     dr@4d577h
		lea     edx, [eax+1]
		mov     [ebx+dr@1e703ah], edx
dr@4d577h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e7036h]
		fadd    dword [eax+dr@1e6f88h]
		fst     dword [eax+dr@1e6f88h]
		fadd    dword [dr@1840d5h]
		fadd    dword [eax+dr@1e702eh]
		mov     edi, [dr@243d28h]
		call    __CHP
		fistp   dword [esp+5ch]
		imul    edi, [esp+5ch]
		mov     edx, [dr@243d60h]
		fld     dword [eax+dr@1e702ah]
		fld     dword [eax+dr@1e7032h]
		fadd    dword [eax+dr@1e6f84h]
		fxch    st0, st1
		call    __CHP
		fxch    st0, st1
		fst     dword [eax+dr@1e6f84h]
		call    __CHP
		fistp   dword [esp+5ch]
		mov     ecx, [esp+5ch]
		fistp   dword [esp+5ch]
		add     edx, ecx
		mov     esi, [esp+5ch]
		sub     edx, byte 14h
		mov     ecx, [eax+dr@1e6ee0h]
		add     edx, esi
		mov     ebx, [dr@243d74h]
		add     edi, edx
		add     ebx, ecx
		mov     esi, 0fh
		xor     edx, edx
		xor     eax, eax
dr@4d60fh:
		xor     ecx, ecx
dr@4d611h:
		cmp     byte [ebx], 3
		jle     dr@4d62eh
		mov     al, [edi]
		and     al, 0fh
		cmp     al, 4
		jge     dr@4d62eh
		mov     esi, eax
		mov     [dr@243cb0h], ecx
		mov     [dr@243cb4h], edx
		jmp     dr@4d645h
dr@4d62eh:
		inc     edi
		inc     ebx
		inc     ecx
		cmp     ecx, byte 28h
		jne     dr@4d611h
		add     edi, [dr@243d28h]
		sub     edi, byte 28h
		inc     edx
		cmp     edx, byte 28h
		jne     dr@4d60fh
dr@4d645h:
		imul    eax, [dr@243c60h], 35eh
		mov     [eax+dr@1e6ee4h], esi
		cmp     esi, byte 4
		jge     dr@4d4c3h
		fld     dword [eax+dr@1e7032h]
		fld     dword [eax+dr@1e7036h]
		fsubr   dword [eax+dr@1e6f88h]
		fxch    st0, st1
		fsubr   dword [eax+dr@1e6f84h]
		fxch    st0, st1
		fstp    dword [eax+dr@1e6f88h]
;19:0004d680
		fstp    dword [eax+dr@1e6f84h]
		jmp     dr@4d4c3h
dr@4d68bh:
		xor     esi, esi
		mov     [eax+dr@1e6ee4h], esi
dr@4d693h:
		imul    eax, [dr@243c60h], 35eh
		mov     ecx, [eax+dr@1e7062h]
		test    ecx, ecx
		je      dr@4d6e3h
		cmp     ecx, byte 3
		jg      dr@4d6e3h
		fld     qword [dr@184075h]
		fld     dword [eax+dr@1e702ah]
		fmul    st0, st1
		fld     dword [eax+dr@1e702eh]
		fmulp   st2, st0
		xor     edi, edi
		mov     edx, 1
		mov     [eax+dr@1e6f80h], edi
		mov     [eax+dr@1e6ee4h], edx
		fxch    st0, st1
		fstp    dword [eax+dr@1e6fd0h]
		fstp    dword [eax+dr@1e6fcch]
dr@4d6e3h:
		imul    eax, [dr@243c60h], 35eh
		cmp     dword [eax+dr@1e7062h], byte 0
		jne     dr@4d7e6h
		cmp     dword [esp+48h], byte 4
		jl      dr@4d708h
		cmp     dword [esp+4ch], byte 4
		jge     dr@4d72fh
dr@4d708h:
		cmp     dword [esp+2ch], byte 4
		jl      dr@4d72fh
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f7ch]
		fld     st0
		fadd    qword [dr@1840d9h]
		fstp    st1
		fstp    dword [eax+dr@1e6f7ch]
dr@4d72fh:
		cmp     dword [esp+50h], byte 4
		jl      dr@4d73dh
		cmp     dword [esp+54h], byte 4
		jge     dr@4d760h
dr@4d73dh:
		cmp     dword [esp+2ch], byte 4
		jl      dr@4d760h
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f7ch]
		fadd    qword [dr@1840e1h]
		fstp    dword [eax+dr@1e6f7ch]
dr@4d760h:
		imul    edx, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f7ch]
		fnstsw  ax
		sahf    
		jbe     dr@4d789h
		fld     dword [edx+dr@1e6f7ch]
		fadd    dword [dr@184065h]
		fstp    dword [edx+dr@1e6f7ch]
dr@4d789h:
		imul    eax, [dr@243c60h], 35eh
		cmp     dword [eax+dr@1e6f7ch], 43b40000h
		jl      dr@4d7b1h
		fld     dword [eax+dr@1e6f7ch]
		fadd    dword [dr@184071h]
		fstp    dword [eax+dr@1e6f7ch]
dr@4d7b1h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f80h]
		fld     st0
		fmul    qword [dr@1840e9h]
		mov     esi, 1
		fsubp   st1, st0
		mov     [eax+dr@1e6ee4h], esi
		fstp    dword [eax+dr@1e6f80h]
		jmp     dr@4d7e6h
dr@4d7deh:
		xor     ebx, ebx
		mov     [eax+dr@1e6ee4h], ebx
dr@4d7e6h:
		cmp     dword [esp+50h], byte 4
		je      dr@4d810h
		cmp     dword [esp+48h], byte 4
		je      dr@4d810h
		cmp     dword [esp+4ch], byte 4
		je      dr@4d810h
		cmp     dword [esp+54h], byte 4
;19:0004d800
		je      dr@4d810h
		cmp     dword [esp+40h], byte 4
		je      dr@4d810h
		cmp     dword [esp+44h], byte 4
		jne     dr@4d832h
dr@4d810h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f80h]
		fdiv    dword [dr@1840f1h]
		fsubr   dword [eax+dr@1e6f80h]
		fstp    dword [eax+dr@1e6f80h]
dr@4d832h:
		cmp     dword [esp+48h], byte 5
		je      dr@4d840h
		cmp     dword [esp+4ch], byte 5
		jne     dr@4d87ch
dr@4d840h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f80h]
		fdiv    dword [dr@184031h]
		fld     dword [eax+dr@1e6fd4h]
		fld     st0
		fadd    qword [dr@1840f5h]
		fstp    st1
		fxch    st0, st1
		fsubr   dword [eax+dr@1e6f80h]
		fxch    st0, st1
		fstp    dword [eax+dr@1e6fd4h]
		fstp    dword [eax+dr@1e6f80h]
dr@4d87ch:
		cmp     dword [esp+50h], byte 5
		je      dr@4d88ah
		cmp     dword [esp+54h], byte 5
		jne     dr@4d8c2h
dr@4d88ah:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f80h]
		fdiv    dword [dr@184031h]
		fld     dword [eax+dr@1e6fd4h]
		fadd    qword [dr@1840fdh]
		fxch    st0, st1
		fsubr   dword [eax+dr@1e6f80h]
		fxch    st0, st1
		fstp    dword [eax+dr@1e6fd4h]
		fstp    dword [eax+dr@1e6f80h]
dr@4d8c2h:
		cmp     dword [esp+50h], byte 6
		je      dr@4d8ech
		cmp     dword [esp+48h], byte 6
		je      dr@4d8ech
		cmp     dword [esp+4ch], byte 6
		je      dr@4d8ech
		cmp     dword [esp+54h], byte 6
		je      dr@4d8ech
		cmp     dword [esp+40h], byte 6
		je      dr@4d8ech
		cmp     dword [esp+44h], byte 6
		jne     dr@4d90eh
dr@4d8ech:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f80h]
		fdiv    dword [dr@184105h]
		fsubr   dword [eax+dr@1e6f80h]
		fstp    dword [eax+dr@1e6f80h]
dr@4d90eh:
		cmp     dword [esp+50h], byte 7
		je      dr@4d938h
		cmp     dword [esp+48h], byte 7
		je      dr@4d938h
		cmp     dword [esp+4ch], byte 7
		je      dr@4d938h
		cmp     dword [esp+54h], byte 7
		je      dr@4d938h
		cmp     dword [esp+40h], byte 7
		je      dr@4d938h
		cmp     dword [esp+44h], byte 7
		jne     dr@4d95ah
dr@4d938h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f80h]
		fdiv    dword [dr@184041h]
		fsubr   dword [eax+dr@1e6f80h]
		fstp    dword [eax+dr@1e6f80h]
dr@4d95ah:
		cmp     dword [esp+50h], byte 0ah
		je      dr@4d968h
		cmp     dword [esp+4ch], byte 0ah
		jne     dr@4d984h
dr@4d968h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6fd4h]
		fadd    qword [dr@184109h]
		fstp    dword [eax+dr@1e6fd4h]
dr@4d984h:
		cmp     dword [esp+48h], byte 0ah
		je      dr@4d992h
		cmp     dword [esp+54h], byte 0ah
		jne     dr@4d9b2h
dr@4d992h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6fd4h]
		fld     st0
		fadd    qword [dr@184111h]
		fstp    st1
		fstp    dword [eax+dr@1e6fd4h]
dr@4d9b2h:
		cmp     dword [esp+50h], byte 0bh
		je      dr@4d9dch
		cmp     dword [esp+48h], byte 0bh
		je      dr@4d9dch
		cmp     dword [esp+4ch], byte 0bh
		je      dr@4d9dch
		cmp     dword [esp+54h], byte 0bh
		je      dr@4d9dch
		cmp     dword [esp+40h], byte 0bh
		je      dr@4d9dch
		cmp     dword [esp+44h], byte 0bh
		jne     dr@4d9feh
dr@4d9dch:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f80h]
		fdiv    dword [dr@184119h]
		fadd    dword [eax+dr@1e6f80h]
		fstp    dword [eax+dr@1e6f80h]
dr@4d9feh:
		cmp     dword [esp+50h], byte 0ch
		je      dr@4da0ch
		cmp     dword [esp+4ch], byte 0ch
		jne     dr@4da28h
dr@4da0ch:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6fd4h]
		fadd    qword [dr@18411dh]
		fstp    dword [eax+dr@1e6fd4h]
dr@4da28h:
		cmp     dword [esp+48h], byte 0ch
		je      dr@4da36h
		cmp     dword [esp+54h], byte 0ch
		jne     dr@4da56h
dr@4da36h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6fd4h]
		fld     st0
		fadd    qword [dr@184125h]
		fstp    st1
		fstp    dword [eax+dr@1e6fd4h]
dr@4da56h:
		cmp     dword [esp+50h], byte 0dh
		je      dr@4da84h
		cmp     dword [esp+48h], byte 0dh
		je      dr@4da84h
		cmp     dword [esp+4ch], byte 0dh
		je      dr@4da84h
		cmp     dword [esp+54h], byte 0dh
		je      dr@4da84h
		cmp     dword [esp+40h], byte 0dh
		je      dr@4da84h
		cmp     dword [esp+44h], byte 0dh
		jne     dr@4db80h
dr@4da84h:
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e6f80h]
		fmul    qword [dr@18412dh]
		fstp    qword [esp+10h]
		call    rand
		mov     [esp+5ch], eax
		fild    dword [esp+5ch]
		fmul    qword [esp+10h]
		fmul    qword [dr@184135h]
		fld     dword [edx+dr@1e6f7ch]
		fxch    st0, st1
		fadd    st0, st1
		mov     eax, [dr@243c60h]
		fstp    st1
		fstp    dword [edx+dr@1e6f7ch]
		imul    edx, eax, 35eh
		fld     dword [edx+dr@1e6f80h]
		fmul    qword [dr@18412dh]
		fstp    qword [esp+10h]
		call    rand
		mov     [esp+5ch], eax
		fild    dword [esp+5ch]
		fmul    qword [esp+10h]
		fmul    qword [dr@184135h]
		fld     dword [edx+dr@1e6f7ch]
		fxch    st0, st1
		fsubr   st0, st1
		mov     ebx, [dr@243c60h]
		fstp    st1
		fstp    dword [edx+dr@1e6f7ch]
		imul    edx, ebx, 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f7ch]
		fnstsw  ax
		sahf    
		jbe     dr@4db36h
		fld     dword [edx+dr@1e6f7ch]
		fadd    dword [dr@184065h]
		fstp    dword [edx+dr@1e6f7ch]
dr@4db36h:
		imul    eax, [dr@243c60h], 35eh
		cmp     dword [eax+dr@1e6f7ch], 43b40000h
		jl      dr@4db5eh
		fld     dword [eax+dr@1e6f7ch]
		fadd    dword [dr@184071h]
		fstp    dword [eax+dr@1e6f7ch]
dr@4db5eh:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f80h]
		fdiv    dword [dr@184031h]
		fsubr   dword [eax+dr@1e6f80h]
		fstp    dword [eax+dr@1e6f80h]
;19:0004db80
dr@4db80h:
		cmp     dword [esp+50h], byte 0eh
		je      dr@4dbaah
		cmp     dword [esp+48h], byte 0eh
		je      dr@4dbaah
		cmp     dword [esp+4ch], byte 0eh
		je      dr@4dbaah
		cmp     dword [esp+54h], byte 0eh
		je      dr@4dbaah
		cmp     dword [esp+40h], byte 0eh
		je      dr@4dbaah
		cmp     dword [esp+44h], byte 0eh
		jne     dr@4dbcch
dr@4dbaah:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f80h]
		fdiv    dword [dr@18413dh]
		fsubr   dword [eax+dr@1e6f80h]
		fstp    dword [eax+dr@1e6f80h]
dr@4dbcch:
		imul    edx, [dr@243c60h], 35eh
		mov     eax, [dr@243d28h]
		sub     eax, byte 14h
		mov     [esp+20h], eax
		fild    dword [esp+20h]
		fstp    dword [esp+28h]
		fld     dword [edx+dr@1e702eh]
		fld     dword [edx+dr@1e702ah]
		fadd    dword [edx+dr@1e6f84h]
		fxch    st0, st1
		fadd    dword [edx+dr@1e6f88h]
		fxch    st0, st1
		fstp    dword [edx+dr@1e6f84h]
		fstp    dword [edx+dr@1e6f88h]
		fld     dword [edx+dr@1e6f84h]
		fcomp   dword [esp+28h]
		fnstsw  ax
		sahf    
		jbe     dr@4dc2bh
		mov     eax, [esp+28h]
		mov     [edx+dr@1e6f84h], eax
dr@4dc2bh:
		imul    eax, [dr@243c60h], 35eh
		cmp     dword [eax+dr@1e6f84h], 41a00000h
		jge     dr@4dc4bh
		mov     dword [eax+dr@1e6f84h], 41a00000h
dr@4dc4bh:
		imul    edx, [dr@243c60h], 35eh
		mov     eax, [dr@243d2ch]
		sub     eax, byte 14h
		mov     [esp+1ch], eax
		fld     dword [edx+dr@1e6f88h]
		fild    dword [esp+1ch]
		fstp    dword [esp+24h]
		fcomp   dword [esp+24h]
		fnstsw  ax
		sahf    
		jbe     dr@4dc82h
		mov     eax, [esp+24h]
		mov     [edx+dr@1e6f88h], eax
dr@4dc82h:
		imul    eax, [dr@243c60h], 35eh
		cmp     dword [eax+dr@1e6f88h], 41a00000h
		jge     dr@4dca2h
		mov     dword [eax+dr@1e6f88h], 41a00000h
dr@4dca2h:
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
dr@18400dh: ; 50.0
db	0,0,48h,42h                                 
dr@184011h: ; 0.8
db	9ah,99h,99h,99h,99h,99h,0e9h,3fh
dr@184019h: ; 30.0
db	0,0,0,0,0,0,3eh,40h                         
dr@184021h: ; 1.3
db	0cdh,0cch,0cch,0cch,0cch,0cch,0f4h,3fh
dr@184029h: ; 1.5
db	0,0,0,0,0,0,0f8h,3fh                        
dr@184031h: ; 30.0
db	0,0,0f0h,41h
dr@184035h: ; 3.0
db	0,0,40h,40h
dr@184039h: ; 10.0
db	0,0,0,0,0,0,24h,40h
dr@184041h: ; 20.0
db	0,0,0a0h,41h
dr@184045h: ; 50.0
db	0,0,0,0,0,0,49h,40h
dr@18404dh: ; 90.0
db	0,0,0b4h,42h
dr@184051h: ; 36.0
db	0,0,10h,42h
dr@184055h: ; 2.0
db	0,0,0,40h
dr@184059h: ; -36.0
db	0,0,10h,0c2h
dr@18405dh: ; -2.0
db	0,0,0,0,0,0,0,0c0h
dr@184065h: ; 360.0
db	0,0,0b4h,43h
dr@184069h: ; 2.0
db	0,0,0,0,0,0,0,40h
dr@184071h: ; -360.0
db	0,0,0b4h,0c3h
dr@184075h: ; -1.0
db	0,0,0,0,0,0,0f0h,0bfh
dr@18407dh: ; 180.0
db	0,0,34h,43h
dr@184081h: ; 3.14159265359
db	0eah,2eh,44h,54h,0fbh,21h,9,40h
dr@184089h: ; 180.0
db	0,0,0,0,0,80h,66h,40h
dr@184091h: ; 0.833333
db	0a3h,0aeh,0b5h,0f7h,0a9h,0aah,0eah,3fh
dr@184099h: ; -90.0
db	0,0,0b4h,0c2h
dr@18409dh: ; 11.0
db	0,0,0,0,0,0,26h,40h
dr@1840a5h: ; 26.0
db	0,0,0d0h,41h
dr@1840a9h: ; 18.0
db	0,0,0,0,0,0,32h,40h
dr@1840b1h: ; -26.0
db	0,0,0d0h,0c1h
dr@1840b5h: ; 154.0
db	0,0,1ah,43h
dr@1840b9h: ; -154.0
db	0,0,1ah,0c3h
dr@1840bdh: ; 8.0
db	0,0,0,0,0,0,20h,40h
dr@1840c5h: ; 22.0
db	0,0,0,0,0,0,36h,40h
dr@1840cdh: ; 3.75
db	0,0,0,0,0,0,0eh,40h
dr@1840d5h: ; -20.0
db	0,0,0a0h,0c1h
dr@1840d9h: ; 20.0
db	0,0,0,0,0,0,34h,40h
dr@1840e1h: ; -20.0
db	0,0,0,0,0,0,34h,0c0h
dr@1840e9h: ; 0.125
db	0,0,0,0,0,0,0c0h,3fh
dr@1840f1h: ; 35.0
db	0,0,0ch,42h
dr@1840f5h: ; 0.2
db	9ah,99h,99h,99h,99h,99h,0c9h,3fh
dr@1840fdh: ; -0.2
db	9ah,99h,99h,99h,99h,99h,0c9h,0bfh
dr@184105h: ; 9.0
db	0,0,10h,41h
dr@184109h: ; -0.15
db	33h,33h,33h,33h,33h,33h,0c3h,0bfh
dr@184111h: ; 0.15
db	33h,33h,33h,33h,33h,33h,0c3h,3fh
dr@184119h: ; 75.0
db	0,0,96h,42h
dr@18411dh: ; -0.05
db	9ah,99h,99h,99h,99h,99h,0a9h,0bfh
dr@184125h: ; 0.05
db	9ah,99h,99h,99h,99h,99h,0a9h,3fh
dr@18412dh: ; 7.0
db	0,0,0,0,0,0,1ch,40h
dr@184135h: ; 0.0000152587890625
db	0,0,0,0,0,0,0f0h,3eh
dr@18413dh: ; 40.0
db	0,0,20h,42h
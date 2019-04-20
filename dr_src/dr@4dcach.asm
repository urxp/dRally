cpu 386

    extern  __CHK
    extern  dr@243cf4h
    extern  dr@243c60h
    extern  dr@243cf4h
    extern  __CHP
    extern  dr@1e6ee0h
    extern  dr@1e7046h
    extern  dr@1e6fd0h
    extern  dr@1e6fcch
    extern  dr@243c60h
    extern  dr@1e702eh
    extern  dr@1e6f84h
    extern  dr@1e6fd0h
    extern  dr@1e702eh
    extern  dr@1e6eech
    extern  dr@243c60h
    extern  dr@1e6fd4h
    extern  dr@1e6f84h
    extern  dr@243c60h
    extern  dr@1e6f7ch
    extern  dr@1e6f88h
    extern  dr@243d74h
    extern  dr@243d74h
    extern  dr@2438cch
    extern  _settextposition_
    extern  dr@243c60h
    extern  __CHK
    extern  dr@243c60h
    extern  dr@1e6f84h
    extern  dr@1e6f88h
    extern  dr@243ce8h
    extern  rand
    extern  dr@1e6f8ch
    extern  dr@243c60h
    extern  dr@1de598h
    extern  dr@196df8h
    extern  dr@243c60h
    extern  dr@243c60h
    extern  dr@1e6c6eh
    extern  dr@1e6c72h
    extern  dr@1e6c76h
    extern  dr@1e7042h
    extern  dr@1e7042h
    extern  dr@1e7022h
    extern  dr@1e701eh
    extern  dr@1e7022h
    extern  dr@1e701eh
    extern  dr@1e702ah
    extern  dr@1e702ah
    extern  dr@1e6ee8h
    extern  dr@1e6ee8h
    extern  dr@1e701eh
    extern  dr@1e7022h
    extern  dr@1e701eh
    extern  dr@1e7022h
    extern  dr@1e702ah
    extern  dr@1e702ah
    extern  dr@1e6ee8h
    extern  dr@1e6ee8h
    extern  dr@1e6ee8h
    extern  dr@1e6ee8h
    extern  dr@1de5a4h
    extern  dr@1e6fdah
    extern  dr@1e6f9ch
    extern  dr@1e6fa0h
    extern  dr@1e6f94h
    extern  dr@1e6f98h
    extern  dr@1de59ch
    extern  dr@6563ch
    extern  dr@1e6ee4h
    extern  dr@1e6ee8h
    extern  dr@1e6ee8h
    extern  dr@606d9h
    extern  dr@654d4h
    extern  dr@1e705eh
    extern  dr@606d9h
    extern  dr@654d4h
    extern  dr@1e6f80h
    extern  dr@243ca8h
    extern  dr@1e6ef0h
    extern  dr@1e6f80h
    extern  dr@1e6f80h
    extern  dr@243ca8h
    extern  dr@1e6ef0h
    extern  dr@1e6fdah
    extern  dr@654d4h
    extern  dr@1e6fdah
    extern  dr@6563ch
    extern  dr@1e6f80h
    extern  dr@1de584h
    extern  dr@1e706eh
    extern  dr@1e706ah
    extern  dr@655b0h

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global dr@4dcach
dr@4dcach:
		push    0f0h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, 0d4h
		and     esp, byte 0fffffff8h
		xor     edx, edx
		mov     esi, [dr@243cf4h]
		mov     [dr@243c60h], edx
		test    esi, esi
		jle     dr@4dd43h
		fld     qword [dr@184149h]
		xor     eax, eax
		imul    edx, esi, 35eh
dr@4dce7h:
		fld     dword [eax+dr@1e6fcch]
		fld     st0
		fdiv    st0, st2
		fld     dword [eax+dr@1e6fd0h]
		fld     st0
		fdiv    st0, st4
		fld     dword [eax+dr@1e6fd4h]
		fld     st0
		fdiv    qword [dr@184151h]
		mov     edi, [dr@243c60h]
		inc     edi
		add     eax, 35eh
		mov     [dr@243c60h], edi
		fxch    st0, st4
		fstp    st5
		fxch    st0, st1
		fstp    st2
		fxch    st0, st2
		fstp    st2
		fxch    st0, st2
		fstp    dword [eax+dr@1e6c6eh]
		fxch    st0, st1
		fstp    dword [eax+dr@1e6c72h]
		fstp    dword [eax+dr@1e6c76h]
		cmp     eax, edx
		jl      dr@4dce7h
		fstp    st0
dr@4dd43h:
		xor     eax, eax
		mov     [dr@243c60h], eax
		jmp     dr@4e972h
dr@4dd4fh:
		lea     eax, [edi+1]
		mov     edx, [dr@243cf4h]
		mov     [esp+40h], eax
		cmp     eax, edx
		jge     dr@4e96ch
		mov     edx, eax
		imul    eax, eax, 94h
		mov     [esp+60h], eax
		imul    eax, edx, 35eh
		mov     [esp+18h], eax
dr@4dd7ah:
		imul    eax, [dr@243c60h], 35eh
		mov     edx, [esp+18h]
		fld     dword [edx+dr@1e6f88h]
		fld     dword [edx+dr@1e6f84h]
		fsub    dword [eax+dr@1e6f84h]
		fxch    st0, st1
		fsub    dword [eax+dr@1e6f88h]
		fxch    st0, st1
		call    __CHP
		fxch    st0, st1
		call    __CHP
		fxch    st0, st1
		fistp   dword [esp+68h]
		mov     edi, [esp+68h]
		fistp   dword [esp+64h]
		cmp     edi, byte 27h
		jge     dr@4e939h
		mov     eax, [esp+64h]
		cmp     eax, byte 27h
		jge     dr@4e939h
		cmp     edi, byte 0ffffffd9h
		jle     dr@4e939h
		cmp     eax, byte 0ffffffd9h
		jle     dr@4e939h
		test    edi, edi
		jl      dr@4ddfah
		mov     eax, 28h
		mov     ebx, edi
		xor     ecx, ecx
		mov     [esp+0b8h], eax
dr@4ddfah:
		mov     edx, [esp+68h]
		test    edx, edx
;19:0004de00
		jge     dr@4de12h
		lea     eax, [edx+28h]
		xor     ebx, ebx
		mov     ecx, edx
		mov     [esp+0b8h], eax
		neg     ecx
dr@4de12h:
		mov     esi, [esp+64h]
		test    esi, esi
		jl      dr@4de32h
		mov     edi, 28h
		mov     eax, esi
		mov     [esp+78h], esi
		xor     eax, esi
		mov     [esp+0c8h], edi
		mov     [esp+74h], eax
dr@4de32h:
		mov     edx, [esp+64h]
		test    edx, edx
		jge     dr@4de56h
		lea     eax, [edx+28h]
		xor     esi, esi
		mov     [esp+0c8h], eax
		mov     edi, edx
		mov     [esp+74h], edx
		neg     edi
		mov     [esp+78h], esi
		mov     [esp+74h], edi
dr@4de56h:
		mov     edx, [esp+0c8h]
		xor     eax, eax
		mov     [esp+70h], ecx
		mov     [esp+94h], eax
		mov     eax, [esp+78h]
		mov     [esp+88h], ebx
		cmp     eax, edx
		jge     dr@4e00ah
		mov     eax, [esp+18h]
		mov     ebx, [dr@243c60h]
		mov     [esp+90h], eax
		imul    eax, ebx, 35eh
		mov     ecx, [esp+78h]
		mov     [esp+8ch], eax
		imul    eax, ecx, byte 28h
		mov     esi, [esp+74h]
		mov     [esp+7ch], eax
		imul    eax, esi, byte 28h
		mov     [esp+80h], eax
		lea     eax, [esi-14h]
		mov     [esp+84h], eax
		lea     eax, [ecx-14h]
		mov     [esp+1ch], eax
		lea     eax, [edx-14h]
		mov     [esp+6ch], eax
dr@4decch:
		mov     edi, [esp+0b8h]
		mov     ebx, [esp+88h]
		mov     ecx, [esp+70h]
		cmp     ebx, edi
		jge     dr@4dfb4h
		mov     eax, [esp+1ch]
		mov     [esp+0b0h], eax
		mov     eax, [esp+84h]
		mov     [esp+0a8h], eax
		mov     eax, [esp+80h]
		mov     [esp+0ach], eax
		mov     eax, [esp+7ch]
		lea     esi, [ecx-14h]
		mov     [esp+0b4h], eax
		lea     eax, [ebx-14h]
dr@4df1eh:
		mov     edx, [dr@243d74h]
		mov     edi, [esp+8ch]
		mov     [esp+0bch], edx
		add     edx, [edi+dr@1e6ee0h]
		mov     edi, [esp+0b4h]
		add     edx, ebx
		add     edi, edx
		cmp     byte [edi], 3
		jbe     dr@4dfa1h
		mov     edi, [esp+90h]
		mov     edx, [esp+0bch]
		add     edx, [edi+dr@1e6ee0h]
		mov     edi, [esp+0ach]
		add     edx, ecx
		add     edi, edx
		cmp     byte [edi], 3
		jbe     dr@4dfa1h
		mov     dword [esp+94h], 1
		mov     edx, [esp+0b0h]
		mov     [esp+98h], eax
		mov     [esp+0a4h], edx
		mov     edx, [esp+0a8h]
		mov     [esp+0a0h], esi
		mov     [esp+9ch], edx
dr@4dfa1h:
		mov     edx, [esp+0b8h]
		inc     eax
		inc     ebx
		inc     esi
		inc     ecx
		cmp     ebx, edx
		jl      dr@4df1eh
dr@4dfb4h:
		mov     esi, [esp+7ch]
		mov     edi, [esp+1ch]
		mov     eax, [esp+78h]
		mov     edx, [esp+80h]
		add     esi, byte 28h
		inc     edi
		inc     eax
		add     edx, byte 28h
		mov     [esp+7ch], esi
		mov     [esp+1ch], edi
		mov     [esp+78h], eax
		mov     [esp+80h], edx
		mov     esi, [esp+84h]
		mov     edi, [esp+74h]
		mov     eax, [esp+1ch]
		mov     edx, [esp+6ch]
		inc     esi
		inc     edi
		mov     [esp+84h], esi
		mov     [esp+74h], edi
		cmp     eax, edx
		jl      dr@4decch
dr@4e00ah:
		cmp     dword [esp+94h], byte 1
		jne     dr@4e939h
		imul    edx, [dr@243c60h], 35eh
		mov     eax, [esp+98h]
		mov     [edx+dr@1e7042h], eax
		mov     eax, [esp+0a4h]
		mov     esi, [esp+18h]
		mov     [edx+dr@1e7046h], eax
		mov     eax, [esp+0a0h]
		mov     [esi+dr@1e7042h], eax
		mov     eax, [esp+9ch]
		mov     [esi+dr@1e7046h], eax
		mov     eax, esi
		fld     dword [eax+dr@1e6f84h]
		fld     dword [eax+dr@1e6f88h]
		mov     eax, [esp+98h]
		mov     [esp+20h], eax
		neg     eax
		mov     [esp+20h], eax
		fsub    dword [esi+dr@1e7022h]
		fild    dword [esp+20h]
		fmul    st0, st1
		fld     dword [edx+dr@1e6f88h]
		fld     dword [edx+dr@1e6f84h]
		fsub    dword [edx+dr@1e701eh]
		fxch    st0, st1
		fsub    dword [edx+dr@1e7022h]
		fxch    st0, st4
		fsub    dword [esi+dr@1e701eh]
		fld     st0
		fsub    st0, st2
		fxch    st0, st4
		fsub    st0, st5
		fxch    st0, st4
		fld     qword [dr@184141h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st5
		fstp    dword [esp+0d0h]
		mov     eax, [esp+0a0h]
		fmul    dword [esp+0d0h]
		mov     esi, eax
		mov     [esp+20h], eax
		neg     esi
		mov     [esp+20h], esi
		fild    dword [esp+20h]
		fmulp   st6, st0
		fild    dword [esp+0a4h]
		fmulp   st2, st0
		fild    dword [esp+9ch]
		fmulp   st3, st0
		fld     dword [edx+dr@1e6fcch]
		fstp    qword [esp+8]
;19:0004e100
		fxch    st0, st4
		fadd    qword [esp+8]
		mov     edi, [esp+98h]
		fstp    qword [esp+8]
		fld     dword [edx+dr@1e6fd0h]
		fxch    st0, st4
		fadd    st0, st4
		fxch    st0, st1
		faddp   st3, st0
		fstp    st3
		fxch    st0, st1
		call    __CHP
		fistp   dword [esp+28h]
		fld     qword [esp+8]
		fstp    dword [edx+dr@1e6fcch]
		faddp   st2, st0
		fstp    dword [edx+dr@1e6fd0h]
		call    __CHP
		fistp   dword [esp+2ch]
		test    edi, edi
		jle     dr@4e158h
		fldz    
		fcomp   dword [edx+dr@1e702ah]
		fnstsw  ax
		sahf    
		jb      dr@4e179h
dr@4e158h:
		cmp     dword [esp+98h], byte 0
		jge     dr@4e18fh
		imul    eax, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [eax+dr@1e702ah]
		fnstsw  ax
		sahf    
		jbe     dr@4e18fh
dr@4e179h:
		imul    eax, [dr@243c60h], 35eh
		mov     dword [eax+dr@1e6ee8h], 1
		jmp     dr@4e1a3h
dr@4e18fh:
		imul    eax, [dr@243c60h], 35eh
		mov     dword [eax+dr@1e6ee8h], 2
dr@4e1a3h:
		cmp     dword [esp+0a4h], byte 0
		jle     dr@4e1c4h
		imul    eax, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [eax+dr@1e702eh]
		fnstsw  ax
		sahf    
		jb      dr@4e1e5h
dr@4e1c4h:
		cmp     dword [esp+0a4h], byte 0
		jge     dr@4e1fbh
		imul    eax, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [eax+dr@1e702eh]
		fnstsw  ax
		sahf    
		jbe     dr@4e1fbh
dr@4e1e5h:
		imul    eax, [dr@243c60h], 35eh
		mov     dword [eax+dr@1e6eech], 1
		jmp     dr@4e20fh
dr@4e1fbh:
		imul    eax, [dr@243c60h], 35eh
		mov     dword [eax+dr@1e6eech], 2
dr@4e20fh:
		imul    eax, [dr@243c60h], 35eh
		mov     edx, [esp+18h]
		fld     dword [edx+dr@1e6f84h]
		fld     dword [eax+dr@1e6f88h]
		fld     dword [eax+dr@1e6f84h]
		fsub    dword [eax+dr@1e701eh]
		fxch    st0, st1
		fsub    dword [eax+dr@1e7022h]
		mov     eax, edx
		fxch    st0, st2
		fsub    dword [edx+dr@1e701eh]
		fld     dword [eax+dr@1e6f88h]
		fxch    st0, st1
		fsubr   st0, st2
		fxch    st0, st1
		fsub    dword [edx+dr@1e7022h]
		fxch    st0, st1
		fstp    st2
		fsubr   st0, st2
		fxch    st0, st1
		fld     qword [dr@184141h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fstp    st3
		fmulp   st2, st0
		fld     dword [edx+dr@1e6fcch]
		fxch    st0, st1
		fadd    st0, st1
		mov     edi, [esp+0a0h]
		fstp    st1
		fld     dword [edx+dr@1e6fd0h]
		fxch    st0, st2
		fadd    st0, st2
		fxch    st0, st1
		fstp    dword [edx+dr@1e6fcch]
		fstp    st1
		fstp    dword [edx+dr@1e6fd0h]
		test    edi, edi
		jle     dr@4e2afh
		fldz    
		fcomp   dword [edx+dr@1e702ah]
		fnstsw  ax
		sahf    
		jb      dr@4e2cah
dr@4e2afh:
		cmp     dword [esp+0a0h], byte 0
		jge     dr@4e2dah
		mov     eax, [esp+18h]
		fldz    
		fcomp   dword [eax+dr@1e702ah]
		fnstsw  ax
		sahf    
		jbe     dr@4e2dah
dr@4e2cah:
		mov     eax, [esp+18h]
		mov     dword [eax+dr@1e6ee8h], 1
		jmp     dr@4e2e8h
dr@4e2dah:
		mov     eax, [esp+18h]
		mov     dword [eax+dr@1e6ee8h], 2
dr@4e2e8h:
		cmp     dword [esp+9ch], byte 0
		jle     dr@4e303h
		mov     eax, [esp+18h]
		fldz    
		fcomp   dword [eax+dr@1e702eh]
		fnstsw  ax
;19:0004e300
		sahf    
		jb      dr@4e31eh
dr@4e303h:
		cmp     dword [esp+9ch], byte 0
		jge     dr@4e32eh
		mov     eax, [esp+18h]
		fldz    
		fcomp   dword [eax+dr@1e702eh]
		fnstsw  ax
		sahf    
		jbe     dr@4e32eh
dr@4e31eh:
		mov     eax, [esp+18h]
		mov     dword [eax+dr@1e6eech], 1
		jmp     dr@4e33ch
dr@4e32eh:
		mov     eax, [esp+18h]
		mov     dword [eax+dr@1e6eech], 2
dr@4e33ch:
		imul    eax, [dr@243c60h], 35eh
		mov     edx, [eax+dr@1e6ee8h]
		cmp     edx, byte 1
		jne     dr@4e35dh
		mov     eax, [esp+18h]
		cmp     edx, [eax+dr@1e6ee8h]
		je      dr@4e386h
dr@4e35dh:
		imul    eax, [dr@243c60h], 35eh
		mov     edx, [eax+dr@1e6eech]
		cmp     edx, byte 1
		jne     dr@4e52ah
		mov     eax, [esp+18h]
		cmp     edx, [eax+dr@1e6eech]
;19:0004e380
		jne     dr@4e52ah
dr@4e386h:
		imul    edx, [dr@243c60h], 35eh
		mov     eax, [esp+18h]
		fld     dword [edx+dr@1e6f7ch]
		fcomp   dword [eax+dr@1e6f7ch]
		fnstsw  ax
		sahf    
		jbe     dr@4e412h
		mov     eax, [esp+18h]
		fld     dword [edx+dr@1e6f7ch]
		fsub    dword [eax+dr@1e6f7ch]
		fldz    
		fxch    st0, st1
		fstp    dword [esp+54h]
		fcomp   dword [esp+54h]
		fnstsw  ax
		sahf    
		jbe     dr@4e3d2h
		fld     dword [esp+54h]
		fchs    
		fstp    dword [esp+3ch]
		jmp     dr@4e3dah
dr@4e3d2h:
		mov     eax, [esp+54h]
		mov     [esp+3ch], eax
dr@4e3dah:
		cmp     dword [esp+3ch], 42c80000h
		jge     dr@4e412h
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6fd4h]
		fadd    dword [dr@18415dh]
		fstp    dword [eax+dr@1e6fd4h]
;19:0004e400
		mov     eax, [esp+18h]
		fld     dword [eax+dr@1e6fd4h]
		fadd    dword [dr@184159h]
		jmp     dr@4e43eh
dr@4e412h:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6fd4h]
		fadd    dword [dr@184159h]
		fstp    dword [eax+dr@1e6fd4h]
		mov     eax, [esp+18h]
		fld     dword [eax+dr@1e6fd4h]
		fadd    dword [dr@18415dh]
dr@4e43eh:
		fstp    dword [eax+dr@1e6fd4h]
		imul    edx, [dr@243c60h], 35eh
		mov     eax, [esp+18h]
		fld     dword [edx+dr@1e6f84h]
		fcomp   dword [eax+dr@1e6f84h]
		fnstsw  ax
		sahf    
		jb      dr@4e48bh
		fld     dword [edx+dr@1e6f84h]
		fld     st0
		fadd    qword [dr@184169h]
		mov     eax, [esp+18h]
		fstp    st1
		fstp    dword [edx+dr@1e6f84h]
		fld     dword [eax+dr@1e6f84h]
		fadd    qword [dr@184161h]
		jmp     dr@4e4b1h
dr@4e48bh:
		fld     dword [edx+dr@1e6f84h]
		fadd    qword [dr@184161h]
		mov     eax, [esp+18h]
		fstp    dword [edx+dr@1e6f84h]
		fld     dword [eax+dr@1e6f84h]
		fld     st0
		fadd    qword [dr@184169h]
		fstp    st1
dr@4e4b1h:
		fstp    dword [eax+dr@1e6f84h]
		imul    edx, [dr@243c60h], 35eh
		mov     eax, [esp+18h]
		fld     dword [edx+dr@1e6f88h]
		fcomp   dword [eax+dr@1e6f88h]
		fnstsw  ax
		sahf    
		jb      dr@4e4feh
		fld     dword [edx+dr@1e6f88h]
		fld     st0
		fadd    qword [dr@184169h]
		mov     eax, [esp+18h]
		fstp    st1
		fstp    dword [edx+dr@1e6f88h]
		fld     dword [eax+dr@1e6f88h]
		fadd    qword [dr@184161h]
		jmp     dr@4e524h
dr@4e4feh:
		fld     dword [edx+dr@1e6f88h]
		fadd    qword [dr@184161h]
		mov     eax, [esp+18h]
		fstp    dword [edx+dr@1e6f88h]
		fld     dword [eax+dr@1e6f88h]
		fld     st0
		fadd    qword [dr@184169h]
		fstp    st1
dr@4e524h:
		fstp    dword [eax+dr@1e6f88h]
dr@4e52ah:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f7ch]
		mov     eax, [esp+18h]
		fsub    dword [eax+dr@1e6f7ch]
		fldz    
		fxch    st0, st1
		fstp    dword [esp+48h]
		fcomp   dword [esp+48h]
		fnstsw  ax
		sahf    
		jbe     dr@4e561h
		fld     dword [esp+48h]
		fchs    
		fstp    dword [esp+30h]
		jmp     dr@4e569h
dr@4e561h:
		mov     eax, [esp+48h]
		mov     [esp+30h], eax
dr@4e569h:
		cmp     dword [esp+30h], 439d8000h
		jge     dr@4e6fbh
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f7ch]
		mov     eax, [esp+18h]
		fsub    dword [eax+dr@1e6f7ch]
		fldz    
		fxch    st0, st1
		fstp    dword [esp+5ch]
		fcomp   dword [esp+5ch]
		fnstsw  ax
		sahf    
		jbe     dr@4e5b1h
		fld     dword [esp+5ch]
		fchs    
		fstp    dword [esp+0c4h]
		jmp     dr@4e5bch
dr@4e5b1h:
		mov     eax, [esp+5ch]
		mov     [esp+0c4h], eax
dr@4e5bch:
		cmp     dword [esp+0c4h], 42340000h
		jle     dr@4e6fbh
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f7ch]
		mov     eax, [esp+18h]
		fsub    dword [eax+dr@1e6f7ch]
		fldz    
		fxch    st0, st1
		fstp    dword [esp+0cch]
		fcomp   dword [esp+0cch]
		fnstsw  ax
		sahf    
		jbe     dr@4e60dh
		fld     dword [esp+0cch]
		fchs    
		fstp    dword [esp+34h]
		jmp     dr@4e618h
dr@4e60dh:
		mov     eax, [esp+0cch]
		mov     [esp+34h], eax
dr@4e618h:
		cmp     dword [esp+34h], 43070000h
		jl      dr@4e66fh
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6f7ch]
		mov     eax, [esp+18h]
		fsub    dword [eax+dr@1e6f7ch]
		fldz    
		fxch    st0, st1
		fstp    dword [esp+44h]
		fcomp   dword [esp+44h]
		fnstsw  ax
		sahf    
		jbe     dr@4e659h
		fld     dword [esp+44h]
		fchs    
		fstp    dword [esp+38h]
		jmp     dr@4e661h
dr@4e659h:
		mov     eax, [esp+44h]
		mov     [esp+38h], eax
dr@4e661h:
		cmp     dword [esp+38h], 43610000h
		jle     dr@4e6fbh
dr@4e66fh:
		mov     eax, [esp+28h]
		mov     edx, eax
		sar     edx, 1fh
		shl     edx, 2
		sbb     eax, edx
		sar     eax, 2
;19:0004e680
		mov     [esp+20h], eax
		fild    dword [esp+20h]
		fstp    dword [esp+58h]
		cmp     dword [esp+58h], 40400000h
		jle     dr@4e69eh
		mov     dword [esp+58h], 40400000h
dr@4e69eh:
		mov     eax, [esp+2ch]
		mov     edx, eax
		sar     edx, 1fh
		shl     edx, 2
		sbb     eax, edx
		sar     eax, 2
		mov     [esp+20h], eax
		fild    dword [esp+20h]
		fstp    dword [esp+50h]
		cmp     dword [esp+50h], 40400000h
		jle     dr@4e6cdh
		mov     dword [esp+50h], 40400000h
dr@4e6cdh:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6fd4h]
		fadd    dword [esp+58h]
		fstp    dword [eax+dr@1e6fd4h]
		mov     eax, [esp+18h]
		fld     dword [eax+dr@1e6fd4h]
		fadd    dword [esp+50h]
		fstp    dword [eax+dr@1e6fd4h]
dr@4e6fbh:
		xor     eax, eax
		mov     edx, [dr@243c60h]
		mov     [esp+4ch], eax
		imul    eax, edx, 94h
		cmp     dword [eax+dr@1de5a4h], byte 0
		je      dr@4e939h
		mov     eax, [esp+18h]
		cmp     dword [eax+dr@1e6fdah], byte 0
		jne     dr@4e939h
		imul    edx, edx, 35eh
		fld     dword [eax+dr@1e6f84h]
		call    __CHP
		fistp   dword [esp+20h]
		mov     eax, [esp+20h]
		fld     dword [edx+dr@1e6f88h]
		fld     dword [edx+dr@1e6f84h]
		fadd    dword [edx+dr@1e6f9ch]
		fxch    st0, st1
		fadd    dword [edx+dr@1e6fa0h]
		fxch    st0, st1
		call    __CHP
		fxch    st0, st1
		call    __CHP
		mov     edx, [esp+18h]
		fxch    st0, st1
		fistp   dword [esp+24h]
		fistp   dword [esp+20h]
		fld     dword [edx+dr@1e6f88h]
;19:0004e780
		mov     esi, [esp+24h]
		mov     edi, [esp+20h]
		call    __CHP
		fistp   dword [esp+20h]
		mov     edx, [esp+20h]
		sub     eax, esi
		sub     edx, edi
		test    eax, eax
		jge     dr@4e7a3h
		mov     esi, eax
		neg     esi
		jmp     dr@4e7a5h
dr@4e7a3h:
		mov     esi, eax
dr@4e7a5h:
		cmp     esi, byte 14h
		jge     dr@4e7e2h
		test    edx, edx
		jge     dr@4e7b4h
		mov     esi, edx
		neg     esi
		jmp     dr@4e7b6h
dr@4e7b4h:
		mov     esi, edx
dr@4e7b6h:
		cmp     esi, byte 14h
		jge     dr@4e7e2h
		mov     esi, [dr@243d74h]
		mov     edi, [esp+18h]
		add     esi, [edi+dr@1e6ee0h]
		add     edx, byte 14h
		add     esi, eax
		imul    eax, edx, byte 28h
		cmp     byte [esi+eax*1+14h], 3
		jbe     dr@4e7e2h
		mov     dword [esp+4ch], 1
dr@4e7e2h:
		imul    edx, [dr@243c60h], 35eh
		mov     eax, [esp+18h]
		fld     dword [eax+dr@1e6f84h]
		call    __CHP
		fistp   dword [esp+20h]
		mov     eax, [esp+20h]
		fld     dword [edx+dr@1e6f88h]
		fld     dword [edx+dr@1e6f84h]
		fadd    dword [edx+dr@1e6f94h]
		fxch    st0, st1
		fadd    dword [edx+dr@1e6f98h]
		fxch    st0, st1
		call    __CHP
		fxch    st0, st1
		call    __CHP
		mov     edx, [esp+18h]
		fxch    st0, st1
		fistp   dword [esp+24h]
		fistp   dword [esp+20h]
		fld     dword [edx+dr@1e6f88h]
		mov     edi, [esp+24h]
		mov     esi, [esp+20h]
		call    __CHP
		fistp   dword [esp+20h]
		mov     edx, [esp+20h]
		sub     eax, edi
		sub     edx, esi
		test    eax, eax
		jge     dr@4e862h
		mov     esi, eax
		neg     esi
		jmp     dr@4e864h
dr@4e862h:
		mov     esi, eax
dr@4e864h:
		cmp     esi, byte 14h
		jge     dr@4e8a1h
		test    edx, edx
		jge     dr@4e873h
		mov     esi, edx
		neg     esi
		jmp     dr@4e875h
dr@4e873h:
		mov     esi, edx
dr@4e875h:
		cmp     esi, byte 14h
		jge     dr@4e8a1h
		mov     esi, [dr@243d74h]
;19:0004e880
		mov     edi, [esp+18h]
		add     esi, [edi+dr@1e6ee0h]
		add     esi, eax
		lea     eax, [edx+14h]
		imul    eax, eax, byte 28h
		cmp     byte [esi+eax*1+14h], 3
		jbe     dr@4e8a1h
		mov     dword [esp+4ch], 1
dr@4e8a1h:
		cmp     dword [esp+4ch], byte 1
		jne     dr@4e939h
		mov     eax, [esp+18h]
		fld     dword [eax+dr@1e6fcch]
		fmul    st0, st0
		mov     edx, [esp+60h]
		fld     dword [eax+dr@1e6fd0h]
		fmul    st0, st0
		mov     esi, [edx+dr@1de59ch]
		mov     eax, 400h
		sub     eax, esi
		mov     edx, eax
		shl     eax, 2
		sub     eax, edx
		faddp   st1, st0
		mov     [esp+20h], eax
		fild    dword [esp+20h]
		fmulp   st1, st0
		call    __CHP
		fistp   dword [dr@2438cch]
		cmp     dword [dr@2438cch], 2710h
		jle     dr@4e905h
		mov     dword [dr@2438cch], 2710h
dr@4e905h:
		mov     edx, [esp+60h]
		mov     eax, [dr@2438cch]
		mov     esi, [edx+dr@1de598h]
		sub     esi, eax
		mov     [edx+dr@1de598h], esi
		test    esi, esi
		jge     dr@4e92ah
		mov     eax, edx
		xor     edx, edx
		mov     [eax+dr@1de598h], edx
dr@4e92ah:
		mov     edx, 1eh
		mov     eax, 15h
		call    _settextposition_
dr@4e939h:
		mov     esi, [esp+60h]
		mov     edi, [esp+18h]
		mov     eax, [esp+40h]
		mov     edx, [dr@243cf4h]
		add     esi, 94h
		add     edi, 35eh
		inc     eax
		mov     [esp+60h], esi
		mov     [esp+18h], edi
		mov     [esp+40h], eax
		cmp     eax, edx
		jl      dr@4dd7ah
dr@4e96ch:
		inc     dword [dr@243c60h]
dr@4e972h:
		mov     eax, [dr@243cf4h]
		mov     edi, [dr@243c60h]
		dec     eax
		cmp     eax, edi
;19:0004e980
		jg      dr@4dd4fh
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
db	90h
dr@4e990h:
dd	dr@4eb72h
dd	dr@4ebe0h
dd	dr@4ebfah
dd	dr@4ec14h
		push    44h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 20h
		and     esp, byte 0fffffff8h
		mov     eax, 8
		call    dr@6563ch
		xor     edx, edx
		mov     ebx, [dr@243cf4h]
		mov     [dr@243c60h], edx
		test    ebx, ebx
		jle     dr@4ee91h
dr@4e9d8h:
		mov     edi, [dr@243c60h]
		imul    edx, edi, 35eh
		imul    eax, [dr@243ce8h], 35eh
		fld     dword [edx+dr@1e6f88h]
		fld     dword [edx+dr@1e6f84h]
		fsub    dword [eax+dr@1e6f84h]
;19:0004ea00
		fxch    st0, st1
		fsub    dword [eax+dr@1e6f88h]
		fxch    st0, st1
		call    __CHP
		fistp   dword [esp+4]
		mov     eax, [esp+4]
		imul    eax, eax
		call    __CHP
		fistp   dword [esp]
		mov     ebx, [esp]
		imul    ebx, ebx
		add     eax, ebx
		mov     [esp+8], eax
		fild    dword [esp+8]
		fsqrt   
		call    __CHP
		mov     eax, edi
		mov     edi, [dr@243ce8h]
		fistp   dword [esp+18h]
		cmp     eax, edi
		je      dr@4ec33h
		cmp     dword [edx+dr@1e6ee4h], byte 0
		jne     dr@4ea6ch
		cmp     dword [edx+dr@1e6ee8h], byte 0
		jne     dr@4ea6ch
		cmp     dword [edx+dr@1e6eech], byte 0
		je      dr@4ec33h
dr@4ea6ch:
		imul    eax, [dr@243c60h], 35eh
		fld     dword [eax+dr@1e6fcch]
		fmul    st0, st0
		fld     dword [eax+dr@1e6fd0h]
		fmul    st0, st0
		faddp   st1, st0
		fsqrt   
		fmul    qword [dr@184171h]
		call    __CHP
		fistp   dword [esp+8]
		mov     esi, [esp+8]
		mov     ebx, [esp+18h]
		shl     esi, 7
		add     ebx, 80h
		mov     edx, esi
		mov     eax, esi
		sar     edx, 1fh
		idiv    ebx
		mov     esi, eax
		cmp     eax, dword 10000h
		jle     dr@4eac1h
		mov     esi, 10000h
dr@4eac1h:
		imul    eax, [dr@243c60h], 35eh
		cmp     dword [eax+dr@1e6ee8h], byte 0
		jne     dr@4eaddh
		cmp     dword [eax+dr@1e6eech], byte 0
		je      dr@4eb3eh
dr@4eaddh:
		mov     ebx, 3
		xor     edx, edx
		call    dr@606d9h
		div     ebx
		mov     eax, edx
		cmp     edx, byte 1
		jb      dr@4eafbh
		jbe     dr@4eb15h
		cmp     edx, byte 2
		je      dr@4eb21h
		jmp     dr@4eb3eh
dr@4eafbh:
		test    edx, edx
		jne     dr@4eb3eh
		push    8000h
		mov     edx, 0bh
		mov     eax, 7
		push    21000h
		jmp     dr@4eb35h
dr@4eb15h:
		push    8000h
		mov     edx, 0dh
		jmp     dr@4eb2bh
dr@4eb21h:
		push    8000h
		mov     edx, 10h
dr@4eb2bh:
		mov     eax, 7
		push    23000h
dr@4eb35h:
		mov     ecx, esi
		xor     ebx, ebx
		call    dr@654d4h
dr@4eb3eh:
		call    rand
		mov     edx, eax
		mov     ebx, 6000h
		sar     edx, 1fh
		idiv    ebx
		imul    eax, [dr@243c60h], 35eh
		mov     eax, [eax+dr@1e705eh]
		mov     ecx, edx
		cmp     eax, byte 3
		ja      dr@4ec33h
		jmp     dword [cs:eax*4+dr@4e990h]
dr@4eb72h:
		mov     ebx, 3
		xor     edx, edx
		call    dr@606d9h
		div     ebx
;19:0004eb80
		add     ecx, 22000h
		mov     eax, edx
		cmp     edx, byte 1
		jb      dr@4eb99h
		jbe     dr@4ebb8h
		cmp     edx, byte 2
		je      dr@4ebcch
		jmp     dr@4ec33h
dr@4eb99h:
		test    edx, edx
		jne     dr@4ec33h
		push    8000h
		mov     edx, 0ah
		mov     eax, 7
		push    ecx
		xor     ebx, ebx
		jmp     dr@4ec2ch
dr@4ebb8h:
		push    8000h
		mov     edx, 0fh
		mov     eax, 7
		push    ecx
		xor     ebx, ebx
		jmp     dr@4ec2ch
dr@4ebcch:
		push    8000h
		mov     edx, 10h
		mov     eax, 7
		push    ecx
		xor     ebx, ebx
		jmp     dr@4ec2ch
dr@4ebe0h:
		push    8000h
		mov     eax, 7
		lea     ecx, [edx+22000h]
		xor     ebx, ebx
		push    ecx
		mov     edx, 0bh
		jmp     dr@4ec2ch
dr@4ebfah:
		push    8000h
		mov     eax, 7
		lea     ecx, [edx+22000h]
		xor     ebx, ebx
		push    ecx
		mov     edx, 0fh
		jmp     dr@4ec2ch
dr@4ec14h:
		push    8000h
		mov     eax, 7
		lea     ecx, [edx+22000h]
		xor     ebx, ebx
		push    ecx
		mov     edx, 10h
dr@4ec2ch:
		mov     ecx, esi
		call    dr@654d4h
dr@4ec33h:
		mov     edx, [dr@243ce8h]
		mov     eax, [dr@243c60h]
		cmp     eax, edx
		je      dr@4ee76h
		imul    ecx, eax, 35eh
		fldz    
		xor     edx, edx
		fcomp   dword [ecx+dr@1e6f8ch]
		fnstsw  ax
		sahf    
		jbe     dr@4ec69h
		fld     dword [ecx+dr@1e6f8ch]
		fchs    
		fstp    dword [esp+14h]
		jmp     dr@4ec73h
dr@4ec69h:
		mov     eax, [ecx+dr@1e6f8ch]
		mov     [esp+14h], eax
dr@4ec73h:
		cmp     dword [esp+14h], 41c80000h
		jle     dr@4ecc6h
		imul    edx, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f8ch]
		fnstsw  ax
		sahf    
		jbe     dr@4eca2h
		fld     dword [edx+dr@1e6f8ch]
		fchs    
		fstp    dword [esp+10h]
		jmp     dr@4ecach
dr@4eca2h:
		mov     eax, [edx+dr@1e6f8ch]
		mov     [esp+10h], eax
dr@4ecach:
		fld     dword [esp+10h]
		fmul    dword [dr@184179h]
		call    __CHP
		fistp   dword [esp+8]
		mov     edx, [esp+8]
		shl     edx, 7
dr@4ecc6h:
		imul    ebx, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [ebx+dr@1e6f80h]
		fnstsw  ax
		sahf    
		jae     dr@4ecech
		mov     eax, [dr@243ca8h]
		test    byte [ebx+eax*4+dr@1e6ef0h], 2
		jne     dr@4ed23h
dr@4ecech:
		imul    ecx, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [ecx+dr@1e6f80h]
		fnstsw  ax
;19:0004ed00
		sahf    
		jae     dr@4ed28h
		fld     dword [ecx+dr@1e6f80h]
		fcomp   qword [dr@18417dh]
		fnstsw  ax
		sahf    
		jae     dr@4ed28h
		mov     eax, [dr@243ca8h]
		test    byte [ecx+eax*4+dr@1e6ef0h], 1
		je      dr@4ed28h
dr@4ed23h:
		mov     edx, 10000h
dr@4ed28h:
		mov     ebx, [esp+18h]
		mov     eax, edx
		sar     edx, 1fh
		add     ebx, 80h
		idiv    ebx
		mov     edx, eax
		cmp     eax, dword 10000h
		jle     dr@4ed47h
		mov     edx, 10000h
dr@4ed47h:
		test    edx, edx
		je      dr@4ed8ch
		mov     ebx, [dr@243c60h]
		imul    eax, ebx, 94h
		cmp     dword [eax+dr@1de598h], byte 0
		jle     dr@4ed8ch
		imul    eax, ebx, 35eh
		cmp     dword [eax+dr@1e6fdah], byte 0
		jne     dr@4ed8ch
		push    8000h
		mov     eax, 8
		mov     ecx, edx
		push    28000h
;19:0004ed80
		xor     ebx, ebx
		mov     edx, 25h
		call    dr@654d4h
dr@4ed8ch:
		mov     eax, 800000h
		mov     ebx, [esp+18h]
		mov     edx, eax
		add     ebx, 80h
		sar     edx, 1fh
		idiv    ebx
		mov     ebx, [dr@243c60h]
		mov     edx, eax
		imul    eax, ebx, 94h
		cmp     dword [eax+dr@1de598h], byte 0
		jle     dr@4edc8h
		imul    eax, ebx, 35eh
		cmp     dword [eax+dr@1e6fdah], byte 0
		je      dr@4edd9h
dr@4edc8h:
		mov     al, [dr@243c60h]
		inc     al
		and     eax, 0ffh
		call    dr@6563ch
dr@4edd9h:
		mov     eax, [dr@243c60h]
		imul    ebx, eax, 35eh
		imul    eax, eax, 94h
		fld     dword [ebx+dr@1e6f80h]
		fdiv    dword [eax+dr@1de584h]
		fldz    
		fxch    st0, st1
		fstp    dword [esp+1ch]
		fcomp   dword [esp+1ch]
		fnstsw  ax
		sahf    
		jbe     dr@4ee13h
		fld     dword [esp+1ch]
		fchs    
		fstp    dword [esp+0ch]
		jmp     dr@4ee1bh
dr@4ee13h:
		mov     eax, [esp+1ch]
		mov     [esp+0ch], eax
dr@4ee1bh:
		imul    ebx, [dr@243c60h], 35eh
		mov     eax, [ebx+dr@1e706eh]
		lea     eax, [eax+eax*4]
		mov     [esp+8], eax
		fild    dword [esp+8]
		mov     eax, [ebx+dr@1e706ah]
		fmul    dword [esp+0ch]
		add     eax, 28000h
		mov     [esp+8], eax
		fild    dword [esp+8]
		mov     al, [dr@243c60h]
		faddp   st1, st0
		inc     al
		call    __CHP
		fistp   dword [dr@196df8h]
		mov     ebx, [dr@196df8h]
		mov     ecx, 8000h
		and     eax, 0ffh
		call    dr@655b0h
dr@4ee76h:
		mov     ecx, [dr@243c60h]
		inc     ecx
		mov     esi, [dr@243cf4h]
		mov     [dr@243c60h], ecx
		cmp     ecx, esi
		jl      dr@4e9d8h
dr@4ee91h:
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
dr@184141h: ; 0.7
db	66h,66h,66h,66h,66h,66h,0e6h,3fh
dr@184149h: ; 1.15
db	66h,66h,66h,66h,66h,66h,0f2h,3fh
dr@184151h: ; 1.2
db	33h,33h,33h,33h,33h,33h,0f3h,3fh
dr@184159h: ; 2.0
db	0,0,0,40h
dr@18415dh: ; -2.0
db	0,0,0,0c0h
dr@184161h: ; -0.6
db	33h,33h,33h,33h,33h,33h,0e3h,0bfh
dr@184169h: ; 0.6
db	33h,33h,33h,33h,33h,33h,0e3h,3fh
dr@184171h: ; 25000.0
db	0,0,0,0,0,6ah,0d8h,40h
dr@184179h: ; 2048.0
db	0,0,0,45h
dr@18417dh: ; 2.2
db	9ah,99h,99h,99h,99h,99h,1,40h
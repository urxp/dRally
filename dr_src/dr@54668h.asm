cpu 386

    extern  __CHP
    extern  dr@1843c6h
    extern  dr@243c60h
    extern  dr@243d28h
    extern  dr@1e7016h
    extern  dr@243d60h
    extern  dr@243d58h
    extern  dr@243078h
    extern  dr@243d08h
    extern  dr@1e6fe6h
    extern  dr@1e6feah
    extern  dr@1e6ff6h
    extern  dr@1e6ffah
    extern  dr@1e7006h
    extern  dr@1e700ah
    extern  dr@1e701ah
    extern  dr@1e6fdeh
    extern  dr@1e6fe2h
    extern  dr@1e6feeh
    extern  dr@1e6ff2h
    extern  dr@1e6ffeh
    extern  dr@1e7002h
    extern  dr@1e700eh
    extern  dr@1e7012h
    extern  dr@243cf4h
    extern  __CHK
    extern  dr@1843cah
    extern  dr@1e6f7ch
    extern  dr@184392h
    extern  dr@1843ceh
    extern  dr@18438eh
    extern  dr@1843d6h
    extern  dr@18439ah
    extern  dr@1843a2h
    extern  dr@1e6f84h
    extern  dr@1de598h
    extern  dr@1e6ef0h
    extern  rand
    extern  dr@1e7222h
    extern  dr@242d78h
    extern  dr@1de580h
    extern  dr@1e6f8ch
    extern  dr@1de584h
    extern  dr@1e70b2h
    extern  dr@1e71deh
    extern  dr@1e6f80h
    extern  dr@243ca8h
    extern  dr@1e6f88h
    extern  dr@1843aah
    extern  dr@1843b2h
    extern  dr@1e6fd4h
    extern  dr@243ce8h
    extern  dr@1de5ach
    extern  dr@1843bah
    extern  dr@1843beh
    extern  dr@2438d4h
    extern  dr@1e721ah
    extern  dr@1e712ah
    extern  dr@1e71a2h
    extern  dr@1e70eeh
    extern  dr@1e7166h

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE
global dr@54668h
dr@54668h:
		push    140h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, 124h
;19:00054680
		and     esp, byte 0fffffff8h
		xor     edx, edx
		mov     ebx, [dr@243cf4h]
		mov     [dr@243c60h], edx
		test    ebx, ebx
		jle     dr@55ad5h
dr@54699h:
		mov     ecx, [dr@243c60h]
		imul    edx, ecx, 35eh
		fld     dword [dr@1843cah]
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st1
		fld     qword [dr@184392h]
		fxch    st0, st1
		fmul    st0, st1
		fld     qword [dr@1843ceh]
		fxch    st0, st1
		fdiv    st0, st1
		fsin    
		fld     dword [edx+dr@1e6f7ch]
		fadd    dword [dr@18438eh]
		fadd    st0, st4
		fmul    st0, st3
		fdiv    st0, st2
		fsin    
		fld     dword [edx+dr@1e6f7ch]
		fadd    dword [dr@18438eh]
		faddp   st5, st0
		fxch    st0, st4
		fmul    st0, st3
		fdiv    st0, st2
		fcos    
		fld     dword [edx+dr@1e6f7ch]
		fadd    dword [dr@18438eh]
		fadd    dword [dr@1843d6h]
		fmul    st0, st4
		fdiv    st0, st3
		fsin    
		fld     dword [edx+dr@1e6f7ch]
		fadd    dword [dr@18438eh]
		fadd    dword [dr@1843d6h]
		fmulp   st5, st0
		fxch    st0, st4
		fdivrp  st3, st0
		fxch    st0, st2
		fcos    
		fxch    st0, st1
		fld     qword [dr@18439ah]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st5
		fmul    st0, st1
		fxch    st0, st3
		fld     qword [dr@1843a2h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st5
		fmul    st0, st2
		fxch    st0, st3
		fmulp   st1, st0
		fxch    st0, st4
		fmul    st0, st1
		fxch    st0, st4
		fmulp   st1, st0
		fld     dword [edx+dr@1e6f84h]
		fadd    st5, st0
		faddp   st3, st0
		fld     dword [edx+dr@1e6f84h]
		fxch    st0, st5
		fstp    dword [edx+dr@1e6ffeh]
		fxch    st0, st4
		faddp   st1, st0
		fxch    st0, st1
		fstp    dword [edx+dr@1e6fdeh]
		fld     dword [edx+dr@1e6f88h]
		fxch    st0, st1
		fstp    dword [edx+dr@1e6feeh]
		fld     dword [edx+dr@1e6f88h]
		fxch    st0, st1
		faddp   st2, st0
		faddp   st2, st0
		fstp    dword [edx+dr@1e6fe2h]
		fstp    dword [edx+dr@1e6ff2h]
		fld     dword [edx+dr@1e6f7ch]
		fadd    dword [dr@1843cah]
		fld     qword [dr@184392h]
		fxch    st0, st1
		fmul    st0, st1
		fld     qword [dr@1843ceh]
		fxch    st0, st1
		fdiv    st0, st1
		fcos    
		fld     dword [dr@1843d6h]
		fld     dword [edx+dr@1e6f7ch]
		fadd    st0, st1
		fmul    st0, st4
		fdiv    st0, st3
		fsin    
		fld     dword [edx+dr@1e6f7ch]
		faddp   st2, st0
		fxch    st0, st1
		fmulp   st4, st0
		fxch    st0, st3
		fdivrp  st2, st0
		fxch    st0, st1
		fcos    
		imul    ebx, ecx, 94h
		fxch    st0, st1
		fld     qword [dr@1843a2h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st3
		fld     qword [dr@18439ah]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st3
		fmulp   st2, st0
		fxch    st0, st3
		fmul    st0, st3
		fxch    st0, st1
		fmulp   st3, st0
		mov     edi, [ebx+dr@1de598h]
		fld     dword [edx+dr@1e6f88h]
		fld     dword [edx+dr@1e6f84h]
		faddp   st3, st0
		fld     dword [edx+dr@1e6f88h]
		fxch    st0, st3
		fstp    dword [edx+dr@1e700eh]
		fxch    st0, st2
		faddp   st3, st0
		faddp   st1, st0
		fxch    st0, st1
		fstp    dword [edx+dr@1e7012h]
		fstp    dword [edx+dr@1e7002h]
		test    edi, edi
		jle     dr@548e3h
		fldz    
		fcomp   dword [edx+dr@1e6f80h]
		fnstsw  ax
		sahf    
		jae     dr@548e3h
		fld     dword [ebx+dr@1de584h]
		fmul    qword [dr@1843aah]
		fld     dword [edx+dr@1e6f80h]
		fcompp  
		fnstsw  ax
		sahf    
		jae     dr@548e3h
		mov     eax, [dr@243ca8h]
		test    byte [edx+eax*4+dr@1e6ef0h], 1
		je      dr@548e3h
		call    rand
		mov     [esp+11ch], eax
		fild    dword [esp+11ch]
		fmul    qword [dr@1843b2h]
		fld     dword [edx+dr@1e6fd4h]
		fxch    st0, st1
		fadd    st0, st1
		mov     eax, [dr@243c60h]
		fstp    st1
		fstp    dword [edx+dr@1e6fd4h]
		imul    edx, eax, 35eh
		call    rand
		mov     [esp+11ch], eax
		fild    dword [esp+11ch]
		fmul    qword [dr@1843b2h]
		fsubr   dword [edx+dr@1e6fd4h]
		fstp    dword [edx+dr@1e6fd4h]
dr@548e3h:
		imul    edx, [dr@243c60h], 35eh
		mov     ecx, [edx+dr@1e7222h]
		test    ecx, ecx
		jle     dr@54f11h
		imul    eax, [dr@243ce8h], 94h
		cmp     dword [eax+dr@1de5ach], byte 0
		je      dr@54f11h
		fld     dword [edx+dr@1e6fdeh]
		fld     dword [edx+dr@1e6f80h]
		call    __CHP
		fxch    st0, st1
		fsub    dword [edx+dr@1e6fe6h]
		fxch    st0, st1
		fistp   dword [esp+0f8h]
		fild    dword [esp+0f8h]
		fstp    dword [esp+11ch]
		fdiv    dword [esp+11ch]
		fld     dword [edx+dr@1e6fe2h]
		fsub    dword [edx+dr@1e6feah]
		fdiv    dword [esp+11ch]
		fld     dword [edx+dr@1e6feeh]
		fsub    dword [edx+dr@1e6ff6h]
		fdiv    dword [esp+11ch]
		fld     dword [edx+dr@1e6ff2h]
		fsub    dword [edx+dr@1e6ffah]
		fdiv    dword [esp+11ch]
		fld     dword [edx+dr@1e6ffeh]
		fsub    dword [edx+dr@1e7006h]
		fdiv    dword [esp+11ch]
		fld     dword [edx+dr@1e7002h]
		fsub    dword [edx+dr@1e700ah]
		fdiv    dword [esp+11ch]
		lea     ebx, [ecx-1]
		mov     [edx+dr@1e7222h], ebx
		fxch    st0, st5
		fstp    dword [esp+118h]
		fld     dword [edx+dr@1e700eh]
		fsub    dword [edx+dr@1e7016h]
		fdiv    dword [esp+11ch]
		fld     dword [edx+dr@1e7012h]
		fsub    dword [edx+dr@1e701ah]
		fdiv    dword [esp+11ch]
		xor     ecx, ecx
		mov     esi, [esp+0f8h]
		mov     [dr@243d08h], ecx
		fxch    st0, st5
		fstp    dword [esp+114h]
		fxch    st0, st3
		fstp    dword [esp+110h]
		fxch    st0, st1
		fstp    dword [esp+10ch]
		fstp    dword [esp+108h]
		fxch    st0, st2
		fstp    dword [esp+104h]
		fxch    st0, st1
		fstp    dword [esp+100h]
		fstp    dword [esp+0fch]
		test    esi, esi
		jle     dr@55a49h
		mov     cl, 0fh
dr@54a34h:
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e6feah]
		call    __CHP
		fistp   dword [esp+14h]
		fild    dword [esp+14h]
		fsubr   dword [edx+dr@1e6feah]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@54a75h
		fld1    
		fadd    dword [edx+dr@1e6feah]
		call    __CHP
		fistp   dword [esp+18h]
		jmp     dr@54a7dh
dr@54a75h:
		mov     eax, [esp+14h]
		mov     [esp+18h], eax
dr@54a7dh:
		mov     ebx, [esp+18h]
		imul    ebx, [dr@243d28h]
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e6fe6h]
		call    __CHP
		fistp   dword [esp+0a4h]
		fild    dword [esp+0a4h]
		fsubr   dword [edx+dr@1e6fe6h]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@54ad2h
		fld1    
		fadd    dword [edx+dr@1e6fe6h]
		call    __CHP
		fistp   dword [esp+120h]
		jmp     dr@54ae0h
dr@54ad2h:
		mov     eax, [esp+0a4h]
		mov     [esp+120h], eax
dr@54ae0h:
		mov     eax, [esp+120h]
		mov     edx, [dr@243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     dr@54b3dh
		mov     edx, [dr@243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@242d78h]
		mov     edi, [dr@243d28h]
		mov     [eax+1], dl
		add     eax, edi
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@242d78h]
		mov     [eax+1], dl
dr@54b3dh:
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e6ffah]
		call    __CHP
		fistp   dword [esp+28h]
		fild    dword [esp+28h]
		fsubr   dword [edx+dr@1e6ffah]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@54b7eh
		fld1    
		fadd    dword [edx+dr@1e6ffah]
		call    __CHP
		fistp   dword [esp+2ch]
		jmp     dr@54b86h
dr@54b7eh:
		mov     eax, [esp+28h]
		mov     [esp+2ch], eax
dr@54b86h:
		mov     ebx, [esp+2ch]
		imul    ebx, [dr@243d28h]
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e6ff6h]
		call    __CHP
		fistp   dword [esp+58h]
		fild    dword [esp+58h]
		fsubr   dword [edx+dr@1e6ff6h]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@54bd5h
		fld1    
		fadd    dword [edx+dr@1e6ff6h]
		call    __CHP
		fistp   dword [esp+0b8h]
		jmp     dr@54be0h
dr@54bd5h:
		mov     eax, [esp+58h]
		mov     [esp+0b8h], eax
dr@54be0h:
		mov     eax, [esp+0b8h]
		mov     edx, [dr@243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     dr@54c3dh
		mov     edx, [dr@243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@242d78h]
		mov     edi, [dr@243d28h]
		mov     [eax+1], dl
		add     eax, edi
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@242d78h]
		mov     [eax+1], dl
dr@54c3dh:
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e700ah]
		call    __CHP
		fistp   dword [esp+3ch]
		fild    dword [esp+3ch]
		fsubr   dword [edx+dr@1e700ah]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@54c7eh
		fld1    
		fadd    dword [edx+dr@1e700ah]
		call    __CHP
		fistp   dword [esp+44h]
		jmp     dr@54c86h
dr@54c7eh:
		mov     eax, [esp+3ch]
		mov     [esp+44h], eax
dr@54c86h:
		mov     ebx, [esp+44h]
		imul    ebx, [dr@243d28h]
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e7006h]
		call    __CHP
		fistp   dword [esp+48h]
		fild    dword [esp+48h]
		fsubr   dword [edx+dr@1e7006h]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@54cd2h
		fld1    
		fadd    dword [edx+dr@1e7006h]
		call    __CHP
		fistp   dword [esp+4ch]
		jmp     dr@54cdah
dr@54cd2h:
		mov     eax, [esp+48h]
		mov     [esp+4ch], eax
dr@54cdah:
		mov     eax, [esp+4ch]
		mov     edx, [dr@243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     dr@54d34h
		mov     edx, [dr@243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@242d78h]
		mov     edi, [dr@243d28h]
		mov     [eax+1], dl
		add     eax, edi
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@242d78h]
		mov     [eax+1], dl
dr@54d34h:
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e701ah]
		call    __CHP
		fistp   dword [esp+50h]
		fild    dword [esp+50h]
		fsubr   dword [edx+dr@1e701ah]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@54d78h
		fld1    
		fadd    dword [edx+dr@1e701ah]
		call    __CHP
		fistp   dword [esp+90h]
		jmp     dr@54d83h
dr@54d78h:
		mov     eax, [esp+50h]
		mov     [esp+90h], eax
dr@54d83h:
		mov     ebx, [esp+90h]
		imul    ebx, [dr@243d28h]
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e7016h]
		call    __CHP
		fistp   dword [esp+5ch]
		fild    dword [esp+5ch]
		fsubr   dword [edx+dr@1e7016h]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@54dd2h
		fld1    
		fadd    dword [edx+dr@1e7016h]
		call    __CHP
		fistp   dword [esp+60h]
		jmp     dr@54ddah
dr@54dd2h:
		mov     eax, [esp+5ch]
		mov     [esp+60h], eax
dr@54ddah:
		mov     eax, [esp+60h]
		mov     edx, [dr@243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     dr@54e34h
		mov     edx, [dr@243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@242d78h]
		mov     edi, [dr@243d28h]
		mov     [eax+1], dl
		add     eax, edi
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@242d78h]
		mov     [eax+1], dl
dr@54e34h:
		imul    eax, [dr@243c60h], 35eh
		mov     ebx, [dr@243d08h]
		inc     ebx
		mov     esi, [esp+0f8h]
		mov     [dr@243d08h], ebx
		fld     dword [eax+dr@1e6fe6h]
		fld     dword [eax+dr@1e6feah]
		fld     dword [eax+dr@1e6ff6h]
		fld     dword [eax+dr@1e6ffah]
		fld     dword [eax+dr@1e7006h]
		fld     dword [eax+dr@1e700ah]
		fxch    st0, st5
		fadd    dword [esp+118h]
		fld     dword [eax+dr@1e7016h]
		fxch    st0, st1
		fstp    dword [eax+dr@1e6fe6h]
		fld     dword [eax+dr@1e701ah]
		fxch    st0, st5
		fadd    dword [esp+114h]
		fxch    st0, st4
		fadd    dword [esp+110h]
		fxch    st0, st3
		fadd    dword [esp+10ch]
		fxch    st0, st2
		fadd    dword [esp+108h]
		fxch    st0, st6
		fadd    dword [esp+104h]
		fxch    st0, st1
		fadd    dword [esp+100h]
		fxch    st0, st5
		fadd    dword [esp+0fch]
		fxch    st0, st4
		fstp    dword [eax+dr@1e6feah]
		fxch    st0, st2
		fstp    dword [eax+dr@1e6ff6h]
		fstp    dword [eax+dr@1e6ffah]
		fxch    st0, st3
		fstp    dword [eax+dr@1e7006h]
		fxch    st0, st2
		fstp    dword [eax+dr@1e700ah]
		fstp    dword [eax+dr@1e7016h]
		fstp    dword [eax+dr@1e701ah]
		cmp     ebx, esi
		jge     dr@55a49h
		jmp     dr@54a34h
dr@54f11h:
		imul    edx, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f8ch]
		fnstsw  ax
		sahf    
		jbe     dr@54f36h
		fld     dword [edx+dr@1e6f8ch]
		fchs    
		fstp    dword [esp+64h]
		jmp     dr@54f40h
dr@54f36h:
		mov     eax, [edx+dr@1e6f8ch]
		mov     [esp+64h], eax
dr@54f40h:
		mov     edx, [dr@243c60h]
		imul    eax, edx, 94h
		mov     eax, [eax+dr@1de580h]
		add     eax, byte 0dh
		mov     [esp+11ch], eax
		fild    dword [esp+11ch]
		fcomp   dword [esp+64h]
		fnstsw  ax
		sahf    
		jb      dr@54fe1h
		imul    edx, edx, 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f80h]
		fnstsw  ax
		sahf    
		jae     dr@54f8eh
		mov     eax, [dr@243ca8h]
		test    byte [edx+eax*4+dr@1e6ef0h], 2
		jne     dr@54fe1h
dr@54f8eh:
		mov     ecx, [dr@243c60h]
		imul    edx, ecx, 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f80h]
		fnstsw  ax
		sahf    
		jae     dr@55a49h
		imul    eax, ecx, 94h
		fld     dword [eax+dr@1de584h]
		fmul    qword [dr@1843aah]
		fld     dword [edx+dr@1e6f80h]
		fcompp  
		fnstsw  ax
		sahf    
		jae     dr@55a49h
		mov     eax, [dr@243ca8h]
		test    byte [edx+eax*4+dr@1e6ef0h], 1
		je      dr@55a49h
dr@54fe1h:
		imul    eax, [dr@243c60h], 35eh
		mov     edx, [dr@243ca8h]
		shl     edx, 2
		add     eax, edx
		mov     ch, [eax+dr@1e6ef0h]
		test    ch, 2
		je      dr@5500ah
		test    ch, 40h
		jne     dr@55a49h
dr@5500ah:
		mov     edx, [dr@243ce8h]
		cmp     edx, [dr@243c60h]
		jne     dr@55144h
		imul    edx, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f8ch]
		fnstsw  ax
		sahf    
		jbe     dr@55041h
		fld     dword [edx+dr@1e6f8ch]
		fchs    
		fstp    dword [esp+68h]
		jmp     dr@5504bh
dr@55041h:
		mov     eax, [edx+dr@1e6f8ch]
		mov     [esp+68h], eax
dr@5504bh:
		mov     ecx, [dr@243c60h]
		imul    eax, ecx, 94h
		mov     eax, [eax+dr@1de580h]
		add     eax, byte 0dh
		mov     [esp+11ch], eax
		fild    dword [esp+11ch]
		fcomp   dword [esp+68h]
		fnstsw  ax
		sahf    
		jae     dr@550b7h
		imul    edx, ecx, 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f8ch]
		fnstsw  ax
		sahf    
		jbe     dr@55098h
		fld     dword [edx+dr@1e6f8ch]
		fchs    
		fstp    dword [esp+6ch]
		jmp     dr@550a2h
dr@55098h:
		mov     eax, [edx+dr@1e6f8ch]
		mov     [esp+6ch], eax
dr@550a2h:
		fld     dword [esp+6ch]
		fmul    dword [dr@1843bah]
		call    __CHP
		fistp   dword [dr@2438d4h]
dr@550b7h:
		cmp     dword [dr@2438d4h], 10000h
		jle     dr@550cdh
		mov     dword [dr@2438d4h], 10000h
dr@550cdh:
		imul    edx, [dr@243c60h], 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f80h]
		fnstsw  ax
		sahf    
		jae     dr@550f3h
		mov     eax, [dr@243ca8h]
		test    byte [edx+eax*4+dr@1e6ef0h], 2
		jne     dr@5513ah
dr@550f3h:
		mov     ecx, [dr@243c60h]
		imul    edx, ecx, 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f80h]
		fnstsw  ax
		sahf    
		jae     dr@55144h
		imul    eax, ecx, 94h
		fld     dword [eax+dr@1de584h]
		fmul    qword [dr@1843beh]
		fld     dword [edx+dr@1e6f80h]
		fcompp  
		fnstsw  ax
		sahf    
		jae     dr@55144h
		mov     eax, [dr@243ca8h]
		test    byte [edx+eax*4+dr@1e6ef0h], 1
		je      dr@55144h
dr@5513ah:
		mov     dword [dr@2438d4h], 10000h
dr@55144h:
		imul    esi, [dr@243c60h], 35eh
		fld     dword [esi+dr@1e6fdeh]
		fld     dword [esi+dr@1e6f80h]
		call    __CHP
		fxch    st0, st1
		fsub    dword [esi+dr@1e6fe6h]
		fxch    st0, st1
		fistp   dword [esp+10h]
		fild    dword [esp+10h]
		fstp    dword [esp+11ch]
		fdiv    dword [esp+11ch]
		fld     dword [esi+dr@1e6fe2h]
		fsub    dword [esi+dr@1e6feah]
		fdiv    dword [esp+11ch]
		fld     dword [esi+dr@1e6feeh]
		fsub    dword [esi+dr@1e6ff6h]
		fdiv    dword [esp+11ch]
		fld     dword [esi+dr@1e6ff2h]
		fsub    dword [esi+dr@1e6ffah]
		fdiv    dword [esp+11ch]
		fld     dword [esi+dr@1e6ffeh]
		fsub    dword [esi+dr@1e7006h]
		fdiv    dword [esp+11ch]
		fld     dword [esi+dr@1e7002h]
		fsub    dword [esi+dr@1e700ah]
		fdiv    dword [esp+11ch]
		fxch    st0, st5
		fstp    dword [esp+24h]
		fld     dword [esi+dr@1e700eh]
		fsub    dword [esi+dr@1e7016h]
		fdiv    dword [esp+11ch]
		fld     dword [esi+dr@1e7012h]
		fsub    dword [esi+dr@1e701ah]
		fdiv    dword [esp+11ch]
		mov     edx, [esi+dr@1e721ah]
		inc     edx
		mov     [esi+dr@1e721ah], edx
		fxch    st0, st5
		fstp    dword [esp+34h]
		fxch    st0, st3
		fstp    dword [esp+20h]
		fxch    st0, st1
		fstp    dword [esp+54h]
		fstp    dword [esp+30h]
		fxch    st0, st2
		fstp    dword [esp+40h]
		fxch    st0, st1
		fstp    dword [esp+1ch]
		fstp    dword [esp+8]
		cmp     edx, byte 6
		jne     dr@554c7h
		mov     [esp+0dch], esi
		mov     [esp+0e0h], esi
		mov     [esp+0e4h], esi
		mov     [esp+0e8h], esi
		mov     edx, esi
		mov     [esp+0ech], esi
		mov     [esp+0f0h], esi
		mov     ebx, esi
		xor     ecx, ecx
		mov     [esp+0f4h], esi
		mov     [esp+38h], ecx
		mov     [esp+0ch], ecx
dr@55285h:
		cmp     dword [esp+38h], byte 0
		jne     dr@554b5h
		cmp     dword [esp+0ch], byte 0
		jne     dr@554b5h
		cmp     dword [edx+dr@1e70b2h], byte 0
		jne     dr@55376h
		mov     dword [edx+dr@1e70b2h], 1
		mov     eax, [esp+0e8h]
		fld     dword [eax+dr@1e6ffeh]
		call    __CHP
		fistp   dword [esp+70h]
		fild    dword [esp+70h]
		fsubr   dword [eax+dr@1e6ffeh]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@552f7h
		mov     eax, [esp+0e8h]
		fld1    
		fadd    dword [eax+dr@1e6ffeh]
		call    __CHP
		fistp   dword [esp+74h]
		jmp     dr@552ffh
dr@552f7h:
		mov     eax, [esp+70h]
		mov     [esp+74h], eax
dr@552ffh:
		mov     edi, [esp+0ech]
		mov     eax, [esp+74h]
		mov     [edi+dr@1e712ah], eax
		mov     eax, [esp+0e4h]
		fld     dword [eax+dr@1e7002h]
		call    __CHP
		fistp   dword [esp+78h]
		fild    dword [esp+78h]
		fsubr   dword [eax+dr@1e7002h]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@55355h
		mov     eax, [esp+0e4h]
		fld1    
		fadd    dword [eax+dr@1e7002h]
		call    __CHP
		fistp   dword [esp+7ch]
		jmp     dr@5535dh
dr@55355h:
		mov     eax, [esp+78h]
		mov     [esp+7ch], eax
dr@5535dh:
		mov     edi, [esp+0f0h]
		mov     eax, [esp+7ch]
		mov     [edi+dr@1e71a2h], eax
		mov     dword [esp+38h], 1
dr@55376h:
		cmp     dword [ebx+dr@1e70eeh], byte 0
		jne     dr@5546fh
		mov     edi, 1
		mov     eax, [esp+0e0h]
		mov     [ebx+dr@1e70eeh], edi
		fld     dword [eax+dr@1e700eh]
		call    __CHP
		fistp   dword [esp+80h]
		fild    dword [esp+80h]
		fsubr   dword [eax+dr@1e700eh]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@553dch
		mov     eax, [esp+0e0h]
		fld1    
		fadd    dword [eax+dr@1e700eh]
		call    __CHP
		fistp   dword [esp+84h]
		jmp     dr@553eah
dr@553dch:
		mov     eax, [esp+80h]
		mov     [esp+84h], eax
dr@553eah:
		mov     edi, [esp+0f4h]
		mov     eax, [esp+84h]
		mov     [edi+dr@1e7166h], eax
		mov     eax, [esp+0dch]
		fld     dword [eax+dr@1e7012h]
		call    __CHP
		fistp   dword [esp+88h]
		fild    dword [esp+88h]
		fsubr   dword [eax+dr@1e7012h]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@5544ch
		mov     eax, [esp+0dch]
		fld1    
		fadd    dword [eax+dr@1e7012h]
		call    __CHP
		fistp   dword [esp+8ch]
		jmp     dr@5545ah
dr@5544ch:
		mov     eax, [esp+88h]
		mov     [esp+8ch], eax
dr@5545ah:
		mov     eax, [esp+8ch]
		mov     [esi+dr@1e71deh], eax
		mov     dword [esp+0ch], 1
dr@5546fh:
		mov     edi, [esp+0ech]
		mov     eax, [esp+0f0h]
		add     ebx, byte 4
;19:00055480
		add     esi, byte 4
		inc     ecx
		add     edi, byte 4
		add     edx, byte 4
		mov     [esp+0ech], edi
		mov     edi, [esp+0f4h]
		add     eax, byte 4
		add     edi, byte 4
		mov     [esp+0f0h], eax
		mov     [esp+0f4h], edi
		cmp     ecx, byte 0fh
		jl      dr@55285h
dr@554b5h:
		imul    eax, [dr@243c60h], 35eh
		xor     ebx, ebx
		mov     [eax+dr@1e721ah], ebx
dr@554c7h:
		xor     ecx, ecx
		mov     esi, [esp+10h]
		mov     [dr@243d08h], ecx
		test    esi, esi
		jle     dr@55a49h
		mov     cl, 0fh
dr@554ddh:
		mov     edi, [dr@243c60h]
		imul    edx, edi, 35eh
		fldz    
		fcomp   dword [edx+dr@1e6f80h]
		fnstsw  ax
		sahf    
		ja      dr@55528h
		imul    eax, edi, 94h
		fld     dword [eax+dr@1de584h]
		fmul    qword [dr@1843beh]
		fld     dword [edx+dr@1e6f80h]
		fcompp  
		fnstsw  ax
		sahf    
		ja      dr@55528h
		mov     eax, [dr@243ca8h]
		test    byte [edx+eax*4+dr@1e6ef0h], 1
		jne     dr@5575ah
dr@55528h:
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e6feah]
		call    __CHP
		fistp   dword [esp+94h]
		fild    dword [esp+94h]
		fsubr   dword [edx+dr@1e6feah]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@55572h
		fld1    
		fadd    dword [edx+dr@1e6feah]
		call    __CHP
		fistp   dword [esp+98h]
		jmp     dr@55580h
dr@55572h:
		mov     eax, [esp+94h]
		mov     [esp+98h], eax
;19:00055580
dr@55580h:
		imul    edx, [dr@243c60h], 35eh
		mov     ebx, [esp+98h]
		imul    ebx, [dr@243d28h]
		fld     dword [edx+dr@1e6fe6h]
		call    __CHP
		fistp   dword [esp+9ch]
		fild    dword [esp+9ch]
		fsubr   dword [edx+dr@1e6fe6h]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@555d8h
		fld1    
		fadd    dword [edx+dr@1e6fe6h]
		call    __CHP
		fistp   dword [esp+0a0h]
		jmp     dr@555e6h
dr@555d8h:
		mov     eax, [esp+9ch]
		mov     [esp+0a0h], eax
dr@555e6h:
		mov     eax, [esp+0a0h]
		mov     edx, [dr@243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     dr@55641h
		mov     edx, [dr@243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@243078h]
		mov     [eax+1], dl
		add     eax, [dr@243d28h]
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@243078h]
		mov     [eax+1], dl
dr@55641h:
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e6ffah]
		call    __CHP
		fistp   dword [esp+0a8h]
		fild    dword [esp+0a8h]
		fsubr   dword [edx+dr@1e6ffah]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@5568bh
		fld1    
		fadd    dword [edx+dr@1e6ffah]
		call    __CHP
		fistp   dword [esp+0ach]
		jmp     dr@55699h
dr@5568bh:
		mov     eax, [esp+0a8h]
		mov     [esp+0ach], eax
dr@55699h:
		imul    edx, [dr@243c60h], 35eh
		mov     ebx, [esp+0ach]
		imul    ebx, [dr@243d28h]
		fld     dword [edx+dr@1e6ff6h]
		call    __CHP
		fistp   dword [esp+0b0h]
		fild    dword [esp+0b0h]
		fsubr   dword [edx+dr@1e6ff6h]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@556f1h
		fld1    
		fadd    dword [edx+dr@1e6ff6h]
		call    __CHP
		fistp   dword [esp+0b4h]
		jmp     dr@556ffh
dr@556f1h:
		mov     eax, [esp+0b0h]
		mov     [esp+0b4h], eax
dr@556ffh:
		mov     eax, [esp+0b4h]
		mov     edx, [dr@243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     dr@5575ah
		mov     edx, [dr@243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@243078h]
		mov     [eax+1], dl
		add     eax, [dr@243d28h]
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@243078h]
		mov     [eax+1], dl
dr@5575ah:
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e700ah]
		call    __CHP
		fistp   dword [esp+0bch]
		fild    dword [esp+0bch]
		fsubr   dword [edx+dr@1e700ah]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@557a4h
		fld1    
		fadd    dword [edx+dr@1e700ah]
		call    __CHP
		fistp   dword [esp+0c0h]
		jmp     dr@557b2h
dr@557a4h:
		mov     eax, [esp+0bch]
		mov     [esp+0c0h], eax
dr@557b2h:
		imul    edx, [dr@243c60h], 35eh
		mov     ebx, [esp+0c0h]
		imul    ebx, [dr@243d28h]
		fld     dword [edx+dr@1e7006h]
		call    __CHP
		fistp   dword [esp+0c4h]
		fild    dword [esp+0c4h]
		fsubr   dword [edx+dr@1e7006h]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@5580ah
		fld1    
		fadd    dword [edx+dr@1e7006h]
		call    __CHP
		fistp   dword [esp+0c8h]
		jmp     dr@55818h
dr@5580ah:
		mov     eax, [esp+0c4h]
		mov     [esp+0c8h], eax
dr@55818h:
		mov     eax, [esp+0c8h]
		mov     edx, [dr@243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     dr@55873h
		mov     edx, [dr@243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@243078h]
		mov     [eax+1], dl
		add     eax, [dr@243d28h]
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@243078h]
		mov     [eax+1], dl
dr@55873h:
		imul    edx, [dr@243c60h], 35eh
		fld     dword [edx+dr@1e701ah]
		call    __CHP
		fistp   dword [esp+0cch]
		fild    dword [esp+0cch]
		fsubr   dword [edx+dr@1e701ah]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@558bdh
		fld1    
		fadd    dword [edx+dr@1e701ah]
		call    __CHP
		fistp   dword [esp+0d0h]
		jmp     dr@558cbh
dr@558bdh:
		mov     eax, [esp+0cch]
		mov     [esp+0d0h], eax
dr@558cbh:
		imul    edx, [dr@243c60h], 35eh
		mov     ebx, [esp+0d0h]
		imul    ebx, [dr@243d28h]
		fld     dword [edx+dr@1e7016h]
		call    __CHP
		fistp   dword [esp+0d4h]
		fild    dword [esp+0d4h]
		fsubr   dword [edx+dr@1e7016h]
		fcomp   dword [dr@1843c6h]
		fnstsw  ax
		sahf    
		jb      dr@55923h
		fld1    
		fadd    dword [edx+dr@1e7016h]
		call    __CHP
		fistp   dword [esp+0d8h]
		jmp     dr@55931h
dr@55923h:
		mov     eax, [esp+0d4h]
		mov     [esp+0d8h], eax
dr@55931h:
		mov     eax, [esp+0d8h]
		mov     edx, [dr@243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     dr@5598ch
		mov     edx, [dr@243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+dr@243078h]
		mov     [eax+1], dl
		add     eax, [dr@243d28h]
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+dr@243078h]
		mov     [eax], dl
		xor     edx, edx
;19:00055980
		mov     dl, [eax+1]
		mov     dl, [edx+dr@243078h]
		mov     [eax+1], dl
dr@5598ch:
		imul    eax, [dr@243c60h], 35eh
		mov     esi, [dr@243d08h]
		inc     esi
		mov     edi, [esp+10h]
		mov     [dr@243d08h], esi
		fld     dword [eax+dr@1e6fe6h]
		fld     dword [eax+dr@1e6feah]
		fld     dword [eax+dr@1e6ff6h]
		fld     dword [eax+dr@1e6ffah]
		fld     dword [eax+dr@1e7006h]
		fld     dword [eax+dr@1e700ah]
		fxch    st0, st5
		fadd    dword [esp+24h]
		fld     dword [eax+dr@1e7016h]
		fxch    st0, st1
		fstp    dword [eax+dr@1e6fe6h]
		fld     dword [eax+dr@1e701ah]
		fxch    st0, st5
		fadd    dword [esp+34h]
		fxch    st0, st4
		fadd    dword [esp+20h]
		fxch    st0, st3
		fadd    dword [esp+54h]
		fxch    st0, st2
		fadd    dword [esp+30h]
		fxch    st0, st6
		fadd    dword [esp+40h]
		fxch    st0, st1
		fadd    dword [esp+1ch]
		fxch    st0, st5
		fadd    dword [esp+8]
		fxch    st0, st4
		fstp    dword [eax+dr@1e6feah]
		fxch    st0, st2
		fstp    dword [eax+dr@1e6ff6h]
		fstp    dword [eax+dr@1e6ffah]
		fxch    st0, st3
		fstp    dword [eax+dr@1e7006h]
		fxch    st0, st2
		fstp    dword [eax+dr@1e700ah]
		fstp    dword [eax+dr@1e7016h]
		fstp    dword [eax+dr@1e701ah]
		cmp     esi, edi
		jl      dr@554ddh
dr@55a49h:
		mov     edi, [dr@243c60h]
		imul    eax, edi, 35eh
		fld     dword [eax+dr@1e6fdeh]
		fld     dword [eax+dr@1e6fe2h]
		fld     dword [eax+dr@1e6feeh]
		fld     dword [eax+dr@1e6ff2h]
		fld     dword [eax+dr@1e6ffeh]
		fld     dword [eax+dr@1e7002h]
		fld     dword [eax+dr@1e700eh]
		fxch    st0, st6
		fstp    dword [eax+dr@1e6fe6h]
		fld     dword [eax+dr@1e7012h]
		fxch    st0, st5
		fstp    dword [eax+dr@1e6feah]
		fxch    st0, st3
		fstp    dword [eax+dr@1e6ff6h]
		fxch    st0, st1
		fstp    dword [eax+dr@1e6ffah]
		fstp    dword [eax+dr@1e7006h]
		fstp    dword [eax+dr@1e700ah]
		fxch    st0, st1
		fstp    dword [eax+dr@1e7016h]
		fstp    dword [eax+dr@1e701ah]
		lea     eax, [edi+1]
		mov     edx, [dr@243cf4h]
		mov     [dr@243c60h], eax
		cmp     eax, edx
		jl      dr@54699h
dr@55ad5h:
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
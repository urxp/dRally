cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243cf4h
	extern	___243c60h
	extern	___1843cah
	extern	___1e6f7ch
	extern	___184392h
	extern	___1843ceh
	extern	___18438eh
	extern	___1843d6h
	extern	___18439ah
	extern	___1843a2h
	extern	___1e6f84h
	extern	___1e6ffeh
	extern	___1e6fdeh
	extern	___1e6f88h
	extern	___1e6feeh
	extern	___1e6fe2h
	extern	___1e6ff2h
	extern	___1de598h
	extern	___1e700eh
	extern	___1e7012h
	extern	___1e7002h
	extern	___1e6f80h
	extern	___1de584h
	extern	___1843aah
	extern	___243ca8h
	extern	___1e6ef0h
	extern	rand_
	extern	___1843b2h
	extern	___1e6fd4h
	extern	___1e7222h
	extern	___243ce8h
	extern	___1de5ach
	extern	__CHP
	extern	___1e6fe6h
	extern	___1e6feah
	extern	___1e6ff6h
	extern	___1e6ffah
	extern	___1e7006h
	extern	___1e700ah
	extern	___1e7016h
	extern	___1e701ah
	extern	___243d08h
	extern	___1843c6h
	extern	___243d28h
	extern	___243d60h
	extern	___243d58h
	extern	___242d78h
	extern	___1e6f8ch
	extern	___1de580h
	extern	___1843bah
	extern	___2438d4h
	extern	___1843beh
	extern	___1e721ah
	extern	___1e70b2h
	extern	___1e712ah
	extern	___1e71a2h
	extern	___1e70eeh
	extern	___1e7166h
	extern	___1e71deh
	extern	___243078h

section .text

__GDECL(___54668h)
		push    140h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, 124h
		and     esp, byte 0fffffff8h
		xor     edx, edx
		mov     ebx, [___243cf4h]
		mov     [___243c60h], edx
		test    ebx, ebx
		jle     near ___55ad5h
___54699h:
		mov     ecx, [___243c60h]
		imul    edx, ecx, 35eh
		fld     dword [___1843cah]
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st1
		fld     qword [___184392h]
		fxch    st0, st1
		fmul    st0, st1
		fld     qword [___1843ceh]
		fxch    st0, st1
		fdiv    st0, st1
		fsin    
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___18438eh]
		fadd    st0, st4
		fmul    st0, st3
		fdiv    st0, st2
		fsin    
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___18438eh]
		faddp   st5, st0
		fxch    st0, st4
		fmul    st0, st3
		fdiv    st0, st2
		fcos    
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___18438eh]
		fadd    dword [___1843d6h]
		fmul    st0, st4
		fdiv    st0, st3
		fsin    
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___18438eh]
		fadd    dword [___1843d6h]
		fmulp   st5, st0
		fxch    st0, st4
		fdivrp  st3, st0
		fxch    st0, st2
		fcos    
		fxch    st0, st1
		fld     qword [___18439ah]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st5
		fmul    st0, st1
		fxch    st0, st3
		fld     qword [___1843a2h]
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
		fld     dword [edx+___1e6f84h]
		fadd    st5, st0
		faddp   st3, st0
		fld     dword [edx+___1e6f84h]
		fxch    st0, st5
		fstp    dword [edx+___1e6ffeh]
		fxch    st0, st4
		faddp   st1, st0
		fxch    st0, st1
		fstp    dword [edx+___1e6fdeh]
		fld     dword [edx+___1e6f88h]
		fxch    st0, st1
		fstp    dword [edx+___1e6feeh]
		fld     dword [edx+___1e6f88h]
		fxch    st0, st1
		faddp   st2, st0
		faddp   st2, st0
		fstp    dword [edx+___1e6fe2h]
		fstp    dword [edx+___1e6ff2h]
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1843cah]
		fld     qword [___184392h]
		fxch    st0, st1
		fmul    st0, st1
		fld     qword [___1843ceh]
		fxch    st0, st1
		fdiv    st0, st1
		fcos    
		fld     dword [___1843d6h]
		fld     dword [edx+___1e6f7ch]
		fadd    st0, st1
		fmul    st0, st4
		fdiv    st0, st3
		fsin    
		fld     dword [edx+___1e6f7ch]
		faddp   st2, st0
		fxch    st0, st1
		fmulp   st4, st0
		fxch    st0, st3
		fdivrp  st2, st0
		fxch    st0, st1
		fcos    
		imul    ebx, ecx, 94h
		fxch    st0, st1
		fld     qword [___1843a2h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st3
		fld     qword [___18439ah]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st3
		fmulp   st2, st0
		fxch    st0, st3
		fmul    st0, st3
		fxch    st0, st1
		fmulp   st3, st0
		mov     edi, [ebx+___1de598h]
		fld     dword [edx+___1e6f88h]
		fld     dword [edx+___1e6f84h]
		faddp   st3, st0
		fld     dword [edx+___1e6f88h]
		fxch    st0, st3
		fstp    dword [edx+___1e700eh]
		fxch    st0, st2
		faddp   st3, st0
		faddp   st1, st0
		fxch    st0, st1
		fstp    dword [edx+___1e7012h]
		fstp    dword [edx+___1e7002h]
		test    edi, edi
		jle     near ___548e3h
		fldz    
		fcomp   dword [edx+___1e6f80h]
		fnstsw  ax
		sahf    
		jae     near ___548e3h
		fld     dword [ebx+___1de584h]
		fmul    qword [___1843aah]
		fld     dword [edx+___1e6f80h]
		fcompp  
		fnstsw  ax
		sahf    
		jae     short ___548e3h
		mov     eax, [___243ca8h]
		test    byte [edx+eax*4+___1e6ef0h], 1
		je      short ___548e3h
		call    near rand_
		mov     [esp+11ch], eax
		fild    dword [esp+11ch]
		fmul    qword [___1843b2h]
		fld     dword [edx+___1e6fd4h]
		fxch    st0, st1
		fadd    st0, st1
		mov     eax, [___243c60h]
		fstp    st1
		fstp    dword [edx+___1e6fd4h]
		imul    edx, eax, 35eh
		call    near rand_
		mov     [esp+11ch], eax
		fild    dword [esp+11ch]
		fmul    qword [___1843b2h]
		fsubr   dword [edx+___1e6fd4h]
		fstp    dword [edx+___1e6fd4h]
___548e3h:
		imul    edx, [___243c60h], 35eh
		mov     ecx, [edx+___1e7222h]
		test    ecx, ecx
		jle     near ___54f11h
		imul    eax, [___243ce8h], 94h
		cmp     dword [eax+___1de5ach], byte 0
		je      near ___54f11h
		fld     dword [edx+___1e6fdeh]
		fld     dword [edx+___1e6f80h]
		call    near __CHP
		fxch    st0, st1
		fsub    dword [edx+___1e6fe6h]
		fxch    st0, st1
		fistp   dword [esp+0f8h]
		fild    dword [esp+0f8h]
		fstp    dword [esp+11ch]
		fdiv    dword [esp+11ch]
		fld     dword [edx+___1e6fe2h]
		fsub    dword [edx+___1e6feah]
		fdiv    dword [esp+11ch]
		fld     dword [edx+___1e6feeh]
		fsub    dword [edx+___1e6ff6h]
		fdiv    dword [esp+11ch]
		fld     dword [edx+___1e6ff2h]
		fsub    dword [edx+___1e6ffah]
		fdiv    dword [esp+11ch]
		fld     dword [edx+___1e6ffeh]
		fsub    dword [edx+___1e7006h]
		fdiv    dword [esp+11ch]
		fld     dword [edx+___1e7002h]
		fsub    dword [edx+___1e700ah]
		fdiv    dword [esp+11ch]
		lea     ebx, [ecx-1]
		mov     [edx+___1e7222h], ebx
		fxch    st0, st5
		fstp    dword [esp+118h]
		fld     dword [edx+___1e700eh]
		fsub    dword [edx+___1e7016h]
		fdiv    dword [esp+11ch]
		fld     dword [edx+___1e7012h]
		fsub    dword [edx+___1e701ah]
		fdiv    dword [esp+11ch]
		xor     ecx, ecx
		mov     esi, [esp+0f8h]
		mov     [___243d08h], ecx
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
		jle     near ___55a49h
		mov     cl, 0fh
___54a34h:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e6feah]
		call    near __CHP
		fistp   dword [esp+14h]
		fild    dword [esp+14h]
		fsubr   dword [edx+___1e6feah]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___54a75h
		fld1    
		fadd    dword [edx+___1e6feah]
		call    near __CHP
		fistp   dword [esp+18h]
		jmp     short ___54a7dh
___54a75h:
		mov     eax, [esp+14h]
		mov     [esp+18h], eax
___54a7dh:
		mov     ebx, [esp+18h]
		imul    ebx, [___243d28h]
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e6fe6h]
		call    near __CHP
		fistp   dword [esp+0a4h]
		fild    dword [esp+0a4h]
		fsubr   dword [edx+___1e6fe6h]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___54ad2h
		fld1    
		fadd    dword [edx+___1e6fe6h]
		call    near __CHP
		fistp   dword [esp+120h]
		jmp     short ___54ae0h
___54ad2h:
		mov     eax, [esp+0a4h]
		mov     [esp+120h], eax
___54ae0h:
		mov     eax, [esp+120h]
		mov     edx, [___243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     short ___54b3dh
		mov     edx, [___243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___242d78h]
		mov     edi, [___243d28h]
		mov     [eax+1], dl
		add     eax, edi
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___242d78h]
		mov     [eax+1], dl
___54b3dh:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e6ffah]
		call    near __CHP
		fistp   dword [esp+28h]
		fild    dword [esp+28h]
		fsubr   dword [edx+___1e6ffah]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___54b7eh
		fld1    
		fadd    dword [edx+___1e6ffah]
		call    near __CHP
		fistp   dword [esp+2ch]
		jmp     short ___54b86h
___54b7eh:
		mov     eax, [esp+28h]
		mov     [esp+2ch], eax
___54b86h:
		mov     ebx, [esp+2ch]
		imul    ebx, [___243d28h]
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e6ff6h]
		call    near __CHP
		fistp   dword [esp+58h]
		fild    dword [esp+58h]
		fsubr   dword [edx+___1e6ff6h]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___54bd5h
		fld1    
		fadd    dword [edx+___1e6ff6h]
		call    near __CHP
		fistp   dword [esp+0b8h]
		jmp     short ___54be0h
___54bd5h:
		mov     eax, [esp+58h]
		mov     [esp+0b8h], eax
___54be0h:
		mov     eax, [esp+0b8h]
		mov     edx, [___243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     short ___54c3dh
		mov     edx, [___243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___242d78h]
		mov     edi, [___243d28h]
		mov     [eax+1], dl
		add     eax, edi
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___242d78h]
		mov     [eax+1], dl
___54c3dh:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e700ah]
		call    near __CHP
		fistp   dword [esp+3ch]
		fild    dword [esp+3ch]
		fsubr   dword [edx+___1e700ah]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___54c7eh
		fld1    
		fadd    dword [edx+___1e700ah]
		call    near __CHP
		fistp   dword [esp+44h]
		jmp     short ___54c86h
___54c7eh:
		mov     eax, [esp+3ch]
		mov     [esp+44h], eax
___54c86h:
		mov     ebx, [esp+44h]
		imul    ebx, [___243d28h]
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e7006h]
		call    near __CHP
		fistp   dword [esp+48h]
		fild    dword [esp+48h]
		fsubr   dword [edx+___1e7006h]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___54cd2h
		fld1    
		fadd    dword [edx+___1e7006h]
		call    near __CHP
		fistp   dword [esp+4ch]
		jmp     short ___54cdah
___54cd2h:
		mov     eax, [esp+48h]
		mov     [esp+4ch], eax
___54cdah:
		mov     eax, [esp+4ch]
		mov     edx, [___243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     short ___54d34h
		mov     edx, [___243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___242d78h]
		mov     edi, [___243d28h]
		mov     [eax+1], dl
		add     eax, edi
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___242d78h]
		mov     [eax+1], dl
___54d34h:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e701ah]
		call    near __CHP
		fistp   dword [esp+50h]
		fild    dword [esp+50h]
		fsubr   dword [edx+___1e701ah]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___54d78h
		fld1    
		fadd    dword [edx+___1e701ah]
		call    near __CHP
		fistp   dword [esp+90h]
		jmp     short ___54d83h
___54d78h:
		mov     eax, [esp+50h]
		mov     [esp+90h], eax
___54d83h:
		mov     ebx, [esp+90h]
		imul    ebx, [___243d28h]
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e7016h]
		call    near __CHP
		fistp   dword [esp+5ch]
		fild    dword [esp+5ch]
		fsubr   dword [edx+___1e7016h]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___54dd2h
		fld1    
		fadd    dword [edx+___1e7016h]
		call    near __CHP
		fistp   dword [esp+60h]
		jmp     short ___54ddah
___54dd2h:
		mov     eax, [esp+5ch]
		mov     [esp+60h], eax
___54ddah:
		mov     eax, [esp+60h]
		mov     edx, [___243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     short ___54e34h
		mov     edx, [___243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___242d78h]
		mov     edi, [___243d28h]
		mov     [eax+1], dl
		add     eax, edi
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___242d78h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___242d78h]
		mov     [eax+1], dl
___54e34h:
		imul    eax, [___243c60h], 35eh
		mov     ebx, [___243d08h]
		inc     ebx
		mov     esi, [esp+0f8h]
		mov     [___243d08h], ebx
		fld     dword [eax+___1e6fe6h]
		fld     dword [eax+___1e6feah]
		fld     dword [eax+___1e6ff6h]
		fld     dword [eax+___1e6ffah]
		fld     dword [eax+___1e7006h]
		fld     dword [eax+___1e700ah]
		fxch    st0, st5
		fadd    dword [esp+118h]
		fld     dword [eax+___1e7016h]
		fxch    st0, st1
		fstp    dword [eax+___1e6fe6h]
		fld     dword [eax+___1e701ah]
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
		fstp    dword [eax+___1e6feah]
		fxch    st0, st2
		fstp    dword [eax+___1e6ff6h]
		fstp    dword [eax+___1e6ffah]
		fxch    st0, st3
		fstp    dword [eax+___1e7006h]
		fxch    st0, st2
		fstp    dword [eax+___1e700ah]
		fstp    dword [eax+___1e7016h]
		fstp    dword [eax+___1e701ah]
		cmp     ebx, esi
		jge     near ___55a49h
		jmp     near ___54a34h
___54f11h:
		imul    edx, [___243c60h], 35eh
		fldz    
		fcomp   dword [edx+___1e6f8ch]
		fnstsw  ax
		sahf    
		jbe     short ___54f36h
		fld     dword [edx+___1e6f8ch]
		fchs    
		fstp    dword [esp+64h]
		jmp     short ___54f40h
___54f36h:
		mov     eax, [edx+___1e6f8ch]
		mov     [esp+64h], eax
___54f40h:
		mov     edx, [___243c60h]
		imul    eax, edx, 94h
		mov     eax, [eax+___1de580h]
		add     eax, byte 0dh
		mov     [esp+11ch], eax
		fild    dword [esp+11ch]
		fcomp   dword [esp+64h]
		fnstsw  ax
		sahf    
		jb      short ___54fe1h
		imul    edx, edx, 35eh
		fldz    
		fcomp   dword [edx+___1e6f80h]
		fnstsw  ax
		sahf    
		jae     short ___54f8eh
		mov     eax, [___243ca8h]
		test    byte [edx+eax*4+___1e6ef0h], 2
		jne     short ___54fe1h
___54f8eh:
		mov     ecx, [___243c60h]
		imul    edx, ecx, 35eh
		fldz    
		fcomp   dword [edx+___1e6f80h]
		fnstsw  ax
		sahf    
		jae     near ___55a49h
		imul    eax, ecx, 94h
		fld     dword [eax+___1de584h]
		fmul    qword [___1843aah]
		fld     dword [edx+___1e6f80h]
		fcompp  
		fnstsw  ax
		sahf    
		jae     near ___55a49h
		mov     eax, [___243ca8h]
		test    byte [edx+eax*4+___1e6ef0h], 1
		je      near ___55a49h
___54fe1h:
		imul    eax, [___243c60h], 35eh
		mov     edx, [___243ca8h]
		shl     edx, 2
		add     eax, edx
		mov     ch, [eax+___1e6ef0h]
		test    ch, 2
		je      short ___5500ah
		test    ch, 40h
		jne     near ___55a49h
___5500ah:
		mov     edx, [___243ce8h]
		cmp     edx, [___243c60h]
		jne     near ___55144h
		imul    edx, [___243c60h], 35eh
		fldz    
		fcomp   dword [edx+___1e6f8ch]
		fnstsw  ax
		sahf    
		jbe     short ___55041h
		fld     dword [edx+___1e6f8ch]
		fchs    
		fstp    dword [esp+68h]
		jmp     short ___5504bh
___55041h:
		mov     eax, [edx+___1e6f8ch]
		mov     [esp+68h], eax
___5504bh:
		mov     ecx, [___243c60h]
		imul    eax, ecx, 94h
		mov     eax, [eax+___1de580h]
		add     eax, byte 0dh
		mov     [esp+11ch], eax
		fild    dword [esp+11ch]
		fcomp   dword [esp+68h]
		fnstsw  ax
		sahf    
		jae     short ___550b7h
		imul    edx, ecx, 35eh
		fldz    
		fcomp   dword [edx+___1e6f8ch]
		fnstsw  ax
		sahf    
		jbe     short ___55098h
		fld     dword [edx+___1e6f8ch]
		fchs    
		fstp    dword [esp+6ch]
		jmp     short ___550a2h
___55098h:
		mov     eax, [edx+___1e6f8ch]
		mov     [esp+6ch], eax
___550a2h:
		fld     dword [esp+6ch]
		fmul    dword [___1843bah]
		call    near __CHP
		fistp   dword [___2438d4h]
___550b7h:
		cmp     dword [___2438d4h], 10000h
		jle     short ___550cdh
		mov     dword [___2438d4h], 10000h
___550cdh:
		imul    edx, [___243c60h], 35eh
		fldz    
		fcomp   dword [edx+___1e6f80h]
		fnstsw  ax
		sahf    
		jae     short ___550f3h
		mov     eax, [___243ca8h]
		test    byte [edx+eax*4+___1e6ef0h], 2
		jne     short ___5513ah
___550f3h:
		mov     ecx, [___243c60h]
		imul    edx, ecx, 35eh
		fldz    
		fcomp   dword [edx+___1e6f80h]
		fnstsw  ax
		sahf    
		jae     short ___55144h
		imul    eax, ecx, 94h
		fld     dword [eax+___1de584h]
		fmul    qword [___1843beh]
		fld     dword [edx+___1e6f80h]
		fcompp  
		fnstsw  ax
		sahf    
		jae     short ___55144h
		mov     eax, [___243ca8h]
		test    byte [edx+eax*4+___1e6ef0h], 1
		je      short ___55144h
___5513ah:
		mov     dword [___2438d4h], 10000h
___55144h:
		imul    esi, [___243c60h], 35eh
		fld     dword [esi+___1e6fdeh]
		fld     dword [esi+___1e6f80h]
		call    near __CHP
		fxch    st0, st1
		fsub    dword [esi+___1e6fe6h]
		fxch    st0, st1
		fistp   dword [esp+10h]
		fild    dword [esp+10h]
		fstp    dword [esp+11ch]
		fdiv    dword [esp+11ch]
		fld     dword [esi+___1e6fe2h]
		fsub    dword [esi+___1e6feah]
		fdiv    dword [esp+11ch]
		fld     dword [esi+___1e6feeh]
		fsub    dword [esi+___1e6ff6h]
		fdiv    dword [esp+11ch]
		fld     dword [esi+___1e6ff2h]
		fsub    dword [esi+___1e6ffah]
		fdiv    dword [esp+11ch]
		fld     dword [esi+___1e6ffeh]
		fsub    dword [esi+___1e7006h]
		fdiv    dword [esp+11ch]
		fld     dword [esi+___1e7002h]
		fsub    dword [esi+___1e700ah]
		fdiv    dword [esp+11ch]
		fxch    st0, st5
		fstp    dword [esp+24h]
		fld     dword [esi+___1e700eh]
		fsub    dword [esi+___1e7016h]
		fdiv    dword [esp+11ch]
		fld     dword [esi+___1e7012h]
		fsub    dword [esi+___1e701ah]
		fdiv    dword [esp+11ch]
		mov     edx, [esi+___1e721ah]
		inc     edx
		mov     [esi+___1e721ah], edx
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
		jne     near ___554c7h
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
___55285h:
		cmp     dword [esp+38h], byte 0
		jne     near ___554b5h
		cmp     dword [esp+0ch], byte 0
		jne     near ___554b5h
		cmp     dword [edx+___1e70b2h], byte 0
		jne     near ___55376h
		mov     dword [edx+___1e70b2h], 1
		mov     eax, [esp+0e8h]
		fld     dword [eax+___1e6ffeh]
		call    near __CHP
		fistp   dword [esp+70h]
		fild    dword [esp+70h]
		fsubr   dword [eax+___1e6ffeh]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___552f7h
		mov     eax, [esp+0e8h]
		fld1    
		fadd    dword [eax+___1e6ffeh]
		call    near __CHP
		fistp   dword [esp+74h]
		jmp     short ___552ffh
___552f7h:
		mov     eax, [esp+70h]
		mov     [esp+74h], eax
___552ffh:
		mov     edi, [esp+0ech]
		mov     eax, [esp+74h]
		mov     [edi+___1e712ah], eax
		mov     eax, [esp+0e4h]
		fld     dword [eax+___1e7002h]
		call    near __CHP
		fistp   dword [esp+78h]
		fild    dword [esp+78h]
		fsubr   dword [eax+___1e7002h]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___55355h
		mov     eax, [esp+0e4h]
		fld1    
		fadd    dword [eax+___1e7002h]
		call    near __CHP
		fistp   dword [esp+7ch]
		jmp     short ___5535dh
___55355h:
		mov     eax, [esp+78h]
		mov     [esp+7ch], eax
___5535dh:
		mov     edi, [esp+0f0h]
		mov     eax, [esp+7ch]
		mov     [edi+___1e71a2h], eax
		mov     dword [esp+38h], 1
___55376h:
		cmp     dword [ebx+___1e70eeh], byte 0
		jne     near ___5546fh
		mov     edi, 1
		mov     eax, [esp+0e0h]
		mov     [ebx+___1e70eeh], edi
		fld     dword [eax+___1e700eh]
		call    near __CHP
		fistp   dword [esp+80h]
		fild    dword [esp+80h]
		fsubr   dword [eax+___1e700eh]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___553dch
		mov     eax, [esp+0e0h]
		fld1    
		fadd    dword [eax+___1e700eh]
		call    near __CHP
		fistp   dword [esp+84h]
		jmp     short ___553eah
___553dch:
		mov     eax, [esp+80h]
		mov     [esp+84h], eax
___553eah:
		mov     edi, [esp+0f4h]
		mov     eax, [esp+84h]
		mov     [edi+___1e7166h], eax
		mov     eax, [esp+0dch]
		fld     dword [eax+___1e7012h]
		call    near __CHP
		fistp   dword [esp+88h]
		fild    dword [esp+88h]
		fsubr   dword [eax+___1e7012h]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___5544ch
		mov     eax, [esp+0dch]
		fld1    
		fadd    dword [eax+___1e7012h]
		call    near __CHP
		fistp   dword [esp+8ch]
		jmp     short ___5545ah
___5544ch:
		mov     eax, [esp+88h]
		mov     [esp+8ch], eax
___5545ah:
		mov     eax, [esp+8ch]
		mov     [esi+___1e71deh], eax
		mov     dword [esp+0ch], 1
___5546fh:
		mov     edi, [esp+0ech]
		mov     eax, [esp+0f0h]
		add     ebx, byte 4
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
		jl      near ___55285h
___554b5h:
		imul    eax, [___243c60h], 35eh
		xor     ebx, ebx
		mov     [eax+___1e721ah], ebx
___554c7h:
		xor     ecx, ecx
		mov     esi, [esp+10h]
		mov     [___243d08h], ecx
		test    esi, esi
		jle     near ___55a49h
		mov     cl, 0fh
___554ddh:
		mov     edi, [___243c60h]
		imul    edx, edi, 35eh
		fldz    
		fcomp   dword [edx+___1e6f80h]
		fnstsw  ax
		sahf    
		ja      short ___55528h
		imul    eax, edi, 94h
		fld     dword [eax+___1de584h]
		fmul    qword [___1843beh]
		fld     dword [edx+___1e6f80h]
		fcompp  
		fnstsw  ax
		sahf    
		ja      short ___55528h
		mov     eax, [___243ca8h]
		test    byte [edx+eax*4+___1e6ef0h], 1
		jne     near ___5575ah
___55528h:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e6feah]
		call    near __CHP
		fistp   dword [esp+94h]
		fild    dword [esp+94h]
		fsubr   dword [edx+___1e6feah]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___55572h
		fld1    
		fadd    dword [edx+___1e6feah]
		call    near __CHP
		fistp   dword [esp+98h]
		jmp     short ___55580h
___55572h:
		mov     eax, [esp+94h]
		mov     [esp+98h], eax
___55580h:
		imul    edx, [___243c60h], 35eh
		mov     ebx, [esp+98h]
		imul    ebx, [___243d28h]
		fld     dword [edx+___1e6fe6h]
		call    near __CHP
		fistp   dword [esp+9ch]
		fild    dword [esp+9ch]
		fsubr   dword [edx+___1e6fe6h]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___555d8h
		fld1    
		fadd    dword [edx+___1e6fe6h]
		call    near __CHP
		fistp   dword [esp+0a0h]
		jmp     short ___555e6h
___555d8h:
		mov     eax, [esp+9ch]
		mov     [esp+0a0h], eax
___555e6h:
		mov     eax, [esp+0a0h]
		mov     edx, [___243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     short ___55641h
		mov     edx, [___243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___243078h]
		mov     [eax+1], dl
		add     eax, [___243d28h]
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___243078h]
		mov     [eax+1], dl
___55641h:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e6ffah]
		call    near __CHP
		fistp   dword [esp+0a8h]
		fild    dword [esp+0a8h]
		fsubr   dword [edx+___1e6ffah]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___5568bh
		fld1    
		fadd    dword [edx+___1e6ffah]
		call    near __CHP
		fistp   dword [esp+0ach]
		jmp     short ___55699h
___5568bh:
		mov     eax, [esp+0a8h]
		mov     [esp+0ach], eax
___55699h:
		imul    edx, [___243c60h], 35eh
		mov     ebx, [esp+0ach]
		imul    ebx, [___243d28h]
		fld     dword [edx+___1e6ff6h]
		call    near __CHP
		fistp   dword [esp+0b0h]
		fild    dword [esp+0b0h]
		fsubr   dword [edx+___1e6ff6h]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___556f1h
		fld1    
		fadd    dword [edx+___1e6ff6h]
		call    near __CHP
		fistp   dword [esp+0b4h]
		jmp     short ___556ffh
___556f1h:
		mov     eax, [esp+0b0h]
		mov     [esp+0b4h], eax
___556ffh:
		mov     eax, [esp+0b4h]
		mov     edx, [___243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     short ___5575ah
		mov     edx, [___243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___243078h]
		mov     [eax+1], dl
		add     eax, [___243d28h]
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___243078h]
		mov     [eax+1], dl
___5575ah:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e700ah]
		call    near __CHP
		fistp   dword [esp+0bch]
		fild    dword [esp+0bch]
		fsubr   dword [edx+___1e700ah]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___557a4h
		fld1    
		fadd    dword [edx+___1e700ah]
		call    near __CHP
		fistp   dword [esp+0c0h]
		jmp     short ___557b2h
___557a4h:
		mov     eax, [esp+0bch]
		mov     [esp+0c0h], eax
___557b2h:
		imul    edx, [___243c60h], 35eh
		mov     ebx, [esp+0c0h]
		imul    ebx, [___243d28h]
		fld     dword [edx+___1e7006h]
		call    near __CHP
		fistp   dword [esp+0c4h]
		fild    dword [esp+0c4h]
		fsubr   dword [edx+___1e7006h]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___5580ah
		fld1    
		fadd    dword [edx+___1e7006h]
		call    near __CHP
		fistp   dword [esp+0c8h]
		jmp     short ___55818h
___5580ah:
		mov     eax, [esp+0c4h]
		mov     [esp+0c8h], eax
___55818h:
		mov     eax, [esp+0c8h]
		mov     edx, [___243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     short ___55873h
		mov     edx, [___243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___243078h]
		mov     [eax+1], dl
		add     eax, [___243d28h]
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___243078h]
		mov     [eax+1], dl
___55873h:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e701ah]
		call    near __CHP
		fistp   dword [esp+0cch]
		fild    dword [esp+0cch]
		fsubr   dword [edx+___1e701ah]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___558bdh
		fld1    
		fadd    dword [edx+___1e701ah]
		call    near __CHP
		fistp   dword [esp+0d0h]
		jmp     short ___558cbh
___558bdh:
		mov     eax, [esp+0cch]
		mov     [esp+0d0h], eax
___558cbh:
		imul    edx, [___243c60h], 35eh
		mov     ebx, [esp+0d0h]
		imul    ebx, [___243d28h]
		fld     dword [edx+___1e7016h]
		call    near __CHP
		fistp   dword [esp+0d4h]
		fild    dword [esp+0d4h]
		fsubr   dword [edx+___1e7016h]
		fcomp   dword [___1843c6h]
		fnstsw  ax
		sahf    
		jb      short ___55923h
		fld1    
		fadd    dword [edx+___1e7016h]
		call    near __CHP
		fistp   dword [esp+0d8h]
		jmp     short ___55931h
___55923h:
		mov     eax, [esp+0d4h]
		mov     [esp+0d8h], eax
___55931h:
		mov     eax, [esp+0d8h]
		mov     edx, [___243d60h]
		add     eax, ebx
		mov     dl, [edx+eax*1]
		and     dl, cl
		cmp     dl, 0fh
		jne     short ___5598ch
		mov     edx, [___243d58h]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___243078h]
		mov     [eax+1], dl
		add     eax, [___243d28h]
		xor     edx, edx
		mov     dl, [eax]
		mov     dl, [edx+___243078h]
		mov     [eax], dl
		xor     edx, edx
		mov     dl, [eax+1]
		mov     dl, [edx+___243078h]
		mov     [eax+1], dl
___5598ch:
		imul    eax, [___243c60h], 35eh
		mov     esi, [___243d08h]
		inc     esi
		mov     edi, [esp+10h]
		mov     [___243d08h], esi
		fld     dword [eax+___1e6fe6h]
		fld     dword [eax+___1e6feah]
		fld     dword [eax+___1e6ff6h]
		fld     dword [eax+___1e6ffah]
		fld     dword [eax+___1e7006h]
		fld     dword [eax+___1e700ah]
		fxch    st0, st5
		fadd    dword [esp+24h]
		fld     dword [eax+___1e7016h]
		fxch    st0, st1
		fstp    dword [eax+___1e6fe6h]
		fld     dword [eax+___1e701ah]
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
		fstp    dword [eax+___1e6feah]
		fxch    st0, st2
		fstp    dword [eax+___1e6ff6h]
		fstp    dword [eax+___1e6ffah]
		fxch    st0, st3
		fstp    dword [eax+___1e7006h]
		fxch    st0, st2
		fstp    dword [eax+___1e700ah]
		fstp    dword [eax+___1e7016h]
		fstp    dword [eax+___1e701ah]
		cmp     esi, edi
		jl      near ___554ddh
___55a49h:
		mov     edi, [___243c60h]
		imul    eax, edi, 35eh
		fld     dword [eax+___1e6fdeh]
		fld     dword [eax+___1e6fe2h]
		fld     dword [eax+___1e6feeh]
		fld     dword [eax+___1e6ff2h]
		fld     dword [eax+___1e6ffeh]
		fld     dword [eax+___1e7002h]
		fld     dword [eax+___1e700eh]
		fxch    st0, st6
		fstp    dword [eax+___1e6fe6h]
		fld     dword [eax+___1e7012h]
		fxch    st0, st5
		fstp    dword [eax+___1e6feah]
		fxch    st0, st3
		fstp    dword [eax+___1e6ff6h]
		fxch    st0, st1
		fstp    dword [eax+___1e6ffah]
		fstp    dword [eax+___1e7006h]
		fstp    dword [eax+___1e700ah]
		fxch    st0, st1
		fstp    dword [eax+___1e7016h]
		fstp    dword [eax+___1e701ah]
		lea     eax, [edi+1]
		mov     edx, [___243cf4h]
		mov     [___243c60h], eax
		cmp     eax, edx
		jl      near ___54699h
___55ad5h:
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

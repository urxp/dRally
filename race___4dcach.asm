cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243cf4h
	extern	___243c60h
	extern	___184149h
	extern	___1e6fcch
	extern	___1e6fd0h
	extern	___1e6fd4h
	extern	___184151h
	extern	___1e6c6eh
	extern	___1e6c72h
	extern	___1e6c76h
	extern	___1e6f88h
	extern	___1e6f84h
	extern	__CHP
	extern	___243d74h
	extern	___1e6ee0h
	extern	___1e7042h
	extern	___1e7046h
	extern	___1e7022h
	extern	___1e701eh
	extern	___184141h
	extern	___1e702ah
	extern	___1e6ee8h
	extern	___1e702eh
	extern	___1e6eech
	extern	___1e6f7ch
	extern	___18415dh
	extern	___184159h
	extern	___184169h
	extern	___184161h
	extern	___1de5a4h
	extern	___1e6fdah
	extern	___1e6f9ch
	extern	___1e6fa0h
	extern	___1e6f94h
	extern	___1e6f98h
	extern	___1de59ch
	extern	___2438cch
	extern	___1de598h
	extern	_settextposition_

section .text

__GDECL(race___4dcach)
		push    0f0h
		call    near __CHK
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
		mov     esi, [___243cf4h]
		mov     [___243c60h], edx
		test    esi, esi
		jle     short ___4dd43h
		fld     qword [___184149h]
		xor     eax, eax
		imul    edx, esi, 35eh
___4dce7h:
		fld     dword [eax+___1e6fcch]
		fld     st0
		fdiv    st0, st2
		fld     dword [eax+___1e6fd0h]
		fld     st0
		fdiv    st0, st4
		fld     dword [eax+___1e6fd4h]
		fld     st0
		fdiv    qword [___184151h]
		mov     edi, [___243c60h]
		inc     edi
		add     eax, 35eh
		mov     [___243c60h], edi
		fxch    st0, st4
		fstp    st5
		fxch    st0, st1
		fstp    st2
		fxch    st0, st2
		fstp    st2
		fxch    st0, st2
		fstp    dword [eax+___1e6c6eh]
		fxch    st0, st1
		fstp    dword [eax+___1e6c72h]
		fstp    dword [eax+___1e6c76h]
		cmp     eax, edx
		jl      short ___4dce7h
		fstp    st0
___4dd43h:
		xor     eax, eax
		mov     [___243c60h], eax
		jmp     near ___4e972h
___4dd4fh:
		lea     eax, [edi+1]
		mov     edx, [___243cf4h]
		mov     [esp+40h], eax
		cmp     eax, edx
		jge     near ___4e96ch
		mov     edx, eax
		imul    eax, eax, 94h
		mov     [esp+60h], eax
		imul    eax, edx, 35eh
		mov     [esp+18h], eax
___4dd7ah:
		imul    eax, [___243c60h], 35eh
		mov     edx, [esp+18h]
		fld     dword [edx+___1e6f88h]
		fld     dword [edx+___1e6f84h]
		fsub    dword [eax+___1e6f84h]
		fxch    st0, st1
		fsub    dword [eax+___1e6f88h]
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+68h]
		mov     edi, [esp+68h]
		fistp   dword [esp+64h]
		cmp     edi, byte 27h
		jge     near ___4e939h
		mov     eax, [esp+64h]
		cmp     eax, byte 27h
		jge     near ___4e939h
		cmp     edi, byte 0ffffffd9h
		jle     near ___4e939h
		cmp     eax, byte 0ffffffd9h
		jle     near ___4e939h
		test    edi, edi
		jl      short ___4ddfah
		mov     eax, 28h
		mov     ebx, edi
		xor     ecx, ecx
		mov     [esp+0b8h], eax
___4ddfah:
		mov     edx, [esp+68h]
		test    edx, edx
		jge     short ___4de12h
		lea     eax, [edx+28h]
		xor     ebx, ebx
		mov     ecx, edx
		mov     [esp+0b8h], eax
		neg     ecx
___4de12h:
		mov     esi, [esp+64h]
		test    esi, esi
		jl      short ___4de32h
		mov     edi, 28h
		mov     eax, esi
		mov     [esp+78h], esi
		xor     eax, esi
		mov     [esp+0c8h], edi
		mov     [esp+74h], eax
___4de32h:
		mov     edx, [esp+64h]
		test    edx, edx
		jge     short ___4de56h
		lea     eax, [edx+28h]
		xor     esi, esi
		mov     [esp+0c8h], eax
		mov     edi, edx
		mov     [esp+74h], edx
		neg     edi
		mov     [esp+78h], esi
		mov     [esp+74h], edi
___4de56h:
		mov     edx, [esp+0c8h]
		xor     eax, eax
		mov     [esp+70h], ecx
		mov     [esp+94h], eax
		mov     eax, [esp+78h]
		mov     [esp+88h], ebx
		cmp     eax, edx
		jge     near ___4e00ah
		mov     eax, [esp+18h]
		mov     ebx, [___243c60h]
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
___4decch:
		mov     edi, [esp+0b8h]
		mov     ebx, [esp+88h]
		mov     ecx, [esp+70h]
		cmp     ebx, edi
		jge     near ___4dfb4h
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
___4df1eh:
		mov     edx, [___243d74h]
		mov     edi, [esp+8ch]
		mov     [esp+0bch], edx
		add     edx, [edi+___1e6ee0h]
		mov     edi, [esp+0b4h]
		add     edx, ebx
		add     edi, edx
		cmp     byte [edi], 3
		jbe     short ___4dfa1h
		mov     edi, [esp+90h]
		mov     edx, [esp+0bch]
		add     edx, [edi+___1e6ee0h]
		mov     edi, [esp+0ach]
		add     edx, ecx
		add     edi, edx
		cmp     byte [edi], 3
		jbe     short ___4dfa1h
		mov     dword [esp+94h], 1
		mov     edx, [esp+0b0h]
		mov     [esp+98h], eax
		mov     [esp+0a4h], edx
		mov     edx, [esp+0a8h]
		mov     [esp+0a0h], esi
		mov     [esp+9ch], edx
___4dfa1h:
		mov     edx, [esp+0b8h]
		inc     eax
		inc     ebx
		inc     esi
		inc     ecx
		cmp     ebx, edx
		jl      near ___4df1eh
___4dfb4h:
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
		jl      near ___4decch
___4e00ah:
		cmp     dword [esp+94h], byte 1
		jne     near ___4e939h
		imul    edx, [___243c60h], 35eh
		mov     eax, [esp+98h]
		mov     [edx+___1e7042h], eax
		mov     eax, [esp+0a4h]
		mov     esi, [esp+18h]
		mov     [edx+___1e7046h], eax
		mov     eax, [esp+0a0h]
		mov     [esi+___1e7042h], eax
		mov     eax, [esp+9ch]
		mov     [esi+___1e7046h], eax
		mov     eax, esi
		fld     dword [eax+___1e6f84h]
		fld     dword [eax+___1e6f88h]
		mov     eax, [esp+98h]
		mov     [esp+20h], eax
		neg     eax
		mov     [esp+20h], eax
		fsub    dword [esi+___1e7022h]
		fild    dword [esp+20h]
		fmul    st0, st1
		fld     dword [edx+___1e6f88h]
		fld     dword [edx+___1e6f84h]
		fsub    dword [edx+___1e701eh]
		fxch    st0, st1
		fsub    dword [edx+___1e7022h]
		fxch    st0, st4
		fsub    dword [esi+___1e701eh]
		fld     st0
		fsub    st0, st2
		fxch    st0, st4
		fsub    st0, st5
		fxch    st0, st4
		fld     qword [___184141h]
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
		fld     dword [edx+___1e6fcch]
		fstp    qword [esp+8]
		fxch    st0, st4
		fadd    qword [esp+8]
		mov     edi, [esp+98h]
		fstp    qword [esp+8]
		fld     dword [edx+___1e6fd0h]
		fxch    st0, st4
		fadd    st0, st4
		fxch    st0, st1
		faddp   st3, st0
		fstp    st3
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+28h]
		fld     qword [esp+8]
		fstp    dword [edx+___1e6fcch]
		faddp   st2, st0
		fstp    dword [edx+___1e6fd0h]
		call    near __CHP
		fistp   dword [esp+2ch]
		test    edi, edi
		jle     short ___4e158h
		fldz    
		fcomp   dword [edx+___1e702ah]
		fnstsw  ax
		sahf    
		jb      short ___4e179h
___4e158h:
		cmp     dword [esp+98h], byte 0
		jge     short ___4e18fh
		imul    eax, [___243c60h], 35eh
		fldz    
		fcomp   dword [eax+___1e702ah]
		fnstsw  ax
		sahf    
		jbe     short ___4e18fh
___4e179h:
		imul    eax, [___243c60h], 35eh
		mov     dword [eax+___1e6ee8h], 1
		jmp     short ___4e1a3h
___4e18fh:
		imul    eax, [___243c60h], 35eh
		mov     dword [eax+___1e6ee8h], 2
___4e1a3h:
		cmp     dword [esp+0a4h], byte 0
		jle     short ___4e1c4h
		imul    eax, [___243c60h], 35eh
		fldz    
		fcomp   dword [eax+___1e702eh]
		fnstsw  ax
		sahf    
		jb      short ___4e1e5h
___4e1c4h:
		cmp     dword [esp+0a4h], byte 0
		jge     short ___4e1fbh
		imul    eax, [___243c60h], 35eh
		fldz    
		fcomp   dword [eax+___1e702eh]
		fnstsw  ax
		sahf    
		jbe     short ___4e1fbh
___4e1e5h:
		imul    eax, [___243c60h], 35eh
		mov     dword [eax+___1e6eech], 1
		jmp     short ___4e20fh
___4e1fbh:
		imul    eax, [___243c60h], 35eh
		mov     dword [eax+___1e6eech], 2
___4e20fh:
		imul    eax, [___243c60h], 35eh
		mov     edx, [esp+18h]
		fld     dword [edx+___1e6f84h]
		fld     dword [eax+___1e6f88h]
		fld     dword [eax+___1e6f84h]
		fsub    dword [eax+___1e701eh]
		fxch    st0, st1
		fsub    dword [eax+___1e7022h]
		mov     eax, edx
		fxch    st0, st2
		fsub    dword [edx+___1e701eh]
		fld     dword [eax+___1e6f88h]
		fxch    st0, st1
		fsubr   st0, st2
		fxch    st0, st1
		fsub    dword [edx+___1e7022h]
		fxch    st0, st1
		fstp    st2
		fsubr   st0, st2
		fxch    st0, st1
		fld     qword [___184141h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fstp    st3
		fmulp   st2, st0
		fld     dword [edx+___1e6fcch]
		fxch    st0, st1
		fadd    st0, st1
		mov     edi, [esp+0a0h]
		fstp    st1
		fld     dword [edx+___1e6fd0h]
		fxch    st0, st2
		fadd    st0, st2
		fxch    st0, st1
		fstp    dword [edx+___1e6fcch]
		fstp    st1
		fstp    dword [edx+___1e6fd0h]
		test    edi, edi
		jle     short ___4e2afh
		fldz    
		fcomp   dword [edx+___1e702ah]
		fnstsw  ax
		sahf    
		jb      short ___4e2cah
___4e2afh:
		cmp     dword [esp+0a0h], byte 0
		jge     short ___4e2dah
		mov     eax, [esp+18h]
		fldz    
		fcomp   dword [eax+___1e702ah]
		fnstsw  ax
		sahf    
		jbe     short ___4e2dah
___4e2cah:
		mov     eax, [esp+18h]
		mov     dword [eax+___1e6ee8h], 1
		jmp     short ___4e2e8h
___4e2dah:
		mov     eax, [esp+18h]
		mov     dword [eax+___1e6ee8h], 2
___4e2e8h:
		cmp     dword [esp+9ch], byte 0
		jle     short ___4e303h
		mov     eax, [esp+18h]
		fldz    
		fcomp   dword [eax+___1e702eh]
		fnstsw  ax
		sahf    
		jb      short ___4e31eh
___4e303h:
		cmp     dword [esp+9ch], byte 0
		jge     short ___4e32eh
		mov     eax, [esp+18h]
		fldz    
		fcomp   dword [eax+___1e702eh]
		fnstsw  ax
		sahf    
		jbe     short ___4e32eh
___4e31eh:
		mov     eax, [esp+18h]
		mov     dword [eax+___1e6eech], 1
		jmp     short ___4e33ch
___4e32eh:
		mov     eax, [esp+18h]
		mov     dword [eax+___1e6eech], 2
___4e33ch:
		imul    eax, [___243c60h], 35eh
		mov     edx, [eax+___1e6ee8h]
		cmp     edx, byte 1
		jne     short ___4e35dh
		mov     eax, [esp+18h]
		cmp     edx, [eax+___1e6ee8h]
		je      short ___4e386h
___4e35dh:
		imul    eax, [___243c60h], 35eh
		mov     edx, [eax+___1e6eech]
		cmp     edx, byte 1
		jne     near ___4e52ah
		mov     eax, [esp+18h]
		cmp     edx, [eax+___1e6eech]
		jne     near ___4e52ah
___4e386h:
		imul    edx, [___243c60h], 35eh
		mov     eax, [esp+18h]
		fld     dword [edx+___1e6f7ch]
		fcomp   dword [eax+___1e6f7ch]
		fnstsw  ax
		sahf    
		jbe     short ___4e412h
		mov     eax, [esp+18h]
		fld     dword [edx+___1e6f7ch]
		fsub    dword [eax+___1e6f7ch]
		fldz    
		fxch    st0, st1
		fstp    dword [esp+54h]
		fcomp   dword [esp+54h]
		fnstsw  ax
		sahf    
		jbe     short ___4e3d2h
		fld     dword [esp+54h]
		fchs    
		fstp    dword [esp+3ch]
		jmp     short ___4e3dah
___4e3d2h:
		mov     eax, [esp+54h]
		mov     [esp+3ch], eax
___4e3dah:
		cmp     dword [esp+3ch], 42c80000h
		jge     short ___4e412h
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6fd4h]
		fadd    dword [___18415dh]
		fstp    dword [eax+___1e6fd4h]
		mov     eax, [esp+18h]
		fld     dword [eax+___1e6fd4h]
		fadd    dword [___184159h]
		jmp     short ___4e43eh
___4e412h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6fd4h]
		fadd    dword [___184159h]
		fstp    dword [eax+___1e6fd4h]
		mov     eax, [esp+18h]
		fld     dword [eax+___1e6fd4h]
		fadd    dword [___18415dh]
___4e43eh:
		fstp    dword [eax+___1e6fd4h]
		imul    edx, [___243c60h], 35eh
		mov     eax, [esp+18h]
		fld     dword [edx+___1e6f84h]
		fcomp   dword [eax+___1e6f84h]
		fnstsw  ax
		sahf    
		jb      short ___4e48bh
		fld     dword [edx+___1e6f84h]
		fld     st0
		fadd    qword [___184169h]
		mov     eax, [esp+18h]
		fstp    st1
		fstp    dword [edx+___1e6f84h]
		fld     dword [eax+___1e6f84h]
		fadd    qword [___184161h]
		jmp     short ___4e4b1h
___4e48bh:
		fld     dword [edx+___1e6f84h]
		fadd    qword [___184161h]
		mov     eax, [esp+18h]
		fstp    dword [edx+___1e6f84h]
		fld     dword [eax+___1e6f84h]
		fld     st0
		fadd    qword [___184169h]
		fstp    st1
___4e4b1h:
		fstp    dword [eax+___1e6f84h]
		imul    edx, [___243c60h], 35eh
		mov     eax, [esp+18h]
		fld     dword [edx+___1e6f88h]
		fcomp   dword [eax+___1e6f88h]
		fnstsw  ax
		sahf    
		jb      short ___4e4feh
		fld     dword [edx+___1e6f88h]
		fld     st0
		fadd    qword [___184169h]
		mov     eax, [esp+18h]
		fstp    st1
		fstp    dword [edx+___1e6f88h]
		fld     dword [eax+___1e6f88h]
		fadd    qword [___184161h]
		jmp     short ___4e524h
___4e4feh:
		fld     dword [edx+___1e6f88h]
		fadd    qword [___184161h]
		mov     eax, [esp+18h]
		fstp    dword [edx+___1e6f88h]
		fld     dword [eax+___1e6f88h]
		fld     st0
		fadd    qword [___184169h]
		fstp    st1
___4e524h:
		fstp    dword [eax+___1e6f88h]
___4e52ah:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f7ch]
		mov     eax, [esp+18h]
		fsub    dword [eax+___1e6f7ch]
		fldz    
		fxch    st0, st1
		fstp    dword [esp+48h]
		fcomp   dword [esp+48h]
		fnstsw  ax
		sahf    
		jbe     short ___4e561h
		fld     dword [esp+48h]
		fchs    
		fstp    dword [esp+30h]
		jmp     short ___4e569h
___4e561h:
		mov     eax, [esp+48h]
		mov     [esp+30h], eax
___4e569h:
		cmp     dword [esp+30h], 439d8000h
		jge     near ___4e6fbh
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f7ch]
		mov     eax, [esp+18h]
		fsub    dword [eax+___1e6f7ch]
		fldz    
		fxch    st0, st1
		fstp    dword [esp+5ch]
		fcomp   dword [esp+5ch]
		fnstsw  ax
		sahf    
		jbe     short ___4e5b1h
		fld     dword [esp+5ch]
		fchs    
		fstp    dword [esp+0c4h]
		jmp     short ___4e5bch
___4e5b1h:
		mov     eax, [esp+5ch]
		mov     [esp+0c4h], eax
___4e5bch:
		cmp     dword [esp+0c4h], 42340000h
		jle     near ___4e6fbh
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f7ch]
		mov     eax, [esp+18h]
		fsub    dword [eax+___1e6f7ch]
		fldz    
		fxch    st0, st1
		fstp    dword [esp+0cch]
		fcomp   dword [esp+0cch]
		fnstsw  ax
		sahf    
		jbe     short ___4e60dh
		fld     dword [esp+0cch]
		fchs    
		fstp    dword [esp+34h]
		jmp     short ___4e618h
___4e60dh:
		mov     eax, [esp+0cch]
		mov     [esp+34h], eax
___4e618h:
		cmp     dword [esp+34h], 43070000h
		jl      short ___4e66fh
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f7ch]
		mov     eax, [esp+18h]
		fsub    dword [eax+___1e6f7ch]
		fldz    
		fxch    st0, st1
		fstp    dword [esp+44h]
		fcomp   dword [esp+44h]
		fnstsw  ax
		sahf    
		jbe     short ___4e659h
		fld     dword [esp+44h]
		fchs    
		fstp    dword [esp+38h]
		jmp     short ___4e661h
___4e659h:
		mov     eax, [esp+44h]
		mov     [esp+38h], eax
___4e661h:
		cmp     dword [esp+38h], 43610000h
		jle     near ___4e6fbh
___4e66fh:
		mov     eax, [esp+28h]
		mov     edx, eax
		sar     edx, 1fh
		shl     edx, 2
		sbb     eax, edx
		sar     eax, 2
		mov     [esp+20h], eax
		fild    dword [esp+20h]
		fstp    dword [esp+58h]
		cmp     dword [esp+58h], 40400000h
		jle     short ___4e69eh
		mov     dword [esp+58h], 40400000h
___4e69eh:
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
		jle     short ___4e6cdh
		mov     dword [esp+50h], 40400000h
___4e6cdh:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6fd4h]
		fadd    dword [esp+58h]
		fstp    dword [eax+___1e6fd4h]
		mov     eax, [esp+18h]
		fld     dword [eax+___1e6fd4h]
		fadd    dword [esp+50h]
		fstp    dword [eax+___1e6fd4h]
___4e6fbh:
		xor     eax, eax
		mov     edx, [___243c60h]
		mov     [esp+4ch], eax
		imul    eax, edx, 94h
		cmp     dword [eax+___1de5a4h], byte 0
		je      near ___4e939h
		mov     eax, [esp+18h]
		cmp     dword [eax+___1e6fdah], byte 0
		jne     near ___4e939h
		imul    edx, edx, 35eh
		fld     dword [eax+___1e6f84h]
		call    near __CHP
		fistp   dword [esp+20h]
		mov     eax, [esp+20h]
		fld     dword [edx+___1e6f88h]
		fld     dword [edx+___1e6f84h]
		fadd    dword [edx+___1e6f9ch]
		fxch    st0, st1
		fadd    dword [edx+___1e6fa0h]
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		mov     edx, [esp+18h]
		fxch    st0, st1
		fistp   dword [esp+24h]
		fistp   dword [esp+20h]
		fld     dword [edx+___1e6f88h]
		mov     esi, [esp+24h]
		mov     edi, [esp+20h]
		call    near __CHP
		fistp   dword [esp+20h]
		mov     edx, [esp+20h]
		sub     eax, esi
		sub     edx, edi
		test    eax, eax
		jge     short ___4e7a3h
		mov     esi, eax
		neg     esi
		jmp     short ___4e7a5h
___4e7a3h:
		mov     esi, eax
___4e7a5h:
		cmp     esi, byte 14h
		jge     short ___4e7e2h
		test    edx, edx
		jge     short ___4e7b4h
		mov     esi, edx
		neg     esi
		jmp     short ___4e7b6h
___4e7b4h:
		mov     esi, edx
___4e7b6h:
		cmp     esi, byte 14h
		jge     short ___4e7e2h
		mov     esi, [___243d74h]
		mov     edi, [esp+18h]
		add     esi, [edi+___1e6ee0h]
		add     edx, byte 14h
		add     esi, eax
		imul    eax, edx, byte 28h
		cmp     byte [esi+eax*1+14h], 3
		jbe     short ___4e7e2h
		mov     dword [esp+4ch], 1
___4e7e2h:
		imul    edx, [___243c60h], 35eh
		mov     eax, [esp+18h]
		fld     dword [eax+___1e6f84h]
		call    near __CHP
		fistp   dword [esp+20h]
		mov     eax, [esp+20h]
		fld     dword [edx+___1e6f88h]
		fld     dword [edx+___1e6f84h]
		fadd    dword [edx+___1e6f94h]
		fxch    st0, st1
		fadd    dword [edx+___1e6f98h]
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		mov     edx, [esp+18h]
		fxch    st0, st1
		fistp   dword [esp+24h]
		fistp   dword [esp+20h]
		fld     dword [edx+___1e6f88h]
		mov     edi, [esp+24h]
		mov     esi, [esp+20h]
		call    near __CHP
		fistp   dword [esp+20h]
		mov     edx, [esp+20h]
		sub     eax, edi
		sub     edx, esi
		test    eax, eax
		jge     short ___4e862h
		mov     esi, eax
		neg     esi
		jmp     short ___4e864h
___4e862h:
		mov     esi, eax
___4e864h:
		cmp     esi, byte 14h
		jge     short ___4e8a1h
		test    edx, edx
		jge     short ___4e873h
		mov     esi, edx
		neg     esi
		jmp     short ___4e875h
___4e873h:
		mov     esi, edx
___4e875h:
		cmp     esi, byte 14h
		jge     short ___4e8a1h
		mov     esi, [___243d74h]
		mov     edi, [esp+18h]
		add     esi, [edi+___1e6ee0h]
		add     esi, eax
		lea     eax, [edx+14h]
		imul    eax, eax, byte 28h
		cmp     byte [esi+eax*1+14h], 3
		jbe     short ___4e8a1h
		mov     dword [esp+4ch], 1
___4e8a1h:
		cmp     dword [esp+4ch], byte 1
		jne     near ___4e939h
		mov     eax, [esp+18h]
		fld     dword [eax+___1e6fcch]
		fmul    st0, st0
		mov     edx, [esp+60h]
		fld     dword [eax+___1e6fd0h]
		fmul    st0, st0
		mov     esi, [edx+___1de59ch]
		mov     eax, 400h
		sub     eax, esi
		mov     edx, eax
		shl     eax, 2
		sub     eax, edx
		faddp   st1, st0
		mov     [esp+20h], eax
		fild    dword [esp+20h]
		fmulp   st1, st0
		call    near __CHP
		fistp   dword [___2438cch]
		cmp     dword [___2438cch], 2710h
		jle     short ___4e905h
		mov     dword [___2438cch], 2710h
___4e905h:
		mov     edx, [esp+60h]
		mov     eax, [___2438cch]
		mov     esi, [edx+___1de598h]
		sub     esi, eax
		mov     [edx+___1de598h], esi
		test    esi, esi
		jge     short ___4e92ah
		mov     eax, edx
		xor     edx, edx
		mov     [eax+___1de598h], edx
___4e92ah:
		mov     edx, 1eh
		mov     eax, 15h

	push 	ecx
	push 	edx
	push 	eax
		call    _settextposition_
	add 	esp, 8
	pop 	ecx
	
___4e939h:
		mov     esi, [esp+60h]
		mov     edi, [esp+18h]
		mov     eax, [esp+40h]
		mov     edx, [___243cf4h]
		add     esi, 94h
		add     edi, 35eh
		inc     eax
		mov     [esp+60h], esi
		mov     [esp+18h], edi
		mov     [esp+40h], eax
		cmp     eax, edx
		jl      near ___4dd7ah
___4e96ch:
		inc     dword [___243c60h]
___4e972h:
		mov     eax, [___243cf4h]
		mov     edi, [___243c60h]
		dec     eax
		cmp     eax, edi
		jg      near ___4dd4fh
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

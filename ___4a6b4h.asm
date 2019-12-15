cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243c88h
	extern	___243c98h
	extern	___183f79h
	extern	___183f81h
	extern	___1f3b08h
	extern	___1df99ch
	extern	___1f3b0ch
	extern	___1f3ea4h
	extern	___1df9a0h
	extern	___1f4034h
	extern	___1f41c4h
	extern	___243b30h
	extern	___2438d8h
	extern	___243a04h
	extern	___1f3b10h
	extern	___183f89h
	extern	___1f3c3ch
	extern	___1f3d68h
	extern	___183fa9h
	extern	___183f91h
	extern	___183f95h
	extern	___183fa1h
	extern	___183f99h
	extern	__CHP

section .text

__GDECL(___4a6b4h)
		push    12ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, 110h
		and     esp, byte 0fffffff8h
		xor     edx, edx
		mov     ebx, [___243c88h]
		mov     [___243c98h], edx
		test    ebx, ebx
		jle     near ___4ada1h
		fld     qword [___183f79h]
		fsqrt   
		fld     qword [___183f81h]
		fsqrt   
		mov     [esp+40h], edx
		fxch    st0, st1
		fstp    qword [esp+58h]
		fstp    qword [esp+60h]
___4a703h:
		imul    edx, [___243c98h], 12ch
		mov     ebx, [esp+40h]
		mov     esi, [ebx+___1f3b08h]
		xor     eax, eax
		test    esi, esi
		jle     short ___4a733h
___4a71dh:
		add     edx, byte 4
		inc     eax
		xor     edi, edi
		mov     ecx, [ebx+___1f3b08h]
		mov     [edx+___1df99ch], edi
		cmp     eax, ecx
		jl      short ___4a71dh
___4a733h:
		imul    edx, [___243c98h], 12ch
		mov     esi, [esp+40h]
		xor     ebx, ebx
		mov     edi, [esi+___1f3b0ch]
		mov     eax, esi
		test    edi, edi
		jle     short ___4a78ch
___4a74fh:
		mov     ecx, [eax+___1f3ea4h]
		inc     dword [edx+ecx*4+___1df9a0h]
		mov     ecx, [eax+___1f4034h]
		inc     dword [edx+ecx*4+___1df9a0h]
		mov     ecx, [eax+___1f41c4h]
		mov     edi, [edx+ecx*4+___1df9a0h]
		inc     edi
		inc     ebx
		mov     [edx+ecx*4+___1df9a0h], edi
		mov     ecx, [esi+___1f3b0ch]
		add     eax, byte 4
		cmp     ebx, ecx
		jl      short ___4a74fh
___4a78ch:
		mov     ebx, [esp+40h]
		xor     eax, eax
		mov     esi, [ebx+___1f3b08h]
		xor     edx, edx
		test    esi, esi
		jle     short ___4a7c0h
___4a79eh:
		xor     edi, edi
		inc     edx
		mov     [eax+___243b30h], edi
		mov     [eax+___2438d8h], edi
		mov     [eax+___243a04h], edi
		mov     edi, [ebx+___1f3b08h]
		add     eax, byte 4
		cmp     edx, edi
		jl      short ___4a79eh
___4a7c0h:
		mov     esi, [esp+40h]
		xor     eax, eax
		mov     edx, esi
		mov     ebx, [esi+___1f3b0ch]
		mov     [esp+50h], eax
		test    ebx, ebx
		jle     near ___4ab4fh
___4a7dah:
		mov     ecx, [edx+___1f3ea4h]
		mov     ebx, [edx+___1f4034h]
		fild    dword [esi+ecx*4+___1f3b10h]
		fmul    qword [___183f89h]
		fild    dword [esi+ebx*4+___1f3b10h]
		fmul    qword [___183f89h]
		fild    dword [esi+ecx*4+___1f3c3ch]
		fmul    qword [___183f89h]
		mov     eax, [edx+___1f41c4h]
		fild    dword [esi+ebx*4+___1f3c3ch]
		fmul    qword [___183f89h]
		fild    dword [esi+eax*4+___1f3c3ch]
		fmul    qword [___183f89h]
		fild    dword [esi+eax*4+___1f3b10h]
		mov     ecx, [esi+ecx*4+___1f3d68h]
		mov     ebx, [esi+ebx*4+___1f3d68h]
		mov     eax, [esi+eax*4+___1f3d68h]
		fxch    st0, st3
		fstp    qword [esp+0c8h]
		fxch    st0, st1
		fstp    qword [esp+0d0h]
		sub     ecx, 100h
		sub     ebx, 100h
		sub     eax, 100h
		fld     qword [esp+0d0h]
		mov     [esp+20h], ecx
		mov     [esp+3ch], eax
		fild    dword [esp+3ch]
		fild    dword [esp+20h]
		fstp    qword [esp+78h]
		fstp    qword [esp+0b0h]
		fsub    qword [esp+0c8h]
		fld     qword [esp+0b0h]
		fxch    st0, st1
		fstp    qword [esp+0f0h]
		fsub    qword [esp+78h]
		fld     qword [esp+0f0h]
		fxch    st0, st1
		fstp    qword [esp+0f8h]
		fmul    qword [esp+0f8h]
		mov     [esp+3ch], ebx
		fxch    st0, st1
		fstp    qword [esp+68h]
		fild    dword [esp+3ch]
		fld     qword [esp+68h]
		fsub    qword [esp+0c8h]
		fxch    st0, st1
		fstp    qword [esp+0a8h]
		fstp    qword [esp+108h]
		fld     qword [esp+0a8h]
		fsub    qword [esp+78h]
		fxch    st0, st2
		fmul    qword [___183f89h]
		fxch    st0, st2
		fstp    qword [esp+70h]
		fld     qword [esp+108h]
		fmul    qword [esp+70h]
		fxch    st0, st4
		fstp    qword [esp+98h]
		fxch    st0, st1
		fsub    qword [esp+98h]
		fld     qword [esp+70h]
		fmul    st0, st1
		fxch    st0, st3
		fstp    qword [esp+90h]
		fxch    st0, st3
		fsubp   st1, st0
		fld     qword [esp+90h]
		fxch    st0, st1
		fstp    qword [esp+0d8h]
		fsub    qword [esp+98h]
		fld     qword [esp+0d8h]
		fmul    st0, st0
		fld     qword [esp+0f8h]
		fmul    st0, st2
		fxch    st0, st2
		fmul    qword [esp+108h]
		fxch    st0, st2
		fsubp   st3, st0
		fxch    st0, st3
		fmul    qword [esp+0f0h]
		fxch    st0, st2
		fst     qword [esp+0e0h]
		fmul    qword [esp+0e0h]
		fxch    st0, st2
		fsubp   st1, st0
		fxch    st0, st1
		faddp   st2, st0
		fst     qword [esp+0e8h]
		fmul    qword [esp+0e8h]
		faddp   st1, st0
		fld1    
		fxch    st0, st1
		fstp    qword [esp+88h]
		fcomp   qword [esp+88h]
		fnstsw  ax
		sahf    
		jae     short ___4a9f3h
		fld     qword [___183fa9h]
		fdiv    qword [esp+88h]
		fsqrt   
		fld     qword [esp+0d8h]
		fmul    st0, st1
		fld     qword [esp+0e0h]
		fmul    st0, st2
		fld     qword [esp+0e8h]
		fmulp   st3, st0
		fxch    st0, st1
		fstp    qword [esp+0d8h]
		fstp    qword [esp+0e0h]
		fstp    qword [esp+0e8h]
		jmp     short ___4aa24h
___4a9f3h:
		xor     ebx, ebx
		mov     ecx, 40590000h
		mov     [esp+0e0h], ebx
		mov     [esp+0e4h], ecx
		mov     [esp+0e8h], ebx
		mov     [esp+0ech], ecx
		mov     [esp+0d8h], ebx
		mov     [esp+0dch], ecx
___4aa24h:
		mov     eax, [edx+___1f3ea4h]
		mov     ebx, [edx+___1f4034h]
		mov     ecx, [edx+___1f41c4h]
		fld     dword [eax*4+___243a04h]
		fld     dword [eax*4+___243b30h]
		fld     dword [eax*4+___2438d8h]
		fld     st2
		fld     st2
		fld     st2
		fxch    st0, st2
		fld     qword [esp+0d8h]
		fxch    st0, st1
		fadd    st0, st1
		fxch    st0, st2
		fadd    qword [esp+0e0h]
		fxch    st0, st3
		fadd    qword [esp+0e8h]
		fxch    st0, st2
		fstp    st6
		fxch    st0, st2
		fstp    st4
		fstp    st2
		fxch    st0, st3
		fstp    dword [eax*4+___243a04h]
		fxch    st0, st1
		fstp    dword [eax*4+___243b30h]
		fstp    dword [eax*4+___2438d8h]
		fld     dword [ebx*4+___243a04h]
		fld     dword [ebx*4+___243b30h]
		fld     dword [ebx*4+___2438d8h]
		fld     st2
		fld     st2
		fld     st2
		fxch    st0, st2
		fadd    st0, st6
		fxch    st0, st1
		fadd    qword [esp+0e0h]
		fxch    st0, st2
		fadd    qword [esp+0e8h]
		fxch    st0, st1
		fstp    st5
		fxch    st0, st1
		fstp    st3
		fstp    st1
		fxch    st0, st2
		fstp    dword [ebx*4+___243a04h]
		fstp    dword [ebx*4+___243b30h]
		fstp    dword [ebx*4+___2438d8h]
		fld     dword [ecx*4+___243a04h]
		fld     dword [ecx*4+___243b30h]
		fld     dword [ecx*4+___2438d8h]
		fld     st2
		fld     st2
		fld     st2
		fxch    st0, st2
		faddp   st6, st0
		fadd    qword [esp+0e0h]
		fxch    st0, st1
		fadd    qword [esp+0e8h]
		fxch    st0, st5
		fstp    st4
		fstp    st2
		fxch    st0, st3
		fstp    st3
		fxch    st0, st1
		fstp    dword [ecx*4+___243a04h]
		fstp    dword [ecx*4+___243b30h]
		fstp    dword [ecx*4+___2438d8h]
		mov     ecx, [esp+50h]
		add     edx, byte 4
		inc     ecx
		mov     edi, [esi+___1f3b0ch]
		mov     [esp+50h], ecx
		cmp     ecx, edi
		jl      near ___4a7dah
___4ab4fh:
		imul    ebx, [___243c98h], 12ch
		mov     esi, [esp+40h]
		mov     edx, [esi+___1f3b08h]
		xor     ecx, ecx
		test    edx, edx
		jle     near ___4ad78h
		xor     edx, edx
___4ab6fh:
		cmp     dword [ebx+___1df9a0h], byte 1
		jl      short ___4abaah
		fild    dword [ebx+___1df9a0h]
		fld     dword [edx+___243a04h]
		fdiv    st0, st1
		fld     dword [edx+___243b30h]
		fdiv    st0, st2
		fld     dword [edx+___2438d8h]
		fdivrp  st3, st0
		fxch    st0, st1
		fstp    dword [edx+___243a04h]
		fstp    dword [edx+___243b30h]
		fstp    dword [edx+___2438d8h]
___4abaah:
		fld     dword [edx+___243a04h]
		fmul    st0, st0
		fld     dword [edx+___243b30h]
		fmul    st0, st0
		faddp   st1, st0
		fld     dword [edx+___2438d8h]
		fmul    st0, st0
		faddp   st1, st0
		fld1    
		fxch    st0, st1
		fstp    qword [esp+0b8h]
		fcomp   qword [esp+0b8h]
		fnstsw  ax
		sahf    
		jbe     short ___4abf2h
		xor     edi, edi
		mov     eax, 3ff00000h
		mov     [esp+0b8h], edi
		mov     [esp+0bch], eax
___4abf2h:
		fld     qword [___183fa9h]
		fdiv    qword [esp+0b8h]
		fsqrt   
		fld     dword [edx+___243a04h]
		fld     st0
		fmul    st0, st2
		fld     dword [edx+___243b30h]
		fld     st0
		fmul    st0, st4
		fld     dword [edx+___2438d8h]
		fmul    st5, st0
		fxch    st0, st3
		fstp    st4
		fxch    st0, st3
		fst     dword [edx+___243a04h]
		fmul    dword [edx+___243a04h]
		fxch    st0, st3
		fstp    st1
		fst     dword [edx+___243b30h]
		fmul    dword [edx+___243b30h]
		fxch    st0, st3
		fstp    st1
		fxch    st0, st2
		faddp   st1, st0
		fxch    st0, st1
		fst     dword [edx+___2438d8h]
		fmul    dword [edx+___2438d8h]
		faddp   st1, st0
		fld1    
		fcompp  
		fnstsw  ax
		sahf    
		jbe     short ___4ac6eh
		fld1    
		fadd    dword [edx+___243a04h]
		fstp    dword [edx+___243a04h]
___4ac6eh:
		fld     dword [edx+___243a04h]
		fmul    st0, st0
		fld     dword [edx+___243b30h]
		fmul    st0, st0
		fld     dword [edx+___2438d8h]
		fmul    st0, st0
		fxch    st0, st2
		fstp    dword [esp+4ch]
		fstp    dword [esp+54h]
		fstp    dword [esp+48h]
		fld     dword [esp+4ch]
		fadd    dword [esp+54h]
		fadd    dword [esp+48h]
		fsqrt   
		fld     dword [___183f91h]
		fld     dword [edx+___243a04h]
		fmul    st0, st1
		fld     dword [edx+___243b30h]
		fmulp   st2, st0
		fld     dword [edx+___2438d8h]
		fmul    dword [___183f95h]
		fxch    st0, st3
		fst     qword [esp+100h]
		fmul    qword [esp+60h]
		fxch    st0, st1
		fstp    dword [esp+38h]
		fxch    st0, st1
		fstp    dword [esp+44h]
		fxch    st0, st1
		fstp    dword [esp+24h]
		fld     dword [esp+38h]
		fadd    dword [esp+44h]
		fadd    dword [esp+24h]
		fst     qword [esp+0c0h]
		fxch    st0, st1
		fstp    qword [esp+0a0h]
		fdiv    qword [esp+0a0h]
		fldz    
		fxch    st0, st1
		fstp    qword [esp+80h]
		fcomp   qword [esp+80h]
		fnstsw  ax
		sahf    
		jae     short ___4ad32h
		fld     qword [esp+80h]
		fmul    qword [___183fa1h]
		fadd    qword [___183f99h]
		jmp     short ___4ad50h
___4ad32h:
		fld     qword [esp+100h]
		fmul    qword [esp+58h]
		fdivr   qword [esp+0c0h]
		fld     qword [___183f99h]
		fxch    st0, st1
		fmul    st0, st1
		faddp   st1, st0
___4ad50h:
		call    near __CHP
		fistp   dword [esp+3ch]
		mov     eax, [esp+3ch]
		mov     [ebx+___1df9a0h], eax
		add     ebx, byte 4
		inc     ecx
		mov     edi, [esi+___1f3b08h]
		add     edx, byte 4
		cmp     ecx, edi
		jl      near ___4ab6fh
___4ad78h:
		mov     ecx, [esp+40h]
		mov     esi, [___243c98h]
		mov     edi, [___243c88h]
		add     ecx, 0c50h
		inc     esi
		mov     [esp+40h], ecx
		mov     [___243c98h], esi
		cmp     esi, edi
		jl      near ___4a703h
___4ada1h:
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

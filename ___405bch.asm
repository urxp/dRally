cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243ce8h
	extern	___182f17h
	extern	___182f27h
	extern	___182f1fh
	extern	__CHP
	extern	___182f2fh
	extern	___2435c4h
	extern	___243334h
	extern	___243854h
	extern	___243858h
	extern	___24385ch
	extern	___243860h
	extern	___1e6fd9h
	extern	___1c9ee0h
	extern	___1c9ee4h
	extern	___1c9ee8h
	extern	___1c9eech
	extern	___1c9ed0h
	extern	___1c9ef0h
	extern	___1c9ed4h
	extern	___1c9ef4h
	extern	___1c9f0ch
	extern	___1c9ed8h
	extern	___1c9ef8h
	extern	___1c9f08h
	extern	___1c9f04h
	extern	___1c9edch
	extern	___1c9f00h
	extern	___1c9efch
	extern	___243894h
	extern	___243330h

section .text

__GDECL(___405bch)
		push    0a0h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, 84h
		and     esp, byte 0fffffff8h
		mov     ebx, [___243ce8h]
		mov     dword [esp+80h], 0bh
		xor     edx, edx
___405eah:
		fild    dword [esp+80h]
		fmul    qword [___182f17h]
		fdiv    qword [___182f27h]
		fld     st0
		fcos    
		fxch    st0, st1
		fsin    
		fstp    qword [esp]
		mov     eax, [esp]
		fmul    qword [___182f1fh]
		mov     [esp+58h], eax
		mov     eax, [esp+4]
		mov     [esp+5ch], eax
		fsub    qword [esp+58h]
		fst     qword [esp+70h]
		call    near __CHP
		fistp   dword [esp+78h]
		fild    dword [esp+78h]
		fsubr   qword [esp+70h]
		fcomp   qword [___182f2fh]
		fnstsw  ax
		sahf    
		jb      short ___40652h
		fld1    
		fadd    qword [esp+70h]
		call    near __CHP
		fistp   dword [esp+50h]
		jmp     short ___4065ah
___40652h:
		mov     eax, [esp+78h]
		mov     [esp+50h], eax
___4065ah:
		mov     eax, [esp+50h]
		fild    dword [esp+80h]
		add     eax, byte 1eh
		fmul    qword [___182f17h]
		mov     [edx+___2435c4h], eax
		fdiv    qword [___182f27h]
		fsin    
		fst     qword [esp+60h]
		fmul    qword [___182f1fh]
		fadd    qword [esp+60h]
		fst     qword [esp+68h]
		call    near __CHP
		fistp   dword [esp+7ch]
		fild    dword [esp+7ch]
		fsubr   qword [esp+68h]
		fcomp   qword [___182f2fh]
		fnstsw  ax
		sahf    
		jb      short ___406bbh
		fld1    
		fadd    qword [esp+68h]
		call    near __CHP
		fistp   dword [esp+54h]
		jmp     short ___406c3h
___406bbh:
		mov     eax, [esp+7ch]
		mov     [esp+54h], eax
___406c3h:
		mov     ecx, [esp+80h]
		mov     eax, [esp+54h]
		add     edx, byte 4
		inc     ecx
		add     eax, byte 1bh
		mov     [esp+80h], ecx
		mov     [edx+___243334h], eax
		cmp     edx, 288h
		jne     near ___405eah
		mov     eax, ebx
		mov     [___243854h], ebx
		xor     eax, ebx
		test    ebx, ebx
		jne     short ___40701h
		mov     eax, 1
___40701h:
		mov     [___243858h], eax
		inc     eax
		cmp     eax, ebx
		jne     short ___4070eh
		lea     eax, [ebx+1]
___4070eh:
		mov     [___24385ch], eax
		inc     eax
		cmp     eax, ebx
		jne     short ___4071bh
		lea     eax, [ebx+1]
___4071bh:
		imul    edx, [___243854h], 35eh
		mov     [___243860h], eax
		mov     dl, [edx+___1e6fd9h]
		and     edx, 0ffh
		mov     edi, [___243858h]
		mov     [___1c9ee0h], edx
		imul    edx, edi, 35eh
		mov     dl, [edx+___1e6fd9h]
		and     edx, 0ffh
		mov     ecx, [___24385ch]
		mov     [___1c9ee4h], edx
		imul    edx, ecx, 35eh
		mov     dl, [edx+___1e6fd9h]
		imul    eax, eax, 35eh
		and     edx, 0ffh
		mov     [___1c9ee8h], edx
		mov     al, [eax+___1e6fd9h]
		mov     edx, [___1c9ee0h]
		and     eax, 0ffh
		dec     edx
		mov     [___1c9eech], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     edx, [___1c9ee4h]
		mov     [___1c9ed0h], eax
		shl     eax, 10h
		dec     edx
		mov     [___1c9ef0h], eax
		lea     eax, [edx*8+0]
		xor     esi, esi
		sub     eax, edx
		mov     edx, [___1c9ee8h]
		mov     [___1c9ed4h], eax
		shl     eax, 10h
		dec     edx
		mov     [___1c9ef4h], eax
		lea     eax, [edx*8+0]
		mov     [___1c9f0ch], esi
		sub     eax, edx
		mov     edx, [___1c9eech]
		mov     [___1c9ed8h], eax
		shl     eax, 10h
		dec     edx
		mov     [___1c9ef8h], eax
		lea     eax, [edx*8+0]
		mov     [___1c9f08h], esi
		sub     eax, edx
		mov     [___1c9f04h], esi
		mov     [___1c9edch], eax
		shl     eax, 10h
		mov     [___1c9f00h], esi
		mov     [___1c9efch], eax
		mov     eax, [___243894h]
		mov     [___243330h], eax
		mov     [___243334h], esi
		mov     [___243ce8h], ebx
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

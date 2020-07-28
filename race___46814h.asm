cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___2432f0h
	extern	___243d08h
	extern	___243d80h
	extern	___1a54d0h
	extern	___196e78h
	extern	___183505h
	extern	___18350dh
	extern	___183515h
	extern	___18351dh
	extern	___183525h
	extern	__CHP
	extern	___243304h
	extern	___243308h
	extern	___2432f8h
	extern	___2432ech
	extern	___2432f4h

section .text

__GDECL(race___46814h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     ebp, [___2432f0h]
		xor     edx, edx
		mov     [___243d08h], edx
		mov     edx, 100h
___4683ah:
		mov     esi, [___243d08h]
		mov     eax, [___243d80h]
		shl     esi, 9
		add     esi, eax
		mov     eax, [___243d08h]
		mov     edi, ___1a54d0h
		shl     eax, 8
		mov     ecx, edx
		add     eax, 100h
		add     esi, 0a0h
		add     edi, eax
		call 	__MOVS
		mov     ebx, [___243d08h]
		inc     ebx
		mov     [___243d08h], ebx
		cmp     ebx, 0c8h
		jl      short ___4683ah
		fld     dword [___196e78h]
		fmul    qword [___183505h]
		fdiv    qword [___18350dh]
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fxch    st0, st1
		fmul    qword [___183515h]
		fdivr   qword [___18351dh]
		fxch    st0, st1
		fmul    qword [___183525h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [___243304h]
		mov     edx, [___243304h]
		mov     esi, 0a0020h
		lea     eax, [edx*4+0]
		xor     edi, edi
		sub     eax, edx
		mov     [___243308h], esi
		shl     eax, 3
		mov     [___243d08h], edi
		add     eax, edx
		call    near __CHP
		shl     eax, 3
		fistp   dword [___2432f8h]
		mov     [___2432ech], eax
___46902h:
		mov     eax, [___2432ech]
		xor     al, al
		mov     [___2432f4h], eax
		cmp     eax, dword 0c900h
		jle     short ___4691fh
		mov     dword [___2432f4h], 0c900h
___4691fh:
		mov     eax, [___2432f4h]
		imul    eax, [___2432f8h]
		mov     ebx, [___243308h]
		mov     ebp, eax
		sar     eax, 11h
		sar     ebp, 10h
		lea     edx, [eax-0ah]
		mov     [___2432f0h], ebp
		add     ebx, edx
		mov     cl, 0ah
		xor     al, al
___46948h:
		or      dx, dx
		jl      short ___4694fh
		mov     [ebx], al
___4694fh:
		inc     ebx
		inc     dx
		dec     cl
		jne     short ___46948h
		mov     edx, 0ffh
		mov     ebx, 0c900h
		mov     ebp, [___2432f0h]
		mov     ecx, [___2432f4h]
		mov     esi, [___243308h]
		mov     edi, ebp
		sub     edx, ebp
		sub     ebx, ecx
		sar     edi, 1
		add     ebx, ___1a54d0h
		add     edi, esi
		mov     ecx, 100h
___46987h:
		mov     al, [ebx]
		add     dh, dl
		mov     [edi], al
		adc     edi, byte 0
		inc     ebx
		dec     ecx
		jne     short ___46987h
		mov     ebp, [___2432f0h]
		mov     edx, ebp
		sar     edx, 1
		add     edx, 0ffh
		mov     ebx, [___243308h]
		sub     edx, ebp
		add     ebx, edx
		mov     cl, 0ah
		xor     al, al
___469b2h:
		cmp     dx, 0ffh
		jg      short ___469c2h
		mov     [ebx], al
		inc     ebx
		inc     dx
		dec     cl
		jne     short ___469b2h
___469c2h:
		mov     ebp, [___2432f0h]
		mov     edi, [___243308h]
		mov     eax, [___243304h]
		mov     edx, [___2432ech]
		mov     ebx, [___243d08h]
		add     edi, 140h
		inc     ebx
		sub     edx, eax
		mov     [___243308h], edi
		mov     [___2432ech], edx
		mov     [___243d08h], ebx
		cmp     ebx, 0c8h
		jl      near ___46902h
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

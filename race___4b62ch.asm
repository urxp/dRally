cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243c60h
	extern	___1e6f7ch
	extern	___183fb9h
	extern	___183fbdh
	extern	___183fc5h
	extern	___183fcdh
	extern	___243cf4h
	extern	___243cfch
	extern	___1e6f84h
	extern	___1e6f88h
	extern	__CHP
	extern	___243d74h
	extern	___1e6ee0h
	extern	___1e7056h
	extern	___1e6fdah
	extern	___183fd5h
	extern	___2438d0h
	extern	___1df520h
	extern	___1df524h
	extern	___1e7062h
	extern	___1e7052h
	extern	___1e7066h
	extern	___183fddh
	extern	___183fe9h
	extern	___183fe1h
	extern	___243d28h
	extern	___243d2ch
	extern	___243cf8h
	extern	___243d54h
	extern	___243ca8h
	extern	___1e6ef0h
	extern	___1e721eh
	extern	___1de598h
	extern	___1e704eh
	extern	___243d78h
	extern	___243d30h
	extern	___1de584h
	extern	___1e6f80h
	extern	___242178h
	extern	rand_watcom106
	extern	___242578h
	extern	___1de594h
	extern	___241d78h
	extern	___1e6f78h
	extern	___183fedh
	extern	___1e7072h
	extern	___183ff5h
	extern	___183ffdh
	extern	___184005h
	extern	___1e722ah

section .text

__GDECL(race___4b62ch)
		push    7ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 60h
		imul    esi, [___243c60h], 35eh
		fld     dword [esi+___1e6f7ch]
		fadd    dword [___183fb9h]
		fmul    qword [___183fbdh]
		fdiv    qword [___183fc5h]
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fxch    st0, st1
		fld     qword [___183fcdh]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmulp   st1, st0
		mov     edi, [___243cf4h]
		xor     edx, edx
		xor     ecx, ecx
		mov     [___243cfch], edx
		fld     dword [esi+___1e6f84h]
		faddp   st2, st0
		fld     dword [esi+___1e6f88h]
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st2
		faddp   st1, st0
		fxch    st0, st1
		fistp   dword [esp+50h]
		call    near __CHP
		fistp   dword [esp+54h]
		test    edi, edi
		jle     near ___4b76ch
		xor     eax, eax
___4b6bbh:
		cmp     ecx, [___243c60h]
		je      near ___4b758h
		fld     dword [eax+___1e6f84h]
		fld     dword [eax+___1e6f88h]
		mov     ebx, [esp+50h]
		mov     edx, [esp+54h]
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+14h]
		fistp   dword [esp+10h]
		mov     edi, [esp+14h]
		mov     ebp, [esp+10h]
		sub     ebx, edi
		sub     edx, ebp
		test    ebx, ebx
		jge     short ___4b709h
		mov     edi, ebx
		neg     edi
		jmp     short ___4b70bh
___4b709h:
		mov     edi, ebx
___4b70bh:
		cmp     edi, byte 14h
		jge     short ___4b758h
		test    edx, edx
		jge     short ___4b71ah
		mov     edi, edx
		neg     edi
		jmp     short ___4b71ch
___4b71ah:
		mov     edi, edx
___4b71ch:
		cmp     edi, byte 14h
		jge     short ___4b758h
		add     edx, byte 14h
		imul    edx, edx, byte 28h
		mov     edi, [___243d74h]
		add     edi, [eax+___1e6ee0h]
		add     ebx, edi
		cmp     byte [edx+ebx*1+14h], 3
		jbe     short ___4b758h
		cmp     dword [esi+___1e7056h], byte 0
		jne     short ___4b758h
		cmp     dword [esi+___1e6fdah], byte 0
		jne     short ___4b758h
		mov     dword [esi+___1e7056h], 64h
___4b758h:
		mov     ebp, [___243cf4h]
		inc     ecx
		add     eax, 35eh
		cmp     ecx, ebp
		jl      near ___4b6bbh
___4b76ch:
		imul    edi, [___243c60h], 35eh
		fld     dword [edi+___1e6f7ch]
		fadd    dword [___183fb9h]
		fmul    qword [___183fbdh]
		fdiv    qword [___183fc5h]
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fxch    st0, st1
		fld     qword [___183fd5h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmulp   st1, st0
		mov     edx, [___2438d0h]
		fld     dword [edi+___1e6f84h]
		faddp   st2, st0
		fld     dword [edi+___1e6f88h]
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st2
		faddp   st1, st0
		fxch    st0, st1
		fistp   dword [esp+3ch]
		call    near __CHP
		fistp   dword [esp+28h]
		test    edx, edx
		jle     short ___4b832h
		mov     esi, edx
		mov     ecx, edi
		xor     eax, eax
		shl     esi, 4
___4b7e1h:
		mov     edx, [esp+3ch]
		mov     ebx, [eax+___1df520h]
		mov     edi, [eax+___1df524h]
		sub     edx, ebx
		mov     ebx, [esp+28h]
		sub     ebx, edi
		test    edx, edx
		jge     short ___4b7ffh
		neg     edx
___4b7ffh:
		cmp     edx, byte 14h
		jge     short ___4b82bh
		test    ebx, ebx
		jge     short ___4b80ah
		neg     ebx
___4b80ah:
		cmp     ebx, byte 14h
		jge     short ___4b82bh
		cmp     dword [ecx+___1e7056h], byte 0
		jne     short ___4b82bh
		cmp     dword [ecx+___1e6fdah], byte 0
		jne     short ___4b82bh
		mov     dword [ecx+___1e7056h], 3ch
___4b82bh:
		add     eax, byte 10h
		cmp     eax, esi
		jl      short ___4b7e1h
___4b832h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e7062h], byte 5
		jle     short ___4b858h
		cmp     dword [eax+___1e7052h], byte 0
		jne     short ___4b858h
		mov     dword [eax+___1e7052h], 64h
___4b858h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e7066h], byte 3
		jle     short ___4b87eh
		cmp     dword [eax+___1e7056h], byte 0
		jne     short ___4b87eh
		mov     dword [eax+___1e7056h], 64h
___4b87eh:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___183fb9h]
		fld     st0
		fadd    dword [___183fddh]
		fld     qword [___183fbdh]
		fxch    st0, st1
		fmul    st0, st1
		fld     qword [___183fc5h]
		fxch    st0, st1
		fdiv    st0, st1
		fld     st0
		fsin    
		fxch    st0, st4
		fadd    dword [___183fe9h]
		fmulp   st3, st0
		fxch    st0, st2
		fdivrp  st1, st0
		fld     st0
		fsin    
		fxch    st0, st2
		fcos    
		fxch    st0, st1
		fcos    
		fxch    st0, st3
		fld     qword [___183fe1h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st3
		fmul    st0, st1
		fxch    st0, st2
		fmul    st0, st1
		mov     eax, [___243d28h]
		fxch    st0, st4
		fmulp   st1, st0
		dec     eax
		fld     dword [edx+___1e6f84h]
		fld     dword [edx+___1e6f88h]
		fxch    st0, st4
		fadd    st0, st1
		fxch    st0, st3
		faddp   st1, st0
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st4
		fadd    st0, st3
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st1
		faddp   st3, st0
		fxch    st0, st3
		fistp   dword [esp+24h]
		call    near __CHP
		fxch    st0, st2
		fistp   dword [esp+18h]
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+1ch]
		mov     ecx, [esp+24h]
		fistp   dword [esp+20h]
		cmp     eax, ecx
		jge     short ___4b942h
		mov     [esp+24h], eax
___4b942h:
		cmp     dword [esp+24h], byte 0
		jge     short ___4b94fh
		xor     edi, edi
		mov     [esp+24h], edi
___4b94fh:
		mov     eax, [___243d28h]
		mov     ebp, [esp+18h]
		dec     eax
		cmp     eax, ebp
		jge     short ___4b961h
		mov     [esp+18h], eax
___4b961h:
		cmp     dword [esp+18h], byte 0
		jge     short ___4b96eh
		xor     edx, edx
		mov     [esp+18h], edx
___4b96eh:
		mov     eax, [___243d2ch]
		mov     ebx, [esp+1ch]
		dec     eax
		cmp     eax, ebx
		jge     short ___4b980h
		mov     [esp+1ch], eax
___4b980h:
		cmp     dword [esp+1ch], byte 0
		jge     short ___4b98dh
		xor     esi, esi
		mov     [esp+1ch], esi
___4b98dh:
		mov     eax, [___243d2ch]
		mov     edi, [esp+20h]
		dec     eax
		cmp     eax, edi
		jge     short ___4b99fh
		mov     [esp+20h], eax
___4b99fh:
		cmp     dword [esp+20h], byte 0
		jge     short ___4b9ach
		xor     eax, eax
		mov     [esp+20h], eax
___4b9ach:
		mov     ebx, [esp+1ch]
		mov     ecx, [___243cf8h]
		sar     ebx, 2
		imul    ebx, ecx
		mov     edx, [esp+24h]
		mov     eax, [___243d54h]
		sar     edx, 2
		add     edx, eax
		mov     dl, [edx+ebx*1]
		mov     [esp+5ch], dl
		mov     edx, [esp+18h]
		sar     edx, 2
		add     edx, eax
		mov     eax, [esp+20h]
		sar     eax, 2
		imul    eax, ecx
		imul    ebx, [___243c60h], 35eh
		mov     al, [edx+eax*1]
		xor     ebp, ebp
		mov     [esp+58h], al
		mov     eax, [___243ca8h]
		xor     ecx, ecx
		mov     edx, 212h
		mov     [ebx+eax*4+___1e6ef0h], ebp
		mov     eax, 230h
___4ba0fh:
		mov     ebp, [ebx+___1e721eh]
		cmp     edx, ebp
		jge     short ___4ba22h
		cmp     eax, ebp
		jle     short ___4ba22h
		mov     ecx, 1
___4ba22h:
		sub     eax, byte 3ch
		sub     edx, byte 3ch
		cmp     eax, byte 3ch
		jge     short ___4ba0fh
		test    ecx, ecx
		je      short ___4ba65h
		cmp     dword [ebx+___1e6fdah], byte 0
		jne     short ___4ba65h
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		cmp     dword [eax*4+___1de598h], byte 0
		jle     short ___4ba65h
		mov     eax, [___243ca8h]
		or      byte [ebx+eax*4+___1e6ef0h], 4
___4ba65h:
		mov     edx, 212h
		mov     eax, 1f4h
		mov     edi, [___243c60h]
		xor     ecx, ecx
		imul    ebx, edi, 35eh
___4ba7dh:
		mov     esi, [ebx+___1e721eh]
		cmp     eax, esi
		jge     short ___4ba90h
		cmp     edx, esi
		jle     short ___4ba90h
		mov     ecx, 1
___4ba90h:
		sub     edx, byte 3ch
		sub     eax, byte 3ch
		cmp     edx, byte 1eh
		jge     short ___4ba7dh
		test    ecx, ecx
		je      short ___4bad3h
		cmp     dword [ebx+___1e6fdah], byte 0
		jne     short ___4bad3h
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		cmp     dword [eax*4+___1de598h], byte 0
		jle     short ___4bad3h
		mov     eax, [___243ca8h]
		or      byte [ebx+eax*4+___1e6ef0h], 8
___4bad3h:
		imul    edx, [___243c60h], 35eh
		mov     ebx, [edx+___1e704eh]
		cmp     ebx, byte 64h
		jge     near ___4bccch
		fld     dword [edx+___1e6f84h]
		fld     dword [edx+___1e6f88h]
		mov     ebx, [___243d78h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+10h]
		mov     eax, [esp+10h]
		call    near __CHP
		sar     eax, 2
		fistp   dword [esp+10h]
		add     ebx, eax
		mov     eax, [esp+10h]
		mov     esi, [___243d30h]
		sar     eax, 2
		imul    eax, esi
		mov     bl, [ebx+eax*1]
		mov     al, 10h
		sub     al, [esp+5ch]
		mov     ch, [esp+58h]
		mov     [esp+5ch], al
		mov     al, 10h
		sub     al, ch
		mov     ecx, [___243c60h]
		mov     [esp+58h], al
		lea     eax, [ecx*8+0]
		add     eax, ecx
		shl     eax, 2
		add     eax, ecx
		fldz    
		and     ebx, 0ffh
		fcomp   dword [eax*4+___1de584h]
		fnstsw  ax
		sahf    
		jb      short ___4bb7ch
		cmp     dword [edx+___1e6f80h], 3f000000h
		jle     near ___4bbf3h
___4bb7ch:
		imul    edx, [___243c60h], 35eh
		mov     eax, [___243ca8h]
		shl     eax, 2
		mov     ecx, [edx+___1e7056h]
		add     eax, edx
		test    ecx, ecx
		jne     short ___4bbb1h
		cmp     byte [esp+5ch], 9
		jbe     short ___4bba8h
		or      byte [eax+___1e6ef0h], 8
___4bba8h:
		cmp     byte [esp+58h], 7
		jae     short ___4bbf3h
		jmp     short ___4bbdch
___4bbb1h:
		xor     ecx, ecx
		mov     edx, [ebx*4+___242178h]
		mov     cl, [esp+5ch]
		inc     edx
		cmp     ecx, edx
		jle     short ___4bbcah
		or      byte [eax+___1e6ef0h], 8
___4bbcah:
		xor     edx, edx
		mov     eax, [ebx*4+___242178h]
		mov     dl, [esp+58h]
		dec     eax
		cmp     edx, eax
		jge     short ___4bbf3h
___4bbdch:
		imul    edx, [___243c60h], 35eh
		mov     eax, [___243ca8h]
		or      byte [edx+eax*4+___1e6ef0h], 4
___4bbf3h:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ecx, 2
		sar     edx, 1fh
		idiv    ecx
		test    edx, edx
		jne     short ___4bc4bh
		mov     ebp, [___243c60h]
		imul    ecx, ebp, 35eh
		cmp     dword [ecx+___1e7066h], byte 3
		jle     short ___4bc4bh
		cmp     dword [ecx+___1e6fdah], byte 0
		jne     short ___4bc4bh
		lea     eax, [ebp*8+0]
		add     eax, ebp
		shl     eax, 2
		add     eax, ebp
		cmp     dword [eax*4+___1de598h], byte 0
		jle     short ___4bc4bh
		mov     eax, [___243ca8h]
		or      byte [ecx+eax*4+___1e6ef0h], 8
___4bc4bh:
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     edx, eax
		shl     edx, 2
		mov     edi, [___243c60h]
		fld     dword [edx+___1de584h]
		imul    edx, edi, 35eh
		fmul    dword [ebx*4+___242578h]
		fcomp   dword [edx+___1e6f80h]
		fnstsw  ax
		sahf    
		jbe     short ___4bc9ch
		cmp     dword [edx+___1e7052h], byte 0
		jne     short ___4bc9ch
		mov     eax, [___243ca8h]
		or      byte [edx+eax*4+___1e6ef0h], 1
___4bc9ch:
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fld     dword [eax*4+___1de594h]
		imul    eax, edx, 35eh
		fmul    dword [ebx*4+___241d78h]
		fstp    dword [eax+___1e6f78h]
		jmp     short ___4bd35h
___4bccch:
		cmp     ebx, 94h
		jle     short ___4bcedh
		cmp     dword [edx+___1e6f80h], 3f000000h
		jle     short ___4bcedh
		mov     eax, [___243ca8h]
		or      byte [edx+eax*4+___1e6ef0h], 2
___4bcedh:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e704eh], 94h
		jge     short ___4bd11h
		mov     edx, [___243ca8h]
		or      byte [eax+edx*4+___1e6ef0h], 4
___4bd11h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e7052h], byte 0
		jle     short ___4bd35h
		mov     edx, [___243ca8h]
		mov     dword [eax+edx*4+___1e6ef0h], 2
___4bd35h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e7056h], byte 0
		jle     short ___4bd56h
		mov     edx, [___243ca8h]
		or      byte [eax+edx*4+___1e6ef0h], 10h
___4bd56h:
		imul    eax, [___243c60h], 35eh
		mov     edi, [eax+___1e704eh]
		test    edi, edi
		jle     short ___4bd73h
		lea     ebp, [edi-1]
		mov     [eax+___1e704eh], ebp
___4bd73h:
		imul    eax, [___243c60h], 35eh
		mov     ebx, [eax+___1e7052h]
		test    ebx, ebx
		jle     short ___4bd90h
		lea     ecx, [ebx-1]
		mov     [eax+___1e7052h], ecx
___4bd90h:
		imul    eax, [___243c60h], 35eh
		mov     edi, [eax+___1e7056h]
		test    edi, edi
		jle     short ___4bdadh
		lea     ebp, [edi-1]
		mov     [eax+___1e7056h], ebp
___4bdadh:
		imul    esi, [___243c60h], 35eh
		fld     dword [esi+___1e6f7ch]
		fmul    qword [___183fbdh]
		fdiv    qword [___183fc5h]
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fxch    st0, st1
		fld     qword [___183fedh]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmulp   st1, st0
		mov     ebx, [___243cf4h]
		xor     edx, edx
		fld     dword [esi+___1e6f84h]
		faddp   st2, st0
		fld     dword [esi+___1e6f88h]
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st2
		faddp   st1, st0
		fxch    st0, st1
		fistp   dword [esp+38h]
		call    near __CHP
		fistp   dword [esp+4ch]
		test    ebx, ebx
		jle     near ___4beb7h
		mov     edi, [___243ca8h]
		xor     eax, eax
		shl     edi, 2
___4be24h:
		cmp     edx, [___243c60h]
		je      near ___4bea3h
		fld     dword [eax+___1e6f84h]
		fld     dword [eax+___1e6f88h]
		mov     ebx, [esp+38h]
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+14h]
		fistp   dword [esp+10h]
		mov     ecx, [esp+14h]
		mov     ebp, [esp+10h]
		sub     ebx, ecx
		mov     ecx, [esp+4ch]
		sub     ecx, ebp
		test    ebx, ebx
		jge     short ___4be6eh
		neg     ebx
___4be6eh:
		cmp     ebx, byte 14h
		jge     short ___4bea3h
		test    ecx, ecx
		jge     short ___4be79h
		neg     ecx
___4be79h:
		cmp     ecx, byte 14h
		jge     short ___4bea3h
		cmp     dword [esi+___1e7072h], byte 0
		jne     short ___4bea3h
		mov     bl, [edi+esi*1+___1e6ef0h]
		or      bl, 40h
		mov     ecx, 15eh
		mov     [edi+esi*1+___1e6ef0h], bl
		mov     [esi+___1e7072h], ecx
___4bea3h:
		mov     ebp, [___243cf4h]
		inc     edx
		add     eax, 35eh
		cmp     edx, ebp
		jl      near ___4be24h
___4beb7h:
		imul    eax, [___243c60h], 35eh
		mov     ebx, [eax+___1e7072h]
		test    ebx, ebx
		jle     short ___4bed4h
		lea     ecx, [ebx-1]
		mov     [eax+___1e7072h], ecx
___4bed4h:
		imul    ebx, [___243c60h], 35eh
		fld     dword [ebx+___1e6f7ch]
		fadd    dword [___183fb9h]
		fmul    qword [___183fbdh]
		fdiv    qword [___183fc5h]
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fxch    st0, st1
		fld     qword [___183ff5h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmulp   st1, st0
		mov     edi, [___243cf4h]
		xor     edx, edx
		fld     dword [ebx+___1e6f84h]
		faddp   st2, st0
		fld     dword [ebx+___1e6f88h]
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st2
		faddp   st1, st0
		fxch    st0, st1
		fistp   dword [esp+34h]
		call    near __CHP
		fistp   dword [esp+48h]
		test    edi, edi
		jle     near ___4bfc0h
		mov     esi, [___243ca8h]
		shl     esi, 2
		xor     eax, eax
		add     esi, ebx
___4bf53h:
		cmp     edx, [___243c60h]
		je      short ___4bfb0h
		fld     dword [eax+___1e6f84h]
		fld     dword [eax+___1e6f88h]
		mov     ecx, [esp+34h]
		mov     ebx, [esp+48h]
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+14h]
		fistp   dword [esp+10h]
		mov     edi, [esp+14h]
		mov     ebp, [esp+10h]
		sub     ecx, edi
		sub     ebx, ebp
		test    ecx, ecx
		jge     short ___4bf99h
		neg     ecx
___4bf99h:
		cmp     ecx, byte 14h
		jge     short ___4bfb0h
		test    ebx, ebx
		jge     short ___4bfa4h
		neg     ebx
___4bfa4h:
		cmp     ebx, byte 14h
		jge     short ___4bfb0h
		or      byte [esi+___1e6ef0h], 20h
___4bfb0h:
		mov     edi, [___243cf4h]
		inc     edx
		add     eax, 35eh
		cmp     edx, edi
		jl      short ___4bf53h
___4bfc0h:
		imul    ebx, [___243c60h], 35eh
		fld     dword [ebx+___1e6f7ch]
		fadd    dword [___183fb9h]
		fmul    qword [___183fbdh]
		fdiv    qword [___183fc5h]
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fxch    st0, st1
		fld     qword [___183ffdh]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmulp   st1, st0
		xor     edx, edx
		mov     eax, [___243cf4h]
		fld     dword [ebx+___1e6f84h]
		faddp   st2, st0
		fld     dword [ebx+___1e6f88h]
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st2
		faddp   st1, st0
		fxch    st0, st1
		fistp   dword [esp+30h]
		call    near __CHP
		fistp   dword [esp+44h]
		test    eax, eax
		jle     near ___4c0abh
		mov     esi, [___243ca8h]
		shl     esi, 2
		xor     eax, eax
		add     esi, ebx
___4c03eh:
		cmp     edx, [___243c60h]
		je      short ___4c09bh
		fld     dword [eax+___1e6f84h]
		fld     dword [eax+___1e6f88h]
		mov     ecx, [esp+30h]
		mov     ebx, [esp+44h]
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+14h]
		fistp   dword [esp+10h]
		mov     ebp, [esp+14h]
		mov     edi, [esp+10h]
		sub     ecx, ebp
		sub     ebx, edi
		test    ecx, ecx
		jge     short ___4c084h
		neg     ecx
___4c084h:
		cmp     ecx, byte 14h
		jge     short ___4c09bh
		test    ebx, ebx
		jge     short ___4c08fh
		neg     ebx
___4c08fh:
		cmp     ebx, byte 14h
		jge     short ___4c09bh
		or      byte [esi+___1e6ef0h], 20h
___4c09bh:
		mov     ebx, [___243cf4h]
		inc     edx
		add     eax, 35eh
		cmp     edx, ebx
		jl      short ___4c03eh
___4c0abh:
		imul    edx, [___243c60h], 35eh
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___183fb9h]
		fmul    qword [___183fbdh]
		fdiv    qword [___183fc5h]
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fxch    st0, st1
		fld     qword [___184005h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmulp   st1, st0
		mov     esi, [___243cf4h]
		xor     eax, eax
		fld     dword [edx+___1e6f84h]
		faddp   st2, st0
		fld     dword [edx+___1e6f88h]
		fxch    st0, st2
		call    near __CHP
		fxch    st0, st2
		faddp   st1, st0
		fxch    st0, st1
		fistp   dword [esp+2ch]
		call    near __CHP
		fistp   dword [esp+40h]
		test    esi, esi
		jle     near ___4c198h
		mov     esi, [___243ca8h]
		shl     esi, 2
		add     esi, edx
		xor     edx, edx
___4c12ah:
		cmp     eax, [___243c60h]
		je      short ___4c187h
		fld     dword [edx+___1e6f84h]
		fld     dword [edx+___1e6f88h]
		mov     ecx, [esp+2ch]
		mov     ebx, [esp+40h]
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+10h]
		fistp   dword [esp+14h]
		mov     ebp, [esp+10h]
		mov     edi, [esp+14h]
		sub     ecx, ebp
		sub     ebx, edi
		test    ecx, ecx
		jge     short ___4c170h
		neg     ecx
___4c170h:
		cmp     ecx, byte 14h
		jge     short ___4c187h
		test    ebx, ebx
		jge     short ___4c17bh
		neg     ebx
___4c17bh:
		cmp     ebx, byte 14h
		jge     short ___4c187h
		or      byte [esi+___1e6ef0h], 20h
___4c187h:
		mov     ebp, [___243cf4h]
		inc     eax
		add     edx, 35eh
		cmp     eax, ebp
		jl      short ___4c12ah
___4c198h:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e7056h], byte 46h
		jne     short ___4c1d4h

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 5
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		jne     short ___4c1d4h
		imul    eax, [___243c60h], 35eh
		mov     dword [eax+___1e722ah], 1
___4c1d4h:
		imul    eax, [___243c60h], 35eh
		mov     ebp, [eax+___1e7056h]
		test    ebp, ebp
		jne     short ___4c1eeh
		mov     [eax+___1e722ah], ebp
___4c1eeh:
		imul    eax, [___243c60h], 35eh
		cmp     dword [eax+___1e722ah], byte 1
		jne     short ___4c20fh
		mov     edx, [___243ca8h]
		or      byte [eax+edx*4+___1e6ef0h], 42h
___4c20fh:
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

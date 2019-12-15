cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a51d0h
	extern	___1a3fc0h
	extern	___243ce8h
	extern	___1a3fc1h
	extern	___1a3fc2h
	extern	___1834ddh
	extern	___1a42c0h
	extern	___1a42c4h
	extern	___1a42c8h
	extern	___18349dh
	extern	___1834a5h
	extern	___1834adh
	extern	___1834e1h
	extern	__CHP
	extern	memset_
	extern	___1a54d0h
	extern	___243d80h
	extern	___1b1cd0h
	extern	___196e74h
	extern	___196e78h
	extern	___243898h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___65710h
	extern	___1834b5h
	extern	___1834e9h
	extern	___1834bdh
	extern	___1834f1h
	extern	___1834c5h
	extern	___243308h
	extern	___2432ech
	extern	___2432f8h
	extern	___243304h
	extern	___1834f9h
	extern	___2432f4h
	extern	___2432f0h
	extern	___1834cdh
	extern	___58c60h
	extern	___1834d5h
	extern	___196e70h
	extern	___243874h
	extern	___243894h
	extern	___243878h
	extern	___243330h
	extern 	___46738h__VGA13_PRESENTCLEARSCREEN
	extern 	VGA13_ACTIVESCREEN
	extern 	VGA13_PRESENTSCREEN

section .text

__GDECL(___45d3ch)
		push    7ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 50h
		and     esp, byte 0fffffff8h
		mov     ecx, 300h
		mov     esi, ___1a51d0h
		mov     edi, ___1a3fc0h
		call 	__MOVS
		mov     ebx, [___243ce8h]
		lea     eax, [ebx*4+0]
		add     eax, ebx
		add     eax, eax
		lea     edi, [eax+18h]
		xor     edx, edx
		add     eax, byte 0fh
		mov     [esp+1ch], edi
		mov     [esp+18h], eax
		mov     [esp+20h], eax
		mov     ecx, 100h
___45d9dh:
		xor     ebx, ebx
		xor     esi, esi
		mov     [esp+10h], ebx
___45da5h:
		mov     eax, [esp+10h]
		cmp     eax, [esp+20h]
		jl      near ___45e32h
		cmp     eax, [esp+1ch]
		jg      short ___45e32h
		lea     eax, [eax+eax*2]
		xor     ebx, ebx
		mov     bl, [eax+___1a3fc0h]
		imul    ebx, edx
		add     ebx, 80h
		sar     ebx, 8
		mov     [esp+0ch], ebx
		xor     ebx, ebx
		mov     bl, [eax+___1a3fc1h]
		imul    ebx, edx
		add     ebx, 80h
		sar     ebx, 8
		mov     al, [eax+___1a3fc2h]
		mov     [esp+8], ebx
		fld     dword [___1834ddh]
		fild    dword [esp+0ch]
		fdiv    st0, st1
		fild    dword [esp+8]
		fdiv    st0, st2
		and     eax, 0ffh
		imul    eax, edx
		add     eax, 80h
		sar     eax, 8
		mov     [esp+3ch], eax
		fild    dword [esp+3ch]
		fdivrp  st3, st0
		fxch    st0, st1
		fstp    dword [esi+___1a42c0h]
		fstp    dword [esi+___1a42c4h]
		fstp    dword [esi+___1a42c8h]
___45e32h:
		mov     eax, [esp+10h]
		cmp     eax, [esp+18h]
		jl      short ___45e44h
		cmp     edi, eax
		jge     near ___45ed7h
___45e44h:
		mov     ebx, [esp+10h]
		lea     ebx, [ebx+ebx*2]
		xor     eax, eax
		mov     al, [ebx+___1a3fc1h]
		mov     [esp+44h], eax
		fild    word [esp+44h]
		xor     eax, eax
		fmul    qword [___18349dh]
		mov     al, [ebx+___1a3fc0h]
		mov     [esp+44h], eax
		fild    word [esp+44h]
		xor     eax, eax
		fmul    qword [___1834a5h]
		mov     al, [ebx+___1a3fc2h]
		faddp   st1, st0
		mov     [esp+44h], eax
		fild    word [esp+44h]
		fmul    qword [___1834adh]
		faddp   st1, st0
		fdiv    qword [___1834e1h]
		call    near __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		imul    eax, edx
		add     eax, 80h
		sar     eax, 8
		mov     [esp+0ch], eax
		fild    dword [esp+0ch]
		fdiv    dword [___1834ddh]
		fstp    dword [esp+40h]
		mov     eax, [esp+40h]
		mov     [esi+___1a42c0h], eax
		mov     [esi+___1a42c4h], eax
		mov     [esi+___1a42c8h], eax
___45ed7h:
		mov     ebx, [esp+10h]
		inc     ebx
		add     esi, byte 0ch
		mov     [esp+10h], ebx
		cmp     ecx, ebx
		jg      near ___45da5h
		add     edx, byte 8
		cmp     edx, 100h
		jl      near ___45d9dh
		call 	___46738h__VGA13_PRESENTCLEARSCREEN
		mov     edx, ___1a54d0h
		lea     eax, [edx+0c800h]
		xor     ebx, ebx
		mov     [esp+28h], eax
___45f1ch:
		mov     esi, [___243d80h]
		mov     ecx, 100h
		add     esi, ebx
		mov     edi, edx
		add     esi, 0a0h
		add     edx, 100h
		call 	__MOVS
		mov     ecx, [esp+28h]
		add     ebx, 200h
		cmp     edx, ecx
		jne     short ___45f1ch
		mov     eax, ___1a54d0h
		mov     edx, ___1a54d0h
		xor     ebx, ebx
		add     eax, 0fb00h
		add     edx, 0c900h
		mov     [esp+2ch], eax
___45f70h:
		mov     eax, [___243d80h]
		mov     ecx, 40h
		add     eax, ebx
		mov     edi, edx
		lea     esi, [eax+60h]
		add     edx, byte 40h
		call 	__MOVS
		mov     esi, [esp+2ch]
		add     ebx, 200h
		cmp     edx, esi
		jne     short ___45f70h
		mov     ebx, 100h
		mov     eax, ___1b1cd0h
		xor     edx, esi
		mov     edi, 3f666666h
		call    near memset_
		mov     eax, 3f800000h
		mov     [___196e74h], edi
		xor     edx, edx
		mov     [___196e78h], eax
		mov     [___243898h], edx
___45fd0h:
		xor     ebx, ebx
		xor     esi, esi
		mov     [esp+14h], ebx
___45fd8h:
		fld     dword [esi+___1a42c0h]
		xor     eax, eax
		fmul    dword [___196e78h]
		mov     al, [esp+14h]
		call    near __CHP
		push    eax
		fistp   dword [esp+44h]
		mov     al, [esp+44h]
		fld     dword [esi+___1a42c4h]
		and     eax, 0ffh
		fmul    dword [___196e78h]
		push    eax
		call    near __CHP
		fistp   dword [esp+48h]
		mov     al, [esp+48h]
		fld     dword [esi+___1a42c8h]
		and     eax, 0ffh
		fmul    dword [___196e78h]
		push    eax
		call    near __CHP
		fistp   dword [esp+4ch]
		mov     al, [esp+4ch]
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ecx, [esp+14h]
		inc     ecx
		add     esi, byte 0ch
		mov     [esp+14h], ecx
		cmp     ecx, 100h
		jl      short ___45fd8h
		fld     dword [___196e78h]
		call    near __CHP
		fistp   dword [esp+40h]
		imul    eax, [esp+40h], 2d8h
		cmp     eax, dword 0ffffh
		jle     short ___46078h
		mov     eax, 0ffffh
___46078h:
		call    near ___65710h
		fld     dword [___196e78h]
		fmul    qword [___1834b5h]
		fdiv    qword [___1834e9h]
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fxch    st0, st1
		fmul    qword [___1834bdh]
		fdivr   qword [___1834f1h]
		fxch    st0, st1
		fmul    qword [___1834c5h]
		;mov     ebx, 0a0040h
		;mov     edx, 0a0000h
	mov 	ebx, VGA13_ACTIVESCREEN+40h
	mov 	edx, VGA13_ACTIVESCREEN
		xor     ecx, ecx
		mov     [___243308h], ebx
		mov     [___2432ech], ecx
		mov     ebx, 0c940h
		call    near __CHP
		fistp   dword [___2432f8h]
		call    near __CHP
		fistp   dword [___243304h]
___460e0h:
		fld     dword [___196e78h]
		fdiv    qword [___1834f9h]
		mov     esi, ebx
		call    near __CHP
		fistp   dword [esp+40h]
		mov     edi, [esp+40h]
		sub     esi, edi
		mov     ecx, edi
		add     esi, ___1a54d0h
		mov     edi, edx
		add     ebx, byte 40h
		call 	__MOVS
		add     edx, 140h
		cmp     ebx, 0fb40h
		jne     short ___460e0h
	call 	VGA13_PRESENTSCREEN
		xor     eax, eax
		mov     [esp+10h], eax
___4612eh:
		mov     eax, [___2432ech]
		xor     al, al
		mov     [___2432f4h], eax
		cmp     eax, dword 0c800h
		jle     short ___4614bh
		mov     dword [___2432f4h], 0c800h
___4614bh:
		mov     eax, [___2432f4h]
		mov     ecx, [___2432f8h]
		imul    eax, ecx
		mov     edx, eax
		mov     ebx, [___243308h]
		sar     edx, 10h
		sar     eax, 11h
		mov     [___2432f0h], edx
		lea     edx, [eax-0ah]
		add     ebx, edx
		mov     cl, 0ah
		xor     al, al
___46176h:
		or      dx, dx
		jl      short ___4617dh
		mov     [ebx], al
___4617dh:
		inc     ebx
		inc     dx
		dec     cl
		jne     short ___46176h
		mov     edx, 0ffh
		mov     esi, [___2432f0h]
		mov     ebx, [___2432f4h]
		mov     eax, [___243308h]
		dec     ebx
		mov     edi, esi
		sub     edx, esi
		sar     edi, 1
		add     ebx, ___1a54d0h
		add     edi, eax
		mov     ecx, 100h
___461aeh:
		mov     al, [ebx]
		add     dh, dl
		mov     [edi], al
		adc     edi, byte 0
		inc     ebx
		dec     ecx
		jne     short ___461aeh
		mov     eax, [___2432f0h]
		mov     esi, [esp+10h]
		sar     eax, 1
		mov     edx, [___2432f0h]
		add     eax, 0ffh
		mov     ebx, [___243308h]
		sub     eax, edx
		inc     esi
		mov     edx, eax
		mov     [esp+10h], esi
		add     ebx, edx
		mov     cl, 0ah
		xor     al, al
___461e6h:
		cmp     dx, 0ffh
		jg      short ___461f6h
		mov     [ebx], al
		inc     ebx
		inc     dx
		dec     cl
		jne     short ___461e6h
___461f6h:
		mov     ebx, [___243308h]
		mov     eax, [___243304h]
		mov     ecx, [___2432ech]
		add     ebx, 140h
		add     ecx, eax
		mov     [___243308h], ebx
		mov     [___2432ech], ecx
		cmp     esi, 0c8h
		jl      near ___4612eh
	call 	VGA13_PRESENTSCREEN
	
		cmp     dword [___196e78h], 42b40000h
		je      near ___462afh
		xor     ebx, ebx
		mov     [esp+14h], ebx
		cmp     dword [___243898h], byte 0
		jl      short ___46275h
		fld     dword [___196e74h]
		fld     qword [___1834cdh]
___46252h:
		fld     st1
		mov     edi, [esp+14h]
		fld     st0
		inc     edi
		fmul    st0, st2
		mov     [esp+14h], edi
		fstp    st1
		fstp    st2
		cmp     edi, [___243898h]
		jle     short ___46252h
		fstp    st0
		fstp    dword [___196e74h]
___46275h:
		fld     dword [___196e74h]
		fadd    dword [___196e78h]
		fstp    dword [___196e78h]
		cmp     dword [___196e78h], 42b40000h
		jle     short ___4629dh
		mov     dword [___196e78h], 42b40000h
___4629dh:
		xor     esi, esi
		mov     [___243898h], esi
		call    near ___58c60h
		jmp     near ___45fd0h
___462afh:
		xor     esi, esi
		mov     [esp+10h], esi
___462b5h:
		mov     edi, [esp+10h]
		inc     edi
		call    near ___58c60h
		mov     [esp+10h], edi
		cmp     edi, byte 14h
		jl      short ___462b5h
		xor     edx, edx
		mov     edi, 100h
		mov     [esp+30h], edx
___462d3h:
		xor     eax, eax
		mov     [esp+10h], eax
		mov     eax, [esp+30h]
		xor     esi, esi
		mov     [esp+48h], eax
___462e3h:
		xor     eax, eax
		mov     al, [esi+___1a3fc0h]
		mov     [esp+44h], eax
		xor     eax, eax
		mov     al, [esi+___1a3fc0h]
		imul    eax, edi
		fld     qword [___1834d5h]
		fild    word [esp+44h]
		fmul    st0, st1
		fild    dword [esp+48h]
		fxch    st0, st1
		fmul    st0, st1
		call    near __CHP
		fistp   dword [esp+40h]
		add     eax, [esp+40h]
		add     eax, 80h
		sar     eax, 8
		mov     [esp+0ch], eax
		xor     eax, eax
		mov     al, [esi+___1a3fc1h]
		mov     [esp+44h], eax
		xor     eax, eax
		mov     al, [esi+___1a3fc1h]
		imul    eax, edi
		fild    word [esp+44h]
		fmul    st0, st2
		fmul    st0, st1
		call    near __CHP
		fistp   dword [esp+40h]
		add     eax, [esp+40h]
		add     eax, 80h
		sar     eax, 8
		mov     [esp+8], eax
		xor     eax, eax
		mov     al, [esi+___1a3fc2h]
		mov     [esp+44h], eax
		xor     eax, eax
		mov     al, [esi+___1a3fc2h]
		imul    eax, edi
		fild    word [esp+44h]
		fmulp   st2, st0
		fmulp   st1, st0
		call    near __CHP
		fistp   dword [esp+40h]
		add     eax, [esp+40h]
		add     eax, 80h
		sar     eax, 8
		mov     [esp+3ch], eax
		cmp     dword [esp+0ch], byte 3fh
		jle     short ___463a6h
		mov     dword [esp+0ch], 3fh
___463a6h:
		cmp     dword [esp+8], byte 3fh
		jle     short ___463b5h
		mov     dword [esp+8], 3fh
___463b5h:
		cmp     dword [esp+3ch], byte 3fh
		jle     short ___463c4h
		mov     dword [esp+3ch], 3fh
___463c4h:
		imul    eax, [___243ce8h], byte 0ah
		mov     ecx, [esp+10h]
		lea     edx, [eax+0fh]
		cmp     edx, ecx
		jg      short ___463feh
		add     eax, byte 18h
		cmp     eax, ecx
		jl      short ___463feh
		xor     eax, eax
		mov     al, [esp+10h]
		push    eax
		xor     eax, eax
		mov     al, [esp+10h]
		push    eax
		xor     eax, eax
		mov     al, [esp+10h]
		push    eax
		xor     eax, eax
		mov     al, [esp+48h]
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
___463feh:
		mov     ebx, [esp+10h]
		inc     ebx
		add     esi, byte 3
		mov     [esp+10h], ebx
		cmp     ebx, 100h
		jl      near ___462e3h
		mov     ebx, [esp+30h]
		call    near ___58c60h
		add     ebx, byte 32h
		sub     edi, byte 32h
		mov     [esp+30h], ebx
		test    edi, edi
		jge     near ___462d3h
		xor     esi, esi
		mov     ecx, 100h
		mov     [esp+34h], esi
		mov     [esp+4ch], ecx
___46440h:
		mov     edi, [esp+34h]
		xor     ebx, ebx
		xor     esi, esi
		mov     [esp+10h], ebx
___4644ch:
		xor     eax, eax
		mov     al, [esi+___1a3fc0h]
		mov     [esp+44h], eax
		xor     eax, eax
		mov     al, [esi+___1a3fc0h]
		imul    eax, edi
		fld     qword [___1834d5h]
		fild    word [esp+44h]
		fmul    st0, st1
		fild    dword [esp+4ch]
		fxch    st0, st1
		fmul    st0, st1
		call    near __CHP
		fistp   dword [esp+40h]
		add     eax, [esp+40h]
		add     eax, 80h
		sar     eax, 8
		mov     [esp+0ch], eax
		xor     eax, eax
		mov     al, [esi+___1a3fc1h]
		mov     [esp+44h], eax
		xor     eax, eax
		mov     al, [esi+___1a3fc1h]
		imul    eax, edi
		fild    word [esp+44h]
		fmul    st0, st2
		fmul    st0, st1
		call    near __CHP
		fistp   dword [esp+40h]
		add     eax, [esp+40h]
		add     eax, 80h
		sar     eax, 8
		mov     [esp+8], eax
		xor     eax, eax
		mov     al, [esi+___1a3fc2h]
		mov     [esp+44h], eax
		xor     eax, eax
		mov     al, [esi+___1a3fc2h]
		imul    eax, edi
		fild    word [esp+44h]
		fmulp   st2, st0
		fmulp   st1, st0
		call    near __CHP
		fistp   dword [esp+40h]
		add     eax, [esp+40h]
		add     eax, 80h
		sar     eax, 8
		mov     [esp+3ch], eax
		cmp     dword [esp+0ch], byte 3fh
		jle     short ___4650fh
		mov     dword [esp+0ch], 3fh
___4650fh:
		cmp     dword [esp+8], byte 3fh
		jle     short ___4651eh
		mov     dword [esp+8], 3fh
___4651eh:
		cmp     dword [esp+3ch], byte 3fh
		jle     short ___4652dh
		mov     dword [esp+3ch], 3fh
___4652dh:
		imul    eax, [___243ce8h], byte 0ah
		mov     ecx, [esp+10h]
		lea     edx, [eax+0fh]
		cmp     edx, ecx
		jg      short ___46567h
		add     eax, byte 18h
		cmp     eax, ecx
		jl      short ___46567h
		xor     eax, eax
		mov     al, [esp+10h]
		push    eax
		xor     eax, eax
		mov     al, [esp+10h]
		push    eax
		xor     eax, eax
		mov     al, [esp+10h]
		push    eax
		xor     eax, eax
		mov     al, [esp+48h]
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
___46567h:
		mov     ebx, [esp+10h]
		inc     ebx
		add     esi, byte 3
		mov     [esp+10h], ebx
		cmp     ebx, 100h
		jl      near ___4644ch
		call    near ___58c60h
		mov     esi, [esp+34h]
		mov     edi, [esp+4ch]
		add     esi, byte 0ah
		sub     edi, byte 0ah
		mov     [esp+34h], esi
		mov     [esp+4ch], edi
		test    edi, edi
		jge     near ___46440h
		xor     edx, edx
		mov     [esp+10h], edx
___465a8h:
		mov     ecx, [esp+10h]
		inc     ecx
		call    near ___58c60h
		mov     [esp+10h], ecx
		cmp     ecx, byte 32h
		jl      short ___465a8h
		mov     eax, 100h
		xor     edi, edi
		mov     [esp+38h], eax
___465c6h:
		xor     esi, esi
		mov     eax, [esp+38h]
		mov     [esp+10h], esi
		mov     [esp+24h], eax
___465d4h:
		imul    eax, [___243ce8h], byte 0ah
		mov     ebx, [esp+10h]
		lea     edx, [eax+0fh]
		cmp     edx, ebx
		jg      short ___465f1h
		add     eax, byte 18h
		cmp     eax, ebx
		jge     near ___466c1h
___465f1h:
		xor     eax, eax
		mov     al, [esi+___1a3fc1h]
		mov     [esp+44h], eax
		fild    word [esp+44h]
		xor     eax, eax
		fmul    qword [___18349dh]
		mov     al, [esi+___1a3fc0h]
		mov     [esp+44h], eax
		fild    word [esp+44h]
		xor     eax, eax
		fmul    qword [___1834a5h]
		mov     al, [esi+___1a3fc2h]
		faddp   st1, st0
		mov     [esp+44h], eax
		fild    word [esp+44h]
		fmul    qword [___1834adh]
		faddp   st1, st0
		fdiv    qword [___1834e1h]
		xor     eax, eax
		mov     al, [esi+___1a3fc0h]
		mov     edx, eax
		imul    edx, edi
		mov     ebx, [esp+24h]
		call    near __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		imul    eax, ebx
		add     edx, eax
		add     edx, 80h
		sar     edx, 8
		mov     [esp+0ch], edx
		xor     edx, edx
		mov     dl, [esi+___1a3fc1h]
		imul    edx, edi
		add     edx, eax
		add     edx, 80h
		sar     edx, 8
		mov     [esp+8], edx
		xor     edx, edx
		mov     dl, [esi+___1a3fc2h]
		imul    edx, edi
		add     eax, edx
		add     eax, 80h
		sar     eax, 8
		mov     [esp+3ch], eax
		xor     eax, eax
		mov     al, [esp+10h]
		push    eax
		xor     eax, eax
		mov     al, [esp+10h]
		push    eax
		xor     eax, eax
		mov     al, [esp+10h]
		push    eax
		xor     eax, eax
		mov     al, [esp+48h]
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
___466c1h:
		mov     ecx, [esp+10h]
		inc     ecx
		add     esi, byte 3
		mov     [esp+10h], ecx
		cmp     ecx, 100h
		jl      near ___465d4h
		mov     edx, [esp+38h]
		call    near ___58c60h
		sub     edx, byte 8
		add     edi, byte 8
		mov     [esp+38h], edx
		cmp     edi, 100h
		jl      near ___465c6h
		mov     ebx, 3fh
		xor     ecx, ecx
		mov     [___196e70h], ebx
		mov     [___243898h], ecx
		mov     eax, [___243898h]
		mov     [___243874h], eax
		mov     [___243894h], ecx
		mov     eax, [___243878h]
		mov     [___243894h], eax
		mov     eax, [___243894h]
		mov     [___243330h], eax
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

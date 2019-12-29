cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___196d98h
	extern	___183569h
	extern	___1a51d0h
	extern	___1a51d1h
	extern	___1a51d2h
	extern	___1a42b4h
	extern	___1a42b8h
	extern	___1a42bch
	extern	___1a54d0h
	extern	___243d80h
	extern	___1b1cd0h
	extern	memset_
	extern	___196e74h
	extern	___196e78h
	extern	___2432fch
	extern	___243898h
	extern	___1a42c0h
	extern	__CHP
	extern	___1a42c4h
	extern	___1a42c8h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	dRally_Audio_setMasterVolume
	extern	___18353dh
	extern	___18356dh
	extern	___183545h
	extern	___183575h
	extern	___18354dh
	extern	___243304h
	extern	___243308h
	extern	___2432f8h
	extern	___2432ech
	extern	___18357dh
	extern	___2432f4h
	extern	___2432f0h
	extern	___183555h
	extern	___58c60h
	extern	___183565h
	extern	___183535h
	extern	___18352dh
	extern	___243310h
	extern	___243314h
	extern	___243874h
	extern	___183585h
	extern	___18355dh
	extern	___243894h
	extern	___243878h
	extern	___243330h
	extern 	VGA13_ACTIVESCREEN
	extern 	VGA13_PRESENTSCREEN

section .text

__GDECL(___46a10h)
		push    8ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 60h
		and     esp, byte 0fffffff8h
		cmp     dword [___196d98h], byte 40h
		jne     near ___46f3ah
		xor     ecx, ecx
		mov     [esp+5ch], ecx
		fld     dword [___183569h]
___46a41h:
		mov     edx, [esp+5ch]
		lea     edx, [edx+edx*2]
		xor     eax, eax
		mov     al, [edx+___1a51d0h]
		mov     [esp+4ch], eax
		fild    word [esp+4ch]
		fdiv    st0, st1
		xor     eax, eax
		mov     al, [edx+___1a51d1h]
		mov     [esp+4ch], eax
		fild    word [esp+4ch]
		fdiv    st0, st2
		xor     eax, eax
		mov     al, [edx+___1a51d2h]
		mov     [esp+4ch], eax
		fild    word [esp+4ch]
		fdiv    st0, st3
		mov     edi, [esp+5ch]
		inc     edi
		add     ecx, byte 0ch
		mov     [esp+5ch], edi
		fxch    st0, st2
		fstp    dword [ecx+___1a42b4h]
		fstp    dword [ecx+___1a42b8h]
		fstp    dword [ecx+___1a42bch]
		cmp     edi, 100h
		jl      short ___46a41h
		mov     edx, ___1a54d0h
		fstp    st0
		lea     eax, [edx+0c800h]
		xor     ebx, ebx
		mov     [esp+24h], eax
___46ab9h:
		mov     esi, [___243d80h]
		mov     ecx, 100h
		add     esi, ebx
		mov     edi, edx
		add     esi, 0a0h
		add     edx, 100h
		call 	__MOVS
		mov     ecx, [esp+24h]
		add     ebx, 200h
		cmp     edx, ecx
		jne     short ___46ab9h
		mov     eax, ___1a54d0h
		mov     edx, ___1a54d0h
		xor     ebx, ebx
		add     eax, 0fb00h
		add     edx, 0c900h
		mov     [esp+2ch], eax
___46b0dh:
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
		jne     short ___46b0dh
		mov     edx, ___1a54d0h
		lea     ebx, [edx+0c700h]
		lea     eax, [edx+6400h]
		mov     [esp+28h], eax
___46b54h:
		mov     ecx, 100h
		mov     edi, ___1b1cd0h
		mov     esi, ebx
		call 	__MOVS
		mov     ecx, 100h
		mov     esi, edx
		mov     edi, ebx
		call 	__MOVS
		mov     ecx, 100h
		mov     esi, ___1b1cd0h
		mov     edi, edx
		call 	__MOVS
		mov     edi, [esp+28h]
		add     edx, 100h
		sub     ebx, 100h
		cmp     edx, edi
		jne     short ___46b54h
		mov     ebx, 100h
		mov     eax, ___1b1cd0h
		xor     edx, edi
		call    near memset_
		xor     ecx, ecx
		mov     eax, 3f666666h
		mov     edx, 42b40000h
		mov     ebx, 40h
		mov     [___196e74h], eax
		mov     [___196e78h], edx
		mov     [___2432fch], ebx
		mov     [___243898h], ecx
___46bf2h:
		xor     esi, esi
		mov     [esp+5ch], esi
___46bf8h:
		fld     dword [esi+___1a42c0h]
		xor     eax, eax
		fmul    dword [___196e78h]
		mov     al, [esp+5ch]
		call    near __CHP
		push    eax
		fistp   dword [esp+4ch]
		mov     al, [esp+4ch]
		fld     dword [esi+___1a42c4h]
		and     eax, 0ffh
		fmul    dword [___196e78h]
		push    eax
		call    near __CHP
		fistp   dword [esp+50h]
		mov     al, [esp+50h]
		fld     dword [esi+___1a42c8h]
		and     eax, 0ffh
		fmul    dword [___196e78h]
		push    eax
		call    near __CHP
		fistp   dword [esp+54h]
		mov     al, [esp+54h]
		and     eax, 0ffh
		mov     edi, [esp+68h]
		push    eax
		add     esi, byte 0ch
		inc     edi
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     [esp+5ch], edi
		cmp     edi, 100h
		jl      short ___46bf8h
		fld     dword [___196e78h]
		call    near __CHP
		fistp   dword [esp+48h]
		imul    eax, [esp+48h], 2d8h
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
		fld     dword [___196e78h]
		fmul    qword [___18353dh]
		fdiv    qword [___18356dh]
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fxch    st0, st1
		fmul    qword [___183545h]
		fdivr   qword [___183575h]
		fxch    st0, st1
		fmul    qword [___18354dh]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [___243304h]
		mov     edx, [___243304h]
		;mov     ebx, 0a0040h
	mov 	ebx, VGA13_ACTIVESCREEN+40h
		lea     eax, [edx*4+0]
		mov     [___243308h], ebx
		sub     eax, edx
		xor     ebx, ebx
		shl     eax, 3
		call    near __CHP
		add     eax, edx
		fistp   dword [___2432f8h]
		shl     eax, 3
		mov     edx, 0c940h
		mov     [___2432ech], eax
___46d07h:
		fld     dword [___196e78h]
		fdiv    qword [___18357dh]
		mov     edi, [___243308h]
		mov     esi, edx
		sub     edi, byte 40h
		call    near __CHP
		fistp   dword [esp+48h]
		mov     ecx, [esp+48h]
		add     edx, byte 40h
		sub     esi, ecx
		add     edi, ebx
		add     esi, ___1a54d0h
		add     ebx, 140h
		call 	__MOVS
		cmp     edx, 0fb40h
		jne     short ___46d07h
	call 	VGA13_PRESENTSCREEN
		xor     ecx, ecx
		xor     esi, esi
___46d5ah:
		fld     dword [___196e78h]
		fdiv    qword [___18357dh]
		mov     ebx, [___2432fch]
		mov     eax, [___243308h]
		mov     edx, esi
		sub     eax, byte 40h
		call    near __CHP
		fistp   dword [esp+48h]
		mov     edi, [esp+48h]
		add     eax, ecx
		sub     ebx, edi
		add     eax, edi
		add     ecx, 140h
		call    near memset_
		cmp     ecx, 0fa00h
		jne     short ___46d5ah
		fld     dword [___196e78h]
		fdiv    qword [___18357dh]
		xor     ebx, ebx
		mov     [esp+38h], ebx
		call    near __CHP
		fistp   dword [___2432fch]
___46db9h:
		mov     eax, [___2432ech]
		xor     al, al
		mov     [___2432f4h], eax
		cmp     eax, dword 0c800h
		jle     short ___46dd6h
		mov     dword [___2432f4h], 0c800h
___46dd6h:
		mov     eax, [___2432f4h]
		mov     edi, [___2432f8h]
		imul    eax, edi
		mov     edx, eax
		mov     ebx, [___243308h]
		sar     edx, 10h
		sar     eax, 11h
		mov     [___2432f0h], edx
		lea     edx, [eax-0ah]
		add     ebx, edx
		mov     cl, 0ah
		xor     al, al
___46e01h:
		or      dx, dx
		jl      short ___46e08h
		mov     [ebx], al
___46e08h:
		inc     ebx
		inc     dx
		dec     cl
		jne     short ___46e01h
		mov     edx, 0ffh
		mov     eax, [___2432f0h]
		mov     ebx, [___2432f4h]
		mov     ecx, [___243308h]
		dec     ebx
		mov     edi, eax
		sub     edx, eax
		sar     edi, 1
		add     ebx, ___1a54d0h
		add     edi, ecx
		mov     ecx, 100h
___46e39h:
		mov     al, [ebx]
		add     dh, dl
		mov     [edi], al
		adc     edi, byte 0
		inc     ebx
		dec     ecx
		jne     short ___46e39h
		mov     edx, [___2432f0h]
		sar     edx, 1
		mov     esi, [___2432f0h]
		add     edx, 0ffh
		mov     ebx, [___243308h]
		sub     edx, esi
		add     ebx, edx
		mov     cl, 0ah
		xor     al, al
___46e68h:
		cmp     dx, 0ffh
		jg      short ___46e78h
		mov     [ebx], al
		inc     ebx
		inc     dx
		dec     cl
		jne     short ___46e68h
___46e78h:
		mov     ebx, [esp+38h]
		mov     edi, [___243308h]
		mov     eax, [___243304h]
		mov     edx, [___2432ech]
		add     edi, 140h
		inc     ebx
		sub     edx, eax
		mov     [___243308h], edi
		mov     [___2432ech], edx
		mov     [esp+38h], ebx
		cmp     ebx, 0c8h
		jl      near ___46db9h
		cmp     dword [___196e78h], 3f800000h
		je      near ___472cdh
		xor     edi, edi
		mov     [esp+5ch], edi
		cmp     dword [___243898h], byte 0
		jl      short ___46f00h
		fld     dword [___196e74h]
		fld     qword [___183555h]
___46eddh:
		fld     st1
		mov     edx, [esp+5ch]
		fld     st0
		inc     edx
		fmul    st0, st2
		mov     [esp+5ch], edx
		fstp    st1
		fstp    st2
		cmp     edx, [___243898h]
		jle     short ___46eddh
		fstp    st0
		fstp    dword [___196e74h]
___46f00h:
		fld     dword [___196e74h]
		fsubr   dword [___196e78h]
		fstp    dword [___196e78h]
		cmp     dword [___196e78h], 3f800000h
		jge     short ___46f28h
		mov     dword [___196e78h], 3f800000h
___46f28h:
		xor     edi, edi
		mov     [___243898h], edi
		call    near ___58c60h
		jmp     near ___46bf2h
___46f3ah:
		xor     ebx, ebx
		xor     edx, edx
		mov     [esp+5ch], ebx
		fld     dword [___183565h]
___46f48h:
		mov     ebx, [esp+5ch]
		lea     ebx, [ebx+ebx*2]
		xor     eax, eax
		mov     al, [ebx+___1a51d0h]
		mov     [esp+4ch], eax
		fild    word [esp+4ch]
		fdiv    st0, st1
		xor     eax, eax
		mov     al, [ebx+___1a51d1h]
		mov     [esp+4ch], eax
		fild    word [esp+4ch]
		fdiv    st0, st2
		xor     eax, eax
		mov     al, [ebx+___1a51d2h]
		mov     [esp+4ch], eax
		fild    word [esp+4ch]
		fdiv    st0, st3
		mov     esi, [esp+5ch]
		inc     esi
		add     edx, byte 0ch
		mov     [esp+5ch], esi
		fxch    st0, st2
		fstp    dword [edx+___1a42b4h]
		fstp    dword [edx+___1a42b8h]
		fstp    dword [edx+___1a42bch]
		cmp     esi, 100h
		jl      short ___46f48h
		fstp    st0
		mov     ebx, ___1a54d0h
		xor     edx, edx
___46fb6h:
		mov     ecx, 140h
		mov     eax, [___243d80h]
		mov     edi, ebx
		add     eax, edx
		add     ebx, 140h
		lea     esi, [eax+60h]
		add     edx, 200h
		call 	__MOVS
		cmp     edx, 19000h
		jne     short ___46fb6h
		xor     eax, eax
		xor     edx, edx
		mov     [esp+5ch], eax
		fld     qword [___183535h]
		fld     qword [___18352dh]
___46fffh:
		fild    dword [esp+5ch]
		fmul    st0, st1
		fld     st0
		fcos    
		fxch    st0, st1
		fsin    
		fxch    st0, st1
		fmul    st0, st3
		fxch    st0, st1
		fmul    st0, st3
		mov     ebx, [___243310h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+48h]
		mov     eax, [esp+48h]
		call    near __CHP
		mov     [edx+ebx*1], eax
		mov     ebx, [___243314h]
		fistp   dword [esp+48h]
		mov     eax, [esp+48h]
		mov     [edx+ebx*1], eax
		mov     ebx, [esp+5ch]
		inc     ebx
		add     edx, byte 4
		mov     [esp+5ch], ebx
		cmp     ebx, 258h
		jl      short ___46fffh
		fstp    st0
		mov     esi, 41000000h
		fstp    st0
		mov     [esp+58h], esi
___47064h:
		xor     eax, eax
		mov     [___243898h], eax
		mov     eax, [___243898h]
		mov     [___243874h], eax
		call    near ___58c60h
		xor     edx, edx
		xor     esi, esi
		mov     [esp+5ch], edx
___47082h:
		fld     dword [esi+___1a42c0h]
		fld     dword [esp+58h]
		xor     eax, eax
		fsubr   qword [___183585h]
		mov     al, [esp+5ch]
		fstp    qword [esp+50h]
		fmul    qword [esp+50h]
		push    eax
		call    near __CHP
		fistp   dword [esp+4ch]
		mov     al, [esp+4ch]
		fld     dword [esi+___1a42c4h]
		and     eax, 0ffh
		fmul    qword [esp+54h]
		push    eax
		call    near __CHP
		fistp   dword [esp+50h]
		mov     al, [esp+50h]
		fld     dword [esi+___1a42c8h]
		and     eax, 0ffh
		fmul    qword [esp+58h]
		push    eax
		call    near __CHP
		fistp   dword [esp+54h]
		mov     al, [esp+54h]
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ebx, [esp+5ch]
		inc     ebx
		add     esi, byte 0ch
		mov     [esp+5ch], ebx
		cmp     ebx, 100h
		jl      near ___47082h
		fld     qword [esp+50h]
		call    near __CHP
		fistp   dword [esp+48h]
		imul    eax, [esp+48h], 1b4h
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
		fld     dword [esp+58h]
		call    near __CHP
		fistp   dword [esp+48h]
		mov     eax, [esp+48h]
		mov     ebx, 257h
		sub     eax, byte 8
		sub     ebx, eax
		mov     eax, ebx
		mov     ebx, [___243310h]
		mov     ebx, [ebx+eax*4]
		add     ebx, ebx
		mov     [esp+44h], ebx
		mov     ebx, [___243314h]
		mov     eax, [ebx+eax*4]
		add     eax, eax
		mov     [esp+1ch], eax
		sar     eax, 1
		mov     [esp+40h], eax
		mov     eax, [esp+44h]
		;mov     edx, 0a0000h
	mov 	edx, VGA13_ACTIVESCREEN
		sar     eax, 1
		xor     edi, edi
		mov     [esp+3ch], eax
		mov     [esp+30h], eax
		mov     eax, [esp+40h]
		mov     [esp+34h], edi
		mov     [esp+10h], eax
___47187h:
		mov     eax, [esp+40h]
		sar     eax, 0ah
		mov     ebx, [esp+40h]
		mov     [esp+18h], eax
		add     ebx, [esp+1ch]
		mov     eax, [esp+3ch]
		mov     ecx, [esp+3ch]
		sar     eax, 0ah
		mov     [esp+40h], ebx
		mov     [esp+14h], eax
		mov     eax, [esp+44h]
		mov     ebx, [esp+30h]
		add     ecx, eax
		mov     eax, [esp+10h]
		mov     [esp+3ch], ecx
		mov     [esp+20h], eax
		xor     ecx, ecx
___471c5h:
		mov     esi, [esp+18h]
		mov     edi, ebx
		mov     eax, [esp+44h]
		sar     edi, 0ah
		add     ebx, eax
		mov     eax, [esp+20h]
		sub     edi, esi
		mov     esi, [esp+14h]
		sar     eax, 0ah
		add     eax, esi
		mov     esi, [esp+1ch]
		add     [esp+20h], esi
		test    edi, edi
		jle     short ___47229h
		cmp     edi, 13fh
		jge     short ___47229h
		test    eax, eax
		jle     short ___47229h
		cmp     eax, dword 0c7h
		jge     short ___47229h
		mov     esi, eax
		shl     esi, 8
		shl     eax, 6
		add     eax, esi
		lea     esi, [eax+edi*1]
		add     esi, ___1a54d0h
		mov     edi, edx
		movsw   
		add     edi, 13eh
		add     esi, 13eh
		movsw   
		jmp     short ___47238h
___47229h:
		mov     edi, edx
		xor     ax, ax
		stosw   
		add     edi, 13eh
		stosw   
___47238h:
		add     ecx, byte 2
		add     edx, byte 2
		cmp     ecx, 140h
		jl      near ___471c5h
	;call 	VGA13_PRESENTSCREEN
		mov     edi, [esp+34h]
		add     edi, byte 2
		add     edx, 140h
		mov     [esp+34h], edi
		cmp     edi, 0c8h
		jl      near ___47187h
	call 	VGA13_PRESENTSCREEN
		xor     edx, edx
		mov     [esp+5ch], edx
		cmp     dword [___243898h], byte 0
		jl      short ___472a3h
___47276h:
		cmp     dword [esp+58h], 43160000h
		jge     short ___47292h
		fld     dword [esp+58h]
		fld     st0
		fmul    qword [___18355dh]
		fstp    st1
		fstp    dword [esp+58h]
___47292h:
		mov     esi, [esp+5ch]
		inc     esi
		mov     [esp+5ch], esi
		cmp     esi, [___243898h]
		jle     short ___47276h
___472a3h:
		fld     dword [esp+58h]
		fcomp   dword [___183565h]
		fnstsw  ax
		sahf    
		jbe     short ___472bah
		mov     dword [esp+58h], 43160000h
___472bah:
		fld     dword [esp+58h]
		fcomp   dword [___183565h]
		fnstsw  ax
		sahf    
		jne     near ___47064h
___472cdh:
		xor     edx, edx
		mov     [___243898h], edx
		mov     eax, [___243898h]
		mov     [___243874h], eax
		mov     [___243894h], edx
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

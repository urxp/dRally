cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCPY
	extern	___105efh
	extern	__STOSB
	extern	___196a84h
	extern	___196a98h
	extern	___196a9ch
	extern	___196aa0h
	extern	___185a50h
	extern	___1a1ef8h
	extern	___2ec68h
	extern	___199f54h
	extern	___185a30h
	extern	___1a01d4h
	extern	___1a01d8h
	extern	___1a01dch
	extern	___1a01d0h
	extern	___1a0190h
	extern	___181d17h
	extern	___181d0fh
	extern	___181d1bh
	extern	___181d1fh
	extern	___181d0bh
	extern	__CHP
	extern	___1a01b8h
	extern	___1a01e0h
	extern	___1a022ch
	extern	___1a0230h
	extern	___1a0234h
	extern	___1a0238h
	extern	rand_
	extern	___1a01fch
	extern	___1a01ech
	extern	___1a0210h
	extern	___18e938h
	extern	___1a01f0h
	extern	___18e93ch
	extern	___1a01f4h
	extern	___18e940h
	extern	___1a01f8h
	extern	___18e2a4h
	extern	___1a021ch
	extern	___1a0228h
	extern	___1a0220h
	extern	___1a020ch
	extern	___1a0224h
	extern	___1a0214h
	extern	___1a0218h
	extern	___2b318h
	extern	___1a1ee8h
	extern	___1a1ec0h
	extern	___1a1ee0h
	extern	___1a1eech
	extern	___1a1ec8h
	extern	___1a1ed0h
	extern	___1a1ee4h
	extern 	printf_

section .text

__GDECL(___2415ch)
		push    11ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, 100h
		and     esp, byte 0fffffff8h
		mov     ecx, 37h
		mov     edi, esp
		mov     esi, ___105efh
		lea     eax, [esp+0dch]
		rep movsd   
		xor     edx, edx
		mov     ecx, 14h
		xor     ebx, ebx
		call    near __STOSB
		mov     edx, 13h
		mov     [___196a84h], ebx
		mov     [___196a98h], ebx
		mov     [___196a9ch], ebx
		mov     [___196aa0h], ebx
		mov     [___185a50h], ebx
		mov     [___1a1ef8h], edx
		call    near ___2ec68h
		mov     [___199f54h], ebx
		mov     [___185a30h], ebx
		xor     edx, edx
		xor     eax, eax
___241d8h:
		add     eax, byte 6ch
		mov     [eax+___1a01d4h], edx
		mov     [eax+___1a01d8h], edx
		mov     [eax+___1a01dch], edx
		mov     [eax+___1a01d0h], edx
		cmp     eax, dword 870h
		jne     short ___241d8h
		mov     ecx, 5
		xor     eax, eax
___24201h:
		add     eax, byte 6ch
		mov     [eax+___1a0190h], ecx
		cmp     eax, dword 144h
		jne     short ___24201h
		mov     esi, 4
___24216h:
		add     eax, byte 6ch
		mov     [eax+___1a0190h], esi
		cmp     eax, dword 2f4h
		jne     short ___24216h
		mov     edi, 3
___2422bh:
		add     eax, byte 6ch
		mov     [eax+___1a0190h], edi
		cmp     eax, dword 438h
		jne     short ___2422bh
		mov     edx, 2
___24240h:
		add     eax, byte 6ch
		mov     [eax+___1a0190h], edx
		cmp     eax, dword 5e8h
		jne     short ___24240h
		mov     ebx, 1
___24255h:
		add     eax, byte 6ch
		mov     [eax+___1a0190h], ebx
		cmp     eax, dword 72ch
		jne     short ___24255h
___24265h:
		add     eax, byte 6ch
		xor     ecx, ecx
		mov     [eax+___1a0190h], ecx
		cmp     eax, dword 870h
		jne     short ___24265h
		mov     esi, 1
		mov     edi, 12h
		xor     edx, edx
		mov     [esp+0f8h], esi
		mov     [esp+0fch], edi
		fld     dword [___181d17h]
		fld     qword [___181d0fh]
		fld     dword [___181d1bh]
		fld     dword [___181d1fh]
		fld     dword [___181d0bh]
___242afh:
		fild    dword [esp+0f8h]
		fldlg2  
		fxch    st0, st1
		fyl2x   
		fmul    st0, st1
		call    near __CHP
		fsubr   st0, st3
		fild    dword [esp+0fch]
		fmul    st0, st5
		fadd    st0, st3
		faddp   st1, st0
		fmul    st0, st5
		add     edx, byte 6ch
		call    near __CHP
		fistp   dword [esp+0f0h]
		mov     eax, [esp+0f0h]
		mov     ebx, [esp+0fch]
		mov     [edx+___1a01b8h], eax
		mov     eax, [esp+0f8h]
		dec     ebx
		inc     eax
		mov     [esp+0fch], ebx
		mov     [esp+0f8h], eax
		cmp     edx, 804h
		jne     short ___242afh
		fstp    st0
		mov     ecx, ___1a01e0h
		fstp    st0
		xor     ebx, ebx
		fstp    st0
		fstp    st0
		mov     [esp+0f4h], ecx
		fstp    st0
___2432eh:
		imul    esi, ebx, byte 6ch
		xor     edi, edi
		mov     [esi+___1a022ch], edi
		mov     [esi+___1a0230h], edi
		mov     [esi+___1a0234h], edi
		mov     [esi+___1a0238h], edi
		call    near rand_
		mov     edx, eax
		mov     ecx, 186a0h
		sar     edx, 1fh
		idiv    ecx
		imul    ecx, [esi+___1a01fch], 6e0h
		mov     [esi+___1a01ech], edi
		mov     [esi+___1a0210h], edx
		mov     ecx, [ecx+___18e938h]
		call    near rand_
		mov     edx, eax
		sar     edx, 1fh
		idiv    ecx
		mov     [esi+___1a01f0h], edx
		imul    ecx, [esi+___1a01fch], 6e0h
		mov     ecx, [ecx+___18e93ch]
		call    near rand_
		mov     edx, eax
		sar     edx, 1fh
		idiv    ecx
		imul    ecx, [esi+___1a01fch], 6e0h
		mov     [esi+___1a01f4h], edx
		mov     ecx, [ecx+___18e940h]
		call    near rand_
		mov     edx, eax
		sar     edx, 1fh
		idiv    ecx
		mov     [esi+___1a01f8h], edx
		imul    eax, [esi+___1a01fch], 6e0h
		mov     eax, [eax+___18e2a4h]
		mov     [esi+___1a021ch], eax
		lea     eax, [ebx+1]
		mov     ecx, [___1a1ef8h]
		mov     edx, ebx
		mov     [esi+___1a0228h], eax
		imul    esi, ecx, byte 6ch
___243f8h:
		cmp     byte [esp+edx*1+0dch], 0
		jne     short ___2440ah
		cmp     edx, [esi+___1a0220h]
		jne     short ___2440dh
___2440ah:
		inc     edx
		jmp     short ___243f8h
___2440dh:
		imul    esi, edx, byte 0bh
		mov     byte [esp+edx*1+0dch], 1
		imul    ecx, ebx, byte 6ch
		mov     eax, esp
		mov     edi, [esp+0f4h]
		add     esi, eax
		call 	__STRCPY
		lea     eax, [edi+6ch]
		mov     [esp+0f4h], eax
		mov     [ecx+___1a0220h], edx
		inc     ebx
		mov     [ecx+___1a020ch], edx
		cmp     ebx, byte 13h
		jl      near ___2432eh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		xor     ebx, ebx
		mov     [eax*4+___1a01ech], ebx
		mov     [eax*4+___1a01f0h], ebx
		mov     [eax*4+___1a01f8h], ebx
		mov     [eax*4+___1a01f4h], ebx
		xor     ecx, ecx
		mov     [eax*4+___1a01fch], ebx
		mov     [eax*4+___1a022ch], ecx
		mov     [eax*4+___1a0230h], ecx
		mov     [eax*4+___1a0234h], ecx
		mov     [eax*4+___1a0224h], ecx
		mov     edx, 1efh
		mov     [eax*4+___1a0238h], ecx
		mov     ecx, 0ffffffffh
		mov     [eax*4+___1a0210h], edx
		mov     [eax*4+___1a0214h], ecx
		lea     edx, [ebx*8+0]
		mov     [eax*4+___1a0218h], ecx
		shl     edx, 3
		mov     ebx, 14h
		shl     edx, 5
		mov     [eax*4+___1a0228h], ebx
		mov     edx, [edx+___18e2a4h]
		xor     edi, edi
		mov     [eax*4+___1a021ch], edx
		call    near ___2b318h
		mov     [___1a1ee8h], edi
		mov     [___1a1ec0h], edi
		xor     edx, edx
		xor     eax, eax
		mov     edi, 1
		mov     [___1a1ee0h], eax
		mov     [___1a1eech], edx
		mov     [___1a1ec8h], edx
		mov     [___1a1ed0h], edx
		mov     [___1a1ee4h], edi
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

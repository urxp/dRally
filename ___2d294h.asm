cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___13248h
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___1a0218h
	extern	___1923c0h
	extern	___13094h
	extern	___192e10h
	extern	___1a0214h
	extern	___18220ch
	extern	___182214h
	extern	___18221ch
	extern	__CHP
	extern	itoa_
	extern	___182224h
	extern	___18222ch
	extern	___182234h
	extern	___18223ch
	extern	___182244h
	extern	___180724h
	extern	___192e38h
	extern	___192e60h
	extern	___192e88h
	extern	___192eb0h
	extern	___192ed8h

section .text

__GDECL(___2d294h)
		push    80h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 64h
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		mov     dl, 5
		mov     dh, [eax*4+___1a01fch]
		mov     ebx, [eax*4+___1a01fch]
		sub     dl, dh
		test    ebx, ebx
		jne     short ___2d2edh
		mov     dl, 4
___2d2edh:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     dword [eax*4+___1a0218h], byte 0ffffffffh
		jne     short ___2d375h
		and     edx, 0ffh
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		mov     ebx, ___1923c0h
		shl     eax, 4
		add     ebx, eax
		mov     edx, 136aah
		mov     eax, ebx
		call    near ___13094h
		mov     edx, 15eaah
		lea     eax, [ebx+28h]
		call    near ___13094h
		mov     edx, 186aah
		lea     eax, [ebx+50h]
		call    near ___13094h
		mov     edx, 1aeaah
		lea     eax, [ebx+78h]
		call    near ___13094h
		mov     edx, 1d6aah
		lea     eax, [ebx+0a0h]
		call    near ___13094h
		mov     edx, 1feaah
		lea     eax, [ebx+0c8h]
		jmp     near ___2d608h
___2d375h:
		mov     esi, ___192e10h
		mov     edi, esp
		call 	__STRCPY
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 0
		jne     short ___2d3f2h
		mov     eax, [eax+___1a0218h]
		dec     eax
		mov     [esp+60h], eax
		fild    dword [esp+60h]
		fdiv    qword [___18220ch]
		fmul    qword [___182214h]
		mov     ebx, 0ah
		fadd    qword [___18221ch]
		lea     edx, [esp+50h]
		call    near __CHP
		fistp   dword [esp+60h]
		mov     eax, [esp+60h]
		call    near itoa_
___2d3f2h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		mov     edi, [eax+___1a0214h]
		cmp     edi, byte 1
		jne     short ___2d451h
		mov     eax, [eax+___1a0218h]
		sub     eax, edi
		mov     [esp+60h], eax
		fild    dword [esp+60h]
		fdiv    qword [___18220ch]
		fmul    qword [___182224h]
		mov     ebx, 0ah
		fadd    qword [___18222ch]
		lea     edx, [esp+50h]
		call    near __CHP
		fistp   dword [esp+60h]
		mov     eax, [esp+60h]
		call    near itoa_
___2d451h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 2
		jne     short ___2d4adh
		mov     eax, [eax+___1a0218h]
		dec     eax
		mov     [esp+60h], eax
		fild    dword [esp+60h]
		fdiv    qword [___18220ch]
		fmul    qword [___182234h]
		mov     ebx, 0ah
		fadd    qword [___182214h]
		lea     edx, [esp+50h]
		call    near __CHP
		fistp   dword [esp+60h]
		mov     eax, [esp+60h]
		call    near itoa_
___2d4adh:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 3
		jne     short ___2d509h
		mov     eax, [eax+___1a0218h]
		dec     eax
		mov     [esp+60h], eax
		fild    dword [esp+60h]
		fdiv    qword [___18220ch]
		fmul    qword [___18223ch]
		mov     ebx, 0ah
		fadd    qword [___182234h]
		lea     edx, [esp+50h]
		call    near __CHP
		fistp   dword [esp+60h]
		mov     eax, [esp+60h]
		call    near itoa_
___2d509h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 4
		jne     short ___2d565h
		mov     eax, [eax+___1a0218h]
		dec     eax
		mov     [esp+60h], eax
		fild    dword [esp+60h]
		fdiv    qword [___18220ch]
		fmul    qword [___182244h]
		mov     ebx, 0ah
		fadd    qword [___18223ch]
		lea     edx, [esp+50h]
		call    near __CHP
		fistp   dword [esp+60h]
		mov     eax, [esp+60h]
		call    near itoa_
___2d565h:
		lea     esi, [esp+50h]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___180724h
		mov     edi, esp
		mov     edx, 136aah
		call 	__STRCAT
		mov     eax, esp
		call    near ___13094h
		mov     edx, 15eaah
		mov     eax, ___192e38h
		call    near ___13094h
		mov     edx, 186aah
		mov     eax, ___192e60h
		call    near ___13094h
		mov     edx, 1aeaah
		mov     eax, ___192e88h
		call    near ___13094h
		mov     edx, 1d6aah
		mov     eax, ___192eb0h
		call    near ___13094h
		mov     edx, 1feaah
		mov     eax, ___192ed8h
___2d608h:
		call    near ___13094h
		add     esp, byte 64h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

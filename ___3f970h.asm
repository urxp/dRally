cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCPY
	extern	___3f1f0h
	extern	___3f3d0h
	extern	___3f5b0h
	extern	___3f610h
	extern	___3f670h
	extern	___3f6c0h
	extern	___182effh
	extern	___182edfh
	extern	___243898h
	extern	___1de818h
	extern	___243cf4h
	extern	___2438b0h
	extern	___196dach
	extern	___2438b4h
	extern	___1de7d0h
	extern	___1de800h
	extern	___1de814h
	extern	___1de580h
	extern	___1de7e4h
	extern	___1de7e8h
	extern	___182ee7h
	extern	___182eefh
	extern	___1de7ech
	extern	___1de584h
	extern	___1de588h
	extern	___1de58ch
	extern	___1de594h
	extern	___243ce8h
	extern	___1de59ch
	extern	___182ed4h
	extern	strcmp_
	extern	___182ef7h
	extern	__CHP
	extern	___1de7e0h
	extern	___1de598h
	extern	___1de7f0h
	extern	___1de5a0h
	extern	___1de7f4h
	extern	___1de5a4h
	extern	___1de7f8h
	extern	___1de5a8h
	extern	___1de7fch
	extern	___1de5ach
	extern	___1de5b0h
	extern	___1de5b4h
	extern	___1de5d0h
	extern	___1de5d8h
	extern	___1de590h
	extern	___1de5e0h
	extern	___1de5dch
	extern	___1de5e4h
	extern	___1de5f4h
	extern	___1de604h
	extern	___1de5e8h
	extern	___1de5f8h
	extern	___1de608h
	extern	___19bd60h
	extern	___1de868h
	extern	___1de838h
	extern	___1de804h
	extern	___1de5b8h
	extern	___1de808h
	extern	___1de5bch
	extern	___1de80ch
	extern	___1de5c0h
	extern	___1de858h
	extern	___1de64ch
	extern	___1de85ch
	extern	___1de650h
	extern	___1de860h
	extern	___1de654h
	extern	___1de8ach
	extern	___1de6e0h
	extern	___1de8b0h
	extern	___1de6e4h
	extern	___1de8b4h
	extern	___1de6e8h
	extern	___1de900h
	extern	___1de774h
	extern	___1de904h
	extern	___1de778h
	extern	___1de908h
	extern	___1de5c4h
	extern	___1de77ch
	extern	___1de824h
	extern	___1de658h
	extern	___1de878h
	extern	___1de6ech
	extern	___1de8cch
	extern	___1de780h

section .text

__GDECL(___3f970h)
		push    518h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, 4fch
		and     esp, byte 0fffffff8h
		mov     ecx, 78h
		lea     edi, [esp+1e0h]
		mov     esi, ___3f1f0h
		rep movsd   
		mov     ecx, 78h
		mov     edi, esp
		mov     esi, ___3f3d0h
		rep movsd   
		mov     ecx, 18h
		lea     edi, [esp+3c0h]
		mov     esi, ___3f5b0h
		rep movsd   
		mov     ecx, 18h
		lea     edi, [esp+420h]
		mov     esi, ___3f610h
		rep movsd   
		mov     ecx, 14h
		lea     edi, [esp+480h]
		mov     esi, ___3f670h
		rep movsd   
		xor     edx, edx
		mov     ecx, 6
		lea     edi, [esp+4d0h]
		mov     esi, ___3f6c0h
		xor     eax, eax
		mov     [esp+4f8h], edx
		rep movsd   
		fld     qword [___182effh]
		fld     qword [___182edfh]
___3fa0fh:
		fild    dword [esp+4f8h]
		fmul    st0, st1
		mov     ebx, [esp+4f8h]
		add     eax, byte 4
		inc     ebx
		fadd    st0, st2
		mov     [esp+4f8h], ebx
		fstp    dword [eax+___243898h]
		cmp     ebx, byte 6
		jl      short ___3fa0fh
		fstp    st0
		mov     eax, [___1de818h]
		mov     esi, [___243cf4h]
		fstp    st0
		xor     edi, edi
		fld     dword [___2438b0h]
		mov     [___196dach], eax
		fstp    dword [___2438b4h]
		test    esi, esi
		jle     near ___3fe06h
		mov     esi, ___1de7d0h
		xor     ecx, ecx
		xor     ebx, ebx
___3fa6ah:
		mov     eax, [ecx+___1de800h]
		mov     edx, [ecx+___1de814h]
		mov     [ebx+___1de580h], eax
		imul    eax, edx, byte 78h
		imul    edx, [ebx+___1de580h], byte 14h
		add     edx, eax
		mov     [esp+4f4h], edx
		mov     edx, [ecx+___1de7e4h]
		shl     edx, 2
		mov     [esp+4f0h], edx
		mov     edx, [esp+4f4h]
		add     edx, [esp+4f0h]
		fld     dword [esp+edx*1+1e0h]
		imul    edx, [ebx+___1de580h], byte 14h
		add     edx, eax
		mov     eax, [ecx+___1de7e8h]
		shl     eax, 2
		add     eax, edx
		mov     edx, [ecx+___1de814h]
		fld     dword [esp+eax*1]
		imul    eax, edx, byte 18h
		mov     edx, [ebx+___1de580h]
		shl     edx, 2
		add     edx, eax
		fld     dword [esp+edx*1+3c0h]
		fild    dword [ecx+___1de7e4h]
		fmul    qword [___182ee7h]
		fsubp   st1, st0
		fdivr   qword [___182eefh]
		imul    edx, [ecx+___1de814h], byte 14h
		mov     [esp+4f4h], edx
		mov     edx, [ecx+___1de7ech]
		shl     edx, 2
		mov     [esp+4f0h], edx
		mov     edx, [esp+4f4h]
		add     edx, [esp+4f0h]
		mov     [esp+4f0h], edx
		mov     edx, [ebx+___1de580h]
		fxch    st0, st2
		fstp    dword [ebx+___1de584h]
		shl     edx, 2
		fld     dword [ebx+___1de584h]
		add     eax, edx
		fstp    dword [ebx+___1de588h]
		mov     eax, [esp+eax*1+420h]
		fstp    dword [ebx+___1de58ch]
		mov     [esp+4f4h], eax
		mov     eax, [esp+4f0h]
		mov     edx, [esp+4f4h]
		mov     eax, [esp+eax*1+480h]
		fstp    dword [ebx+___1de594h]
		add     edx, eax
		mov     eax, [___243ce8h]
		mov     [ebx+___1de59ch], edx
		cmp     edi, eax
		jne     short ___3fb95h
		add     edx, byte 64h
		mov     [ebx+___1de59ch], edx
___3fb95h:
		mov     edx, ___182ed4h
		mov     eax, esi
		call    near strcmp_
		test    eax, eax
		jne     short ___3fbc0h
		fild    dword [ebx+___1de59ch]
		fld     st0
		fmul    qword [___182ef7h]
		faddp   st1, st0
		call    near __CHP
		fistp   dword [ebx+___1de59ch]
___3fbc0h:
		cmp     dword [ebx+___1de59ch], 384h
		jle     short ___3fbd6h
		mov     dword [ebx+___1de59ch], 384h
___3fbd6h:
		mov     eax, [ebx+___1de580h]
		mov     edx, [ecx+___1de7e0h]
		fld     dword [esp+eax*4+4d0h]
		mov     eax, 64h
		sub     eax, edx
		shl     eax, 0ah
		mov     [ebx+___1de598h], eax
		mov     eax, [ecx+___1de7f0h]
		mov     [ebx+___1de5a0h], eax
		mov     eax, [ecx+___1de7f4h]
		mov     [ebx+___1de5a4h], eax
		mov     eax, [ecx+___1de7f8h]
		mov     [ebx+___1de5a8h], eax
		mov     eax, [ecx+___1de7fch]
		mov     [ebx+___1de5ach], eax
		mov     eax, 19000h
		mov     [ebx+___1de5b0h], eax
		mov     [ebx+___1de5b4h], eax
		xor     eax, eax
		mov     [ebx+___1de5d0h], eax
		mov     [ebx+___1de5d8h], eax
		fstp    dword [ebx+___1de590h]
		mov     edx, [ebx+___1de580h]
		mov     [ebx+___1de5e0h], eax
		test    edx, edx
		jne     short ___3fc87h
		mov     eax, 1
		mov     edx, 16h
		mov     [ebx+___1de5dch], eax
		mov     [ebx+___1de5e4h], edx
		mov     eax, 8
		xor     edx, edx
		mov     [ebx+___1de5f4h], eax
		mov     [ebx+___1de604h], edx
___3fc87h:
		mov     eax, [ebx+___1de580h]
		cmp     eax, byte 1
		jne     short ___3fcb8h
		mov     edx, 11h
		mov     [ebx+___1de5dch], eax
		mov     eax, 0ffffffeeh
		mov     [ebx+___1de5f4h], edx
		mov     [ebx+___1de5e4h], eax
		mov     dword [ebx+___1de604h], 1
___3fcb8h:
		cmp     dword [ebx+___1de580h], byte 2
		jne     short ___3fcedh
		mov     eax, 1
		mov     edx, 0ffffffd8h
		mov     [ebx+___1de5dch], eax
		mov     [ebx+___1de5e4h], edx
		mov     eax, 7
		mov     edx, 2
		mov     [ebx+___1de5f4h], eax
		mov     [ebx+___1de604h], edx
___3fcedh:
		cmp     dword [ebx+___1de580h], byte 3
		jne     short ___3fd42h
		mov     edx, 2
		mov     eax, 10h
		mov     [ebx+___1de5dch], edx
		mov     [ebx+___1de5e4h], eax
		mov     edx, 14h
		mov     eax, 3
		mov     [ebx+___1de5f4h], edx
		mov     [ebx+___1de604h], eax
		mov     edx, 0ffffffefh
		mov     eax, 14h
		mov     [ebx+___1de5e8h], edx
		mov     [ebx+___1de5f8h], eax
		mov     dword [ebx+___1de608h], 3
___3fd42h:
		cmp     dword [ebx+___1de580h], byte 4
		jne     short ___3fd97h
		mov     edx, 2
		mov     eax, 10h
		mov     [ebx+___1de5dch], edx
		mov     [ebx+___1de5e4h], eax
		mov     edx, 13h
		mov     eax, 4
		mov     [ebx+___1de5f4h], edx
		mov     [ebx+___1de604h], eax
		mov     edx, 0ffffffefh
		mov     eax, 13h
		mov     [ebx+___1de5e8h], edx
		mov     [ebx+___1de5f8h], eax
		mov     dword [ebx+___1de608h], 4
___3fd97h:
		cmp     dword [ebx+___1de580h], byte 5
		jne     short ___3fdech
		mov     edx, 2
		mov     eax, 10h
		mov     [ebx+___1de5dch], edx
		mov     [ebx+___1de5e4h], eax
		mov     edx, 14h
		mov     eax, 5
		mov     [ebx+___1de5f4h], edx
		mov     [ebx+___1de604h], eax
		mov     edx, 0ffffffefh
		mov     eax, 14h
		mov     [ebx+___1de5e8h], edx
		mov     [ebx+___1de5f8h], eax
		mov     dword [ebx+___1de608h], 5
___3fdech:
		mov     eax, [___243cf4h]
		add     esi, byte 54h
		add     ecx, byte 54h
		inc     edi
		add     ebx, 94h
		cmp     edi, eax
		jl      near ___3fa6ah
___3fe06h:
		cmp     dword [___1de580h], byte 6
		jne     near ___3ffd9h
		cmp     dword [___19bd60h], byte 0
		jne     near ___3ffd9h
		mov     ebx, [___243ce8h]
		lea     eax, [ebx*8+0]
		add     eax, ebx
		shl     eax, 2
		add     eax, ebx
		cmp     dword [eax*4+___1de5ach], byte 0
		je      short ___3fe79h
		cmp     dword [___1de814h], byte 0
		jne     short ___3fe51h
		mov     dword [___1de584h], 40900000h
___3fe51h:
		cmp     dword [___1de814h], byte 1
		jne     short ___3fe64h
		mov     dword [___1de584h], 40933333h
___3fe64h:
		cmp     dword [___1de814h], byte 2
		jne     short ___3feb2h
		mov     dword [___1de584h], 40966666h
		jmp     short ___3feb2h
___3fe79h:
		cmp     dword [___1de814h], byte 0
		jne     short ___3fe8ch
		mov     dword [___1de584h], 4089999ah
___3fe8ch:
		cmp     dword [___1de814h], byte 1
		jne     short ___3fe9fh
		mov     dword [___1de584h], 408ccccdh
___3fe9fh:
		cmp     dword [___1de814h], byte 2
		jne     short ___3feb2h
		mov     dword [___1de584h], 40900000h
___3feb2h:
		mov     ebx, [___1de868h]
		lea     eax, [ebx*4+0]
		sub     eax, ebx
		lea     ebx, [eax*8+0]
		fld     dword [esp+ebx*1+3c4h]
		fild    dword [___1de838h]
		fmul    qword [___182ee7h]
		fsubp   st1, st0
		fdivr   qword [___182eefh]
		mov     edi, [___1de7e0h]
		mov     eax, 64h
		sub     eax, edi
		shl     eax, 0ah
		mov     ecx, [___1de868h]
		mov     [___1de598h], eax
		lea     eax, [ecx*4+0]
		fld     dword [___1de584h]
		add     ecx, eax
		fstp    dword [___1de588h]
		shl     ecx, 2
		mov     eax, [esp+ebx*1+434h]
		mov     edx, [esp+ecx*1+490h]
		xor     esi, esi
		add     eax, edx
		mov     [___1de58ch], esi
		mov     [___1de59ch], eax
		fstp    dword [___1de594h]
		cmp     eax, dword 384h
		jle     short ___3ff4ah
		mov     dword [___1de59ch], 384h
___3ff4ah:
		mov     eax, [esp+4dch]
		mov     esi, 19000h
		mov     edx, 2
		mov     ebx, 1eh
		mov     ecx, 13h
		mov     edi, 0ffffffe2h
		mov     [___1de590h], eax
		mov     [___1de5b0h], esi
		mov     [___1de5b4h], esi
		mov     [___1de5dch], edx
		mov     [___1de5e4h], ebx
		mov     [___1de5f4h], ecx
		mov     eax, [___1de7f0h]
		mov     [___1de5e8h], edi
		mov     [___1de5a0h], eax
		mov     eax, [___1de7f4h]
		mov     [___1de5f8h], ecx
		mov     [___1de5a4h], eax
		mov     eax, [___1de7f8h]
		mov     esi, 4
		mov     [___1de5a8h], eax
		mov     eax, [___1de7fch]
		mov     [___1de604h], esi
		mov     [___1de5ach], eax
		xor     eax, eax
		mov     [___1de608h], esi
		mov     [___1de5d0h], eax
___3ffd9h:
		mov     eax, [___1de804h]
		mov     [___1de5b8h], eax
		mov     eax, [___1de808h]
		mov     [___1de5bch], eax
		mov     eax, [___1de80ch]
		mov     [___1de5c0h], eax
		mov     eax, [___1de858h]
		mov     [___1de64ch], eax
		mov     eax, [___1de85ch]
		mov     [___1de650h], eax
		mov     eax, [___1de860h]
		mov     [___1de654h], eax
		mov     eax, [___1de8ach]
		mov     [___1de6e0h], eax
		mov     eax, [___1de8b0h]
		mov     [___1de6e4h], eax
		mov     eax, [___1de8b4h]
		mov     [___1de6e8h], eax
		mov     eax, [___1de900h]
		mov     [___1de774h], eax
		mov     eax, [___1de904h]
		mov     esi, ___1de7d0h
		mov     [___1de778h], eax
		mov     eax, [___1de908h]
		mov     edi, ___1de5c4h
		mov     [___1de77ch], eax
		call 	__STRCPY
		mov     esi, ___1de824h
		mov     edi, ___1de658h
		call 	__STRCPY
		mov     esi, ___1de878h
		mov     edi, ___1de6ech
		call 	__STRCPY
		mov     esi, ___1de8cch
		mov     edi, ___1de780h
		call 	__STRCPY
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

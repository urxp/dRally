cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243894h
	extern	___243878h
	extern	___243ce8h
	extern	___1e6fd8h
	extern	___1e6fdah
	extern	___24e4c0h
	extern	___1de598h
	extern	___1de5b4h
	extern	___1de5b0h
	extern	___1de5d0h
	extern	___1e6ed0h
	extern	___1e6f84h
	extern	__CHP
	extern	___1e6f88h
	extern	___1e701eh
	extern	___1e7022h
	extern	___1e6edch
	extern	___243cd0h
	extern	___618c4h
	extern	___243cach
	extern	race___40164h
	extern	CONNECTION_TYPE

section .text

__GDECL(race___44304h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     eax, [___243894h]
		cmp     eax, [___243878h]
		jl      near ___446a2h
		imul    edx, [___243ce8h], 35eh
		mov     cl, [edx+___1e6fd8h]
		mov     al, [edx+___1e6fdah]
		shl     cl, 4
		shl     al, 3
		add     cl, al
		mov     eax, [___24e4c0h]
		mov     bx, [eax]
		and     bh, 0fh
		and     ebx, 0ffffh
		mov     byte [ebx+eax*1+4], 0feh
		mov     bx, [eax]
		inc     ebx
		mov     [eax], bx
		and     bh, 0fh
		and     ebx, 0ffffh
		lea     esi, [eax+ebx*1]
		mov     bl, [___243ce8h]
		mov     [esi+4], bl
		mov     esi, [___243ce8h]
		lea     ebx, [esi*8+0]
		add     ebx, esi
		shl     ebx, 2
		add     ebx, esi
		mov     si, [eax]
		inc     esi
		shl     ebx, 2
		mov     [eax], si
		mov     esi, [ebx+___1de598h]
		sar     esi, 4
		mov     [esp], esi
		mov     si, [eax]
		mov     ch, [esp]
		and     esi, 0fffh
		and     esi, 0ffffh
		mov     [esi+eax*1+4], ch
		mov     di, [eax]
		inc     edi
		mov     [eax], di
		mov     esi, [ebx+___1de598h]
		sar     esi, 0ch
		mov     [esp], esi
		mov     esi, edi
		mov     ch, [esp]
		and     esi, 0fffh
		and     esi, 0ffffh
		mov     [esi+eax*1+4], ch
		inc     word [eax]
		mov     esi, [ebx+___1de5b4h]
		sar     esi, 0ah
		mov     [esp], esi
		mov     si, [eax]
		mov     ch, [esp]
		and     esi, 0fffh
		and     esi, 0ffffh
		mov     [esi+eax*1+4], ch
		mov     di, [eax]
		inc     edi
		mov     [eax], di
		mov     esi, [ebx+___1de5b0h]
		sar     esi, 0ah
		mov     [esp], esi
		mov     esi, edi
		mov     ch, [esp]
		and     esi, 0fffh
		and     esi, 0ffffh
		mov     [esi+eax*1+4], ch
		mov     si, [eax]
		inc     esi
		mov     [eax], si
		and     esi, 0fffh
		and     esi, 0ffffh
		mov     bl, [ebx+___1de5d0h]
		mov     [esi+eax*1+4], bl
		mov     di, [eax]
		inc     edi
		mov     ebx, edi
		mov     [eax], di
		and     bh, 0fh
		and     ebx, 0ffffh
		mov     [ebx+eax*1+4], cl
		mov     bx, [eax]
		inc     ebx
		mov     [eax], bx
		and     bh, 0fh
		and     ebx, 0ffffh
		lea     esi, [eax+ebx*1]
		mov     bl, [edx+___1e6ed0h]
		mov     [esi+4], bl
		inc     word [eax]
		fld     dword [edx+___1e6f84h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [esp]
		mov     [esp+4], bx
		mov     ebx, [esp+2]
		sar     ebx, 10h
		sar     ebx, 8
		mov     cl, bl
		mov     bx, [eax]
		and     bh, 0fh
		and     ebx, 0ffffh
		mov     [ebx+eax*1+4], cl
		mov     si, [eax]
		inc     esi
		mov     [eax], si
		fld     dword [edx+___1e6f84h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [esp]
		and     esi, 0fffh
		and     esi, 0ffffh
		mov     [esi+eax*1+4], bl
		mov     di, [eax]
		inc     edi
		mov     [eax], di
		fld     dword [edx+___1e6f88h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [esp]
		mov     [esp+4], bx
		mov     ebx, [esp+2]
		sar     ebx, 10h
		sar     ebx, 8
		mov     cl, bl
		mov     ebx, edi
		and     bh, 0fh
		and     ebx, 0ffffh
		mov     [ebx+eax*1+4], cl
		inc     word [eax]
		fld     dword [edx+___1e6f88h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [esp]
		mov     cl, bl
		mov     bx, [eax]
		and     bh, 0fh
		and     ebx, 0ffffh
		mov     [ebx+eax*1+4], cl
		inc     word [eax]
		fld     dword [edx+___1e701eh]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [esp]
		mov     [esp+4], bx
		mov     ebx, [esp+2]
		sar     ebx, 10h
		sar     ebx, 8
		mov     cl, bl
		mov     bx, [eax]
		and     bh, 0fh
		and     ebx, 0ffffh
		mov     [ebx+eax*1+4], cl
		mov     si, [eax]
		inc     esi
		mov     [eax], si
		fld     dword [edx+___1e701eh]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [esp]
		mov     ecx, ebx
		mov     ebx, esi
		and     bh, 0fh
		and     ebx, 0ffffh
		mov     [ebx+eax*1+4], cl
		mov     di, [eax]
		inc     edi
		mov     [eax], di
		fld     dword [edx+___1e7022h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [esp]
		mov     [esp+4], bx
		mov     ebx, [esp+2]
		sar     ebx, 10h
		sar     ebx, 8
		mov     cl, bl
		mov     ebx, edi
		and     bh, 0fh
		and     ebx, 0ffffh
		mov     [ebx+eax*1+4], cl
		inc     word [eax]
		fld     dword [edx+___1e7022h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [esp]
		mov     cl, bl
		mov     bx, [eax]
		and     bh, 0fh
		and     ebx, 0ffffh
		mov     [ebx+eax*1+4], cl
		mov     cx, [eax]
		inc     ecx
		mov     ebx, ecx
		mov     [eax], cx
		and     bh, 0fh
		and     ebx, 0ffffh
		mov     dl, [edx+___1e6edch]
		mov     [ebx+eax*1+4], dl
		mov     si, [eax]
		inc     esi
		mov     edx, esi
		mov     [eax], si
		and     dh, 0fh
		and     edx, 0ffffh
		mov     byte [edx+eax*1+4], 0ffh
		mov     di, [eax]
		inc     edi
		mov     ecx, 1
		mov     [eax], di
		mov     [___243cd0h], ecx

	push 	edx
	push 	ecx
	push 	eax
		call    ___618c4h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     dword [___243cach], byte 0
		jle     short ___44653h
		xor     edi, edi

	push 	edx
	push 	ecx
	push 	eax
		call    race___40164h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     [___243cach], edi
___44653h:
		xor     ebp, ebp
		mov     [___243cd0h], ebp
		cmp     dword [CONNECTION_TYPE], byte 2
		jne     short ___4466fh
		mov     eax, [___243894h]
		inc     eax
		mov     [___243878h], eax
___4466fh:
		cmp     dword [CONNECTION_TYPE], byte 1
		jne     short ___44685h
		mov     eax, [___243894h]
		add     eax, byte 2
		mov     [___243878h], eax
___44685h:
		mov     ebx, [CONNECTION_TYPE]
		cmp     ebx, byte 3
		je      short ___44695h
		cmp     ebx, byte 4
		jne     short ___446a2h
___44695h:
		mov     eax, [___243894h]
		add     eax, byte 3
		mov     [___243878h], eax
___446a2h:
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

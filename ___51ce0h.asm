cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___2438d0h
	extern	___1df528h
	extern	___196dc8h
	extern	___1df520h
	extern	___196d98h
	extern	___196dcch
	extern	___1df524h
	extern	___243d7ch
	extern	___243d80h
	extern	___1df52ch
	extern	GET_FRAME_COUNTER
	extern	___1df518h
	extern	___1df510h
	extern	___1df514h

section .text

__GDECL(___51ce0h)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		xor     edx, edx
		mov     ebx, [___2438d0h]
		mov     [esp], edx
		test    ebx, ebx
		jle     near ___51e87h
___51d06h:
		mov     ebp, [esp]
		shl     ebp, 4
		cmp     dword [ebp+___1df528h], byte 0ffffffffh
		je      near ___51e72h
		mov     edx, [___196dc8h]
		mov     eax, [ebp+___1df520h]
		mov     edi, [___196d98h]
		sub     eax, edx
		mov     ebx, [___196dcch]
		add     edi, eax
		mov     eax, [ebp+___1df524h]
		sub     eax, ebx
		cmp     edi, byte 8
		jl      near ___51de2h
		lea     edx, [edi+8]
		cmp     edx, 140h
		jge     near ___51de2h
		cmp     eax, byte 8
		jl      near ___51de2h
		lea     edx, [eax+8]
		cmp     edx, 0c8h
		jge     near ___51de2h
		cmp     dword [ebp+___1df528h], byte 5
		je      short ___51de2h
		shl     eax, 9
		xor     esi, esi
		sub     eax, 1000h
		mov     [esp+8], esi
		mov     [esp+4], eax
___51d88h:
		mov     esi, [esp+4]
		mov     ecx, [esp+8]
		xor     eax, eax
___51d92h:
		mov     edx, [___243d7ch]
		mov     ebx, [ebp+___1df528h]
		add     edx, eax
		shl     ebx, 8
		add     edx, ecx
		add     edx, ebx
		cmp     byte [edx], 0
		je      short ___51dbch
		mov     ebx, [___243d80h]
		add     ebx, eax
		add     ebx, edi
		mov     dl, [edx]
		mov     [esi+ebx*1+58h], dl
___51dbch:
		inc     eax
		cmp     eax, byte 10h
		jl      short ___51d92h
		mov     edx, [esp+4]
		mov     eax, [esp+8]
		add     edx, 200h
		add     eax, byte 10h
		mov     [esp+4], edx
		mov     [esp+8], eax
		cmp     eax, dword 100h
		jne     short ___51d88h
___51de2h:
		mov     edx, [esp]
		shl     edx, 4
		mov     ebx, [edx+___1df52ch]
		add     ebx, byte 5
		call    near GET_FRAME_COUNTER
		cmp     eax, ebx
		jb      short ___51e0bh
		inc     dword [edx+___1df528h]
		call    near GET_FRAME_COUNTER
		mov     [edx+___1df52ch], eax
___51e0bh:
		mov     edx, [esp]
		shl     edx, 4
		cmp     dword [edx+___1df528h], byte 5
		jle     short ___51e72h
		mov     ebx, [___2438d0h]
		mov     edi, 0ffffffffh
		dec     ebx
		mov     eax, edx
		shl     ebx, 4
		mov     [edx+___1df528h], edi
		cmp     edx, ebx
		jge     short ___51e60h
___51e35h:
		add     eax, byte 10h
		mov     edx, [eax+___1df528h]
		mov     [eax+___1df518h], edx
		mov     edx, [eax+___1df520h]
		mov     [eax+___1df510h], edx
		mov     edx, [eax+___1df524h]
		mov     [eax+___1df514h], edx
		cmp     eax, ebx
		jl      short ___51e35h
___51e60h:
		mov     eax, [___2438d0h]
		mov     ebp, [esp]
		dec     eax
		dec     ebp
		mov     [___2438d0h], eax
		mov     [esp], ebp
___51e72h:
		mov     ecx, [esp]
		inc     ecx
		mov     esi, [___2438d0h]
		mov     [esp], ecx
		cmp     ecx, esi
		jl      near ___51d06h
___51e87h:
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

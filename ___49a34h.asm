cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243d14h
	extern	___196dc8h
	extern	___196dcch
	extern	___243cc4h
	extern	___243cc0h
	extern	___243ccch
	extern	___243cc8h
	extern	___243c90h
	extern	___243c8ch
	extern	___243cbch
	extern	___243ce8h
	extern	___1de594h
	extern	___183f45h
	extern	___196d88h
	extern	___196d8ch
	extern	___196d90h
	extern	___196d94h
	extern	___196d98h
	extern	___2438d0h
	extern	___243cf0h
	extern	___1df518h
	extern	___1df51ch
	extern	___243178h
	extern	___243ce4h
	extern	___243d08h
	extern	__STOSD
	extern	___196df4h
	extern	___196dbch
	extern	___196dc0h
	extern	___196dc4h
	extern	___196db8h
	extern	___196d9ch
	extern	___2438c8h
	extern	___196dd4h
	extern	___196dd8h
	extern	___196de0h
	extern	___196de8h
	extern	___196dech
	extern	___196df0h
	extern	___196de4h
	extern	___243ce0h
	extern	___243ca4h
	extern	___243cdch
	extern	___243ca0h
	extern	___243cb8h
	extern	___243cd4h
	extern	___196df8h
	extern	___243874h

section .text

__GDECL(___49a34h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		xor     edx, edx
		mov     [___243d14h], edx
		mov     [___196dc8h], edx
		mov     [___196dcch], edx
		mov     [___243cc4h], edx
		mov     [___243cc0h], edx
		mov     [___243ccch], edx
		mov     [___243cc8h], edx
		mov     [___243c90h], edx
		mov     [___243c8ch], edx
		mov     [___243cbch], edx
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fld     dword [eax*4+___1de594h]
		fdivr   qword [___183f45h]
		mov     ebx, 100h
		mov     ecx, 80h
		mov     esi, 0c8h
		mov     edi, 64h
		mov     ebp, 40h
		mov     [___196d88h], ebx
		mov     [___196d8ch], ecx
		mov     [___196d90h], esi
		mov     [___196d94h], edi
		mov     [___196d98h], ebp
		xor     ebx, ebx
		mov     ecx, 0ffffffffh
		mov     [___2438d0h], ebx
		xor     eax, eax
		fstp    dword [___243cf0h]
___49aefh:
		add     eax, byte 10h
		mov     [eax+___1df518h], ecx
		cmp     eax, dword 200h
		jne     short ___49aefh
		xor     eax, eax
___49b01h:
		add     eax, byte 10h
		xor     esi, esi
		mov     [eax+___1df51ch], esi
		cmp     eax, dword 200h
		jne     short ___49b01h
		mov     edi, 20h
		mov     ecx, 4
		mov     edx, 0ffffffffh
		mov     eax, ___243178h
		mov     [___243ce4h], esi
		mov     [___243d08h], edi
		call    near __STOSD
		mov     eax, 4
		mov     edx, 28000h
		mov     [___196df4h], esi
		mov     [___196dbch], esi
		mov     [___196dc0h], esi
		mov     [___196dc4h], esi
		mov     [___196db8h], esi
		mov     [___196d9ch], esi
		mov     [___2438c8h], esi
		mov     [___196dd4h], esi
		mov     [___196dd8h], esi
		mov     [___196de0h], esi
		mov     [___196de8h], esi
		mov     [___196dech], esi
		mov     [___196df0h], esi
		mov     [___196de4h], esi
		mov     [___243ce0h], esi
		mov     [___243ca4h], esi
		mov     [___243cdch], esi
		mov     [___243ca0h], esi
		mov     [___243cb8h], esi
		mov     [___243cd4h], esi
		mov     [___243d08h], eax
		mov     [___196df8h], edx
		mov     [___243874h], esi
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

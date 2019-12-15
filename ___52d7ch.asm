cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1df738h
	extern	___1df73ch
	extern	GET_FRAME_COUNTER
	extern	___1df72ch
	extern	___1df734h
	extern	___243ce8h
	extern	___196dach
	extern	___1e6f84h
	extern	__CHP
	extern	___1df720h
	extern	___1e6f88h
	extern	___1df724h
	extern	___1df730h
	extern	___196dc8h
	extern	___196dcch
	extern	___196d98h
	extern	___1df728h
	extern	___243d40h
	extern	___243d80h
	extern	___243288h

section .text

__GDECL(___52d7ch)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		xor     edx, edx
		mov     esi, 1
		mov     edi, 2
		mov     ebp, 5
		xor     ecx, ecx
___52da2h:
		cmp     ecx, [edx+___1df738h]
		jne     near ___53039h
		mov     ebx, [edx+___1df73ch]
		add     ebx, ebp
		call    near GET_FRAME_COUNTER
		cmp     eax, ebx
		jb      short ___52e10h
		mov     eax, [edx+___1df72ch]
		cmp     ecx, eax
		jne     short ___52de6h
		mov     eax, [edx+___1df734h]
		cmp     edi, eax
		jle     short ___52ddeh
		lea     ebx, [eax+1]
		mov     [edx+___1df734h], ebx
		jmp     short ___52e05h
___52ddeh:
		mov     [edx+___1df72ch], esi
		jmp     short ___52e05h
___52de6h:
		cmp     esi, eax
		jne     short ___52e05h
		mov     eax, [edx+___1df734h]
		cmp     ecx, eax
		jge     short ___52dffh
		lea     ebx, [eax-1]
		mov     [edx+___1df734h], ebx
		jmp     short ___52e05h
___52dffh:
		mov     [edx+___1df72ch], ecx
___52e05h:
		call    near GET_FRAME_COUNTER
		mov     [edx+___1df73ch], eax
___52e10h:
		imul    ebx, [___243ce8h], 35eh
		cmp     ecx, [___196dach]
		jne     near ___52f35h
		fld     dword [ebx+___1e6f84h]
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		cmp     eax, [edx+___1df720h]
		jge     short ___52e5eh
		fld     dword [ebx+___1e6f88h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [edx+___1df724h]
		cmp     ebx, [esp]
		jle     short ___52e5eh
		mov     [edx+___1df730h], edi
___52e5eh:
		imul    ebx, [___243ce8h], 35eh
		fld     dword [ebx+___1e6f84h]
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		cmp     eax, [edx+___1df720h]
		jle     short ___52ea4h
		fld     dword [ebx+___1e6f88h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [edx+___1df724h]
		cmp     ebx, [esp]
		jle     short ___52ea4h
		mov     dword [edx+___1df730h], 3
___52ea4h:
		imul    ebx, [___243ce8h], 35eh
		fld     dword [ebx+___1e6f84h]
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		cmp     eax, [edx+___1df720h]
		jge     short ___52ee6h
		fld     dword [ebx+___1e6f88h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [edx+___1df724h]
		cmp     ebx, [esp]
		jge     short ___52ee6h
		mov     [edx+___1df730h], esi
___52ee6h:
		imul    ebx, [___243ce8h], 35eh
		fld     dword [ebx+___1e6f84h]
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		cmp     eax, [edx+___1df720h]
		jle     near ___53069h
		fld     dword [ebx+___1e6f88h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [edx+___1df724h]
		cmp     ebx, [esp]
		jge     near ___53069h
		mov     [edx+___1df730h], ecx
		jmp     near ___53069h
___52f35h:
		fld     dword [ebx+___1e6f84h]
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		cmp     eax, [edx+___1df720h]
		jge     short ___52f6dh
		fld     dword [ebx+___1e6f88h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [edx+___1df724h]
		cmp     ebx, [esp]
		jle     short ___52f6dh
		mov     [edx+___1df730h], ecx
___52f6dh:
		imul    ebx, [___243ce8h], 35eh
		fld     dword [ebx+___1e6f84h]
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		cmp     eax, [edx+___1df720h]
		jle     short ___52fafh
		fld     dword [ebx+___1e6f88h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [edx+___1df724h]
		cmp     ebx, [esp]
		jle     short ___52fafh
		mov     [edx+___1df730h], esi
___52fafh:
		imul    ebx, [___243ce8h], 35eh
		fld     dword [ebx+___1e6f84h]
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		cmp     eax, [edx+___1df720h]
		jge     short ___52ff5h
		fld     dword [ebx+___1e6f88h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [edx+___1df724h]
		cmp     ebx, [esp]
		jge     short ___52ff5h
		mov     dword [edx+___1df730h], 3
___52ff5h:
		imul    ebx, [___243ce8h], 35eh
		fld     dword [ebx+___1e6f84h]
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		cmp     eax, [edx+___1df720h]
		jle     short ___53069h
		fld     dword [ebx+___1e6f88h]
		call    near __CHP
		fistp   dword [esp]
		mov     ebx, [edx+___1df724h]
		cmp     ebx, [esp]
		jge     short ___53069h
		mov     [edx+___1df730h], edi
		jmp     short ___53069h
___53039h:
		mov     ebx, [edx+___1df73ch]
		add     ebx, ebp
		call    near GET_FRAME_COUNTER
		cmp     eax, ebx
		jb      short ___53069h
		mov     eax, [edx+___1df734h]
		cmp     eax, byte 7
		jge     short ___53069h
		lea     ebx, [eax+1]
		mov     [edx+___1df734h], ebx
		call    near GET_FRAME_COUNTER
		mov     [edx+___1df73ch], eax
___53069h:
		add     edx, byte 20h
		cmp     edx, 280h
		jne     near ___52da2h
		xor     esi, esi
___5307ah:
		mov     edx, [___196dc8h]
		mov     ebx, [esi+___1df720h]
		sub     edx, byte 10h
		mov     eax, [esi+___1df724h]
		cmp     ebx, edx
		jle     near ___53251h
		mov     edx, [___196dc8h]
		add     edx, 140h
		cmp     ebx, edx
		jge     near ___53251h
		mov     edx, [___196dcch]
		sub     edx, byte 10h
		cmp     eax, edx
		jle     near ___53251h
		mov     edx, [___196dcch]
		add     edx, 0c8h
		cmp     eax, edx
		jge     near ___53251h
		test    ebx, ebx
		je      near ___53251h
		test    eax, eax
		je      near ___53251h
		mov     ecx, [___196dc8h]
		mov     edi, [___196d98h]
		mov     ebp, [___196dcch]
		xor     edx, edx
		sub     ebx, ecx
		sub     eax, ebp
		add     ebx, edi
		test    eax, eax
		jge     short ___53104h
		mov     edx, eax
		neg     edx
		xor     eax, eax
___53104h:
		cmp     eax, dword 0b7h
		jle     near ___5319ch
		mov     ecx, 0c8h
		mov     edi, 0c8h
		sub     ecx, eax
		sub     edi, ecx
		mov     ebp, [esi+___1df738h]
		shl     edi, 9
		test    ebp, ebp
		jne     short ___53166h
		imul    edx, [esi+___1df728h], 0c00h
		mov     eax, [___243d40h]
		mov     ebp, [esi+___1df730h]
		add     edx, eax
		imul    eax, ebp, 300h
		add     edx, eax
		mov     eax, [esi+___1df734h]
		shl     eax, 8
		add     eax, edx
		mov     edx, [___243d80h]
		add     edx, byte 60h
		add     edi, edx
		add     edi, ebx
		jmp     near ___53235h
___53166h:
		mov     eax, [esi+___1df720h]
		mov     edx, eax
		mov     ebp, 2
		sar     edx, 1fh
		idiv    ebp
		mov     eax, [esi+___1df734h]
		mov     edx, [edx*4+___243288h]
		shl     eax, 8
		add     eax, edx
		mov     edx, [___243d80h]
		add     edx, byte 60h
		add     edi, edx
		add     edi, ebx
		jmp     near ___53235h
___5319ch:
		mov     ecx, 10h
		mov     ebp, eax
		mov     edi, edx
		shl     ebp, 9
		shl     edi, 4
		mov     eax, [esi+___1df738h]
		sub     ecx, edx
		test    eax, eax
		jne     short ___531fah
		imul    eax, [esi+___1df728h], 0c00h
		mov     edx, [___243d40h]
		add     edx, eax
		mov     [esp], edx
		imul    eax, [esi+___1df730h], 300h
		mov     edx, [esp]
		add     edx, eax
		mov     eax, [esi+___1df734h]
		shl     eax, 8
		add     eax, edx
		add     edi, eax
		mov     eax, [___243d80h]
		add     eax, byte 60h
		add     eax, ebp
		add     eax, ebx
		mov     ebx, edi
		mov     edi, eax
		jmp     short ___53237h
___531fah:
		mov     eax, [esi+___1df720h]
		mov     edx, eax
		mov     dword [esp], 2
		sar     edx, 1fh
		idiv    dword [esp]
		mov     eax, [esi+___1df734h]
		shl     eax, 8
		mov     [esp], eax
		mov     eax, [edx*4+___243288h]
		add     eax, [esp]
		mov     edx, [___243d80h]
		add     edx, byte 60h
		add     edx, ebp
		add     eax, edi
		lea     edi, [edx+ebx*1]
___53235h:
		mov     ebx, eax
___53237h:
		mov     ch, 10h
___53239h:
		mov     al, [ebx]
		or      al, al
		je      short ___53241h
		mov     [edi], al
___53241h:
		inc     ebx
		inc     edi
		dec     ch
		jne     short ___53239h
		add     edi, 1f0h
		dec     cl
		jne     short ___53237h
___53251h:
		add     esi, byte 20h
		cmp     esi, 280h
		jne     near ___5307ah
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

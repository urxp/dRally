cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243c60h
	extern	___1e6edch
	extern	___183f71h
	extern	___1e6f84h
	extern	___1e6f88h
	extern	___1de580h
	extern	___1e701eh
	extern	___1e7022h
	extern	___1e6f7ch
	extern	___1e7026h
	extern	___1e6ee0h
	extern	___1e721ah
	extern	___1e6fd8h
	extern	___1e6fd9h
	extern	___1de5c0h
	extern	___1de5bch
	extern	___1de5b8h
	extern	___4a064h
	extern	___1e723ah
	extern	___1e72e2h
	extern	___1e72e6h
	extern	___1de654h
	extern	___1e737ch
	extern	___1e7380h
	extern	___1e7337h
	extern	___1e7578h
	extern	___1e72dah
	extern	___1e7384h
	extern	___1e7336h
	extern	___1e723eh
	extern	___1de650h
	extern	___1de64ch
	extern	___1e7598h
	extern	___1e7640h
	extern	___1e7644h
	extern	___1de6e8h
	extern	___1e76dah
	extern	___1e76deh
	extern	___1e7694h
	extern	___1e78d6h
	extern	___1e7638h
	extern	___1e759ch
	extern	___1e76e2h
	extern	___1e7695h
	extern	___1de6e4h
	extern	___1de6e0h
	extern	___1e78f6h
	extern	___1e799eh
	extern	___1e79a2h
	extern	___1de77ch
	extern	___1e7a38h
	extern	___1e7a3ch
	extern	___1e79f2h
	extern	___1e7c34h
	extern	___1e7996h
	extern	___1e7a40h
	extern	___1e79f3h
	extern	___1e78fah
	extern	___1de778h
	extern	___1de774h
	extern	___1e706ah
	extern	___1de7e4h
	extern	___1e6ed0h
	extern	___1e6f80h
	extern	___1e6fdah
	extern	___1e705ah
	extern	___1e6ee4h
	extern	___1e6ee8h
	extern	___1e706eh
	extern	___1e6eech
	extern	___1de594h
	extern	___1e6f78h
	extern	___1e6f2ch
	extern	___1e6f8ch
	extern	___1e6f90h
	extern	___1e6fcch
	extern	___1e6fd0h
	extern	___1e6fd4h
	extern	___1e704eh
	extern	___1e7052h
	extern	___1e7056h
	extern	___1e7062h
	extern	___1e7066h
	extern	___1e7032h
	extern	___1e7036h
	extern	___1e703ah
	extern	___1e703eh
	extern	___1e7076h
	extern	___1e7072h
	extern	___1e707ah
	extern	___1e707eh
	extern	___1e7082h
	extern	___1e6f70h
	extern	___1e6f74h
	extern	___1e70aeh
	extern	___1e70eah
	extern	___1e7086h
	extern	___1e70aah
	extern	___1e721eh
	extern	___1e7222h
	extern	___1e7226h
	extern	___1e722ah
	extern	___243d08h

section .text

__GDECL(___4a25ch)
		push    30h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     ecx, [___243c60h]
		fild    dword [___1e6edch]
		fmul    qword [___183f71h]
		fld     dword [___1e6f84h]
		fld     dword [___1e6f88h]
		mov     edx, [___1e6edch]
		mov     ebx, [___1de580h]
		fxch    st0, st1
		fstp    dword [___1e701eh]
		lea     eax, [edx*4+0]
		fstp    dword [___1e7022h]
		sub     eax, edx
		fstp    dword [___1e6f7ch]
		shl     eax, 3
		fld     dword [___1e6f7ch]
		add     eax, edx
		fstp    dword [___1e7026h]
		shl     eax, 6
		xor     edx, edx
		mov     [___1e6ee0h], eax
		mov     ah, 1
		mov     [___1e721ah], edx
		mov     [___1e6fd8h], ah
		mov     [___1e6fd9h], ah
		cmp     ebx, byte 6
		je      short ___4a318h
		sub     esp, byte 4
		fild    dword [___1de5c0h]
		fstp    dword [esp]
		sub     esp, byte 4
		fild    dword [___1de5bch]
		fstp    dword [esp]
		mov     eax, 0fh
		sub     esp, byte 4
		fild    dword [___1de5b8h]
		fstp    dword [esp]
		call    near ___4a064h
___4a318h:
		fild    dword [___1e723ah]
		fmul    qword [___183f71h]
		fld     dword [___1e72e2h]
		fld     dword [___1e72e6h]
		fild    dword [___1de654h]
		sub     esp, byte 4
		mov     bl, 2
		mov     edx, [___1e723ah]
		fxch    st0, st2
		fstp    dword [___1e737ch]
		fstp    dword [___1e7380h]
		xor     ecx, ecx
		lea     eax, [edx*4+0]
		mov     [___1e7337h], bl
		mov     [___1e7578h], ecx
		sub     eax, edx
		fxch    st0, st1
		fstp    dword [___1e72dah]
		shl     eax, 3
		fld     dword [___1e72dah]
		add     eax, edx
		fstp    dword [___1e7384h]
		shl     eax, 6
		mov     dh, 1
		add     eax, 25800h
		mov     [___1e7336h], dh
		mov     [___1e723eh], eax
		fstp    dword [esp]
		sub     esp, byte 4
		fild    dword [___1de650h]
		fstp    dword [esp]
		mov     eax, 19h
		sub     esp, byte 4
		fild    dword [___1de64ch]
		fstp    dword [esp]
		call    near ___4a064h
		fild    dword [___1e7598h]
		fmul    qword [___183f71h]
		mov     bh, 1
		fld     dword [___1e7640h]
		fld     dword [___1e7644h]
		fild    dword [___1de6e8h]
		mov     edx, [___1e7598h]
		sub     esp, byte 4
		lea     eax, [edx*4+0]
		fxch    st0, st2
		fstp    dword [___1e76dah]
		sub     eax, edx
		fstp    dword [___1e76deh]
		shl     eax, 3
		mov     [___1e7694h], bh
		add     eax, edx
		mov     [___1e78d6h], ecx
		shl     eax, 6
		fxch    st0, st1
		fstp    dword [___1e7638h]
		add     eax, 4b000h
		fld     dword [___1e7638h]
		mov     [___1e759ch], eax
		mov     al, 3
		fstp    dword [___1e76e2h]
		mov     [___1e7695h], al
		fstp    dword [esp]
		sub     esp, byte 4
		fild    dword [___1de6e4h]
		fstp    dword [esp]
		mov     eax, 23h
		sub     esp, byte 4
		fild    dword [___1de6e0h]
		fstp    dword [esp]
		call    near ___4a064h
		fild    dword [___1e78f6h]
		fmul    qword [___183f71h]
		fld     dword [___1e799eh]
		fld     dword [___1e79a2h]
		fild    dword [___1de77ch]
		sub     esp, byte 4
		mov     edx, [___1e78f6h]
		fxch    st0, st2
		fstp    dword [___1e7a38h]
		fstp    dword [___1e7a3ch]
		mov     [___1e79f2h], bh
		lea     eax, [edx*4+0]
		mov     [___1e7c34h], ecx
		sub     eax, edx
		fxch    st0, st1
		fstp    dword [___1e7996h]
		shl     eax, 3
		fld     dword [___1e7996h]
		add     eax, edx
		fstp    dword [___1e7a40h]
		shl     eax, 6
		mov     dl, 4
		add     eax, 70800h
		mov     [___1e79f3h], dl
		mov     [___1e78fah], eax
		fstp    dword [esp]
		mov     edi, 40h
		sub     esp, byte 4
		fild    dword [___1de778h]
		fstp    dword [esp]
		mov     eax, 2dh
		sub     esp, byte 4
		fild    dword [___1de774h]
		fstp    dword [esp]
		mov     esi, 3ch
		call    near ___4a064h
		mov     [esp], ecx
		mov     [esp+4], ecx
___4a505h:
		imul    eax, ecx, 35eh
		xor     edx, edx
		mov     [eax+___1e706ah], edx
		mov     edx, [esp+4]
		imul    edx, [edx+___1de7e4h], 1388h
		xor     ebp, ebp
		mov     [eax+___1e6ed0h], ebp
		mov     [eax+___1e6f80h], ebp
		mov     [eax+___1e6fdah], ebp
		mov     [eax+___1e705ah], ebp
		mov     [eax+___1e6ee4h], ebp
		mov     [eax+___1e6ee8h], ebp
		add     edx, 3a98h
		mov     [eax+___1e706eh], edx
		mov     edx, [esp]
		mov     [eax+___1e6eech], ebp
		mov     ebx, [edx+___1de594h]
		mov     [eax+___1e6f78h], ebx
		mov     edx, edi
___4a56ah:
		add     eax, byte 4
		xor     ebx, ebx
		mov     [eax+___1e6eech], ebx
		cmp     eax, edx
		jne     short ___4a56ah
		imul    edx, ecx, 35eh
		mov     ebx, edi
		mov     eax, edx
___4a583h:
		add     eax, byte 4
		xor     ebp, ebp
		mov     [eax+___1e6f2ch], ebp
		cmp     eax, ebx
		jne     short ___4a583h
		mov     [edx+___1e6f8ch], ebp
		mov     [edx+___1e6f90h], ebp
		mov     [edx+___1e6fcch], ebp
		mov     [edx+___1e6fd0h], ebp
		mov     [edx+___1e6fd4h], ebp
		mov     [edx+___1e704eh], ebp
		mov     [edx+___1e7052h], ebp
		mov     [edx+___1e7056h], ebp
		mov     [edx+___1e7062h], ebp
		mov     [edx+___1e7066h], ebp
		mov     [edx+___1e7032h], ebp
		mov     [edx+___1e7036h], ebp
		mov     [edx+___1e703ah], ebp
		mov     [edx+___1e703eh], ebp
		mov     [edx+___1e7076h], ebp
		mov     [edx+___1e7072h], ebp
		mov     [edx+___1e707ah], ebp
		mov     [edx+___1e707eh], ebp
		xor     eax, ebx
		mov     [edx+___1e7082h], ebp
		mov     [edx+___1e6f70h], eax
		mov     [edx+___1e6f74h], eax
		mov     edx, esi
		imul    eax, ecx, 35eh
___4a61ah:
		add     eax, byte 4
		xor     ebp, ebp
		mov     [eax+___1e70aeh], ebp
		cmp     eax, edx
		jne     short ___4a61ah
		imul    ebx, ecx, 35eh
		mov     edx, esi
		mov     eax, ebx
___4a633h:
		add     eax, byte 4
		xor     ebp, ebp
		mov     [eax+___1e70eah], ebp
		cmp     eax, edx
		jne     short ___4a633h
		mov     [ebx+___1e7086h], ebp
		mov     [ebx+___1e70aah], ebp
		mov     [ebx+___1e70aeh], ebp
		mov     eax, 0fh
		mov     [ebx+___1e721eh], ebp
		add     edi, 35eh
		mov     [ebx+___1e7222h], ebp
		add     esi, 35eh
		mov     [ebx+___1e7226h], ebp
		inc     ecx
		mov     [ebx+___1e722ah], ebp
		mov     ebx, [esp]
		mov     ebp, [esp+4]
		mov     [___243d08h], eax
		add     ebx, 94h
		add     ebp, byte 54h
		mov     [esp], ebx
		mov     [esp+4], ebp
		cmp     ecx, byte 4
		jl      near ___4a505h
		mov     [___243c60h], ecx
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

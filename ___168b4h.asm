cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___1a1ef8h
	extern 	___1a0214h
	extern 	___1a0210h
	extern 	___13248h
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a1e58h
	extern 	___18c812h
	extern 	___13094h
	extern 	___18c862h
	extern 	___18c8b2h
	extern 	___18c902h
	extern 	___18c952h
	extern 	___18c9a2h
	extern 	___18c9f2h
	extern 	___18ca42h
	extern 	___18ca92h
	extern 	___18cae2h
	extern 	___18cb32h
	extern 	___18cb82h
	extern 	___18cbd2h
	extern 	___18cc22h
	extern 	___18cc72h
	extern 	___18ccc2h
	extern 	___18cd12h
	extern 	___18cd62h
	extern 	___18cdb2h
	extern 	___18ce02h
	extern 	___14c50h
	extern 	___185ba9h
	extern 	___180694h
	extern 	___1a10cch
	extern 	___12e78h

section .text

__GDECL(___168b4h)
		push    74h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 54h
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		mov     edi, 83h
		shl     eax, 2
		mov     esi, 21h
		sub     eax, ebx
		xor     edx, edx
		shl     eax, 2
		mov     [esp+34h], edx
		mov     ecx, [eax+___1a0214h]
		mov     [esp+50h], edx
		test    ecx, ecx
		jne     short ___16910h
		cmp     dword [eax+___1a0210h], 4650h
		jge     short ___16910h
		mov     dword [esp+50h], 1
___16910h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		mov     ecx, [eax+___1a0214h]
		cmp     ecx, byte 1
		jne     short ___16942h
		cmp     dword [eax+___1a0210h], 34bch
		jge     short ___16942h
		mov     [esp+50h], ecx
___16942h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 2
		jne     short ___16976h
		cmp     dword [eax+___1a0210h], 2328h
		jge     short ___16976h
		mov     dword [esp+50h], 1
___16976h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 3
		jne     short ___169aah
		cmp     dword [eax+___1a0210h], 1194h
		jge     short ___169aah
		mov     dword [esp+50h], 1
___169aah:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 4
		jne     short ___169deh
		cmp     dword [eax+___1a0210h], 8cah
		jge     short ___169deh
		mov     dword [esp+50h], 1
___169deh:
		push    byte 1
		mov     ecx, 0e6h
		mov     ebx, 1e2h
		mov     edx, edi
		mov     eax, esi
		call    near ___13248h
		lea     ebx, [edi+35h]
		lea     eax, [ebx*4+0]
		add     eax, ebx
		shl     eax, 7
		mov     [esp], eax
		mov     ecx, [esp]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ecx
		mov     ecx, 60h
		add     eax, esi
		mov     esi, [___1a1e58h]
		lea     ebx, [eax+0ch]
		mov     edx, ecx
		shr     dl, 2
___16a24h:
		mov     ch, dl
___16a26h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___16a26h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___16a24h
		lea     ebx, [edi+95h]
		lea     ecx, [edi+85h]
		lea     eax, [edi+75h]
		lea     edx, [ebx*4+0]
		mov     [esp+4], eax
		lea     eax, [edi+65h]
		add     edx, ebx
		mov     [esp+8], eax
		lea     eax, [edi+55h]
		mov     ebx, ecx
		mov     [esp+0ch], eax
		lea     eax, [edi+45h]
		shl     ecx, 2
		mov     [esp+20h], eax
		lea     eax, [edi+25h]
		add     ecx, ebx
		lea     esi, [edi+15h]
		mov     [esp+24h], eax
		lea     eax, [edi+5]
		mov     ebx, [esp+4]
		mov     [esp+30h], eax
		lea     eax, [ebx*4+0]
		add     eax, ebx
		shl     eax, 7
		mov     ebx, [esp+8]
		mov     [esp+1ch], eax
		lea     eax, [ebx*4+0]
		add     eax, ebx
		shl     eax, 7
		mov     ebx, [esp+0ch]
		mov     [esp+28h], eax
		lea     eax, [ebx*4+0]
		add     eax, ebx
		shl     eax, 7
		mov     ebx, [esp+20h]
		mov     [esp+2ch], eax
		lea     eax, [ebx*4+0]
		add     eax, ebx
		shl     eax, 7
		mov     ebx, [esp+24h]
		mov     [esp+14h], eax
		lea     eax, [ebx*4+0]
		add     eax, ebx
		shl     eax, 7
		mov     [esp+18h], eax
		lea     eax, [esi*4+0]
		add     eax, esi
		shl     eax, 7
		mov     ebx, [esp+30h]
		mov     [esp+10h], eax
		lea     eax, [ebx*4+0]
		shl     edx, 7
		add     eax, ebx
		lea     ebx, [edx+80h]
		mov     edx, [esp+1ch]
		add     edx, 80h
		mov     [esp+3ch], edx
		mov     edx, [esp+28h]
		shl     ecx, 7
		add     edx, 80h
		add     ecx, 80h
		mov     [esp+48h], edx
		mov     edx, [esp+14h]
		mov     [esp+4ch], ecx
		add     edx, 80h
		mov     ecx, [esp+2ch]
		mov     [esp+44h], edx
		mov     edx, [esp]
		add     ecx, 80h
		add     edx, 80h
		mov     esi, [esp+18h]
		mov     [esp+40h], edx
		mov     edx, [esp+10h]
		add     esi, 80h
		add     edx, 80h
		shl     eax, 7
		mov     [esp+38h], edx
		mov     edx, [esp+50h]
		add     eax, 80h
		test    edx, edx
		jne     near ___16cf2h
		mov     edx, eax
		mov     eax, ___18c812h
		call    near ___13094h
		mov     edx, [esp+38h]
		mov     eax, ___18c862h
		call    near ___13094h
		mov     eax, ___18c8b2h
		mov     edx, esi
		call    near ___13094h
		mov     edx, [esp+40h]
		mov     eax, ___18c902h
		call    near ___13094h
		mov     edx, [esp+44h]
		mov     eax, ___18c952h
		call    near ___13094h
		mov     eax, ___18c9a2h
		mov     edx, ecx
		call    near ___13094h
		mov     edx, [esp+48h]
		mov     eax, ___18c9f2h
		call    near ___13094h
		mov     edx, [esp+3ch]
		mov     eax, ___18ca42h
		call    near ___13094h
		mov     edx, [esp+4ch]
		mov     eax, ___18ca92h
		call    near ___13094h
		mov     eax, ___18cae2h
		mov     edx, ebx
		call    near ___13094h
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 0
		jne     short ___16c41h
		sub     dword [eax+___1a0210h], 4650h
___16c41h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 1
		jne     short ___16c6bh
		sub     dword [eax+___1a0210h], 34bch
___16c6bh:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 2
		jne     short ___16c95h
		sub     dword [eax+___1a0210h], 2328h
___16c95h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 3
		jne     short ___16cbfh
		sub     dword [eax+___1a0210h], 1194h
___16cbfh:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 4
		jne     near ___16e30h
		sub     dword [eax+___1a0210h], 8cah
		jmp     near ___16e30h
___16cf2h:
		mov     edx, eax
		mov     eax, ___18cb32h
		call    near ___13094h
		mov     edx, [esp+38h]
		mov     eax, ___18cb82h
		call    near ___13094h
		mov     eax, ___18cbd2h
		mov     edx, esi
		call    near ___13094h
		mov     edx, [esp+40h]
		mov     eax, ___18cc22h
		call    near ___13094h
		mov     edx, [esp+44h]
		mov     eax, ___18cc72h
		call    near ___13094h
		mov     eax, ___18ccc2h
		mov     edx, ecx
		call    near ___13094h
		mov     edx, [esp+48h]
		mov     eax, ___18cd12h
		call    near ___13094h
		mov     edx, [esp+3ch]
		mov     eax, ___18cd62h
		call    near ___13094h
		mov     edx, [esp+4ch]
		mov     eax, ___18cdb2h
		call    near ___13094h
		mov     eax, ___18ce02h
		mov     edx, ebx
		call    near ___13094h
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     dword [eax*4+___1a0214h], byte 0
		jne     short ___16d99h
		mov     ebp, 4650h
___16d99h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     dword [eax*4+___1a0214h], byte 1
		jne     short ___16dbch
		mov     ebp, 34bch
___16dbch:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     dword [eax*4+___1a0214h], byte 2
		jne     short ___16ddfh
		mov     ebp, 2328h
___16ddfh:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     dword [eax*4+___1a0214h], byte 3
		jne     short ___16e02h
		mov     ebp, 1194h
___16e02h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     dword [eax*4+___1a0214h], byte 4
		jne     short ___16e25h
		mov     ebp, 8cah
___16e25h:
		mov     eax, ebp
		call    near ___14c50h
		mov     [esp+34h], eax
___16e30h:
		lea     ebx, [edi+0b9h]
		lea     eax, [ebx*4+0]
		add     eax, ebx
		shl     eax, 7
		mov     edx, ___185ba9h
		lea     ecx, [eax+0c0h]
		mov     ebx, ___180694h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     eax, [esp+34h]
		add     esp, byte 54h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

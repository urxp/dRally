cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243c88h
	extern	___243d0ch
	extern	___1f4754h
	extern	___243c98h
	extern	___1f474ch
	extern	___1f3b08h
	extern	___243d08h
	extern	___1f44ech
	extern	___1f3b10h
	extern	___1f44f4h
	extern	___1f44f0h
	extern	___1f3c3ch
	extern	___1f4620h
	extern	___5326ch
	extern	___1f3ea4h
	extern	___243c6ch
	extern	___1f4034h
	extern	___1f41c4h
	extern	___243c64h
	extern	___243c78h
	extern	___243c74h
	extern	___243c70h
	extern	___243c68h
	extern	___196d8ch
	extern	___196d94h
	extern	___1f4354h
	extern	___196d98h
	extern	___5e3e8h
	extern	___1df9a0h
	extern	___243188h
	extern	___5e769h
	extern	___242f78h
	extern	___242e78h
	extern	___5e137h
	extern	___196db0h
	extern	___1e8848h
	extern	___243c9ch
	extern	___196dc8h
	extern	___240b54h
	extern	___196dcch
	extern	___240b60h
	extern	___240b58h
	extern	___240b64h
	extern	___240b5ch
	extern	___240b48h
	extern	___240b4ch
	extern	___196d88h
	extern	___196d90h
	extern	___243d80h
	extern	___243d5ch
	extern	___1f3b0ch

section .text

___53438h:
dd	___5368bh
dd	___5380fh
dd	___53850h
dd	___53891h
dd	___538cfh
dd	___538cfh
dd	___538cfh
dd	___538cfh
dd	___538cfh
dd	___538cfh
dd	___53797h
__GDECL(___53464h)
		push    40h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     eax, [___243c88h]
		dec     eax
		mov     [___243d0ch], eax
		test    eax, eax
		jl      near ___53ac9h
		xor     ebp, ebp
___53489h:
		imul    eax, [___243d0ch], 0c50h
		mov     eax, [eax+___1f4754h]
		mov     [___243c98h], eax
		imul    edx, eax, 0c50h
		cmp     dword [edx+___1f474ch], byte 1
		je      near ___53ab4h
		mov     eax, edx
		mov     ebx, edx
		mov     ecx, [edx+___1f3b08h]
		mov     [___243d08h], ebp
		cmp     ebp, ecx
		jge     short ___5350dh
___534c5h:
		mov     edx, [eax+___1f44ech]
		mov     esi, [ebx+___1f3b10h]
		shl     edx, 8
		add     edx, esi
		mov     [ebx+___1f44f4h], edx
		mov     edx, [eax+___1f44f0h]
		mov     edi, [ebx+___1f3c3ch]
		shl     edx, 8
		add     edx, edi
		mov     [ebx+___1f4620h], edx
		mov     edx, [___243d08h]
		add     ebx, byte 4
		inc     edx
		mov     ecx, [eax+___1f3b08h]
		mov     [___243d08h], edx
		cmp     edx, ecx
		jl      short ___534c5h
___5350dh:
		call    near ___5326ch
		mov     [___243d08h], ebp
		jmp     near ___53a99h
___5351dh:
		mov     ecx, [ebx+eax*4+___1f3ea4h]
		shl     ecx, 2
		add     ecx, ebx
		mov     edx, [ecx+___1f44f4h]
		mov     [___243c6ch], edx
		mov     edx, [ebx+eax*4+___1f4034h]
		mov     eax, [ebx+eax*4+___1f41c4h]
		shl     edx, 2
		shl     eax, 2
		add     edx, ebx
		add     ebx, eax
		mov     eax, [ebx+___1f44f4h]
		mov     [___243c64h], eax
		mov     eax, [ecx+___1f4620h]
		mov     [___243c78h], eax
		mov     eax, [edx+___1f4620h]
		mov     edi, [edx+___1f44f4h]
		mov     [___243c74h], eax
		mov     eax, [ebx+___1f4620h]
		mov     edx, [___243c6ch]
		mov     [___243c70h], eax
		mov     eax, edi
		sub     eax, edx
		mov     ebx, [___243c78h]
		mov     edx, eax
		mov     eax, [___243c70h]
		sub     eax, ebx
		mov     ebx, edx
		imul    ebx, eax
		mov     ecx, [___243c6ch]
		mov     esi, [___243c78h]
		mov     edx, [___243c64h]
		mov     eax, [___243c74h]
		sub     edx, ecx
		sub     eax, esi
		imul    eax, edx
		sub     ebx, eax
		mov     [___243c68h], edi
		test    ebx, ebx
		jg      near ___53922h
		mov     edi, [___196d8ch]
		mov     eax, ecx
		sub     eax, edi
		cdq     
		xor     eax, edx
		sub     eax, edx
		mov     edx, [___196d8ch]
		cmp     eax, edx
		jl      short ___53612h
		mov     eax, [___243c68h]
		sub     eax, edx
		cdq     
		xor     eax, edx
		sub     eax, edx
		mov     ecx, [___196d8ch]
		cmp     eax, ecx
		jl      short ___53612h
		mov     eax, [___243c64h]
		sub     eax, ecx
		cdq     
		xor     eax, edx
		sub     eax, edx
		cmp     eax, [___196d8ch]
		jge     near ___53922h
___53612h:
		mov     eax, [___243c78h]
		sub     eax, [___196d94h]
		cdq     
		xor     eax, edx
		sub     eax, edx
		mov     ebx, [___196d94h]
		cmp     eax, ebx
		jl      short ___5365ah
		mov     eax, [___243c74h]
		sub     eax, ebx
		cdq     
		xor     eax, edx
		sub     eax, edx
		mov     esi, [___196d94h]
		cmp     eax, esi
		jl      short ___5365ah
		mov     eax, [___243c70h]
		sub     eax, esi
		cdq     
		xor     eax, edx
		sub     eax, edx
		cmp     eax, [___196d94h]
		jge     near ___53922h
___5365ah:
		imul    edx, [___243c98h], 0c50h
		mov     eax, [___243d08h]
		shl     eax, 2
		add     eax, edx
		mov     ebx, [eax+___1f4354h]
		sub     ebx, 80h
		cmp     ebx, byte 0ah
		ja      near ___538cfh
		jmp     near dword [cs:ebx*4+___53438h]
___5368bh:
		mov     eax, [eax+___1f3ea4h]
		shl     eax, 2
		add     eax, edx
		mov     ecx, [eax+___1f3c3ch]
		mov     ebx, [eax+___1f3b10h]
		imul    eax, ecx, byte 4bh
		mov     edx, 64h
		sub     edx, ebx
		sar     edx, 8
		imul    edx, edx, byte 36h
		lea     ecx, [edx+8]
		sar     eax, cl
		test    eax, eax
		jge     short ___536bdh
		neg     eax
___536bdh:
		mov     esi, [___243c98h]
		mov     ebx, eax
		imul    eax, esi, 0c50h
		mov     edx, [___243d08h]
		mov     edx, [eax+edx*4+___1f4034h]
		mov     esi, [eax+edx*4+___1f3c3ch]
		mov     edi, [eax+edx*4+___1f3b10h]
		imul    eax, esi, byte 4bh
		mov     ecx, 64h
		sub     ecx, edi
		sar     ecx, 8
		imul    ecx, ecx, byte 36h
		add     ecx, byte 8
		sar     eax, cl
		and     ebx, byte 7
		test    eax, eax
		jge     short ___53704h
		neg     eax
___53704h:
		mov     edx, [___243c98h]
		mov     edi, eax
		imul    eax, edx, 0c50h
		mov     edx, [___243d08h]
		mov     edx, [eax+edx*4+___1f41c4h]
		mov     ecx, 64h
		sub     ecx, [eax+edx*4+___1f3b10h]
		sar     ecx, 8
		imul    ecx, ecx, byte 36h
		imul    eax, [eax+edx*4+___1f3c3ch], byte 4bh
		add     ecx, byte 8
		sar     eax, cl
		and     edi, byte 7
		test    eax, eax
		jge     short ___53747h
		neg     eax
___53747h:
		mov     ecx, [___196d98h]
		mov     edx, eax
		mov     eax, [___243c6ch]
		add     eax, ecx
		push    eax
		mov     esi, [___243c78h]
		push    esi
		lea     eax, [ebx+6dh]
		push    eax
		mov     eax, [___243c68h]
		add     eax, ecx
		push    eax
		mov     esi, ecx
		mov     ecx, [___243c74h]
		push    ecx
		lea     eax, [edi+6dh]
		push    eax
		mov     eax, [___243c64h]
		add     eax, esi
		push    eax
		mov     edi, [___243c70h]
		and     edx, byte 7
		push    edi
		add     edx, byte 6dh
		push    edx
		call    near ___5e3e8h
		jmp     near ___53922h
___53797h:
		imul    edx, [___243c98h], 12ch
		mov     ebx, [eax+___1f3ea4h]
		mov     ecx, [edx+ebx*4+___1df9a0h]
		mov     ebx, [eax+___1f4034h]
		mov     eax, [eax+___1f41c4h]
		mov     edi, [___196d98h]
		mov     ebx, [edx+ebx*4+___1df9a0h]
		mov     edx, [edx+eax*4+___1df9a0h]
		mov     eax, [___243c6ch]
		add     eax, edi
		push    eax
		mov     eax, [___243c78h]
		push    eax
		add     ecx, byte 6ch
		mov     eax, [___243c68h]
		push    ecx
		add     eax, edi
		push    eax
		mov     esi, [___243c74h]
		push    esi
		add     ebx, byte 6ch
		mov     eax, [___243c64h]
		push    ebx
		add     eax, edi
		push    eax
		mov     eax, [___243c70h]
		push    eax
		add     edx, byte 6ch
		push    edx
		call    near ___5e3e8h
		jmp     near ___53922h
___5380fh:
		mov     eax, [___243c6ch]
		mov     edx, [___196d98h]
		add     eax, edx
		push    eax
		mov     ebx, [___243c78h]
		mov     eax, [___243c68h]
		push    ebx
		add     eax, edx
		push    eax
		mov     esi, [___243c74h]
		mov     eax, [___243c64h]
		push    esi
		add     eax, edx
		push    eax
		mov     eax, [___243c70h]
		push    eax
		push    ___243188h
		call    near ___5e769h
		jmp     near ___53922h
___53850h:
		mov     eax, [___243c6ch]
		mov     edx, [___196d98h]
		add     eax, edx
		push    eax
		mov     ebx, [___243c78h]
		mov     eax, [___243c68h]
		push    ebx
		add     eax, edx
		push    eax
		mov     esi, [___243c74h]
		mov     eax, [___243c64h]
		push    esi
		add     eax, edx
		push    eax
		mov     eax, [___243c70h]
		push    eax
		push    ___242f78h
		call    near ___5e769h
		jmp     near ___53922h
___53891h:
		mov     eax, [___243c6ch]
		mov     edx, [___196d98h]
		add     eax, edx
		push    eax
		mov     ebx, [___243c78h]
		mov     eax, [___243c68h]
		push    ebx
		add     eax, edx
		push    eax
		mov     esi, [___243c74h]
		mov     eax, [___243c64h]
		push    esi
		add     eax, edx
		push    eax
		mov     eax, [___243c70h]
		push    eax
		push    ___242e78h
		call    near ___5e769h
		jmp     short ___53922h
___538cfh:
		mov     eax, [___243c6ch]
		mov     ecx, [___196d98h]
		add     eax, ecx
		push    eax
		mov     esi, [___243c78h]
		mov     eax, [___243c68h]
		push    esi
		add     eax, ecx
		push    eax
		mov     eax, [___243c74h]
		push    eax
		mov     eax, [___243c64h]
		add     eax, ecx
		imul    edx, [___243c98h], 0c50h
		push    eax
		mov     ebx, [___243c70h]
		mov     eax, [___243d08h]
		push    ebx
		mov     al, [edx+eax*4+___1f4354h]
		and     eax, 0ffh
		push    eax
		call    near ___5e137h
___53922h:
		cmp     ebp, [___196db0h]
		je      near ___53a93h
		imul    edx, [___243c98h], 190h
		mov     eax, [___243d08h]
		mov     eax, [edx+eax*4+___1e8848h]
		mov     [___243c9ch], eax
		cmp     eax, byte 0ffffffffh
		je      near ___53a93h
		imul    ebx, eax, byte 2ch
		mov     eax, [___196dc8h]
		mov     edx, [ebx+___240b54h]
		shl     eax, 8
		sub     edx, eax
		mov     eax, [___196d8ch]
		shl     eax, 8
		sub     edx, eax
		mov     eax, [___196dcch]
		mov     [ebx+___240b60h], edx
		shl     eax, 8
		mov     edx, [ebx+___240b58h]
		sub     edx, eax
		mov     eax, [___196d94h]
		shl     eax, 8
		sub     edx, eax
		mov     [ebx+___240b64h], edx
		mov     edx, [ebx+___240b60h]
		shl     edx, 8
		mov     edi, [ebx+___240b5ch]
		mov     eax, edx
		sar     edx, 1fh
		idiv    edi
		add     eax, 80h
		mov     edx, [___196d8ch]
		sar     eax, 8
		add     eax, edx
		mov     edx, [ebx+___240b64h]
		mov     ecx, [ebx+___240b5ch]
		shl     edx, 8
		mov     [ebx+___240b60h], eax
		mov     eax, edx
		sar     edx, 1fh
		idiv    ecx
		add     eax, 80h
		mov     esi, [___196d94h]
		sar     eax, 8
		add     eax, esi
		mov     [ebx+___240b64h], eax
		mov     eax, [ebx+___240b48h]
		mov     edi, [ebx+___240b60h]
		neg     eax
		cmp     eax, edi
		jge     near ___53a93h
		mov     eax, [ebx+___240b4ch]
		mov     edx, [ebx+___240b64h]
		neg     eax
		cmp     eax, edx
		jge     near ___53a93h
		cmp     edi, [___196d88h]
		jge     short ___53a93h
		cmp     edx, [___196d90h]
		jge     short ___53a93h
		mov     edi, ___240b48h
		mov     eax, [ebx+___240b60h]
		add     edi, ebx
		add     eax, [___196d98h]
		mov     ebx, edx
		shl     ebx, 9
		add     ebx, eax
		add     ebx, byte 60h
		add     ebx, [___243d80h]
		mov     esi, [___243d5ch]
		add     esi, [edi+8]
		mov     edx, [edi+4]
___53a58h:
		mov     eax, [___243d80h]
		cmp     ebx, eax
		jg      short ___53a6bh
		add     esi, [edi]
		add     ebx, 200h
		jmp     short ___53a82h
___53a6bh:
		mov     ecx, [edi]
___53a6dh:
		mov     al, [esi]
		test    al, al
		je      short ___53a75h
		mov     [ebx], al
___53a75h:
		inc     ebx
		inc     esi
		dec     ecx
		jne     short ___53a6dh
		add     ebx, 200h
		sub     ebx, [edi]
___53a82h:
		mov     eax, [___243d80h]
		add     eax, 19000h
		cmp     ebx, eax
		jge     short ___53a93h
		dec     edx
		jne     short ___53a58h
___53a93h:
		inc     dword [___243d08h]
___53a99h:
		imul    ebx, [___243c98h], 0c50h
		mov     eax, [___243d08h]
		cmp     eax, [ebx+___1f3b0ch]
		jl      near ___5351dh
___53ab4h:
		mov     ebx, [___243d0ch]
		dec     ebx
		mov     [___243d0ch], ebx
		cmp     ebp, ebx
		jle     near ___53489h
___53ac9h:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

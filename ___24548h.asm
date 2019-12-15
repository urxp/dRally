cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1edch
	extern	___1a1ecch
	extern	___1a1ee8h
	extern	___1a1ef8h
	extern	___1a1ee0h
	extern	___1a1eech
	extern	___1a1ec0h
	extern	___1a1ec8h
	extern	___1a1ed0h
	extern	___1a01fch
	extern	___1a1ec4h
	extern	___1a1ee4h
	extern	___3f71ch__allocateMemory
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___1a10e4h__VESA101h_DefaultScreenBufferA
	extern	___1a1e80h
	extern	___1a1e74h
	extern	___1a1e84h
	extern	___1a1e60h
	extern	___1a1ed4h
	extern	___1a1e90h
	extern	___1a10b0h
	extern	___1a1eb0h
	extern	___1a1e78h
	extern	___1a1eb8h
	extern	___1a01b8h
	extern	___1a01bch
	extern	___1a01c0h
	extern	___1a01c4h
	extern	___1a01c8h
	extern	___1a01cch
	extern	___1a0180h
	extern	___1a0184h
	extern	___1a0188h
	extern	___1a018ch
	extern	___1a0190h
	extern	___1a0194h
	extern	___1a01a8h
	extern	___1a01ach
	extern	___1a01b0h
	extern	___1a01b4h
	extern	___1a0198h
	extern	___1a019ch
	extern	___1a01a0h
	extern	___1a01a4h
	extern	___1a01d0h
	extern	___1a01d4h
	extern	___1a01d8h
	extern	___1a01dch
	extern	___1a1e8ch
	extern	___1a1ea0h
	extern	___1a1e7ch
	extern	___1a1ebch
	extern	___1a1eb4h
	extern	___1a1e88h
	extern	___1a1ea4h
	extern	___1a1ea8h
	extern	___1a1e6ch
	extern	___1a1e98h
	extern	___1a1each
	extern	___1a1e94h
	extern	___1a1e9ch
	extern	___1a1e70h
	extern	___1a1e5ch
	extern	___1a1e58h
	extern	___181d24h
	extern	___1a1e54h
	extern	___1a54d0h
	extern	___1a1e64h
	extern	___180144h
	extern	bpa_read
	extern	bpk_decode2
	extern	___181d34h
	extern	___181d44h
	extern	___181d50h
	extern	___181d5ch
	extern	___181d68h
	extern	___181d74h
	extern	___181d80h
	extern	___181d8ch
	extern	___181d98h
	extern	___181da4h
	extern	___181db0h
	extern	___181dbch
	extern	___181dc8h
	extern	___181dd4h
	extern	___181de0h
	extern	___181dech
	extern	___181df8h
	extern	___181e04h
	extern	___181e10h
	extern	___181e1ch
	extern	___181e28h
	extern	___181e34h
	extern	___181e40h
	extern	___181e4ch
	extern	___181e58h
	extern	___181e68h
	extern	___181e74h
	extern	___181e84h
	extern	___181e94h
	extern	___181ea4h
	extern	___181eb4h
	extern	___181ec4h
	extern	bpk_decode4
	extern	___181ed0h
	extern	___181ee0h
	extern	___181eech
	extern	___181efch
	extern	___181f08h
	extern	___181f14h
	extern	___181f24h
	extern	___181f34h
	extern	___181f40h

section .text

__GDECL(___24548h)
		push    2ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     edx, 64h
		xor     ebx, ebx
		mov     [___1a1edch], edx
		mov     [___1a1ecch], ebx
		mov     [___1a1ee8h], ebx
		mov     edx, [___1a1ef8h]
		mov     [___1a1ee0h], ebx
		lea     eax, [edx*8+0]
		mov     [___1a1eech], ebx
		sub     eax, edx
		mov     [___1a1ec0h], ebx
		shl     eax, 2
		mov     [___1a1ec8h], ebx
		sub     eax, edx
		mov     [___1a1ed0h], ebx
		shl     eax, 2
		mov     ebx, 5
		mov     ecx, [eax+___1a01fch]
		mov     [___1a1ec4h], ebx
		cmp     ecx, ebx
		jge     short ___245c5h
		lea     eax, [ecx+1]
		mov     [___1a1ee4h], eax
		jmp     short ___245cbh
___245c5h:
		mov     [___1a1ee4h], ebx
___245cbh:
		mov     eax, 4b000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1124h__VESA101h_ScreenBufferA], eax
		mov     [___1a10e4h__VESA101h_DefaultScreenBufferA], eax
		mov     eax, 3400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e80h], eax
		mov     eax, 3400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e74h], eax
		mov     eax, 3400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e84h], eax
		mov     eax, 3400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e60h], eax
		mov     eax, 5400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1ed4h], eax
		mov     eax, 4b0h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e90h], eax
		mov     eax, 8f0h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10b0h], eax
		mov     eax, 900h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1eb0h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e78h], eax
		mov     eax, 12000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1eb8h], eax
		mov     eax, 1af00h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01b8h], eax
		mov     eax, 1a77bh
		call    near ___3f71ch__allocateMemory
		mov     [___1a01bch], eax
		mov     eax, 18f14h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01c0h], eax
		mov     eax, 18f51h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01c4h], eax
		mov     eax, 1a060h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01c8h], eax
		mov     eax, 1bea2h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01cch], eax
		mov     eax, 1800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0180h], eax
		mov     eax, 1800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0184h], eax
		mov     eax, 1800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0188h], eax
		mov     eax, 1800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a018ch], eax
		mov     eax, 1800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0190h], eax
		mov     eax, 1800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0194h], eax
		mov     eax, 0a235h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01a8h], eax
		mov     eax, 0ae36h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01ach], eax
		mov     eax, 0b413h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01b0h], eax
		mov     eax, 0d788h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01b4h], eax
		mov     eax, 511ch
		call    near ___3f71ch__allocateMemory
		mov     [___1a0198h], eax
		mov     eax, 52b8h
		call    near ___3f71ch__allocateMemory
		mov     [___1a019ch], eax
		mov     eax, 5724h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01a0h], eax
		mov     eax, 5f1eh
		call    near ___3f71ch__allocateMemory
		mov     [___1a01a4h], eax
		mov     eax, 5ffbh
		call    near ___3f71ch__allocateMemory
		mov     [___1a01d0h], eax
		mov     eax, 6dd9h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01d4h], eax
		mov     eax, 7922h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01d8h], eax
		mov     eax, 7801h
		call    near ___3f71ch__allocateMemory
		mov     [___1a01dch], eax
		mov     eax, 878bh
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e8ch], eax
		mov     eax, 8ae9h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1ea0h], eax
		mov     eax, 1800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e7ch], eax
		mov     eax, 0f0h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1ebch], eax
		mov     eax, 0f0h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1eb4h], eax
		mov     eax, 1260h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e88h], eax
		mov     eax, 1020h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1ea4h], eax
		mov     eax, 2400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1ea8h], eax
		mov     eax, 2400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e6ch], eax
		mov     eax, 2400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e98h], eax
		mov     eax, 2400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1each], eax
		mov     eax, 2400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e94h], eax
		mov     eax, 2400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e9ch], eax
		mov     eax, 2400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e70h], eax
		mov     eax, 1b000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e5ch], eax
		mov     eax, 2400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e58h], eax
		mov     eax, 2800h
		mov     ebx, ___181d24h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e54h], eax
		mov     eax, 2800h
		mov     edx, ___1a54d0h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1e64h], eax
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edi, [___1a1ed4h]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___181d34h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebp, [___1a1e90h]
		push    ebp
		call    near bpk_decode2
		mov     ebx, ___181d44h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     eax, [___1a10b0h]
		push    eax
		call    near bpk_decode2
		mov     ebx, ___181d50h
		mov     eax, ___180144h
		mov     edx, [___1a01b8h]
		call    near bpa_read
		mov     ebx, ___181d5ch
		mov     eax, ___180144h
		mov     edx, [___1a01bch]
		call    near bpa_read
		mov     ebx, ___181d68h
		mov     eax, ___180144h
		mov     edx, [___1a01c0h]
		call    near bpa_read
		mov     ebx, ___181d74h
		mov     eax, ___180144h
		mov     edx, [___1a01c4h]
		call    near bpa_read
		mov     ebx, ___181d80h
		mov     eax, ___180144h
		mov     edx, [___1a01c8h]
		call    near bpa_read
		mov     ebx, ___181d8ch
		mov     eax, ___180144h
		mov     edx, [___1a01cch]
		call    near bpa_read
		mov     ebx, ___181d98h
		mov     eax, ___180144h
		mov     edx, [___1a01a8h]
		call    near bpa_read
		mov     ebx, ___181da4h
		mov     eax, ___180144h
		mov     edx, [___1a01ach]
		call    near bpa_read
		mov     ebx, ___181db0h
		mov     eax, ___180144h
		mov     edx, [___1a01b0h]
		call    near bpa_read
		mov     ebx, ___181dbch
		mov     eax, ___180144h
		mov     edx, [___1a01b4h]
		call    near bpa_read
		mov     ebx, ___181dc8h
		mov     eax, ___180144h
		mov     edx, [___1a0198h]
		call    near bpa_read
		mov     ebx, ___181dd4h
		mov     eax, ___180144h
		mov     edx, [___1a019ch]
		call    near bpa_read
		mov     ebx, ___181de0h
		mov     eax, ___180144h
		mov     edx, [___1a01a0h]
		call    near bpa_read
		mov     ebx, ___181dech
		mov     eax, ___180144h
		mov     edx, [___1a01a4h]
		call    near bpa_read
		mov     ebx, ___181df8h
		mov     eax, ___180144h
		mov     edx, [___1a01d0h]
		call    near bpa_read
		mov     ebx, ___181e04h
		mov     eax, ___180144h
		mov     edx, [___1a01d4h]
		call    near bpa_read
		mov     ebx, ___181e10h
		mov     eax, ___180144h
		mov     edx, [___1a01d8h]
		call    near bpa_read
		mov     ebx, ___181e1ch
		mov     eax, ___180144h
		mov     edx, [___1a01dch]
		call    near bpa_read
		mov     ebx, ___181e28h
		mov     eax, ___180144h
		mov     edx, [___1a1ea0h]
		call    near bpa_read
		mov     ebx, ___181e34h
		mov     eax, ___180144h
		mov     edx, [___1a1e8ch]
		call    near bpa_read
		mov     ebx, ___181e40h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___1a1e6ch]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___181e4ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebx, [___1a1e74h]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___181e58h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ecx, [___1a1e80h]
		push    ecx
		call    near bpk_decode2
		mov     ebx, ___181e68h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     esi, [___1a1e84h]
		push    esi
		call    near bpk_decode2
		mov     ebx, ___181e74h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edi, [___1a1e60h]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___181e84h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebp, [___1a1e54h]
		push    ebp
		call    near bpk_decode2
		mov     ebx, ___181e94h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     eax, [___1a1e64h]
		push    eax
		call    near bpk_decode2
		mov     ebx, ___181ea4h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___1a1e58h]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___181eb4h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebx, [___1a1e5ch]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___181ec4h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ecx, [___1a1e98h]
		push    ecx
		push    byte 0
		push    2400h
		call    near bpk_decode4
		push    ___1a54d0h
		mov     esi, [___1a1each]
		push    esi
		push    2400h
		push    2400h
		call    near bpk_decode4
		push    ___1a54d0h
		mov     edi, [___1a1e94h]
		push    edi
		push    4800h
		push    2400h
		call    near bpk_decode4
		push    ___1a54d0h
		mov     ebp, [___1a1e9ch]
		push    ebp
		push    6c00h
		push    2400h
		call    near bpk_decode4
		push    ___1a54d0h
		mov     eax, [___1a1e70h]
		push    eax
		push    9000h
		push    2400h
		call    near bpk_decode4
		mov     ebx, ___181ed0h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___1a0180h]
		push    edx
		push    byte 0
		push    1800h
		call    near bpk_decode4
		push    ___1a54d0h
		mov     ebx, [___1a0184h]
		push    ebx
		push    1800h
		push    1800h
		call    near bpk_decode4
		push    ___1a54d0h
		mov     ecx, [___1a0188h]
		push    ecx
		push    3000h
		push    1800h
		call    near bpk_decode4
		push    ___1a54d0h
		mov     esi, [___1a018ch]
		push    esi
		push    4800h
		push    1800h
		call    near bpk_decode4
		push    ___1a54d0h
		mov     edi, [___1a0190h]
		push    edi
		push    6000h
		push    1800h
		call    near bpk_decode4
		push    ___1a54d0h
		mov     ebp, [___1a0194h]
		push    ebp
		push    7800h
		push    1800h
		call    near bpk_decode4
		mov     ebx, ___181ee0h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     eax, [___1a1eb0h]
		push    eax
		call    near bpk_decode2
		mov     ebx, ___181eech
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___1a1e78h]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___181efch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebx, [___1a1eb8h]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___181f08h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ecx, [___1a1ea8h]
		push    ecx
		call    near bpk_decode2
		mov     ebx, ___181f14h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     esi, [___1a1ea4h]
		push    esi
		call    near bpk_decode2
		mov     ebx, ___181f24h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edi, [___1a1eb4h]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___181f34h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebp, [___1a1ebch]
		push    ebp
		call    near bpk_decode2
		mov     ebx, ___181f40h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     eax, [___1a1e88h]
		push    eax
		call    near bpk_decode2
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

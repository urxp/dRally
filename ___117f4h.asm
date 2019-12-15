cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___3f71ch__allocateMemory
	extern	___1a10d8h
	extern	___1a10f0h
	extern 	___1a0fb8h
	extern 	___1a0fe0h
	extern 	___1a10c8h
	extern 	___1a10c4h
	extern 	___1a10cch
	extern 	___1a10fch
	extern 	___1a110ch
	extern 	___1a1108h
	extern 	___1a10b8h
	extern 	___1a1138h__VESA101h_DefaultScreenBufferB
	extern 	___1a0fe8h
	extern 	___1a0fbch
	extern 	___1a0fd8h
	extern 	___1a0fcch
	extern 	___1a0fd0h
	extern 	___1a0fd4h
	extern 	___1a0fech
	extern 	___1a0fc4h
	extern 	___1a0fe4h
	extern 	___1a0fdch
	extern 	___1a0fach
	extern 	___1a0fc8h
	extern 	___1a0fb0h
	extern 	___1a0ff0h
	extern 	___1a0fa8h
	extern 	___1a0fc0h
	extern 	___1a0fa4h
	extern 	___19de70h
	extern 	___19de74h
	extern 	___19de78h
	extern 	___19de7ch
	extern 	___19de80h
	extern 	___19de84h
	extern 	___19de88h
	extern 	___19de8ch
	extern 	___19de90h
	extern 	___19de94h
	extern 	___19de98h
	extern 	___19de9ch
	extern 	___19dea0h
	extern 	___19dea4h
	extern 	___19dea8h
	extern 	___19deach
	extern 	___19deb0h
	extern 	___19deb4h
	extern 	___19deb8h
	extern 	___19debch
	extern 	___180310h
	extern 	___1a0fb4h
	extern 	___180144h
	extern 	bpa_read
	extern 	___18031ch
	extern 	___1a54d0h
	extern 	bpk_decode2
	extern 	___180328h
	extern 	___180334h
	extern 	___180340h
	extern 	___18034ch
	extern 	___180358h
	extern 	___180364h
	extern 	___180370h
	extern 	___180380h
	extern 	___18038ch
	extern 	___18039ch
	extern 	___1803ach
	extern 	___1803bch
	extern 	___1803cch
	extern 	___1803dch
	extern 	___1803ech
	extern 	___1803f8h
	extern 	___180404h
	extern 	___180410h
	extern 	___180420h
	extern 	___18042ch
	extern 	___18043ch
	extern 	___180448h
	extern 	___180454h
	extern 	___180460h
	extern 	___18046ch
	extern 	___180478h
	extern 	___180484h
	extern 	___180490h
	extern 	___18049ch
	extern 	___1804a8h
	extern 	___1804b4h
	extern 	___1804c0h
	extern 	___1804cch
	extern 	___1804d8h
	extern 	___1804e4h
	extern 	___1804f0h
	extern 	___1804fch
	extern 	___180508h
	extern 	___180514h
	extern 	___180520h
	extern 	___18052ch
	extern 	___180538h
	extern 	___180544h
	extern 	___180550h
	extern 	___18055ch
	extern 	___180568h
	extern 	___180574h
	extern 	___180580h

section .text

__GDECL(___117f4h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     eax, 0a00h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10d8h], eax
		mov     eax, 0a00h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10f0h], eax
		mov     eax, 300h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fb8h], eax
		mov     eax, 300h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fe0h], eax
		mov     eax, 600h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10c8h], eax
		mov     eax, 8cah
		call    near ___3f71ch__allocateMemory
		mov     [___1a10c4h], eax
		mov     eax, 18000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10cch], eax
		mov     eax, 6000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10fch], eax
		mov     eax, 6000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a110ch], eax
		mov     eax, 6000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1108h], eax
		mov     eax, 1a28h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10b8h], eax
		mov     eax, 4b000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1138h__VESA101h_DefaultScreenBufferB], eax
		mov     eax, 2e00h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fe8h], eax
		mov     eax, 516ch
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fbch], eax
		mov     eax, 19a20h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fd8h], eax
		mov     eax, 22eh
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fcch], eax
		mov     eax, 71ah
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fd0h], eax
		mov     eax, 3bah
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fd4h], eax
		mov     eax, 3fc0h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fech], eax
		mov     eax, 3fc0h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fc4h], eax
		mov     eax, 3fc0h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fe4h], eax
		mov     eax, 71ah
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fdch], eax
		mov     eax, 3bah
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fach], eax
		mov     eax, 22eh
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fc8h], eax
		mov     eax, 2f4h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fb0h], eax
		mov     eax, 2f4h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0ff0h], eax
		mov     eax, 2f4h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fa8h], eax
		mov     eax, 3a64h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fc0h], eax
		mov     eax, 1e780h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0fa4h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19de70h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19de74h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19de78h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19de7ch], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19de80h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19de84h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19de88h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19de8ch], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19de90h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19de94h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19de98h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19de9ch], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19dea0h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19dea4h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19dea8h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19deach], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19deb0h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19deb4h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19deb8h], eax
		mov     eax, 1000h
		call    near ___3f71ch__allocateMemory
		mov     [___19debch], eax
		mov     eax, 1000h
		mov     ebx, ___180310h
		call    near ___3f71ch__allocateMemory
		mov     edx, [___1a10c8h]
		mov     [___1a0fb4h], eax
		mov     eax, ___180144h
		call    near bpa_read
		mov     ebx, ___18031ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___1a10c4h]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___180328h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebx, [___1a10cch]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___180334h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ecx, [___1a1108h]
		push    ecx
		call    near bpk_decode2
		mov     ebx, ___180340h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     esi, [___1a10fch]
		push    esi
		call    near bpk_decode2
		mov     ebx, ___18034ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edi, [___1a110ch]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___180358h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebp, [___1a10b8h]
		push    ebp
		call    near bpk_decode2
		mov     ebx, ___180364h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     eax, [___1a0fbch]
		push    eax
		call    near bpk_decode2
		mov     ebx, ___180370h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___1a0fd8h]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___180380h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebx, [___1a0fe8h]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___18038ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ecx, [___1a0fcch]
		push    ecx
		call    near bpk_decode2
		mov     ebx, ___18039ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     esi, [___1a0fd0h]
		push    esi
		call    near bpk_decode2
		mov     ebx, ___1803ach
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edi, [___1a0fd4h]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___1803bch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebp, [___1a0fech]
		push    ebp
		call    near bpk_decode2
		mov     ebx, ___1803cch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     eax, [___1a0fc4h]
		push    eax
		call    near bpk_decode2
		mov     ebx, ___1803dch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___1a0fe4h]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___1803ech
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebx, [___1a0fdch]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___1803f8h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ecx, [___1a0fach]
		push    ecx
		call    near bpk_decode2
		mov     ebx, ___180404h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     esi, [___1a0fc8h]
		push    esi
		call    near bpk_decode2
		mov     ebx, ___180410h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edi, [___1a0fb0h]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___180420h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebp, [___1a0ff0h]
		push    ebp
		call    near bpk_decode2
		mov     ebx, ___18042ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     eax, [___1a0fa8h]
		push    eax
		call    near bpk_decode2
		mov     ebx, ___18043ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___1a0fc0h]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___180448h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebx, [___1a0fa4h]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___180454h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ecx, [___19de70h]
		push    ecx
		call    near bpk_decode2
		mov     ebx, ___180460h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     esi, [___19de74h]
		push    esi
		call    near bpk_decode2
		mov     ebx, ___18046ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edi, [___19de78h]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___180478h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebp, [___19de7ch]
		push    ebp
		call    near bpk_decode2
		mov     ebx, ___180484h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     eax, [___19de80h]
		push    eax
		call    near bpk_decode2
		mov     ebx, ___180490h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___19de84h]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___18049ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebx, [___19de88h]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___1804a8h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ecx, [___19de8ch]
		push    ecx
		call    near bpk_decode2
		mov     ebx, ___1804b4h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     esi, [___19de90h]
		push    esi
		call    near bpk_decode2
		mov     ebx, ___1804c0h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edi, [___19de94h]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___1804cch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebp, [___19de98h]
		push    ebp
		call    near bpk_decode2
		mov     ebx, ___1804d8h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     eax, [___19de9ch]
		push    eax
		call    near bpk_decode2
		mov     ebx, ___1804e4h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___19dea0h]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___1804f0h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebx, [___19dea4h]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___1804fch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ecx, [___19dea8h]
		push    ecx
		call    near bpk_decode2
		mov     ebx, ___180508h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     esi, [___19deach]
		push    esi
		call    near bpk_decode2
		mov     ebx, ___180514h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edi, [___19deb0h]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___180520h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebp, [___19deb4h]
		push    ebp
		call    near bpk_decode2
		mov     ebx, ___18052ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     eax, [___19deb8h]
		push    eax
		call    near bpk_decode2
		mov     ebx, ___180538h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___19debch]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___180544h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebx, [___1a0fb4h]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___180550h
		mov     eax, ___180144h
		mov     edx, [___1a0fb8h]
		call    near bpa_read
		mov     ebx, ___18055ch
		mov     eax, ___180144h
		mov     edx, [___1a0fe0h]
		call    near bpa_read
		mov     ebx, ___180568h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ecx, [___1a10f0h]
		push    ecx
		call    near bpk_decode2
		mov     ebx, ___180574h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     esi, [___1a10d8h]
		push    esi
		call    near bpk_decode2
		mov     ebx, ___180580h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		push    edi
		call    near bpk_decode2
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern	___1a1ef8h
	extern	___1a021ch
	extern	___18212fh
	extern	ceil_
	extern	__CHP
	extern	___185a14h
	extern	___1a01fch
	extern	___18e974h
	extern	___1a01ech
	extern	itoa_
	extern	atoi_
	extern	___1a1ec4h
	extern	___1a1ee4h
	extern	___18e2a4h
	extern	___28ab4h
	extern	___1854b8h
	extern	___24cc54h
	extern	dRally_Audio_pushSoundEffect
	extern	___181fc8h
	extern	___13248h
	extern	___181fdch
	extern	___185c0bh
	extern	___1a110ch
	extern	___181fe4h
	extern	___12e78h
	extern	___182004h
	extern	___180728h
	extern	___182018h
	extern	___18e298h
	extern	___182020h
	extern	___182024h
	extern	___182044h
	extern	___182054h
	extern	___18068ch
	extern	___185ba9h
	extern	___1a10cch
	extern	___180690h
	extern	___1a10e0h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2ab50h
	extern	___185cbch
	extern	___1a1ed0h
	extern	___1a01b8h
	extern	___259e0h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1398ch__VESA101_PRESENTRECTANGLE
	extern	memset_
	extern	___1a1e68h
	extern	___1a10f4h
	extern	___5994ch
	extern	___19bd60h
	extern	___23758h
	extern	___1854ach
	extern	___1a0210h
	extern	___1a01f0h
	extern	___1a01f4h
	extern	___1a01f8h
	extern	___25330h
	extern	___25e40h
	extern	___26650h
	extern	___262b4h
	extern	___269e4h
	extern	___25a74h
	extern	___1a1e88h
	extern	___182064h
	extern	___182084h
	extern	___1820a0h
	extern	___196a84h
	extern	___1a020ch
	extern	___1a0fb8h
	extern	___11378h
	extern	___1a1eb4h
	extern	___27078h
	extern	___185a38h
	extern	___18e938h
	extern	___18e944h
	extern	___273d8h
	extern	___18e93ch
	extern	___18e954h
	extern	___276f0h
	extern	___18e940h
	extern	___18e964h
	extern	___27a10h
	extern	___1854c4h
	extern	___1820b0h
	extern	___13094h
	extern	___180130h
	extern	___1820c8h
	extern	___1820ech
	extern	___182110h
	extern	___1854a4h
	extern	___1a1028h
	extern	___28c1ch
	extern	___185a4ch
	extern	___2ee78h
	extern	___1854a8h
	extern	___196adch
	extern	___33010h
	extern	___185a20h
	extern	___1a0224h
	extern	___31008h
	extern	___3266ch

section .text

___28e28h:
dd	___28f77h
dd	___29ba4h
dd	___29cebh
dd	___29e33h
dd	___29f83h
dd	___2a1afh
__GDECL(___28e40h)
		push    88h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 60h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		fild    dword [eax*4+___1a021ch]
		fmul    qword [___18212fh]
		sub     esp, byte 8
		fstp    qword [esp]
		call    near ceil_
		mov     eax, [___1a1ef8h]
		lea     ebx, [eax*8+0]
		sub     ebx, eax
		call    near __CHP
		shl     ebx, 2
		mov     edx, [___185a14h]
		sub     ebx, eax
		fistp   dword [esp+50h]
		shl     ebx, 2
		test    edx, edx
		je      short ___28ee7h
		mov     eax, [ebx+___1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+___18e974h]
		mov     edx, eax
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     edx, [ebx+___1a01ech]
		imul    edx, eax
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     esi, eax
		jmp     short ___28f19h
___28ee7h:
		mov     eax, [ebx+___1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+___18e974h]
		mov     edx, eax
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     esi, [ebx+___1a01ech]
		imul    esi, eax
___28f19h:
		mov     ebx, [esp+50h]
		sub     ebx, esi
		mov     [esp+50h], ebx
		test    ebx, ebx
		jge     short ___28f2dh
		xor     edi, edi
		mov     [esp+50h], edi
___28f2dh:
		mov     ebx, 0ah
		lea     edx, [esp+3ch]
		mov     eax, [esp+50h]
		lea     edi, [esp+3ch]
		call    near itoa_
		call 	__STRLEN
		mov     byte [esp+ecx*1+3bh], 30h
		lea     eax, [esp+3ch]
		call    near atoi_
		mov     ebp, eax
		mov     [esp+50h], eax
		mov     eax, [___1a1ec4h]
		cmp     eax, byte 5
		ja      near ___2a387h
		jmp     near dword [cs:eax*4+___28e28h]
___28f77h:
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		mov     eax, [eax+___18e2a4h]
		sub     eax, ebp
		test    eax, eax
		jge     near ___291c4h
		call    near ___28ab4h
		test    eax, eax
		jne     near ___2a387h
		push    8000h
		mov     eax, 1
		mov     edx, [___1854b8h]
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		push    edx
		mov     edx, 1ch
		lea     edi, [esp+8]
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		mov     esi, ___181fc8h
		call    near ___13248h
		mov     ebx, 0ah
		lea     edx, [esp+3ch]
		mov     eax, ebp
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		call    near itoa_
		lea     esi, [esp+3ch]
		mov     edi, esp
		mov     ebx, esp
		call 	__STRCAT
		mov     esi, ___181fdch
		mov     edi, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     ecx, 136aah
		mov     edi, esp
		mov     eax, [___1a110ch]
		mov     esi, ___181fe4h
		call    near ___12e78h
		mov     ecx, 8
		mov     ebx, esp
		mov     edx, ___185c0bh
		rep movsd   
		mov     eax, [___1a110ch]
		mov     ecx, 15eaah
		call    near ___12e78h
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		mov     edi, esp
		sub     eax, edx
		mov     esi, ___182004h
		shl     eax, 5
		mov     ebx, 0ah
		mov     eax, [eax+___18e2a4h]
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		sub     eax, ebp
		mov     esi, ___180728h
		cdq     
		xor     eax, edx
		sub     eax, edx
		lea     edx, [esp+3ch]
		mov     edi, esp
		call    near itoa_
		call 	__STRCAT
		lea     esi, [esp+3ch]
		mov     edi, esp
		mov     ebx, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     ecx, 186aah
		mov     eax, [___1a110ch]
		call    near ___12e78h
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		mov     edi, esp
		sub     eax, edx
		mov     esi, ___182018h
		shl     eax, 3
		movsd   
		movsw   
		movsb   
		sub     eax, edx
		mov     esi, ___18e298h
		shl     eax, 5
		mov     edi, esp
		add     esi, eax
		mov     ebx, esp
		call 	__STRCAT
		mov     esi, ___182020h
		mov     edi, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     ecx, 1aeaah
		mov     eax, [___1a110ch]
		jmp     near ___293cch
___291c4h:
		call    near ___28ab4h
		test    eax, eax
		jne     near ___2a387h
		push    8000h
		mov     edx, 1ch
		mov     eax, [___1854b8h]
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		push    eax
		mov     eax, 1
		lea     edi, [esp+8]
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		mov     esi, ___181fc8h
		call    near ___13248h
		mov     ebx, 0ah
		lea     edx, [esp+3ch]
		mov     eax, ebp
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		call    near itoa_
		lea     esi, [esp+3ch]
		mov     edi, esp
		mov     ebx, esp
		call 	__STRCAT
		mov     esi, ___181fdch
		mov     edi, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     ecx, 136aah
		mov     edi, esp
		mov     eax, [___1a110ch]
		mov     esi, ___182024h
		call    near ___12e78h
		mov     ecx, 8
		mov     ebx, esp
		mov     edx, ___185c0bh
		rep movsd   
		mov     eax, [___1a110ch]
		mov     ecx, 15eaah
		call    near ___12e78h
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		mov     esi, ___18e298h
		shl     eax, 5
		mov     edi, esp
		add     esi, eax
		call 	__STRCPY
		mov     esi, ___182044h
		mov     edi, esp
		call 	__STRCAT
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		mov     ebx, 0ah
		shl     eax, 5
		mov     esi, ___180728h
		mov     eax, [eax+___18e2a4h]
		lea     edx, [esp+3ch]
		sub     eax, ebp
		mov     edi, esp
		call    near itoa_
		call 	__STRCAT
		lea     esi, [esp+3ch]
		mov     edi, esp
		mov     ebx, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     ecx, 186aah
		mov     edi, esp
		mov     eax, [___1a110ch]
		mov     esi, ___182054h
		call    near ___12e78h
		mov     ecx, 1aeaah
		mov     ebx, esp
		mov     edx, ___185c0bh
		mov     eax, [___1a110ch]
		movsd   
		movsd   
		movsd   
		movsw   
___293cch:
		call    near ___12e78h
		mov     ecx, 1cf70h
		mov     ebx, ___18068ch
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     ecx, 1d01ah
		mov     ebx, ___180690h
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
		xor     ebp, ebp
		call    near ___12e78h
		xor     ebx, ebx
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		mov     [esp+54h], ebx
___29410h:
		imul    esi, ebp, 0aah
		call    near ___2ab50h
		call    near ___2ab50h
		mov     eax, [___1a1ee4h]
		mov     edx, 8dh
		shl     eax, 8
		mov     ecx, [___1a1ee4h]
		add     eax, ___185cbch
		mov     ebx, [___1a1ed0h]
		push    eax
		mov     ecx, [ecx*4+___1a01b8h]
		mov     eax, 10h
		call    near ___259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 16090h
		add     edx, 16090h
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     eax, [___1a1ed0h]
		inc     eax
		add     esi, 1e0d9h
		mov     [___1a1ed0h], eax
		cmp     eax, byte 3fh
		jle     short ___2948eh
		xor     ebx, ebx
		mov     [___1a1ed0h], ebx
___2948eh:
		xor     ecx, ecx
		mov     edi, 0c4h
___29495h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, 14h
		add     eax, esi
		mov     edx, edi
		add     eax, ecx
		add     ecx, 280h
		call    near memset_
		cmp     ecx, 3200h
		jne     short ___29495h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, [___1a1e68h]
		add     ebx, esi
		imul    esi, ecx, 190h
		mov     eax, [___1a10f4h]
		mov     ecx, 14h
		add     esi, eax
		mov     edx, ecx
___294dah:
		mov     edi, edx
___294dch:
		mov     al, [esi]
		or      al, al
		je      short ___294e4h
		mov     [ebx], al
___294e4h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___294dch
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___294dah
		mov     ecx, 1ch
		mov     ebx, 14fh
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 1e0a5h
		add     edx, 1e0a5h
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     esi, [___1a1e68h]
		inc     esi
		mov     [___1a1e68h], esi
		cmp     esi, byte 31h
		jle     short ___2952dh
		xor     eax, eax
		mov     [___1a1e68h], eax
___2952dh:
		call    near ___5994ch
		mov     [esp+5ch], al
		cmp     al, 15h
		jne     short ___2953fh
		mov     byte [esp+5ch], 0cbh
___2953fh:
		cmp     byte [esp+5ch], 31h
		jne     short ___2954bh
		mov     byte [esp+5ch], 0cdh
___2954bh:
		mov     bh, [esp+5ch]
		cmp     bh, 4bh
		jb      short ___29588h
		jbe     short ___295c2h
		cmp     bh, 9ch
		jb      short ___2957ah
		jbe     near ___296e4h
		cmp     bh, 0cbh
		jb      near ___29720h
		jbe     short ___295c2h
		cmp     bh, 0cdh
		je      near ___29652h
		jmp     near ___29720h
___2957ah:
		cmp     bh, 4dh
		je      near ___29652h
		jmp     near ___29720h
___29588h:
		cmp     bh, 1ch
		jb      short ___2959dh
		jbe     near ___296e4h
		cmp     bh, 3bh
		je      short ___295abh
		jmp     near ___29720h
___2959dh:
		cmp     bh, 1
		je      near ___29712h
		jmp     near ___29720h
___295abh:
		cmp     dword [___19bd60h], byte 0
		je      near ___29720h
		call    near ___23758h
		jmp     near ___29720h
___295c2h:
		cmp     ebp, byte 1
		jne     short ___295e7h
		push    8000h
		mov     edx, 19h
		mov     ebx, [___1854ach]
		mov     ecx, [___24cc54h]
		push    ebx
		mov     eax, ebp
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
___295e7h:
		mov     ecx, 1e000h
		xor     ebp, ebp
		mov     edi, 14fh
		mov     esi, 0c4h
___295f8h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, edi
		add     eax, ecx
		mov     edx, esi
		add     eax, 0a8h
		add     ecx, 280h
		call    near memset_
		cmp     ecx, 21e80h
		jne     short ___295f8h
		mov     ecx, 1cf70h
		mov     ebx, ___18068ch
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     ecx, 1d01ah
		mov     ebx, ___180690h
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
		call    near ___12e78h
		jmp     near ___29720h
___29652h:
		test    ebp, ebp
		jne     short ___29679h
		push    8000h
		mov     eax, 1
		mov     edx, [___1854ach]
		mov     ecx, [___24cc54h]
		push    edx
		xor     ebx, ebx
		mov     edx, 19h
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
___29679h:
		mov     ecx, 1e000h
		mov     ebp, 1
		mov     edi, 14fh
		mov     esi, 0c4h
___2968dh:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, edi
		add     eax, ecx
		mov     edx, esi
		add     eax, 0a8h
		add     ecx, 280h
		call    near memset_
		cmp     ecx, 21e80h
		jne     short ___2968dh
		mov     ecx, 1cf70h
		mov     ebx, ___18068ch
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
		call    near ___12e78h
		mov     ecx, 1d01ah
		mov     ebx, ___180690h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		jmp     short ___29720h
___296e4h:
		push    8000h
		mov     edx, 1ch
		mov     eax, 1
		mov     edi, [___1854b8h]
		mov     ecx, [___24cc54h]
		push    edi
		xor     ebx, ebx
		mov     esi, 0ffffffffh
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		mov     [esp+54h], esi
		jmp     short ___29720h
___29712h:
		mov     eax, 0ffffffffh
		mov     ebp, 1
		mov     [esp+54h], eax
___29720h:
		cmp     dword [esp+54h], byte 0
		je      near ___29410h
		test    ebp, ebp
		jne     near ___29b90h
		push    8000h
		mov     edx, 4
		mov     eax, 5
		push    24000h
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [___1a1ee4h]
		mov     [eax*4+___1a01fch], ebx
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		mov     ecx, [eax*4+___1a0210h]
		shl     edx, 5
		mov     ebx, [esp+50h]
		mov     edx, [edx+___18e2a4h]
		mov     [eax*4+___1a01ech], ebp
		sub     edx, ebx
		mov     ebx, [eax*4+___1a01fch]
		sub     ecx, edx
		lea     edx, [ebx*8+0]
		mov     [eax*4+___1a01f0h], ebp
		sub     edx, ebx
		mov     [eax*4+___1a01f4h], ebp
		shl     edx, 3
		mov     [eax*4+___1a01f8h], ebp
		sub     edx, ebx
		mov     [eax*4+___1a0210h], ecx
		shl     edx, 5
		mov     ecx, 77h
		mov     edx, [edx+___18e2a4h]
		mov     ebx, 180h
		mov     [eax*4+___1a021ch], edx
		call    near ___25330h
		call    near ___25e40h
		call    near ___26650h
		call    near ___262b4h
		call    near ___269e4h
		call    near ___25a74h
		push    byte 1
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     ecx, 10h
		mov     edx, 126h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e88h]
		add     ebx, 1e83ch
___29838h:
		mov     edi, edx
___2983ah:
		mov     al, [esi]
		or      al, al
		je      short ___29842h
		mov     [ebx], al
___29842h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___2983ah
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___29838h
		mov     ecx, 7
		mov     edi, esp
		mov     esi, ___182064h
		mov     ebx, esp
		mov     edx, ___185c0bh
		rep movsd   
		movsw   
		movsb   
		mov     eax, [___1a110ch]
		mov     ecx, 136aah
		mov     edi, esp
		mov     esi, ___182084h
		call    near ___12e78h
		mov     ecx, 7
		mov     ebx, esp
		mov     edx, ___185c0bh
		rep movsd   
		mov     eax, [___1a110ch]
		mov     ecx, 15eaah
		mov     edi, esp
		mov     esi, ___1820a0h
		call    near ___12e78h
		mov     ecx, 186aah
		mov     ebx, esp
		mov     edx, ___185c0bh
		mov     eax, [___1a110ch]
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		xor     ah, ah
		mov     [esp+5ch], ah
		mov     ebp, 126h
___298d0h:
		cmp     byte [esp+5ch], 9ch
		je      near ___29b3bh
		cmp     dword [___196a84h], byte 0
		jne     near ___29b3bh
		call    near ___5994ch
		mov     [esp+5ch], al
		cmp     al, 3bh
		jne     short ___29903h
		cmp     dword [___19bd60h], byte 0
		je      short ___29903h
		call    near ___23758h
___29903h:
		cmp     byte [esp+5ch], 0cbh
		jne     short ___29924h
		imul    eax, [___1a1ef8h], byte 6ch
		mov     edi, [eax+___1a020ch]
		test    edi, edi
		jle     short ___29924h
		lea     edx, [edi-2]
		mov     [eax+___1a020ch], edx
___29924h:
		cmp     byte [esp+5ch], 4bh
		jne     short ___29945h
		imul    eax, [___1a1ef8h], byte 6ch
		mov     ecx, [eax+___1a020ch]
		test    ecx, ecx
		jle     short ___29945h
		lea     esi, [ecx-2]
		mov     [eax+___1a020ch], esi
___29945h:
		cmp     byte [esp+5ch], 0cdh
		jne     short ___2996ah
		imul    eax, [___1a1ef8h], byte 6ch
		mov     edx, [eax+___1a020ch]
		cmp     edx, 0fdh
		jge     short ___2996ah
		lea     ebx, [edx+2]
		mov     [eax+___1a020ch], ebx
___2996ah:
		cmp     byte [esp+5ch], 4dh
		jne     short ___2998fh
		imul    eax, [___1a1ef8h], byte 6ch
		mov     esi, [eax+___1a020ch]
		cmp     esi, 0fdh
		jge     short ___2998fh
		lea     edi, [esi+2]
		mov     [eax+___1a020ch], edi
___2998fh:
		imul    eax, [___1a1ef8h], byte 6ch
		mov     edx, [eax+___1a020ch]
		mov     eax, [___1a0fb8h]
		lea     edx, [edx+edx*2]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+58h], eax
		fild    word [esp+58h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+5ch], eax
		fild    word [esp+5ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+60h], eax
		fild    word [esp+60h]
		sub     esp, byte 4
		fstp    dword [esp]
		mov     ecx, 1dd80h
		call    near ___11378h
		mov     esi, 0c4h
___299edh:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, ebp
		add     eax, ecx
		mov     edx, esi
		add     eax, 0b6h
		add     ecx, 280h
		call    near memset_
		cmp     ecx, 21980h
		jne     short ___299edh
		mov     ecx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e88h]
		mov     edx, ebp
		add     ebx, 1e83ch
___29a29h:
		mov     edi, edx
___29a2bh:
		mov     al, [esi]
		or      al, al
		je      short ___29a33h
		mov     [ebx], al
___29a33h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___29a2bh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___29a29h
		imul    edx, [___1a1ef8h], byte 6ch
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 18h
		add     eax, 1de3ch
		mov     ebx, [edx+___1a020ch]
		mov     esi, [___1a1eb4h]
		add     ebx, eax
		mov     edx, 0ah
		add     ebx, byte 0eh
___29a6fh:
		mov     edi, edx
___29a71h:
		mov     al, [esi]
		or      al, al
		je      short ___29a79h
		mov     [ebx], al
___29a79h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___29a71h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___29a6fh
		call    near ___2ab50h
		call    near ___2ab50h
		imul    eax, [___1a1ef8h], byte 6ch
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, 1de3ch
		mov     esi, [eax+___1a020ch]
		mov     ebx, 0eh
		add     edx, esi
		mov     ecx, 18h
		add     edx, byte 0ch
		lea     eax, [esi+1de48h]
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     eax, [___1a1ee4h]
		mov     edx, 8dh
		shl     eax, 8
		mov     ecx, [___1a1ee4h]
		add     eax, ___185cbch
		mov     ebx, [___1a1ed0h]
		push    eax
		mov     ecx, [ecx*4+___1a01b8h]
		mov     eax, 10h
		call    near ___259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 16090h
		add     edx, 16090h
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     edi, [___1a1ed0h]
		inc     edi
		mov     [___1a1ed0h], edi
		cmp     edi, byte 3fh
		jle     short ___29b30h
		xor     edx, edx
		mov     [___1a1ed0h], edx
___29b30h:
		cmp     byte [esp+5ch], 1ch
		jne     near ___298d0h
___29b3bh:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		mov     ebx, [eax+___1a01fch]
		cmp     ebx, byte 5
		jge     short ___29b67h
		lea     eax, [ebx+1]
		mov     [___1a1ee4h], eax
		jmp     short ___29b71h
___29b67h:
		mov     dword [___1a1ee4h], 5
___29b71h:
		mov     esi, 136h
		call    near ___27078h
		mov     [___185a38h], esi
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___29b90h:
		call    near ___25a74h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___29ba4h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [eax*4+___1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		shl     edx, 5
		mov     eax, [eax*4+___1a01f0h]
		cmp     eax, [edx+___18e938h]
		jge     near ___29cd7h
		mov     eax, [edx+eax*4+___18e944h]
		call    near ___28ab4h
		test    eax, eax
		jne     near ___2a387h
		push    8000h
		mov     edx, 1ch
		mov     eax, [___1854b8h]
		mov     ecx, [___24cc54h]
		push    eax
		xor     ebx, ebx
		mov     eax, 1
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [eax*4+___1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		shl     edx, 5
		mov     ebx, [eax*4+___1a01f0h]
		mov     edx, [edx+ebx*4+___18e944h]
		sub     [eax*4+___1a0210h], edx
		mov     ebx, [eax*4+___1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		mov     ebx, [eax*4+___1a01f0h]
		shl     edx, 5
		mov     ecx, [eax*4+___1a021ch]
		mov     edx, [edx+ebx*4+___18e944h]
		add     ecx, edx
		mov     [eax*4+___1a021ch], ecx
		call    near ___273d8h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edi, [eax*4+___1a01f0h]
		mov     esi, 136h
		inc     edi
		mov     [___185a38h], esi
		mov     [eax*4+___1a01f0h], edi
		call    near ___25330h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___29cd7h:
		call    near ___25e40h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___29cebh:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [eax*4+___1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		shl     edx, 5
		mov     eax, [eax*4+___1a01f4h]
		cmp     eax, [edx+___18e93ch]
		jge     near ___29e1fh
		mov     eax, [edx+eax*4+___18e954h]
		call    near ___28ab4h
		test    eax, eax
		jne     near ___2a387h
		push    8000h
		mov     edx, 1ch
		mov     ebp, [___1854b8h]
		mov     eax, 1
		push    ebp
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [eax*4+___1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		shl     edx, 5
		mov     ebx, [eax*4+___1a01f4h]
		mov     edx, [edx+ebx*4+___18e954h]
		sub     [eax*4+___1a0210h], edx
		mov     ebx, [eax*4+___1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		mov     ebx, [eax*4+___1a01f4h]
		shl     edx, 5
		mov     ecx, [eax*4+___1a021ch]
		mov     edx, [edx+ebx*4+___18e954h]
		add     ecx, edx
		mov     [eax*4+___1a021ch], ecx
		call    near ___276f0h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edi, [eax*4+___1a01f4h]
		mov     esi, 136h
		inc     edi
		mov     [___185a38h], esi
		mov     [eax*4+___1a01f4h], edi
		call    near ___25330h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___29e1fh:
		call    near ___262b4h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___29e33h:
		mov     eax, [___1a1ef8h]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 2
		sub     edx, eax
		mov     ebx, [edx*4+___1a01fch]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 3
		sub     eax, ebx
		shl     eax, 5
		mov     edx, [edx*4+___1a01f8h]
		cmp     edx, [eax+___18e940h]
		jge     near ___29f6fh
		mov     eax, [eax+edx*4+___18e964h]
		call    near ___28ab4h
		test    eax, eax
		jne     near ___2a387h
		push    8000h
		mov     edx, 1ch
		mov     edi, [___1854b8h]
		mov     eax, 1
		push    edi
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [eax*4+___1a01fch]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		mov     ebx, [eax*4+___1a01f8h]
		shl     edx, 5
		mov     ebp, [eax*4+___1a0210h]
		mov     edx, [edx+ebx*4+___18e964h]
		mov     ebx, [eax*4+___1a01fch]
		sub     ebp, edx
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 3
		sub     edx, ebx
		shl     edx, 5
		mov     ebx, [eax*4+___1a01f8h]
		mov     edx, [edx+ebx*4+___18e964h]
		mov     ebx, [eax*4+___1a021ch]
		mov     [eax*4+___1a0210h], ebp
		add     ebx, edx
		mov     [eax*4+___1a021ch], ebx
		call    near ___27a10h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, [eax*4+___1a01f8h]
		mov     ecx, 136h
		inc     esi
		mov     [___185a38h], ecx
		mov     [eax*4+___1a01f8h], esi
		call    near ___25330h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___29f6fh:
		call    near ___26650h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___29f83h:
		mov     eax, [___1a1ef8h]
		lea     ebx, [eax*8+0]
		sub     ebx, eax
		shl     ebx, 2
		sub     ebx, eax
		shl     ebx, 2
		cmp     dword [ebx+___1a01ech], byte 0ah
		jge     short ___29fe8h
		cmp     dword [___185a14h], byte 0
		je      short ___29fe8h
		mov     eax, [ebx+___1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+___18e974h]
		mov     edx, eax
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     edx, [ebx+___1a01ech]
		imul    edx, eax
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     esi, eax
___29fe8h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     dword [eax+___1a01ech], byte 0ah
		jl      short ___2a039h
		cmp     dword [___185a14h], byte 0
		je      short ___2a039h
		mov     eax, [eax+___1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+___18e974h]
		mov     edx, eax
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     esi, eax
___2a039h:
		mov     eax, [___1a1ef8h]
		lea     ebx, [eax*8+0]
		sub     ebx, eax
		shl     ebx, 2
		sub     ebx, eax
		shl     ebx, 2
		cmp     dword [ebx+___1a01ech], byte 0ah
		jge     short ___2a093h
		cmp     dword [___185a14h], byte 0
		jne     short ___2a093h
		mov     eax, [ebx+___1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+___18e974h]
		mov     edx, eax
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     esi, [ebx+___1a01ech]
		imul    esi, eax
___2a093h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     dword [eax+___1a01ech], byte 0ah
		jl      short ___2a0d9h
		cmp     dword [___185a14h], byte 0
		jne     short ___2a0d9h
		mov     eax, [eax+___1a01fch]
		lea     esi, [eax*8+0]
		sub     esi, eax
		shl     esi, 3
		sub     esi, eax
		shl     esi, 5
		mov     esi, [esi+___18e974h]
___2a0d9h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 0
		jle     near ___2a387h
		mov     eax, esi
		call    near ___28ab4h
		test    eax, eax
		jne     near ___2a387h
		push    8000h
		mov     edx, 1fh
		mov     ecx, [___1854c4h]
		mov     eax, 1
		push    ecx
		xor     ebx, ebx
		mov     ecx, [___24cc54h]
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		mov     edi, [eax+___1a01ech]
		cmp     edi, byte 0ah
		jge     short ___2a159h
		xor     edx, edx
		mov     [eax+___1a01ech], edx
		jmp     short ___2a162h
___2a159h:
		lea     ebp, [edi-0ah]
		mov     [eax+___1a01ech], ebp
___2a162h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [eax*4+___1a0210h]
		mov     ecx, [eax*4+___1a021ch]
		sub     ebx, esi
		add     ecx, esi
		mov     [eax*4+___1a0210h], ebx
		mov     [eax*4+___1a021ch], ecx
		call    near ___25330h
		call    near ___269e4h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2a1afh:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 64h
		jne     near ___2a276h
		cmp     dword [___185a14h], byte 0
		jne     near ___2a276h
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     edx, 136aah
		mov     eax, ___1820b0h
		call    near ___13094h
		mov     edx, 15eaah
		mov     eax, ___180130h
		call    near ___13094h
		mov     edx, 186aah
		mov     eax, ___1820c8h
		call    near ___13094h
		mov     edx, 1aeaah
		mov     eax, ___1820ech
		call    near ___13094h
		mov     edx, 1d6aah
		mov     eax, ___182110h
		xor     ebx, ebx
		call    near ___13094h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		push    8000h
		mov     edx, [___1854a4h]
		mov     eax, 2
		push    edx
		mov     ecx, [___24cc54h]
		mov     edx, 17h
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2a276h:
		cmp     dword [___19bd60h], byte 0
		je      short ___2a2e7h
		xor     esi, esi
		mov     [___1a1028h], esi
		call    near ___28c1ch
		mov     edi, [___185a14h]
		mov     [___185a4ch], eax
		test    edi, edi
		je      short ___2a2a6h
		test    eax, eax
		je      short ___2a2a6h
		call    near ___2ee78h
		jmp     short ___2a2d3h
___2a2a6h:
		push    8000h
		mov     edx, 18h
		mov     ebp, [___1854a8h]
		mov     eax, 1
		push    ebp
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		mov     eax, [___196adch]
		call    near ___33010h
___2a2d3h:
		mov     dword [___185a20h], 1
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2a2e7h:
		call    near ___28c1ch
		mov     ebx, [___185a14h]
		mov     [___185a4ch], eax
		test    ebx, ebx
		je      short ___2a30eh
		test    eax, eax
		je      short ___2a30eh
		call    near ___2ee78h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2a30eh:
		push    8000h
		mov     edx, 18h
		mov     ecx, [___1854a8h]
		mov     eax, 1
		push    ecx
		xor     ebx, ebx
		mov     ecx, [___24cc54h]
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		mov     edi, [___1a1ef8h]
		xor     ecx, ecx
		xor     edx, edx
		xor     eax, eax
___2a33dh:
		mov     esi, [eax+___1a0224h]
		cmp     ecx, esi
		jge     short ___2a34dh
		cmp     edx, edi
		je      short ___2a34dh
		mov     ecx, esi
___2a34dh:
		inc     edx
		add     eax, byte 6ch
		cmp     edx, byte 14h
		jl      short ___2a33dh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     ecx, [eax*4+___1a0224h]
		jge     short ___2a382h
		call    near ___31008h
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2a382h:
		call    near ___3266ch
___2a387h:
		add     esp, byte 60h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

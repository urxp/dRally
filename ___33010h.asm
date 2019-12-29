cpu 386
%include "macros.inc"

	extern 	WAIT_5
	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___106cbh
	extern	___10718h
	extern	___10728h
	extern	___10738h
	extern	___196a74h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a10e4h__VESA101h_DefaultScreenBufferA
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a0f8ch
	extern	___1a0f94h
	extern	___19bd60h
	extern	___3f71ch__allocateMemory
	extern	___1a1ef8h
	extern	___1a0f9ch
	extern	___23488h
	extern	___3f77ch__freeMemory
	extern	___196ad4h
	extern	___1a2011h
	extern	___196b2ch
	extern	___1823f8h
	extern	___1a54d0h
	extern	___180144h
	extern	bpa_read
	extern	___1a1114h
	extern	bpk_decode2
	extern	___19bd64h
	extern	___1a1134h
	extern	___1de818h
	extern	___1a1028h
	extern	___1a1f64h
	extern	___1a1f65h
	extern	___1a1f66h
	extern	___182400h
	extern	___182410h
	extern	___1a0ef8h
	extern	___1a0ef9h
	extern	___1a0efah
	extern	___1a0efbh
	extern	___182414h
	extern	itoa_
	extern	___185c7ah
	extern	___1a10b8h
	extern	___182428h
	extern	___12e78h
	extern	___180728h
	extern	___185a54h
	extern	___1824ach
	extern	__CHP
	extern	___182358h
	extern	___182360h
	extern	___182368h
	extern	___182438h
	extern	___251e8h
	extern	___182440h
	extern	strupr_
	extern	___1a0fb4h
	extern	___1a0228h
	extern	___180724h
	extern	___1a01e0h
	extern	___1a0220h
	extern	___19de70h
	extern	___1a1100h__VESA101h_DefaultScreenBuffer
	extern	___3a968h
	extern	dRally_Audio_setPosition
	extern	dRally_Audio_setMasterVolume
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___196a84h
	extern	___185a34h
	extern	___1a1168h
	extern	___1a1169h
	extern	___1a116ah
	extern	___1a116bh
	extern	___60a84h
	extern	___38878h
	extern	___2ab50h
	extern	___196adch
	extern	___60b60h
	extern	___611c0h
	extern	___3881ch
	extern	___1a108ch
	extern	___1a1034h
	extern	___1a102ch
	extern	___1a109ch
	extern	___1a1094h
	extern	___1a1090h
	extern	___1a10a8h
	extern	___1a10a0h
	extern	___196ab0h
	extern	___1a0ff4h
	extern	___1a0224h
	extern	___196aa4h
	extern	___1de81ch
	extern	___1de7d0h
	extern	___1a01ech
	extern	___1de7e0h
	extern	___1a01f0h
	extern	___1de7e4h
	extern	___1a01f4h
	extern	___1de7e8h
	extern	___1a01f8h
	extern	___1a01fch
	extern	___1de800h
	extern	___1de7ech
	extern	___1de814h
	extern	___196a94h
	extern	___185a14h
	extern	___1de7fch
	extern	___1a0244h
	extern	___1de7f0h
	extern	___1a0240h
	extern	___1a023ch
	extern	___1de7f4h
	extern	___1de7f8h
	extern	rand_
	extern	___1a020ch
	extern	___1a0fb8h
	extern	___1a0fe0h
	extern	___1de804h
	extern	___1de808h
	extern	___1de80ch
	extern	___1de7b8h
	extern	___18244ch
	extern	___1de8ach
	extern	___1de8b0h
	extern	___1de8b4h
	extern	___1de900h
	extern	___1de904h
	extern	___1de908h
	extern	___19f75ch
	extern	___2438bch
	extern	___19f760h
	extern	___19f764h
	extern	___2438b8h
	extern	___2438c0h
	extern	___1de820h
	extern	___1824b4h
	extern	___12200h
	extern	___12a54h
	extern	___24ec0h
	extern	___2fc50h
	extern	___1a103ch
	extern	___24e4d0h
	extern	___60719h
	extern	___56774h_race
	extern	___10754h
	extern	___60705h
	extern	___1de810h
	extern	___185a18h
	extern	___196ae8h
	extern	___196aa0h
	extern	___196a9ch
	extern	___196a98h
	extern	___196aa8h
	extern	___196aach
	extern	___1a0214h
	extern	___1a0218h
	extern	___243d44h
	extern	___1a01d4h
	extern	___1a01d8h
	extern	___1a01dch
	extern	___1a01d0h
	extern	___2ec68h
	extern	___196af0h
	extern	___196aech
	extern	___1a0234h
	extern	___1de7dch
	extern	___1a0210h
	extern	___1a0238h
	extern	___1a022ch
	extern	___196ab8h
	extern	___1a116ch
	extern	___196a80h
	extern	___1a1f4fh
	extern	___1a1f4eh
	extern	___180864h
	extern	___1a1dbah
	extern	___182458h
	extern	___1a1f63h
	extern	___1a1f4dh
	extern	___180130h
	extern	___182470h
	extern	___1a2010h
	extern	___18d492h
	extern	___182490h
	extern	___1824bch
	extern	___1824c4h
	extern	___1824cch
	extern	___1a0230h
	extern	___1de834h
	extern	___1de78ch
	extern	___3deb8h
	extern	___117d4h
	extern	___117f4h
	extern	___181c9ch
	extern	___11378h
	extern	___181ca8h
	extern	dRally_Audio_load
	extern	___24cc58h
	extern	dRally_Audio_setMusicVolume
	extern	dRally_Audio_setSampleRate
	extern	dRally_Audio_play
	;extern	___659b8h
	extern	___606dfh
	extern	___605deh
	extern	___12940h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___3986ch
	extern	___1e4f8h
	extern	___31588h
	extern	___3079ch
	extern	___1a1f67h
	extern	___1a1f68h
	extern	___1a1f69h
	extern	__STOSB
	extern	___3892ch
	extern	___185a20h
	extern	___22808h
	extern 	VESA101_SETMODE

section .text

___33000h:
dd	___333a6h
dd	___3349dh
dd	___33595h
dd	___3368ch
__GDECL(___33010h)
		push    128h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, 0fch
		and     esp, byte 0fffffff8h
		mov     [esp+0c8h], eax
		mov     ecx, 13h
		mov     edi, esp
		mov     esi, ___106cbh
		rep movsd   
		lea     edi, [esp+88h]
		mov     esi, ___10718h
		movsd   
		movsd   
		movsd   
		movsd   
		lea     edi, [esp+0a8h]
		mov     esi, ___10728h
		movsd   
		movsd   
		movsd   
		movsd   
		xor     edx, edx
		lea     edi, [esp+0b8h]
		mov     esi, ___10738h
		mov     [___196a74h], edx
		movsd   
		movsd   
		movsd   
		movsd   
		mov     ecx, 4b000h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     edx, 280h
		call 	__MOVS
		mov     ecx, 4b000h
		mov     eax, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, eax
		mov     [___1a112ch__VESA101_ACTIVESCREEN_PTR], eax
		call 	__MOVS
		mov     ecx, 36h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0f8ch]
		add     ebx, 42900h
___330dch:
		mov     edi, edx
___330deh:
		mov     al, [esi]
		or      al, al
		je      short ___330e6h
		mov     [ebx], al
___330e6h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___330deh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___330dch
		mov     ecx, 112h
		mov     edx, 0e1h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0f94h]
		add     ebx, 0fa0dh
___33112h:
		mov     edi, edx
___33114h:
		mov     al, [esi]
		or      al, al
		je      short ___3311ch
		mov     [ebx], al
___3311ch:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___33114h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___33112h
		cmp     dword [esp+0c8h], byte 4
		jge     short ___3318ch
		xor     ecx, ecx
		xor     esi, esi
		mov     [esp+0d0h], ecx
		mov     edi, 2
___33146h:
		mov     eax, [esp+0d0h]
		mov     edx, eax
		sar     edx, 1fh
		idiv    edi
		cmp     edx, byte 64h
		jge     short ___33172h
		mov     ebx, esi
___3315bh:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, byte 2
		add     eax, ebx
		mov     byte [edx+eax*1+28d01h], 0c4h
		cmp     edx, byte 64h
		jl      short ___3315bh
___33172h:
		mov     eax, [esp+0d0h]
		inc     eax
		add     esi, 280h
		mov     [esp+0d0h], eax
		cmp     eax, byte 5bh
		jl      short ___33146h
___3318ch:
		cmp     dword [esp+0c8h], byte 3
		jge     short ___331ech
		xor     ecx, ecx
		xor     esi, esi
		mov     [esp+0d0h], ecx
		mov     edi, 2
___331a6h:
		mov     eax, [esp+0d0h]
		mov     edx, eax
		sar     edx, 1fh
		idiv    edi
		cmp     edx, byte 64h
		jge     short ___331d2h
		mov     ebx, esi
___331bbh:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, byte 2
		add     eax, ebx
		mov     byte [edx+eax*1+22b11h], 0c4h
		cmp     edx, byte 64h
		jl      short ___331bbh
___331d2h:
		mov     eax, [esp+0d0h]
		inc     eax
		add     esi, 280h
		mov     [esp+0d0h], eax
		cmp     eax, byte 5bh
		jl      short ___331a6h
___331ech:
		cmp     dword [___19bd60h], byte 0
		je      near ___3337ah
		mov     cl, 2
		xor     bl, bl
		mov     eax, 4
		mov     [esp+0cch], bl
		mov     [esp+0ceh], cl
		mov     bh, 1
		mov     ch, 3
		mov     [esp+0cdh], bh
		mov     [esp+0cfh], ch
		call    near ___3f71ch__allocateMemory
		mov     dl, [___1a1ef8h]
		mov     ebx, 13h
		mov     [eax], dl
		mov     edx, 1
		mov     [___1a0f9ch], eax
		call    near ___23488h
		mov     eax, [___1a0f9ch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___196ad4h]
		xor     edx, edx
		mov     dl, [eax+___1a2011h]
		lea     eax, [edx*8+0]
		mov     esi, ___196b2ch
		add     eax, edx
		lea     edi, [esp+4ch]
		add     esi, eax
		lea     ebx, [esp+4ch]
		call 	__STRCPY
		mov     esi, ___1823f8h
		lea     edi, [esp+4ch]
		mov     edx, ___1a54d0h
		call 	__STRCAT
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___1a1114h]
		push    edx
		call    near bpk_decode2
		mov     ecx, 112h
		mov     edx, 168h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1114h]
		add     ebx, 0fb08h
___332f3h:
		mov     edi, edx
___332f5h:
		mov     al, [esi]
		or      al, al
		je      short ___332fdh
		mov     [ebx], al
___332fdh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___332f5h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___332f3h
		mov     eax, [___196ad4h]
		mov     al, [eax+___1a2011h]
		and     eax, 0ffh
		mov     esi, esp
		shl     eax, 2
		mov     edi, ___19bd64h
		add     esi, eax
		call 	__STRCPY
		mov     eax, [___196ad4h]
		mov     ebx, 5
		mov     dl, [eax+___1a2011h]
		mov     [___1a1134h], ebx
		cmp     dl, 8
		jbe     short ___3336dh
		mov     dword [___1de818h], 1
		jmp     near ___33766h
___3336dh:
		xor     ecx, ecx
		mov     [___1de818h], ecx
		jmp     near ___33766h
___3337ah:
		mov     eax, [___1a1028h]
		cmp     byte [eax+___1a1f64h], 8
		seta    dl
		and     edx, 0ffh
		mov     [___1de818h], edx
		cmp     eax, byte 3
		ja      near ___33710h
		jmp     near dword [cs:eax*4+___33000h]
___333a6h:
		xor     edx, edx
		mov     dl, [___1a1f64h]
		lea     eax, [edx*8+0]
		mov     esi, ___196b2ch
		add     eax, edx
		lea     edi, [esp+4ch]
		add     esi, eax
		lea     ebx, [esp+4ch]
		call 	__STRCPY
		mov     esi, ___1823f8h
		lea     edi, [esp+4ch]
		mov     edx, ___1a54d0h
		call 	__STRCAT
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     esi, [___1a1114h]
		push    esi
		call    near bpk_decode2
		mov     ecx, 112h
		mov     edx, 168h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1114h]
		add     ebx, 0fb08h
___33447h:
		mov     edi, edx
___33449h:
		mov     al, [esi]
		or      al, al
		je      short ___33451h
		mov     [ebx], al
___33451h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___33449h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___33447h
		xor     eax, eax
		mov     al, [___1a1f64h]
		mov     esi, esp
		shl     eax, 2
		mov     edi, ___19bd64h
		add     esi, eax
		call 	__STRCPY
		mov     dword [___1a1134h], 4
		jmp     near ___33710h
___3349dh:
		xor     edx, edx
		mov     dl, [___1a1f65h]
		lea     eax, [edx*8+0]
		mov     esi, ___196b2ch
		add     eax, edx
		lea     edi, [esp+4ch]
		add     esi, eax
		lea     ebx, [esp+4ch]
		call 	__STRCPY
		mov     esi, ___1823f8h
		lea     edi, [esp+4ch]
		mov     edx, ___1a54d0h
		call 	__STRCAT
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     ebx, [___1a1114h]
		push    ebx
		call    near bpk_decode2
		mov     ecx, 112h
		mov     edx, 168h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1114h]
		add     ebx, 0fb08h
___3353eh:
		mov     edi, edx
___33540h:
		mov     al, [esi]
		or      al, al
		je      short ___33548h
		mov     [ebx], al
___33548h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___33540h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___3353eh
		xor     eax, eax
		mov     al, [___1a1f65h]
		mov     esi, esp
		shl     eax, 2
		mov     edi, ___19bd64h
		add     esi, eax
		mov     ecx, 5
		call 	__STRCPY
		mov     [___1a1134h], ecx
		jmp     near ___33710h
___33595h:
		xor     edx, edx
		mov     dl, [___1a1f66h]
		lea     eax, [edx*8+0]
		mov     esi, ___196b2ch
		add     eax, edx
		lea     edi, [esp+4ch]
		add     esi, eax
		lea     ebx, [esp+4ch]
		call 	__STRCPY
		mov     esi, ___1823f8h
		lea     edi, [esp+4ch]
		mov     edx, ___1a54d0h
		call 	__STRCAT
		mov     eax, ___180144h
		call    near bpa_read
		push    ___1a54d0h
		mov     eax, [___1a1114h]
		push    eax
		call    near bpk_decode2
		mov     ecx, 112h
		mov     edx, 168h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1114h]
		add     ebx, 0fb08h
___33635h:
		mov     edi, edx
___33637h:
		mov     al, [esi]
		or      al, al
		je      short ___3363fh
		mov     [ebx], al
___3363fh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___33637h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___33635h
		xor     eax, eax
		mov     al, [___1a1f66h]
		mov     esi, esp
		shl     eax, 2
		mov     edi, ___19bd64h
		add     esi, eax
		mov     edx, 6
		call 	__STRCPY
		mov     [___1a1134h], edx
		jmp     near ___33710h
___3368ch:
		lea     edi, [esp+4ch]
		lea     ebx, [esp+4ch]
		mov     esi, ___182400h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
		movsd   
		movsd   
		movsd   
		movsb   
		call    near bpa_read
		push    ___1a54d0h
		mov     ecx, [___1a1114h]
		push    ecx
		call    near bpk_decode2
		mov     ecx, 112h
		mov     edx, 168h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1114h]
		add     ebx, 0fb08h
___336d9h:
		mov     edi, edx
___336dbh:
		mov     al, [esi]
		or      al, al
		je      short ___336e3h
		mov     [ebx], al
___336e3h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___336dbh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___336d9h
		mov     esi, 9
		mov     eax, [___182410h]
		xor     edi, edi
		mov     [___19bd64h], eax
		mov     [___1a1134h], esi
		mov     [___1de818h], edi
___33710h:
		mov     edx, [___1a1028h]
		mov     al, [edx*4+___1a0ef8h]
		mov     [esp+0cch], al
		mov     al, [edx*4+___1a0ef9h]
		mov     [esp+0cdh], al
		mov     al, [edx*4+___1a0efah]
		mov     [esp+0ceh], al
		mov     al, [edx*4+___1a0efbh]
		mov     [esp+0cfh], al
		cmp     edx, byte 3
		jne     short ___33766h
		mov     al, [___1a1ef8h]
		mov     [esp+0cch], al
		mov     [esp+0cdh], al
___33766h:
		lea     edi, [esp+4ch]
		mov     ebx, 0ah
		mov     esi, ___182414h
		lea     edx, [esp+74h]
		mov     eax, [___1a1134h]
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		call    near itoa_
		lea     esi, [esp+74h]
		lea     edi, [esp+4ch]
		lea     ebx, [esp+4ch]
		mov     edx, ___185c7ah
		call 	__STRCAT
		mov     ecx, 3800dh
		lea     edi, [esp+4ch]
		mov     eax, [___1a10b8h]
		mov     esi, ___182428h
		call    near ___12e78h
		movsd   
		movsd   
		movsd   
		movsw   
		cmp     dword [___19bd60h], byte 0
		je      short ___33845h
		mov     esi, ___180728h
		lea     edi, [esp+4ch]
		call 	__STRCAT
		fild    dword [___185a54h]
		fmul    qword [___1824ach]
		mov     ebx, 0ah
		lea     edx, [esp+74h]
		lea     esi, [esp+74h]
		call    near __CHP
		fistp   dword [esp+0d4h]
		mov     eax, [esp+0d4h]
		lea     edi, [esp+4ch]
		call    near itoa_
		jmp     near ___338f3h
___33845h:
		cmp     dword [___1a1028h], byte 0
		jne     short ___33879h
		mov     esi, ___182358h
		lea     edi, [esp+4ch]
		call 	__STRCAT
___33879h:
		cmp     dword [___1a1028h], byte 1
		jne     short ___338adh
		mov     esi, ___182360h
		lea     edi, [esp+4ch]
		call 	__STRCAT
___338adh:
		cmp     dword [___1a1028h], byte 2
		jne     short ___338e1h
		mov     esi, ___182368h
		lea     edi, [esp+4ch]
		call 	__STRCAT
___338e1h:
		cmp     dword [___1a1028h], byte 3
		jne     short ___33915h
		mov     esi, ___182438h
		lea     edi, [esp+4ch]
___338f3h:
		call 	__STRCAT
___33915h:
		lea     eax, [esp+4ch]
		mov     ecx, 3816bh
		lea     ebx, [esp+4ch]
		mov     edx, ___185c7ah
		call    near ___251e8h
		sub     ecx, eax
		mov     eax, [___1a10b8h]
		call    near ___12e78h
		cmp     dword [___1a1028h], byte 3
		jne     near ___33af9h
		lea     edi, [esp+4ch]
		lea     eax, [esp+4ch]
		mov     esi, ___182440h
		lea     ebx, [esp+4ch]
		mov     edx, ___185c7ah
		movsd   
		movsd   
		movsw   
		call    near strupr_
		mov     ecx, [esp+0a8h]
		mov     eax, [___1a10b8h]
		call    near ___12e78h
		mov     edx, [esp+0b8h]
		mov     ecx, 40h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fb4h]
		add     ebx, edx
		mov     edx, ecx
		shr     dl, 2
___33994h:
		mov     ch, dl
___33996h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___33996h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___33994h
		xor     edx, edx
		mov     dl, [esp+0cch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		lea     edi, [esp+4ch]
		sub     eax, edx
		mov     ebx, 0ah
		lea     edx, [esp+4ch]
		mov     eax, [eax*4+___1a0228h]
		mov     esi, ___180724h
		call    near itoa_
		call 	__STRCAT
		lea     eax, [esp+4ch]
		lea     ebx, [esp+4ch]
		call    near ___251e8h
		mov     ecx, [esp+8ch]
		mov     edx, ___185c7ah
		sub     ecx, eax
		mov     eax, [___1a10b8h]
		call    near ___12e78h
		xor     edx, edx
		mov     dl, [esp+0cch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		lea     edi, [esp+4ch]
		add     esi, eax
		lea     ebx, [esp+4ch]
		call 	__STRCPY
		lea     eax, [esp+4ch]
		mov     edx, ___185c7ah
		call    near strupr_
		mov     ecx, [esp+0ach]
		mov     eax, [___1a10b8h]
		call    near ___12e78h
		xor     edx, edx
		mov     dl, [esp+0cch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     ecx, [esp+0bch]
		shl     eax, 2
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		sub     eax, edx
		add     ebx, ecx
		mov     ecx, 40h
		mov     esi, [eax*4+___1a0220h]
		mov     edx, ecx
		mov     esi, [esi*4+___19de70h]
		shr     dl, 2
___33ad2h:
		mov     ch, dl
___33ad4h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___33ad4h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___33ad2h
		jmp     near ___33c89h
___33af9h:
		xor     edi, edi
		mov     eax, [esp+0c8h]
		mov     [esp+0d0h], edi
		test    eax, eax
		jle     near ___33c89h
		mov     [esp+0f4h], edi
___33b18h:
		mov     edx, [esp+0d0h]
		xor     eax, eax
		mov     al, [esp+edx*1+0cch]
		imul    eax, eax, byte 6ch
		mov     ebx, 0ah
		mov     esi, ___180724h
		lea     edx, [esp+4ch]
		mov     eax, [eax+___1a0228h]
		lea     edi, [esp+4ch]
		call    near itoa_
		call 	__STRCAT
		lea     eax, [esp+4ch]
		mov     ecx, [esp+0f4h]
		lea     ebx, [esp+4ch]
		call    near ___251e8h
		mov     ecx, [esp+ecx*1+88h]
		mov     edx, ___185c7ah
		sub     ecx, eax
		mov     eax, [___1a10b8h]
		call    near ___12e78h
		mov     edx, [esp+0d0h]
		xor     eax, eax
		mov     al, [esp+edx*1+0cch]
		imul    eax, eax, byte 6ch
		mov     esi, ___1a01e0h
		lea     edi, [esp+4ch]
		mov     ecx, [esp+0f4h]
		add     esi, eax
		lea     ebx, [esp+4ch]
		call 	__STRCPY
		lea     eax, [esp+4ch]
		mov     edx, ___185c7ah
		call    near strupr_
		mov     eax, [___1a10b8h]
		mov     ecx, [esp+ecx*1+0a8h]
		call    near ___12e78h
		mov     eax, [esp+0f4h]
		mov     edx, [esp+0d0h]
		mov     edi, [esp+eax*1+0b8h]
		xor     eax, eax
		mov     al, [esp+edx*1+0cch]
		imul    eax, eax, byte 6ch
		mov     ecx, 40h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [eax+___1a0220h]
		add     ebx, edi
		mov     edx, ecx
		mov     esi, [esi*4+___19de70h]
		shr     dl, 2
___33c38h:
		mov     ch, dl
___33c3ah:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___33c3ah
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___33c38h
		mov     eax, [esp+0f4h]
		mov     edx, [esp+0d0h]
		mov     ebx, [esp+0c8h]
		add     eax, byte 4
		inc     edx
		mov     [esp+0f4h], eax
		mov     [esp+0d0h], edx
		cmp     edx, ebx
		jl      near ___33b18h
___33c89h:
		mov     eax, [___1a1100h__VESA101h_DefaultScreenBuffer]
		mov     [___1a112ch__VESA101_ACTIVESCREEN_PTR], eax
		mov     eax, 0ffffffffh
		call    near ___3a968h
		cmp     dword [___19bd60h], byte 0
		je      short ___33cadh
		mov     eax, 1e00h				;;	30
		jmp     short ___33cb2h
___33cadh:
		mov     eax, 2800h				;;	40
___33cb2h:
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setPosition
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, 10000h
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call 	WAIT_5
		cmp     dword [___19bd60h], byte 0
		je      near ___33e7eh
		cmp     dword [___196a84h], byte 0
		je      short ___33ce6h
		mov     dword [___185a34h], 1
___33ce6h:
		mov     edx, [___196a84h]
		test    edx, edx
		jne     near ___33e7eh
		mov     dl, [___1a1168h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, ___1a01e0h
		shl     eax, 2
		add     edx, eax
		mov     [esp+98h], edx
		xor     edx, edx
		mov     dl, [___1a1169h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, ___1a01e0h
		shl     eax, 2
		add     edx, eax
		mov     [esp+9ch], edx
		xor     edx, edx
		mov     dl, [___1a116ah]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, ___1a01e0h
		shl     eax, 2
		add     edx, eax
		mov     [esp+0a0h], edx
		xor     edx, edx
		mov     dl, [___1a116bh]
		lea     eax, [edx*8+0]
		sub     eax, edx
		xor     ebx, ebx
		shl     eax, 2
		xor     esi, esi
		sub     eax, edx
		mov     edx, ___1a01e0h
		shl     eax, 2
		mov     [esp+0d0h], ebx
		add     edx, eax
		mov     eax, 4
		mov     [esp+0a4h], edx
		call    near ___3f71ch__allocateMemory
		mov     dl, [___1a1ef8h]
		mov     [___1a0f9ch], eax
		mov     [eax], dl
		call    near ___60a84h
		mov     edi, 1
___33dbah:
		cmp     dword [___196a84h], byte 0
		jne     near ___33e4ah
		call    near ___38878h
		call    near ___2ab50h
		call    near ___2ab50h
		mov     ebx, 0ah
		mov     edx, esi
		mov     eax, esi
		sar     edx, 1fh
		idiv    ebx
		cmp     edx, byte 1
		jne     short ___33e0fh
		imul    ebx, [___1a1ef8h], byte 6ch
		mov     ecx, 6ch
		mov     edx, [___196adch]
		add     ebx, ___1a01e0h
		mov     eax, edi
		call    near ___60b60h
		mov     [esp+0d0h], eax
___33e0fh:
		mov     ebx, 384h
		mov     edx, esi
		mov     eax, esi
		sar     edx, 1fh
		idiv    ebx
		cmp     edx, 383h
		jne     short ___33e36h
		mov     ebx, 13h
		mov     eax, [___1a0f9ch]
		mov     edx, edi
		call    near ___23488h
___33e36h:
		mov     edx, [esp+0d0h]
		inc     esi
		cmp     edx, 0ffh
		jne     near ___33dbah
___33e4ah:
		lea     edx, [esp+98h]
		mov     eax, 6ch
		mov     ebx, [esp+0d0h]
		call    near ___611c0h
		cmp     ebx, 0ffh
		jne     short ___33e6fh
		call    near ___3881ch
___33e6fh:
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		mov     eax, [___1a0f9ch]
		call    near ___3f77ch__freeMemory
___33e7eh:
		cmp     dword [___196a84h], byte 0
		je      short ___33e91h
		mov     dword [___185a34h], 1
___33e91h:
		mov     edi, [___196a84h]
		test    edi, edi
		jne     near ___35b5dh
		mov     ecx, [___1a1ef8h]
		mov     [___1a108ch], edi
		mov     [___1a1034h], edi
		mov     [___1a102ch], edi
		mov     [___1a109ch], edi
		mov     [___1a1094h], edi
		mov     [___1a1090h], edi
		mov     [___1a10a8h], edi
		mov     [___1a10a0h], edi
		mov     [___196ab0h], edi
		mov     [esp+0d0h], edi
		mov     [___1a0ff4h], edi
		xor     edx, edx
		xor     eax, eax
___33eech:
		mov     edi, [eax+___1a0224h]
		cmp     edx, edi
		jge     short ___33f01h
		cmp     ecx, [esp+0d0h]
		je      short ___33f01h
		mov     edx, edi
___33f01h:
		mov     esi, [esp+0d0h]
		inc     esi
		add     eax, byte 6ch
		mov     [esp+0d0h], esi
		cmp     esi, byte 14h
		jl      short ___33eech
		cmp     dword [___19bd60h], byte 0
		jne     short ___33f36h
		cmp     dword [___196aa4h], byte 0
		jle     short ___33f36h
		mov     dword [___1de81ch], 1
		jmp     short ___33f3eh
___33f36h:
		xor     ebx, ebx
		mov     [___1de81ch], ebx
___33f3eh:
		xor     esi, esi
		mov     edi, [esp+0c8h]
		mov     [esp+0d0h], esi
		test    edi, edi
		jle     near ___341cfh
		mov     ecx, ___1de7d0h
		xor     ebx, ebx
___33f5dh:
		mov     esi, [esp+0d0h]
		movzx   esi, byte [esp+esi*1+0cch]
		imul    esi, esi, byte 6ch
		mov     edi, ecx
		add     esi, ___1a01e0h
		call 	__STRCPY
		mov     eax, ecx
		call    near strupr_
		mov     eax, [esp+0d0h]
		xor     edx, edx
		mov     dl, [esp+eax*1+0cch]
		imul    eax, edx, byte 6ch
		mov     esi, [eax+___1a01ech]
		mov     [ebx+___1de7e0h], esi
		mov     esi, [eax+___1a01f0h]
		mov     [ebx+___1de7e4h], esi
		mov     esi, [eax+___1a01f4h]
		mov     [ebx+___1de7e8h], esi
		mov     esi, [eax+___1a01f8h]
		mov     eax, [eax+___1a01fch]
		mov     [ebx+___1de800h], eax
		mov     eax, [___1a1ef8h]
		mov     [ebx+___1de7ech], esi
		cmp     edx, eax
		jne     short ___33ffch
		mov     dword [ebx+___1de814h], 3
		jmp     short ___34007h
___33ffch:
		mov     eax, [___196a94h]
		mov     [ebx+___1de814h], eax
___34007h:
		mov     eax, [___185a14h]
		mov     [ebx+___1de7fch], eax
		mov     eax, [esp+0d0h]
		xor     edx, edx
		mov     dl, [esp+eax*1+0cch]
		imul    eax, edx, byte 6ch
		mov     esi, [eax+___1a0244h]
		mov     [ebx+___1de7f0h], esi
		mov     esi, [eax+___1a0240h]
		mov     eax, [eax+___1a023ch]
		mov     [ebx+___1de7f4h], esi
		mov     esi, [___1a1ef8h]
		mov     [ebx+___1de7f8h], eax
		cmp     edx, esi
		je      near ___340efh
		mov     edi, [___19bd60h]
		test    edi, edi
		jne     near ___340efh
		mov     [ebx+___1de7f8h], edi
		mov     [ebx+___1de7f4h], edi
		mov     [ebx+___1de7f0h], edi
		call    near rand_
		mov     edx, eax
		mov     esi, 5
		sar     edx, 1fh
		idiv    esi
		test    edx, edx
		jne     short ___3409fh
		cmp     dword [___185a14h], byte 0
		je      short ___3409fh
		mov     dword [ebx+___1de7f0h], 1
___3409fh:
		call    near rand_
		mov     edx, eax
		mov     esi, 5
		sar     edx, 1fh
		idiv    esi
		test    edx, edx
		jne     short ___340c7h
		cmp     dword [___185a14h], byte 0
		je      short ___340c7h
		mov     dword [ebx+___1de7f4h], 1
___340c7h:
		call    near rand_
		mov     edx, eax
		mov     esi, 5
		sar     edx, 1fh
		idiv    esi
		test    edx, edx
		jne     short ___340efh
		cmp     dword [___185a14h], byte 0
		je      short ___340efh
		mov     dword [ebx+___1de7f8h], 8
___340efh:
		mov     edx, [esp+0d0h]
		xor     eax, eax
		mov     edi, [___1a1ef8h]
		mov     al, [esp+edx*1+0cch]
		cmp     eax, edi
		je      short ___34112h
		cmp     dword [___19bd60h], byte 0
		je      short ___34132h
___34112h:
		mov     edx, [esp+0d0h]
		xor     eax, eax
		mov     al, [esp+edx*1+0cch]
		imul    eax, eax, byte 6ch
		mov     edx, [eax+___1a020ch]
		mov     eax, [___1a0fb8h]
		jmp     short ___34140h
___34132h:
		imul    eax, eax, byte 6ch
		mov     edx, [eax+___1a020ch]
		mov     eax, [___1a0fe0h]
___34140h:
		lea     edx, [edx+edx*2]
		add     eax, edx
		xor     edx, edx
		mov     dl, [eax]
		mov     [ebx+___1de804h], edx
		xor     edx, edx
		mov     dl, [eax+1]
		mov     [ebx+___1de808h], edx
		mov     al, [eax+2]
		and     eax, 0ffh
		mov     [ebx+___1de80ch], eax
		cmp     dword [___19bd60h], byte 0
		je      short ___341abh
		mov     eax, [___196adch]
		mov     edi, [esp+0d0h]
		dec     eax
		cmp     eax, edi
		jge     short ___341abh
		mov     eax, [___1a0fe0h]
		xor     edx, edx
		mov     dl, [eax+1eh]
		mov     [ebx+___1de804h], edx
		xor     edx, edx
		mov     dl, [eax+1fh]
		mov     [ebx+___1de808h], edx
		mov     al, [eax+20h]
		and     eax, 0ffh
		mov     [ebx+___1de80ch], eax
___341abh:
		mov     eax, [esp+0d0h]
		mov     edx, [esp+0c8h]
		add     ebx, byte 54h
		inc     eax
		add     ecx, byte 54h
		mov     [esp+0d0h], eax
		cmp     eax, edx
		jl      near ___33f5dh
___341cfh:
		cmp     dword [___19bd60h], byte 0
		je      short ___3423eh
		mov     eax, [esp+0c8h]
		mov     [esp+0d0h], eax
		cmp     eax, byte 4
		jge     short ___3423eh
		mov     edx, eax
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
___341fah:
		mov     edx, [___1a0fe0h]
		xor     ebx, ebx
		mov     bl, [edx+1eh]
		mov     [eax+___1de804h], ebx
		xor     ebx, ebx
		mov     bl, [edx+1fh]
		mov     [eax+___1de808h], ebx
		mov     dl, [edx+20h]
		mov     esi, [esp+0d0h]
		add     eax, byte 54h
		and     edx, 0ffh
		inc     esi
		mov     [eax+___1de7b8h], edx
		mov     [esp+0d0h], esi
		cmp     eax, dword 150h
		jl      short ___341fah
___3423eh:
		xor     edx, edx
		mov     eax, [esp+0c8h]
		mov     [esp+0d0h], edx
		test    eax, eax
		jle     short ___3428eh
		mov     edi, [esp+0c8h]
		mov     ecx, [___1a1ef8h]
		xor     eax, eax
___34261h:
		cmp     edx, [eax+___1a0224h]
		jge     short ___34278h
		cmp     ecx, [esp+0d0h]
		je      short ___34278h
		mov     edx, [eax+___1a0224h]
___34278h:
		mov     esi, [esp+0d0h]
		inc     esi
		add     eax, byte 6ch
		mov     [esp+0d0h], esi
		cmp     esi, edi
		jl      short ___34261h
___3428eh:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     edx, [eax*4+___1a0224h]
		jge     near ___3435fh
		mov     ecx, [___19bd60h]
		test    ecx, ecx
		jne     near ___3435fh
		mov     edi, ___1de7d0h
		mov     esi, ___18244ch
		mov     ebx, 1
		movsd   
		movsd   
		movsw   
		mov     eax, [___196a94h]
		mov     edi, 6
		mov     [___1de814h], eax
		mov     [___1de7e0h], ecx
		mov     [___1de7f0h], ecx
		mov     [___1de7f4h], ebx
		mov     ecx, [___185a14h]
		mov     [___1de800h], edi
		test    ecx, ecx
		je      short ___3430dh
		mov     dword [___1de7f8h], 8
		jmp     short ___34313h
___3430dh:
		mov     [___1de7f8h], ecx
___34313h:
		mov     eax, [___185a14h]
		mov     [___1de7fch], eax
		mov     eax, [___1a0fe0h]
		xor     ebx, ebx
		mov     bl, [eax+1eh]
		mov     [___1de8ach], ebx
		xor     ebx, ebx
		mov     bl, [eax+1fh]
		mov     [___1de8b0h], ebx
		mov     al, [eax+20h]
		and     eax, 0ffh
		mov     [___1de8b4h], eax
		mov     eax, [___1de8ach]
		mov     [___1de900h], eax
		mov     eax, [___1de8b4h]
		mov     [___1de904h], ebx
		mov     [___1de908h], eax
___3435fh:
		mov     ebx, [___1a1ef8h]
		lea     ecx, [ebx*8+0]
		sub     ecx, ebx
		shl     ecx, 2
		sub     ecx, ebx
		shl     ecx, 2
		mov     ebx, [ecx+___1a01fch]
		lea     edi, [ebx*8+0]
		sub     edi, ebx
		shl     edi, 2
		mov     esi, [___1a1028h]
		sub     edi, ebx
		xor     ebx, ebx
		mov     bl, [esi+___1a1f64h]
		lea     eax, [ebx*4+0]
		shl     edi, 4
		sub     eax, ebx
		mov     ebx, [edi+eax*8+___19f75ch]
		mov     [___2438bch], ebx
		mov     ebx, [edi+eax*8+___19f760h]
		mov     eax, [edi+eax*8+___19f764h]
		mov     [___2438b8h], ebx
		mov     [___2438c0h], eax
		xor     eax, eax
		mov     ebx, [___19bd60h]
		mov     [___1de820h], eax
		test    ebx, ebx
		jne     near ___3452ch
		cmp     edx, [ecx+___1a0224h]
		jl      near ___3452ch
		test    esi, esi
		jne     short ___343f9h
		mov     dword [___1de820h], 32h
___343f9h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		mov     ebx, [eax+___1a0228h]
		test    ebx, ebx
		jle     short ___34445h
		cmp     ebx, byte 6
		jge     short ___34445h
		cmp     dword [___1a1028h], byte 1
		jne     short ___34432h
		mov     dword [___1de820h], 104h
___34432h:
		cmp     dword [___1a1028h], byte 2
		jne     short ___34445h
		mov     dword [___1de820h], 1f4h
___34445h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		mov     ecx, [eax+___1a0228h]
		cmp     ecx, byte 5
		jle     short ___34492h
		cmp     ecx, byte 0bh
		jge     short ___34492h
		cmp     dword [___1a1028h], byte 1
		jne     short ___3447fh
		mov     dword [___1de820h], 0c8h
___3447fh:
		cmp     dword [___1a1028h], byte 2
		jne     short ___34492h
		mov     dword [___1de820h], 12ch
___34492h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		mov     esi, [eax+___1a0228h]
		cmp     esi, byte 0ah
		jle     short ___344dfh
		cmp     esi, byte 10h
		jge     short ___344dfh
		cmp     dword [___1a1028h], byte 1
		jne     short ___344cch
		mov     dword [___1de820h], 78h
___344cch:
		cmp     dword [___1a1028h], byte 2
		jne     short ___344dfh
		mov     dword [___1de820h], 96h
___344dfh:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		mov     edi, [eax+___1a0228h]
		cmp     edi, byte 0fh
		jle     short ___3452ch
		cmp     edi, byte 15h
		jge     short ___3452ch
		cmp     dword [___1a1028h], byte 1
		jne     short ___34519h
		mov     dword [___1de820h], 3ch
___34519h:
		cmp     dword [___1a1028h], byte 2
		jne     short ___3452ch
		mov     dword [___1de820h], 50h
___3452ch:
		cmp     dword [___19bd60h], byte 0
		je      short ___3454ch
		fild    dword [___185a54h]
		fmul    qword [___1824b4h]
		call    near __CHP
		fistp   dword [___1de820h]
___3454ch:
		cmp     dword [___19bd60h], byte 0
		jne     short ___3457ch
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     edx, [eax*4+___1a0224h]
		jge     short ___3457ch
		mov     dword [___1de820h], 190h
___3457ch:
		call    near ___12200h
		call    near ___12a54h
		call    near ___24ec0h
		call    near ___2fc50h
		cmp     dword [___19bd60h], byte 0
		je      short ___345a3h
		mov     eax, [___1a1ef8h]
		mov     [___1a103ch], eax
___345a3h:
		cmp     dword [___19bd60h], byte 0
		je      short ___345bah
		cmp     dword [___24e4d0h], byte 2
		jne     short ___345bah
		call    near ___60719h
___345bah:
		mov     edx, [esp+0c8h]
		mov     eax, [___1a103ch]
		call    near ___56774h_race
		cmp     dword [___19bd60h], byte 0
		je      short ___345e7h
		cmp     dword [___24e4d0h], byte 2
		jne     short ___345e7h
		mov     eax, ___10754h
		call    near ___60705h
___345e7h:
		mov     edx, [___1a103ch]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     ecx, [___1a1ef8h]
		mov     eax, [eax*4+___1de810h]
		xor     edx, edx
		mov     [___185a18h], eax
		mov     [___196ae8h], eax
		mov     [esp+0d0h], edx
		xor     eax, eax
___3461dh:
		cmp     edx, [eax+___1a0224h]
		jge     short ___34634h
		cmp     ecx, [esp+0d0h]
		je      short ___34634h
		mov     edx, [eax+___1a0224h]
___34634h:
		mov     esi, [esp+0d0h]
		inc     esi
		add     eax, byte 6ch
		mov     [esp+0d0h], esi
		cmp     esi, byte 14h
		jl      short ___3461dh
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     edx, [eax*4+___1a0224h]
		jge     short ___34675h
		cmp     dword [___19bd60h], byte 0
		je      near ___34826h
___34675h:
		xor     eax, eax
		mov     edi, [esp+0c8h]
		mov     [esp+0d0h], eax
		test    edi, edi
		jle     short ___346c1h
		xor     edx, edx
___3468bh:
		mov     ebx, [esp+0d0h]
		cmp     ebx, [___1a103ch]
		je      short ___346a4h
		cmp     dword [edx+___1de7e0h], byte 64h
		jne     short ___346a4h
		inc     eax
___346a4h:
		mov     edi, [esp+0d0h]
		mov     ecx, [esp+0c8h]
		inc     edi
		add     edx, byte 54h
		mov     [esp+0d0h], edi
		cmp     edi, ecx
		jl      short ___3468bh
___346c1h:
		mov     edx, [esp+0c8h]
		dec     edx
		cmp     eax, edx
		jne     short ___346f5h
		mov     ebx, [___1a103ch]
		lea     edx, [ebx*4+0]
		add     edx, ebx
		shl     edx, 2
		add     edx, ebx
		cmp     dword [edx*4+___1de7e0h], byte 64h
		jge     short ___346f5h
		mov     dword [___196aa0h], 1
___346f5h:
		mov     ebx, [___1a103ch]
		lea     edx, [ebx*4+0]
		add     edx, ebx
		shl     edx, 2
		add     edx, ebx
		mov     ebx, [___19bd60h]
		shl     edx, 2
		test    ebx, ebx
		je      short ___34732h
		cmp     dword [edx+___1de7e0h], byte 3
		jge     short ___34755h
		mov     ecx, [___185a14h]
		cmp     ecx, byte 1
		jne     short ___34755h
		mov     [___196a9ch], ecx
		jmp     short ___34755h
___34732h:
		cmp     dword [___196ae8h], byte 4
		je      short ___34755h
		cmp     dword [edx+___1de7e0h], byte 3
		jge     short ___34755h
		mov     edi, [___185a14h]
		cmp     edi, byte 1
		jne     short ___34755h
		mov     [___196a9ch], edi
___34755h:
		mov     edi, [___196ae8h]
		cmp     edi, byte 1
		jne     short ___34768h
		add     [___196a98h], edi
		jmp     short ___34770h
___34768h:
		xor     edx, edx
		mov     [___196a98h], edx
___34770h:
		cmp     dword [___19bd60h], byte 0
		jne     short ___347b9h
		cmp     dword [___196aa4h], byte 0
		jle     short ___347b9h
		mov     edi, [___1de81ch]
		cmp     edi, byte 1
		jne     short ___347b3h
		cmp     edi, [___196ae8h]
		jne     short ___347b3h
		mov     ebx, [___1a103ch]
		lea     edx, [ebx*4+0]
		add     edx, ebx
		shl     edx, 2
		add     edx, ebx
		cmp     dword [edx*4+___1de7e0h], byte 64h
		jl      short ___347b9h
___347b3h:
		neg     dword [___196aa4h]
___347b9h:
		mov     esi, [___19bd60h]
		test    esi, esi
		jne     short ___34826h
		cmp     dword [___196aa8h], byte 0
		jle     short ___34826h
		mov     edx, [___1a1028h]
		mov     ecx, [___196aach]
		mov     [esp+0d0h], esi
		shl     edx, 2
___347e2h:
		xor     ebx, ebx
		mov     bl, [edx+___1a0ef8h]
		cmp     ebx, ecx
		jne     short ___347f5h
		mov     eax, [esp+0d0h]
___347f5h:
		mov     esi, [esp+0d0h]
		inc     esi
		inc     edx
		mov     [esp+0d0h], esi
		cmp     esi, byte 4
		jl      short ___347e2h
		mov     edx, eax
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		cmp     dword [eax*4+___1de7e0h], byte 64h
		je      short ___34826h
		neg     dword [___196aa8h]
___34826h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     dword [eax+___1a0214h], byte 0ffffffffh
		je      short ___3484ch
		inc     dword [eax+___1a0218h]
___3484ch:
		xor     edi, edi
		xor     eax, eax
		xor     edx, edx
		mov     [___243d44h], edi
___34858h:
		add     eax, byte 6ch
		mov     [eax+___1a01d4h], edx
		mov     [eax+___1a01d8h], edx
		mov     [eax+___1a01dch], edx
		mov     [eax+___1a01d0h], edx
		cmp     eax, dword 870h
		jne     short ___34858h
		mov     eax, 14h
		xor     edx, edx
		mov     [esp+0d0h], eax
		call    near ___2ec68h
		mov     [___196af0h], edx
		mov     [___196aech], edx
		mov     [esp+0d0h], edx
___348a0h:
		mov     edx, [esp+0d0h]
		xor     eax, eax
		mov     al, [esp+edx*1+0cch]
		imul    eax, eax, byte 6ch
		lea     edi, [edx+1]
		xor     esi, esi
		mov     [esp+0d0h], edi
		mov     [eax+___1a0234h], esi
		cmp     edi, byte 4
		jl      short ___348a0h
		mov     [esp+0d0h], esi
		xor     eax, eax
		xor     ebx, ebx
		mov     esi, [___1a1ef8h]
___348dbh:
		mov     ecx, [eax+___1a0224h]
		cmp     ebx, ecx
		jge     short ___348f0h
		cmp     esi, [esp+0d0h]
		je      short ___348f0h
		mov     ebx, ecx
___348f0h:
		mov     edi, [esp+0d0h]
		inc     edi
		add     eax, byte 6ch
		mov     [esp+0d0h], edi
		cmp     edi, byte 14h
		jl      short ___348dbh
		mov     ecx, [___19bd60h]
		test    ecx, ecx
		jne     near ___35101h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     ebx, [eax+___1a0224h]
		jl      near ___35101h
		cmp     dword [___196ab0h], byte 0
		jne     near ___35101h
		mov     [esp+0d0h], ecx
		mov     esi, eax
		mov     [esp+0ech], eax
		mov     [esp+0f0h], eax
		mov     ecx, eax
		xor     eax, eax
___34960h:
		cmp     dword [___196ae8h], byte 4
		je      short ___349a0h
		cmp     dword [___1a1028h], byte 0
		jne     short ___349a0h
		imul    edx, [eax+___1de7dch], byte 32h
		mov     edi, [esp+0d0h]
		mov     [esp+0d4h], edx
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		mov     edi, [esp+0d4h]
		mov     [edx+___1a0234h], edi
___349a0h:
		cmp     dword [___196ae8h], byte 4
		je      short ___349d0h
		cmp     dword [___1a1028h], byte 0
		jne     short ___349d0h
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___349d0h
		mov     edx, [eax+___1de7dch]
		imul    edx, edx, byte 32h
		mov     [___196af0h], edx
___349d0h:
		mov     edx, [esp+0f0h]
		mov     edi, [edx+___1a0228h]
		test    edi, edi
		jle     near ___34adah
		cmp     edi, byte 6
		jge     near ___34adah
		cmp     dword [___196ae8h], byte 4
		je      short ___34a31h
		cmp     dword [___1a1028h], byte 1
		jne     short ___34a31h
		imul    edx, [eax+___1de7dch], 104h
		mov     edi, [esp+0d0h]
		mov     [esp+0d4h], edx
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		mov     edi, [esp+0d4h]
		mov     [edx+___1a0234h], edi
___34a31h:
		cmp     dword [___196ae8h], byte 4
		je      short ___34a74h
		cmp     dword [___1a1028h], byte 2
		jne     short ___34a74h
		imul    edx, [eax+___1de7dch], 1f4h
		mov     edi, [esp+0d0h]
		mov     [esp+0d4h], edx
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		mov     edi, [esp+0d4h]
		mov     [edx+___1a0234h], edi
___34a74h:
		cmp     dword [___196ae8h], byte 4
		je      short ___34aa7h
		cmp     dword [___1a1028h], byte 1
		jne     short ___34aa7h
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___34aa7h
		mov     edx, [eax+___1de7dch]
		imul    edx, edx, 104h
		mov     [___196af0h], edx
___34aa7h:
		cmp     dword [___196ae8h], byte 4
		je      short ___34adah
		cmp     dword [___1a1028h], byte 2
		jne     short ___34adah
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___34adah
		mov     edx, [eax+___1de7dch]
		imul    edx, edx, 1f4h
		mov     [___196af0h], edx
___34adah:
		mov     edx, [esp+0ech]
		mov     edi, [edx+___1a0228h]
		cmp     edi, byte 5
		jle     near ___34be5h
		cmp     edi, byte 0bh
		jge     near ___34be5h
		cmp     dword [___196ae8h], byte 4
		je      short ___34b3ch
		cmp     dword [___1a1028h], byte 1
		jne     short ___34b3ch
		imul    edx, [eax+___1de7dch], 0c8h
		mov     edi, [esp+0d0h]
		mov     [esp+0d4h], edx
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		mov     edi, [esp+0d4h]
		mov     [edx+___1a0234h], edi
___34b3ch:
		cmp     dword [___196ae8h], byte 4
		je      short ___34b7fh
		cmp     dword [___1a1028h], byte 2
		jne     short ___34b7fh
		imul    edx, [eax+___1de7dch], 12ch
		mov     edi, [esp+0d0h]
		mov     [esp+0d4h], edx
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		mov     edi, [esp+0d4h]
		mov     [edx+___1a0234h], edi
___34b7fh:
		cmp     dword [___196ae8h], byte 4
		je      short ___34bb2h
		cmp     dword [___1a1028h], byte 1
		jne     short ___34bb2h
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___34bb2h
		mov     edx, [eax+___1de7dch]
		imul    edx, edx, 0c8h
		mov     [___196af0h], edx
___34bb2h:
		cmp     dword [___196ae8h], byte 4
		je      short ___34be5h
		cmp     dword [___1a1028h], byte 2
		jne     short ___34be5h
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___34be5h
		mov     edx, [eax+___1de7dch]
		imul    edx, edx, 12ch
		mov     [___196af0h], edx
___34be5h:
		mov     edx, [ecx+___1a0228h]
		cmp     edx, byte 0ah
		jle     near ___34ce3h
		cmp     edx, byte 10h
		jge     near ___34ce3h
		cmp     dword [___196ae8h], byte 4
		je      short ___34c3dh
		cmp     dword [___1a1028h], byte 1
		jne     short ___34c3dh
		imul    edx, [eax+___1de7dch], byte 78h
		mov     edi, [esp+0d0h]
		mov     [esp+0d4h], edx
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		mov     edi, [esp+0d4h]
		mov     [edx+___1a0234h], edi
___34c3dh:
		cmp     dword [___196ae8h], byte 4
		je      short ___34c80h
		cmp     dword [___1a1028h], byte 2
		jne     short ___34c80h
		imul    edx, [eax+___1de7dch], 96h
		mov     edi, [esp+0d0h]
		mov     [esp+0d4h], edx
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		mov     edi, [esp+0d4h]
		mov     [edx+___1a0234h], edi
___34c80h:
		cmp     dword [___196ae8h], byte 4
		je      short ___34cb0h
		cmp     dword [___1a1028h], byte 1
		jne     short ___34cb0h
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___34cb0h
		mov     edx, [eax+___1de7dch]
		imul    edx, edx, byte 78h
		mov     [___196af0h], edx
___34cb0h:
		cmp     dword [___196ae8h], byte 4
		je      short ___34ce3h
		cmp     dword [___1a1028h], byte 2
		jne     short ___34ce3h
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___34ce3h
		mov     edx, [eax+___1de7dch]
		imul    edx, edx, 96h
		mov     [___196af0h], edx
___34ce3h:
		mov     edx, [esi+___1a0228h]
		cmp     edx, byte 0fh
		jle     near ___34ddbh
		cmp     edx, byte 15h
		jge     near ___34ddbh
		cmp     dword [___196ae8h], byte 4
		je      short ___34d3bh
		cmp     dword [___1a1028h], byte 1
		jne     short ___34d3bh
		imul    edx, [eax+___1de7dch], byte 3ch
		mov     edi, [esp+0d0h]
		mov     [esp+0d4h], edx
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		mov     edi, [esp+0d4h]
		mov     [edx+___1a0234h], edi
___34d3bh:
		cmp     dword [___196ae8h], byte 4
		je      short ___34d7bh
		cmp     dword [___1a1028h], byte 2
		jne     short ___34d7bh
		imul    edx, [eax+___1de7dch], byte 50h
		mov     edi, [esp+0d0h]
		mov     [esp+0d4h], edx
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		mov     edi, [esp+0d4h]
		mov     [edx+___1a0234h], edi
___34d7bh:
		cmp     dword [___196ae8h], byte 4
		je      short ___34dabh
		cmp     dword [___1a1028h], byte 1
		jne     short ___34dabh
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___34dabh
		mov     edx, [eax+___1de7dch]
		imul    edx, edx, byte 3ch
		mov     [___196af0h], edx
___34dabh:
		cmp     dword [___196ae8h], byte 4
		je      short ___34ddbh
		cmp     dword [___1a1028h], byte 2
		jne     short ___34ddbh
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___34ddbh
		mov     edx, [eax+___1de7dch]
		imul    edx, edx, byte 50h
		mov     [___196af0h], edx
___34ddbh:
		mov     edx, [___1a1028h]
		cmp     edx, byte 1
		jb      short ___34dfah
		jbe     near ___34eebh
		cmp     edx, byte 2
		je      near ___34fd4h
		jmp     near ___350ach
___34dfah:
		test    edx, edx
		jne     near ___350ach
		cmp     dword [eax+___1de810h], byte 1
		jne     short ___34e4ah
		cmp     dword [eax+___1de7e0h], byte 64h
		je      short ___34e4ah
		mov     edi, [esp+0d0h]
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		add     dword [edx+___1a0234h], 2eeh
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___34e4ah
		mov     dword [___196aech], 2eeh
___34e4ah:
		cmp     dword [eax+___1de810h], byte 2
		jne     short ___34e92h
		cmp     dword [eax+___1de7e0h], byte 64h
		je      short ___34e92h
		mov     edi, [esp+0d0h]
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		add     dword [edx+___1a0234h], 177h
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___34e92h
		mov     dword [___196aech], 177h
___34e92h:
		cmp     dword [eax+___1de810h], byte 3
		jne     near ___350ach
		cmp     dword [eax+___1de7e0h], byte 64h
		je      near ___350ach
		mov     edi, [esp+0d0h]
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		add     dword [edx+___1a0234h], 0bbh
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     near ___350ach
		mov     dword [___196aech], 0bbh
		jmp     near ___350ach
___34eebh:
		cmp     dword [eax+___1de810h], byte 1
		jne     short ___34f33h
		cmp     dword [eax+___1de7e0h], byte 64h
		je      short ___34f33h
		mov     edi, [esp+0d0h]
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		add     dword [edx+___1a0234h], 0bb8h
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___34f33h
		mov     dword [___196aech], 0bb8h
___34f33h:
		cmp     dword [eax+___1de810h], byte 2
		jne     short ___34f7bh
		cmp     dword [eax+___1de7e0h], byte 64h
		je      short ___34f7bh
		mov     edi, [esp+0d0h]
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		add     dword [edx+___1a0234h], 5dch
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___34f7bh
		mov     dword [___196aech], 5dch
___34f7bh:
		cmp     dword [eax+___1de810h], byte 3
		jne     near ___350ach
		cmp     dword [eax+___1de7e0h], byte 64h
		je      near ___350ach
		mov     edi, [esp+0d0h]
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		add     dword [edx+___1a0234h], 177h
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     near ___350ach
		mov     dword [___196aech], 177h
		jmp     near ___350ach
___34fd4h:
		cmp     dword [eax+___1de810h], byte 1
		jne     short ___3501ch
		cmp     dword [eax+___1de7e0h], byte 64h
		je      short ___3501ch
		mov     edi, [esp+0d0h]
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		add     dword [edx+___1a0234h], 2ee0h
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___3501ch
		mov     dword [___196aech], 2ee0h
___3501ch:
		cmp     dword [eax+___1de810h], byte 2
		jne     short ___35064h
		cmp     dword [eax+___1de7e0h], byte 64h
		je      short ___35064h
		mov     edi, [esp+0d0h]
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		add     dword [edx+___1a0234h], 1770h
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___35064h
		mov     dword [___196aech], 1770h
___35064h:
		cmp     dword [eax+___1de810h], byte 3
		jne     short ___350ach
		cmp     dword [eax+___1de7e0h], byte 64h
		je      short ___350ach
		mov     edi, [esp+0d0h]
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		add     dword [edx+___1a0234h], 5dch
		mov     edx, [esp+0d0h]
		cmp     edx, [___1a103ch]
		jne     short ___350ach
		mov     dword [___196aech], 5dch
___350ach:
		mov     edi, [esp+0d0h]
		xor     edx, edx
		mov     dl, [esp+edi*1+0cch]
		imul    edx, edx, byte 6ch
		mov     edi, [edx+___1a0234h]
		add     [edx+___1a0210h], edi
		mov     edi, [edx+___1a0234h]
		add     [edx+___1a0238h], edi
		cmp     dword [eax+___1de810h], byte 1
		jne     short ___350e6h
		inc     dword [edx+___1a022ch]
___350e6h:
		mov     edx, [esp+0d0h]
		inc     edx
		add     eax, byte 54h
		mov     [esp+0d0h], edx
		cmp     edx, byte 4
		jl      near ___34960h
___35101h:
		cmp     dword [___19bd60h], byte 0
		jne     near ___3518fh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     ebx, [eax*4+___1a0224h]
		jge     short ___3518fh
		mov     edx, [___1a103ch]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     edx, [eax*4+___1de7dch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 3
		add     eax, edx
		shl     eax, 4
		mov     edx, [___1a103ch]
		mov     [___196af0h], eax
		mov     dl, [esp+edx*1+0cch]
		and     edx, 0ffh
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		lea     edx, [eax*4+0]
		mov     eax, [___196af0h]
		mov     [edx+___1a0234h], eax
___3518fh:
		cmp     dword [___19bd60h], byte 0
		je      near ___357bbh
		mov     ecx, [___196ad4h]
		inc     ecx
		mov     esi, [___196ab8h]
		mov     [___196ad4h], ecx
		mov     ecx, ___1a116ch
		mov     eax, [___196ad4h]
		add     ecx, 96h
		cmp     eax, esi
		jl      near ___3532ch
		xor     edx, edx
		mov     eax, 1
		mov     [esp+0d0h], edx
		mov     [___196a80h], eax
		mov     edx, ___1a116ch
___351dfh:
		mov     esi, ecx
		mov     edi, edx
		mov     ebx, [esp+0d0h]
		call 	__STRCPY
		mov     eax, [esp+0d0h]
		add     edx, 96h
		add     ecx, 96h
		lea     edi, [ebx+1]
		mov     al, [eax+___1a1f4fh]
		mov     [esp+0d0h], edi
		mov     [ebx+___1a1f4eh], al
		cmp     edi, byte 15h
		jl      short ___351dfh
		mov     eax, [___180864h]
		mov     edx, [___1a1ef8h]
		mov     [___1a1dbah], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		mov     esi, ___1a01e0h
		sub     eax, edx
		mov     edi, ___1a1dbah
		shl     eax, 2
		xor     bh, bh
		add     esi, eax
		xor     edx, edx
		call 	__STRCAT
		mov     [esp+0d0h], edx
		mov     esi, ___182458h
		mov     edx, ___1a116ch
		call 	__STRCAT
		mov     [___1a1f63h], bh
		lea     ebx, [edx+96h]
___352c4h:
		mov     esi, ebx
		mov     edi, edx
		mov     ecx, [esp+0d0h]
		call 	__STRCPY
		mov     eax, [esp+0d0h]
		add     edx, 96h
		add     ebx, 96h
		inc     ecx
		mov     al, [eax+___1a1f4fh]
		mov     [esp+0d0h], ecx
		mov     [ecx+___1a1f4dh], al
		cmp     ecx, byte 15h
		jl      short ___352c4h
		mov     al, [___180130h]
		xor     cl, cl
		mov     [___1a1dbah], al
		mov     [___1a1f63h], cl
		jmp     near ___35500h
___3532ch:
		xor     edi, edi
		mov     edx, ___1a116ch
		mov     [esp+0d0h], edi
___3533ah:
		mov     esi, ecx
		mov     edi, edx
		mov     ebx, [esp+0d0h]
		call 	__STRCPY
		mov     eax, [esp+0d0h]
		add     edx, 96h
		add     ecx, 96h
		inc     ebx
		mov     al, [eax+___1a1f4fh]
		mov     [esp+0d0h], ebx
		mov     [ebx+___1a1f4dh], al
		cmp     ebx, byte 15h
		jl      short ___3533ah
		cmp     dword [___1de814h], byte 0ffffffffh
		jne     short ___353aah
		mov     ecx, 8
		mov     edi, ___1a1dbah
		mov     esi, ___182470h
		rep movsd   
		jmp     near ___35481h
___353aah:
		mov     eax, [___180864h]
		mov     [___1a1dbah], eax
		mov     eax, [___196ad4h]
		xor     edx, edx
		mov     dl, [eax+___1a2010h]
		mov     eax, edx
		shl     eax, 4
		mov     esi, ___18d492h
		sub     eax, edx
		mov     edi, ___1a1dbah
		add     esi, eax
		call 	__STRCAT
		mov     esi, ___182490h
		call 	__STRCAT
		mov     eax, [___196ad4h]
		xor     edx, edx
		mov     dl, [eax+___1a2011h]
		mov     eax, edx
		shl     eax, 4
		mov     esi, ___18d492h
		sub     eax, edx
		add     esi, eax
		call 	__STRCAT
		mov     esi, ___180724h
		call 	__STRCAT
___35481h:
		mov     ebx, ___1a116ch
		xor     dh, dh
		xor     eax, eax
		mov     [___1a1f63h], dh
		mov     [esp+0d0h], eax
		lea     edx, [ebx+96h]
___3549dh:
		mov     esi, edx
		mov     edi, ebx
		mov     ecx, [esp+0d0h]
		call 	__STRCPY
		mov     eax, [esp+0d0h]
		add     ebx, 96h
		add     edx, 96h
		inc     ecx
		mov     al, [eax+___1a1f4fh]
		mov     [esp+0d0h], ecx
		mov     [ecx+___1a1f4dh], al
		cmp     ecx, byte 15h
		jl      short ___3549dh
		mov     al, [___180130h]
		xor     bl, bl
		mov     [___1a1dbah], al
		mov     [___1a1f63h], bl
___35500h:
		xor     edi, edi
		mov     ebx, [___196adch]
		mov     [___196aech], edi
		mov     [esp+0d0h], edi
		mov     [___196af0h], edi
		test    ebx, ebx
		jle     near ___357bbh
		xor     edx, edx
		mov     esi, 1
		mov     edi, 4
___3552fh:
		fild    dword [___185a54h]
		fmul    qword [___1824b4h]
		mov     eax, [edx+___1de7dch]
		call    near __CHP
		fistp   dword [esp+0d8h]
		imul    eax, [esp+0d8h]
		mov     ecx, [esp+0d0h]
		xor     ebx, ebx
		mov     bl, [esp+ecx*1+0cch]
		imul    ebx, ebx, byte 6ch
		mov     [ebx+___1a0234h], eax
		mov     ebx, ecx
		cmp     ebx, [___1a103ch]
		jne     short ___3557dh
		mov     [___196af0h], eax
___3557dh:
		cmp     esi, [edx+___1de810h]
		jne     short ___355fah
		mov     eax, [esp+0d0h]
		xor     ebx, ebx
		mov     bl, [esp+eax*1+0cch]
		imul    ebx, ebx, byte 6ch
		fild    dword [___185a54h]
		fmul    qword [___1824ach]
		call    near __CHP
		fistp   dword [esp+0dch]
		mov     eax, [esp+0dch]
		mov     ecx, [ebx+___1a0234h]
		add     ecx, eax
		mov     eax, [esp+0d0h]
		mov     [ebx+___1a0234h], ecx
		cmp     eax, [___1a103ch]
		jne     short ___355e0h
		mov     eax, [esp+0dch]
		mov     [___196aech], eax
___355e0h:
		mov     ebx, [esp+0d0h]
		xor     eax, eax
		mov     al, [esp+ebx*1+0cch]
		imul    eax, eax, byte 6ch
		add     dword [eax+___1a0224h], byte 6
___355fah:
		cmp     dword [edx+___1de810h], byte 2
		jne     short ___35677h
		mov     eax, [esp+0d0h]
		xor     ebx, ebx
		mov     bl, [esp+eax*1+0cch]
		imul    ebx, ebx, byte 6ch
		fild    dword [___185a54h]
		fmul    qword [___1824bch]
		call    near __CHP
		fistp   dword [esp+0e0h]
		mov     eax, [esp+0e0h]
		mov     ecx, [ebx+___1a0234h]
		add     ecx, eax
		mov     eax, [esp+0d0h]
		mov     [ebx+___1a0234h], ecx
		cmp     eax, [___1a103ch]
		jne     short ___3565eh
		mov     eax, [esp+0e0h]
		mov     [___196aech], eax
___3565eh:
		mov     ebx, [esp+0d0h]
		xor     eax, eax
		mov     al, [esp+ebx*1+0cch]
		imul    eax, eax, byte 6ch
		add     [eax+___1a0224h], edi
___35677h:
		cmp     dword [edx+___1de810h], byte 3
		jne     short ___356f5h
		mov     eax, [esp+0d0h]
		xor     ebx, ebx
		mov     bl, [esp+eax*1+0cch]
		imul    ebx, ebx, byte 6ch
		fild    dword [___185a54h]
		fmul    qword [___1824c4h]
		call    near __CHP
		fistp   dword [esp+0e4h]
		mov     eax, [esp+0e4h]
		mov     ecx, [ebx+___1a0234h]
		add     ecx, eax
		mov     eax, [esp+0d0h]
		mov     [ebx+___1a0234h], ecx
		cmp     eax, [___1a103ch]
		jne     short ___356dbh
		mov     eax, [esp+0e4h]
		mov     [___196aech], eax
___356dbh:
		mov     ebx, [esp+0d0h]
		xor     eax, eax
		mov     al, [esp+ebx*1+0cch]
		imul    eax, eax, byte 6ch
		add     dword [eax+___1a0224h], byte 2
___356f5h:
		cmp     edi, [edx+___1de810h]
		jne     short ___35758h
		mov     eax, [esp+0d0h]
		xor     ebx, ebx
		mov     bl, [esp+eax*1+0cch]
		imul    ebx, ebx, byte 6ch
		fild    dword [___185a54h]
		fmul    qword [___1824cch]
		call    near __CHP
		fistp   dword [esp+0e8h]
		mov     eax, [esp+0e8h]
		mov     ecx, [ebx+___1a0234h]
		add     ecx, eax
		mov     eax, [esp+0d0h]
		mov     [ebx+___1a0234h], ecx
		cmp     eax, [___1a103ch]
		jne     short ___35758h
		mov     eax, [esp+0e8h]
		mov     [___196aech], eax
___35758h:
		mov     ebx, [esp+0d0h]
		xor     eax, eax
		mov     al, [esp+ebx*1+0cch]
		imul    eax, eax, byte 6ch
		mov     ebx, [eax+___1a0234h]
		add     [eax+___1a0210h], ebx
		mov     ebx, [eax+___1a0234h]
		mov     ecx, [eax+___1a0238h]
		add     ecx, ebx
		mov     ebx, [edx+___1de810h]
		mov     [eax+___1a0238h], ecx
		cmp     esi, ebx
		jne     short ___3579bh
		inc     dword [eax+___1a022ch]
___3579bh:
		mov     eax, [esp+0d0h]
		mov     ebx, [___196adch]
		inc     eax
		add     edx, byte 54h
		mov     [esp+0d0h], eax
		cmp     eax, ebx
		jl      near ___3552fh
___357bbh:
		mov     edi, [___1a1ef8h]
		xor     edx, edx
		xor     eax, eax
		mov     [esp+0d0h], edx
___357cch:
		mov     esi, [eax+___1a0224h]
		cmp     edx, esi
		jge     short ___357e1h
		cmp     edi, [esp+0d0h]
		je      short ___357e1h
		mov     edx, esi
___357e1h:
		mov     ebx, [esp+0d0h]
		inc     ebx
		add     eax, byte 6ch
		mov     [esp+0d0h], ebx
		cmp     ebx, byte 14h
		jl      short ___357cch
		cmp     dword [___19bd60h], byte 0
		jne     short ___3583bh
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		cmp     edx, [eax+___1a0224h]
		jge     short ___3583bh
		mov     ebx, [eax+___1a0230h]
		mov     edx, [___1de834h]
		inc     ebx
		mov     [eax+___1a01ech], edx
		mov     [eax+___1a0230h], ebx
		jmp     short ___3589ah
___3583bh:
		xor     eax, eax
		mov     edx, [esp+0c8h]
		mov     [esp+0d0h], eax
		test    edx, edx
		jle     short ___3589ah
		mov     edi, [esp+0c8h]
		xor     edx, edx
___35858h:
		mov     ebx, [esp+0d0h]
		xor     eax, eax
		mov     al, [esp+ebx*1+0cch]
		imul    eax, eax, byte 6ch
		mov     esi, [esp+0d0h]
		add     edx, byte 54h
		inc     esi
		mov     ebx, [edx+___1de78ch]
		mov     ecx, [eax+___1a0230h]
		mov     [eax+___1a01ech], ebx
		inc     ecx
		mov     [esp+0d0h], esi
		mov     [eax+___1a0230h], ecx
		cmp     esi, edi
		jl      short ___35858h
___3589ah:
		cmp     dword [___19bd60h], byte 0
		jne     short ___358a8h
		call    near ___3deb8h
___358a8h:
		call    near ___117d4h
		call    near ___117f4h
		mov     esi, [___1a1ef8h]
		xor     edx, edx
		xor     eax, eax
		mov     [esp+0d0h], edx
___358c3h:
		mov     ecx, [eax+___1a0224h]
		cmp     edx, ecx
		jge     short ___358d8h
		cmp     esi, [esp+0d0h]
		je      short ___358d8h
		mov     edx, ecx
___358d8h:
		mov     edi, [esp+0d0h]
		inc     edi
		add     eax, byte 6ch
		mov     [esp+0d0h], edi
		cmp     edi, byte 14h
		jl      short ___358c3h
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     edx, [eax*4+___1a0224h]
		jge     short ___35922h
		cmp     dword [___196ae8h], byte 1
		jne     short ___35922h
		cmp     dword [___19bd60h], byte 0
		je      near ___359f6h
___35922h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fb8h]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+0f8h], eax
		fild    word [esp+0f8h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+0fch], eax
		fild    word [esp+0fch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+100h], eax
		fild    word [esp+100h]
		sub     esp, byte 4
		mov     ecx, ___181c9ch
		fstp    dword [esp]
		mov     ebx, 2
		call    near ___11378h
		push    byte 5
		mov     edx, ___181ca8h		;; 	"MEN-MUS.CMF"
		mov     eax, 1

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_load
	add 	esp, 14h
	
		mov     eax, [___24cc58h]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setMusicVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, 5622h		;; 22050 Hz
		;mov     eax, 0ac44h		;; 44100 Hz
	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Audio_setSampleRate
	add 	esp, 4
	pop 	ecx
	pop 	edx
		call    near dRally_Audio_play
		;mov     eax, 1
		;call    near ___659b8h
		call    near ___606dfh
		call 	VESA101_SETMODE
		mov     eax, 46h
		;xor     ebx, ebx
		xor     edx, edx
		call    near ___605deh
___359f6h:
		call    near ___12940h
		xor     eax, eax
		mov     [esp+0d0h], eax
		xor     esi, esi
___35a06h:
		xor     eax, eax
		mov     al, [esp+0d0h]
		push    eax
		push    esi
		push    esi
		push    esi
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     edx, [esp+0d0h]
		inc     edx
		mov     [esp+0d0h], edx
		cmp     edx, 100h
		jl      short ___35a06h
		mov     ecx, [___19bd60h]
		test    ecx, ecx
		je      short ___35a55h
		call    near ___3986ch
		cmp     dword [___196a80h], byte 0
		je      near ___35b5dh
		call    near ___1e4f8h
		jmp     near ___35b5dh
___35a55h:
		mov     [esp+0d0h], ecx
		xor     eax, eax
		xor     edx, edx
		mov     ecx, [___1a1ef8h]
___35a66h:
		cmp     edx, [eax+___1a0224h]
		jge     short ___35a7dh
		cmp     ecx, [esp+0d0h]
		je      short ___35a7dh
		mov     edx, [eax+___1a0224h]
___35a7dh:
		mov     esi, [esp+0d0h]
		inc     esi
		add     eax, byte 6ch
		mov     [esp+0d0h], esi
		cmp     esi, byte 14h
		jl      short ___35a66h
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     edx, [eax*4+___1a0224h]
		jge     near ___35b56h
		call    near ___31588h
		mov     ebx, 1
		mov     dl, 4
___35ac1h:
		mov     eax, ebx
		call    near ___3079ch
		cmp     dl, [___1a1f67h]
		ja      short ___35ac1h
		cmp     dl, [___1a1f68h]
		ja      short ___35ac1h
		cmp     dl, [___1a1f69h]
		ja      short ___35ac1h
		mov     ecx, 4
		lea     eax, [esp+4ch]
		xor     edx, edx
		call    near __STOSB
		xor     ebx, ebx
		mov     ecx, 4
___35af7h:
		call    near rand_
		mov     edx, eax
		sar     edx, 1fh
		idiv    ecx
		inc     edx
		mov     eax, edx
		mov     [ebx+___1de810h], edx
		cmp     byte [esp+edx*1+4bh], 0
		jne     short ___35af7h
		mov     dh, 1
		add     ebx, byte 54h
		mov     [esp+eax*1+4bh], dh
		cmp     ebx, 150h
		jne     short ___35af7h
		cmp     dword [___196ae8h], byte 1
		je      short ___35b48h
		xor     eax, eax
		mov     esi, 1
		call    near ___3892ch
		mov     [___185a20h], esi
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___35b48h:
		call    near ___22808h
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___35b56h:
		xor     eax, eax
		call    near ___3892ch
___35b5dh:
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

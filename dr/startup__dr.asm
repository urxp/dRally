	
	extern 	__CHK	
	extern 	___3e3cch	
	extern 	___3e164h	
	extern 	___3e1c4h	
	extern 	___1a202fh	
	extern 	___199fa0h	
	extern 	__STOSB	
	extern 	___1a2148h	
	extern 	___2415ch	
	extern 	___3bb44h	
	extern 	___3aaf8h	
	extern 	___2432c8h	
	extern 	___1a1f3ch	
	extern 	___3c16ch	
	extern 	___182bf8h	
	extern 	printf__clib3r	
	extern 	___181c9ch	
	extern 	___3d908h	
	extern 	___181ca8h	
	extern 	___64864h	
	extern 	___24cc58h	
	extern 	___6572ch	
	extern 	___24cc54h	
	extern 	___65770h	
	extern 	___658b8h	
	extern 	___65990h	
	extern 	___648d8h	
	extern 	___659b8h	
	extern 	___196abch	
	extern 	___1a2011h	
	extern 	___196abdh	
	extern 	___1a2012h	
	extern 	___196abeh	
	extern 	___19bd58h	
	extern 	___1a2013h	
	extern 	___196abfh	
	extern 	___196ab8h	
	extern 	___1a2014h	
	extern 	___181c30h	
	extern 	___596f0h	
	extern 	___186cc6h	
	extern 	___181c4ch	
	extern 	___196a90h	
	extern 	___187432h	
	extern 	___1811c8h	
	extern 	srand__clib3r	
	extern 	___606dfh	
	extern 	chkbankswitch__video	
	extern 	setmode3h__video	
	extern 	___182c24h	
	extern 	___182cb8h		
	extern 	___5ec04h	
	extern 	restore__keyboard	
	extern 	exit__clib3r	
	extern 	___605deh	
	extern 	___117d4h	
	extern 	___3d38ch	
	extern 	___3d890h	
	extern 	___1a1f4fh	
	extern 	___1a1f63h	
	extern 	___2b318h	
	extern 	___5e0f9h	
	extern 	___1a1100h	
	extern 	___1a112ch	
	extern 	___146c4h	
	extern 	___180694h		
	extern 	___5994ch	
	extern 	___22a80h	
	extern 	___182de4h	
	extern 	strcmp__clib3r	
	extern 	___180864h	
	extern 	___1a1dbah	
	extern 	___24e4d0h	
	extern 	___64a28h	
	extern 	___117f4h	
	extern 	___1240ch	
	extern 	___117c8h	
	extern 	___24548h	
	extern 	___2faf0h	
	extern 	___3d2bch	
	extern 	___12940h	
	extern 	___1a1ef8h	
	extern 	___1a020ch	
	extern 	___1a0fb8h	
	extern 	___11564h	
	extern 	___1a1138h
	extern 	___180130h	
	extern 	___1a0220h	
	extern 	___1a01e0h	
	extern 	___1a116ch	
	extern 	___1a1f4dh	
	extern 	___182d08h	
	extern 	___182d3ch	
	extern 	___1a1f4eh	
	extern 	___182d78h		
	extern 	___135fch	
	extern 	___23230h	
	extern 	___13710h	
	extern 	___196d84h	
	extern 	___185a2ch	
	extern 	___196a84h	
	extern 	___12cb8h	
	extern 	___58c60h	
	extern 	___13a98h	
	extern 	___19eb50h	
	extern 	___19eb54h	
	extern 	___19eb58h	
	extern 	___1a10e4h	
	extern 	___1a1124h	
	extern 	___3a7e0h	
	extern 	___649a8h	
	extern 	___1a1ef4h	
	extern 	___65710h		
	extern 	___12dc4h	
	extern 	___3e4a0h	
	extern 	___13248h	
	extern 	___182db8h	
	extern 	___185c0bh	
	extern 	___1a1108h	
	extern 	___12e78h	
	extern 	___185ba9h	
	extern 	___1a10cch	
	extern 	___13bd4h		
	extern 	___1854bch	
	extern 	___654d4h	
	extern 	___59b3ch	
	extern 	___2ab50h	
	extern 	___194a8h	
	extern 	___1e888h	
	extern 	___218b4h	
	extern 	___3d4f0h	
	extern 	___3da48h	
	extern 	___148cch	
	extern 	___19bd60h	
	extern 	___180ba0h	
	extern 	___186a6eh	
	extern 	___1a1ef8h	
	extern 	___1a01e0h	
	extern 	___180ca4h	
	extern 	___23488h		
	extern 	___18108ch
	extern 	___61278h	
	extern 	___623d4h	
	extern 	___3d79ch	
	extern 	___12200h	
	extern 	___12a54h	
	extern 	___24ec0h	
	extern 	___2fc50h	
	extern 	___649a8h


%include "layout.inc"

section @text

___3e700h:
dd	___3ef4dh
dd	___3ee58h
dd	___3ef4dh
dd	___3ef57h
dd	___3ef5eh
dd	___3ef6eh
dd	___3ef75h
dd	___3ef7ch
global startup__dr
startup__dr:
		push    58h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 2ch
		xor     edx, edx
		mov     ecx, 4eh
		mov     [esp+24h], edx
		mov     [esp+0ch], edx
		mov     [esp+18h], ecx
		call    ___3e3cch
		call    ___3e164h
		call    ___3e1c4h
		mov     ecx, 13h
		mov     eax, ___1a202fh
		mov     [___199fa0h], edx
		call    __STOSB
		xor     ah, ah
		mov     esi, 0afh
		mov     [___1a2148h], ah
		call    ___2415ch
		call    ___3bb44h
		mov     eax, [___1a1f3ch]
		mov     ebp, ___3aaf8h
		inc     eax
		mov     [___2432c8h], ebp
		mov     [___1a1f3ch], eax
		call    ___3c16ch
		push    ___182bf8h
		mov     [esp+24h], esi
		call    printf__clib3r
		add     esp, byte 4
		mov     ebx, 2
		mov     ecx, ___181c9ch
		call    ___3d908h
		push    byte 5
		mov     edx, ___181ca8h
		mov     eax, 1
		call    ___64864h
		mov     eax, [___24cc58h]
		call    ___6572ch
		mov     eax, [___24cc54h]
		call    ___65770h
		mov     eax, 2d00h
		call    ___658b8h
		mov     eax, 5622h
		call    ___65990h
		call    ___648d8h
		mov     eax, 1
		call    ___659b8h
		mov     al, [___196abch]
		mov     [___1a2011h], al
		mov     al, [___196abdh]
		mov     edx, 4
		mov     [___1a2012h], al
		mov     al, [___196abeh]
		mov     ebx, [___19bd58h]
		mov     [___1a2013h], al
		mov     al, [___196abfh]
		mov     [___196ab8h], edx
		mov     [___1a2014h], al
		cmp     ebx, byte 1
		je      ___3e847h
		cmp     ebx, byte 2
		jne     ___3e860h
___3e847h:
		mov     ecx, 6
		mov     edi, ___186cc6h
		mov     esi, ___181c30h
		call    ___596f0h
		rep movsd   
		movsb   
		jmp     ___3e873h
___3e860h:
		mov     ecx, 6
		mov     edi, ___186cc6h
		mov     esi, ___181c4ch
		rep movsd   
		movsw   
___3e873h:
		cmp     dword [___196a90h], byte 0
		jne     ___3e88bh
		mov     edi, ___187432h
		mov     esi, ___1811c8h
		movsd   
		movsd   
		movsd   
		movsw   
___3e88bh:
		mov     eax, 46ch
		mov     eax, [eax]
		call    srand__clib3r
		call    ___606dfh
		mov     ax, 4f02h
		mov     bx, 101h
		int     10h
		call    chkbankswitch__video
		test    eax, eax
		je      @bs_ok
		call    setmode3h__video
		push    ___182c24h
		call    printf__clib3r
		add     esp, byte 4
		push    ___182cb8h
		call    printf__clib3r
		add     esp, byte 4
		call    ___64a28h
		call    ___5ec04h
		call    restore__keyboard
		mov     eax, 70h
		call    exit__clib3r
@bs_ok:
		mov     eax, 3ch
		xor     ebx, ebx
		call    ___605deh
		call    ___117d4h
		call    ___3d38ch
		call    ___3d890h
		call    ___117f4h
		call    ___1240ch
		call    ___117c8h
		call    ___24548h
		call    ___2faf0h
		call    ___3d2bch
		call    ___12940h
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
		mov     [esp+28h], eax
		fild    word [esp+28h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+2ch], eax
		fild    word [esp+2ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+30h], eax
		fild    word [esp+30h]
		sub     esp, byte 4
		fstp    dword [esp]
		mov     ecx, 4b000h
		call    ___11564h
		mov     esi, [___1a1138h]
		mov     edi, [___1a112ch]
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		xor     edi, edi
		mov     dl, [___180130h]
		mov     [eax*4+___1a0220h], edi
		mov     [esp+8], edi
		mov     [eax*4+___1a01e0h], dl
		xor     eax, eax
___3e9dfh:
		mov     dl, [___180130h]
		mov     [eax+___1a116ch], dl
		mov     edx, [esp+8]
		inc     edx
		xor     bl, bl
		add     eax, 96h
		mov     [edx+___1a1f4dh], bl
		mov     [esp+8], edx
		cmp     edx, byte 16h
		jl      ___3e9dfh
		mov     ecx, 0dh
		mov     edi, ___1a1dbah
		mov     esi, ___182d08h
		mov     bh, 1
		rep movsd   
		mov     edx, ___1a116ch
		xor     ecx, ecx
		mov     [___1a1f63h], bh
		mov     [esp+8], ecx
		lea     ecx, [edx+96h]
___3ea30h:
		mov     esi, ecx
		mov     edi, edx
		push    edi
___3ea35h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3ea4dh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3ea35h
___3ea4dh:
		pop     edi
		mov     eax, [esp+8]
		mov     esi, [esp+8]
		add     edx, 96h
		add     ecx, 96h
		inc     esi
		mov     al, [eax+___1a1f4fh]
		mov     [esp+8], esi
		mov     [esi+___1a1f4dh], al
		cmp     esi, byte 15h
		jl      ___3ea30h
		mov     ecx, 0eh
		mov     edi, ___1a1dbah
		mov     esi, ___182d3ch
		rep movsd   
		movsw   
		mov     cl, 1
		xor     ebp, ebp
		mov     [___1a1f63h], cl
		mov     ecx, ___1a116ch
		mov     [esp+8], ebp
		lea     edx, [ecx+96h]
___3eaa4h:
		mov     esi, edx
		mov     edi, ecx
		push    edi
___3eaa9h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3eac1h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3eaa9h
___3eac1h:
		pop     edi
		mov     eax, [esp+8]
		mov     esi, [esp+8]
		mov     al, [eax+___1a1f4fh]
		add     ecx, 96h
		mov     [esi+___1a1f4eh], al
		lea     eax, [esi+1]
		add     edx, 96h
		mov     [esp+8], eax
		cmp     eax, byte 15h
		jl      ___3eaa4h
		mov     byte [___1a1f63h], 1
		xor     ecx, ecx
		mov     al, [___180130h]
		mov     [esp+8], ecx
		mov     ecx, ___1a116ch
		mov     [___1a1dbah], al
		lea     edx, [ecx+96h]
___3eb10h:
		mov     esi, edx
		mov     edi, ecx
		push    edi
___3eb15h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3eb2dh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3eb15h
___3eb2dh:
		pop     edi
		mov     eax, [esp+8]
		mov     esi, [esp+8]
		add     ecx, 96h
		add     edx, 96h
		inc     esi
		mov     al, [eax+___1a1f4fh]
		mov     [esp+8], esi
		mov     [esi+___1a1f4dh], al
		cmp     esi, byte 15h
		jl      ___3eb10h
		mov     ecx, 0fh
		mov     edi, ___1a1dbah
		mov     esi, ___182d78h
		mov     al, 1
		xor     ebp, ebp
		rep movsd   
		movsw   
		movsb   
		mov     [___1a1f63h], al
		mov     ecx, ___1a116ch
		mov     [esp+8], ebp
		lea     edx, [ecx+96h]
___3eb84h:
		mov     esi, edx
		mov     edi, ecx
		push    edi
___3eb89h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3eba1h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3eb89h
___3eba1h:
		pop     edi
		mov     eax, [esp+8]
		mov     esi, [esp+8]
		mov     al, [eax+___1a1f4fh]
		add     ecx, 96h
		mov     [esi+___1a1f4eh], al
		lea     eax, [esi+1]
		add     edx, 96h
		mov     [esp+8], eax
		cmp     eax, byte 15h
		jl      ___3eb84h
		mov     ecx, 6dh
		mov     al, [___180130h]
		mov     ebx, 27fh
		mov     [___1a1dbah], al
		mov     ah, 1
		mov     edx, 173h
		mov     [___1a1f63h], ah
		xor     eax, eax
		call    ___135fch
		call    ___23230h
		cmp     dword [esp+0ch], byte 0
		jne     ___3efdch
		mov     eax, [esp+20h]
		mov     edx, [esp+20h]
		add     eax, byte 38h
		add     edx, byte 12h
		mov     [esp+4], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+18h]
		shl     eax, 7
		add     eax, esi
		mov     edx, [esp+20h]
		add     eax, byte 28h
		add     edx, byte 32h
		mov     [esp+10h], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		mov     ebp, [esp+18h]
		add     eax, 0a6h
		add     ebp, 8ch
		mov     [esp+14h], eax
___3ec59h:
		mov     ecx, 2c380h
		mov     esi, [___1a1138h]
		mov     edi, [___1a112ch]
		add     esi, 0d200h
		add     edi, 0d200h
		mov     edx, 1
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		xor     eax, eax
		call    ___13710h
		cmp     dword [___196d84h], byte 0
		jne     ___3eca8h
		cmp     dword [___185a2ch], byte 0
		je      ___3edeah
___3eca8h:
		mov     ebx, [___196a84h]
		test    ebx, ebx
		jne     ___3edeah
		call    ___12cb8h
		call    ___2b318h
		mov     [esp+1ch], ebx
		mov     [esp], ebx
___3ecc7h:
		call    ___58c60h
		mov     eax, [esp+1ch]
		mov     edx, eax
		mov     ecx, 2
		sar     edx, 1fh
		idiv    ecx
		test    edx, edx
		je      ___3ece7h
		xor     eax, eax
		call    ___13a98h
___3ece7h:
		xor     edi, edi
		mov     esi, [esp]
		mov     [esp+8], edi
___3ecf0h:
		xor     eax, eax
		mov     al, [esp+8]
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    ___5e0f9h
		mov     eax, [esp+8]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+8], eax
		cmp     eax, dword 100h
		jl      ___3ecf0h
		mov     ebx, [esp+1ch]
		mov     edx, [esp+2]
		inc     ebx
		add     edx, byte 2
		mov     [esp+1ch], ebx
		mov     [esp+2], dx
		cmp     ebx, byte 32h
		jl      ___3ecc7h
		xor     esi, esi
		mov     edi, [___185a2ch]
		mov     [___196d84h], esi
		test    edi, edi
		je      ___3edeah
		mov     ecx, 4b000h
		mov     edi, [___1a1100h]
		mov     [___185a2ch], esi
		mov     esi, [___1a1124h]
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		mov     eax, [___1a1100h]
		mov     [___1a112ch], eax
		mov     eax, [___1a10e4h]
		mov     [___1a1124h], eax
___3edeah:
		cmp     dword [esp+24h], byte 0
		je      ___3ee31h
		mov     ebx, [___196a84h]
		test    ebx, ebx
		jne     ___3ee31h
		mov     eax, [___1a1100h]
		mov     [___1a112ch], eax
		mov     eax, 0ffffffffh
		call    ___3a7e0h
		call    ___649a8h
		call    ___648d8h
		mov     eax, [___1a1ef4h]
		call    ___658b8h
		mov     eax, 10000h
		mov     [esp+24h], ebx
		call    ___65710h
___3ee31h:
		cmp     dword [___196a84h], byte 0
		jne     ___3ee3fh
		call    ___12dc4h
___3ee3fh:
		xor     eax, eax
		call    ___146c4h
		inc     eax
		cmp     eax, byte 7
		ja      ___3efd1h
		jmp     dword [cs:eax*4+___3e700h]
___3ee58h:
		call    ___3e4a0h
		test    eax, eax
		jne     ___3ef43h
		mov     ecx, 61h
		xor     edx, edx
		mov     ebx, 1e4h
		call    ___13710h
		push    byte 1
		mov     edx, [esp+24h]
		mov     eax, [esp+1ch]
		call    ___13248h
		mov     ecx, [esp+10h]
		mov     ebx, ___182db8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    ___12e78h
		mov     ecx, [esp+14h]
		mov     ebx, ___180694h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    ___12e78h
		mov     edx, [esp+4]
		mov     eax, ebp
		call    ___13bd4h
		call    ___12cb8h
		mov     esi, 1dh
___3eecah:
		push    8000h
		mov     eax, [___1854bch]
		mov     ecx, [___24cc54h]
		mov     edx, esi
		push    eax
		xor     ebx, ebx
		mov     eax, 1
		call    ___654d4h
		call    ___5994ch
		call    ___59b3ch
		xor     bh, bh
___3eef5h:
		cmp     bh, 1ch
		je      ___3ef22h
		cmp     bh, 9ch
		je      ___3ef22h
		call    ___5994ch
		mov     bl, al
		mov     edx, [esp+4]
		mov     bh, al
		call    ___2ab50h
		call    ___2ab50h
		mov     eax, ebp
		call    ___13bd4h
		cmp     bl, 1
		jne     ___3eef5h
___3ef22h:
		call    ___5994ch
		call    ___59b3ch
		call    ___3e4a0h
		test    eax, eax
		jne     ___3ef3ah
		cmp     bh, 1
		jne     ___3eecah
___3ef3ah:
		cmp     bh, 1
		je      ___3efd1h
___3ef43h:
		call    ___194a8h
		jmp     ___3efd1h
___3ef4dh:
		call    ___1e888h
		jmp     ___3efd1h
___3ef57h:
		call    ___218b4h
		jmp     ___3efd1h
___3ef5eh:
		mov     edi, 1
		call    ___22a80h
		mov     [esp+24h], edi
		jmp     ___3efd1h
___3ef6eh:
		call    ___3d4f0h
		jmp     ___3efd1h
___3ef75h:
		call    ___3da48h
		jmp     ___3efd1h
___3ef7ch:
		mov     ecx, 50h
		xor     edx, edx
		xor     eax, eax
		mov     ebx, 12ch
		call    ___13710h
		push    byte 1
		mov     edx, 0c8h
		mov     eax, 0aah
		call    ___13248h
		mov     ecx, 208fdh
		mov     ebx, ___182de4h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    ___12e78h
		lea     ecx, [esp+0ch]
		mov     ebx, 1
		mov     edx, 0eeh
		mov     eax, 0b4h
		call    ___148cch
___3efd1h:
		cmp     dword [esp+0ch], byte 0
		je      ___3ec59h
___3efdch:
		cmp     dword [___19bd60h], byte 0
		je      ___3f1bah
		mov     edx, ___180ba0h
		mov     eax, ___186a6eh
		call    strcmp__clib3r
		mov     edx, [___1a1ef8h]
		mov     ecx, eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		add     esi, eax
		test    ecx, ecx
		jne     ___3f131h
		mov     edi, ___1a1dbah
		mov     eax, [___180864h]
		mov     ebx, 14h
		mov     [___1a1dbah], eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3f03dh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3f055h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3f03dh
___3f055h:
		pop     edi
		mov     esi, ___180ca4h
		xor     dh, dh
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3f066h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3f07eh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3f066h
___3f07eh:
		pop     edi
		mov     [___1a1f63h], dh
		mov     eax, edi
		mov     edx, 64h
		call    ___23488h
		mov     eax, [___180864h]
		mov     edx, [___1a1ef8h]
		mov     [___1a1dbah], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		add     esi, eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3f0c2h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3f0dah
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3f0c2h
___3f0dah:
		pop     edi
		mov     esi, ___18108ch
		xor     bl, bl
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3f0ebh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3f103h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3f0ebh
___3f103h:
		pop     edi
		mov     ecx, [___24e4d0h]
		mov     [___1a1f63h], bl
		cmp     ecx, byte 2
		jne     ___3f123h
		mov     ebx, 6
		mov     edx, 64h
		mov     eax, edi
		jmp     ___3f19dh
___3f123h:
		mov     ebx, 9
		mov     edx, 64h
		mov     eax, edi
		jmp     ___3f19dh
___3f131h:
		mov     edi, ___1a1dbah
		mov     eax, [___180864h]
		mov     ebx, 6
		mov     [___1a1dbah], eax
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3f14eh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3f166h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3f14eh
___3f166h:
		pop     edi
		mov     esi, ___180ca4h
		xor     dl, dl
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___3f177h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___3f18fh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___3f177h
___3f18fh:
		pop     edi
		mov     [___1a1f63h], dl
		mov     eax, edi
		mov     edx, 64h
___3f19dh:
		call    ___23488h
		call    ___61278h
		xor     esi, esi
		call    ___623d4h
		mov     [___19bd60h], esi
		mov     [___24e4d0h], esi
___3f1bah:
		call    ___3d79ch
		call    ___3c16ch
		call    ___12200h
		call    ___12a54h
		call    ___24ec0h
		call    ___2fc50h
		call    ___649a8h
		call    ___64a28h
		add     esp, byte 2ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
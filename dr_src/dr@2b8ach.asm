cpu 386

    extern  __CHK
    extern  dr@1a1ef8h
    extern  dr@1a021ch
    extern  ceil
    extern  __CHP
    extern  dr@185a14h
    extern  dr@1a01fch
    extern  dr@18e974h
    extern  dr@1a01ech
    extern  dr@185a2ch
    extern  dr@185a3ch
    extern  dr@19bd60h
    extern  VGABufferPtr_0
    extern  VGABufferPtr_3
    extern  dr@1a1138h
    extern  dr@2b6a4h
    extern  dr@1a020ch
    extern  dr@1a0fb8h
    extern  dr@11378h
    extern  VGABufferPtr_2
    extern  dr@3a6a4h
    extern  dr@12dc4h
    extern  dr@185a20h
    extern  dr@1a1ec4h
    extern  dr@2b318h
    extern  dr@3266ch
    extern  dr@164d0h
    extern  dr@196ab0h
    extern  dr@14cach
    extern  dr@196a98h
    extern  dr@14dc4h
    extern  dr@196a9ch
    extern  KEY_F2
    extern  dr@2a6a8h
    extern  dr@19eb50h
    extern  dr@19eb54h
    extern  dr@19eb58h
    extern  dr@5e0f9h
    extern  dr@281d0h
    extern  dr@27f80h
    extern  dr@25a74h
    extern  dr@25e40h
    extern  dr@262b4h
    extern  dr@26650h
    extern  dr@269e4h
    extern  dr@26e54h
    extern  dr@135fch
    extern  dr@1807cch
    extern  dr@185c0bh
    extern  dr@1a10fch
    extern  renderTextToBuffer
    extern  dr@1807e8h
    extern  dr@654d4h
    extern  dr@1a0210h
    extern  dr@25330h
    extern  dr@1a0224h
    extern  dr@30a84h
    extern  dr@30c60h
    extern  dr@23758h
    extern  dr@2836ch
    extern  dr@283ech
    extern  dr@285f8h
    extern  dr@28880h
    extern  dr@28e40h
    extern  dr@199f54h
    extern  dr@1a1108h
    extern  dr@23230h
    extern  dr@12cb8h
    extern  VGABufferPtr_1
    extern  dr@1807c0h
    extern  dr@2a608h
    extern  dr@18078ch
    extern  dr@196a84h
    extern  dr@2b7a0h
    extern  dr@15130h
    extern  dr@196aa0h
    extern  dr@1549ch
    extern  dr@196aa4h
    extern  dr@15808h
    extern  dr@196aa8h
    extern  dr@15e3ch
    extern  dr@1a0218h
    extern  dr@168b4h
    extern  dr@2b81ch
    extern  dr@165ach
    extern  dr@185a28h
    extern  dr@1a1ef4h
    extern  dr@658b8h
    extern  dr@58c60h
    extern  dr@65710h
    extern  dr@1865fch
    extern  dr@1a1ea0h
    extern  dr@1a1ee8h
    extern  dr@259e0h
    extern  dr@1398ch
    extern  dr@13bd4h
    extern  dr@1a0228h
    extern  dr@17324h
    extern  dr@185a54h
    extern  dr@1a0214h
    extern  dr@185a18h
    extern  dr@1678ch
    extern  dr@2ab50h
    extern  dr@1a1ee4h
    extern  dr@185cbch
    extern  dr@1a1ed0h
    extern  dr@1a01b8h
    extern  dr@1a1ec8h
    extern  dr@1a1ec0h
    extern  dr@185a38h
    extern  dr@1a1ee0h
    extern  dr@1a1eech
    extern  dr@186658h
    extern  dr@1a1ed8h
    extern  dr@1854a4h
    extern  dr@1a01f0h
    extern  dr@18e938h
    extern  dr@1862bch
    extern  dr@1a01a8h
    extern  dr@1a01f4h
    extern  dr@18e93ch
    extern  dr@18643ch
    extern  dr@1a0198h
    extern  dr@1a01f8h
    extern  dr@18e940h
    extern  dr@1864fch
    extern  dr@1a01d0h
    extern  dr@1a1e8ch
    extern  dr@5994ch

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

dr@2b894h:
dd	dr@2c6c4h
dd	dr@2c74ah
dd	dr@2c7e5h
dd	dr@2c880h
dd	dr@2c947h
dd	dr@2c9a2h

global dr@2b8ach
dr@2b8ach:
		push    6ch
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 40h
		xor     edx, edx
		mov     [esp+30h], edx
		mov     [esp+10h], edx
		mov     [esp+18h], edx
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		fild    dword [eax*4+dr@1a021ch]
		fmul    qword [dr@1821fch]
		sub     esp, byte 8
		fstp    qword [esp]
		call    ceil
		mov     eax, [dr@1a1ef8h]
		lea     ebx, [eax*8+0]
		sub     ebx, eax
		call    __CHP
		shl     ebx, 2
		mov     esi, [dr@185a14h]
		sub     ebx, eax
		fistp   dword [esp+0ch]
		shl     ebx, 2
		test    esi, esi
		je      dr@2b961h
		mov     eax, [ebx+dr@1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+dr@18e974h]
		mov     edx, eax
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     edx, [ebx+dr@1a01ech]
		imul    edx, eax
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     edx, eax
		jmp     dr@2b993h
dr@2b961h:
		mov     eax, [ebx+dr@1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+dr@18e974h]
		mov     edx, eax
;9:0002b980
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     edx, [ebx+dr@1a01ech]
		imul    edx, eax
dr@2b993h:
		mov     edi, [esp+0ch]
		sub     edi, edx
		mov     [esp+0ch], edi
		test    edi, edi
		jge     dr@2b9a7h
		xor     eax, eax
		mov     [esp+0ch], eax
dr@2b9a7h:
		cmp     dword [dr@185a2ch], byte 0
		jne     dr@2ba9eh
		cmp     dword [dr@185a3ch], byte 0
		je      dr@2b9cah
		cmp     dword [dr@19bd60h], byte 0
		je      dr@2ba9eh
dr@2b9cah:
		mov     ecx, 4b000h
		mov     esi, [VGABufferPtr_0]
		mov     edi, [VGABufferPtr_3]
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		mov     ecx, 29b80h
		mov     eax, [VGABufferPtr_3]
		mov     esi, [dr@1a1138h]
		mov     [VGABufferPtr_0], eax
;9:0002ba00
		add     esi, 0f000h
		lea     edi, [eax+0f000h]
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		call    dr@2b6a4h
		mov     edx, [dr@1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+dr@1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [dr@1a0fb8h]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+38h], eax
		fild    word [esp+38h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+3ch], eax
		fild    word [esp+3ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+40h], eax
		fild    word [esp+40h]
		sub     esp, byte 4
		fstp    dword [esp]
		call    dr@11378h
		mov     eax, [VGABufferPtr_2]
		mov     [VGABufferPtr_0], eax
		call    dr@3a6a4h
		call    dr@12dc4h
dr@2ba9eh:
		xor     edi, edi
		mov     esi, 5
		mov     [esp+1ch], edi
		mov     [dr@185a20h], edi
		mov     [dr@1a1ec4h], esi
dr@2bab5h:
		cmp     dword [dr@185a2ch], byte 0
		jne     dr@2cfbch
		cmp     dword [esp+30h], byte 0
		jne     dr@2cfbch
		cmp     dword [dr@185a3ch], byte 0
		je      dr@2bae9h
		cmp     dword [dr@19bd60h], byte 0
		jne     dr@2bae9h
		call    dr@2b318h
		call    dr@3266ch
dr@2bae9h:
		cmp     dword [dr@185a20h], byte 1
		jne     dr@2c687h
		mov     ecx, 4b000h
		xor     edi, edi
		mov     esi, [dr@1a1138h]
		mov     [esp+28h], edi
		mov     [dr@185a20h], edi
		mov     edi, [VGABufferPtr_0]
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		call    dr@2b6a4h
		xor     eax, eax
		mov     edx, [dr@185a3ch]
		mov     [esp+24h], eax
		test    edx, edx
		je      dr@2bb4bh
		mov     edx, 1
		call    dr@164d0h
		mov     [esp+24h], edx
		jmp     dr@2bc81h
dr@2bb4bh:
		mov     ebx, [dr@196ab0h]
		cmp     ebx, byte 1
		jne     dr@2bb6dh
		call    dr@14cach
		mov     ebp, 9
		mov     [esp+28h], ebx
		mov     [esp+24h], ebp
		jmp     dr@2bc81h
dr@2bb6dh:
		cmp     dword [dr@196a98h], byte 3
		jne     dr@2bb89h
		mov     edi, 2
		call    dr@14dc4h
;9:0002bb80
		mov     [esp+24h], edi
		jmp     dr@2bc81h
dr@2bb89h:
		cmp     dword [dr@196a9ch], byte 1
		jne     dr@2bba5h
		mov     esi, 3
		call    dr@15130h
		mov     [esp+24h], esi
		jmp     dr@2bc81h
dr@2bba5h:
		cmp     dword [dr@196aa0h], byte 1
		jne     dr@2bbc1h
		mov     ecx, 4
		call    dr@1549ch
		mov     [esp+24h], ecx
		jmp     dr@2bc81h
dr@2bbc1h:
		cmp     dword [dr@196aa4h], byte 0
		je      dr@2bbe8h
		call    dr@15808h
		test    eax, eax
		je      dr@2bbdbh
		mov     dword [esp+10h], 1
dr@2bbdbh:
		mov     dword [esp+24h], 5
		jmp     dr@2bc81h
dr@2bbe8h:
		cmp     dword [dr@196aa8h], byte 0
		je      dr@2bc0fh
		call    dr@15e3ch
		test    eax, eax
		je      dr@2bc02h
		mov     dword [esp+10h], 1
dr@2bc02h:
		mov     dword [esp+24h], 6
		jmp     dr@2bc81h
dr@2bc0fh:
		imul    edx, [dr@1a1ef8h], byte 6ch
		cmp     dword [edx+dr@1a0218h], byte 4
		jne     dr@2bc3ah
		call    dr@168b4h
		test    eax, eax
		je      dr@2bc30h
		mov     dword [esp+10h], 1
dr@2bc30h:
		mov     dword [esp+24h], 7
		jmp     dr@2bc81h
dr@2bc3ah:
		mov     esi, [esp+0ch]
		mov     eax, [edx+dr@1a0210h]
		add     eax, esi
		cmp     eax, dword 3e8h
		jge     dr@2bc81h
		call    dr@2b81ch
		cmp     eax, [edx+dr@1a0210h]
		jle     dr@2bc81h
		imul    eax, [dr@1a1ef8h], byte 6ch
		cmp     dword [eax+dr@1a01ech], byte 5fh
		jle     dr@2bc81h
		call    dr@165ach
		mov     ebx, 8
		mov     ecx, 1
		mov     [esp+24h], ebx
		mov     [esp+28h], ecx
dr@2bc81h:
		mov     ebx, 5
		mov     ecx, 6dh
		mov     edx, 173h
		xor     eax, eax
		mov     [dr@1a1ec4h], ebx
		mov     ebx, 27fh
		call    dr@135fch
		cmp     dword [dr@19bd60h], byte 0
		je      dr@2bcddh
		mov     ecx, 390a3h
		mov     ebx, dr@1807cch
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a10fch]
		call    renderTextToBuffer
		mov     ecx, 390d9h
		mov     ebx, dr@1807e8h
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
dr@2bcddh:
		call    dr@23230h
		call    dr@12cb8h
		cmp     dword [dr@185a28h], byte 0
		je      dr@2bcfah
		mov     eax, [dr@1a1ef4h]
		call    dr@658b8h
dr@2bcfah:
		xor     ebp, ebp
		call    dr@2b318h
		mov     [esp+34h], ebp
		mov     [esp+2ch], ebp
dr@2bd09h:
		call    dr@58c60h
		cmp     dword [dr@185a28h], byte 0
		je      dr@2bd20h
		mov     eax, [esp+34h]
		call    dr@65710h
dr@2bd20h:
		mov     ebx, 2
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		je      dr@2be33h
		cmp     dword [dr@185a3ch], byte 0
		jne     dr@2be33h
		cmp     dword [dr@196a98h], byte 3
		je      dr@2be33h
		cmp     dword [dr@196a9ch], byte 1
		je      dr@2be33h
		cmp     dword [dr@196aa0h], byte 1
		je      dr@2be33h
		cmp     dword [dr@196aa4h], byte 0
		jne     dr@2be33h
		cmp     dword [dr@196aa8h], byte 0
		jne     dr@2be33h
		cmp     dword [dr@196ab0h], byte 1
		je      dr@2be33h
		imul    esi, [dr@1a1ef8h], byte 6ch
		cmp     dword [esi+dr@1a0218h], byte 4
		je      dr@2be33h
		mov     edx, [esp+0ch]
		mov     eax, [esi+dr@1a0210h]
		add     eax, edx
		cmp     eax, dword 3e8h
		jl      dr@2be33h
		call    dr@2b81ch
		cmp     eax, [esi+dr@1a0210h]
		jg      dr@2be33h
		imul    eax, [dr@1a1ef8h], byte 6ch
		cmp     dword [eax+dr@1a01ech], byte 5fh
		jg      dr@2be33h
		push    dr@1865fch
		mov     edx, 10dh
		mov     eax, 1b0h
		mov     ecx, [dr@1a1ea0h]
		mov     ebx, [dr@1a1ee8h]
		call    dr@259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [VGABufferPtr_0]
		mov     eax, 2a230h
		add     edx, 2a230h
		call    dr@1398ch
		mov     edi, [dr@1a1ee8h]
		inc     edi
		mov     [dr@1a1ee8h], edi
		cmp     edi, byte 16h
		jle     dr@2be33h
		xor     edx, edx
		mov     [dr@1a1ee8h], edx
dr@2be33h:
		mov     ebx, 2
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		je      dr@2bee3h
		cmp     dword [dr@185a3ch], byte 0
		jne     dr@2bed4h
		cmp     dword [dr@196a98h], byte 3
		je      dr@2bed4h
		cmp     dword [dr@196a9ch], byte 1
		je      dr@2bed4h
		cmp     dword [dr@196aa0h], byte 1
		je      dr@2bed4h
		cmp     dword [dr@196aa4h], byte 0
;9:0002be80
		jne     dr@2bed4h
		cmp     dword [dr@196aa8h], byte 0
		jne     dr@2bed4h
		cmp     dword [dr@196ab0h], byte 1
		je      dr@2bed4h
		imul    esi, [dr@1a1ef8h], byte 6ch
		cmp     dword [esi+dr@1a0218h], byte 4
		je      dr@2bed4h
		mov     edx, [esp+0ch]
		mov     eax, [esi+dr@1a0210h]
		add     eax, edx
		cmp     eax, dword 3e8h
		jge     dr@2bee3h
		call    dr@2b81ch
		cmp     eax, [esi+dr@1a0210h]
		jle     dr@2bee3h
		imul    eax, [dr@1a1ef8h], byte 6ch
		cmp     dword [eax+dr@1a01ech], byte 5fh
		jle     dr@2bee3h
dr@2bed4h:
		mov     edx, 141h
		mov     eax, 0a4h
		call    dr@13bd4h
dr@2bee3h:
		xor     edi, edi
		mov     esi, [esp+2ch]
		mov     [esp+20h], edi
dr@2beedh:
		xor     eax, eax
		mov     al, [esp+20h]
		push    eax
		mov     edx, esi
		mov     eax, [edi+dr@19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+dr@19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+dr@19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    dr@5e0f9h
		mov     eax, [esp+20h]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+20h], eax
		cmp     eax, byte 60h
		jl      dr@2beedh
		mov     ebx, 80h
		mov     esi, [esp+2ch]
		mov     edi, 600h
		mov     [esp+20h], ebx
dr@2bf8ch:
		xor     eax, eax
		mov     al, [esp+20h]
		push    eax
		mov     edx, esi
		mov     eax, [edi+dr@19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+dr@19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+dr@19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    dr@5e0f9h
		mov     ecx, [esp+20h]
		inc     ecx
		add     edi, byte 0ch
		mov     [esp+20h], ecx
		cmp     ecx, 100h
		jl      dr@2bf8ch
		add     dword [esp+34h], 51eh
		mov     edx, [esp+2eh]
		add     edx, byte 2
		inc     ebp
		mov     [esp+2eh], dx
		cmp     ebp, byte 32h
		jl      dr@2bd09h
		cmp     dword [dr@185a3ch], byte 0
		jne     dr@2c103h
		cmp     dword [dr@196a98h], byte 3
		je      dr@2c103h
		cmp     dword [dr@196a9ch], byte 1
		je      dr@2c103h
		cmp     dword [dr@196aa0h], byte 1
		je      dr@2c103h
		cmp     dword [dr@196aa4h], byte 0
		jne     dr@2c103h
		cmp     dword [dr@196aa8h], byte 0
		jne     dr@2c103h
		cmp     dword [dr@196ab0h], byte 1
		je      dr@2c103h
		cmp     dword [dr@19bd60h], byte 0
		jne     dr@2c0aeh
		imul    eax, [dr@1a1ef8h], byte 6ch
		cmp     dword [eax+dr@1a0228h], byte 7
		jle     dr@2c103h
dr@2c0aeh:
		cmp     dword [dr@185a18h], byte 4
		je      dr@2c103h
		imul    edx, [dr@1a1ef8h], byte 6ch
		cmp     dword [edx+dr@1a0218h], byte 4
		je      dr@2c103h
		mov     ebx, [esp+0ch]
		mov     eax, [edx+dr@1a0210h]
		add     eax, ebx
		cmp     eax, dword 3e8h
		jge     dr@2c67fh
		call    dr@2b81ch
		cmp     eax, [edx+dr@1a0210h]
		jle     dr@2c67fh
		imul    eax, [dr@1a1ef8h], byte 6ch
		cmp     dword [eax+dr@1a01ech], byte 5fh
		jle     dr@2c67fh
dr@2c103h:
		cmp     dword [esp+24h], byte 0
		je      dr@2c119h
		call    dr@17324h
		call    dr@25330h
		call    dr@12dc4h
dr@2c119h:
		cmp     dword [esp+10h], byte 1
		jne     dr@2c181h
		call    dr@165ach
		call    dr@12dc4h
		call    dr@17324h
		mov     edx, 1
		mov     ebx, [dr@19bd60h]
		mov     [esp+28h], edx
		test    ebx, ebx
		je      dr@2c17dh
		imul    edx, [dr@1a1ef8h], byte 6ch
		fild    dword [dr@185a54h]
		fmul    qword [dr@182204h]
		mov     edi, 1efh
		call    __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		mov     [edx+dr@1a0210h], edi
		lea     ebp, [edi+eax*1]
		mov     [edx+dr@1a0210h], ebp
		call    dr@25330h
		jmp     dr@2c181h
dr@2c17dh:
		mov     [esp+30h], edx
dr@2c181h:
		cmp     dword [esp+24h], byte 1
		jne     dr@2c190h
		xor     edx, edx
		mov     [dr@185a3ch], edx
dr@2c190h:
		cmp     dword [esp+24h], byte 2
		jne     dr@2c19fh
		xor     ecx, ecx
		mov     [dr@196a98h], ecx
dr@2c19fh:
		cmp     dword [esp+24h], byte 3
		jne     dr@2c1aeh
		xor     edi, edi
		mov     [dr@196a9ch], edi
dr@2c1aeh:
		cmp     dword [esp+24h], byte 4
		jne     dr@2c1bch
		xor     eax, eax
		mov     [dr@196aa0h], eax
dr@2c1bch:
		cmp     dword [esp+24h], byte 5
		jne     dr@2c1cbh
		xor     ebx, ebx
		mov     [dr@196aa4h], ebx
dr@2c1cbh:
		cmp     dword [esp+24h], byte 6
		jne     dr@2c1dah
		xor     esi, esi
		mov     [dr@196aa8h], esi
dr@2c1dah:
		cmp     dword [esp+24h], byte 7
		jne     dr@2c1f9h
		imul    eax, [dr@1a1ef8h], byte 6ch
		mov     edx, 0ffffffffh
		mov     [eax+dr@1a0214h], edx
		mov     [eax+dr@1a0218h], edx
dr@2c1f9h:
		cmp     dword [esp+24h], byte 9
		jne     dr@2c208h
;9:0002c200
		xor     ecx, ecx
		mov     [dr@196ab0h], ecx
dr@2c208h:
		cmp     dword [esp+24h], byte 8
		jne     dr@2c25bh
		cmp     dword [dr@19bd60h], byte 0
		je      dr@2c253h
		imul    edx, [dr@1a1ef8h], byte 6ch
		fild    dword [dr@185a54h]
		fmul    qword [dr@182204h]
		mov     ebx, 1efh
		call    __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		mov     [edx+dr@1a0210h], ebx
		lea     ecx, [ebx+eax*1]
		mov     [edx+dr@1a0210h], ecx
		call    dr@25330h
		jmp     dr@2c25bh
dr@2c253h:
		mov     dword [esp+30h], 1
dr@2c25bh:
		mov     ecx, 1efh
		mov     ebp, 0ffffffffh
		mov     ebx, 1
		xor     edx, edx
dr@2c26ch:
		cmp     edx, [esp+30h]
		jne     dr@2c5a8h
		mov     edi, [dr@196ab0h]
		mov     esi, ebx
		cmp     ebx, edi
;9:0002c280
		jne     dr@2c2ach
		call    dr@14cach
		call    dr@12dc4h
		call    dr@17324h
		mov     [dr@196ab0h], edx
		mov     esi, edx
		call    dr@25330h
		call    dr@12dc4h
		mov     [esp+28h], edi
		jmp     dr@2c5a0h
dr@2c2ach:
		cmp     dword [dr@196a98h], byte 3
		jne     dr@2c2d1h
		call    dr@14dc4h
		call    dr@12dc4h
		call    dr@17324h
		mov     [dr@196a98h], edx
		mov     esi, edx
		jmp     dr@2c596h
dr@2c2d1h:
		cmp     ebx, [dr@196a9ch]
		jne     dr@2c2f5h
		call    dr@15130h
		call    dr@12dc4h
		call    dr@17324h
		mov     [dr@196a9ch], edx
		mov     esi, edx
		jmp     dr@2c596h
dr@2c2f5h:
		cmp     ebx, [dr@196aa0h]
		jne     dr@2c319h
		call    dr@1549ch
		call    dr@12dc4h
		call    dr@17324h
		mov     [dr@196aa0h], edx
		mov     esi, edx
		jmp     dr@2c596h
dr@2c319h:
		mov     edi, [dr@196aa4h]
		cmp     edx, edi
		je      dr@2c3b8h
		call    dr@15808h
		test    eax, eax
		je      dr@2c334h
		mov     [esp+10h], ebx
dr@2c334h:
		call    dr@12dc4h
		call    dr@17324h
		mov     eax, [esp+10h]
		mov     [dr@196aa4h], edx
		cmp     ebx, eax
		jne     dr@2c3a7h
		call    dr@165ach
		call    dr@12dc4h
		call    dr@17324h
		mov     esi, [dr@19bd60h]
		mov     [esp+28h], ebx
		mov     [esp+10h], edx
		cmp     edx, esi
		je      dr@2c3a3h
		imul    esi, [dr@1a1ef8h], byte 6ch
		fild    dword [dr@185a54h]
		fmul    qword [dr@182204h]
;9:0002c380
		call    __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		mov     [esi+dr@1a0210h], ecx
		lea     edi, [ecx+eax*1]
		mov     [esi+dr@1a0210h], edi
		call    dr@25330h
		jmp     dr@2c3a7h
dr@2c3a3h:
		mov     [esp+30h], ebx
dr@2c3a7h:
		call    dr@25330h
		call    dr@12dc4h
		mov     esi, edx
		jmp     dr@2c5a0h
dr@2c3b8h:
		cmp     edi, [dr@196aa8h]
		je      dr@2c455h
		call    dr@15e3ch
		test    eax, eax
		je      dr@2c3d1h
		mov     [esp+10h], ebx
dr@2c3d1h:
		call    dr@12dc4h
		call    dr@17324h
		mov     eax, [esp+10h]
		mov     [dr@196aa8h], edx
		cmp     ebx, eax
		jne     dr@2c444h
		call    dr@165ach
		call    dr@12dc4h
		call    dr@17324h
		mov     esi, [dr@19bd60h]
		mov     [esp+28h], ebx
		mov     [esp+10h], edx
		cmp     edx, esi
		je      dr@2c440h
		imul    esi, [dr@1a1ef8h], byte 6ch
		fild    dword [dr@185a54h]
		fmul    qword [dr@182204h]
		call    __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		mov     [esi+dr@1a0210h], ecx
		lea     edi, [ecx+eax*1]
		mov     [esi+dr@1a0210h], edi
		call    dr@25330h
		jmp     dr@2c444h
dr@2c440h:
		mov     [esp+30h], ebx
dr@2c444h:
		call    dr@25330h
		call    dr@12dc4h
		mov     esi, edx
		jmp     dr@2c5a0h
dr@2c455h:
		imul    edi, [dr@1a1ef8h], byte 6ch
		cmp     dword [edi+dr@1a0218h], byte 4
		jne     dr@2c506h
		call    dr@168b4h
		test    eax, eax
		je      dr@2c476h
		mov     [esp+10h], ebx
dr@2c476h:
		call    dr@12dc4h
		call    dr@17324h
;9:0002c480
		imul    eax, [dr@1a1ef8h], byte 6ch
		mov     [eax+dr@1a0218h], ebp
		mov     edi, [esp+10h]
		mov     [eax+dr@1a0214h], ebp
		cmp     ebx, edi
		jne     dr@2c4f5h
		call    dr@165ach
		call    dr@12dc4h
		call    dr@17324h
		mov     eax, [dr@19bd60h]
		mov     [esp+28h], edi
		mov     [esp+10h], edx
		cmp     edx, eax
		je      dr@2c4f1h
		imul    esi, [dr@1a1ef8h], byte 6ch
		fild    dword [dr@185a54h]
		fmul    qword [dr@182204h]
		call    __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		mov     [esi+dr@1a0210h], ecx
		lea     edi, [ecx+eax*1]
		mov     [esi+dr@1a0210h], edi
		call    dr@25330h
		jmp     dr@2c4f5h
dr@2c4f1h:
		mov     [esp+30h], edi
dr@2c4f5h:
		call    dr@25330h
		call    dr@12dc4h
		mov     esi, edx
		jmp     dr@2c5a0h
dr@2c506h:
		mov     eax, [edi+dr@1a0210h]
		add     eax, [esp+0ch]
		cmp     eax, dword 3e8h
		jge     dr@2c5a0h
		call    dr@2b81ch
		cmp     eax, [edi+dr@1a0210h]
		jle     dr@2c5a0h
		imul    eax, [dr@1a1ef8h], byte 6ch
		cmp     dword [eax+dr@1a01ech], byte 5fh
		jle     dr@2c5a0h
		cmp     edx, [esp+30h]
		jne     dr@2c5a0h
		call    dr@165ach
		call    dr@12dc4h
		call    dr@17324h
		mov     edi, [dr@19bd60h]
		mov     [esp+28h], ebx
		cmp     edx, edi
		je      dr@2c592h
		imul    edi, [dr@1a1ef8h], byte 6ch
		fild    dword [dr@185a54h]
		fmul    qword [dr@182204h]
		call    __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		mov     [edi+dr@1a0210h], ecx
		add     [edi+dr@1a0210h], eax
		call    dr@25330h
		jmp     dr@2c596h
dr@2c592h:
		mov     [esp+30h], ebx
dr@2c596h:
		call    dr@25330h
		call    dr@12dc4h
dr@2c5a0h:
		test    esi, esi
		je      dr@2c26ch
dr@2c5a8h:
		cmp     dword [dr@185a18h], byte 4
		jne     dr@2c5ceh
		cmp     dword [dr@19bd60h], byte 0
		jne     dr@2c5c6h
		cmp     dword [esp+28h], byte 0
		jne     dr@2c5c6h
		call    dr@1678ch
dr@2c5c6h:
		xor     ebx, ebx
		mov     [dr@185a18h], ebx
dr@2c5ceh:
		cmp     dword [esp+18h], byte 0
		jne     dr@2c67fh
		mov     ecx, 29b80h
		mov     ebx, 27fh
		mov     esi, [dr@1a1138h]
		mov     edi, [VGABufferPtr_0]
		add     esi, 0f000h
		add     edi, 0f000h
		mov     edx, 173h
;9:0002c600
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		call    dr@2b6a4h
		mov     ecx, 6dh
		xor     eax, eax
		call    dr@135fch
		cmp     dword [dr@19bd60h], byte 0
		je      dr@2c65ch
		mov     ecx, 390a3h
		mov     ebx, dr@1807cch
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a10fch]
		call    renderTextToBuffer
		mov     ecx, 390d9h
		mov     ebx, dr@1807e8h
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
dr@2c65ch:
		call    dr@23230h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 1aah
		call    dr@27f80h
		call    dr@12cb8h
dr@2c67fh:
		xor     edi, edi
		mov     [dr@185a28h], edi
dr@2c687h:
		cmp     dword [esp+18h], byte 1
		je      dr@2cfbch
		call    dr@2ab50h
		call    dr@2ab50h
		mov     eax, [dr@185a38h]
		test    eax, eax
		jle     dr@2c6aeh
		lea     edx, [eax-1]
		mov     [dr@185a38h], edx
dr@2c6aeh:
		mov     eax, [dr@1a1ec4h]
		cmp     eax, byte 5
		ja      dr@2c9fch
		jmp     dword [cs:eax*4+dr@2b894h]
dr@2c6c4h:
		mov     eax, [dr@1a1ee4h]
		mov     edx, 8dh
		shl     eax, 8
		mov     ecx, [dr@1a1ee4h]
		add     eax, dr@185cbch
		mov     ebx, [dr@1a1ed0h]
		push    eax
		mov     ecx, [ecx*4+dr@1a01b8h]
		mov     eax, 10h
		call    dr@259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [VGABufferPtr_0]
		mov     eax, 16090h
		add     edx, 16090h
		call    dr@1398ch
		mov     edx, [dr@1a1ed0h]
		inc     edx
		mov     [dr@1a1ed0h], edx
		cmp     edx, byte 3fh
		jle     dr@2c72eh
		xor     ecx, ecx
		mov     [dr@1a1ed0h], ecx
dr@2c72eh:
		cmp     dword [dr@185a38h], byte 1
		jne     dr@2c9fch
		call    dr@25a74h
		call    dr@12dc4h
		jmp     dr@2c9fch
dr@2c74ah:
		imul    eax, [dr@1a1ef8h], byte 6ch
		imul    edx, [eax+dr@1a01fch], 6e0h
		mov     eax, [eax+dr@1a01f0h]
		cmp     eax, [edx+dr@18e938h]
		jge     dr@2c7c9h
		imul    edx, eax, byte 60h
		mov     ebx, [dr@1a1ec8h]
		add     edx, dr@1862bch
		mov     ecx, [eax*4+dr@1a01a8h]
		push    edx
;9:0002c780
		mov     eax, 10h
		mov     edx, 10dh
		call    dr@259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [VGABufferPtr_0]
		mov     eax, 2a090h
		add     edx, 2a090h
		call    dr@1398ch
		mov     esi, [dr@1a1ec8h]
		inc     esi
		mov     [dr@1a1ec8h], esi
		cmp     esi, byte 17h
		jle     dr@2c7c9h
		xor     ebp, ebp
		mov     [dr@1a1ec8h], ebp
dr@2c7c9h:
		cmp     dword [dr@185a38h], byte 1
		jne     dr@2c9fch
		call    dr@25e40h
		call    dr@12dc4h
		jmp     dr@2c9fch
dr@2c7e5h:
		imul    eax, [dr@1a1ef8h], byte 6ch
		imul    edx, [eax+dr@1a01fch], 6e0h
		mov     eax, [eax+dr@1a01f4h]
		cmp     eax, [edx+dr@18e93ch]
		jge     dr@2c864h
		imul    edx, eax, byte 30h
		mov     ebx, [dr@1a1ec0h]
		add     edx, dr@18643ch
		mov     ecx, [eax*4+dr@1a0198h]
		push    edx
		mov     eax, 78h
		mov     edx, 10dh
		call    dr@259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [VGABufferPtr_0]
		mov     eax, 2a0f8h
		add     edx, 2a0f8h
		call    dr@1398ch
		mov     ecx, [dr@1a1ec0h]
		inc     ecx
		mov     [dr@1a1ec0h], ecx
		cmp     ecx, byte 0bh
		jle     dr@2c864h
		xor     edi, edi
		mov     [dr@1a1ec0h], edi
dr@2c864h:
		cmp     dword [dr@185a38h], byte 1
		jne     dr@2c9fch
		call    dr@262b4h
		call    dr@12dc4h
		jmp     dr@2c9fch
;9:0002c880
dr@2c880h:
		imul    eax, [dr@1a1ef8h], byte 6ch
		imul    edx, [eax+dr@1a01fch], 6e0h
		mov     eax, [eax+dr@1a01f8h]
		cmp     eax, [edx+dr@18e940h]
		jge     dr@2c92bh
		mov     edx, eax
		shl     edx, 6
		mov     ebx, [dr@1a1eech]
		add     edx, dr@1864fch
		mov     ecx, [eax*4+dr@1a01d0h]
		push    edx
		mov     eax, 0e0h
		mov     edx, 10dh
		call    dr@259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [VGABufferPtr_0]
		mov     eax, 2a160h
		add     edx, 2a160h
		call    dr@1398ch
		cmp     dword [dr@1a1ee0h], byte 0
		jne     dr@2c912h
		mov     edx, [dr@1a1eech]
		inc     edx
		mov     [dr@1a1eech], edx
		cmp     edx, byte 0eh
		jle     dr@2c92bh
		mov     dword [dr@1a1ee0h], 1
		jmp     dr@2c92bh
dr@2c912h:
		mov     edi, [dr@1a1eech]
		dec     edi
		mov     [dr@1a1eech], edi
		cmp     edi, byte 1
		jge     dr@2c92bh
		xor     eax, eax
		mov     [dr@1a1ee0h], eax
dr@2c92bh:
		cmp     dword [dr@185a38h], byte 1
		jne     dr@2c9fch
		call    dr@26650h
		call    dr@12dc4h
		jmp     dr@2c9fch
dr@2c947h:
		push    dr@186658h
		mov     edx, 10dh
		mov     eax, 148h
		mov     ecx, [dr@1a1e8ch]
		mov     ebx, [dr@1a1ed8h]
		call    dr@259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [VGABufferPtr_0]
		mov     eax, 2a1c8h
		add     edx, 2a1c8h
		call    dr@1398ch
		mov     edi, [dr@1a1ed8h]
		inc     edi
		mov     [dr@1a1ed8h], edi
		cmp     edi, byte 17h
		jle     dr@2c9fch
		xor     eax, eax
		mov     [dr@1a1ed8h], eax
		jmp     dr@2c9fch
dr@2c9a2h:
		push    dr@1865fch
		mov     edx, 10dh
		mov     eax, 1b0h
		mov     ecx, [dr@1a1ea0h]
		mov     ebx, [dr@1a1ee8h]
		call    dr@259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [VGABufferPtr_0]
		mov     eax, 2a230h
		add     edx, 2a230h
		call    dr@1398ch
		mov     ebx, [dr@1a1ee8h]
		inc     ebx
		mov     [dr@1a1ee8h], ebx
		cmp     ebx, byte 16h
		jle     dr@2c9fch
		xor     esi, esi
		mov     [dr@1a1ee8h], esi
dr@2c9fch:
		call    dr@5994ch
		mov     [esp+3ch], al
		test    al, al
		je      dr@2cb9fh
		xor     edi, edi
		mov     [esp+20h], edi
dr@2ca13h:
		mov     edx, [esp+20h]
		mov     eax, [esp+20h]
		lea     ebp, [edx+1]
		mov     al, [esp+eax*1+1]
		mov     [esp+20h], ebp
		mov     [esp+edx*1], al
		cmp     ebp, byte 9
		jl      dr@2ca13h
		mov     al, [esp+3ch]
		mov     edx, [dr@19bd60h]
		mov     [esp+9], al
		test    edx, edx
		jne     dr@2ca74h
		cmp     byte [esp+6], 20h
		jne     dr@2ca74h
		cmp     byte [esp+7], 13h
		jne     dr@2ca74h
		cmp     byte [esp+8], 1eh
		jne     dr@2ca74h
		cmp     al, 11h
		jne     dr@2ca74h
		imul    eax, [dr@1a1ef8h], byte 6ch
		add     dword [eax+dr@1a0210h], 3e8h
		call    dr@25330h
		call    dr@12dc4h
dr@2ca74h:
		cmp     dword [dr@19bd60h], byte 0
		jne     dr@2cae2h
		cmp     byte [esp+5], 20h
		jne     dr@2cae2h
		cmp     byte [esp+6], 13h
		jne     dr@2cae2h
		mov     ch, [esp+7]
		cmp     ch, 18h
		jne     dr@2cae2h
		cmp     ch, [esp+8]
		jne     dr@2cae2h
		cmp     byte [esp+9], 26h
		jne     dr@2cae2h
		push    8000h
		mov     eax, [dr@1854a4h]
		mov     ecx, 0f500h
		sub     eax, 7000h
		mov     edx, 17h
		push    eax
		xor     ebx, ebx
		mov     eax, 2
		call    dr@654d4h
		imul    eax, [dr@1a1ef8h], byte 6ch
		mov     dword [eax+dr@1a0210h], 7a120h
		call    dr@25330h
		call    dr@12dc4h
dr@2cae2h:
		cmp     dword [dr@19bd60h], byte 0
		jne     dr@2cb44h
		cmp     byte [esp+5], 20h
		jne     dr@2cb44h
		cmp     byte [esp+6], 13h
		jne     dr@2cb44h
		cmp     byte [esp+7], 17h
		jne     dr@2cb44h
;9:0002cb00
		cmp     byte [esp+8], 2fh
		jne     dr@2cb44h
		cmp     byte [esp+9], 12h
		jne     dr@2cb44h
		imul    eax, [dr@1a1ef8h], byte 6ch
		mov     ebx, [eax+dr@1a0224h]
		add     ebx, byte 0ah
		mov     edx, 13h
		mov     [eax+dr@1a0224h], ebx
		xor     eax, eax
		call    dr@30a84h
		mov     eax, 14h
		call    dr@30c60h
		call    dr@25330h
		call    dr@12dc4h
dr@2cb44h:
		cmp     dword [dr@19bd60h], byte 0
		jne     dr@2cb9fh
		cmp     byte [esp+6], 20h
		jne     dr@2cb9fh
		cmp     byte [esp+7], 13h
		jne     dr@2cb9fh
		cmp     byte [esp+8], 18h
		jne     dr@2cb9fh
		cmp     byte [esp+9], 19h
		jne     dr@2cb9fh
		imul    eax, [dr@1a1ef8h], byte 6ch
		mov     edi, [eax+dr@1a0224h]
		sub     edi, byte 0ah
		mov     edx, 13h
		mov     [eax+dr@1a0224h], edi
		xor     eax, eax
		call    dr@30a84h
		mov     eax, 14h
		call    dr@30c60h
		call    dr@25330h
		call    dr@12dc4h
dr@2cb9fh:
		mov     dh, [esp+3ch]
		cmp     dh, 4dh
		jb      dr@2cbf9h
		jbe     dr@2cc45h
		cmp     dh, 0c8h
		jb      dr@2cbe0h
		jbe     dr@2cc30h
		cmp     dh, 0cdh
		jb      dr@2cbd2h
		jbe     dr@2cc45h
		cmp     dh, 0d0h
		je      dr@2cc37h
		jmp     dr@2cc5bh
dr@2cbd2h:
		cmp     dh, 0cbh
		je      dr@2cc3eh
		jmp     dr@2cc5bh
dr@2cbe0h:
		cmp     dh, 50h
		jb      dr@2cc5bh
		jbe     dr@2cc37h
		cmp     dh, 9ch
		je      dr@2cc4ch
		jmp     dr@2cc5bh
dr@2cbf9h:
		cmp     dh, 3bh
		jb      dr@2cc12h
		jbe     dr@2cc20h
;9:0002cc00
		cmp     dh, 48h
		jb      dr@2cc5bh
		jbe     dr@2cc30h
		cmp     dh, 4bh
		je      dr@2cc3eh
		jmp     dr@2cc5bh
dr@2cc12h:
		cmp     dh, 1
		jb      dr@2cc5bh
		jbe     dr@2cc53h
		cmp     dh, 1ch
		je      dr@2cc4ch
		jmp     dr@2cc5bh
dr@2cc20h:
		cmp     dword [dr@19bd60h], byte 0
		je      dr@2cc5bh
		call    dr@23758h
		jmp     dr@2cc5bh
dr@2cc30h:
		call    dr@2836ch
		jmp     dr@2cc5bh
dr@2cc37h:
		call    dr@283ech
		jmp     dr@2cc5bh
dr@2cc3eh:
		call    dr@285f8h
		jmp     dr@2cc5bh
dr@2cc45h:
		call    dr@28880h
		jmp     dr@2cc5bh
dr@2cc4ch:
		call    dr@28e40h
		jmp     dr@2cc5bh
dr@2cc53h:
		mov     dword [esp+1ch], 0ffffffffh
dr@2cc5bh:
		cmp     dword [dr@199f54h], byte 0
		je      dr@2cc6bh
		mov     byte [KEY_F2], 1
dr@2cc6bh:
		call    dr@2a6a8h
		mov     ebp, eax
		test    eax, eax
		jle     dr@2cf97h
		mov     ecx, 29b80h
		mov     esi, [dr@1a1138h]
		mov     edi, [VGABufferPtr_0]
		add     esi, 0f000h
		add     edi, 0f000h
		mov     ebx, 20h
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		call    dr@2b6a4h
		call    dr@2b318h
		mov     [esp+20h], ebx
		mov     esi, 180h
		mov     edi, 640000h
dr@2ccc4h:
		xor     eax, eax
		mov     al, [esp+20h]
		push    eax
		mov     edx, edi
		mov     eax, [esi+dr@19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, edi
		mov     eax, [esi+dr@19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, edi
		mov     eax, [esi+dr@19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    dr@5e0f9h
		mov     ecx, [esp+20h]
		inc     ecx
		add     esi, byte 0ch
		mov     [esp+20h], ecx
		cmp     ecx, 100h
		jl      dr@2ccc4h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 1aah
		call    dr@281d0h
		mov     ecx, 72h
		mov     ebx, 80h
		mov     edx, 73h
		xor     eax, eax
		call    dr@281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0ah
		call    dr@281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, ecx
		call    dr@281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0dah
		call    dr@281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 142h
		call    dr@281d0h
		cmp     dword [dr@1a1ec4h], byte 0
		jne     dr@2ce08h
		mov     ecx, 72h
		mov     ebx, 80h
		mov     edx, 73h
		xor     eax, eax
		call    dr@27f80h
		call    dr@25a74h
dr@2ce08h:
		cmp     dword [dr@1a1ec4h], byte 1
		jne     dr@2ce2fh
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0ah
		call    dr@27f80h
		call    dr@25e40h
dr@2ce2fh:
		cmp     dword [dr@1a1ec4h], byte 2
		jne     dr@2ce53h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, ecx
		call    dr@27f80h
		call    dr@262b4h
dr@2ce53h:
		cmp     dword [dr@1a1ec4h], byte 3
		jne     dr@2ce7ah
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0dah
		call    dr@27f80h
		call    dr@26650h
dr@2ce7ah:
		cmp     dword [dr@1a1ec4h], byte 4
		jne     dr@2cea1h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 142h
		call    dr@27f80h
		call    dr@269e4h
dr@2cea1h:
		cmp     dword [dr@1a1ec4h], byte 5
		jne     dr@2cec8h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 1aah
		call    dr@27f80h
		call    dr@26e54h
dr@2cec8h:
		mov     ecx, 6dh
		mov     ebx, 27fh
		mov     edx, 173h
		xor     eax, eax
		call    dr@135fch
		cmp     dword [dr@19bd60h], byte 0
		je      dr@2cf19h
		mov     ecx, 390a3h
		mov     ebx, dr@1807cch
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a10fch]
		call    renderTextToBuffer
;9:0002cf00
		mov     ecx, 390d9h
		mov     ebx, dr@1807e8h
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
dr@2cf19h:
		call    dr@23230h
		call    dr@12cb8h
		mov     ecx, 4b000h
		mov     esi, [VGABufferPtr_0]
		mov     edi, [VGABufferPtr_1]
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		cmp     ebp, byte 1
		jne     dr@2cf53h
		mov     eax, dr@1807c0h
		call    dr@2a608h
dr@2cf53h:
		cmp     ebp, byte 2
		jne     dr@2cf62h
		mov     eax, dr@18078ch
		call    dr@2a608h
dr@2cf62h:
		cmp     ebp, byte 3
		jne     dr@2cf71h
		mov     eax, dr@1821ech
		call    dr@2a608h
dr@2cf71h:
		mov     ecx, 4b000h
		mov     esi, [VGABufferPtr_1]
		mov     edi, [VGABufferPtr_0]
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		call    dr@12cb8h
dr@2cf97h:
		cmp     dword [dr@19bd60h], byte 0
		je      dr@2cfb1h
		cmp     dword [dr@196a84h], byte 0
		je      dr@2cfb1h
		mov     dword [esp+1ch], 0ffffffffh
dr@2cfb1h:
		cmp     dword [esp+1ch], byte 0
		je      dr@2bab5h
dr@2cfbch:
		cmp     dword [esp+30h], byte 1
		jne     dr@2cfc8h
		call    dr@2b7a0h
dr@2cfc8h:
		mov     ecx, 4b000h
		mov     ebx, 27fh
		mov     esi, [dr@1a1138h]
		mov     edi, [VGABufferPtr_3]
		mov     edx, 173h
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		mov     eax, [VGABufferPtr_3]
		mov     ecx, 6dh
		mov     [VGABufferPtr_0], eax
		xor     eax, eax
		call    dr@135fch
		cmp     dword [dr@19bd60h], byte 0
		je      dr@2d044h
		mov     ecx, 390a3h
		mov     ebx, dr@1807cch
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a10fch]
		call    renderTextToBuffer
		mov     ecx, 390d9h
		mov     ebx, dr@1807e8h
		mov     edx, dr@185c0bh
		mov     eax, [dr@1a1108h]
		call    renderTextToBuffer
dr@2d044h:
		call    dr@23230h
		add     esp, byte 40h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
global dr@1821ech
dr@1821ech:
db	"Game not found.",0
dr@1821fch: ; 0.25
db	0,0,0,0,0,0,0d0h,3fh
dr@182204h: ; 0.2
db	9ah,99h,99h,99h,99h,99h,0c9h,3fh
%include "macros.inc"

    extern  ___MiniHeapRover
    extern  ___MiniHeapFreeRover
    extern  ___nheapbeg
    extern  __CEXT_F(free__clib3r)
    extern  __Extender
    extern  __X32VM
    extern  __curbrk
    extern  ___24f2deh
    extern  ___minreal
    extern  ___heap_enabled
    extern  __ExtenderSubtype
    extern  __amblksiz
    extern  __brk

%include "layout.inc"

section @text

__unlink:
		push    ecx
		push    edx
		push    esi
		mov     edx, [___MiniHeapRover]
		cmp     eax, edx
		jne     ___6ddfdh
		mov     edx, [edx+8]
		mov     [___MiniHeapRover], edx
___6ddfdh:
		cmp     eax, [___MiniHeapFreeRover]
		jne     ___6de0dh
		xor     ecx, ecx
		mov     [___MiniHeapFreeRover], ecx
___6de0dh:
		mov     esi, [___nheapbeg]
		cmp     eax, esi
		jne     ___6de20h
		mov     edx, [esi+8]
		mov     [___nheapbeg], edx
___6de20h:
		mov     edx, [eax+4]
		mov     eax, [eax+8]
		test    edx, edx
		je      ___6de2dh
		mov     [edx+8], eax
___6de2dh:
		test    eax, eax
		je      ___6de34h
		mov     [eax+4], edx
___6de34h:
		pop     esi
		pop     edx
		pop     ecx
		retn    
__FreeDPMIBlocks:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, [___nheapbeg]
___6de43h:
		test    edx, edx
		je      ___6e122h
		mov     eax, [edx+24h]
		mov     eax, [eax]
		mov     ebx, [edx]
		add     eax, byte 2ch
		cmp     eax, ebx
		jne     ___6de8fh
		lea     ebx, [edx-8]
		mov     eax, edx
		mov     ecx, [edx+8]
		call    __unlink
		mov     edx, ecx
		mov     ecx, [ebx+4]
		test    ecx, ecx
		jne     ___6de7fh
		mov     esi, [ebx]
		mov     di, [ebx]
		shr     esi, 10h
		mov     ah, 5
		mov     al, 2
		int     31h
		jmp     ___6de43h
___6de7fh:
		mov     eax, ecx
		push    es
		;mov     es, eax
		db	8eh,0c0h
		mov     ah, 49h
		int     21h
		rcl     eax, 1
		ror     eax, 1
		pop     es
		jmp     ___6de43h
___6de8fh:
		mov     edx, [edx+8]
		jmp     ___6de43h
__ReAllocDPMIBlock:
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		mov     ebx, eax
		mov     ebp, edx
		call    __FreeDPMIBlocks
		mov     edx, [___nheapbeg]
		jmp     ___6df83h
___6deadh:
		cmp     edx, ebx
		ja      ___6df8bh
		lea     eax, [edx+2ch]
		cmp     eax, ebx
		jne     ___6df80h
		cmp     dword [edx+18h], byte 1
		jne     ___6df80h
		mov     eax, edx
		call    __unlink
		lea     eax, [edx-8]
		cmp     dword [eax+4], byte 0
		jne     ___6df8bh
		mov     ecx, ebp
		mov     ebx, [ebx]
		mov     edx, [edx]
		sub     ebx, byte 4
		add     edx, byte 0ch
		sub     ecx, ebx
		add     edx, ecx
		add     edx, 0fffh
		xor     dl, dl
		and     dh, 0f0h
		mov     ebx, edx
		mov     ecx, edx
		shr     ebx, 10h
		mov     di, [eax]
		mov     si, [eax+2]
		mov     ah, 5
		mov     al, 3
		int     31h
		sbb     eax, eax
		inc     eax
		je      ___6df22h
		mov     ax, bx
		shl     eax, 10h
		mov     ax, cx
		mov     [eax], di
		mov     [eax+2], si
___6df22h:
		test    eax, eax
		je      ___6df8dh
		lea     ebx, [eax+8]
		sub     edx, byte 0ch
		inc     ebp
		mov     dword [eax+4], 0
		mov     eax, ebx
		mov     [ebx], edx
		call    __LinkUpNewMHeap
		mov     dword [ebx+18h], 1
		and     ebp, byte 0fffffffeh
		mov     edx, [eax]
		sub     edx, ebp
		mov     ecx, eax
		cmp     edx, byte 0ch
		jb      ___6df79h
		mov     esi, ebp
		or      si, byte 1
		mov     [eax], esi
		add     eax, ebp
		or      dl, 1
		mov     [eax], edx
		mov     edi, [ebx+18h]
		mov     dword [ebx+14h], 0ffffffffh
		inc     edi
		add     eax, byte 4
		mov     [ebx+18h], edi
		call    __CEXT_F(free__clib3r)
		jmp     ___6df7ch
___6df79h:
		or      byte [eax], 1
___6df7ch:
		mov     eax, ecx
		jmp     ___6df8dh
___6df80h:
		mov     edx, [edx+8]
___6df83h:
		test    edx, edx
		jne     ___6deadh
___6df8bh:
		xor     eax, eax
___6df8dh:
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
__LinkUpNewMHeap:
		push    ebx
		push    edx
		mov     edx, eax
		mov     eax, [___nheapbeg]
		xor     ebx, ebx
		jmp     ___6dfa9h
___6dfa0h:
		cmp     edx, eax
		jb      ___6dfadh
		mov     ebx, eax
		mov     eax, [eax+8]
___6dfa9h:
		test    eax, eax
		jne     ___6dfa0h
___6dfadh:
		mov     [edx+4], ebx
		mov     [edx+8], eax
		test    ebx, ebx
		je      ___6dfbch
		mov     [ebx+8], edx
		jmp     ___6dfc2h
___6dfbch:
		mov     [___nheapbeg], edx
___6dfc2h:
		test    eax, eax
		je      ___6dfc9h
		mov     [eax+4], edx
___6dfc9h:
		lea     ebx, [edx+20h]
		mov     eax, [edx]
		add     edx, byte 2ch
		mov     dword [edx-0ch], 0
		mov     dword [edx-1ch], 0
		mov     dword [edx-14h], 0
		mov     dword [edx-10h], 0
		mov     [edx-8], ebx
		mov     [edx-4], ebx
		sub     eax, byte 2ch
		mov     [edx-20h], ebx
		mov     [edx], eax
		mov     dword [edx+eax], 0ffffffffh
		mov     eax, edx
		pop     edx
		pop     ebx
		retn    
__LastFree:
		push    ebx
		push    edx
		mov     edx, [___nheapbeg]
		test    edx, edx
		je      ___6e052h
		mov     edx, [edx+24h]
		mov     eax, [edx]
		add     eax, edx
		lea     ebx, [eax+4]
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 2
		jl      ___6e045h
		cmp     eax, byte 8
		jg      ___6e045h
		cmp     byte [__X32VM], 0
		jne     ___6e045h
		xor     eax, eax
		;mov     ax, ds
		db	66h,8ch,0d8h
		lsl     eax, eax
		inc     eax
		mov     [__curbrk], eax
___6e045h:
		cmp     ebx, [__curbrk]
		jne     ___6e052h
		mov     eax, [edx]
		pop     edx
		pop     ebx
		retn    
___6e052h:
		xor     eax, eax
		pop     edx
		pop     ebx
		retn    
RationalAlloc:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    eax
		mov     ebx, [esp]
		mov     ecx, [esp]
		shr     ebx, 10h
		call    __FreeDPMIBlocks
		mov     ah, 5
		mov     al, 1
		int     31h
		sbb     eax, eax
		inc     eax
		je      ___6e086h
		mov     ax, bx
		shl     eax, 10h
		mov     ax, cx
		mov     [eax], di
		mov     [eax+2], si
___6e086h:
		test    eax, eax
		je      ___6e0a3h
		mov     ebx, [esp]
		lea     edx, [eax+8]
		sub     ebx, byte 8
		mov     [edx], ebx
		mov     dword [eax+4], 0
		mov     eax, edx
		jmp     ___6e11fh
___6e0a3h:
		test    word [___24f2deh], 0fff0h
		je      ___6e0b8h
		mov     dword [___minreal], 0fffffh
___6e0b8h:
		cmp     dword [esp], 10000h
		ja      ___6e11dh
		mov     ebx, [___minreal]
		shr     ebx, 4
		or      bl, 1
		mov     ah, 48h
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     edx, eax
		test    eax, eax
		jl      ___6e11dh
		mov     ebx, [esp]
		shr     ebx, 4
		mov     ah, 48h
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     esi, eax
		mov     ebx, eax
		mov     eax, edx
		push    es
		;mov     es, eax
		db	8eh,0c0h
		mov     ah, 49h
		int     21h
		rcl     eax, 1
		ror     eax, 1
		pop     es
		test    esi, esi
		jl      ___6e11dh
		mov     ah, 0
		mov     al, 6
		int     31h
		mov     eax, ecx
		shl     eax, 10h
		mov     ax, dx
		add     eax, byte 8
		mov     edx, [esp]
		mov     [eax-4], esi
		sub     edx, byte 8
		mov     [eax], edx
		jmp     ___6e11fh
___6e11dh:
		xor     eax, eax
___6e11fh:
		add     esp, byte 4
___6e122h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__CreateNewNHeap:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    eax
		cmp     dword [___heap_enabled], byte 0
		jne     ___6e13bh
___6e137h:
		xor     eax, eax
		jmp     ___6e11fh
___6e13bh:
		cmp     dword [__curbrk], byte 0fffffffeh
		je      ___6e137h
		mov     eax, esp
		call    __AdjustAmount
		test    eax, eax
		je      ___6e11fh
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 1
		jne     ___6e170h
		mov     eax, [esp]
		call    RationalAlloc
		mov     edx, eax
		test    eax, eax
		je      ___6e18bh
		mov     eax, [eax]
		mov     [esp], eax
		jmp     ___6e18bh
___6e170h:
		mov     ebx, [esp]
		mov     eax, 80004800h
		int     21h
		sbb     ebx, ebx
		not     ebx
		and     eax, ebx
		mov     ecx, [esp]
		sub     ecx, byte 4
		mov     edx, eax
		mov     [esp], ecx
___6e18bh:
		test    edx, edx
		je      ___6e137h
		mov     eax, [esp]
		mov     esi, [esp]
		sub     eax, byte 4
		cmp     eax, esi
		ja      ___6e137h
		mov     [esp], eax
		cmp     eax, byte 38h
		jb      ___6e137h
		mov     [edx], eax
		mov     eax, edx
		call    __LinkUpNewMHeap
		mov     ebx, eax
		mov     eax, [eax]
		mov     [esp], eax
		or      al, 1
		mov     [ebx], eax
		mov     edi, [edx+18h]
		mov     dword [edx+14h], 0ffffffffh
		inc     edi
		lea     eax, [ebx+4]
		mov     [edx+18h], edi
		call    __CEXT_F(free__clib3r)
		mov     eax, 1
		jmp     ___6e11fh
__GDECL(__ExpandDGROUP)
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    ebp
		push    eax
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 1
		jne     ___6e1f3h
		cmp     byte [__ExtenderSubtype], 0
		je      ___6e1ffh
___6e1f3h:
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 9
		jne     ___6e20ch
___6e1ffh:
		mov     eax, [esp]
		call    __CreateNewNHeap
		jmp     ___6e31bh
___6e20ch:
		cmp     dword [___heap_enabled], byte 0
		jne     ___6e21ch
___6e215h:
		xor     eax, eax
		jmp     ___6e31bh
___6e21ch:
		cmp     dword [__curbrk], byte 0fffffffeh
		je      ___6e215h
		mov     eax, esp
		call    __AdjustAmount
		test    eax, eax
		je      ___6e31bh
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 2
		jl      ___6e25ch
		cmp     eax, byte 8
		jg      ___6e25ch
		cmp     byte [__X32VM], 0
		jne     ___6e25ch
		xor     eax, eax
		;mov     ax, ds
		db	66h,8ch,0d8h
		lsl     eax, eax
		inc     eax
		mov     [__curbrk], eax
___6e25ch:
		mov     edx, [esp]
		mov     ecx, [__curbrk]
		add     edx, ecx
		cmp     edx, ecx
		jae     ___6e270h
		mov     edx, 0fffffffeh
___6e270h:
		mov     eax, edx
		call    __brk
		cmp     eax, byte 0ffffffffh
		je      ___6e215h
		mov     ebx, eax
		cmp     eax, byte 0fffffff8h
		ja      ___6e215h
		cmp     edx, eax
		jbe     ___6e215h
		sub     edx, eax
		mov     [esp], edx
		lea     eax, [edx-4]
		cmp     eax, edx
		ja      ___6e215h
		mov     edx, [___nheapbeg]
		mov     [esp], eax
		jmp     ___6e2b0h
___6e29eh:
		mov     ebp, [edx+8]
		test    ebp, ebp
		je      ___6e2b4h
		cmp     edx, ebx
		ja      ___6e2adh
		cmp     ebx, ebp
		jb      ___6e2b4h
___6e2adh:
		mov     edx, [edx+8]
___6e2b0h:
		test    edx, edx
		jne     ___6e29eh
___6e2b4h:
		test    edx, edx
		je      ___6e2deh
		mov     eax, [edx]
		lea     ecx, [ebx-4]
		add     eax, edx
		cmp     ecx, eax
		jne     ___6e2deh
		mov     esi, [esp]
		add     esi, byte 4
		mov     [esp], esi
		add     [edx], esi
		mov     ebp, [esp]
		mov     ebx, eax
		lea     ecx, [eax+ebp]
		mov     dword [ecx], 0ffffffffh
		jmp     ___6e2fdh
___6e2deh:
		cmp     dword [esp], byte 38h
		jb      ___6e215h
		mov     eax, [esp]
		mov     [ebx], eax
		mov     eax, ebx
		mov     edx, ebx
		call    __LinkUpNewMHeap
		mov     ebx, eax
		mov     eax, [eax]
		mov     [esp], eax
___6e2fdh:
		mov     eax, [esp]
		or      al, 1
		mov     [ebx], eax
		inc     dword [edx+18h]
		lea     eax, [ebx+4]
		mov     dword [edx+14h], 0ffffffffh
		call    __CEXT_F(free__clib3r)
		mov     eax, 1
___6e31bh:
		add     esp, byte 4
		pop     ebp
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__AdjustAmount:
		push    ebx
		push    edx
		push    esi
		mov     ebx, eax
		mov     edx, [eax]
		add     edx, byte 0bh
		and     dl, 0f8h
		test    edx, edx
		jne     ___6e33bh
___6e335h:
		xor     eax, eax
		pop     esi
		pop     edx
		pop     ebx
		retn    
___6e33bh:
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 1
		jne     ___6e350h
		cmp     byte [__ExtenderSubtype], 0
		je      ___6e35ch
___6e350h:
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 9
		jne     ___6e361h
___6e35ch:
		add     edx, byte 8
		jmp     ___6e368h
___6e361h:
		call    __LastFree
		sub     edx, eax
___6e368h:
		mov     [ebx], edx
		add     edx, byte 3ch
		cmp     edx, [ebx]
		jb      ___6e335h
		mov     esi, [__amblksiz]
		cmp     edx, esi
		jae     ___6e380h
		mov     edx, esi
		and     dl, 0feh
___6e380h:
		mov     [ebx], edx
		add     edx, 0fffh
		cmp     edx, [ebx]
		jb      ___6e335h
		xor     dl, dl
		and     dh, 0f0h
		mov     [ebx], edx
		test    edx, edx
		setnz   al
		and     eax, 0ffh
		pop     esi
		pop     edx
		pop     ebx
		retn    

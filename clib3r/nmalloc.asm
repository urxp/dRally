%include "macros.inc"

    extern  __MemAllocator
    extern  __ExpandDGROUP
    extern  __nmemneed
    extern  ___nheap_clean

%include "layout.inc"

section @text

__GDECL(__CEXT_F(malloc__clib3r))
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    es
		push    fs
		push    gs
		push    ebp
		sub     esp, byte 4
		mov     esi, eax
		test    eax, eax
		je      ___66440h
		cmp     eax, byte 0ffffffd4h
		jbe     ___66447h
___66440h:
		xor     eax, eax
		jmp     ___664fbh
___66447h:
		mov     ebp, ___nheapbeg
		lea     edi, [esi+3]
		xor     ah, ah
		xor     edx, edx
		mov     [esp], ah
		and     di, byte 0fffch
___6645ah:
		mov     eax, edi
		cmp     edi, byte 0ch
		jae     ___66466h
		mov     eax, 0ch
___66466h:
		cmp     eax, [___LargestSizeB4MiniHeapRover]
		jbe     ___66486h
		mov     ecx, [___MiniHeapRover]
		test    ecx, ecx
		jne     ___664beh
___66478h:
		mov     [___LargestSizeB4MiniHeapRover], ecx
		mov     ecx, [___nheapbeg]
		jmp     ___664beh
___66486h:
		xor     ecx, ecx
		jmp     ___66478h
___6648ah:
		;mov     edx, ds
		db	8ch,0dah
		mov     eax, ebp
		mov     [___MiniHeapRover], ecx
		and     edx, 0ffffh
		mov     ebx, ecx
		mov     eax, esi
		call    __MemAllocator
		mov     edx, eax
		test    eax, eax
		jne     ___664f1h
		mov     ebx, [___LargestSizeB4MiniHeapRover]
		mov     eax, [ecx+14h]
		cmp     eax, ebx
		jbe     ___664bbh
		mov     [___LargestSizeB4MiniHeapRover], eax
___664bbh:
		mov     ecx, [ecx+8]
___664beh:
		test    ecx, ecx
		jne     ___6648ah
		cmp     byte [esp], 0
		jne     ___664d3h
		mov     eax, esi
		call    __ExpandDGROUP
		test    eax, eax
		jne     ___664e8h
___664d3h:
		mov     eax, esi
		call    __nmemneed
		test    eax, eax
		je      ___664f1h
		xor     cl, cl
		mov     [esp], cl
		jmp     ___6645ah
___664e8h:
		mov     byte [esp], 1
		jmp     ___6645ah
___664f1h:
		xor     ch, ch
		mov     eax, edx
		mov     [___nheap_clean], ch
___664fbh:
		add     esp, byte 4
		pop     ebp
		pop     gs
		pop     fs
		pop     es
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    


section @data

__GDECL(___nheapbeg)
db	0,0,0,0
__GDECL(___MiniHeapRover)
db	0,0,0,0
__GDECL(___LargestSizeB4MiniHeapRover)
db	0,0,0,0

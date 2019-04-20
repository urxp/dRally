cpu 386

	extern	__MemAllocator
	extern	__ExpandDGROUP
	extern	__nmemneed
	extern	___nheap_clean

;tmp
    extern ___nheapbeg
    extern ___MiniHeapRover
    extern ___LargestSizeB4MiniHeapRover

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global malloc
malloc:
global _nmalloc
_nmalloc:
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
		je      short dr@66440h
		cmp     eax, byte 0ffffffd4h
		jbe     short dr@66447h
dr@66440h:
		xor     eax, eax
		jmp     near dr@664fbh
dr@66447h:
		mov     ebp, ___nheapbeg
		lea     edi, [esi+3]
		xor     ah, ah
		xor     edx, edx
		mov     [esp], ah
		and     di, byte 0fffch
dr@6645ah:
		mov     eax, edi
		cmp     edi, byte 0ch
		jae     short dr@66466h
		mov     eax, 0ch
dr@66466h:
		cmp     eax, [___LargestSizeB4MiniHeapRover]
		jbe     short dr@66486h
		mov     ecx, [___MiniHeapRover]
		test    ecx, ecx
		jne     short dr@664beh
dr@66478h:
		mov     [___LargestSizeB4MiniHeapRover], ecx
		mov     ecx, [___nheapbeg]
		jmp     short dr@664beh
dr@66486h:
		xor     ecx, ecx
		jmp     short dr@66478h
dr@6648ah:
		;mov     edx, ds
		db	8ch,0dah
		mov     eax, ebp
		mov     [___MiniHeapRover], ecx
		and     edx, 0ffffh
		mov     ebx, ecx
		mov     eax, esi
		call    near __MemAllocator
		mov     edx, eax
		test    eax, eax
		jne     short dr@664f1h
		mov     ebx, [___LargestSizeB4MiniHeapRover]
		mov     eax, [ecx+14h]
		cmp     eax, ebx
		jbe     short dr@664bbh
		mov     [___LargestSizeB4MiniHeapRover], eax
dr@664bbh:
		mov     ecx, [ecx+8]
dr@664beh:
		test    ecx, ecx
		jne     short dr@6648ah
		cmp     byte [esp], 0
		jne     short dr@664d3h
		mov     eax, esi
		call    near __ExpandDGROUP
		test    eax, eax
		jne     short dr@664e8h
dr@664d3h:
		mov     eax, esi
		call    near __nmemneed
		test    eax, eax
		je      short dr@664f1h
		xor     cl, cl
		mov     [esp], cl
		jmp     near dr@6645ah
dr@664e8h:
		mov     byte [esp], 1
		jmp     near dr@6645ah
dr@664f1h:
		xor     ch, ch
		mov     eax, edx
		mov     [___nheap_clean], ch
dr@664fbh:
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


;SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
;global	___nheapbeg
;___nheapbeg:
;    db	0, 0, 0, 0
;global	___MiniHeapRover
;___MiniHeapRover:
;    db	0, 0, 0, 0
;global	___LargestSizeB4MiniHeapRover
;___LargestSizeB4MiniHeapRover:
;    db	0, 0, 0, 0
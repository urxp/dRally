cpu 386

    extern	___nheapbeg
    extern	__MemFree
    extern	___MiniHeapRover
    extern	___LargestSizeB4MiniHeapRover
    extern	___nheap_clean

;tmp
    extern ___MiniHeapFreeRover

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global free
global _nfree
free:
_nfree:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    ebp
		mov     esi, eax
		test    eax, eax
		je      near dr@66586h
		mov     ecx, [___MiniHeapFreeRover]
		test    ecx, ecx
		je      short dr@6652ch
		cmp     ecx, eax
		ja      short dr@6652ch
		cmp     eax, [ecx+8]
		jb      short dr@66546h
dr@6652ch:
		mov     ecx, [___nheapbeg]
		jmp     short dr@6653fh
dr@66534h:
		cmp     ecx, esi
		ja      short dr@6653ch
		cmp     esi, ebx
		jb      short dr@66546h
dr@6653ch:
		mov     ecx, [ecx+8]
dr@6653fh:
		mov     ebx, [ecx+8]
		test    ebx, ebx
		jne     short dr@66534h
dr@66546h:
		mov     eax, ___nheapbeg
		;mov     edx, ds
		db	8ch,0dah
		and     edx, 0ffffh
		mov     ebx, ecx
		mov     eax, esi
		call    near __MemFree
		mov     ebp, [___MiniHeapRover]
		mov     [___MiniHeapFreeRover], ecx
		cmp     ecx, ebp
		jae     short dr@6657eh
		mov     eax, [___LargestSizeB4MiniHeapRover]
		mov     edx, [ecx+14h]
		cmp     edx, eax
		jbe     short dr@6657eh
		mov     [___LargestSizeB4MiniHeapRover], edx
dr@6657eh:
		xor     ah, ah
		mov     [___nheap_clean], ah
dr@66586h:
		pop     ebp
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn   

;SEGMENT _BSS    PUBLIC USE32 ALIGN=4 CLASS=BSS
;global ___MiniHeapFreeRover
;___MiniHeapFreeRover:
;    resb    4
%include "macros.inc"

    extern  ___nheapbeg
    extern  __MemFree
    extern  ___MiniHeapRover
    extern  ___LargestSizeB4MiniHeapRover
    extern  ___nheap_clean

%include "layout.inc"

section @text

__GDECL(__CEXT_F(free__clib3r))
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    ebp
		mov     esi, eax
		test    eax, eax
		je      ___66586h
		mov     ecx, [___MiniHeapFreeRover]
		test    ecx, ecx
		je      ___6652ch
		cmp     ecx, eax
		ja      ___6652ch
		cmp     eax, [ecx+8]
		jb      ___66546h
___6652ch:
		mov     ecx, [___nheapbeg]
		jmp     ___6653fh
___66534h:
		cmp     ecx, esi
		ja      ___6653ch
		cmp     esi, ebx
		jb      ___66546h
___6653ch:
		mov     ecx, [ecx+8]
___6653fh:
		mov     ebx, [ecx+8]
		test    ebx, ebx
		jne     ___66534h
___66546h:
		mov     eax, ___nheapbeg
		;mov     edx, ds
		db	8ch,0dah
		and     edx, 0ffffh
		mov     ebx, ecx
		mov     eax, esi
		call    __MemFree
		mov     ebp, [___MiniHeapRover]
		mov     [___MiniHeapFreeRover], ecx
		cmp     ecx, ebp
		jae     ___6657eh
		mov     eax, [___LargestSizeB4MiniHeapRover]
		mov     edx, [ecx+14h]
		cmp     edx, eax
		jbe     ___6657eh
		mov     [___LargestSizeB4MiniHeapRover], edx
___6657eh:
		xor     ah, ah
		mov     [___nheap_clean], ah
___66586h:
		pop     ebp
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    


section @bss

__GDECL(___MiniHeapFreeRover)
    resb	4
%include "macros.inc"

    extern  __Extender
	extern  memset__clib3r

%include "layout.inc"

section @text

__GDECL(_FastMap)
		push    ebx
		push    ecx
		push    esi
		push    es
		push    fs
		enter   14h, 0
		mov     ecx, eax
		mov     esi, edx
		movsx   eax, dx
		lea     edx, [ebp-14h]
		lea     eax, [eax+eax*2]
		call    near _RMAlloc
		test    ax, ax
		je      near ___7d4d6h
		lfs     eax, [ebp-12h]
		xor     edx, edx
		mov     [ebp-4], eax
		push    fs
		pop     es
		jmp     short ___7d4a7h
___7d468h:
		mov     eax, [ecx]
		mov     [ebp-0ch], eax
		and     eax, 0ff0000h
		shr     eax, 10h
		mov     [ebp-8], eax
		movsx   eax, dx
		lea     eax, [eax+eax*2]
		add     eax, [ebp-4]
		mov     bl, [ebp-8]
		mov     [es:eax+2], bl
		mov     ebx, [ebp-0ch]
		xor     bl, bl
		movzx   ebx, bx
		sar     ebx, 8
		mov     [ebp-8], ebx
		mov     bl, [ebp-8]
		add     ecx, byte 4
		mov     [es:eax+1], bl
		mov     bl, [ebp-0ch]
		inc     edx
		mov     [es:eax], bl
___7d4a7h:
		cmp     dx, si
		jl      short ___7d468h
		push    byte 0
		movsx   eax, word [ebp-14h]
		mov     edx, 1012h
		push    eax
		movsx   ecx, si
		push    byte 0
		xor     ebx, ebx
		mov     eax, 10h
		call    near _RMInterrupt
		lea     eax, [ebp-14h]
		call    near _RMFree
		mov     eax, 1
___7d4d6h:
		leave   
		pop     fs
		pop     es
		pop     esi
		pop     ecx
		pop     ebx
		retn    
__GDECL(_RMAlloc)
		push    ebx
		push    ecx
		mov     ecx, edx
		add     eax, byte 0fh
		cdq     
		shl     edx, 4
		sbb     eax, edx
		sar     eax, 4
		movzx   edx, byte [__Extender]
		cmp     edx, byte 1
		jne     short ___7d52fh
		mov     ebx, eax
		mov     ax, 100h
		int     31h
		jae     short ___7d50ah
		sub     ax, ax
		sub     dx, dx
___7d50ah:
		shl     eax, 10h
		mov     ax, dx
		mov     edx, eax
		test    eax, eax
		je      short ___7d55fh
		mov     dword [ecx+2], 0
		shr     eax, 10h
		mov     [ecx+6], dx
		mov     [ecx], ax
___7d527h:
		mov     eax, 1
		pop     ecx
		pop     ebx
		retn    
___7d52fh:
		cmp     edx, byte 2
		jl      short ___7d55fh
		cmp     edx, byte 8
		jg      short ___7d55fh
		mov     ebx, eax
		mov     ax, 25c0h
		int     21h
		jae     short ___7d546h
		sub     ax, ax
___7d546h:
		test    ax, ax
		je      short ___7d561h
		mov     [ecx], ax
		movzx   eax, ax
		mov     word [ecx+6], 34h
		shl     eax, 4
		mov     [ecx+2], eax
		jmp     short ___7d527h
___7d55fh:
		xor     eax, eax
___7d561h:
		pop     ecx
		pop     ebx
		retn    
__GDECL(_RMFree)
		push    ebx
		push    ecx
		push    edx
		movzx   edx, byte [__Extender]
		cmp     edx, byte 1
		jne     short ___7d586h
		mov     dx, [eax+6]
		mov     eax, [eax+2]
		mov     ebx, edx
		mov     ax, 101h
		int     31h
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___7d586h:
		mov     cx, [eax]
		mov     ax, 25c1h
		int     21h
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__GDECL(_RMInterrupt)
		push    esi
		push    edi
		push    es
		push    fs
		enter   48h, 0
		push    eax
		mov     edi, edx
		mov     esi, ebx
		movzx   eax, byte [__Extender]
		cmp     eax, byte 1
		jne     short ___7d5fah
		mov     ebx, 32h
		lea     eax, [ebp-48h]
		xor     edx, edx
		call    near memset__clib3r
		movsx   eax, di
		mov     [ebp-2ch], eax
		movsx   eax, si
		push    ds
		pop     es
		mov     [ebp-38h], eax
		movsx   eax, cx
		xor     bh, bh
		mov     [ebp-30h], eax
		movsx   eax, word [ebp+18h]
		lea     edi, [ebp-48h]
		mov     [ebp-34h], eax
		mov     eax, [ebp+1ch]
		mov     bl, [ebp-4ch]
		mov     [ebp-26h], ax
		movsx   eax, word [ebp+20h]
		xor     ecx, ecx
		mov     [ebp-48h], eax
		mov     ax, 300h
		int     31h
		mov     ebx, [ebp-2ch]
		jmp     short ___7d641h
___7d5fah:
		mov     ebx, 12h
		lea     eax, [ebp-14h]
		xor     edx, edx
		call    near memset__clib3r
		movsx   ecx, cx
		mov     eax, [ebp-4ch]
		lea     edx, [ebp-14h]
		mov     [ebp-14h], ax
		movsx   eax, di
		movsx   ebx, si
		mov     [ebp-0ah], eax
		movsx   eax, word [ebp+18h]
		push    ds
		pop     fs
		mov     [ebp-6], eax
		mov     eax, [ebp+1ch]
		movsx   edi, word [ebp+20h]
		mov     [ebp-10h], ax
		push    ds
		push    fs
		pop     ds
		mov     ax, 2511h
		int     21h
		pop     ds
		mov     ebx, eax
___7d641h:
		mov     eax, ebx
		leave   
		pop     fs
		pop     es
		pop     edi
		pop     esi
		ret     0ch
__GDECL(_RMInterrupt2)
		push    ebx
		push    ecx
		push    edi
		push    es
		push    fs
		enter   48h, 0
		push    eax
		mov     ecx, edx
		movzx   eax, byte [__Extender]
		cmp     eax, byte 1
		jne     short ___7d698h
		mov     ebx, 32h
		lea     eax, [ebp-48h]
		xor     edx, edx
		lea     edi, [ebp-48h]
		call    near memset__clib3r
		movsx   eax, cx
		xor     bh, bh
		push    ds
		pop     es
		mov     bl, [ebp-4ch]
		xor     ecx, ecx
		mov     [ebp-2ch], eax
		mov     ax, 300h
		int     31h
		movzx   eax, word [ebp-24h]
		shl     eax, 4
		add     eax, [ebp-44h]
		jmp     short ___7d6d1h
___7d698h:
		mov     ebx, 12h
		lea     eax, [ebp-14h]
		xor     edx, edx
		call    near memset__clib3r
		mov     eax, [ebp-4ch]
		lea     edx, [ebp-14h]
		mov     [ebp-14h], ax
		movsx   eax, cx
		push    ds
		pop     fs
		mov     [ebp-0ah], eax
		push    ds
		push    esi
		push    fs
		pop     ds
		mov     ax, 2511h
		int     21h
		sub     eax, eax
		;mov     ax, ds
		db	66h,8ch,0d8h
		shl     eax, 4
		add     eax, esi
		pop     esi
		pop     ds
___7d6d1h:
		leave   
		pop     fs
		pop     es
		pop     edi
		pop     ecx
		pop     ebx
		retn    

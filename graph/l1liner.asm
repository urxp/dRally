cpu 386

    extern	_L0LineClip_
    extern	__CurrColor
    extern	__LineStyle
    extern	_StartDevice_
    extern	__ConfigBuffer
    extern	__PlotAct
    extern	__Screen
    extern	_L0DrawLine_
    extern	_ResetDevice_

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _L1SLine_
_L1SLine_:
		push    ebp
		mov     ebp, esp
		push    eax
		push    edx
		push    ebx
		push    ecx
		lea     ecx, [ebp-10h]
		lea     ebx, [ebp-0ch]
		lea     edx, [ebp-8]
		lea     eax, [ebp-4]
		call    near _L0LineClip_
		test    ax, ax
		jne     short dr@7bd1ch
		push    0ffffh
		movsx   ecx, word [ebp-10h]
		movsx   ebx, word [ebp-0ch]
		movsx   eax, word [__CurrColor]
		movsx   edx, word [ebp-8]
		push    eax
		movsx   eax, word [ebp-4]
		call    near _L0Line_
dr@7bd1ch:
		leave   
		retn    
global _L1Line_
_L1Line_:
		push    esi
		push    edi
		enter   4, 0
		push    eax
		push    edx
		push    ebx
		push    ecx
		lea     ecx, [ebp-14h]
		lea     ebx, [ebp-10h]
		mov     edi, eax
		mov     [ebp-4], edx
		lea     edx, [ebp-0ch]
		lea     eax, [ebp-8]
		mov     si, [__LineStyle]
		call    near _L0LineClip_
		test    ax, ax
		jne     near dr@7bdc9h
		movzx   eax, si
		cmp     eax, dword 0ffffh
		je      short dr@7bd9fh
		cmp     di, [ebp-8]
		jne     short dr@7bd67h
		mov     eax, [ebp-0ch]
		cmp     ax, [ebp-4]
		je      short dr@7bd9fh
dr@7bd67h:
		movsx   edx, word [ebp-8]
		movsx   eax, di
		sub     edx, eax
		mov     eax, edx
		cdq     
		xor     eax, edx
		sub     eax, edx
		movsx   edx, word [ebp-0ch]
		mov     ebx, eax
		mov     ecx, eax
		movsx   eax, word [ebp-4]
		sub     edx, eax
		mov     eax, edx
		cdq     
		xor     eax, edx
		sub     eax, edx
		cmp     bx, ax
		jge     short dr@7bd93h
		mov     ecx, eax
dr@7bd93h:
		xor     ch, ch
		mov     eax, esi
		and     cl, 0fh
		rol     ax, cl
		mov     esi, eax
dr@7bd9fh:
		movsx   ecx, word [ebp-14h]
		movzx   eax, si
		movsx   ebx, word [ebp-10h]
		push    eax
		movsx   eax, word [__CurrColor]
		movsx   edx, word [ebp-0ch]
		push    eax
		movsx   eax, word [ebp-8]
		call    near _L0Line_
		mov     eax, 1
		leave   
		pop     edi
		pop     esi
		retn    
dr@7bdc9h:
		xor     eax, eax
		leave   
		pop     edi
		pop     esi
		retn    
_L0Line_:
		push    esi
		push    edi
		enter   0ch, 0
		mov     esi, eax
		mov     edi, edx
		mov     [ebp-8], ebx
		mov     [ebp-4], ecx
		call    near _StartDevice_
		mov     ecx, [__ConfigBuffer+16h]
		movsx   ebx, word [__PlotAct]
		movsx   edx, dx
		mov     eax, [ecx+ebx*4+24h]
		movsx   ebx, word [ebp+10h]
		mov     [ebp-0ch], eax
		movsx   eax, si
		call    dword [ecx+10h]
		mov     eax, [ebp-8]
		sub     eax, esi
		test    ax, ax
		jge     short dr@7be16h
		neg     eax
		mov     ebx, [ecx+18h]
		jmp     short dr@7be19h
dr@7be16h:
		mov     ebx, [ecx+20h]
dr@7be19h:
		mov     edx, [ebp-4]
		sub     edx, edi
		test    dx, dx
		jge     short dr@7be2ah
		neg     edx
		mov     ecx, [ecx+14h]
		jmp     short dr@7be2dh
dr@7be2ah:
		mov     ecx, [ecx+1ch]
dr@7be2dh:
		mov     edi, edx
		mov     esi, eax
		add     edi, edx
		add     esi, eax
		cmp     ax, dx
		jge     short dr@7be63h
		push    dword [ebp-0ch]
		push    ebx
		push    ecx
		movsx   eax, si
		push    eax
		movsx   eax, di
		mov     dx, [__Screen+4]
		push    eax
		movsx   eax, word [__Screen+8]
		movsx   ebx, word [__Screen+6]
		push    eax
		movsx   ecx, word [ebp+14h]
		jmp     short dr@7be8ah
dr@7be63h:
		push    dword [ebp-0ch]
		push    ecx
		push    ebx
		movsx   eax, di
		push    eax
		movsx   eax, si
		mov     dx, [__Screen+4]
		push    eax
		movsx   eax, word [__Screen+8]
		movsx   ecx, word [ebp+14h]
		push    eax
		movsx   ebx, word [__Screen+6]
dr@7be8ah:
		mov     eax, [__Screen]
		call    near _L0DrawLine_
		call    near _ResetDevice_
		leave   
		pop     edi
		pop     esi
		ret     8
%include "macros.inc"

    extern  _L0LineClip
    extern  __CurrColor
    extern  __LineStyle
    extern  _StartDevice
    extern  __ConfigBuffer
    extern  __PlotAct
    extern  __Screen
    extern  _L0DrawLine
    extern  _ResetDevice


%include "layout.inc"

section @text

__GDECL(_L1SLine)
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
		call    near _L0LineClip
		test    ax, ax
		jne     short ___7bd1ch
		push    0ffffh
		movsx   ecx, word [ebp-10h]
		movsx   ebx, word [ebp-0ch]
		movsx   eax, word [__CurrColor]
		movsx   edx, word [ebp-8]
		push    eax
		movsx   eax, word [ebp-4]
		call    near _L0Line
___7bd1ch:
		leave   
		retn    
__GDECL(_L1Line)
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
		call    near _L0LineClip
		test    ax, ax
		jne     near ___7bdc9h
		movzx   eax, si
		cmp     eax, dword 0ffffh
		je      short ___7bd9fh
		cmp     di, [ebp-8]
		jne     short ___7bd67h
		mov     eax, [ebp-0ch]
		cmp     ax, [ebp-4]
		je      short ___7bd9fh
___7bd67h:
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
		jge     short ___7bd93h
		mov     ecx, eax
___7bd93h:
		xor     ch, ch
		mov     eax, esi
		and     cl, 0fh
		rol     ax, cl
		mov     esi, eax
___7bd9fh:
		movsx   ecx, word [ebp-14h]
		movzx   eax, si
		movsx   ebx, word [ebp-10h]
		push    eax
		movsx   eax, word [__CurrColor]
		movsx   edx, word [ebp-0ch]
		push    eax
		movsx   eax, word [ebp-8]
		call    near _L0Line
		mov     eax, 1
		leave   
		pop     edi
		pop     esi
		retn    
___7bdc9h:
		xor     eax, eax
		leave   
		pop     edi
		pop     esi
		retn    
_L0Line:
		push    esi
		push    edi
		enter   0ch, 0
		mov     esi, eax
		mov     edi, edx
		mov     [ebp-8], ebx
		mov     [ebp-4], ecx
		call    near _StartDevice
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
		jge     short ___7be16h
		neg     eax
		mov     ebx, [ecx+18h]
		jmp     short ___7be19h
___7be16h:
		mov     ebx, [ecx+20h]
___7be19h:
		mov     edx, [ebp-4]
		sub     edx, edi
		test    dx, dx
		jge     short ___7be2ah
		neg     edx
		mov     ecx, [ecx+14h]
		jmp     short ___7be2dh
___7be2ah:
		mov     ecx, [ecx+1ch]
___7be2dh:
		mov     edi, edx
		mov     esi, eax
		add     edi, edx
		add     esi, eax
		cmp     ax, dx
		jge     short ___7be63h
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
		jmp     short ___7be8ah
___7be63h:
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
___7be8ah:
		mov     eax, [__Screen]
		call    near _L0DrawLine
		call    near _ResetDevice
		leave   
		pop     edi
		pop     esi
		ret     8

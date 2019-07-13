%include "macros.inc"

    extern  __CHK
    
    extern  __CEXT_V(MENU_BPA)
    extern  __CEXT_V(pal_menu)
    extern  __CEXT_V(Pal8to24_0)
    extern  __CEXT_V(Pal8to24_1)

    extern  __CEXT_F(read__bpa)

%include "layout.inc"

section @text

;; 12940h
__GDECL(__CEXT_F(loadMenuPalette))
		push    320h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 304h
		mov     ebx, __CEXT_V(pal_menu)
		mov     edx, esp
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		xor     edx, edx
		xor     ecx, ecx
		mov     [esp+300h], edx
___12972h:
		mov     esi, [esp+300h]
		lea     esi, [esi+esi*2]
		xor     eax, eax
		mov     al, [esp+esi]
		movzx   ebp, byte [esp+esi+1]
		movzx   edi, byte [esp+esi+2]
		mov     esi, eax
		mov     ebx, 640000h
		shl     esi, 10h
		shl     ebp, 10h
		mov     edx, esi
		shl     edi, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, 640000h
		mov     edx, ebp
		mov     [ecx+__CEXT_V(Pal8to24_1)], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, 640000h
		mov     edx, edi
		mov     [ecx+__CEXT_V(Pal8to24_1)+4], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, 640000h
		mov     edx, esi
		mov     [ecx+__CEXT_V(Pal8to24_1)+8], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, 640000h
		mov     edx, ebp
		mov     [ecx+__CEXT_V(Pal8to24_0)], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, 640000h
		mov     edx, edi
		mov     [ecx+__CEXT_V(Pal8to24_0)+4], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [esp+300h]
		add     ecx, byte 0ch
		inc     ebx
		mov     [ecx+__CEXT_V(Pal8to24_0)-4], eax
		mov     [esp+300h], ebx
		cmp     ebx, 100h
		jl      ___12972h
		add     esp, 304h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

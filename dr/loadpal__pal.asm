%include "macros.inc"

    extern  __CHK
    extern  __CEXT_V(MENU_BPA)
    extern  __CEXT_F(read__bpa)
    extern  __CEXT_V(Pal8to24_1)

%include "layout.inc"

section @text

;; 3d154h
__GDECL(__CEXT_F(loadPalette))
		push    31ch
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 300h
		mov     edx, esp
		mov     ebx, eax
		xor     esi, esi
		mov     eax, __CEXT_V(MENU_BPA)
		xor     ecx, ecx
		call    __CEXT_F(read__bpa)
		mov     ebp, 640000h
___3d181h:
		lea     edi, [esi+esi*2]
		xor     edx, edx
		mov     dl, [esp+edi]
		mov     ebx, ebp
		shl     edx, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		xor     edx, edx
		add     ecx, byte 0ch
		mov     dl, [esp+edi+1]
		mov     ebx, ebp
		shl     edx, 10h
		mov     [ecx+__CEXT_V(Pal8to24_1)-0ch], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		xor     edx, edx
		inc     esi
		mov     dl, [esp+edi+2]
		mov     ebx, ebp
		shl     edx, 10h
		mov     [ecx+__CEXT_V(Pal8to24_1)-8], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     [ecx+__CEXT_V(Pal8to24_1)-4], eax
		cmp     esi, 100h
		jl      ___3d181h
		add     esp, 300h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

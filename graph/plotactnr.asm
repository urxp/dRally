%include "macros.inc"

    extern  __PlotAct

%include "layout.inc"

section @text

___7bc50h:
dd	___7bc77h
dd	___7bc7dh
dd	___7bc83h
dd	___7bc89h

__GDECL(_getplotaction)
		mov     ax, [__PlotAct]
		cmp     ax, word 3
		ja      short ___7bc77h
		movzx   eax, ax
		jmp     near dword [cs:eax*4+___7bc50h]
___7bc77h:
		mov     eax, 3
		retn    
___7bc7dh:
		mov     eax, 4
		retn    
___7bc83h:
		mov     eax, 1
		retn    
___7bc89h:
		xor     eax, eax
		retn    
__GDECL(_setplotaction)
		push    edx
		mov     edx, eax
		call    near _getplotaction
		cmp     dx, byte 1
		jb      short ___7bcaah
		jbe     short ___7bcbch
		cmp     dx, byte 3
		jbe     short ___7bcd2h
		cmp     dx, byte 4
		je      short ___7bcb1h
		jmp     short ___7bcd2h
___7bcaah:
		test    dx, dx
		je      short ___7bcc7h
		jmp     short ___7bcd2h
___7bcb1h:
		mov     word [__PlotAct], 1
		pop     edx
		retn    
___7bcbch:
		mov     word [__PlotAct], 2
		pop     edx
		retn    
___7bcc7h:
		mov     word [__PlotAct], 3
		pop     edx
		retn    
___7bcd2h:
		mov     word [__PlotAct], 0
		pop     edx
		retn    

cpu 386

	extern	__PlotAct

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

dr@7bc50h:
dd	dr@7bc77h
dd	dr@7bc7dh
dd	dr@7bc83h
dd	dr@7bc89h

global _getplotaction_
_getplotaction_:
		mov     ax, [__PlotAct]
		cmp     ax, word 3
		ja      short dr@7bc77h
		movzx   eax, ax
		jmp     near dword [cs:eax*4+dr@7bc50h]
dr@7bc77h:
		mov     eax, 3
		retn    
dr@7bc7dh:
		mov     eax, 4
		retn    
dr@7bc83h:
		mov     eax, 1
		retn    
dr@7bc89h:
		xor     eax, eax
		retn   
global _setplotaction_
_setplotaction_:
		push    edx
		mov     edx, eax
		call    near _getplotaction_
		cmp     dx, byte 1
		jb      short dr@7bcaah
		jbe     short dr@7bcbch
		cmp     dx, byte 3
		jbe     short dr@7bcd2h
		cmp     dx, byte 4
		je      short dr@7bcb1h
		jmp     short dr@7bcd2h
dr@7bcaah:
		test    dx, dx
		je      short dr@7bcc7h
		jmp     short dr@7bcd2h
dr@7bcb1h:
		mov     word [__PlotAct], 1
		pop     edx
		retn    
dr@7bcbch:
		mov     word [__PlotAct], 2
		pop     edx
		retn    
dr@7bcc7h:
		mov     word [__PlotAct], 3
		pop     edx
		retn    
dr@7bcd2h:
		mov     word [__PlotAct], 0
		pop     edx
		retn 
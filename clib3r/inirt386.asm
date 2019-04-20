cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __InitRtns
__InitRtns:
		push    esi
		push    edi
		push    ebx
		push    edx
		push    es
		mov     edx, eax
dr@6719dh:
		;mov     esi, L$13
		db	3eh,0beh
		dd	L$13
		;mov     edi, L$14
		db	3eh,0bfh
		dd	L$14
		mov     ebx, edi
		mov     al, dl
dr@671adh:
		cmp     esi, edi
		jae     short dr@671c5h
		cmp     byte [esi], 2
		je      short dr@671c0h
		cmp     [esi+1], al
		ja      short dr@671c0h
		mov     ebx, esi
		mov     al, [esi+1]
dr@671c0h:
		add     esi, byte 6
		jmp     short dr@671adh
dr@671c5h:
		cmp     ebx, edi
		je      short dr@671dbh
		mov     eax, [ebx+2]
		or      eax, eax
		je      short dr@671d6h
		push    ds
		pop     es
		push    edx
		call    eax
		pop     edx
dr@671d6h:
		mov     byte [ebx], 2
		jmp     short dr@6719dh
dr@671dbh:
		pop     es
		pop     edx
		pop     ebx
		pop     edi
		pop     esi
		retn    
global __FiniRtns
__FiniRtns:
		push    esi
		push    edi
		push    ebx
		push    es
		mov     dh, dl
		mov     dl, al
dr@671e9h:
		;mov     esi, L$15
		db	3eh,0beh
		dd	L$15
		;mov     edi, L$16
		db	3eh,0bfh
		dd	L$16
		mov     ebx, edi
		mov     al, dl
dr@671f9h:
		cmp     esi, edi
		jae     short dr@67211h
		cmp     byte [esi], 2
;26:00067200
		je      short dr@6720ch
		cmp     al, [esi+1]
		ja      short dr@6720ch
		mov     ebx, esi
		mov     al, [esi+1]
dr@6720ch:
		add     esi, byte 6
		jmp     short dr@671f9h
dr@67211h:
		cmp     ebx, edi
		je      short dr@6722bh
		cmp     al, dh
		ja      short dr@67226h
		mov     eax, [ebx+2]
		or      eax, eax
		je      short dr@67226h
		push    ds
		pop     es
		push    edx
		call    eax
		pop     edx
dr@67226h:
		mov     byte [ebx], 2
		jmp     short dr@671e9h
dr@6722bh:
		pop     es
		pop     ebx
		pop     edi
		pop     esi
		retn
        

SEGMENT XIB     PUBLIC USE32 ALIGN=2 CLASS=DATA
L$13:
SEGMENT XI      PUBLIC USE32 ALIGN=2 CLASS=DATA
SEGMENT XIE     PUBLIC USE32 ALIGN=2 CLASS=DATA
L$14:
SEGMENT YIB     PUBLIC USE32 ALIGN=2 CLASS=DATA
L$15:
SEGMENT YI      PUBLIC USE32 ALIGN=2 CLASS=DATA
SEGMENT YIE     PUBLIC USE32 ALIGN=2 CLASS=DATA
L$16:
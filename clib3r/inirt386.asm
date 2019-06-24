%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(__InitRtns)
		push    esi
		push    edi
		push    ebx
		push    edx
		push    es
		mov     edx, eax
___6719dh:
		;mov     esi, L$1
		db	3eh,0beh
		dd	L$1
		;mov     edi, L$2
		db	3eh,0bfh
		dd	L$2
		mov     ebx, edi
		mov     al, dl
___671adh:
		cmp     esi, edi
		jae     ___671c5h
		cmp     byte [esi], 2
		je      ___671c0h
		cmp     [esi+1], al
		ja      ___671c0h
		mov     ebx, esi
		mov     al, [esi+1]
___671c0h:
		add     esi, byte 6
		jmp     ___671adh
___671c5h:
		cmp     ebx, edi
		je      ___671dbh
		mov     eax, [ebx+2]
		or      eax, eax
		je      ___671d6h
		push    ds
		pop     es
		push    edx
		call    eax
		pop     edx
___671d6h:
		mov     byte [ebx], 2
		jmp     ___6719dh
___671dbh:
		pop     es
		pop     edx
		pop     ebx
		pop     edi
		pop     esi
		retn 
__GDECL(__FiniRtns)
		push    esi
		push    edi
		push    ebx
		push    es
		mov     dh, dl
		mov     dl, al
___671e9h:
		;mov     esi, L$3
		db	3eh,0beh
		dd	L$3
		;mov     edi, L$4
		db	3eh,0bfh
		dd	L$4
		mov     ebx, edi
		mov     al, dl
___671f9h:
		cmp     esi, edi
		jae     ___67211h
		cmp     byte [esi], 2
		je      ___6720ch
		cmp     al, [esi+1]
		ja      ___6720ch
		mov     ebx, esi
		mov     al, [esi+1]
___6720ch:
		add     esi, byte 6
		jmp     ___671f9h
___67211h:
		cmp     ebx, edi
		je      ___6722bh
		cmp     al, dh
		ja      ___67226h
		mov     eax, [ebx+2]
		or      eax, eax
		je      ___67226h
		push    ds
		pop     es
		push    edx
		call    eax
		pop     edx
___67226h:
		mov     byte [ebx], 2
		jmp     ___671e9h
___6722bh:
		pop     es
		pop     ebx
		pop     edi
		pop     esi
		retn    


section @xib
L$1:
section @xie
L$2:
section @yib
L$3:
section @yie
L$4:

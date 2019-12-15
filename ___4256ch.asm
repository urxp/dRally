cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243d80h

section .text

__GDECL(___4256ch)
		push    20h
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     ebp, [esp+24h]
		mov     [esp], eax
		mov     [esp+0ch], edx
		mov     [esp+8], ebx
		mov     edi, ecx
		mov     eax, edx
		imul    eax, ebx
		mov     [esp+4], eax
		test    ecx, ecx
		jge     short ___4259ch
		xor     edi, ecx
___4259ch:
		test    edi, edi
		jl      near ___42637h
		cmp     edi, byte 0ah
		jge     near ___42637h
		mov     ebx, [esp+28h]
		test    ebx, ebx
		jle     short ___425f5h
		mov     esi, [esp+4]
		imul    esi, [esp+20h]
		mov     edx, [esp]
		sub     ebp, ebx
		mov     ebx, [___243d80h]
		mov     ecx, [esp+8]
		add     ebx, ebp
		add     esi, edx
		mov     edx, [esp+0ch]
___425d5h:
		mov     ch, dl
___425d7h:
		mov     al, [esi]
		or      al, al
		je      short ___425dfh
		mov     [ebx], al
___425dfh:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___425d7h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___425d5h
		add     ebp, [esp+0ch]
___425f5h:
		mov     esi, [esp+20h]
		mov     ecx, [esp+4]
		add     esi, edi
		imul    esi, ecx
		mov     eax, [esp]
		mov     ebx, [___243d80h]
		mov     edx, [esp+0ch]
		add     ebx, ebp
		mov     ecx, [esp+8]
		add     esi, eax
___42617h:
		mov     ch, dl
___42619h:
		mov     al, [esi]
		or      al, al
		je      short ___42621h
		mov     [ebx], al
___42621h:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___42619h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___42617h
		add     ebp, [esp+0ch]
___42637h:
		cmp     edi, byte 9
		jle     near ___426feh
		cmp     edi, byte 64h
		jge     near ___426feh
		mov     ebx, [esp+28h]
		test    ebx, ebx
		jle     short ___42656h
		lea     eax, [ebx+ebx*1]
		sub     ebp, eax
___42656h:
		mov     esi, [esp+28h]
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		add     ebp, esi
		mov     esi, 0ah
		idiv    esi
		mov     edx, [esp+20h]
		mov     ecx, [esp+4]
		add     eax, edx
		imul    eax, ecx
		mov     ebx, [___243d80h]
		add     ebx, ebp
		mov     esi, [esp]
		mov     edx, [esp+0ch]
		mov     ecx, [esp+8]
		add     esi, eax
___4268ch:
		mov     ch, dl
___4268eh:
		mov     al, [esi]
		or      al, al
		je      short ___42696h
		mov     [ebx], al
___42696h:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___4268eh
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___4268ch
		mov     esi, [esp+0ch]
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		add     ebp, esi
		mov     esi, 0ah
		idiv    esi
		mov     eax, [esp+20h]
		mov     ecx, [esp+4]
		add     edx, eax
		imul    edx, ecx
		mov     ebx, [___243d80h]
		add     ebx, ebp
		mov     esi, [esp]
		mov     ecx, [esp+8]
		add     esi, edx
		mov     edx, [esp+0ch]
___426deh:
		mov     ch, dl
___426e0h:
		mov     al, [esi]
		or      al, al
		je      short ___426e8h
		mov     [ebx], al
___426e8h:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___426e0h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___426deh
		add     ebp, [esp+0ch]
___426feh:
		cmp     edi, byte 63h
		jle     near ___42819h
		cmp     edi, 3e8h
		jge     near ___42819h
		mov     eax, [esp+2ch]
		mov     edx, edi
		mov     esi, 64h
		sar     edx, 1fh
		add     ebp, eax
		mov     eax, edi
		idiv    esi
		mov     edx, [esp+20h]
		mov     esi, [esp+4]
		add     eax, edx
		imul    esi, eax
		mov     ebx, [___243d80h]
		mov     ecx, [esp]
		add     ebx, ebp
		mov     edx, [esp+0ch]
		add     esi, ecx
		mov     ecx, [esp+8]
___42749h:
		mov     ch, dl
___4274bh:
		mov     al, [esi]
		or      al, al
		je      short ___42753h
		mov     [ebx], al
___42753h:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___4274bh
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___42749h
		mov     ebx, 64h
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    ebx
		add     ebp, [esp+0ch]
		mov     esi, 0ah
		mov     edi, edx
		mov     eax, edx
		sar     edx, 1fh
		idiv    esi
		mov     edx, [esp+20h]
		mov     esi, [esp+4]
		add     eax, edx
		imul    esi, eax
		mov     ebx, [___243d80h]
		mov     ecx, [esp]
		add     ebx, ebp
		mov     edx, [esp+0ch]
		add     esi, ecx
		mov     ecx, [esp+8]
___427a7h:
		mov     ch, dl
___427a9h:
		mov     al, [esi]
		or      al, al
		je      short ___427b1h
		mov     [ebx], al
___427b1h:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___427a9h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___427a7h
		mov     esi, [esp+0ch]
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		add     ebp, esi
		mov     esi, 0ah
		idiv    esi
		mov     edi, [esp+20h]
		mov     eax, [esp+4]
		add     edx, edi
		imul    edx, eax
		mov     ecx, [esp+8]
		mov     ebx, [___243d80h]
		mov     esi, [esp]
		add     ebx, ebp
		add     esi, edx
		mov     edx, [esp+0ch]
___427f9h:
		mov     ch, dl
___427fbh:
		mov     al, [esi]
		or      al, al
		je      short ___42803h
		mov     [ebx], al
___42803h:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___427fbh
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___427f9h
		add     ebp, [esp+0ch]
___42819h:
		mov     eax, ebp
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		ret     10h

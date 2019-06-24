%include "macros.inc"

    extern  _FtoS

%include "layout.inc"

section @text

__GDECL(_EFG_Format)
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     esi, eax
		mov     edi, ebx
		mov     eax, edx
		;mov     ebx, ds
		db	8ch,0dbh
		mov     dword [edi+0ch], 0
		mov     ecx, esi
		mov     dl, [edi+15h]
		xor     ebp, ebp
		cmp     dl, 47h
		jb      ___7840dh
		jbe     ___7841ah
		cmp     dl, 66h
		jb      ___78403h
		jbe     ___7842fh
		cmp     dl, 67h
		je      ___7841ah
		jmp     ___784ach
___78403h:
		cmp     dl, 65h
		je      ___7842ah
		jmp     ___784ach
___7840dh:
		cmp     dl, 45h
		jb      ___784ach
		jbe     ___7842ah
		jmp     ___7842fh
___7841ah:
		cmp     dword [edi+8], byte 0
		jne     ___78427h
		mov     dword [edi+8], 1
___78427h:
		sub     dl, 2
___7842ah:
		mov     ebp, 1
___7842fh:
		mov     ecx, [eax]
		add     ecx, byte 8
		mov     [eax], ecx
		mov     eax, [ecx-8]
		mov     [esp], eax
		mov     eax, [ecx-4]
		mov     [esp+4], eax
		cmp     dword [edi+8], byte 0ffffffffh
		jne     ___78450h
		mov     dword [edi+8], 6
___78450h:
		mov     al, [edi+15h]
		and     al, 5fh
		and     eax, 0ffh
		push    eax
		xor     eax, eax
		mov     al, dl
		push    eax
		push    byte 3
		push    ebp
		mov     ebx, [edi+8]
		xor     ecx, ecx
		push    0ffh
		lea     edx, [esp+14h]
		mov     eax, esi
		call    _FtoS
		xor     eax, eax
		mov     al, [esi]
		cmp     eax, byte 2ah
		jne     ___78485h
		mov     byte [edi+16h], 2ah
___78485h:
		mov     byte [esi+0ffh], 0
___7848ch:
		xor     eax, eax
		mov     al, [esi]
		cmp     eax, byte 20h
		jne     ___78498h
		inc     esi
		jmp     ___7848ch
___78498h:
		mov     edx, edi
		mov     eax, esi
		call    forcedecpt
		;mov     ebx, ds
		db	8ch,0dbh
		mov     ecx, esi
		mov     dword [edi+8], 0ffffffffh
___784ach:
		mov     edx, ebx
		mov     eax, ecx
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
forcedecpt:
		push    ebx
		mov     ebx, edx
		mov     dl, [edx+14h]
		and     dl, 1
		and     edx, 0ffh
		jne     ___78515h
___784c9h:
		cmp     byte [eax], 0
		je      ___784dfh
		xor     edx, edx
		mov     dl, [eax]
		cmp     edx, byte 65h
		je      ___784dfh
		cmp     edx, byte 45h
		je      ___784dfh
		inc     eax
		jmp     ___784c9h
___784dfh:
		mov     edx, eax
		mov     bl, [ebx+15h]
		and     ebx, 0ffh
		dec     eax
		cmp     ebx, byte 47h
		je      ___784f5h
		cmp     ebx, byte 67h
		jne     ___78501h
___784f5h:
		xor     ebx, ebx
		mov     bl, [eax]
		cmp     ebx, byte 30h
		jne     ___78501h
		dec     eax
		jmp     ___784f5h
___78501h:
		xor     ebx, ebx
		mov     bl, [eax]
		cmp     ebx, byte 2eh
		je      ___7850bh
		inc     eax
___7850bh:
		mov     bl, [edx]
		inc     edx
		mov     [eax], bl
		inc     eax
		test    bl, bl
		jne     ___7850bh
___78515h:
		pop     ebx
		retn    

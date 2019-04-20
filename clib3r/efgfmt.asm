cpu 386

	extern	_FtoS

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _EFG_Format
_EFG_Format:
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
		jb      short dr@7840dh
		jbe     short dr@7841ah
		cmp     dl, 66h
		jb      short dr@78403h
		jbe     short dr@7842fh
		cmp     dl, 67h
		je      short dr@7841ah
		jmp     near dr@784ach
dr@78403h:
		cmp     dl, 65h
		je      short dr@7842ah
		jmp     near dr@784ach
dr@7840dh:
		cmp     dl, 45h
		jb      near dr@784ach
		jbe     short dr@7842ah
		jmp     short dr@7842fh
dr@7841ah:
		cmp     dword [edi+8], byte 0
		jne     short dr@78427h
		mov     dword [edi+8], 1
dr@78427h:
		sub     dl, 2
dr@7842ah:
		mov     ebp, 1
dr@7842fh:
		mov     ecx, [eax]
		add     ecx, byte 8
		mov     [eax], ecx
		mov     eax, [ecx-8]
		mov     [esp], eax
		mov     eax, [ecx-4]
		mov     [esp+4], eax
		cmp     dword [edi+8], byte 0ffffffffh
		jne     short dr@78450h
		mov     dword [edi+8], 6
dr@78450h:
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
		call    near _FtoS
		xor     eax, eax
		mov     al, [esi]
		cmp     eax, byte 2ah
		jne     short dr@78485h
		mov     byte [edi+16h], 2ah
dr@78485h:
		mov     byte [esi+0ffh], 0
dr@7848ch:
		xor     eax, eax
		mov     al, [esi]
		cmp     eax, byte 20h
		jne     short dr@78498h
		inc     esi
		jmp     short dr@7848ch
dr@78498h:
		mov     edx, edi
		mov     eax, esi
		call    near forcedecpt
		;mov     ebx, ds
		db	8ch,0dbh
		mov     ecx, esi
		mov     dword [edi+8], 0ffffffffh
dr@784ach:
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
		jne     short dr@78515h
dr@784c9h:
		cmp     byte [eax], 0
		je      short dr@784dfh
		xor     edx, edx
		mov     dl, [eax]
		cmp     edx, byte 65h
		je      short dr@784dfh
		cmp     edx, byte 45h
		je      short dr@784dfh
		inc     eax
		jmp     short dr@784c9h
dr@784dfh:
		mov     edx, eax
		mov     bl, [ebx+15h]
		and     ebx, 0ffh
		dec     eax
		cmp     ebx, byte 47h
		je      short dr@784f5h
		cmp     ebx, byte 67h
		jne     short dr@78501h
dr@784f5h:
		xor     ebx, ebx
		mov     bl, [eax]
		cmp     ebx, byte 30h
		jne     short dr@78501h
		dec     eax
		jmp     short dr@784f5h
dr@78501h:
		xor     ebx, ebx
		mov     bl, [eax]
		cmp     ebx, byte 2eh
		je      short dr@7850bh
		inc     eax
dr@7850bh:
		mov     bl, [edx]
		inc     edx
		mov     [eax], bl
		inc     eax
		test    bl, bl
		jne     short dr@7850bh
dr@78515h:
		pop     ebx
		retn
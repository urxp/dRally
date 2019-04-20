cpu 386

    extern	fgetc
    extern	ungetc
    extern	__scnf

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

cget_file:
		push    ebx
		push    ecx
		push    edx
		mov     edx, eax
		mov     eax, [eax+8]
		cmp     dword [eax+4], byte 0
		jle     short dr@663abh
		test    byte [eax+0ch], 4
		jne     short dr@663abh
		mov     ebx, [eax]
		mov     bl, [ebx]
		and     ebx, 0ffh
		cmp     ebx, byte 0dh
		je      short dr@663abh
		cmp     ebx, byte 1ah
		jne     short dr@663b5h
dr@663abh:
		mov     eax, [edx+8]
		call    near fgetc
		jmp     short dr@663c6h
dr@663b5h:
		dec     dword [eax+4]
		mov     eax, [edx+8]
		mov     ebx, [eax]
		lea     ecx, [ebx+1]
		mov     [eax], ecx
		xor     eax, eax
		mov     al, [ebx]
dr@663c6h:
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		jne     short dr@663d1h
		or      byte [edx+10h], 2
dr@663d1h:
		mov     eax, ebx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
uncget_file:
		mov     edx, [edx+8]
		jmp     near ungetc
global vfscanf
vfscanf:
		push    ecx
		push    esi
		sub     esp, byte 14h
		mov     ecx, cget_file
		mov     esi, uncget_file
		mov     [esp+8], eax
		mov     eax, esp
		mov     [esp], ecx
		mov     [esp+4], esi
		call    near __scnf
;26:00066400
		add     esp, byte 14h
		pop     esi
		pop     ecx
		retn    
global fscanf
fscanf:
		push    ebx
		push    edx
		sub     esp, byte 4
		lea     eax, [esp+18h]
		mov     ebx, esp
		mov     edx, [esp+14h]
		mov     [esp], eax
		mov     eax, [esp+10h]
		call    near vfscanf
		add     esp, byte 4
		pop     edx
		pop     ebx
		retn
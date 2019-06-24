%include "macros.inc"

    extern  fgetc
    extern  ungetc
    extern  __scnf

%include "layout.inc"

section @text

cget_file:
		push    ebx
		push    ecx
		push    edx
		mov     edx, eax
		mov     eax, [eax+8]
		cmp     dword [eax+4], byte 0
		jle     ___663abh
		test    byte [eax+0ch], 4
		jne     ___663abh
		mov     ebx, [eax]
		mov     bl, [ebx]
		and     ebx, 0ffh
		cmp     ebx, byte 0dh
		je      ___663abh
		cmp     ebx, byte 1ah
		jne     ___663b5h
___663abh:
		mov     eax, [edx+8]
		call    fgetc
		jmp     ___663c6h
___663b5h:
		dec     dword [eax+4]
		mov     eax, [edx+8]
		mov     ebx, [eax]
		lea     ecx, [ebx+1]
		mov     [eax], ecx
		xor     eax, eax
		mov     al, [ebx]
___663c6h:
		mov     ebx, eax
		cmp     eax, byte 0ffffffffh
		jne     ___663d1h
		or      byte [edx+10h], 2
___663d1h:
		mov     eax, ebx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
uncget_file:
		mov     edx, [edx+8]
		jmp     ungetc
__GDECL(vfscanf)
		push    ecx
		push    esi
		sub     esp, byte 14h
		mov     ecx, cget_file
		mov     esi, uncget_file
		mov     [esp+8], eax
		mov     eax, esp
		mov     [esp], ecx
		mov     [esp+4], esi
		call    __scnf
		add     esp, byte 14h
		pop     esi
		pop     ecx
		retn    
__GDECL(__CEXT_F(fscanf__clib3r))
		push    ebx
		push    edx
		sub     esp, byte 4
		lea     eax, [esp+18h]
		mov     ebx, esp
		mov     edx, [esp+14h]
		mov     [esp], eax
		mov     eax, [esp+10h]
		call    vfscanf
		add     esp, byte 4
		pop     edx
		pop     ebx
		retn    

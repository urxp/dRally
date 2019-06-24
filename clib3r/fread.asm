%include "macros.inc"

    extern  __set_errno__clib3r
    extern  __ioalloc__clib3r
    extern  __qread
    extern  __fill_buffer

%include "layout.inc"

section @text

__GDECL(__CEXT_F(fread__clib3r))
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		push    eax
		push    edx
		mov     ebp, ecx
		test    byte [ecx+0ch], 1
		jne     ___6421ch
		mov     eax, 4
		call    __set_errno__clib3r
		mov     dh, [ecx+0ch]
		or      dh, 20h
		xor     eax, eax
		mov     [ecx+0ch], dh
		jmp     ___643c6h
___6421ch:
		imul    ebx, edx
		test    ebx, ebx
		jne     ___6422ah
		mov     eax, ebx
		jmp     ___643c6h
___6422ah:
		cmp     dword [ecx+8], byte 0
		jne     ___64237h
		mov     eax, ebp
		call    __ioalloc__clib3r
___64237h:
		xor     esi, esi
		mov     dl, [ebp+0ch]
		mov     [esp+8], esi
		test    dl, 40h
		je      ___64347h
		mov     [esp+0ch], ebx
___6424dh:
		mov     edx, [ebp+4]
		test    edx, edx
		je      ___642a8h
		mov     ebx, [esp+0ch]
		cmp     edx, ebx
		jbe     ___6425eh
		mov     edx, ebx
___6425eh:
		mov     edi, [esp+4]
		mov     ecx, edx
		mov     esi, [ebp+0]
		mov     ebx, [esp+8]
		push    es
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		pop     es
		mov     eax, [esp+0ch]
		mov     ecx, [ebp+0]
		lea     esi, [edi+edx]
		add     ebx, edx
		mov     [esp+4], esi
		mov     [esp+8], ebx
		mov     edi, [ebp+4]
		add     ecx, edx
		sub     eax, edx
		sub     edi, edx
		mov     [ebp+0], ecx
		mov     [esp+0ch], eax
		mov     [ebp+4], edi
___642a8h:
		mov     ecx, [esp+0ch]
		test    ecx, ecx
		je      ___643bbh
		cmp     ecx, [ebp+14h]
		jae     ___642c3h
		test    byte [ebp+0dh], 4
		je      ___64333h
___642c3h:
		mov     dword [ebp+4], 0
		mov     ebx, [esp+0ch]
		mov     eax, [ebp+8]
		mov     cl, [ebp+0dh]
		mov     [ebp+0], eax
		test    cl, 4
		jne     ___642e9h
		cmp     ebx, 200h
		jbe     ___642e9h
		xor     bl, bl
		and     bh, 0feh
___642e9h:
		mov     edx, [esp+4]
		mov     eax, [ebp+10h]
		call    __qread
		cmp     eax, byte 0ffffffffh
		jne     ___64303h
		or      byte [ebp+0ch], 20h
		jmp     ___643bbh
___64303h:
		test    eax, eax
		jne     ___64310h
___64307h:
		or      byte [ebp+0ch], 10h
		jmp     ___643bbh
___64310h:
		mov     edx, [esp+4]
		mov     ebx, [esp+0ch]
		mov     ecx, [esp+8]
		add     edx, eax
		sub     ebx, eax
		add     ecx, eax
		mov     [esp+4], edx
		mov     [esp+0ch], ebx
		mov     [esp+8], ecx
		jmp     ___6424dh
___64333h:
		mov     eax, ebp
		call    __fill_buffer
		test    eax, eax
		je      ___643bbh
		jmp     ___6424dh
___64347h:
		mov     edx, [esp+4]
		add     ebx, edx
___6434dh:
		cmp     dword [ebp+4], byte 0
		jne     ___6435eh
		mov     eax, ebp
		call    __fill_buffer
		test    eax, eax
		je      ___643bbh
___6435eh:
		mov     ecx, [ebp+4]
		mov     eax, [ebp+0]
		dec     ecx
		lea     esi, [eax+1]
		mov     [ebp+4], ecx
		mov     [ebp+0], esi
		mov     al, [eax]
		and     eax, 0ffh
		cmp     eax, byte 0dh
		jne     ___643a2h
		cmp     dword [ebp+4], byte 0
		jne     ___6438bh
		mov     eax, ebp
		call    __fill_buffer
		test    eax, eax
		je      ___643bbh
___6438bh:
		mov     edi, [ebp+4]
		mov     eax, [ebp+0]
		dec     edi
		lea     esi, [eax+1]
		mov     [ebp+4], edi
		mov     [ebp+0], esi
		mov     al, [eax]
		and     eax, 0ffh
___643a2h:
		cmp     eax, byte 1ah
		je      ___64307h
		mov     [edx], al
		mov     eax, [esp+8]
		inc     eax
		inc     edx
		mov     [esp+8], eax
		cmp     edx, ebx
		jne     ___6434dh
___643bbh:
		mov     eax, [esp+8]
		mov     esi, [esp]
		xor     edx, edx
		div     esi
___643c6h:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		retn    

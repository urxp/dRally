cpu 386
%include "macros.inc"

section .text

__GDECL(__MOVS)
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
        retn

__GDECL(__STRCPY)
		push    edi
___10261h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___10279h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___10261h
___10279h:
		pop     edi
        retn

__GDECL(__STRCAT)
        push    ecx     ;;;;; added
		push    edi
		sub     ecx, ecx
		dec     ecx
		mov     al, 0
		repne scasb   
		dec     edi
___10367h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___1037fh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___10367h
___1037fh:
		pop     edi
        pop     ecx     ;;;;; added
        retn

__GDECL(__STRLEN)
        push    edi     ;;;;; added
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
        pop     edi     ;;;;; added
        retn



__GDECL(DISPLAY_WAIT_IF_DISABLED)
		mov     dx, 3dah
.disabled:
		in      al, dx
		and     al, 1
		jne     .disabled
		retn
		
__GDECL(DISPLAY_WAIT_IF_ENABLED)
		mov     dx, 3dah
.enabled:
		in      al, dx
		and     al, 1
		je      .enabled
		retn

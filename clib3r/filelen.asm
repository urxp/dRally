%include "macros.inc"

    extern  lseek__clib3r

%include "layout.inc"

section @text

__GDECL(__CEXT_F(filelength__clib3r))
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     ecx, eax
		mov     ebx, 1
		xor     edx, edx
		call    lseek__clib3r
		mov     esi, eax
		cmp     eax, byte 0ffffffffh
		je      ___66338h
		mov     ebx, 2
		mov     eax, ecx
		xor     edx, edx
		call    lseek__clib3r
		mov     edi, eax
		mov     edx, esi
		xor     ebx, ebx
		mov     eax, ecx
		call    lseek__clib3r
		mov     eax, edi
___66338h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

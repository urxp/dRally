%include "macros.inc"

    extern  __CHK
    extern  ___19bd54h
    extern  ___19bd20h
    extern  stricmp__clib3r

%include "layout.inc"

section @text

__GDECL(__CEXT_F(chkarg__dr))
		push    18h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     esi, eax
		mov     ebx, 1
		cmp     ebx, [___19bd54h]
		jge     ___10056h
		mov     ecx, 4
___10033h:
		mov     eax, esi
		mov     edx, [ecx+___19bd20h]
		call    stricmp__clib3r
		test    eax, eax
		jne     ___10048h
		mov     eax, ebx
		jmp     ___10058h
___10048h:
		mov     edi, [___19bd54h]
		inc     ebx
		add     ecx, 4
		cmp     ebx, edi
		jl      ___10033h
___10056h:
		xor     eax, eax
___10058h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn

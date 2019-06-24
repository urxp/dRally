%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(frexp)
		push    eax
		push    ebx
		push    ecx
		push    edx
		sub     esp, byte 8
		mov     eax, [esp+1ch]
		mov     ecx, [esp+1ch]
		mov     [esp], eax
		mov     eax, [esp+20h]
		xor     edx, edx
		mov     [esp+4], eax
		test    eax, 7fffffffh
		jne     ___7ec7bh
		test    ecx, ecx
		je      ___7ecb0h
___7ec7bh:
		mov     edx, [esp+6]
		and     edx, 7ff0h
		mov     ebx, [esp+6]
		and     edx, 0ffffh
		and     ebx, 800fh
		sar     edx, 4
		mov     ecx, ebx
		mov     [esp+6], bx
		or      ecx, 3fe0h
		sub     edx, 3feh
		mov     [esp+6], cx
___7ecb0h:
		mov     eax, [esp+24h]
		fld     qword [esp]
		mov     [eax], edx
		add     esp, byte 8
		pop     edx
		pop     ecx
		pop     ebx
		pop     eax
		ret     0ch

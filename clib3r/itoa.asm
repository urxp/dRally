%include "macros.inc"
%include "layout.inc"

section @text

___65d58h:
db	30h,31h,32h,33h,34h,35h,36h,37h,38h,39h,61h,62h,63h,64h,65h,66h
db	67h,68h,69h,6ah,6bh,6ch,6dh,6eh,6fh,70h,71h,72h,73h,74h,75h,76h
db	77h,78h,79h,7ah,0
__GDECL(utoa)
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 28h
		mov     ebp, edx
		mov     edi, ebx
		mov     esi, edx
		xor     dl, dl
		lea     ecx, [esp+1]
		mov     [esp], dl
___65d93h:
		lea     ebx, [esp+24h]
		mov     [esp+24h], edi
		xor     edx, edx
		div     dword [ebx]
		mov     [ebx], eax
		mov     al, [cs:edx+___65d58h]
		mov     [ecx], al
		mov     eax, [esp+24h]
		inc     ecx
		test    eax, eax
		jne     ___65d93h
___65db3h:
		dec     ecx
		mov     al, [ecx]
		mov     [esi], al
		inc     esi
		test    al, al
		jne     ___65db3h
		mov     eax, ebp
		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
__GDECL(itoa)
		push    ecx
		mov     ecx, edx
		cmp     ebx, byte 0ah
		jne     ___65dd9h
		test    eax, eax
		jge     ___65dd9h
		neg     eax
		mov     byte [edx], 2dh
		inc     edx
___65dd9h:
		call    utoa
		mov     eax, ecx
		pop     ecx
		retn    

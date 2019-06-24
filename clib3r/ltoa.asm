%include "macros.inc"
%include "layout.inc"

section @text

_Alphabet:
db	30h,31h,32h,33h,34h,35h,36h,37h,38h,39h,61h,62h,63h,64h,65h,66h
db	67h,68h,69h,6ah,6bh,6ch,6dh,6eh,6fh,70h,71h,72h,73h,74h,75h,76h
db	77h,78h,79h,7ah,0
__GDECL(ultoa)
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
___78177h:
		lea     ebx, [esp+24h]
		mov     [esp+24h], edi
		xor     edx, edx
		div     dword [ebx]
		mov     [ebx], edx
		mov     edx, [esp+24h]
		mov     dl, [cs:edx+_Alphabet]
		mov     [ecx], dl
		inc     ecx
		test    eax, eax
		jne     ___78177h
___78197h:
		dec     ecx
		mov     al, [ecx]
		mov     [esi], al
		inc     esi
		test    al, al
		jne     ___78197h
		mov     eax, ebp
		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
__GDECL(ltoa)
		push    ecx
		mov     ecx, edx
		cmp     ebx, byte 0ah
		jne     ___781bdh
		test    eax, eax
		jge     ___781bdh
		neg     eax
		mov     byte [edx], 2dh
		inc     edx
___781bdh:
		call    ultoa
		mov     eax, ecx
		pop     ecx
		retn    

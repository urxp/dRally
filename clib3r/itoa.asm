cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE
_Alphabet:
    db  "0123456789"
    db  "abcdefghijklmnopqrstuvwxyz"
    db  0

global utoa
utoa:
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
dr@65d93h:
		lea     ebx, [esp+24h]
		mov     [esp+24h], edi
		xor     edx, edx
		div     dword [ebx]
		mov     [ebx], eax
		mov     al, [cs:edx+_Alphabet]
		mov     [ecx], al
		mov     eax, [esp+24h]
		inc     ecx
		test    eax, eax
		jne     short dr@65d93h
dr@65db3h:
		dec     ecx
		mov     al, [ecx]
		mov     [esi], al
		inc     esi
		test    al, al
		jne     short dr@65db3h
		mov     eax, ebp
		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn   
global _itoa
_itoa:
global itoa
itoa:
		push    ecx
		mov     ecx, edx
		cmp     ebx, byte 0ah
		jne     short dr@65dd9h
		test    eax, eax
		jge     short dr@65dd9h
		neg     eax
		mov     byte [edx], 2dh
		inc     edx
dr@65dd9h:
		call    near utoa
		mov     eax, ecx
		pop     ecx
		retn
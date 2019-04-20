cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

_Alphabet:
    db  "0123456789"
    db  "abcdefghijklmnopqrstuvwxyz"
    db  0

global ultoa
ultoa:
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
dr@78177h:
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
		jne     short dr@78177h
dr@78197h:
		dec     ecx
		mov     al, [ecx]
		mov     [esi], al
		inc     esi
		test    al, al
		jne     short dr@78197h
		mov     eax, ebp
		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
global _ltoa
_ltoa:
global ltoa
ltoa:
		push    ecx
		mov     ecx, edx
		cmp     ebx, byte 0ah
		jne     short dr@781bdh
		test    eax, eax
		jge     short dr@781bdh
		neg     eax
		mov     byte [edx], 2dh
		inc     edx
dr@781bdh:
		call    near ultoa
		mov     eax, ecx
		pop     ecx
		retn
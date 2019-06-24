%include "macros.inc"



%include "layout.inc"

section @text

__GDECL(__CmpBigInt)
		push    edi
		push    ecx
		call    ___7e481h
		inc     eax
		lea     edi, [edi+eax*8]
		mov     ecx, [edx]
		mov     edx, [edx+4]
		sub     eax, eax
___7e384h:
		cmp     edx, [cs:edi]
		jne     ___7e38dh
		cmp     ecx, [cs:edi+4]
___7e38dh:
		jb      ___7e395h
		add     edi, byte 8
		inc     eax
		jmp     ___7e384h
___7e395h:
		sub     edi, byte 8
___7e398h:
		cmp     edx, [cs:edi]
		jne     ___7e3a1h
		cmp     ecx, [cs:edi+4]
___7e3a1h:
		jae     ___7e3a9h
		sub     edi, byte 8
		dec     eax
		jmp     ___7e398h
___7e3a9h:
		pop     ecx
		pop     edi
		retn    
__GDECL(__Rnd2Int)
		push    ebx
		push    ecx
		push    edx
		push    ebp
		push    esi
		push    edx
		mov     ebp, eax
		mov     ecx, [ebp+0]
		mov     ebx, [ebp+4]
		mov     ebp, ebx
		and     ebp, 0fff00000h
		xor     ebx, ebp
		xor     ebx, 100000h
		shr     ebp, 14h
		sub     ebp, 433h
		je      ___7e40ah
		jbe     ___7e3e0h
___7e3d7h:
		shl     ecx, 1
		rcl     ebx, 1
		dec     ebp
		jne     ___7e3d7h
		jmp     ___7e40ah
___7e3e0h:
		sub     eax, eax
		sub     esi, esi
___7e3e4h:
		shr     ebx, 1
		rcr     ecx, 1
		rcr     eax, 1
		adc     esi, esi
		inc     ebp
		jne     ___7e3e4h
		cmp     eax, dword 80000000h
		jb      ___7e40ah
		jne     ___7e404h
		or      esi, esi
		jne     ___7e404h
		test    ecx, 1
		je      ___7e40ah
___7e404h:
		add     ecx, byte 1
		adc     ebx, byte 0
___7e40ah:
		pop     ebp
		mov     [ebp+0], ecx
		mov     [ebp+4], ebx
		pop     esi
		pop     ebp
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__GDECL(__Bin2String)
		push    ebp
		push    edi
		push    ecx
		push    ebx
		mov     ebp, eax
		mov     ecx, [ebp+0]
		mov     eax, [ebp+4]
		mov     ebp, edx
		add     ebp, ebx
		mov     byte [ebp+0], 0
		push    eax
___7e42ch:
		pop     eax
		mov     edi, 2710h
		sub     edx, edx
		or      eax, eax
		jne     ___7e43fh
		or      ecx, ecx
		jne     ___7e441h
		push    eax
		jmp     ___7e457h
___7e43fh:
		div     edi
___7e441h:
		xchg    ecx, eax
		div     edi
		xchg    ecx, eax
		push    eax
		mov     eax, edx
		mov     dl, 64h
		div     dl
		mov     dl, ah
		mov     ah, 0
		aam     0ah
		xchg    edx, eax
		mov     ah, 0
		aam     0ah
___7e457h:
		add     ax, 3030h
		add     dx, 3030h
		sub     ebp, byte 4
		mov     [ebp+3], al
		dec     ebx
		je      ___7e47bh
		mov     [ebp+2], ah
		dec     ebx
		je      ___7e47bh
		mov     [ebp+1], dl
		dec     ebx
		je      ___7e47bh
		mov     [ebp+0], dh
		dec     ebx
		jne     ___7e42ch
___7e47bh:
		pop     eax
		pop     ebx
		pop     ecx
		pop     edi
		pop     ebp
		retn    
___7e481h:
		call    ___7e536h
db	0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0
db	0,0,0,0,0ah,0,0,0,0,0,0,0,64h,0,0,0
db	0,0,0,0,0e8h,3,0,0,0,0,0,0,10h,27h,0,0
db	0,0,0,0,0a0h,86h,1,0,0,0,0,0,40h,42h,0fh,0
db	0,0,0,0,80h,96h,98h,0,0,0,0,0,0,0e1h,0f5h,5
db	0,0,0,0,0,0cah,9ah,3bh,2,0,0,0,0,0e4h,0bh,54h
db	17h,0,0,0,0,0e8h,76h,48h,0e8h,0,0,0,0,10h,0a5h,0d4h
db	18h,9,0,0,0,0a0h,72h,4eh,0f3h,5ah,0,0,0,40h,7ah,10h
db	7eh,8dh,3,0,0,80h,0c6h,0a4h,0f2h,86h,23h,0,0,0,0c1h,6fh
db	78h,45h,63h,1,0,0,8ah,5dh,0b3h,0b6h,0e0h,0dh,0,0,64h,0a7h
db	4,23h,0c7h,8ah,0,0,0e8h,89h,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh
___7e536h:
		pop     edi
		retn    

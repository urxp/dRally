cpu 386

	extern	_GetStackLow_
	extern	__ErrorStatus

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _L0DrawLine_
_L0DrawLine_:
		push    esi
		push    edi
		push    es
		enter   28h, 0
		mov     esi, [ebp+28h]
		mov     [ebp-14h], edx
		mov     [ebp-18h], eax
		mov     [ebp-0ch], ebx
		mov     [ebp-10h], ecx
		mov     eax, [ebp+24h]
		mov     al, [eax-1]
		mov     [ebp-4], al
		mov     eax, [ebp+20h]
		mov     dl, [esi-1]
		mov     al, [eax-1]
		movzx   bx, byte [ebp-4]
		mov     [ebp-8], al
		movzx   ax, dl
		add     ebx, eax
		movzx   ax, byte [ebp-8]
		add     eax, ebx
		add     eax, 1ch
		and     al, 0fch
		mov     ecx, eax
		mov     eax, esp
		mov     ebx, eax
		call    near _GetStackLow_
		sub     ebx, eax
		movsx   eax, cx
		sub     ebx, eax
		cmp     ebx, 100h
		ja      short dr@7da57h
		mov     word [__ErrorStatus], 0fffbh
		jmp     near dr@7dba1h
dr@7da57h:
		add     eax, byte 3
		and     al, 0fch
		sub     esp, eax
		mov     eax, esp
		movsx   ecx, word [ebp-10h]
		mov     ebx, eax
		mov     [ebp-1ch], eax
		mov     [ebp-28h], eax
		cmp     ecx, byte 0ffffffffh
		je      short dr@7da86h
		lea     ebx, [eax+1]
		mov     byte [eax], 66h
		mov     byte [ebx], 0d1h
		inc     ebx
		mov     byte [ebx], 0c3h
		inc     ebx
		mov     byte [ebx], 73h
		inc     ebx
		mov     [ebx], dl
		inc     ebx
dr@7da86h:
		movzx   eax, dl
		mov     [ebp-24h], eax
		;mov     edx, ds
		db	8ch,0dah
		mov     eax, ebx
		movzx   eax, dx
		mov     edi, ebx
		mov     [ebp-20h], eax
		;mov     edx, cs
		db	8ch,0cah
		mov     eax, esi
		mov     ecx, [ebp-24h]
		movzx   eax, dx
		mov     edx, [ebp-20h]
		add     ebx, [ebp-24h]
		push    ds
		push    es
		;mov     ds, eax
		db	8eh,0d8h
		;mov     es, edx
		db	8eh,0c2h
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     es
		pop     ds
		mov     al, [ebp-8]
		mov     byte [ebx], 4ah
		inc     ebx
		add     al, [ebp-4]
		mov     byte [ebx], 7ch
		inc     ebx
		add     al, 10h
		;mov     edx, ds
		db	8ch,0dah
		mov     [ebx], al
		movzx   eax, byte [ebp-8]
		inc     ebx
		mov     [ebp-20h], eax
		mov     eax, ebx
		mov     edi, ebx
		mov     eax, [ebp+20h]
		movzx   esi, dx
		;mov     edx, cs
		db	8ch,0cah
		mov     ecx, [ebp-20h]
		movzx   eax, dx
		mov     edx, esi
		mov     esi, [ebp+20h]
		add     ebx, [ebp-20h]
		push    ds
		push    es
		;mov     ds, eax
		db	8eh,0d8h
		;mov     es, edx
		db	8eh,0c2h
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     es
		pop     ds
		mov     byte [ebx], 81h
		inc     ebx
		mov     byte [ebx], 0eeh
		inc     ebx
		movsx   eax, word [ebp+1ch]
		mov     [ebx], eax
		add     ebx, byte 4
		mov     al, [ebp-28h]
		mov     byte [ebx], 7fh
		inc     ebx
		sub     al, bl
		dec     al
		mov     [ebx], al
		inc     ebx
		mov     byte [ebx], 81h
		inc     ebx
		mov     byte [ebx], 0c6h
		inc     ebx
		movsx   eax, word [ebp+18h]
		;mov     edx, ds
		db	8ch,0dah
		mov     [ebx], eax
		movzx   eax, byte [ebp-4]
		add     ebx, byte 4
		mov     [ebp-20h], eax
		mov     eax, ebx
		mov     edi, ebx
		mov     eax, [ebp+24h]
		movzx   esi, dx
		;mov     edx, cs
		db	8ch,0cah
		mov     ecx, [ebp-20h]
		movzx   eax, dx
		mov     edx, esi
		mov     esi, [ebp+24h]
		add     ebx, [ebp-20h]
		push    ds
		push    es
		;mov     ds, eax
		db	8eh,0d8h
		;mov     es, edx
		db	8eh,0c2h
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     es
		pop     ds
		mov     al, [ebp-28h]
		movsx   edx, word [ebp+18h]
		movsx   ecx, word [ebp+14h]
		mov     byte [ebx], 0ebh
		inc     ebx
		mov     edi, [ebp-18h]
		sub     al, bl
		sar     edx, 1
		dec     al
		mov     esi, edx
		mov     [ebx], al
		inc     ebx
		movsx   eax, word [ebp-0ch]
		mov     byte [ebx], 0c3h
		movsx   ebx, word [ebp-10h]
		;mov     es, [ebp-14h]
		db	8eh,45h,0ech
		call    dword [ebp-1ch]
dr@7dba1h:
		leave   
		pop     es
		pop     edi
		pop     esi
		ret     18h  
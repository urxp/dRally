cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global strlen
strlen:
		push    ecx
		push    edi
		mov     edi, eax
		push    es
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		sub     ecx, ecx
		dec     ecx
		xor     eax, eax
		repne scasb   
		not     ecx
		dec     ecx
		pop     es
		mov     eax, ecx
		pop     edi
		pop     ecx
		retn
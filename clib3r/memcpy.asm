cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global memcpy
memcpy:
		push    ecx
		push    esi
		push    edi
		mov     ecx, ebx
		mov     esi, edx
		mov     edi, eax
		push    es
		;mov     eax, ds
		db	8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		pop     es
		mov     eax, edi
		pop     edi
		pop     esi
		pop     ecx
		retn
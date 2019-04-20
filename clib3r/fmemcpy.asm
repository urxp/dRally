cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _fmemcpy
_fmemcpy:
		push    esi
		push    edi
		mov     edi, eax
		mov     eax, [esp+0ch]
		mov     esi, ebx
		push    ds
		push    es
		push    edi
		xchg    ecx, eax
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
		pop     eax
		pop     es
		pop     ds
		pop     edi
		pop     esi
		ret     4
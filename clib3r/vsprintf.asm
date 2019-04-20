cpu 386

	extern	__prtf

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

mem_putc:
		push    ebx
		push    ecx
		mov     ebx, edx
		mov     edx, [eax]
		lea     ecx, [edx+1]
		mov     [eax], ecx
		mov     [edx], bl
		inc     dword [eax+10h]
		pop     ecx
		pop     ebx
		retn    
global vsprintf
vsprintf:
		push    ecx
		push    esi
		mov     esi, eax
		mov     ecx, mem_putc
		call    near __prtf
		mov     byte [esi+eax*1], 0
		pop     esi
		pop     ecx
		retn
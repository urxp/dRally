cpu 386

	extern	lseek

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global filelength
filelength:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     ecx, eax
		mov     ebx, 1
		xor     edx, edx
		call    near lseek
		mov     esi, eax
		cmp     eax, byte 0ffffffffh
		je      short dr@66338h
		mov     ebx, 2
		mov     eax, ecx
		xor     edx, edx
		call    near lseek
		mov     edi, eax
		mov     edx, esi
		xor     ebx, ebx
		mov     eax, ecx
		call    near lseek
		mov     eax, edi
dr@66338h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
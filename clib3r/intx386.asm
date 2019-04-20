cpu 386

	extern	__int386x

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE
    
global int386x
int386x:
		push    esi
		push    edi
		push    ebp
		mov     edi, edx
		mov     ebp, ebx
		mov     ebx, ecx
		mov     edx, ebp
		mov     esi, eax
		call    near __int386x
		mov     eax, [ebp+0]
		pop     ebp
		pop     edi
		pop     esi
		retn
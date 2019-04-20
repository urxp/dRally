cpu 386

	extern	segread
	extern	int386x

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global int386
int386:
		push    ecx
		push    esi
		sub     esp, byte 0ch
		mov     esi, eax
		mov     eax, esp
		mov     ecx, esp
		call    near segread
		mov     eax, esi
		call    near int386x
		add     esp, byte 0ch
		pop     esi
		pop     ecx
		retn  
cpu 386

    extern	___iob
    extern	__fprtf

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global printf
printf:
global printf_
printf_:
		push    ebx
		push    edx
		sub     esp, byte 4
		lea     eax, [esp+14h]
		mov     ebx, esp
		mov     edx, [esp+10h]
		mov     [esp], eax
		mov     eax, ___iob+1aH 
		call    near __fprtf
		add     esp, byte 4
		pop     edx
		pop     ebx
		retn
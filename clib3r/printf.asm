
    extern  ___iob
    extern  __fprtf__clib3r

%include "layout.inc"

section @text

global printf__clib3r		   
printf__clib3r:
		push    ebx
		push    edx
		sub     esp, 4
		lea     eax, [esp+14h]
		mov     ebx, esp
		mov     edx, [esp+10h]
		mov     [esp], eax
		mov     eax, ___iob+1ah
		call    __fprtf__clib3r
		add     esp, 4
		pop     edx
		pop     ebx
		retn

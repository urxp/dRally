cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

initrandnext:
		mov     eax, _next
		retn    
global rand
rand:
		push    edx
		call    near initrandnext
		test    eax, eax
		je      short dr@65ebbh
		imul    edx, [eax], 41c64e6dh
		add     edx, 3039h
		mov     [eax], edx
		mov     eax, edx
		shr     eax, 10h
		and     eax, 7fffh
dr@65ebbh:
		pop     edx
		retn
global srand
srand:
		push    edx
		mov     edx, eax
		call    near initrandnext
		test    eax, eax
		je      short dr@65ecbh
		mov     [eax], edx
dr@65ecbh:
		pop     edx
		retn

        
SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
_next:
    db	1,0,0,0
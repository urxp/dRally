cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global segread
segread:
		push    edx
		mov     edx, eax
		mov     eax, cs
		mov     [edx+2], ax
		mov     eax, ds
		mov     [edx+6], ax
		mov     eax, es
		mov     [edx], ax
		mov     eax, ss
		mov     [edx+4], ax
		mov     eax, fs
		mov     [edx+8], ax
		mov     eax, gs
		mov     [edx+0ah], ax
		pop     edx
		retn
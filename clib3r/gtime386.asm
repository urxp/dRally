cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global _dos_getdate
_dos_getdate:
		push    edx
		push    ecx
		push    ebx
		mov     ebx, eax
		mov     ah, 2ah
		int     21h
		mov     [ebx+2], cx
		mov     [ebx+1], dh
		mov     [ebx], dl
		mov     [ebx+4], al
		sub     eax, eax
		pop     ebx
		pop     ecx
		pop     edx
		retn   
global _dos_gettime 
_dos_gettime:
		push    edx
		push    ecx
		push    ebx
		mov     ebx, eax
		mov     ah, 2ch
		int     21h
		mov     [ebx], ch
		mov     [ebx+1], cl
		mov     [ebx+2], dh
		mov     [ebx+3], dl
		sub     eax, eax
		pop     ebx
		pop     ecx
		pop     edx
		retn
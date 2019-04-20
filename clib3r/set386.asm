cpu 386

	extern	__STOSB

SEGMENT _TEXT   PUBLIC USE32 ALIGN=16 CLASS=CODE

global memset_
memset_:
global memset
memset:
		push    eax
		push    ecx
		mov     dh, dl
		shl     edx, 8
		mov     dl, dh
		shl     edx, 8
		mov     dl, dh
		mov     ecx, ebx
		call    near __STOSB
		pop     ecx
		pop     eax
		retn
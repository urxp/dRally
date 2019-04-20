cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=16 CLASS=CODE

global __STOSB
__STOSB:
		or      ecx, ecx
		je      short dr@65e20h
		cmp     [eax], dl
dr@65df6h:
		test    al, 3
		je      short dr@65e03h
		mov     [eax], dl
		inc     eax
		ror     edx, 8
		dec     ecx
		jne     short dr@65df6h
dr@65e03h:
		push    ecx
		shr     ecx, 2
		call    near __STOSD
		pop     ecx
		and     ecx, byte 3
		je      short dr@65e20h
		mov     [eax], dl
		dec     ecx
		je      short dr@65e20h
		mov     [eax+1], dh
		dec     ecx
		je      short dr@65e20h
		mov     [eax+2], dl
dr@65e20h:
		retn    
db	90h,90h,90h,90h,90h,90h
global __STOSD
__STOSD:
		or      ecx, ecx
		je      short dr@65e92h
dr@65e2bh:
		test    al, 1fh
		je      short dr@65e37h
		mov     [eax], edx
		lea     eax, [eax+4]
		dec     ecx
		jne     short dr@65e2bh
dr@65e37h:
		push    ecx
		shr     ecx, 2
		je      short dr@65e77h
		dec     ecx
		je      short dr@65e69h
dr@65e40h:
		mov     [eax], edx
		mov     [eax+4], edx
		dec     ecx
		mov     [eax+8], edx
		mov     [eax+0ch], edx
		je      short dr@65e66h
		cmp     [eax+20h], dl
		mov     [eax+10h], edx
		mov     [eax+14h], edx
		dec     ecx
		mov     [eax+18h], edx
		mov     [eax+1ch], edx
		lea     eax, [eax+20h]
		jne     short dr@65e40h
		lea     eax, [eax-10h]
dr@65e66h:
		lea     eax, [eax+10h]
dr@65e69h:
		mov     [eax], edx
		mov     [eax+4], edx
		mov     [eax+8], edx
		mov     [eax+0ch], edx
		lea     eax, [eax+10h]
dr@65e77h:
		pop     ecx
		and     ecx, byte 3
		je      short dr@65e92h
		mov     [eax], edx
		lea     eax, [eax+4]
		dec     ecx
		je      short dr@65e92h
		mov     [eax], edx
		lea     eax, [eax+4]
		dec     ecx
		je      short dr@65e92h
		mov     [eax], edx
		lea     eax, [eax+4]
dr@65e92h:
		retn
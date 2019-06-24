%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(__CEXT_F(__STOSB__clib3r))
		or      ecx, ecx
		je      ___65e20h
		cmp     [eax], dl
___65df6h:
		test    al, 3
		je      ___65e03h
		mov     [eax], dl
		inc     eax
		ror     edx, 8
		dec     ecx
		jne     ___65df6h
___65e03h:
		push    ecx
		shr     ecx, 2
		call    __CEXT_F(__STOSD__clib3r)
		pop     ecx
		and     ecx, byte 3
		je      ___65e20h
		mov     [eax], dl
		dec     ecx
		je      ___65e20h
		mov     [eax+1], dh
		dec     ecx
		je      ___65e20h
		mov     [eax+2], dl
___65e20h:
		retn    
__GDECL(__CEXT_F(__STOSD__clib3r))
		or      ecx, ecx
		je      ___65e92h
___65e2bh:
		test    al, 1fh
		je      ___65e37h
		mov     [eax], edx
		lea     eax, [eax+4]
		dec     ecx
		jne     ___65e2bh
___65e37h:
		push    ecx
		shr     ecx, 2
		je      ___65e77h
		dec     ecx
		je      ___65e69h
___65e40h:
		mov     [eax], edx
		mov     [eax+4], edx
		dec     ecx
		mov     [eax+8], edx
		mov     [eax+0ch], edx
		je      ___65e66h
		cmp     [eax+20h], dl
		mov     [eax+10h], edx
		mov     [eax+14h], edx
		dec     ecx
		mov     [eax+18h], edx
		mov     [eax+1ch], edx
		lea     eax, [eax+20h]
		jne     ___65e40h
		lea     eax, [eax-10h]
___65e66h:
		lea     eax, [eax+10h]
___65e69h:
		mov     [eax], edx
		mov     [eax+4], edx
		mov     [eax+8], edx
		mov     [eax+0ch], edx
		lea     eax, [eax+10h]
___65e77h:
		pop     ecx
		and     ecx, byte 3
		je      ___65e92h
		mov     [eax], edx
		lea     eax, [eax+4]
		dec     ecx
		je      ___65e92h
		mov     [eax], edx
		lea     eax, [eax+4]
		dec     ecx
		je      ___65e92h
		mov     [eax], edx
		lea     eax, [eax+4]
___65e92h:
		retn    

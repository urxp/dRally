%include "macros.inc"

	extern 	__scnf

%include "layout.inc"

section @text

cget_string:
		push    ebx
		push    edx
		mov     ebx, [eax+8]
		xor     edx, edx
		mov     dl, [ebx]
		test    edx, edx
		je      ___65f50h
		inc     ebx
		mov     [eax+8], ebx
		mov     eax, edx
		pop     edx
		pop     ebx
		retn    
___65f50h:
		mov     bl, [eax+10h]
		or      bl, 2
		mov     edx, 0ffffffffh
		mov     [eax+10h], bl
		mov     eax, edx
		pop     edx
		pop     ebx
		retn    
uncget_string:
		dec     dword [edx+8]
		retn    
__GDECL(vsscanf)
		push    ecx
		push    esi
		sub     esp, byte 14h
		mov     ecx, cget_string
		mov     esi, uncget_string
		mov     [esp+8], eax
		mov     eax, esp
		mov     [esp], ecx
		mov     [esp+4], esi
		call    __scnf
		add     esp, byte 14h
		pop     esi
		pop     ecx
		retn    
__GDECL(sscanf)
		push    ebx
		push    edx
		sub     esp, byte 4
		lea     eax, [esp+18h]
		mov     ebx, esp
		mov     edx, [esp+14h]
		mov     [esp], eax
		mov     eax, [esp+10h]
		call    vsscanf
		add     esp, byte 4
		pop     edx
		pop     ebx
		retn    

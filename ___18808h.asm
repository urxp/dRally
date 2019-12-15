cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___1a0f9ch
	extern 	___3f71ch__allocateMemory
	extern 	memset_
	extern 	___180134h
	extern 	fopen_
	extern 	fread_
	extern 	fclose_

section .text

__GDECL(___18808h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     esi, [___1a0f9ch]
		mov     ebp, eax
		mov     edi, edx
		mov     eax, 883h
		mov     ebx, 883h
		call    near ___3f71ch__allocateMemory
		xor     edx, edx
		mov     [___1a0f9ch], eax
		call    near memset_
		mov     edx, ___180134h
		mov     eax, edi
		mov     ebx, 1
		call    near fopen_
		mov     edx, 883h
		mov     esi, [___1a0f9ch]
		mov     edi, eax
		mov     eax, esi
		mov     ecx, edi
		call    near fread_
		mov     eax, edi
		call    near fclose_
		mov     esi, [___1a0f9ch]
		mov     al, [esi]
		mov     edx, 1
		and     eax, 0ffh
		mov     [esp+4], edx
		mov     [esp], eax
		mov     al, [esp+4]
		mov     ah, 11h
		mul     ah
		mov     [esp+8], al
___18892h:
		mov     eax, [esp+4]
		mov     edx, eax
		mov     ebx, 6
		sar     edx, 1fh
		idiv    ebx
		mov     ecx, [esp+4]
		mov     edi, [esp+4]
		lea     ebx, [esi+ecx*1]
		mov     ecx, edx
		mov     [___1a0f9ch], esi
		mov     eax, [ebx]
		rol     al, cl
		mov     [ebx], eax
		mov     esi, [___1a0f9ch]
		lea     eax, [esi+edi*1]
		mov     dl, [esp+8]
		mov     dh, [eax]
		sub     dh, dl
		mov     [eax], dh
		mov     dl, [esp]
		mov     bl, dh
		add     bl, dl
		mov     [eax], bl
		mov     bh, [esp+8]
		lea     eax, [edi+1]
		add     bh, 11h
		mov     [esp+4], eax
		mov     [esp+8], bh
		cmp     eax, dword 883h
		jl      short ___18892h
		xor     ebx, ebx
		mov     eax, ebp
		mov     [esp+4], ebx
___188f8h:
		mov     ecx, [esp+4]
		lea     edx, [esi+ecx*1]
		inc     eax
		lea     edi, [ecx+1]
		mov     dl, [edx+4]
		mov     [esp+4], edi
		mov     [eax-1], dl
		cmp     edi, byte 0fh
		jl      short ___188f8h
		mov     [___1a0f9ch], esi
__GDECL(___18918h)
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

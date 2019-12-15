cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___24330ch
	extern	___2432dch
	extern	___243e94h
	extern	___243e80h
	extern	___243e7ch
	extern	___243e74h
	extern	___243e78h
	extern	___2432d8h

section .text

__GDECL(___47620h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     edi, [___24330ch]
		mov     ebp, [___2432dch]
		xor     edx, edx
		mov     [esp+4], edx
		mov     [esp], edx
___47648h:
		mov     eax, [esp+4]
		mov     [___24330ch], edi
		mov     dl, [eax+___243e94h]
		mov     [___2432dch], ebp
		cmp     dl, 46h
		ja      near ___477a1h
		xor     eax, eax
		test    edi, edi
		jle     short ___47684h
		mov     edx, [esp+4]
___47671h:
		mov     ecx, [edx+___243e80h]
		add     ecx, ebp
		inc     eax
		mov     [edx+___243e80h], ecx
		cmp     eax, edi
		jl      short ___47671h
___47684h:
		xor     edx, edx
		test    edi, edi
		jle     short ___476a7h
		mov     eax, [esp+4]
___4768eh:
		mov     ebx, [eax+___243e7ch]
		mov     esi, [eax+___243e74h]
		add     esi, ebx
		inc     edx
		mov     [eax+___243e74h], esi
		cmp     edx, edi
		jl      short ___4768eh
___476a7h:
		mov     eax, [esp+4]
		xor     edx, edx
		test    edi, edi
		jle     short ___476c8h
___476b1h:
		mov     ecx, [eax+___243e78h]
		add     ecx, [eax+___243e80h]
		inc     edx
		mov     [eax+___243e78h], ecx
		cmp     edx, edi
		jl      short ___476b1h
___476c8h:
		cmp     dword [eax+___243e74h], byte 0
		jg      short ___476e7h
		xor     edx, edx
		mov     [eax+___243e74h], edx
		mov     edx, [eax+___243e7ch]
		neg     edx
		mov     [eax+___243e7ch], edx
___476e7h:
		mov     eax, [esp+4]
		cmp     dword [eax+___243e74h], 13c0000h
		jl      short ___47713h
		mov     dword [eax+___243e74h], 13c0000h
		mov     eax, [eax+___243e7ch]
		mov     edx, [esp+4]
		neg     eax
		mov     [edx+___243e7ch], eax
___47713h:
		mov     eax, [esp+4]
		mov     ebx, [esp+4]
		mov     [___24330ch], edi
		mov     [___2432dch], ebp
		mov     eax, [eax+___243e78h]
		mov     ebx, [ebx+___243e74h]
		add     eax, 8000h
		add     ebx, 8000h
		sar     eax, 10h
		sar     ebx, 10h
		cmp     eax, dword 0c4h
		jle     short ___47760h
		mov     ebx, [esp]
		mov     eax, [esp+4]
		mov     dh, 46h
		inc     ebx
		mov     [eax+___243e94h], dh
		mov     [esp], ebx
		jmp     short ___477a1h
___47760h:
		mov     esi, ___243e74h
		add     esi, [esp+4]
		imul    edx, eax, 140h
		mov     ecx, 4
		mov     eax, [___2432d8h]
		add     esi, byte 10h
		add     eax, edx
		mov     edx, 140h
		add     ebx, eax
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, edx
		add     esi, ecx
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, edx
		add     esi, ecx
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, edx
		add     esi, ecx
		mov     eax, [esi]
		mov     [ebx], eax
___477a1h:
		mov     ecx, [esp+4]
		mov     ebp, [___2432dch]
		add     ecx, byte 21h
		mov     edi, [___24330ch]
		mov     [esp+4], ecx
		cmp     ecx, 7ce9h
		jne     near ___47648h
		mov     eax, [esp]
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

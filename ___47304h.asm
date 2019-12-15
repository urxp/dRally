cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___2432e4h
	extern	___243e94h
	extern	___2432e8h
	extern	___2432d0h
	extern	___243e74h
	extern	___243d70h
	extern	___2432cch
	extern	___196d98h
	extern	___2432e0h
	extern	___1a30a0h
	extern	___243e78h
	extern	___243e7ch
	extern	___243e80h
	extern	___24330ch
	extern	___2432d8h

section .text

__GDECL(___47304h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		xor     ebp, ebp
		xor     edi, edi
		mov     [___2432e4h], ebp
___4731eh:
		mov     ah, [edi+___243e94h]
		cmp     ah, 64h
		jne     near ___47476h
		mov     ecx, [___2432e8h]
		inc     ebp
		cmp     ecx, 0f24h
		jge     near ___4760ah
		cmp     ebp, byte 14h
		jge     near ___4760ah
		imul    edx, [___2432d0h], 0cch
		mov     ebx, ___243e74h
		mov     ecx, 0cch
		add     ebx, edi
		mov     eax, [___243d70h]
		add     ebx, byte 10h
		mov     esi, [___2432cch]
		add     eax, edx
		mov     edx, 4
		add     esi, eax
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
		mov     edx, [___2432cch]
		mov     eax, [___196d98h]
		add     edx, byte 39h
		sar     eax, 1
		add     eax, edx
		mov     edx, [___2432e0h]
		mov     edx, [edx*4+___1a30a0h]
		shl     edx, 10h
		mov     [edi+___243e74h], edx
		mov     dword [edi+___243e78h], 0c40000h
		mov     edx, eax
		mov     ebx, [edi+___243e74h]
		shl     edx, 10h
		mov     esi, [___2432d0h]
		sub     edx, ebx
		mov     ebx, 460000h
		add     esi, byte 40h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, esi
		mov     ecx, [edi+___243e78h]
		shl     edx, 10h
		mov     ebx, 460000h
		sub     edx, ecx
		mov     [edi+___243e7ch], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     esi, [___2432e8h]
		xor     dh, dh
		mov     [edi+___243e80h], eax
		mov     eax, [___2432d0h]
		add     esi, byte 4
		mov     [edi+___243e94h], dh
		add     eax, byte 4
		mov     [___2432e8h], esi
		mov     [___2432d0h], eax
		cmp     eax, byte 4ch
		jne     short ___47453h
		mov     ecx, [___2432cch]
		xor     ebx, ebx
		add     ecx, byte 4
		mov     [___2432d0h], ebx
		mov     [___2432cch], ecx
___47453h:
		mov     esi, [___2432e0h]
		inc     esi
		mov     [___2432e0h], esi
		cmp     esi, byte 63h
		jle     near ___4760ah
		xor     edx, edx
		mov     [___2432e0h], edx
		jmp     near ___4760ah
___47476h:
		xor     ebx, ebx
		mov     bl, ah
		mov     eax, [___24330ch]
		add     eax, ebx
		cmp     eax, byte 46h
		jge     near ___4754fh
		mov     al, [___24330ch]
		mov     dl, bl
		add     dl, al
		mov     ebx, [___24330ch]
		mov     [edi+___243e94h], dl
		xor     edx, edx
		test    ebx, ebx
		jle     short ___474c6h
		mov     esi, [___24330ch]
		mov     eax, edi
___474adh:
		mov     ebx, [eax+___243e7ch]
		mov     ecx, [eax+___243e74h]
		add     ecx, ebx
		inc     edx
		mov     [eax+___243e74h], ecx
		cmp     edx, esi
		jl      short ___474adh
___474c6h:
		mov     ebx, [___24330ch]
		mov     eax, edi
		xor     edx, edx
		test    ebx, ebx
		jle     short ___474f1h
		mov     esi, [___24330ch]
___474dah:
		mov     ecx, [eax+___243e78h]
		add     ecx, [eax+___243e80h]
		inc     edx
		mov     [eax+___243e78h], ecx
		cmp     edx, esi
		jl      short ___474dah
___474f1h:
		mov     edx, [eax+___243e78h]
		mov     ebx, [eax+___243e74h]
		add     edx, 8000h
		add     eax, ___243e74h
		sar     edx, 10h
		lea     esi, [eax+10h]
		imul    eax, edx, 140h
		mov     ecx, 4
		add     ebx, 8000h
		mov     edx, [___2432d8h]
		sar     ebx, 10h
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
		jmp     short ___4759eh
___4754fh:
		mov     eax, edi
		mov     edx, ebx
		cmp     ebx, byte 46h
		jge     short ___47570h
___47558h:
		mov     ecx, [eax+___243e74h]
		add     ecx, [eax+___243e7ch]
		inc     edx
		mov     [eax+___243e74h], ecx
		cmp     edx, byte 46h
		jl      short ___47558h
___47570h:
		xor     edx, edx
		mov     dl, [eax+___243e94h]
		mov     eax, edi
		cmp     edx, byte 46h
		jge     short ___47597h
___4757fh:
		mov     esi, [eax+___243e78h]
		add     esi, [eax+___243e80h]
		inc     edx
		mov     [eax+___243e78h], esi
		cmp     edx, byte 46h
		jl      short ___4757fh
___47597h:
		mov     byte [eax+___243e94h], 46h
___4759eh:
		cmp     byte [edi+___243e94h], 46h
		jb      short ___4760ah
		mov     eax, [edi+___243e78h]
		add     eax, 8000h
		sar     eax, 10h
		imul    eax, eax, 140h
		mov     esi, ___243e74h
		mov     ecx, 4
		mov     ebx, [edi+___243e74h]
		mov     edx, [___2432d8h]
		add     ebx, 8000h
		add     esi, edi
		sar     ebx, 10h
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
		inc     dword [___2432e4h]
___4760ah:
		add     edi, byte 21h
		cmp     edi, 7ce9h
		jne     near ___4731eh
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

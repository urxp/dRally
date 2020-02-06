cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1f2488h
	extern	___243c60h
	extern	___1e6f84h
	extern	___1e6f88h
	extern	__CHP
	extern	___1f248ch
	extern	___243d74h
	extern	___1e6ee0h
	extern	___1f2490h
	extern	___243ce8h
	extern	dRally_Audio_pushSoundEffect
	extern	___243d28h
	extern	___243d58h
	extern	___1de5b0h
	extern	___1de5b4h
	extern	___1de5d0h
	extern	___1e721eh
	extern	rand_
	extern	___1f24a4h
	extern	___1de598h
	extern	___1de81ch
	extern	___1f249ch
	extern	___1f24a0h
	extern	___196dd0h
	extern	___1f2494h
	extern	___1f2498h

section .text

___5268ch:
dd	___528c0h
dd	___528f7h
dd	___5292eh
dd	___52943h
dd	___5298dh
dd	___529d2h
dd	___529ech
dd	___529ffh
__GDECL(___526ach)
		push    40h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 1ch
		mov     eax, ___1f2488h
		xor     edx, edx
		add     eax, byte 20h
		mov     [esp], edx
		mov     [esp+0ch], eax
___526d0h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f84h]
		fld     dword [eax+___1e6f88h]
		mov     ebx, [esp]
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+18h]
		fistp   dword [esp+8]
		mov     ecx, [ebx+___1f2488h]
		mov     esi, [ebx+___1f248ch]
		mov     edx, [esp+18h]
		mov     eax, [esp+8]
		sub     edx, ecx
		sub     eax, esi
		test    edx, edx
		jge     short ___52723h
		mov     ebx, edx
		neg     ebx
		jmp     short ___52725h
___52723h:
		mov     ebx, edx
___52725h:
		cmp     ebx, byte 11h
		jge     near ___52a92h
		test    eax, eax
		jge     short ___52738h
		mov     ebx, eax
		neg     ebx
		jmp     short ___5273ah
___52738h:
		mov     ebx, eax
___5273ah:
		cmp     ebx, byte 11h
		jge     near ___52a92h
		imul    ecx, [___243c60h], 35eh
		mov     ebx, [___243d74h]
		add     ebx, [ecx+___1e6ee0h]
		add     edx, ebx
		lea     ebx, [eax+12h]
		imul    ebx, ebx, byte 28h
		add     ebx, edx
		cmp     byte [ebx+12h], 3
		ja      short ___52787h
		cmp     byte [ebx+16h], 3
		ja      short ___52787h
		add     eax, byte 16h
		imul    eax, eax, byte 28h
		add     edx, eax
		cmp     byte [edx+12h], 3
		ja      short ___52787h
		cmp     byte [edx+16h], 3
		jbe     near ___52a92h
___52787h:
		mov     eax, [esp]
		cmp     dword [eax+___1f2490h], byte 0
		jle     near ___52a92h
		mov     ebx, [___243ce8h]
		mov     eax, [___243c60h]
		cmp     eax, ebx
		jne     short ___527c4h
		push    8000h
		mov     ecx, 9000h
		mov     edx, 12h
		push    21000h
		mov     eax, 4
		jmp     near ___52848h
___527c4h:
		imul    edx, eax, 35eh
		imul    eax, ebx, 35eh
		fld     dword [edx+___1e6f84h]
		fsub    dword [eax+___1e6f84h]
		fld     dword [edx+___1e6f88h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+14h]
		mov     edx, [esp+14h]
		imul    edx, edx
		fsub    dword [eax+___1e6f88h]
		call    near __CHP
		fistp   dword [esp+4]
		mov     eax, [esp+4]
		imul    eax, eax
		add     edx, eax
		mov     [esp+18h], edx
		fild    dword [esp+18h]
		fsqrt   
		call    near __CHP
		fistp   dword [esp+18h]
		imul    ecx, [esp+18h], byte 4bh
		mov     eax, 9000h
		sub     eax, ecx
		mov     ecx, eax
		cmp     eax, dword 1000h
		jle     short ___5284fh
		push    8000h
		mov     edx, 12h
		push    21000h
		mov     eax, 0ah
___52848h:
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
___5284fh:
		mov     ebp, [esp]
		mov     eax, [esp+0ch]
		xor     ebx, ebx
		xor     edx, edx
		mov     [esp+10h], eax
___5285eh:
		mov     edi, [ebp+___1f248ch]
		add     edi, edx
		mov     eax, [___243d28h]
		sub     edi, byte 8
		imul    eax, edi
		mov     esi, [esp+10h]
		mov     ecx, [ebp+___1f2488h]
		mov     edi, [___243d58h]
		add     esi, ebx
		add     edi, ecx
		add     ebx, byte 10h
		sub     edi, byte 8
		mov     ecx, 10h
		add     edi, eax
		inc     edx
		call 	__MOVS
		cmp     edx, byte 10h
		jl      short ___5285eh
		mov     eax, [ebp+___1f2490h]
		dec     eax
		cmp     eax, byte 7
		ja      near ___52a39h
		jmp     near dword [cs:eax*4+___5268ch]
___528c0h:
		imul    eax, [___243c60h], 94h
		mov     ecx, [eax+___1de5b0h]
		add     ecx, 7800h
		mov     [eax+___1de5b0h], ecx
		cmp     ecx, 19000h
		jle     near ___52a39h
		mov     dword [eax+___1de5b0h], 19000h
		jmp     near ___52a39h
___528f7h:
		imul    eax, [___243c60h], 94h
		mov     edi, [eax+___1de5b4h]
		add     edi, 3c00h
		mov     [eax+___1de5b4h], edi
		cmp     edi, 19000h
		jle     near ___52a39h
		mov     dword [eax+___1de5b4h], 19000h
		jmp     near ___52a39h
___5292eh:
		imul    eax, [___243c60h], 94h
		inc     dword [eax+___1de5d0h]
		jmp     near ___52a39h
___52943h:
		mov     edi, [___243c60h]
		imul    eax, edi, 35eh
		mov     ebp, 230h
		mov     edx, [___243ce8h]
		mov     [eax+___1e721eh], ebp
		cmp     edi, edx
		jne     near ___52a39h
		push    8000h
		mov     ecx, 10000h
		mov     edx, 6
		push    50000h
		mov     eax, 2
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		jmp     near ___52a39h
___5298dh:
		call    near rand_
		mov     edx, eax
		mov     ebx, 4
		sar     edx, 1fh
		idiv    ebx
		add     edx, byte 2
		mov     [ebp+___1f24a4h], edx
		imul    eax, [___243c60h], 94h
		mov     edx, [ebp+___1f24a4h]
		mov     ebx, [eax+___1de598h]
		shl     edx, 0ah
		add     ebx, edx
		mov     [eax+___1de598h], ebx
		cmp     ebx, 19000h
		jle     short ___52a39h
		jmp     short ___52a2fh
___529d2h:
		mov     edi, [___243ce8h]
		cmp     edi, [___243c60h]
		jne     short ___52a39h
		mov     dword [___1de81ch], 1
		jmp     short ___52a39h
___529ech:
		imul    eax, [___243c60h], 94h
		add     dword [eax+___1de5d0h], byte 0ah
		jmp     short ___52a39h
___529ffh:
		imul    eax, [___243c60h], 94h
		mov     esi, 14h
		mov     edx, esi
		mov     [ebp+___1f24a4h], esi
		shl     edx, 0ah
		mov     ebp, [eax+___1de598h]
		add     ebp, edx
		mov     [eax+___1de598h], ebp
		cmp     ebp, 19000h
		jle     short ___52a39h
___52a2fh:
		mov     dword [eax+___1de598h], 19000h
___52a39h:
		mov     eax, [esp]
		mov     dword [eax+___1f249ch], 8ch
		mov     edx, [esp]
		mov     eax, [eax+___1f2490h]
		mov     ebx, 0f0h
		mov     [edx+___1f24a0h], eax
		mov     eax, edx
		xor     edx, edx
		mov     [___196dd0h], ebx
		mov     [eax+___1f2490h], edx
		call    near rand_
		mov     edx, eax
		mov     ebx, 96h
		sar     edx, 1fh
		idiv    ebx
		mov     eax, [esp]
		add     edx, 0c8h
		xor     ecx, ecx
		mov     [eax+___1f2494h], edx
		mov     [eax+___1f2498h], ecx
___52a92h:
		mov     edi, [esp]
		mov     esi, [esp+0ch]
		add     edi, 120h
		add     esi, 120h
		mov     [esp], edi
		mov     [esp+0ch], esi
		cmp     edi, 1200h
		jne     near ___526d0h
		add     esp, byte 1ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

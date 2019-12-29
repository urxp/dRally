cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1150h
	extern	___105e0h
	extern	___1a1140h
	extern	___1a1158h
	extern	___1a1148h
	extern	___1a114ch
	extern	___1a115ch
	extern	___1a1154h
	extern	___1a1144h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___181998h
	extern	___13248h
	extern	___185ba9h
	extern	___252e0h
	extern	___1a10cch
	extern	___12e78h
	extern	___1819b4h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___1854bch
	extern	___24cc54h
	extern	dRally_Audio_playSoundEffect
	extern	___5994ch
	extern	___59b3ch

section .text

__GDECL(___20220h)
		push    5ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 38h
		mov     ebp, [___1a1150h]
		lea     edi, [esp+28h]
		mov     esi, ___105e0h
		xor     dh, dh
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
		xor     dl, dl
		mov     edi, [___1a1140h]
___20252h:
		xor     eax, eax
		mov     al, dl
		mov     al, [esp+eax*1+28h]
		mov     ebx, [___1a1158h]
		and     eax, 0ffh
		cmp     eax, ebx
		je      short ___20299h
		cmp     ebp, eax
		je      short ___20299h
		cmp     eax, [___1a1148h]
		je      short ___20299h
		cmp     eax, [___1a114ch]
		je      short ___20299h
		cmp     eax, edi
		je      short ___20299h
		cmp     eax, [___1a115ch]
		je      short ___20299h
		cmp     eax, [___1a1154h]
		je      short ___20299h
		cmp     eax, [___1a1144h]
		jne     short ___2029bh
___20299h:
		mov     dh, 1
___2029bh:
		inc     dl
		cmp     dl, 0fh
		jb      short ___20252h
		mov     eax, [___1a1158h]
		mov     [___1a1150h], ebp
		cmp     eax, ebp
		je      near ___203bah
		cmp     eax, [___1a1148h]
		je      near ___203bah
		cmp     eax, [___1a114ch]
		je      near ___203bah
		cmp     eax, [___1a1140h]
		je      near ___203bah
		cmp     eax, [___1a115ch]
		je      near ___203bah
		cmp     eax, [___1a1154h]
		je      near ___203bah
		cmp     eax, [___1a1144h]
		je      near ___203bah
		cmp     ebp, [___1a1148h]
		je      near ___203bah
		cmp     ebp, [___1a114ch]
		je      near ___203bah
		cmp     ebp, [___1a1140h]
		je      near ___203bah
		cmp     ebp, [___1a115ch]
		je      near ___203bah
		cmp     ebp, [___1a1154h]
		je      near ___203bah
		cmp     ebp, [___1a1144h]
		je      near ___203bah
		mov     ebx, [___1a114ch]
		mov     eax, [___1a1148h]
		cmp     eax, ebx
		je      near ___203bah
		mov     ecx, [___1a1140h]
		cmp     eax, ecx
		je      near ___203bah
		mov     esi, [___1a115ch]
		cmp     eax, esi
		je      short ___203bah
		mov     edi, [___1a1154h]
		cmp     eax, edi
		je      short ___203bah
		mov     ebx, [___1a1144h]
		cmp     eax, ebx
		je      short ___203bah
		mov     eax, [___1a114ch]
		cmp     eax, ecx
		je      short ___203bah
		cmp     eax, esi
		je      short ___203bah
		cmp     eax, edi
		je      short ___203bah
		cmp     eax, ebx
		je      short ___203bah
		cmp     ecx, esi
		je      short ___203bah
		cmp     ecx, edi
		je      short ___203bah
		cmp     ecx, ebx
		je      short ___203bah
		cmp     esi, edi
		je      short ___203bah
		cmp     esi, ebx
		je      short ___203bah
		cmp     edi, ebx
		je      short ___203bah
		cmp     dh, 1
		jne     near ___204c1h
___203bah:
		mov     ecx, 4b000h
		mov     ebx, 253h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     edx, 0c2h
		call 	__MOVS
		push    byte 1
		mov     ecx, 56h
		mov     eax, 1ah
		lea     edi, [esp+4]
		mov     esi, ___181998h
		call    near ___13248h
		mov     ecx, 6
		mov     eax, esp
		mov     ebx, esp
		rep movsd   
		movsw   
		movsb   
		mov     edx, ___185ba9h
		mov     ecx, 1fcc2h
		call    near ___252e0h
		sub     ecx, eax
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     ecx, 24bdfh
		mov     ebx, ___1819b4h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		push    8000h
		mov     edx, 1dh
		mov     edi, [___1854bch]
		mov     eax, 1
		push    edi
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		call    near ___5994ch
		call    near ___59b3ch
___20473h:
		call    near ___5994ch
		test    al, al
		je      short ___20473h
		call    near ___5994ch
		call    near ___59b3ch
		mov     ecx, 4b000h
		mov     esi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		call 	__MOVS
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		mov     eax, 1
		mov     ebp, [___1a1150h]
		add     esp, byte 38h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___204c1h:
		xor     eax, eax
		mov     ebp, [___1a1150h]
		add     esp, byte 38h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

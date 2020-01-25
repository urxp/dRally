cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___1a1e68h
	extern 	___3f71ch__allocateMemory
	extern 	___1a1128h
	extern 	___1a10f8h
	extern 	___1a1104h
	extern 	___1a10d4h
	extern 	___1a10bch
	extern 	___1a10e8h
	extern 	___1a10dch
	extern 	___1a10ach
	extern 	___1a10c0h
	extern 	___1a10ech
	extern 	___1a10b4h
	extern 	___1a10f4h
	extern 	___1a10d0h
	extern 	___1a10e0h
	extern 	___1a0ff8h
	extern 	___1a10a4h
	extern 	___1a1040h
	extern 	___1a1044h
	extern 	___1a1048h
	extern 	___1a104ch
	extern 	___1a1050h
	extern 	___1a1054h
	extern 	___1a1058h
	extern 	___1a105ch
	extern 	___1a1060h
	extern 	___1a1064h
	extern 	___1a1068h
	extern 	___1a106ch
	extern 	___1a1070h
	extern 	___1a1074h
	extern 	___1a1078h
	extern 	___1a107ch
	extern 	___1a1080h
	extern 	___1a1084h
	extern 	___1a1088h
	extern 	___1a1030h
	extern 	___1a1038h
	extern 	___18058ch
	extern 	___1a54d0h
	extern 	___180144h
	extern 	bpa_read_cdecl
	extern 	bpk_decode4
	extern 	___18059ch
	extern 	bpk_decode2
	extern 	___1805a8h
	extern 	___1805b4h
	extern 	___1805c0h
	extern 	___1805d0h
	extern 	___1805e0h
	extern 	___1805f0h
	extern 	___180600h
	extern 	___180610h
	extern 	___18061ch
	extern 	___180628h
	extern 	___180634h
	extern 	___180644h
	extern 	___180654h
	extern 	___180664h
	extern 	___180674h

section .text

__GDECL(___1240ch)
		push    2ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		xor     edx, edx
		mov     eax, 7530h
		mov     [___1a1e68h], edx
		call    near ___3f71ch__allocateMemory
		mov     [___1a1128h], eax
		mov     eax, 1b18h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10f8h], eax
		mov     eax, 1100h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1104h], eax
		mov     eax, 5000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10d4h], eax
		mov     eax, 2800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10bch], eax
		mov     eax, 2800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10e8h], eax
		mov     eax, 8700h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10dch], eax
		mov     eax, 2800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10ach], eax
		mov     eax, 0aa00h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10c0h], eax
		mov     eax, 111ch
		call    near ___3f71ch__allocateMemory
		mov     [___1a10ech], eax
		mov     eax, 1900h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10b4h], eax
		mov     eax, 4e20h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10f4h], eax
		mov     eax, 18000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10d0h], eax
		mov     eax, 18000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10e0h], eax
		mov     eax, 2800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0ff8h], eax
		mov     eax, 1500h
		call    near ___3f71ch__allocateMemory
		mov     [___1a10a4h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1040h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1044h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1048h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a104ch], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1050h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1054h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1058h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a105ch], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1060h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1064h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1068h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a106ch], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1070h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1074h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1078h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a107ch], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1080h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1084h], eax
		mov     eax, 3800h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1088h], eax
		mov     eax, 3800h
		xor     edi, edi
		call    near ___3f71ch__allocateMemory
		mov     [___1a1030h], eax
		mov     eax, 3800h
		xor     esi, esi
		call    near ___3f71ch__allocateMemory
		mov     [___1a1038h], eax
___12653h:
		mov     ebx, ___18058ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebx, [esi+___1a1040h]
		push    ebx
		push    edi
		push    3800h
		add     esi, byte 4
		call    near bpk_decode4
		add     edi, 3800h
		cmp     esi, byte 4ch
		jne     short ___12653h
		mov     ebx, ___18058ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ecx, [___1a1030h]
		push    ecx
		push    3f000h
		push    3800h
		call    near bpk_decode4
		mov     ebx, ___18058ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     esi, [___1a1038h]
		push    esi
		push    42800h
		push    3800h
		call    near bpk_decode4
		mov     ebx, ___18059ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edi, [___1a10f4h]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___1805a8h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebp, [___1a10e0h]
		push    ebp
		call    near bpk_decode2
		mov     ebx, ___1805b4h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     eax, [___1a10d0h]
		push    eax
		call    near bpk_decode2
		mov     ebx, ___1805c0h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edx, [___1a10b4h]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___1805d0h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebx, [___1a1128h]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___1805e0h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ecx, [___1a10d4h]
		push    ecx
		call    near bpk_decode2
		mov     ebx, ___1805f0h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     esi, [___1a10bch]
		push    esi
		call    near bpk_decode2
		mov     ebx, ___180600h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edi, [___1a10e8h]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___180610h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebp, [___1a10dch]
		push    ebp
		call    near bpk_decode2
		mov     ebx, ___18061ch
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     eax, [___1a10ach]
		push    eax
		call    near bpk_decode2
		mov     ebx, ___180628h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edx, [___1a10c0h]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___180634h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebx, [___1a10ech]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___180644h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ecx, [___1a10f8h]
		push    ecx
		call    near bpk_decode2
		mov     ebx, ___180654h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     esi, [___1a1104h]
		push    esi
		call    near bpk_decode2
		mov     ebx, ___180664h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edi, [___1a0ff8h]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___180674h
		mov     edx, ___1a54d0h
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     ebp, [___1a10a4h]
		push    ebp
		call    near bpk_decode2
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	___180748h
	extern 	___1866b8h
	extern 	___185b85h
	extern 	___180754h
	extern 	itoa_
	extern 	GET_FILE_SIZE
	extern 	___18808h
	extern 	___1866b8h
	extern 	___18075ch
	extern 	___1a1138h__VESA101h_DefaultScreenBufferB
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___13710h
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___146c4h
	extern 	___1854bch
	extern 	___24cc54h
	extern 	dRally_Sound_pushEffect
	extern 	___1866b8h
	extern 	___18076ch
	extern 	___185b59h
	extern 	___185b62h
	extern 	___185b63h
	extern 	___185b65h
	extern 	___1866b8h
	extern 	___18077ch
	extern 	___185a48h
	extern 	___185a44h
	extern 	___185a40h
	extern 	___185a3ch
	extern 	___243d44h
	extern 	___196ab4h
	extern 	___3f71ch__allocateMemory
	extern 	___1a0f9ch
	extern 	memset_
	extern 	___180134h
	extern 	fopen_
	extern 	fread_
	extern 	fclose_
	extern 	___1a1ef8h
	extern 	___185a14h
	extern 	___1a01e0h
	extern 	___196a94h
	extern 	___3f77ch__freeMemory
	extern 	___1a023ch
	extern 	___1a0240h
	extern 	___1a0a50h
	extern 	___1a0244h
	extern 	___1a0a54h
	extern 	___1a0248h
	extern 	___1a0a58h
	extern 	___1a0a5ch
	extern 	___18078ch
	extern 	___2a608h

section .text

__GDECL(___18924h)
		push    4ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 28h
		xor     edx, edx
		xor     ebp, ebp
		mov     [esp+18h], edx
___1893fh:
		mov     eax, [esp+18h]
		mov     dl, 1
		mov     esi, ___180748h
		lea     edi, [ebp+___1866b8h+8cah]
		mov     [eax+___185b85h], dl
		movsd   
		movsd   
		movsw   
		movsb   
		mov     edi, esp
		mov     esi, ___180754h
		mov     ebx, 0ah
		movsd   
		movsw   
		lea     edx, [esp+20h]
		lea     esi, [esp+20h]
		mov     edi, esp
		call    near itoa_
		call 	__STRCAT
		mov     eax, [esp+18h]
		xor     dh, dh
		mov     [esp+eax*1+10h], dh
		mov     eax, esp

	push 	edx
	push 	ecx
	push 	eax
		call    near GET_FILE_SIZE
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		test    eax, eax
		jle     short ___189c7h
		mov     eax, [esp+18h]
		mov     byte [esp+eax*1+10h], 1
		mov     eax, ___1866b8h+8cah
		mov     edx, esp
		add     eax, ebp
		call    near ___18808h
___189c7h:
		mov     ebx, [esp+18h]
		inc     ebx
		add     ebp, byte 32h
		mov     [esp+18h], ebx
		cmp     ebx, byte 8
		jl      near ___1893fh
		mov     edi, ___1866b8h+0a28h
		mov     esi, ___18075ch
		mov     ebp, 0ffffffffh
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
___189f1h:
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 1
		xor     edx, edx

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1
		mov     eax, 5

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     eax, 5
		call    near ___146c4h
		mov     bh, [esp+eax*1+10h]
		mov     esi, eax
		test    bh, bh
		jne     short ___18a83h
		cmp     eax, byte 0ffffffffh
		je      short ___18a83h
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
		call    dRally_Sound_pushEffect
	add 	esp, 18h
___18a83h:
		test    esi, esi
		jl      short ___18a9ah
		cmp     esi, byte 7
		jg      short ___18a9ah
		cmp     byte [esp+esi*1+10h], 1
		jne     short ___18a9ah
		mov     ebp, esi
		mov     esi, 0ffffffffh
___18a9ah:
		cmp     esi, byte 0ffffffffh
		jne     near ___189f1h
		test    ebp, ebp
		jl      near ___18ce2h
		mov     al, 1
		mov     ebx, 883h
		mov     edi, ___1866b8h+1c2h
		mov     esi, ___18076ch
		xor     ch, ch
		xor     edx, edx
		mov     [___185b59h], ch
		mov     [___185b62h], al
		mov     [___185b63h], al
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
		mov     [___185b65h], al
		mov     edi, ___1866b8h
		xor     eax, eax
		mov     esi, ___18077ch
		mov     [___185a48h], eax
		mov     [___185a44h], eax
		mov     [___185a40h], eax
		mov     [___185a3ch], eax
		mov     [___243d44h], eax
		mov     [___196ab4h], eax
		movsd   
		movsd   
		movsd   
		movsd   
		mov     eax, 883h
		mov     edi, esp
		mov     esi, ___180754h
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     [___1a0f9ch], eax
		call    near memset_
		mov     ebx, 0ah
		lea     edx, [esp+20h]
		mov     eax, ebp
		movsd   
		movsw   
		call    near itoa_
		lea     esi, [esp+20h]
		mov     edi, esp
		mov     edx, ___180134h
		call 	__STRCAT
		mov     eax, esp
		mov     ebx, 1
		call    near fopen_
		mov     edx, 883h
		mov     esi, eax
		mov     eax, [___1a0f9ch]
		mov     ecx, esi
		call    near fread_
		mov     eax, esi
		call    near fclose_
		mov     eax, [___1a0f9ch]
		mov     al, [eax]
		mov     ebp, 1
		and     eax, 0ffh
		mov     [esp+18h], ebp
		mov     [esp+1ch], eax
		mov     al, [esp+18h]
		mov     ah, 11h
		mul     ah
		mov     [esp+24h], al
___18bafh:
		mov     eax, [esp+18h]
		mov     edx, eax
		mov     ebx, 6
		sar     edx, 1fh
		idiv    ebx
		mov     eax, [esp+18h]
		mov     ebx, [___1a0f9ch]
		mov     ecx, edx
		add     ebx, eax
		mov     esi, [esp+18h]
		mov     eax, [ebx]
		rol     al, cl
		mov     [ebx], eax
		mov     eax, [___1a0f9ch]
		mov     dl, [esp+24h]
		mov     dh, [esi+eax*1]
		sub     dh, dl
		mov     [esi+eax*1], dh
		mov     dl, [esp+1ch]
		mov     bl, dh
		add     bl, dl
		mov     [esi+eax*1], bl
		mov     bh, [esp+24h]
		lea     edx, [esi+1]
		add     bh, 11h
		mov     [esp+18h], edx
		mov     [esp+24h], bh
		cmp     edx, 883h
		jl      short ___18bafh
		xor     edx, edx
		mov     dl, [eax+1]
		mov     [___1a1ef8h], edx
		xor     edx, edx
		mov     dl, [eax+2]
		mov     ecx, 870h
		mov     [___185a14h], edx
		xor     edx, edx
		mov     edi, ___1a01e0h
		mov     dl, [eax+3]
		lea     esi, [eax+13h]
		mov     [___196a94h], edx
		call 	__MOVS
		mov     eax, [___1a0f9ch]
		call    near ___3f77ch__freeMemory
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a023ch], byte 8
		setnz   dl
		and     edx, 0ffh
		mov     esi, [eax*4+___1a0240h]
		mov     [___1a0a50h], edx
		cmp     esi, byte 1
		setnz   dl
		and     edx, 0ffh
		mov     edi, [eax*4+___1a0244h]
		mov     [___1a0a54h], edx
		cmp     edi, byte 1
		setnz   dl
		and     edx, 0ffh
		mov     ebp, [eax*4+___1a0248h]
		mov     [___1a0a58h], edx
		cmp     ebp, byte 1
		setnz   al
		and     eax, 0ffh
		mov     [___1a0a5ch], eax
		mov     eax, ___18078ch
		call    near ___2a608h
		mov     eax, 1
		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___18ce2h:
		xor     eax, eax
		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

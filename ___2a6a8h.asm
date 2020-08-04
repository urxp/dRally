cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRLEN
	extern	___19bd60h
	extern	kmap
	extern	___3f71ch__allocateMemory
	extern	___1a0f9ch
	extern	memset
	extern	rand_watcom106
	extern	___1a1ef8h
	extern	___185a14h_UseWeapons
	extern	___196a94h
	extern	___18075ch
	extern	___1a01e0h
	extern	___1807bch
	extern	___182164h
	extern	strupr_fopen
	extern	fwrite
	extern	fclose
	extern	dRally_Memory_free
	extern	kmap
	extern	___243d44h
	extern	___196ab4h
	extern	___180134h
	extern	fread
	extern	___1a023ch
	extern	___1a0240h
	extern	___1a0a50h
	extern	___1a0244h
	extern	___1a0a54h
	extern	___1a0248h
	extern	___1a0a58h
	extern	___1a0a5ch

section .text

__GDECL(___2a6a8h)
		push    40h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 24h
		xor     edx, edx
		mov     ebx, [___19bd60h]
		mov     [esp+14h], edx
		test    ebx, ebx
		jne     near ___2a9fah
		cmp     byte [kmap+3ch], 0
		je      near ___2a836h
		mov     ebp, 883h
		mov     eax, ebp
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     ebx, ebp
		mov     [___1a0f9ch], eax
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx


	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 0ffh
		sar     edx, 1fh
		idiv    ebx
		mov     [esp+10h], edx
		mov     eax, [___1a0f9ch]
		mov     dl, [esp+10h]
		mov     [eax], dl
		mov     dl, [___1a1ef8h]
		mov     [eax+1], dl
		mov     dl, [___185a14h_UseWeapons]
		mov     edi, esp
		mov     [eax+2], dl
		mov     dl, [___196a94h]
		mov     esi, ___18075ch
		mov     [eax+3], dl
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
		mov     ecx, 1
		xor     esi, esi
		mov     [esp+14h], ecx
		mov     [esp+18h], esi
		jmp     short ___2a763h
___2a74dh:
		mov     edx, [___1a0f9ch]
		lea     ebx, [edi+edx*1]
		mov     dl, [esp+edi*1]
		mov     [ebx+4], dl
		lea     edx, [edi+1]
		mov     [esp+18h], edx
___2a763h:
		mov     edi, esp
		call 	__STRLEN
		mov     edi, [esp+18h]
		cmp     ecx, edi
		ja      short ___2a74dh
		mov     ecx, 870h
		mov     edi, [___1a0f9ch]
		mov     esi, ___1a01e0h
		add     edi, byte 13h
		call 	__MOVS
		mov     eax, 1
		mov     [esp+18h], eax
		cmp     ebp, eax
		jle     short ___2a801h
		mov     al, [esp+18h]
		mov     ah, 11h
		mul     ah
		mov     [esp+20h], al
___2a7b3h:
		mov     ecx, [esp+18h]
		mov     ebx, [___1a0f9ch]
		add     ebx, ecx
		mov     al, [esp+10h]
		mov     dl, [ebx]
		sub     dl, al
		mov     al, [esp+20h]
		mov     [ebx], dl
		mov     dh, dl
		add     dh, al
		mov     eax, ecx
		mov     [ebx], dh
		mov     edx, ecx
		mov     ecx, 6
		sar     edx, 1fh
		idiv    ecx
		mov     ecx, edx
		mov     esi, [esp+18h]
		mov     eax, [ebx]
		ror     al, cl
		mov     [ebx], eax
		mov     bl, [esp+20h]
		inc     esi
		add     bl, 11h
		mov     [esp+18h], esi
		mov     [esp+20h], bl
		cmp     ebp, esi
		jg      short ___2a7b3h
___2a801h:
		mov     edx, ___1807bch
		mov     eax, ___182164h
		mov     ebx, 1

	push 	ecx
	push 	edx
	push 	eax
		call    strupr_fopen
	add 	esp, 8
	pop 	ecx

		mov     edi, eax
		mov     edx, ebp
		mov     eax, [___1a0f9ch]
		mov     ecx, edi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    fwrite
	add 	esp, 10h

		mov     eax, edi

	push 	edx
	push 	ecx
	push 	eax
		call    fclose
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, [___1a0f9ch]

	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

___2a836h:
		cmp     byte [kmap+3dh], 0
		je      near ___2a9fah
		mov     ebp, 2
		xor     eax, eax
		mov     ebx, 883h
		mov     [___243d44h], eax
		mov     [___196ab4h], eax
		mov     eax, 883h
		xor     edx, edx
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     [___1a0f9ch], eax
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		mov     edx, ___180134h
		mov     eax, ___182164h
		mov     [esp+14h], ebp

	push 	ecx
	push 	edx
	push 	eax
		call    strupr_fopen
	add 	esp, 8
	pop 	ecx

		mov     edi, eax
		test    eax, eax
		je      near ___2a9f2h
		mov     ebx, 1
		mov     edx, 883h
		mov     eax, [___1a0f9ch]
		mov     ecx, edi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    fread
	add 	esp, 10h

		mov     eax, edi

	push 	edx
	push 	ecx
	push 	eax
		call    fclose
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, [___1a0f9ch]
		mov     al, [eax]
		mov     ecx, 1
		and     eax, 0ffh
		mov     [esp+18h], ecx
		mov     [esp+10h], eax
		mov     al, [esp+18h]
		mov     ah, 11h
		mul     ah
		mov     [esp+1ch], al
___2a8ceh:
		mov     eax, [esp+18h]
		mov     edx, eax
		mov     ebx, 6
		sar     edx, 1fh
		idiv    ebx
		mov     esi, [esp+18h]
		mov     ebx, [___1a0f9ch]
		mov     ecx, edx
		add     ebx, esi
		mov     eax, [ebx]
		rol     al, cl
		mov     [ebx], eax
		mov     edx, [___1a0f9ch]
		mov     ebx, esi
		mov     al, [esp+1ch]
		mov     cl, [edx+ebx*1]
		sub     cl, al
		mov     al, [esp+10h]
		mov     [edx+ebx*1], cl
		mov     ch, cl
		lea     edi, [esi+1]
		add     ch, al
		mov     al, [esp+1ch]
		mov     [esp+18h], edi
		add     al, 11h
		mov     [edx+ebx*1], ch
		mov     [esp+1ch], al
		cmp     edi, 883h
		jl      short ___2a8ceh
		xor     eax, eax
		mov     al, [edx+1]
		mov     [___1a1ef8h], eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     ecx, 870h
		mov     [___185a14h_UseWeapons], eax
		xor     eax, eax
		mov     edi, ___1a01e0h
		mov     al, [edx+3]
		lea     esi, [edx+13h]
		mov     [___196a94h], eax
		call 	__MOVS
		mov     eax, [___1a0f9ch]

	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, [___1a1ef8h]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 2
		sub     edx, eax
		cmp     dword [edx*4+___1a023ch], byte 8
		setnz   al
		and     eax, 0ffh
		mov     ecx, [edx*4+___1a0240h]
		mov     [___1a0a50h], eax
		cmp     ecx, byte 1
		setnz   al
		and     eax, 0ffh
		mov     esi, [edx*4+___1a0244h]
		mov     [___1a0a54h], eax
		cmp     esi, byte 1
		setnz   al
		and     eax, 0ffh
		mov     edi, [edx*4+___1a0248h]
		mov     [___1a0a58h], eax
		cmp     edi, byte 1
		jne     short ___2a9dah
		xor     eax, eax
		mov     [___1a0a5ch], eax
		jmp     short ___2a9fah
___2a9dah:
		mov     dword [___1a0a5ch], 1
		mov     eax, [esp+14h]
		add     esp, byte 24h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2a9f2h:
		mov     dword [esp+14h], 3
___2a9fah:
		mov     eax, [esp+14h]
		add     esp, byte 24h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

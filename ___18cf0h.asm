cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern 	___180748h
	extern 	___1866b8h
	extern 	___180754h
	extern 	itoa_watcom106
	extern 	GET_FILE_SIZE
	extern 	___18808h_cdecl
	extern 	___1866b8h
	extern 	___18075ch
	extern 	___1a1138h__VESA101h_DefaultScreenBufferB
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___13710h
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___146c4h_cdecl
	extern 	___13248h
	extern 	___18079ch
	extern 	___185c0bh
	extern 	___1a1108h
	extern 	___12e78h_cdecl
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	strcmp
	extern 	___180130h
	extern 	___1858c8h
	extern 	___17510h
	extern 	___3f71ch__allocateMemory
	extern 	___1a0f9ch
	extern 	memset
	extern 	rand_watcom106
	extern 	___1a1ef8h
	extern 	___185a14h_UseWeapons
	extern 	___196a94h
	extern 	___1a01e0h
	extern 	___1807bch
	extern 	strupr_fopen
	extern 	fwrite
	extern 	fclose
	extern 	dRally_Memory_free
	extern 	___1807c0h
	extern 	___2a608h
	extern	___185b58h

section .text

__GDECL(___18cf0h)
		push    64h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 34h
		xor     edx, edx
		xor     ebp, ebp
		mov     [esp+28h], edx
___18d0bh:
		mov     eax, [esp+28h]
		mov     dl, 1
		mov     esi, ___180748h
		lea     edi, [ebp+___1866b8h+8cah]
		mov     [eax+___185b58h+2dh], dl
		movsd   
		movsd   
		movsw   
		movsb   
		lea     edi, [esp+10h]
		mov     esi, ___180754h
		mov     ebx, 0ah
		movsd   
		movsw   
		lea     edx, [esp+2ch]
		lea     esi, [esp+2ch]
		lea     edi, [esp+10h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		lea     eax, [esp+10h]

	push 	edx
	push 	ecx
	push 	eax
		call    near GET_FILE_SIZE
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		test    eax, eax
		jle     short ___18d88h
		mov     eax, ___1866b8h+8cah
		lea     edx, [esp+10h]
		add     eax, ebp

	push 	ecx
	push 	edx
	push 	eax
		call    ___18808h_cdecl
	add 	esp, 8
	pop 	ecx

___18d88h:
		mov     ebx, [esp+28h]
		inc     ebx
		add     ebp, byte 32h
		mov     [esp+28h], ebx
		cmp     ebx, byte 8
		jl      near ___18d0bh
		mov     edi, ___1866b8h+0a28h
		mov     esi, ___18075ch
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
		mov     dword [esp+24h], 0ffffffffh
___18db5h:
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

	push 	edx
	push 	ecx
	push 	eax
		call    ___146c4h_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx
	
		mov     esi, eax
		mov     ebp, eax
		test    eax, eax
		jl      near ___18ee0h
		cmp     eax, byte 7
		jg      near ___18ee0h
		imul    esi, esi, byte 32h
		mov     eax, 5
		mov     ecx, 46h
		xor     edx, edx
		mov     ebx, 186h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 113h
		mov     eax, 78h
		call    near ___13248h
		mov     ecx, 2c182h
		mov     ebx, ___18079ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		add     esi, ___1866b8h+8cah
		mov     edx, ___180748h
		mov     eax, esi

	push 	ecx
	push 	edx
	push 	eax
		call    strcmp
	add 	esp,8
	pop 	ecx

		test    eax, eax
		je      short ___18ea6h
		mov     edi, esp
		call 	__STRCPY
		jmp     short ___18eaeh
___18ea6h:
		mov     al, [___180130h]
		mov     [esp], al
___18eaeh:
		push    byte 0
		push    byte 1
		push    byte 1
		push    140h
		mov     ecx, ___1858c8h
		mov     ebx, 12ah
		push    byte 0fh
		mov     edx, 82h
		lea     eax, [esp+14h]
		call    near ___17510h
		test    eax, eax
		je      short ___18ee0h
		mov     [esp+24h], ebp
		mov     ebp, 0ffffffffh
___18ee0h:
		cmp     ebp, byte 0ffffffffh
		jne     near ___18db5h
		cmp     dword [esp+24h], byte 0
		jl      near ___190b8h
		mov     ebp, 883h
		mov     eax, ebp
		xor     edx, edx
		
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
		mov     [esp+20h], edx
		mov     eax, [___1a0f9ch]
		mov     dl, [esp+20h]
		mov     [eax], dl
		mov     dl, [___1a1ef8h]
		mov     [eax+1], dl
		mov     dl, [___185a14h_UseWeapons]
		mov     [eax+2], dl
		mov     dl, [___196a94h]
		mov     [eax+3], dl
		xor     eax, eax
		mov     [esp+28h], eax
		jmp     short ___18f65h
___18f51h:
		mov     esi, edx
		mov     eax, [___1a0f9ch]
		inc     esi
		add     eax, edx
		mov     dl, [esp+edx*1]
		mov     [esp+28h], esi
		mov     [eax+4], dl
___18f65h:
		mov     edi, esp
		mov     edx, [esp+28h]
		call 	__STRLEN
		cmp     ecx, edx
		ja      short ___18f51h
		mov     ecx, 870h
		mov     edi, [___1a0f9ch]
		mov     esi, ___1a01e0h
		add     edi, byte 13h
		mov     ebx, 1
		call 	__MOVS
		mov     [esp+28h], ebx
		cmp     ebp, ebx
		jle     short ___19001h
		mov     al, [esp+28h]
		mov     ah, 11h
		mul     ah
		mov     [esp+30h], al
___18fb5h:
		mov     edi, [esp+28h]
		mov     ebx, [___1a0f9ch]
		add     ebx, edi
		mov     al, [esp+20h]
		mov     dh, [ebx]
		sub     dh, al
		mov     al, [esp+30h]
		mov     cl, dh
		mov     [ebx], dh
		mov     edx, edi
		add     cl, al
		mov     eax, edi
		sar     edx, 1fh
		mov     [ebx], cl
		mov     ecx, 6
		idiv    ecx
		mov     ecx, edx
		mov     eax, [ebx]
		ror     al, cl
		mov     [ebx], eax
		mov     ch, [esp+30h]
		lea     eax, [edi+1]
		add     ch, 11h
		mov     [esp+28h], eax
		mov     [esp+30h], ch
		cmp     ebp, eax
		jg      short ___18fb5h
___19001h:
		lea     edi, [esp+10h]
		mov     ebx, 0ah
		mov     esi, ___180754h
		lea     edx, [esp+2ch]
		mov     eax, [esp+24h]
		movsd   
		movsw   

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		lea     esi, [esp+2ch]
		lea     edi, [esp+10h]
		mov     edx, ___1807bch
		call 	__STRCAT
		lea     eax, [esp+10h]
		mov     ebx, 1

	push 	ecx
	push 	edx
	push 	eax
		call    strupr_fopen
	add 	esp, 8
	pop 	ecx

		mov     esi, eax
		mov     edx, ebp
		mov     eax, [___1a0f9ch]
		mov     ecx, esi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    fwrite
	add 	esp, 10h
	
		mov     eax, esi

	push 	edx
	push 	ecx
	push 	eax
		call    fclose
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, [___1a0f9ch]
		xor     edx, edx

	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

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
	
		mov     eax, 5
		xor     edx, edx
		mov     edi, ___1866b8h+0a28h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, ___1807c0h
		mov     esi, ___18075ch
		call    near ___2a608h
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
___190b8h:
		add     esp, byte 34h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

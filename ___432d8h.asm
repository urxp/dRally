cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___243d74h
	extern	___243cf4h
	extern	___1de580h
	extern	___196dfch
	extern	___1de7f4h
	extern	___1831e4h
	extern	___1831ech
	extern	___1a54d0h
	extern	___1831f4h
	extern	bpa_read
	extern	bpk_decode2

section .text

__GDECL(___432d8h)
		push    4ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 28h
		mov     ebp, [___243d74h]
		xor     edx, edx
		mov     ebx, [___243cf4h]
		mov     [esp+10h], edx
		test    ebx, ebx
		jle     near ___4344eh
		mov     al, [esp+10h]
		mov     ah, 0ah
		mul     ah
		mov     edi, 25800h
		mov     [esp+1ch], edx
		mov     [esp+18h], edx
		mov     [esp+14h], edx
		mov     [esp+20h], edi
		mov     [esp+24h], al
___43326h:
		mov     eax, [esp+1ch]
		imul    esi, [eax+___1de580h], byte 0eh
		mov     edi, esp
		add     esi, ___196dfch
		call 	__STRCPY
		mov     eax, [esp+14h]
		cmp     dword [eax+___1de7f4h], byte 1
		jne     short ___43374h
		mov     eax, [esp+1ch]
		cmp     dword [eax+___1de580h], byte 6
		jge     short ___43374h
		mov     esi, ___1831e4h
		jmp     short ___43379h
___43374h:
		mov     esi, ___1831ech
___43379h:
		mov     edi, esp
		call 	__STRCAT
		mov     ebx, esp
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
		mov     esi, [esp+18h]
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		mov     ebp, [___243d74h]
		push    ___1a54d0h
		lea     eax, [esi+ebp*1]
		push    eax
		call 	bpk_decode2
		add 	esp, 8
		mov     cl, [esp+24h]
		mov     ebx, [esp+20h]
		mov     ebp, [___243d74h]
		mov     edx, esi
		cmp     esi, ebx
		jge     short ___433f2h
___433dah:
		lea     eax, [edx+ebp*1]
		mov     ch, [eax]
		cmp     ch, 0fh
		jb      short ___433edh
		cmp     ch, 18h
		ja      short ___433edh
		add     ch, cl
		mov     [eax], ch
___433edh:
		inc     edx
		cmp     edx, ebx
		jl      short ___433dah
___433f2h:
		mov     ecx, [esp+14h]
		mov     esi, [esp+1ch]
		mov     edi, [esp+20h]
		mov     ah, [esp+24h]
		mov     edx, [esp+10h]
		mov     ebx, [___243cf4h]
		mov     [___243d74h], ebp
		add     ecx, byte 54h
		add     esi, 94h
		add     edi, 25800h
		add     ah, 0ah
		inc     edx
		mov     [esp+14h], ecx
		mov     [esp+1ch], esi
		mov     [esp+24h], ah
		mov     eax, [esp+18h]
		mov     [esp+20h], edi
		add     eax, 25800h
		mov     [esp+10h], edx
		mov     [esp+18h], eax
		cmp     edx, ebx
		jl      near ___43326h
___4344eh:
		mov     ebp, [___243d74h]
		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

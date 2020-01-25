cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___3f71ch__allocateMemory
	extern	___1a0f90h
	extern	___1a0f88h
	extern	___1a0f84h
	extern	___1a0f98h
	extern	___1a0f8ch
	extern	___1822f0h
	extern	___1a1114h
	extern	___1a54d0h
	extern	___1a0f94h
	extern	___180144h
	extern	bpa_read_cdecl
	extern	bpk_decode2
	extern	___1822fch
	extern	___182308h
	extern	___182314h
	extern	___182320h
	extern	___182330h

section .text

__GDECL(___2faf0h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     eax, 1b80h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0f90h], eax
		mov     eax, 0e400h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0f88h], eax
		mov     eax, 2eb8h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0f84h], eax
		mov     eax, 110h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0f98h], eax
		mov     eax, 8700h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0f8ch], eax
		mov     eax, 18150h
		mov     ebx, ___1822f0h
		call    near ___3f71ch__allocateMemory
		mov     [___1a1114h], eax
		mov     eax, 0f0d2h
		mov     edx, ___1a54d0h
		call    near ___3f71ch__allocateMemory
		mov     [___1a0f94h], eax
		mov     eax, ___180144h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read_cdecl					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edx, [___1a0f90h]
		push    edx
		call    near bpk_decode2
		mov     ebx, ___1822fch
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
		mov     ebx, [___1a0f88h]
		push    ebx
		call    near bpk_decode2
		mov     ebx, ___182308h
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
		mov     ecx, [___1a0f84h]
		push    ecx
		call    near bpk_decode2
		mov     ebx, ___182314h
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
		mov     esi, [___1a0f8ch]
		push    esi
		call    near bpk_decode2
		mov     ebx, ___182320h
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
		mov     edi, [___1a0f98h]
		push    edi
		call    near bpk_decode2
		mov     ebx, ___182330h
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
		mov     ebp, [___1a0f94h]
		push    ebp
		call    near bpk_decode2
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

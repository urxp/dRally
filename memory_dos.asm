cpu 386
%include "macros.inc"

	extern	___60030h
	extern	memset_
	extern 	int386_
	extern	___24ccb0h
	extern	___58b20h
	extern	___5ff99h
	extern	RESTORE_IRQ_MASKS
	extern	___24cc88h

section .text

__GDECL(___5f734h_allocDosMem)
		push    ecx
		push 	ebx
		push    esi
		push 	edi

	mov 	ebx, [esp+1ch]
	mov 	edx, [esp+18h]
	mov 	eax, [esp+14h]

		sub     esp, byte 4
		mov     ecx, eax
		mov     esi, edx
		mov     [esp], bl
		mov 	eax, esi

	push 	edx
	push 	ecx
	sub 	esp, 4
	push 	esp
	push 	eax
		call 	DPMI_ALLOCATE_DOS_MEMORY_BLOCK
	add 	esp, 8
	pop 	ebx
	pop 	ecx
	pop 	edx

		test 	eax, eax
		jne 	___5f77ch
		push    byte 1
		call    near ___58b20h
		add     esp, byte 4
___5f77ch:
		;mov     ax, __AX(___24cc88h)
		mov     [ecx+0ah], ax
		;xor     eax, eax
		;mov     eax, __EAX(___24cc88h)
		shl     eax, 4
		mov     [ecx], eax
		;mov     ax, __DX(___24cc88h)
		mov 	eax, ebx
		mov     [ecx+8], ax
		mov     [ecx+4], esi
		mov     al, [esp]
		mov     [ecx+0ch], al
		test    al, al
		je      short ___5f7f3h
		lea 	eax, [ecx-1]
	push 	edx
	push 	ecx
	mov 	edx, [eax+5]
	push 	edx
	mov 	edx, [eax+1]
	push 	edx
		call 	DPMI_LOCK_LINEAR_REGION
	add 	esp, 8
	pop 	ecx
	pop 	edx
___5f7f3h:
		add     esp, byte 4
		pop 	edi
		pop     esi
		pop 	ebx
		pop     ecx
		retn    


__GDECL(DPMI_RESIZE_DOS_MEMORY_BLOCK)
	mov 	edx, [esp+8]
	mov 	eax, [esp+4]
	push 	edi
	push 	ebx
		mov 	edi, edx
		mov     __AX(___24cc88h), 102h
		lea     ebx, [edi+0fh]
		shr     ebx, 4
		mov     __DX(___24cc88h), ax
		mov     __BX(___24cc88h), bx
		mov     ebx, ___24cc88h
		mov     eax, 31h
		mov     edx, ebx
		call    near int386_
		xor 	eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne		.failed
		mov 	eax, 1
.failed:
	pop 	ebx
	pop 	edi
	retn

__GDECL(DPMI_RESIZE_MEMORY_BLOCK)
	push 	edi
	push 	ebx
	push 	edx

	mov 	edx, [esp+14h]
	mov 	eax, [esp+10h]

	push 	eax
	mov 	eax, [eax]

		mov 	edi, edx
		mov     edx, 503h
		mov     __AX(___24cc88h), dx
		mov     __DI(___24cc88h), ax
		shr     eax, 10h
		mov     __SI(___24cc88h), ax
		mov     eax, edi
		mov     ebx, ___24cc88h
		shr     eax, 10h
		mov     edx, ebx
		mov     __BX(___24cc88h), ax
		mov     eax, 31h
		mov     __CX(___24cc88h), di
		call    near int386_
		xor 	eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne		.failed
		;mov 	eax, 1
		mov 	ax, __BX(___24cc88h)
		shl 	eax, 10h
		mov		ax, __CX(___24cc88h)
		mov 	bx, __SI(___24cc88h)
		shl 	ebx, 10h
		mov		bx, __DI(___24cc88h)
	pop 	edx
		mov 	[edx], ebx
.failed:
	pop 	edx
	pop 	ebx
	pop 	edi
	retn

__GDECL(DPMI_FREE_MEMORY_BLOCK)
	mov 	eax, [esp+4]
	push 	ecx
	push 	ebx
	push 	edx	
		mov     __DI(___24cc88h), ax
		shr     eax, 10h
		mov     ecx, 502h
		mov     __SI(___24cc88h), ax
		mov     eax, 31h
		mov     __AX(___24cc88h), cx
		mov     ebx, ___24cc88h
		mov     edx, ebx
		call    near int386_
		xor 	eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne     .failed
		mov 	eax, 1
.failed:
	pop 	edx
	pop 	ebx
	pop 	ecx
	retn


__GDECL(DPMI_FREE_DOS_MEMORY_BLOCK)
	mov 	eax, [esp+4]
	push 	ebx
	push 	edx
		mov     ebx, 101h
		mov     __AX(___24cc88h), bx
		mov     __DX(___24cc88h), ax
		mov     ebx, ___24cc88h
		mov     eax, 31h
		mov     edx, ebx
		call    near int386_
		xor 	eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne     .failed
		mov 	eax, 1
.failed:
	pop 	edx
	pop 	ebx
	retn


__GDECL(DPMI_ALLOCATE_MEMORY_BLOCK)
	mov 	eax, [esp+4]
	push 	edx
	push 	ebx
		mov     edx, 501h
		mov     ebx, ___24cc88h
		mov 	__AX(___24cc88h), dx
		mov 	__CX(___24cc88h), ax
		shr     eax, 10h
		mov 	__BX(___24cc88h), ax
		mov     edx, ebx
		mov     eax, 31h
		call    near int386_
	xor 	eax, eax
	cmp     __CF(___24cc88h), byte 0
	jne 	.unsuccessful
		mov 	ax, __BX(___24cc88h)
		shl 	eax, 10h
		mov 	ax, __CX(___24cc88h)

		mov 	bx, __SI(___24cc88h)
		shl 	ebx, 10h
		mov 	bx, __DI(___24cc88h)
	mov 	[esp+0ch], ebx

.unsuccessful:
	pop 	ebx
	pop 	edx
		retn


__GDECL(DPMI_ALLOCATE_DOS_MEMORY_BLOCK)
	mov 	eax, [esp+4]
		push 	ebx
		push 	ecx
		push 	edx

	mov 	edx, [esp+14h]
	push 	edx
		mov     ebx, 100h
		mov     __EAX(___24cc88h), 0
		mov     __AX(___24cc88h), bx
		add 	eax, 0fh
		shr     eax, 4
		mov     ebx, ___24cc88h
		mov     __BX(___24cc88h), ax
		mov     eax, 31h
		mov     edx, ebx
		call    near int386_
		xor		eax, eax
		xor 	ebx, ebx
		cmp     __CF(___24cc88h), byte 0
		jne      .failed
		mov 	ax, __AX(___24cc88h)
		mov 	bx, __DX(___24cc88h)
	pop 	edx
		mov 	[edx], ebx
.failed:
		pop 	edx
		pop 	ecx
		pop 	ebx
		retn


__GDECL(DPMI_LOCK_LINEAR_REGION)
		push 	ebx
		push 	ecx
		push 	edx
		push 	esi
		mov     esi, 600h
		mov     edx, [esp+14h]
		mov     ebx, ___24cc88h
		shr     edx, 10h
		mov     __AX(___24cc88h), si
		mov     __BX(___24cc88h), dx
		mov     edx, [esp+18h]
		mov     si, [esp+14h]
		shr     edx, 10h
		mov     ax, [esp+18h]
		mov     __SI(___24cc88h), dx
		mov     __DI(___24cc88h), ax
		mov     eax, 31h
		mov     edx, ebx
		mov     __CX(___24cc88h), si
		call    near int386_
		xor 	eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne     .failed
		mov 	eax, 1
.failed:
		pop 	esi
		pop 	edx
		pop 	ecx
		pop 	ebx
		retn

__GDECL(DPMI_UNLOCK_LINEAR_REGION)
	push 	ebx
	push 	ecx
	push 	edx
	push 	edi
		;mov 	edi, eax
		mov     eax, [esp+14h]
		shr     eax, 10h
		mov     __BX(___24cc88h), ax
		mov     ax, [esp+14h]
		mov     edx, 601h
		mov     __CX(___24cc88h), ax
		mov     eax, [esp+18h]
		mov     ebx, ___24cc88h
		shr     eax, 10h
		mov     __AX(___24cc88h), dx
		mov     __SI(___24cc88h), ax
		mov     ax, [esp+18h]
		mov     edx, ebx
		mov     __DI(___24cc88h), ax
		mov     eax, 31h
		call    near int386_
		xor 	eax, eax
		cmp     __CF(___24cc88h), byte 0
		jne     .failed
		mov 	eax, 1
.failed:
	pop 	edi
	pop 	edx
	pop 	ecx
	pop 	ebx
		retn



__GDECL(dRally_System_init)
		push    ebx
		push    edx
		call    near ___60030h
		mov     edx, 10000h
		mov     eax, ___24ccb0h
		xor     ebx, ebx


	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    near ___5f2e4h_cdecl
	add 	esp, 0ch
	pop 	ecx


		mov     ebx, 10000h
		mov     eax, [___24ccb0h]
		xor     edx, edx
		call    near memset_
		pop     edx
		pop     ebx
		retn    

    align   4

__GDECL(dRally_System_clean)
		push    ebx
		push    ecx
		push    edx
		push    esi
	push 	eax
	push 	ecx
	push 	edx
		call    near ___5ff99h
	pop 	edx
	pop 	ecx
	pop 	eax
		mov     ebx, [___24ccb0h]
___5ec13h:
		mov     edx, ebx
		mov     cl, [ebx]
		xor     eax, eax
		test    cl, cl
		jne     short ___5ec2fh
___5ec1dh:
		cmp     eax, dword 0e38h
		jae     short ___5ec2fh
		mov     ch, [edx+12h]
		add     edx, byte 12h
		inc     eax
		test    ch, ch
		je      short ___5ec1dh
___5ec2fh:
		cmp     eax, dword 0e38h
		jae     short ___5ec44h
		imul    eax, eax, byte 12h
		mov     eax, [ebx+eax*1+1]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx
		jmp     short ___5ec13h
___5ec44h:
		mov     al, [___24ccb0h+0eh]
		mov     edx, ___24ccb0h
		test    al, al
		je      short ___5ec9ch
		lea 	eax, [___24ccb0h-1]
	push 	edx
	push 	ecx
	mov 	edx, [eax+5]
	push 	edx
	mov 	edx, [eax+1]
	push 	edx
		call 	DPMI_UNLOCK_LINEAR_REGION
	add 	esp, 8
	pop 	ecx
	pop 	edx
___5ec9ch:
		mov     eax, [edx+8]
	push 	edx
	push 	ecx
	push 	eax
		call 	DPMI_FREE_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		test 	eax, eax
		jne      ___5ecdbh
		push    byte 5
		call    near ___58b20h
		add     esp, byte 4
___5ecdbh:
		mov     dword [edx+8], 0
		mov     word [edx+0ch], 0
		mov     dword [edx], 0
		mov     dword [edx+4], 0
		mov     byte [edx+0eh], 0
		call    near RESTORE_IRQ_MASKS
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

    align   4

__GDECL(dRally_Memory_alloc)
		push    ebx
		push    ecx
		push    esi
		push    edi

    mov     edx, [esp+18h]
    mov     eax, [esp+14h]
    
		sub     esp, byte 4
		mov     esi, eax
		mov     [esp], dl
		mov     edi, [___24ccb0h]
		xor     ecx, ecx
		mov     dl, [edi]
		mov     eax, edi
		test    dl, dl
		je      short ___5ed67h
___5ed54h:
		cmp     ecx, 0e38h
		jae     short ___5ed67h
		mov     dh, [eax+12h]
		add     eax, byte 12h
		inc     ecx
		test    dh, dh
		jne     short ___5ed54h
___5ed67h:
		cmp     ecx, 0e38h
		jne     short ___5ed79h
		push    byte 0dh
		call    near ___58b20h
		add     esp, byte 4
___5ed79h:
		cmp     esi, 100000h
		jb      short ___5ed87h
		or      si, 0fffh
		inc     esi
___5ed87h:
		mov 	eax, esi

	push 	edx
	push 	ecx
	push 	eax
		call 	DPMI_ALLOCATE_MEMORY_BLOCK
	pop 	ebx
	pop 	ecx
	pop 	edx

		cmp 	eax, 0
		je		___5ee09h
		mov 	edx, eax
	;	mov 	bx, __SI(___24cc88h)
	;	shl 	ebx, 10h
	;	mov 	bx, __DI(___24cc88h)
		lea     eax, [ecx*8+0]
		add     eax, ecx
		mov     [edi+eax*2+9], ebx
		mov     byte [edi+eax*2], 1
		mov     [edi+eax*2+1], edx
		jmp     ___5ee7ah
___5ee09h:
		mov 	eax, esi

	push 	edx
	push 	ecx
	sub 	esp, 4
	push 	esp
	push 	eax
		call 	DPMI_ALLOCATE_DOS_MEMORY_BLOCK
	add 	esp, 8
	pop 	ebx
	pop 	ecx
	pop 	edx

		test	eax, eax
		jne      ___5ee45h
		push    byte 0dh
		call    near ___58b20h
		add     esp, byte 4
___5ee45h:
	mov 	edx, eax
		lea     eax, [ecx*8+0]
		add     eax, ecx
		;mov     dx, __AX(___24cc88h)
		mov     [edi+eax*2+0fh], dx
		;xor     edx, edx
		;mov     edx, __EAX(___24cc88h)
		shl     edx, 4
		mov     [edi+eax*2+1], edx
		;mov     dx, __DX(___24cc88h)
	mov 	edx, ebx
		mov     byte [edi+eax*2], 2
		mov     [edi+eax*2+0dh], dx
___5ee7ah:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     eax, edi
		mov     bl, [esp]
		mov     [eax+5], esi
		test    bl, bl
		je      short ___5eeddh

	push 	edx
	push 	ecx
	mov 	edx, [eax+5]
	push 	edx
	mov 	edx, [eax+1]
	push 	edx
		call 	DPMI_LOCK_LINEAR_REGION
	add 	esp, 8
	pop 	ecx
	pop 	edx

___5eeddh:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     edi, eax
		mov     al, [esp]
		mov     [edi+11h], al
		mov     eax, [edi+1]
		add     esp, byte 4
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

    align   4

;; 	dRally_Memory_free(__eax)
__GDECL(dRally_Memory_free)
	mov 	eax, [esp+4]
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub 	esp, 4
		mov     edx, eax
		mov     esi, [___24ccb0h]
		xor     ecx, ecx
		mov     ebx, [esi+1]
		mov     eax, esi
		cmp     edx, ebx
		je      short ___5ef27h
___5ef14h:
		cmp     ecx, 0e38h
		jae     short ___5ef27h
		mov     edi, [eax+13h]
		add     eax, byte 12h
		inc     ecx
		cmp     edx, edi
		jne     short ___5ef14h
___5ef27h:
		cmp     ecx, 0e38h
		je      short ___5ef3eh
		lea     eax, [ecx*8+0]
		add     eax, ecx
		cmp     byte [esi+eax*2], 0
		jne     short ___5ef48h
___5ef3eh:
		push    byte 0eh
		call    near ___58b20h
		add     esp, byte 4
___5ef48h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		lea     edi, [esi+eax*1]
		mov 	dword [esp], 1
		cmp     byte [edi+11h], 0
		je      short ___5efa9h
		mov 	eax, edi
	push 	edx
	push 	ecx
	mov 	edx, [eax+5]
	push 	edx
	mov 	edx, [eax+1]
	push 	edx
		call 	DPMI_UNLOCK_LINEAR_REGION
	add 	esp, 8
	pop 	ecx
	pop 	edx
		mov 	[esp], eax
		mov     byte [edi+11h], 0
___5efa9h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     eax, esi
		mov     dl, [eax]
		cmp     dl, 1
		jb      short ___5f01eh
		jbe     short ___5efc6h
		cmp     dl, 2
		je      short ___5eff7h
		jmp     short ___5f01eh
___5efc6h:
		mov 	eax, [eax+9]
	push 	edx
	push 	ecx
	push 	eax
		call 	DPMI_FREE_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		test 	eax, eax
		jne 	___5f031h 	
		push    byte 0eh
		call    near ___58b20h
		add     esp, byte 4
___5eff7h:
		mov     ax, [eax+0dh]
	push 	edx
	push 	ecx
	push 	eax
		call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		test 	eax, eax
		jne 	___5f031h
		push    byte 0eh
		call    near ___58b20h
		add     esp, byte 4
___5f01eh:
		mov 	eax, [esp]
		test 	eax, eax
		jne 	___5f031h
		push    byte 0eh
		call    near ___58b20h
		add     esp, byte 4
___5f031h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		mov     byte [esi+eax*2], 0
		add 	esp, 4
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

    align   4

__GDECL(dRally_Memory_resize)
	mov 	edx, [esp+8]
	mov 	eax, [esp+4]
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub 	esp, 4
		mov     ebx, eax
		mov     edi, edx
		mov     esi, [___24ccb0h]
		xor     ecx, ecx
		mov     edx, [esi+1]
		mov     eax, esi
		cmp     ebx, edx
		je      short ___5f0adh
___5f09ah:
		cmp     ecx, 0e38h
		jae     short ___5f0adh
		mov     ebp, [eax+13h]
		add     eax, byte 12h
		inc     ecx
		cmp     ebx, ebp
		jne     short ___5f09ah
___5f0adh:
		cmp     ecx, 0e38h
		je      short ___5f0c4h
		lea     eax, [ecx*8+0]
		add     eax, ecx
		cmp     byte [esi+eax*2], 0
		jne     short ___5f0ceh
___5f0c4h:
		push    byte 0fh
		call    near ___58b20h
		add     esp, byte 4
___5f0ceh:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     eax, esi
		mov 	dword [esp], 1
		cmp     byte [eax+11h], 0
		je      short ___5f12dh
	push 	edx
	push 	ecx
	mov 	edx, [eax+5]
	push 	edx
	mov 	edx, [eax+1]
	push 	edx
		call 	DPMI_UNLOCK_LINEAR_REGION
	add 	esp, 8
	pop 	ecx
	pop 	edx
		mov 	[esp], eax
___5f12dh:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     eax, esi
		mov     bl, [eax]
		cmp     bl, 1
		jb      ___5f1c2h
		jbe     short ___5f14eh
		cmp     bl, 2
		je      short ___5f191h
		jmp     ___5f1c2h
___5f14eh:
		mov 	edx, edi
	push 	eax
	lea 	eax, [eax+9]


    push    ecx
    push    edx
    push    eax
		call 	DPMI_RESIZE_MEMORY_BLOCK
    add     esp, 8
    pop     ecx

    mov     ebx, eax


		test 	eax, eax
		jne 	___5f1d5h_0
		push    byte 0fh
		call    near ___58b20h
		add     esp, byte 4

___5f1d5h_0:
	pop 	eax
	mov 	[eax+1], ebx
	jmp 	___5f1d5h


___5f191h:
		mov 	edx, edi
	;push 	eax
		mov	 	ax, [eax+0dh]

	push 	ecx
	push 	edx
	push 	eax
		call 	DPMI_RESIZE_DOS_MEMORY_BLOCK
	add 	esp, 8
	pop 	ecx

	;mov 	ebx, eax
		test 	eax, eax
		jne		___5f1d5h_1
		push    byte 0fh
		call    near ___58b20h
		add     esp, byte 4

___5f1d5h_1:
	;pop 	eax
	;shl 	ebx, 4
	;mov 	[eax+1], ebx 
	jmp 	___5f1d5h


___5f1c2h:
		mov 	eax, [esp]
		test 	eax, eax
		jne     ___5f1d5h
		push    byte 0fh
		call    near ___58b20h
		add     esp, byte 4
___5f1d5h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		add     eax, eax
		add     eax, esi
		mov     bl, [eax+11h]
		mov     [eax+5], edi
		test    bl, bl
		je      short ___5f234h

	push 	edx
	push 	ecx
	mov 	edx, [eax+5]
	push 	edx
	mov 	edx, [eax+1]
	push 	edx
		call 	DPMI_LOCK_LINEAR_REGION
	add 	esp, 8
	pop 	ecx
	pop 	edx


___5f234h:
		lea     eax, [ecx*8+0]
		add     eax, ecx
		mov     eax, [esi+eax*2+1]
		add 	esp, 4
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

__GDECL(___5f2e4h_cdecl)
		push    ebx
		push    esi
		push    edi

	mov 	ebx, [esp+18h]
	mov 	edx, [esp+14h]
	mov 	eax, [esp+10h]

		sub     esp, byte 4
		mov     ecx, eax
		mov     esi, edx
		mov     [esp], bl
		cmp     edx, 100000h
		jb      short ___5f2ffh
		or      si, 0fffh
		inc     esi
___5f2ffh:
		mov 	eax, esi

	push 	edx
	push 	ecx
	push 	eax
		call 	DPMI_ALLOCATE_MEMORY_BLOCK
	pop 	ebx
	pop 	ecx
	pop 	edx

		cmp 	eax, 0
		jne 	___5f341h
		push    byte 4
		call    near ___58b20h
		add     esp, byte 4
___5f341h:
		mov 	edx, eax
		;mov 	bx, __SI(___24cc88h)
		;shl 	ebx, 10h
		;mov 	bx, __DI(___24cc88h)
		mov     [ecx+8], ebx
		mov     [ecx+4], esi
		mov     [ecx], edx
		mov     al, [esp]
		mov     [ecx+0eh], al
		test    al, al
		je      short ___5f4a4h
		lea 	eax, [ecx-1]

	push 	edx
	push 	ecx
	mov 	edx, [eax+5]
	push 	edx
	mov 	edx, [eax+1]
	push 	edx
		call 	DPMI_LOCK_LINEAR_REGION
	add 	esp, 8
	pop 	ecx
	pop 	edx

___5f4a4h:
		add     esp, byte 4
		pop     edi
		pop     esi
		pop     ebx
		retn    

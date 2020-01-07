cpu 386
%include "macros.inc"

	extern 	DPMI_ALLOCATE_DOS_MEMORY_BLOCK
	extern 	DPMI_FREE_DOS_MEMORY_BLOCK

	extern	__CHK
	extern	___24e450h
	extern	___24e3f0h
	extern	___24e418h
	extern	___24cf28h
	extern	___24df28h
	extern	___199fd0h
	extern	__STOSD
	extern	___199fb8h
	extern	___199fb6h
	extern	___24e596h
	extern	__STOSB
	extern	___24e4c0h
	extern	memset_
	extern	___24e4ach
	extern	___24e46ch
	extern	___24e4d0h
	extern	___24e4c4h
	extern	___24cd00h
	extern	___24e4b4h
	extern	___24cef0h
	extern	___24cef1h
	extern	___24cef2h
	extern	___24cef3h
	extern	___24cef4h
	extern	___24cef5h
	extern	___24cef6h
	extern	___24cef7h
	extern	___24cef8h
	extern	___24cef9h
	extern	___24e54eh
	extern	___24e58ah
	extern	___24e50ch
	extern	___24e52eh
	extern	___24e51ch
	extern	___24e444h
	extern	___24e440h
	extern	___24e528h
	extern	___199fbch
	extern	___199fa4h
	extern	___24e554h
	extern	___24e564h
	extern	___24cd60h
	extern	___24cdc0h
	extern	___24cee0h
	extern	___199fc0h
	extern	__GETDS
	extern	___24e47ch
	extern	inp_
	extern	___199fc8h
	extern	___199fcch
	extern	___199fc4h
	extern	outp_
	extern	int386_
	extern	___24e48ch
	extern	___24e4cch
	extern	___24e4d4h
	extern	___24e480h
	extern	___24e4bch
	extern	___24e4c8h
	extern	___24cf18h
	extern	___24cf1ch
	extern	___24cee4h
	extern	___24cf20h
	extern	___24cee8h
	extern	___24cf24h
	extern	___24ceech
	extern	___24e4b8h
	extern	___199fach
	extern	___199fa8h
	extern	___24e484h
	extern	___24e460h
	extern	___24e552h
	extern	___24e448h
	extern	___24e45ch
	extern	___24e454h
	extern	___24e54ch
	extern	___24e548h
	extern	___24e458h
	extern	___24e58eh
	extern	___24e44ch
	extern	___24e464h
	extern	___24ce20h
	extern	___24cd64h
	extern	___24cea0h
	extern	___24cd04h
	extern	___24ce60h
	extern	___24cdc4h
	extern	___24e576h
	extern	___199fa0h
	extern	___199f9ch
	extern	___24e568h
	extern	___24e570h
	extern	_dos_gettime_
	extern	___24e4b0h
	extern	___24e4a8h
	extern	___24e468h
	extern	___24e488h
	extern	___199fb0h
	extern	memcpy_
	extern	___80000h
	extern	_fmemcpy_
	extern	strlen_
	extern	___1850ach
	extern	___24e328h
	extern	strcpy_
	extern	strcat_
	extern	strupr_
	extern	strstr_
	extern	___24e4d8h
	extern	___24e470h
	extern	int386x_
	extern	___199fd4h
	extern	___24e4fah
	extern	___24e4e8h
	extern 	getTimerTicks

section .text

db	4dh,75h,6ch,74h,69h,70h,6ch,61h,79h,65h,72h,20h,45h,6eh,67h,69h
db	6eh,65h,20h,76h,31h,2eh,32h,30h,20h,2ah,20h,43h,6fh,70h,79h,72h
db	69h,67h,68h,74h,20h,28h,63h,29h,20h,31h,39h,39h,35h,2dh,39h,36h
db	20h,4bh,69h,6dh,20h,53h,61h,6ch,6fh,0
	align 	4
___608ech:
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     esi, [___24e450h]
		mov     [esp], eax
		mov     [esp+4], edx
___6090bh:
		mov     ebx, [esp]
		mov     ecx, [esp+4]
		lea     edx, [ebx+ecx*1]
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     eax, [eax*4+___24e3f0h]
		mov     [esp+8], eax
___60929h:
		mov     eax, [ebx*4+___24e3f0h]
		cmp     eax, [esp+8]
		jge     short ___60939h
		inc     ebx
		jmp     short ___60929h
___60939h:
		mov     eax, [esp+8]
___6093dh:
		lea     edx, [ecx*4+0]
		mov     edi, [edx+___24e3f0h]
		cmp     eax, edi
		jge     short ___60951h
		dec     ecx
		jmp     short ___6093dh
___60951h:
		cmp     ebx, ecx
		jg      near ___609ech
		mov     eax, [ebx*4+___24e3f0h]
		mov     [ebx*4+___24e3f0h], edi
		mov     [edx+___24e3f0h], eax
		mov     eax, [ebx*4+___24e418h]
		mov     ebp, [edx+___24e418h]
		mov     [ebx*4+___24e418h], ebp
		mov     [edx+___24e418h], eax
		xor     eax, eax
		cmp     eax, esi
		jl      short ___60991h
		xor     eax, eax
		jmp     short ___609cbh
___60991h:
		mov     edx, ebx
		shl     edx, 0ah
		mov     dl, [edx+eax*1+___24cf28h]
		mov     [eax+___24df28h], dl
		inc     eax
		cmp     eax, esi
		jl      short ___60991h
		xor     eax, eax
		cmp     eax, esi
		jl      short ___609b2h
		xor     eax, eax
		jmp     short ___609e6h
___609b2h:
		mov     edx, ecx
		shl     edx, 0ah
		mov     edi, ebx
		shl     edi, 0ah
		mov     dl, [edx+eax*1+___24cf28h]
		mov     [edi+eax*1+___24cf28h], dl
		inc     eax
___609cbh:
		cmp     eax, esi
		jl      short ___609b2h
		xor     eax, eax
		jmp     short ___609e6h
___609d3h:
		mov     edi, ecx
		shl     edi, 0ah
		mov     dl, [eax+___24df28h]
		mov     [edi+eax*1+___24cf28h], dl
		inc     eax
___609e6h:
		cmp     eax, esi
		jl      short ___609d3h
		inc     ebx
		dec     ecx
___609ech:
		cmp     ebx, ecx
		jl      near ___60929h
		mov     [___24e450h], esi
		mov     ebp, [esp]
		cmp     ecx, ebp
		jle     short ___60a0ah
		mov     edx, ecx
		mov     eax, ebp
		call    near ___608ech
___60a0ah:
		mov     esi, [___24e450h]
		cmp     ebx, [esp+4]
		jge     short ___60a1eh
		mov     [esp], ebx
		jmp     near ___6090bh
___60a1eh:
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
	align 	4
__GDECL(___60a28h)
		push    8
		call    near __CHK
		push    edx
		push 	eax
		call 	getTimerTicks
		mov 	edx, eax
		pop		eax
		add     edx, eax
___60a41h:
		call 	getTimerTicks
		cmp     edx, eax
		ja      short ___60a41h
		pop     edx
		retn    
	align 	4
__GDECL(___60a84h)
		push    10h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     ecx, 0ah
		xor     edx, edx
		mov     eax, ___24e3f0h
		call    near __STOSD
		mov     eax, [___199fb8h]
		mov     [___24e3f0h], eax
		mov     byte [___199fb6h], 1
		xor     ebx, ebx
___60ab5h:
		xor     eax, eax
___60ab7h:
		mov     edx, ebx
		shl     edx, 0ah
		xor     cl, cl
		mov     [edx+eax*1+___24cf28h], cl
		inc     eax
		cmp     eax, dword 400h
		jl      short ___60ab7h
		inc     ebx
		cmp     ebx, byte 5
		jl      short ___60ab5h
		mov     ecx, 0ah
		xor     edx, edx
		mov     eax, ___24e596h
		call    near __STOSB
		mov     eax, [___24e4c0h]
		add     eax, byte 4
		mov     ebx, 1000h
		xor     edx, edx
		call    near memset_
		mov     eax, [___24e4c0h]
		mov     word [eax], 0
		mov     word [eax+2], 0
		call    near ___6168ch
		mov     eax, [___24e4ach]
		add     eax, byte 4
		mov     ebx, 1000h
		xor     edx, edx
		call    near memset_
		mov     eax, [___24e4ach]
		mov     word [eax], 0
		mov     word [eax+2], 0
		mov     eax, [___24e46ch]
		mov     word [eax], 0
		mov     word [eax+2], 0
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
__GDECL(___60b48h)
		push    0ch
		call    near __CHK
		push    ebx
		push    ecx
		xor     ecx, ecx
		xor     ebx, ebx
		call    near ___60b60h
		pop     ecx
		pop     ebx
		retn    
__GDECL(___60b60h)
		push    28h
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 18h
		mov     [esp], eax
		mov     [esp+4], edx
		mov     ebp, ebx
		xor     edx, edx
		mov     [esp+0ch], edx
		lea     esi, [ecx+8]
		mov     eax, [___24e4c0h]
		mov     bx, [eax]
		mov     edx, ebx
		and     dh, 0fh
		and     edx, 0ffffh
		inc     ebx
		mov     [eax], bx
		mov     byte [edx+eax*1+4], 0d3h
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		mov     dl, [esp]
		mov     [ebx+eax*1+4], dl
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		mov     dl, [___199fb6h]
		mov     [ebx+eax*1+4], dl
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		mov     dl, [___199fb8h]
		mov     [ebx+eax*1+4], dl
		mov     edx, [___199fb8h]
		sar     edx, 8
		mov     [esp+14h], dl
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		lea     edx, [eax+ebx*1]
		mov     bl, [esp+14h]
		mov     [edx+4], bl
		mov     edx, [___199fb8h]
		sar     edx, 10h
		mov     [esp+14h], dl
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		mov     dl, [esp+14h]
		mov     [ebx+eax*1+4], dl
		mov     ebx, [___199fb8h]
		sar     ebx, 18h
		mov     dx, [eax]
		mov     edi, edx
		and     edi, 0fffh
		mov     [esp+10h], edi
		xor     edi, edi
		mov     di, [esp+10h]
		inc     edx
		mov     [eax], dx
		add     eax, edi
		mov     [eax+4], bl
		xor     eax, eax
		jmp     short ___60c9fh
___60c6bh:
		lea     edx, [eax+ebp*1]
		mov     [esp+8], edx
		mov     edx, [___24e4c0h]
		mov     bx, [edx]
		mov     edi, ebx
		and     edi, 0fffh
		mov     [esp+10h], edi
		xor     edi, edi
		mov     di, [esp+10h]
		inc     ebx
		mov     [edx], bx
		lea     ebx, [edi+edx*1]
		mov     edx, [esp+8]
		mov     dl, [edx]
		mov     [ebx+4], dl
		inc     eax
___60c9fh:
		cmp     eax, ecx
		jl      short ___60c6bh
		mov     eax, [___24e4c0h]
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		mov     byte [ebx+eax*1+4], 0ffh
		call    near ___6168ch
		xor     eax, eax
		mov     al, [___199fb6h]
		cmp     eax, [esp+4]
		jne     near ___61113h
		mov     edi, [___24e3f0h]
		mov     eax, 1
		jmp     short ___60cf6h
___60ce2h:
		lea     edx, [eax*4+0]
		mov     ebx, [edx+___24e3f0h]
		cmp     edi, ebx
		jle     short ___60cf5h
		mov     edi, ebx
___60cf5h:
		inc     eax
___60cf6h:
		xor     edx, edx
		mov     dl, [___199fb6h]
		cmp     eax, edx
		jl      short ___60ce2h
		mov     ebx, [___199fb8h]
		cmp     edi, ebx
		jne     near ___60f1eh
		xor     edi, ebx
		xor     eax, eax
		mov     esi, [___199fb8h]
		jmp     short ___60d37h
___60d1ch:
		cmp     esi, [eax*4+___24e3f0h]
		je      short ___60d36h
		mov     dl, [___199fb6h]
		mov     [eax+___24e596h], dl
		test    dl, dl
		je      short ___60d36h
		inc     edi
___60d36h:
		inc     eax
___60d37h:
		xor     edx, edx
		mov     dl, [___199fb6h]
		cmp     eax, edx
		jl      short ___60d1ch
		dec     edx
		cmp     edi, edx
		jne     near ___60ea2h
		call 	getTimerTicks
		mov 	edx, eax
		add     edx, byte 2
___60d5bh:
		call 	getTimerTicks
		cmp 	edx, eax
		ja      short ___60d5bh
		mov     eax, [___24e4c0h]
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		mov     byte [ebx+eax*1+4], 0c5h
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		lea     edx, [eax+ebx*1]
		mov     bl, [esp]
		mov     [edx+4], bl
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		lea     edx, [eax+ebx*1]
		mov     bl, [___199fb6h]
		mov     [edx+4], bl
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		mov     dl, [___199fb8h]
		mov     [ebx+eax*1+4], dl
		mov     edx, [___199fb8h]
		sar     edx, 8
		mov     [esp+14h], dl
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		mov     dl, [esp+14h]
		mov     [ebx+eax*1+4], dl
		mov     edx, [___199fb8h]
		sar     edx, 10h
		mov     [esp+14h], dl
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		lea     edx, [eax+ebx*1]
		mov     bl, [esp+14h]
		mov     [edx+4], bl
		mov     edx, [___199fb8h]
		sar     edx, 18h
		mov     [esp+14h], dl
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		mov     dl, [esp+14h]
		mov     [ebx+eax*1+4], dl
		xor     eax, eax
		jmp     short ___60e75h
___60e4bh:
		mov     edx, [___24e4c0h]
		mov     bx, [edx]
		mov     edi, ebx
		and     edi, 0fffh
		mov     [esp+10h], edi
		xor     edi, edi
		mov     di, [esp+10h]
		inc     ebx
		mov     [edx], bx
		lea     ebx, [edi+edx*1]
		mov     dl, [eax+ebp*1]
		mov     [ebx+4], dl
		inc     eax
___60e75h:
		cmp     eax, ecx
		jl      short ___60e4bh
		mov     eax, [___24e4c0h]
		mov     dx, [eax]
		mov     ebx, edx
		and     bh, 0fh
		and     ebx, 0ffffh
		inc     edx
		mov     [eax], dx
		mov     byte [ebx+eax*1+4], 0ffh
		call    near ___6168ch
		mov     dword [esp+0ch], 0ffffffffh
___60ea2h:
		cmp     dword [esp+0ch], byte 0ffffffffh
		jne     near ___611afh
		mov     eax, 0ffh
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		retn    
___60eb9h:
		cmp     edx, byte 1
		je      short ___60f1eh
		mov     eax, [___24e4ach]
		xor     edx, edx
		mov     dx, [eax+2]
		inc     edx
		and     edx, 0fffh
		mov     dl, [edx+eax*1+4]
		and     edx, 0ffh
		cmp     edx, [esp]
		jne     short ___60f11h
		xor     eax, eax
		jmp     short ___60f03h
___60ee3h:
		mov     edx, [___24e4ach]
		mov     bx, [edx+2]
		mov     edi, ebx
		and     edi, 0fffh
		movzx   ebp, di
		inc     ebx
		mov     [edx+2], bx
		mov     byte [edx+ebp*1+4], 0
		inc     eax
___60f03h:
		cmp     eax, esi
		jl      short ___60ee3h
		mov     dword [esp+0ch], 0ffffffffh
		jmp     short ___60f1eh
___60f11h:
		add     [eax+2], si
		jmp     short ___60f1eh
___60f17h:
		mov     edx, edi
		inc     edx
		mov     [eax+2], dx
___60f1eh:
		mov     eax, [___24e4ach]
		mov     dx, [eax]
		mov     di, [eax+2]
		cmp     dx, di
		je      near ___60ea2h
		cmp     dword [esp+0ch], byte 0ffffffffh
		je      near ___60ea2h
		xor     edx, edx
		mov     dx, di
		and     edx, 0fffh
		cmp     byte [edx+eax*1+4], 0c5h
		jne     short ___60f17h
		call 	getTimerTicks
		mov     [___199fd0h], eax
		xor     edx, edx
___60f5eh:
		mov     eax, [___24e4ach]
		xor     ebx, ebx
		mov     bx, [eax+2]
		add     ebx, ecx
		add     ebx, byte 7
		and     ebx, 0fffh
		cmp     byte [ebx+eax*1+4], 0ffh
		je      near ___60eb9h
		test    edx, edx
		jne     near ___60eb9h
		call    near ___6168ch
		mov     eax, [___199fd0h]
		add     eax, byte 5
		push 	eax
		call 	getTimerTicks
		mov 	ebx, eax
		pop 	eax
		cmp 	eax, ebx
		seta    al
		and     eax, 0ffh
		jne     short ___60f5eh
		mov     edx, 1
		mov     eax, [___24e4ach]
		inc     word [eax+2]
		jmp     short ___60f5eh
___60fb5h:
		cmp     edx, byte 1
		je      near ___61113h
		mov     eax, [___24e4ach]
		xor     edx, edx
		mov     dx, [eax+2]
		lea     ebx, [edx+1]
		and     ebx, 0fffh
		mov     bl, [ebx+eax*1+4]
		and     ebx, 0ffh
		cmp     ebx, [esp]
		jne     near ___61107h
		lea     ebx, [edx+3]
		and     ebx, 0fffh
		mov     bl, [ebx+eax*1+4]
		and     ebx, 0ffh
		lea     edi, [edx+4]
		and     edi, 0fffh
		movzx   edi, byte [edi+eax*1+4]
		shl     edi, 8
		add     ebx, edi
		lea     edi, [edx+5]
		and     edi, 0fffh
		movzx   edi, byte [edi+eax*1+4]
		shl     edi, 10h
		add     ebx, edi
		add     edx, byte 6
		and     edx, 0fffh
		mov     al, [edx+eax*1+4]
		and     eax, 0ffh
		shl     eax, 18h
		add     ebx, eax
		xor     edi, edi
		xor     eax, eax
___61039h:
		cmp     ebx, [eax*4+___24e3f0h]
		jne     short ___61047h
		mov     edi, 1
___61047h:
		inc     eax
		cmp     eax, byte 4
		jl      short ___61039h
		test    edi, edi
		jne     short ___610a5h
		xor     eax, eax
		mov     al, [___199fb6h]
		mov     [eax*4+___24e3f0h], ebx
		xor     eax, eax
		jmp     short ___6109bh
___61063h:
		mov     edx, [___24e4ach]
		xor     edi, edi
		mov     di, [edx+2]
		add     edi, eax
		add     edi, byte 7
		and     edi, 0fffh
		add     edi, edx
		xor     edx, edx
		mov     dl, [___199fb6h]
		shl     edx, 0ah
		add     edx, eax
		mov     [esp+8], edx
		mov     dl, [edi+4]
		mov     edi, [esp+8]
		mov     [edi+___24cf28h], dl
		inc     eax
___6109bh:
		cmp     eax, ecx
		jl      short ___61063h
		inc     byte [___199fb6h]
___610a5h:
		xor     eax, eax
___610a7h:
		mov     edi, [eax*4+___24e3f0h]
		cmp     ebx, edi
		jne     short ___610d3h
		mov     edx, [___24e4ach]
		xor     ebx, edi
		mov     bx, [edx+2]
		add     ebx, byte 2
		and     ebx, 0fffh
		mov     dl, [edx+ebx*1+4]
		mov     [eax+___24e596h], dl
		jmp     short ___610d9h
___610d3h:
		inc     eax
		cmp     eax, byte 4
		jl      short ___610a7h
___610d9h:
		xor     eax, eax
		cmp     eax, esi
		jl      short ___610e1h
		jmp     short ___61113h
___610e1h:
		mov     edx, [___24e4ach]
		mov     bx, [edx+2]
		mov     edi, ebx
		and     edi, 0fffh
		movzx   ebp, di
		inc     ebx
		mov     [edx+2], bx
		mov     byte [edx+ebp*1+4], 0
		inc     eax
		cmp     eax, esi
		jl      short ___610e1h
		jmp     short ___61113h
___61107h:
		add     edx, esi
		mov     [eax+2], dx
		jmp     short ___61113h
___6110fh:
		inc     word [eax+2]
___61113h:
		mov     eax, [___24e4ach]
		mov     dx, [eax]
		cmp     dx, [eax+2]
		je      near ___60ea2h
		xor     edx, edx
		mov     dl, [___199fb6h]
		cmp     edx, [esp+4]
		je      near ___60ea2h
		xor     edx, edx
		mov     dx, [eax+2]
		and     edx, 0fffh
		cmp     byte [edx+eax*1+4], 0d3h
		jne     short ___6110fh
		call 	getTimerTicks
		mov     [___199fd0h], eax
		xor     edx, edx
___61158h:
		mov     eax, [___24e4ach]
		xor     ebx, ebx
		mov     bx, [eax+2]
		add     ebx, ecx
		add     ebx, byte 7
		and     ebx, 0fffh
		cmp     byte [ebx+eax*1+4], 0ffh
		je      near ___60fb5h
		test    edx, edx
		jne     near ___60fb5h
		call    near ___6168ch
		mov     eax, [___199fd0h]
		add     eax, byte 5
		push 	eax
		call 	getTimerTicks
		mov 	ebx, eax
		pop 	eax
		cmp 	eax, ebx
		seta    al
		and     eax, 0ffh
		jne     short ___61158h
		mov     edx, 1
		mov     eax, [___24e4ach]
		inc     word [eax+2]
		jmp     short ___61158h
___611afh:
		xor     eax, eax
		mov     al, [___199fb6h]
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		retn    
	align 	4
__GDECL(___611c0h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     edi, eax
		mov     ebp, edx
		xor     edx, edx
		mov     [esp], edx
		mov     [___24e450h], eax
___611e0h:
		mov     [edx*4+___24e418h], edx
		inc     edx
		cmp     edx, byte 0ah
		jl      short ___611e0h
		xor     edx, edx
		mov     dl, [___199fb6h]
		dec     edx
		xor     eax, eax
		call    near ___608ech
		xor     edx, edx
		jmp     short ___6123fh
___61201h:
		mov     eax, [edx*4+___24e3f0h]
		cmp     eax, [___199fb8h]
		jne     short ___61213h
		mov     [esp], edx
___61213h:
		mov     eax, [edx*4+___24e3f0h]
		cmp     eax, [___199fb8h]
		je      short ___6123eh
		xor     eax, eax
		jmp     short ___6123ah
___61226h:
		mov     esi, edx
		shl     esi, 0ah
		mov     ebx, [ebp+edx*4+0]
		mov     cl, [esi+eax*1+___24cf28h]
		mov     [ebx+eax*1], cl
		inc     eax
___6123ah:
		cmp     eax, edi
		jl      short ___61226h
___6123eh:
		inc     edx
___6123fh:
		xor     eax, eax
		mov     al, [___199fb6h]
		cmp     edx, eax
		jl      short ___61201h
		mov     eax, [___24e4ach]
		mov     word [eax], 0
		mov     word [eax+2], 0
		mov     eax, [___24e46ch]
		mov     word [eax], 0
		mov     word [eax+2], 0
		mov     eax, [esp]
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
	align 	4
__GDECL(___61278h)
		push    10h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     ebx, [___24e4d0h]
		mov     ecx, [___24e4c4h]
___61291h:
		cmp     ebx, byte 2
		je      short ___6129fh
		mov     dx, [ecx+2]
		cmp     dx, [ecx]
		jne     short ___61291h
___6129fh:
		cmp     ebx, byte 2
		je      short ___612b7h
		call 	getTimerTicks
		mov 	edx, eax
		add     edx, byte 2
___612b3h:
		call 	getTimerTicks
		cmp 	edx, eax
		ja      short ___612b3h
___612b7h:
		mov     [___24e4c4h], ecx
		mov     [___24e4d0h], ebx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
___612c8h:
		push    0ch
		call    near __CHK
		push    ebx
		push    edx
		lea     edx, [eax*4+0]
		sub     edx, eax
		lgs     edx, [NoSplit edx*2+___24cd00h]
		mov     eax, [___24e4b4h]
		mov     bl, [eax]
		cmp     bl, [gs:edx+12h]
		jne     near ___6134fh
		mov     bl, [eax+1]
		cmp     bl, [gs:edx+13h]
		jne     short ___6134fh
		mov     bl, [eax+2]
		cmp     bl, [gs:edx+14h]
		jne     short ___6134fh
		mov     bl, [eax+3]
		cmp     bl, [gs:edx+15h]
		jne     short ___6134fh
		mov     bl, [eax+4]
		cmp     bl, [gs:edx+16h]
		jne     short ___6134fh
		mov     bl, [eax+5]
		cmp     bl, [gs:edx+17h]
		jne     short ___6134fh
		mov     bl, [eax+6]
		cmp     bl, [gs:edx+18h]
		jne     short ___6134fh
		mov     bl, [eax+7]
		cmp     bl, [gs:edx+19h]
		jne     short ___6134fh
		mov     bl, [eax+8]
		cmp     bl, [gs:edx+1ah]
		jne     short ___6134fh
		mov     al, [eax+9]
		cmp     al, [gs:edx+1bh]
		jne     short ___6134fh
		mov     eax, 1
		pop     edx
		pop     ebx
		retn    
___6134fh:
		xor     eax, eax
		pop     edx
		pop     ebx
		retn    
___61354h:
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     esi, eax
		xor     ebx, ebx
___61367h:
		lea     edx, [esi*4+0]
		sub     edx, esi
		lgs     edx, [NoSplit edx*2+___24cd00h]
		lea     eax, [ebx*4+0]
		add     eax, ebx
		add     eax, eax
		mov     cl, [eax+___24cef0h]
		cmp     cl, [gs:edx+12h]
		jne     near ___61405h
		mov     cl, [eax+___24cef1h]
		cmp     cl, [gs:edx+13h]
		jne     near ___61405h
		mov     cl, [eax+___24cef2h]
		cmp     cl, [gs:edx+14h]
		jne     short ___61405h
		mov     cl, [eax+___24cef3h]
		cmp     cl, [gs:edx+15h]
		jne     short ___61405h
		mov     cl, [eax+___24cef4h]
		cmp     cl, [gs:edx+16h]
		jne     short ___61405h
		mov     cl, [eax+___24cef5h]
		cmp     cl, [gs:edx+17h]
		jne     short ___61405h
		mov     cl, [eax+___24cef6h]
		cmp     cl, [gs:edx+18h]
		jne     short ___61405h
		mov     cl, [eax+___24cef7h]
		cmp     cl, [gs:edx+19h]
		jne     short ___61405h
		mov     cl, [eax+___24cef8h]
		cmp     cl, [gs:edx+1ah]
		jne     short ___61405h
		mov     al, [eax+___24cef9h]
		cmp     al, [gs:edx+1bh]
		jne     short ___61405h
		mov     edi, ebx
___61405h:
		inc     ebx
		cmp     ebx, byte 4
		jl      near ___61367h
		mov     eax, edi
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
__GDECL(___61418h)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     [esp], al
		cmp     dword [___24e4d0h], byte 2
		jne     near ___614d1h
		lgs     eax, [___24e54eh]
		mov     word [gs:eax+2eh], 1
		lgs     eax, [___24e58ah]
		mov     dl, [esp]
		mov     [gs:eax], dl
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e50ch
		call    near memset_
		mov     eax, [___24e54eh]
		shr     eax, 4
		and     eax, 0ffffh
		mov     [___24e52eh], ax
		mov     dword [___24e51ch], 3
		;mov     edx, ds
		db	8ch,0dah
		mov     eax, ___24e50ch
		xor     eax, eax
		mov     ax, dx
		mov     [___24e444h], eax
		mov     dword [___24e440h], ___24e50ch
		;pusha   
		db	66h,60h
		mov     eax, [___24e444h]
		;mov     es, eax
		db	8eh,0c0h
		mov     edi, [___24e440h]
		mov     ax, 300h
		mov     bl, 7ah
		mov     bh, 0
		mov     cx, 0
		int     31h
		;popa    
		db	66h,61h
		cmp     dword [___24e528h], byte 0
		je      short ___614d1h
		mov     dword [___199fbch], 0cah
___614d1h:
		mov     ebp, [___24e4d0h]
		cmp     ebp, byte 1
		je      short ___614e6h
		cmp     ebp, byte 3
		je      short ___614e6h
		cmp     ebp, byte 4
		jne     short ___6150eh
___614e6h:
		mov     eax, [___24e4c4h]
		mov     dx, [eax]
		and     dh, 0fh
		and     edx, 0ffffh
		mov     bl, [esp]
		mov     [edx+eax*1+4], bl
		mov     edx, [___199fa4h]
		inc     word [eax]
		mov     eax, edx
		call    near ___63190h
___6150eh:
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__GDECL(___61518h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 4
		cmp     dword [___24e4d0h], byte 2
		jne     near ___61625h
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e554h
		call    near memset_
		mov     dword [___24e564h], 0ah
		call    near ___632e8h
		mov     ecx, 0fh
		jmp     near ___6161dh
___61561h:
		lea     eax, [ecx*4+0]
		sub     eax, ecx
		lgs     eax, [NoSplit eax*2+___24cd60h]
		cmp     byte [gs:eax+8], 0
		jne     near ___6161ch
		cmp     byte [gs:eax+9], 0
		jne     near ___6161ch
		mov     eax, ecx
		call    near ___612c8h
		test    eax, eax
		jne     short ___615ffh
		mov     eax, ecx
		call    near ___61354h
		mov     [esp], eax
		xor     ebx, ebx
		jmp     short ___615d7h
___615a1h:
		lgs     eax, [edx+___24cdc0h]
		lea     edi, [eax+ebx*1]
		mov     eax, [esp]
		mov     edx, [eax*4+___24cee0h]
		mov     si, [edx]
		and     esi, 0fffh
		and     esi, 0ffffh
		add     esi, edx
		mov     dl, [gs:edi]
		mov     [esi+4], dl
		mov     eax, [eax*4+___24cee0h]
		inc     word [eax]
		inc     ebx
___615d7h:
		lea     edx, [ecx*4+0]
		sub     edx, ecx
		add     edx, edx
		lgs     eax, [edx+___24cd00h]
		mov     ax, [gs:eax+2]
		and     eax, 0ffffh
		call    near ___632c4h
		sub     eax, byte 1eh
		cmp     ebx, eax
		jl      short ___615a1h
___615ffh:
		lea     eax, [ecx*4+0]
		sub     eax, ecx
		lgs     eax, [NoSplit eax*2+___24cd60h]
		mov     byte [gs:eax+8], 0feh
		mov     eax, ecx
		call    near ___637cch
___6161ch:
		dec     ecx
___6161dh:
		test    ecx, ecx
		jge     near ___61561h
___61625h:
		mov     ecx, [___24e4d0h]
		cmp     ecx, byte 1
		je      short ___6163ah
		cmp     ecx, byte 3
		je      short ___6163ah
		cmp     ecx, byte 4
		jne     short ___61682h
___6163ah:
		mov     eax, [___24e46ch]
		mov     dx, [eax]
		mov     bx, [eax+2]
		cmp     dx, bx
		je      short ___61682h
		mov     edx, ebx
		and     dh, 0fh
		and     edx, 0ffffh
		lea     ecx, [eax+edx*1]
		mov     edx, [___24cee0h]
		mov     bx, [edx]
		and     bh, 0fh
		and     ebx, 0ffffh
		add     edx, ebx
		mov     bl, [ecx+4]
		mov     [edx+4], bl
		mov     edx, [___24cee0h]
		inc     word [edx]
		inc     word [eax+2]
		jmp     short ___6163ah
___61682h:
		add     esp, byte 4
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
__GDECL(___6168ch)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, [___24e4d0h]
		cmp     edx, byte 1
		je      short ___616b0h
		cmp     edx, byte 3
		je      short ___616b0h
		cmp     edx, byte 4
		jne     short ___616f0h
___616b0h:
		mov     eax, [___24e46ch]
		mov     dx, [eax]
		mov     bx, [eax+2]
		cmp     dx, bx
		je      short ___616f0h
		mov     edx, ebx
		and     dh, 0fh
		xor     ecx, ecx
		mov     cx, dx
		mov     edx, [___24e4ach]
		mov     bx, [edx]
		and     bh, 0fh
		and     ebx, 0ffffh
		lea     esi, [edx+ebx*1]
		mov     bl, [ecx+eax*1+4]
		mov     [esi+4], bl
		inc     word [edx]
		inc     word [eax+2]
		jmp     short ___616b0h
___616f0h:
		cmp     dword [___24e4d0h], byte 2
		jne     near ___617afh
		mov     ecx, 0fh
		jmp     near ___617a7h
___61707h:
		lea     eax, [ecx*4+0]
		sub     eax, ecx
		lgs     eax, [NoSplit eax*2+___24cd60h]
		cmp     byte [gs:eax+8], 0
		jne     near ___617a6h
		cmp     byte [gs:eax+9], 0
		jne     near ___617a6h
		mov     eax, ecx
		call    near ___612c8h
		test    eax, eax
		jne     short ___61789h
		xor     ebx, ebx
		jmp     short ___61761h
___6173dh:
		lgs     edi, [edx+___24cdc0h]
		mov     edx, [___24e4ach]
		mov     ax, [edx]
		and     ah, 0fh
		xor     esi, esi
		mov     si, ax
		mov     al, [gs:edi+ebx*1]
		mov     [edx+esi*1+4], al
		inc     word [edx]
		inc     ebx
___61761h:
		lea     edx, [ecx*4+0]
		sub     edx, ecx
		add     edx, edx
		lgs     eax, [edx+___24cd00h]
		mov     ax, [gs:eax+2]
		and     eax, 0ffffh
		call    near ___632c4h
		sub     eax, byte 1eh
		cmp     ebx, eax
		jl      short ___6173dh
___61789h:
		lea     eax, [ecx*4+0]
		sub     eax, ecx
		lgs     eax, [NoSplit eax*2+___24cd60h]
		mov     byte [gs:eax+8], 0feh
		mov     eax, ecx
		call    near ___637cch
___617a6h:
		dec     ecx
___617a7h:
		test    ecx, ecx
		jge     near ___61707h
___617afh:
		xor     edx, edx
		xor     ebx, ebx
___617b3h:
		mov     eax, [___24e4c0h]
		mov     cx, [eax]
		cmp     cx, [eax+2]
		je      near ___6186fh
		mov     eax, [___24e4d0h]
		cmp     eax, byte 1
		je      short ___617d9h
		cmp     eax, byte 3
		je      short ___617d9h
		cmp     eax, byte 4
		jne     short ___6181dh
___617d9h:
		mov     eax, [___24e4c0h]
		mov     cx, [eax+2]
		and     ch, 0fh
		and     ecx, 0ffffh
		lea     edi, [eax+ecx*1]
		mov     eax, [___24e4c4h]
		mov     cx, [eax]
		and     ch, 0fh
		xor     esi, esi
		mov     si, cx
		mov     cl, [edi+4]
		mov     [esi+eax*1+4], cl
		inc     word [eax]
		inc     edx
		cmp     edx, 3e8h
		jl      short ___6181dh
		mov     eax, [___199fa4h]
		call    near ___63190h
		xor     edx, edx
___6181dh:
		cmp     dword [___24e4d0h], byte 2
		jne     short ___61861h
		mov     eax, [___24e4c0h]
		mov     cx, [eax+2]
		and     ch, 0fh
		xor     esi, esi
		mov     si, cx
		add     esi, eax
		lgs     ecx, [___24e58ah]
		mov     al, [esi+4]
		mov     [gs:ecx+ebx*1], al
		inc     ebx
		cmp     ebx, [___199fc0h]
		jl      short ___61861h
		lgs     eax, [___24e54eh]
		mov     [gs:eax+2eh], bx
		call    near ___636d0h
___61861h:
		mov     eax, [___24e4c0h]
		inc     word [eax+2]
		jmp     near ___617b3h
___6186fh:
		test    ebx, ebx
		jle     short ___61884h
		lgs     eax, [___24e54eh]
		mov     [gs:eax+2eh], bx
		call    near ___636d0h
___61884h:
		test    edx, edx
		jle     short ___61892h
		mov     eax, [___199fa4h]
		call    near ___63190h
___61892h:
		cmp     dword [___24e4d0h], byte 2
		jne     short ___618bbh
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e554h
		call    near memset_
		mov     dword [___24e564h], 0ah
		call    near ___632e8h
___618bbh:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
__GDECL(___618c4h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		xor     edx, edx
		xor     ebx, ebx
___618d7h:
		mov     eax, [___24e4c0h]
		mov     cx, [eax]
		cmp     cx, [eax+2]
		je      near ___61996h
		mov     ecx, [___24e4d0h]
		cmp     ecx, byte 1
		je      short ___618feh
		cmp     ecx, byte 3
		je      short ___618feh
		cmp     ecx, byte 4
		jne     short ___61943h
___618feh:
		mov     eax, [___24e4c0h]
		mov     cx, [eax+2]
		and     ch, 0fh
		xor     esi, esi
		mov     si, cx
		add     esi, eax
		mov     eax, [___24e4c4h]
		mov     cx, [eax]
		and     ch, 0fh
		and     ecx, 0ffffh
		lea     edi, [eax+ecx*1]
		mov     cl, [esi+4]
		mov     [edi+4], cl
		inc     word [eax]
		inc     edx
		cmp     edx, 3e8h
		jl      short ___61943h
		mov     eax, [___199fa4h]
		call    near ___63190h
		xor     edx, edx
___61943h:
		cmp     dword [___24e4d0h], byte 2
		jne     short ___61988h
		mov     eax, [___24e4c0h]
		mov     cx, [eax+2]
		and     ch, 0fh
		and     ecx, 0ffffh
		add     ecx, eax
		lgs     eax, [___24e58ah]
		mov     cl, [ecx+4]
		mov     [gs:ebx+eax*1], cl
		inc     ebx
		cmp     ebx, [___199fc0h]
		jl      short ___61988h
		lgs     eax, [___24e54eh]
		mov     [gs:eax+2eh], bx
		call    near ___636d0h
___61988h:
		mov     eax, [___24e4c0h]
		inc     word [eax+2]
		jmp     near ___618d7h
___61996h:
		test    ebx, ebx
		jle     short ___619abh
		lgs     eax, [___24e54eh]
		mov     [gs:eax+2eh], bx
		call    near ___636d0h
___619abh:
		test    edx, edx
		jle     short ___619b9h
		mov     eax, [___199fa4h]
		call    near ___63190h
___619b9h:
		cmp     dword [___24e4d0h], byte 2
		jne     short ___619e2h
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e554h
		call    near memset_
		mov     dword [___24e564h], 0ah
		call    near ___632e8h
___619e2h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___619e8h:
dd	___61a3eh
dd	___61ae2h
dd	___61a66h
dd	___61ae2h
dd	___61aa8h
dd	___61ae2h
dd	___61a52h
___61a04h:
		pushad  
		push    ds
		push    es
		push    fs
		push    gs
		mov     ebp, esp
		cld     
		call    near __GETDS
		xor     ecx, ecx
___61a15h:
		test    ecx, ecx
		jne     near ___61aech
		mov     eax, [___24e47ch]
		add     eax, byte 2
		call    near inp_
		and     eax, byte 7
		cmp     eax, byte 6
		ja      near ___61ae2h
		jmp     near dword [cs:eax*4+___619e8h]
___61a3eh:
		mov     eax, [___24e47ch]
		add     eax, byte 6
		call    near inp_
		mov     [___199fc8h], eax
		jmp     short ___61a15h
___61a52h:
		mov     eax, [___24e47ch]
		add     eax, byte 5
		call    near inp_
		mov     [___199fcch], eax
		jmp     short ___61a15h
___61a66h:
		mov     ebx, [___199fc4h]
___61a6ch:
		mov     eax, [___24e4c4h]
		mov     dx, [eax+2]
		cmp     dx, [eax]
		je      short ___61a15h
		dec     ebx
		cmp     ebx, byte 0ffffffffh
		je      short ___61a15h
		and     dh, 0fh
		and     edx, 0ffffh
		mov     dl, [edx+eax*1+4]
		and     edx, 0ffh
		mov     eax, [___24e47ch]
		call    near outp_
		mov     eax, [___24e4c4h]
		inc     word [eax+2]
		jmp     short ___61a6ch
___61aa8h:
		mov     eax, [___24e47ch]
		call    near inp_
		mov     ebx, eax
		mov     eax, [___24e46ch]
		mov     dx, [eax]
		and     dh, 0fh
		and     edx, 0ffffh
		mov     [edx+eax*1+4], bl
		inc     word [eax]
		mov     eax, [___24e47ch]
		add     eax, byte 5
		call    near inp_
		test    al, 1
		jne     short ___61aa8h
		jmp     near ___61a15h
___61ae2h:
		mov     ecx, 1
		jmp     near ___61a15h
___61aech:
		mov     edx, 20h
		mov     eax, edx
		call    near outp_
		pop     gs
		pop     fs
		pop     es
		pop     ds
		popad   
		iret    


___61b00h:
		push    28h
		call    near __CHK
		push    ebx
		push    ecx

	push 	edx
	push 	eax
	call 	DPMI_ALLOCATE_DOS_MEMORY_BLOCK
	add 	esp, 8
	test 	eax, eax
	je 		.failed	
		shl     eax, 4
.failed:
		pop     ecx
		pop     ebx
		retn    
	align 	4


__GDECL(___61b88h)
		push    0ch
		call    near __CHK
		push    ebx
		push    edx
		mov     ebx, eax
		call    near ___61bb8h
		call 	getTimerTicks
		mov 	edx, eax
		inc     edx
___61ba8h:
		call 	getTimerTicks
		cmp 	edx, eax
		ja      short ___61ba8h
		mov     eax, ebx
		call    near ___61bb8h
		pop     edx
		pop     ebx
		retn    
	align 	4
___61bb8h:
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     ecx, eax
		lea     ebx, [eax+4]
		mov     eax, ebx
		call    near inp_
		mov     edi, eax
		mov     edx, 10h
		mov     eax, ebx
		call    near outp_
		lea     esi, [ecx+6]
		mov     eax, esi
		call    near inp_
		test    al, 0f0h
		je      short ___61bf6h
		xor     eax, eax
		jmp     near ___61cc9h
___61bf6h:
		mov     edx, 1fh
		mov     eax, ebx
		call    near outp_
		mov     eax, esi
		call    near inp_
		and     eax, 0f0h
		cmp     eax, dword 0f0h
		je      short ___61c1dh
		xor     eax, eax
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___61c1dh:
		mov     edx, edi
		mov     eax, ebx
		call    near outp_
		lea     ebx, [ecx+7]
		mov     eax, ebx
		call    near inp_
		mov     esi, eax
		mov     edx, 55h
		mov     eax, ebx
		call    near outp_
		mov     eax, ebx
		call    near inp_
		cmp     eax, byte 55h
		je      short ___61c55h
		mov     eax, 1
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___61c55h:
		mov     edx, 0aah
		mov     eax, ebx
		call    near outp_
		mov     eax, ebx
		call    near inp_
		cmp     eax, dword 0aah
		je      short ___61c7ah
		mov     eax, 1
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___61c7ah:
		mov     edx, esi
		mov     eax, ebx
		call    near outp_
		lea     ebx, [ecx+2]
		mov     edx, 1
		mov     eax, ebx
		call    near outp_
		mov     eax, ebx
		call    near inp_
		mov     ecx, eax
		xor     edx, edx
		mov     eax, ebx
		call    near outp_
		test    cl, 80h
		jne     short ___61cb4h
		mov     eax, 2
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___61cb4h:
		test    cl, 40h
		jne     short ___61cc4h
		mov     eax, 3
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___61cc4h:
		mov     eax, 4
___61cc9h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
__GDECL(___61cd0h)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     esi, [___199fb8h]
		mov     edi, [___199fbch]
		mov     edx, [___24e4d0h]
		cmp     edx, byte 1
		je      short ___61d08h
		cmp     edx, byte 3
		je      short ___61d08h
		cmp     edx, byte 4
		jne     near ___61d8fh
___61d08h:
		mov     edx, ___24e4cch
		mov     eax, 1f4h
		call    near ___61b00h
		mov     [___24e4d4h], eax
		test    eax, eax
		jne     short ___61d35h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___61d35h:
		mov     edx, ___24e480h
		mov     eax, 1004h
		call    near ___61b00h
		mov     [___24e46ch], eax
		test    eax, eax
		jne     short ___61d62h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___61d62h:
		mov     edx, ___24e4bch
		mov     eax, 1004h
		call    near ___61b00h
		mov     [___24e4c4h], eax
		test    eax, eax
		jne     short ___61d8fh
		mov     esi, [___199fb8h]
		mov     edi, 64h
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___61d8fh:
		mov     edx, ___24e4c8h
		mov     eax, 1004h
		call    near ___61b00h
		mov     [___24e4ach], eax
		test    eax, eax
		jne     short ___61dbch
		mov     esi, [___199fb8h]
		mov     edi, 64h
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___61dbch:
		mov     edx, ___24cf18h
		mov     eax, 1004h
		call    near ___61b00h
		mov     [___24cee0h], eax
		test    eax, eax
		jne     short ___61de9h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___61de9h:
		mov     edx, ___24cf1ch
		mov     eax, 1004h
		call    near ___61b00h
		mov     [___24cee4h], eax
		test    eax, eax
		jne     short ___61e16h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___61e16h:
		mov     edx, ___24cf20h
		mov     eax, 1004h
		call    near ___61b00h
		mov     [___24cee8h], eax
		test    eax, eax
		jne     short ___61e43h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___61e43h:
		mov     edx, ___24cf24h
		mov     eax, 1004h
		call    near ___61b00h
		mov     [___24ceech], eax
		test    eax, eax
		jne     short ___61e70h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___61e70h:
		mov     edx, ___24e4b8h
		mov     eax, 1004h
		call    near ___61b00h
		mov     [___24e4c0h], eax
		test    eax, eax
		jne     short ___61e9dh
		mov     esi, [___199fb8h]
		mov     edi, 64h
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___61e9dh:
		mov     edx, [___24e4ach]
		mov     word [edx], 0
		mov     word [edx+2], 0
		mov     ebx, [___24cee0h]
		mov     word [ebx], 0
		mov     word [ebx+2], 0
		mov     ebx, [___24cee4h]
		mov     word [ebx], 0
		mov     word [ebx+2], 0
		mov     ebx, [___24cee8h]
		mov     word [ebx], 0
		mov     word [ebx+2], 0
		mov     ebx, [___24ceech]
		mov     word [ebx], 0
		mov     word [ebx+2], 0
		mov     word [eax], 0
		mov     word [eax+2], 0
		lea     eax, [edx+4]
		mov     ebx, 1000h
		xor     edx, edx
		call    near memset_
		mov     eax, [___24cee0h]
		add     eax, byte 4
		mov     ebx, 1000h
		xor     edx, edx
		call    near memset_
		mov     eax, [___24cee4h]
		add     eax, byte 4
		mov     ebx, 1000h
		xor     edx, edx
		call    near memset_
		mov     eax, [___24cee8h]
		add     eax, byte 4
		mov     ebx, 1000h
		xor     edx, edx
		call    near memset_
		mov     eax, [___24ceech]
		add     eax, byte 4
		mov     ebx, 1000h
		xor     edx, edx
		call    near memset_
		mov     eax, [___24e4c0h]
		add     eax, byte 4
		mov     ebx, 1000h
		xor     edx, edx
		call    near memset_
		mov     ebp, [___24e4d0h]
		cmp     ebp, byte 1
		je      short ___61f8bh
		mov     edi, [___199fbch]
		cmp     ebp, byte 3
		je      short ___61f8bh
		cmp     ebp, byte 4
		jne     short ___61fc8h
___61f8bh:
		xor     edi, edi
		mov     ebx, [___199fach]
		mov     edx, [___199fa8h]
		mov     eax, [___199fa4h]
		mov     [___199fbch], edi
		call    near ___62c68h
		mov     edi, [___199fbch]
		test    edi, edi
		jle     short ___61fc8h
		mov     esi, [___199fb8h]
		xor     ebp, ebp
		mov     [___24e4d0h], ebp
		xor     eax, eax
		jmp     near ___623bch
___61fc8h:
		mov     [___199fbch], edi
		cmp     dword [___24e4d0h], byte 2
		jne     near ___62355h
		mov     edx, ___24e484h
		mov     eax, 10h
		call    near ___61b00h
		mov     [___24e4b4h], eax
		test    eax, eax
		jne     short ___62008h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___62008h:
		mov     edx, ___24e460h
		mov     eax, 40h
		call    near ___61b00h
		;mov     [___24e552h], ds
		db	8ch,1dh
		dd	___24e552h
		mov     [___24e54eh], eax
		test    eax, eax
		jne     short ___6204ah
		cmp     word [___24e552h], byte 0
		jne     short ___6204ah
		mov     esi, [___199fb8h]
		mov     edi, 64h
		xor     ebx, ebx
		mov     [___24e4d0h], ebx
		xor     eax, eax
		jmp     near ___623bch
___6204ah:
		mov     edx, ___24e448h
		mov     eax, 40h
		call    near ___61b00h
		mov     [___24e45ch], eax
		test    eax, eax
		jne     short ___62077h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___62077h:
		mov     edx, ___24e454h
		mov     eax, 40h
		call    near ___61b00h
		;mov     [___24e54ch], ds
		db	8ch,1dh
		dd	___24e54ch
		mov     [___24e548h], eax
		test    eax, eax
		jne     short ___620b6h
		cmp     word [___24e54ch], byte 0
		jne     short ___620b6h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		xor     eax, eax
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___620b6h:
		mov     edx, ___24e458h
		mov     eax, 7d0h
		call    near ___61b00h
		;mov     [___24e58eh], ds
		db	8ch,1dh
		dd	___24e58eh
		mov     [___24e58ah], eax
		test    eax, eax
		jne     short ___620f8h
		cmp     word [___24e58eh], byte 0
		jne     short ___620f8h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		xor     ebp, ebp
		mov     [___24e4d0h], ebp
		xor     eax, eax
		jmp     near ___623bch
___620f8h:
		mov     edx, ___24e44ch
		mov     eax, 0ah
		call    near ___61b00h
		mov     [___24e464h], eax
		test    eax, eax
		jne     short ___62125h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___62125h:
		xor     ebx, ebx
___62127h:
		lea     edx, [ebx*4+0]
		add     edx, ___24ce20h
		mov     eax, 40h
		call    near ___61b00h
		mov     edx, eax
		lea     eax, [ebx*4+0]
		sub     eax, ebx
		;mov     [NoSplit eax*2+___24cd64h], ds
		db	8ch,1ch,45h
		dd	___24cd64h
		mov     [NoSplit eax*2+___24cd60h], edx
		mov     dx, [NoSplit eax*2+___24cd64h]
		mov     eax, [NoSplit eax*2+___24cd60h]
		test    eax, eax
		jne     short ___62189h
		test    dx, dx
		jne     short ___62189h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		xor     ebp, ebp
		mov     [___24e4d0h], ebp
		xor     eax, eax
		jmp     near ___623bch
___62189h:
		inc     ebx
		cmp     ebx, byte 0fh
		jle     short ___62127h
		xor     ebx, ebx
___62191h:
		lea     edx, [ebx*4+0]
		add     edx, ___24cea0h
		mov     eax, 40h
		call    near ___61b00h
		mov     edx, eax
		lea     eax, [ebx*4+0]
		sub     eax, ebx
		;mov     [NoSplit eax*2+___24cd04h], ds
		db	8ch,1ch,45h
		dd	___24cd04h
		mov     [NoSplit eax*2+___24cd00h], edx
		mov     dx, [NoSplit eax*2+___24cd04h]
		mov     eax, [NoSplit eax*2+___24cd00h]
		test    eax, eax
		jne     short ___621f0h
		test    dx, dx
		jne     short ___621f0h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		xor     eax, eax
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___621f0h:
		inc     ebx
		cmp     ebx, byte 0fh
		jle     short ___62191h
		xor     ebx, ebx
___621f8h:
		lea     edx, [ebx*4+0]
		add     edx, ___24ce60h
		mov     eax, 7d0h
		call    near ___61b00h
		mov     ecx, eax
		lea     eax, [ebx*4+0]
		sub     eax, ebx
		;mov     [NoSplit eax*2+___24cdc4h], ds
		db	8ch,1ch,45h
		dd	___24cdc4h
		mov     [NoSplit eax*2+___24cdc0h], ecx
		mov     dx, [NoSplit eax*2+___24cdc4h]
		mov     eax, ecx
		test    eax, eax
		jne     short ___62255h
		test    dx, dx
		jne     short ___62255h
		mov     esi, [___199fb8h]
		mov     edi, 64h
		xor     ebx, ebx
		mov     [___24e4d0h], ebx
		xor     eax, eax
		jmp     near ___623bch
___62255h:
		inc     ebx
		cmp     ebx, byte 0fh
		jle     short ___621f8h
		xor     edi, edi
		mov     [___199fbch], edi
		call    near ___638ech
		mov     edi, [___199fbch]
		test    edi, edi
		jle     short ___62287h
		mov     esi, [___199fb8h]
		xor     edx, edx
		mov     [___24e4d0h], edx
		xor     eax, eax
		jmp     near ___623bch
___62287h:
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e554h
		call    near memset_
		mov     eax, [___24e4b4h]
		shr     eax, 4
		and     eax, 0ffffh
		mov     [___24e576h], ax
		mov     dword [___24e564h], 9
		call    near ___632e8h
		xor     edi, edi
		mov     eax, [___199fa0h]
		add     eax, 5000h
		add     eax, [___199f9ch]
		mov     [___199fbch], edi
		call    near ___632c4h
		mov     ecx, eax
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e554h
		call    near memset_
		movsx   eax, cx
		mov     [___24e568h], eax
		mov     [___24e564h], edi
		call    near ___632e8h
		mov     edi, [___199fbch]
		cmp     dword [___24e570h], 0feh
		jne     short ___62314h
		mov     edi, 66h
___62314h:
		mov     esi, [___199fb8h]
		test    edi, edi
		jle     short ___6232ah
		xor     eax, eax
		mov     [___24e4d0h], eax
		jmp     near ___623bch
___6232ah:
		xor     ebx, ebx
		mov     [___199fbch], edi
___62332h:
		mov     eax, ebx
		call    near ___637cch
		lea     eax, [ebx*4+0]
		sub     eax, ebx
		lgs     eax, [NoSplit eax*2+___24cd60h]
		mov     byte [gs:eax+8], 0feh
		inc     ebx
		cmp     ebx, byte 0fh
		jle     short ___62332h
___62355h:
		mov     eax, esp
		call    near _dos_gettime_
		movzx   esi, byte [esp]
		shl     esi, 18h
		xor     eax, eax
		mov     al, [esp+1]
		shl     eax, 10h
		add     esi, eax
		xor     eax, eax
		mov     al, [esp+2]
		shl     eax, 8
		add     esi, eax
		xor     eax, eax
		mov     al, [esp+3]
		add     esi, eax
		xor     eax, eax
		xor     ebx, ebx
___62385h:
		add     eax, byte 2
		xor     edx, edx
		mov     dl, [eax]
		add     esi, edx
		inc     ebx
		cmp     ebx, 7530h
		jl      short ___62385h
		mov     edi, [___199fbch]
		mov     ebx, 1
___623a2h:
		xor     ecx, ecx
		mov     [ebx*4+___24e3f0h], ecx
		inc     ebx
		cmp     ebx, byte 0ah
		jl      short ___623a2h
		mov     [___24e3f0h], esi
		mov     eax, 1
___623bch:
		mov     [___199fbch], edi
		mov     [___199fb8h], esi
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
__GDECL(___623d4h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     edx, [___24e4d0h]
		cmp     edx, byte 1
		je      short ___623f9h
		cmp     edx, byte 3
		je      short ___623f9h
		cmp     edx, byte 4
		jne     short ___62471h
___623f9h:
		mov     edx, [___199fa8h]
		mov     eax, [___199fa4h]
		call    near ___63040h
		mov     eax, [___24e4cch]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24e480h]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24e4bch]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx

___62471h:
		cmp     dword [___24e4d0h], byte 2
		jne     near ___62631h
		call    near ___6363ch
		mov     eax, [___199fa0h]
		add     eax, 5000h
		add     eax, [___199f9ch]
		call    near ___632c4h
		mov     ecx, eax
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e554h
		call    near memset_
		movsx   eax, cx
		mov     [___24e568h], eax
		mov     dword [___24e564h], 1
		call    near ___632e8h
		mov     eax, [___24e484h]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24e460h]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24e448h]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24e454h]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24e458h]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24e44ch]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		xor     ecx, ecx
___6258fh:
		lea     eax, [ecx*4+0]
		add     eax, ___24ce20h
		mov     eax, [eax]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		inc     ecx
		cmp     ecx, byte 0fh
		jle     short ___6258fh
		xor     ecx, ecx
___625cah:
		lea     eax, [ecx*4+0]
		add     eax, ___24cea0h
		mov     eax, [eax]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		inc     ecx
		cmp     ecx, byte 0fh
		jle     short ___625cah
		xor     ecx, ecx
___62601h:
		lea     eax, [ecx*4+0]
		add     eax, ___24ce60h
		mov     eax, [eax]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		inc     ecx
		cmp     ecx, byte 0fh
		jle     short ___62601h
___62631h:
		mov     eax, [___24e4c8h]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24cf18h]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24cf1ch]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24cf20h]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24cf24h]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24e4b8h]
	push 	edx
	push 	ecx
	push 	eax
	call 	DPMI_FREE_DOS_MEMORY_BLOCK
	add 	esp, 4
	pop 	ecx
	pop 	edx
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
___62c4ch:
dd	___62fbdh
dd	___62fe0h
dd	___62fe0h
dd	___62fe0h
dd	___62fd6h
dd	___62fe0h
dd	___62fc7h
___62c68h:
		push    20h
		call    near __CHK
		push    ecx
		push    esi
		sub     esp, byte 10h
		mov     [esp], eax
		mov     [esp+8], edx
		mov     [___24e47ch], eax
		xor     edx, edx
		mov     eax, 1c200h
		div     ebx
		mov     ecx, eax
		mov     __EAX(___24e48ch), 204h
		mov     al, [esp+8]
		add     al, 8
		mov     [esp+0ch], al
		mov     __BL(___24e48ch), al
		mov     ebx, ___24e48ch
		mov     edx, ebx
		mov     eax, 31h
		call    near int386_
		mov     eax, __ECX(___24e48ch)
		mov     [___24e4b0h], eax
		mov     eax, __EDX(___24e48ch)
		mov     [___24e4a8h], eax
		mov     __EAX(___24e48ch), 200h
		mov     al, [esp+0ch]
		mov     __BL(___24e48ch), al
		mov     ebx, ___24e48ch
		mov     edx, ebx
		mov     eax, 31h
		call    near int386_
		mov     eax, __ECX(___24e48ch)
		mov     [___24e468h], eax
		mov     eax, __EDX(___24e48ch)
		mov     [___24e488h], eax
		mov     eax, [___24e46ch]
		mov     word [eax], 0
		mov     word [eax+2], 0
		mov     edx, [___24e4c4h]
		mov     word [edx], 0
		mov     word [edx+2], 0
		add     eax, byte 4
		mov     ebx, 1000h
		xor     edx, edx
		call    near memset_
		mov     eax, [___24e4c4h]
		add     eax, byte 4
		mov     ebx, 1000h
		xor     edx, edx
		call    near memset_
		mov     eax, [esp]
		inc     eax
		xor     edx, edx
		call    near outp_
		mov     eax, [esp]
		add     eax, byte 3
		mov     edx, 83h
		call    near outp_
		mov     edx, ecx
		mov     eax, [esp]
		call    near outp_
		mov     eax, [esp]
		inc     eax
		xor     edx, edx
		call    near outp_
		mov     eax, [esp]
		add     eax, byte 3
		mov     edx, 3
		call    near outp_
		mov     eax, [esp]
		add     eax, byte 4
		mov     edx, 0bh
		call    near outp_
		mov     edx, [esp]
		mov     eax, edx
		call    near ___61bb8h
		mov     eax, 1
		call    near ___60a28h
		mov     eax, edx
		call    near ___61bb8h
		mov     [___199fb0h], eax
		test    eax, eax
		jne     short ___62dcbh
		mov     dword [___199fbch], 68h
		jmp     near ___63037h
___62dcbh:
		cmp     eax, byte 4
		mov     dword [___199fc4h], 1
		mov     eax, [___24e4d4h]
		mov     ebx, 2
		mov     edx, esp
		call    near memcpy_
		mov     eax, [___24e46ch]
		shr     eax, 4
		and     eax, 0ffffh
		mov     [esp+4], eax
		mov     eax, [___24e4d4h]
		add     eax, byte 2
		mov     ebx, 2
		lea     edx, [esp+4]
		call    near memcpy_
		mov     eax, [___24e46ch]
		and     eax, byte 0fh
		mov     [esp+4], eax
		mov     eax, [___24e4d4h]
		add     eax, byte 4
		mov     ebx, 2
		lea     edx, [esp+4]
		call    near memcpy_
		mov     eax, [___24e4c4h]
		shr     eax, 4
		and     eax, 0ffffh
		mov     [esp+4], eax
		mov     eax, [___24e4d4h]
		add     eax, byte 6
		mov     ebx, 2
		lea     edx, [esp+4]
		call    near memcpy_
		mov     eax, [___24e4c4h]
		and     eax, byte 0fh
		mov     [esp+4], eax
		mov     eax, [___24e4d4h]
		add     eax, byte 8
		mov     ebx, 2
		lea     edx, [esp+4]
		call    near memcpy_
		mov     eax, [___199fc4h]
		mov     [esp+4], eax
		mov     eax, [___24e4d4h]
		add     eax, byte 0ah
		mov     ebx, 2
		lea     edx, [esp+4]
		call    near memcpy_
		mov     cl, [esp+8]
		mov     eax, 1
		shl     eax, cl
		mov     [esp+4], eax
		mov     eax, [___24e4d4h]
		add     eax, byte 0ch
		mov     ebx, 2
		lea     edx, [esp+4]
		call    near memcpy_
		mov     eax, [___24e4d4h]
		mov     [esp+4], eax
		lea     esi, [eax+0eh]
		mov     [esp+4], esi
		mov     eax, esi
		mov     [___24e4d4h], esi
		push    190h
		;mov     edx, ds
		db	8ch,0dah
		;mov     ecx, cs
		db	8ch,0c9h
		mov     ebx, ___80000h
		call    near _fmemcpy_
		mov     __EAX(___24e48ch), 205h
		mov     ecx, [esp+8]
		add     ecx, byte 8
		mov     __EBX(___24e48ch), ecx
		;mov     edx, cs
		db	8ch,0cah
		mov     eax, ___61a04h
		xor     eax, eax
		mov     ax, dx
		mov     __ECX(___24e48ch), eax
		mov     __EDX(___24e48ch), ___61a04h
		mov     ebx, ___24e48ch
		mov     edx, ebx
		mov     eax, 31h
		call    near int386_
		mov     __EAX(___24e48ch), 201h
		mov     __EBX(___24e48ch), ecx
		mov     eax, [___24e4d4h]
		shr     eax, 4
		and     eax, 0ffffh
		mov     __ECX(___24e48ch), eax
		mov     eax, [___24e4d4h]
		and     eax, byte 0fh
		mov     __EDX(___24e48ch), eax
		mov     ebx, ___24e48ch
		mov     edx, ebx
		mov     eax, 31h
		call    near int386_
		mov     eax, [___199fa4h]
		add     eax, byte 2
		cmp     dword [___199fb0h], byte 4
		jne     short ___62f85h
		mov     edx, 0c7h
		jmp     short ___62f87h
___62f85h:
		xor     edx, edx
___62f87h:
		call    near outp_
		xor     edx, edx
___62f8eh:
		mov     eax, [___199fa4h]
		call    near inp_
		inc     edx
		cmp     edx, byte 10h
		jl      short ___62f8eh
___62f9eh:
		mov     eax, [___199fa4h]
		add     eax, byte 2
		call    near inp_
		mov     edx, eax
		and     edx, byte 7
		cmp     edx, byte 6
		ja      short ___62fe0h
		jmp     near dword [cs:edx*4+___62c4ch]
___62fbdh:
		mov     eax, [___199fa4h]
		add     eax, byte 6
		jmp     short ___62fdbh
___62fc7h:
		mov     eax, [___199fa4h]
		add     eax, byte 5
		call    near inp_
		jmp     short ___62fe0h
___62fd6h:
		mov     eax, [___199fa4h]
___62fdbh:
		call    near inp_
___62fe0h:
		test    dl, 1
		je      short ___62f9eh
		mov     cl, [esp+8]
		mov     edx, 1
		shl     edx, cl
		not     edx
		mov     eax, 21h
		call    near inp_
		and     edx, eax
		mov     eax, 21h
		call    near outp_
		cli     
		mov     eax, [esp]
		inc     eax
		cmp     dword [___24e4d0h], byte 1
		jne     short ___6301dh
		mov     edx, 3
		jmp     short ___63022h
___6301dh:
		mov     edx, 0bh
___63022h:
		call    near outp_
		mov     edx, 0c2h
		mov     eax, 20h
		call    near outp_
		sti     
___63037h:
		add     esp, byte 10h
		pop     esi
		pop     ecx
		retn    
	align 	4
___63040h:
		push    10h
		call    near __CHK
		push    ebx
		push    ecx
		sub     esp, byte 4
		mov     ebx, eax
		mov     [esp], edx
		inc     eax
		xor     edx, edx
		call    near outp_
		lea     eax, [ebx+4]
		xor     edx, edx
		call    near outp_
		lea     ecx, [ebx+3]
		mov     edx, 83h
		mov     eax, ecx
		call    near outp_
		mov     edx, 30h
		mov     eax, ebx
		call    near outp_
		mov     edx, 3
		mov     eax, ecx
		call    near outp_
		xor     edx, edx
___6308fh:
		mov     eax, ebx
		call    near inp_
		inc     edx
		cmp     edx, byte 10h
		jl      short ___6308fh
		mov     eax, 21h
		call    near inp_
		mov     cl, [esp]
		mov     edx, 1
		shl     edx, cl
		or      edx, eax
		mov     eax, 21h
		call    near outp_
		mov     __EAX(___24e48ch), 201h
		mov     ecx, [esp]
		add     ecx, byte 8
		mov     __EBX(___24e48ch), ecx
		mov     eax, [___24e468h]
		mov     __ECX(___24e48ch), eax
		mov     eax, [___24e488h]
		mov     __EDX(___24e48ch), eax
		mov     ebx, ___24e48ch
		mov     edx, ebx
		mov     eax, 31h
		call    near int386_
		mov     __EAX(___24e48ch), 205h
		mov     __EBX(___24e48ch), ecx
		mov     eax, [___24e4b0h]
		mov     __ECX(___24e48ch), eax
		mov     eax, [___24e4a8h]
		mov     __EDX(___24e48ch), eax
		mov     ebx, ___24e48ch
		mov     edx, ebx
		mov     eax, 31h
		call    near int386_
		add     esp, byte 4
		pop     ecx
		pop     ebx
		retn    
	align 	4
___63190h:
		push    0ch
		call    near __CHK
		push    ebx
		push    edx
		lea     ebx, [eax+1]
		add     eax, byte 5
		cmp     dword [___24e4d0h], byte 1
		jne     short ___631bbh
		call    near inp_
		test    al, 40h
		je      short ___631d0h
		mov     edx, 3
		jmp     short ___631c9h
___631bbh:
		call    near inp_
		test    al, 40h
		je      short ___631d0h
		mov     edx, 0bh
___631c9h:
		mov     eax, ebx
		call    near outp_
___631d0h:
		pop     edx
		pop     ebx
		retn    
	align 	4
__GDECL(___631d4h)
		push    10h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     ecx, eax
		xor     ebx, ebx
		mov     eax, ecx
		call    near strlen_
		cmp     ebx, eax
		jb      short ___631f4h
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___631f4h:
		mov     eax, [___199fa4h]
		add     eax, byte 5
		call    near inp_
		test    al, 20h
		je      short ___631f4h
		mov     dl, [ecx+ebx*1]
		and     edx, 0ffh
		mov     eax, [___199fa4h]
		call    near outp_
		inc     ebx
		mov     eax, ecx
		call    near strlen_
		cmp     ebx, eax
		jb      short ___631f4h
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__GDECL(___63228h)
		push    8
		call    near __CHK
		push    edx
		mov     edx, ___1850ach
		mov     eax, ___24e328h
		call    near strcpy_
		pop     edx
		retn    
__GDECL(___63244h)
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		sub     esp, byte 4
		mov     ebx, eax
		xor     ah, ah
		mov     [esp+1], ah
		call    near ___6168ch
___63261h:
		mov     eax, [___24e4ach]
		mov     dx, [eax]
		mov     cx, [eax+2]
		cmp     dx, cx
		je      short ___6329bh
		mov     edx, ecx
		and     dh, 0fh
		and     edx, 0ffffh
		mov     al, [edx+eax*1+4]
		mov     [esp], al
		mov     edx, esp
		mov     eax, ___24e328h
		call    near strcat_
		mov     eax, [___24e4ach]
		inc     word [eax+2]
		jmp     short ___63261h
___6329bh:
		mov     eax, ebx
		call    near strupr_
		mov     edx, eax
		mov     eax, ___24e328h
		call    near strupr_
		call    near strstr_
		test    eax, eax
		setnz   al
		and     eax, 0ffh
		add     esp, byte 4
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___632c4h:
		push    8
		call    near __CHK
		push    edx
		mov     edx, eax
		and     edx, 0ffh
		shl     edx, 8
		shr     eax, 8
		and     eax, 0ffh
		add     eax, edx
		pop     edx
		retn    
	align 	4
___632e8h:
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		;mov     edx, ds
		db	8ch,0dah
		mov     eax, ___24e554h
		xor     eax, eax
		mov     ax, dx
		mov     [___24e444h], eax
		mov     dword [___24e440h], ___24e554h
		;pusha   
		db	66h,60h
		mov     eax, [___24e444h]
		;mov     es, eax
		db	8eh,0c0h
		mov     edi, [___24e440h]
		mov     ax, 300h
		mov     bl, 7ah
		mov     bh, 0
		mov     cx, 0
		int     31h
		;popa    
		db	66h,61h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
__GDECL(IPX_CHECK)
		push    10h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     ebx, 0ch
		xor     edx, edx
		mov     eax, ___24e470h
		call    near memset_
		mov     ebx, 1ch
		xor     edx, edx
		mov     eax, ___24e48ch
		call    near memset_
		;mov     edx, ds
		db	8ch,0dah
		mov     eax, ___24e470h
		mov     __GS(___24e470h), dx
		mov     __FS(___24e470h), dx
		mov     __ES(___24e470h), dx
		mov     __DS(___24e470h), dx
		mov     __AX(___24e48ch), 7a00h
		mov     ecx, ___24e470h
		mov     ebx, ___24e48ch
		mov     edx, ebx
		mov     eax, 2fh
		call    near int386x_
		cmp     __AL(___24e48ch), 0ffh
		setz    al
		and     eax, 0ffh
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___6363ch:
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		xor     ebp, ebp
___6364eh:
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e554h
		call    near memset_
		lea     eax, [ebp*4+0]
		sub     eax, ebp
		mov     eax, [NoSplit eax*2+___24cd60h]
		shr     eax, 4
		and     eax, 0ffffh
		mov     [___24e576h], ax
		mov     dword [___24e564h], 6
		;mov     edx, ds
		db	8ch,0dah
		mov     eax, ___24e554h
		xor     eax, eax
		mov     ax, dx
		mov     [___24e444h], eax
		mov     dword [___24e440h], ___24e554h
		;pusha   
		db	66h,60h
		mov     eax, [___24e444h]
		;mov     es, eax
		db	8eh,0c0h
		mov     edi, [___24e440h]
		mov     ax, 300h
		mov     bl, 7ah
		mov     bh, 0
		mov     cx, 0
		int     31h
		;popa    
		db	66h,61h
		inc     ebp
		cmp     ebp, byte 0fh
		jle     short ___6364eh
___636c7h:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
___636d0h:
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e554h
		call    near memset_
		mov     eax, [___24e54eh]
		shr     eax, 4
		and     eax, 0ffffh
		mov     [___24e576h], ax
		mov     dword [___24e564h], 3
		;mov     edx, ds
		db	8ch,0dah
		mov     eax, ___24e554h
		xor     eax, eax
		mov     ax, dx
		mov     [___24e444h], eax
		mov     dword [___24e440h], ___24e554h
		;pusha   
		db	66h,60h
		mov     eax, [___24e444h]
		;mov     es, eax
		db	8eh,0c0h
		mov     edi, [___24e440h]
		mov     ax, 300h
		mov     bl, 7ah
		mov     bh, 0
		mov     cx, 0
		int     31h
		;popa    
		db	66h,61h
		cmp     dword [___24e570h], byte 0
		je      short ___63762h
		mov     dword [___199fbch], 0cah
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___63762h:
		mov     ebp, ___24e554h
___63767h:
		lgs     eax, [___24e54eh]
		cmp     byte [gs:eax+8], 0ffh
		jne     near ___636c7h
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e554h
		call    near memset_
		mov     dword [___24e564h], 0ah
		;mov     edx, ds
		db	8ch,0dah
		mov     eax, ___24e554h
		xor     eax, eax
		mov     ax, dx
		mov     [___24e444h], eax
		mov     [___24e440h], ebp
		;pusha   
		db	66h,60h
		mov     eax, [___24e444h]
		;mov     es, eax
		db	8eh,0c0h
		mov     edi, [___24e440h]
		mov     ax, 300h
		mov     bl, 7ah
		mov     bh, 0
		mov     cx, 0
		int     31h
		;popa    
		db	66h,61h
		jmp     short ___63767h
___637cch:
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     ecx, eax
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e554h
		call    near memset_
		mov     edx, ecx
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     eax, [NoSplit eax*2+___24cd60h]
		shr     eax, 4
		and     eax, 0ffffh
		mov     [___24e576h], ax
		mov     dword [___24e564h], 4
		;mov     edx, ds
		db	8ch,0dah
		mov     eax, ___24e554h
		xor     eax, eax
		mov     ax, dx
		mov     [___24e444h], eax
		mov     dword [___24e440h], ___24e554h
		;pusha   
		db	66h,60h
		mov     eax, [___24e444h]
		;mov     es, eax
		db	8eh,0c0h
		mov     edi, [___24e440h]
		mov     ax, 300h
		mov     bl, 7ah
		mov     bh, 0
		mov     cx, 0
		int     31h
		;popa    
		db	66h,61h
		cmp     dword [___24e570h], byte 0
		je      short ___63865h
		mov     dword [___199fbch], 0cbh
___63865h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
___638ech:
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    edi
		mov     ebx, 0ch
		xor     edx, edx
		mov     eax, ___24e470h
		call    near memset_
		mov     ebx, 1ch
		xor     edx, edx
		mov     eax, ___24e48ch
		call    near memset_
		mov     __AX(___24e48ch), 7a00h
		mov     ecx, ___24e470h
		mov     ebx, ___24e48ch
		mov     edx, ebx
		mov     eax, 2fh
		call    near int386x_
		cmp     __AL(___24e48ch), 0ffh
		je      short ___63955h
		mov     dword [___199fbch], 65h
		xor     eax, eax
		pop     edi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___63955h:
		xor     ebx, ebx
___63957h:
		lea     edx, [ebx*4+0]
		sub     edx, ebx
		lgs     eax, [NoSplit edx*2+___24cd60h]
		mov     byte [gs:eax+8], 1
		lgs     eax, [NoSplit edx*2+___24cd60h]
		mov     dword [gs:eax+4], 0
		mov     eax, [___199fa0h]
		add     eax, 5000h
		add     eax, [___199f9ch]
		call    near ___632c4h
		lgs     ecx, [NoSplit edx*2+___24cd60h]
		mov     [gs:ecx+0ah], ax
		lgs     eax, [NoSplit edx*2+___24cd60h]
		mov     word [gs:eax+22h], 2
		mov     eax, [NoSplit edx*2+___24cd00h]
		shr     eax, 4
		and     eax, 0ffffh
		shl     eax, 10h
		lgs     ecx, [NoSplit edx*2+___24cd60h]
		mov     [gs:ecx+24h], eax
		lgs     eax, [NoSplit edx*2+___24cd60h]
		mov     word [gs:eax+28h], 1eh
		mov     eax, [NoSplit edx*2+___24cdc0h]
		shr     eax, 4
		and     eax, 0ffffh
		shl     eax, 10h
		lgs     ecx, [NoSplit edx*2+___24cd60h]
		mov     [gs:ecx+2ah], eax
		lgs     eax, [NoSplit edx*2+___24cd60h]
		mov     word [gs:eax+2eh], 222h
		inc     ebx
		cmp     ebx, byte 0fh
		jle     near ___63957h
		mov     edi, [___24e548h]
		add     edi, byte 6
		mov     ecx, 1
		xor     eax, eax
		rep stosd   
		mov     edi, [___24e548h]
		add     edi, byte 0ah
		mov     ecx, 3
		mov     eax, 0ffffh
		rep stosw   
		mov     edi, [___24e54eh]
		add     edi, byte 1ch
		mov     ecx, 3
		rep stosw   
		mov     eax, [___199fa0h]
		add     eax, 5000h
		add     eax, [___199f9ch]
		call    near ___632c4h
		lgs     edx, [___24e548h]
		mov     [gs:edx+10h], ax
		mov     eax, [___199fa0h]
		add     eax, 5000h
		add     eax, [___199f9ch]
		call    near ___632c4h
		mov     edx, eax
		mov     bx, [___24e552h]
		mov     eax, [___24e54eh]
		;mov     gs, ebx
		db	8eh,0ebh
		mov     [gs:eax+0ah], dx
		mov     dword [gs:eax+4], 0
		lgs     edx, [___24e548h]
		mov     byte [gs:edx+5], 4
		;mov     gs, ebx
		db	8eh,0ebh
		mov     word [gs:eax+22h], 2
		shr     edx, 4
		and     edx, 0ffffh
		shl     edx, 10h
		mov     [gs:eax+24h], edx
		mov     word [gs:eax+28h], 1eh
		mov     edx, [___24e58ah]
		shr     edx, 4
		and     edx, 0ffffh
		shl     edx, 10h
		mov     [gs:eax+2ah], edx
		mov     word [gs:eax+2eh], 1
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e554h
		call    near memset_
		mov     dword [___24e564h], 1ah
		call    near ___632e8h
		mov     eax, [___24e570h]
		sub     eax, byte 1eh
		mov     [___199fc0h], eax
		mov     eax, 1
		pop     edi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
__GDECL(___63b20h)
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		mov     ebx, eax
		mov     ecx, [___199fd4h]
		inc     ecx
		mov     [___199fd4h], ecx
		cmp     ecx, byte 22h
		jg      short ___63b4ah
		test    eax, eax
		jne     near ___63c90h
___63b4ah:
		mov     eax, [___24e464h]
		mov     byte [eax], 0b4h
		mov     byte [eax+1], 0b5h
		dec     dl
		mov     [eax+2], dl
		mov     [eax+3], bl
		mov     byte [eax+4], 2
		mov     byte [eax+5], 0b6h
		mov     byte [eax+6], 0b7h
		mov     eax, [___199fa0h]
		add     eax, 5000h
		call    near ___632c4h
		lgs     edx, [___24e548h]
		mov     [gs:edx+10h], ax
		mov     eax, [___24e45ch]
		mov     byte [eax+1ch], 0ffh
		mov     byte [eax+1dh], 0ffh
		mov     byte [eax+1eh], 0ffh
		mov     byte [eax+1fh], 0ffh
		mov     byte [eax+20h], 0ffh
		mov     byte [eax+21h], 0ffh
		mov     eax, [___199fa0h]
		add     eax, 5000h
		call    near ___632c4h
		mov     ebx, eax
		mov     eax, [___24e45ch]
		mov     [eax+0ah], bx
		mov     dword [eax+4], 0
		mov     word [eax+22h], 2
		mov     edx, [___24e548h]
		shr     edx, 4
		and     edx, 0ffffh
		shl     edx, 10h
		mov     [eax+24h], edx
		mov     word [eax+28h], 1eh
		mov     edx, [___24e464h]
		shr     edx, 4
		and     edx, 0ffffh
		shl     edx, 10h
		mov     [eax+2ah], edx
		mov     word [eax+2eh], 7
		mov     ebx, 32h
		xor     edx, edx
		mov     eax, ___24e4d8h
		call    near memset_
		mov     eax, [___24e45ch]
		shr     eax, 4
		and     eax, 0ffffh
		mov     [___24e4fah], ax
		mov     dword [___24e4e8h], 3
		;mov     edx, ds
		db	8ch,0dah
		mov     eax, ___24e4d8h
		xor     eax, eax
		mov     ax, dx
		mov     [___24e444h], eax
		mov     dword [___24e440h], ___24e4d8h
		;pusha   
		db	66h,60h
		mov     eax, [___24e444h]
		;mov     es, eax
		db	8eh,0c0h
		mov     edi, [___24e440h]
		mov     ax, 300h
		mov     bl, 7ah
		mov     bh, 0
		mov     cx, 0
		int     31h
		;popa    
		db	66h,61h
		mov     eax, [___199fa0h]
		add     eax, 5000h
		add     eax, [___199f9ch]
		call    near ___632c4h
		lgs     edx, [___24e548h]
		mov     [gs:edx+10h], ax
		xor     ebx, ebx
		mov     [___199fd4h], ebx
___63c90h:
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___3f77ch__freeMemory
	extern	___1a1ed4h
	extern	___1a1e90h
	extern	___1a10b0h
	extern	___1a1eb0h
	extern	___1a1e78h
	extern	___1a1eb8h
	extern	___1a0180h
	extern	___1a0184h
	extern	___1a0188h
	extern	___1a018ch
	extern	___1a0190h
	extern	___1a0194h
	extern	___1a01b8h
	extern	___1a01bch
	extern	___1a01c0h
	extern	___1a01c4h
	extern	___1a01c8h
	extern	___1a01cch
	extern	___1a01a8h
	extern	___1a01ach
	extern	___1a01b0h
	extern	___1a01b4h
	extern	___1a0198h
	extern	___1a019ch
	extern	___1a01a0h
	extern	___1a01a4h
	extern	___1a01d0h
	extern	___1a01d4h
	extern	___1a01d8h
	extern	___1a01dch
	extern	___1a1e8ch
	extern	___1a1ea0h
	extern	___1a1e7ch
	extern	___1a1e80h
	extern	___1a1e74h
	extern	___1a1e84h
	extern	___1a1e60h
	extern	___1a1ebch
	extern	___1a1eb4h
	extern	___1a1e88h
	extern	___1a1ea4h
	extern	___1a1ea8h
	extern	___1a1e6ch
	extern	___1a1e98h
	extern	___1a1each
	extern	___1a1e94h
	extern	___1a1e9ch
	extern	___1a1e70h
	extern	___1a1e5ch
	extern	___1a1e58h
	extern	___1a1e54h
	extern	___1a1e64h

section .text

__GDECL(___24ec0h)
		push    4
		call    near __CHK
		mov     eax, [___1a1124h__VESA101h_ScreenBufferA]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1ed4h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e90h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a10b0h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1eb0h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e78h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1eb8h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a0180h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a0184h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a0188h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a018ch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a0190h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a0194h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01b8h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01bch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01c0h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01c4h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01c8h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01cch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01a8h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01ach]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01b0h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01b4h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a0198h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a019ch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01a0h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01a4h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01d0h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01d4h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01d8h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a01dch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e8ch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1ea0h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e7ch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e80h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e74h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e84h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e60h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1ebch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1eb4h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e88h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1ea4h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1ea8h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e6ch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e98h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1each]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e94h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e9ch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e70h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e5ch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e58h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e54h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1e64h]
		call    near ___3f77ch__freeMemory
		retn    

cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___135fch
	extern	___23230h
	extern	___1a1f64h
	extern	___1a1040h
	extern	___1a1f65h
	extern	___1a1f66h
	extern	___182358h
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h
	extern	___182360h
	extern	___182368h
	extern	___13248h
	extern	___1a10d4h
	extern	___25330h

section .text

__GDECL(___30df8h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     ecx, 2800h
		mov     ebx, 27fh
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 39580h
		add     edi, 39580h
		mov     edx, 173h
		call 	__MOVS
		mov     ecx, 6dh
		xor     eax, eax
		call    near ___135fch
		call    near ___23230h
		mov     ecx, 70h
		xor     eax, eax
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     al, [___1a1f64h]
		mov     edx, 80h
		add     ebx, 14020h
		mov     esi, [eax*4+___1a1040h]
		shr     dl, 2
___30e76h:
		mov     ch, dl
___30e78h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___30e78h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___30e76h
		mov     ecx, 70h
		xor     eax, eax
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     al, [___1a1f65h]
		mov     edx, 80h
		add     ebx, 140c0h
		mov     esi, [eax*4+___1a1040h]
		shr     dl, 2
___30ebfh:
		mov     ch, dl
___30ec1h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___30ec1h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___30ebfh
		mov     ecx, 70h
		xor     eax, eax
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     al, [___1a1f66h]
		mov     edx, 80h
		add     ebx, 14160h
		mov     esi, [eax*4+___1a1040h]
		shr     dl, 2
___30f08h:
		mov     ch, dl
___30f0ah:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___30f0ah
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___30f08h
		mov     ecx, 23049h
		mov     ebx, ___182358h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 230e2h
		mov     ebx, ___182360h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 2317fh
		mov     ebx, ___182368h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		push    byte 1
		mov     ecx, 69h
		mov     ebx, 94h
		mov     edx, 100h
		mov     eax, 16h
		call    near ___13248h
		push    byte 1
		mov     ecx, 69h
		mov     ebx, 94h
		mov     edx, 100h
		mov     eax, 0b6h
		call    near ___13248h
		push    byte 1
		mov     ecx, 69h
		mov     ebx, 94h
		mov     edx, 100h
		mov     eax, 156h
		call    near ___13248h
		mov     ecx, 20h
		mov     edx, 280h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10d4h]
		add     ebx, 0c800h
___30fe2h:
		mov     edi, edx
___30fe4h:
		mov     al, [esi]
		or      al, al
		je      short ___30fech
		mov     [ebx], al
___30fech:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___30fe4h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___30fe2h
		call    near ___25330h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

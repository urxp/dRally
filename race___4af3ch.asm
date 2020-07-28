cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243d58h
	extern	___243d2ch
	extern	___243d28h
	extern	___243d60h
	extern	___243d78h
	extern	___243d04h
	extern	___243d30h
	extern	___243d54h
	extern	___243d10h
	extern	___243cf8h
	extern	___243d74h
	extern	___243d40h
	extern	___1e6f88h
	extern	___1e6f84h
	extern	__CHP
	extern	___1e6edch
	extern	___183fb1h
	extern	___1e6cc8h
	extern	___1e6c1eh
	extern	___1e6b82h
	extern	___1f2488h
	extern	___1f248ch
	extern	___1df720h
	extern	___1df724h
	extern	___243c5ch
	extern	___1de920h
	extern	___1ded20h
	extern	___1ded1ch
	extern	___243c88h
	extern	___1f3b08h
	extern	___1f3b10h
	extern	___1f3c3ch
	extern	___1f3e98h
	extern	___1f3e94h
	extern	___1f3ea0h
	extern	___1f3e9ch
	extern	___1f44e4h
	extern	___1f44e8h
	extern	___243c94h
	extern	___240b48h
	extern	___240b5ch
	extern	___240b54h
	extern	___240b4ch
	extern	___240b58h
	extern	___240b2ch
	extern	___243d5ch
	extern	___240b50h

section .text

__GDECL(race___4af3ch)
		push    58h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 3ch
		xor     ecx, ecx
		jmp     short ___4af74h
___4af53h:
		mov     edx, [___243d58h]
		lea     esi, [edx+ecx*1]
		add     edx, ebx
		xor     eax, eax
		dec     edx
		mov     al, [esi]
		sub     edx, ecx
		mov     [esp+38h], eax
		mov     al, [edx]
		mov     [esi], al
		mov     al, [esp+38h]
		inc     ecx
		mov     [edx], al
___4af74h:
		mov     edx, [___243d2ch]
		mov     ebx, [___243d28h]
		imul    ebx, edx
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		cmp     ecx, eax
		jl      short ___4af53h
		xor     ecx, ecx
		jmp     short ___4afb7h
___4af96h:
		mov     edx, [___243d60h]
		lea     esi, [edx+ecx*1]
		add     edx, ebx
		xor     eax, eax
		dec     edx
		mov     al, [esi]
		sub     edx, ecx
		mov     [esp+38h], eax
		mov     al, [edx]
		mov     [esi], al
		mov     al, [esp+38h]
		inc     ecx
		mov     [edx], al
___4afb7h:
		mov     esi, [___243d2ch]
		mov     ebx, [___243d28h]
		imul    ebx, esi
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		cmp     ecx, eax
		jl      short ___4af96h
		xor     ecx, ecx
		jmp     short ___4aff9h
___4afd9h:
		mov     esi, [___243d78h]
		add     ebx, esi
		xor     eax, eax
		dec     ebx
		mov     al, [ecx+esi*1]
		sub     ebx, ecx
		mov     [esp+38h], eax
		mov     al, [ebx]
		mov     [ecx+esi*1], al
		mov     al, [esp+38h]
		inc     ecx
		mov     [ebx], al
___4aff9h:
		mov     edi, [___243d04h]
		mov     ebx, [___243d30h]
		imul    ebx, edi
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		cmp     ecx, eax
		jl      short ___4afd9h
		xor     ecx, ecx
		jmp     short ___4b03ch
___4b01bh:
		mov     edx, [___243d54h]
		lea     esi, [edx+ecx*1]
		add     edx, ebx
		xor     eax, eax
		dec     edx
		mov     al, [esi]
		sub     edx, ecx
		mov     [esp+38h], eax
		mov     al, [edx]
		mov     [esi], al
		mov     al, [esp+38h]
		inc     ecx
		mov     [edx], al
___4b03ch:
		mov     ebp, [___243d10h]
		mov     ebx, [___243cf8h]
		imul    ebx, ebp
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		cmp     ecx, eax
		jl      short ___4b01bh
		xor     eax, eax
		mov     [esp+1ch], eax
___4b060h:
		mov     esi, [esp+1ch]
		xor     edx, edx
___4b066h:
		mov     ecx, [___243d74h]
		add     ecx, esi
		lea     ebx, [ecx+edx*1]
		xor     eax, eax
		add     ecx, 257ffh
		mov     al, [ebx]
		sub     ecx, edx
		mov     [esp+38h], eax
		mov     al, [ecx]
		mov     [ebx], al
		mov     al, [esp+38h]
		inc     edx
		mov     [ecx], al
		cmp     edx, 12c00h
		jl      short ___4b066h
		mov     edx, 125c0h
		mov     ebp, [esp+1ch]
		xor     ebx, ebx
		mov     [esp+20h], edx
		mov     [esp+28h], ebx
___4b0a7h:
		mov     esi, [esp+28h]
		mov     edi, [esp+20h]
		xor     edx, edx
___4b0b1h:
		mov     ecx, [___243d74h]
		add     ecx, ebp
		inc     edx
		lea     ebx, [ecx+esi*1]
		xor     eax, eax
		mov     al, [edx+ebx*1-1]
		add     ecx, edi
		mov     [esp+38h], eax
		mov     al, [ecx+edx*1-1]
		mov     [edx+ebx*1-1], al
		mov     al, [esp+38h]
		mov     [ecx+edx*1-1], al
		cmp     edx, 640h
		jl      short ___4b0b1h
		mov     esi, [esp+28h]
		mov     ecx, [esp+20h]
		add     esi, 640h
		sub     ecx, 640h
		mov     [esp+28h], esi
		mov     [esp+20h], ecx
		cmp     esi, 9600h
		jne     short ___4b0a7h
		mov     eax, [esp+1ch]
		mov     ebp, 251c0h
		mov     [esp+30h], eax
		mov     eax, 12c00h
		mov     [esp+24h], ebp
		mov     [esp+2ch], eax
___4b11fh:
		mov     eax, [esp+2ch]
		mov     ebp, [esp+24h]
		xor     edx, edx
		mov     [esp+34h], eax
		mov     esi, eax
		mov     ecx, ebp
___4b131h:
		mov     edi, [esp+30h]
		mov     ebx, [___243d74h]
		add     ebx, edi
		mov     edi, [esp+34h]
		add     edi, ebx
		xor     eax, eax
		mov     al, [edx+edi*1]
		inc     esi
		mov     [esp+38h], eax
		mov     al, [ecx+ebx*1]
		inc     edx
		mov     [esi+ebx*1-1], al
		add     ebx, ebp
		mov     al, [esp+38h]
		inc     ecx
		mov     [edx+ebx*1-1], al
		cmp     edx, 640h
		jl      short ___4b131h
		mov     eax, [esp+2ch]
		mov     ebp, [esp+24h]
		add     eax, 640h
		sub     ebp, 640h
		mov     [esp+2ch], eax
		mov     [esp+24h], ebp
		cmp     eax, dword 1c200h
		jne     short ___4b11fh
		mov     ebx, [esp+1ch]
		add     ebx, 25800h
		mov     [esp+1ch], ebx
		cmp     ebx, 96000h
		jne     near ___4b060h
		xor     edi, edi
___4b1a6h:
		mov     esi, edi
		xor     edx, edx
___4b1aah:
		mov     ebx, [___243d40h]
		add     ebx, esi
		lea     ecx, [ebx+edx*1]
		xor     eax, eax
		add     ebx, 0ffh
		mov     al, [ecx]
		sub     ebx, edx
		mov     [esp+38h], eax
		mov     al, [ebx]
		mov     [ecx], al
		mov     al, [esp+38h]
		inc     edx
		mov     [ebx], al
		cmp     edx, 80h
		jl      short ___4b1aah
		add     edi, 100h
		cmp     edi, 2400h
		jne     short ___4b1a6h
		mov     esi, [___243d2ch]
		mov     ecx, [___243d28h]
		xor     ebx, ebx
		xor     edx, edx
		dec     esi
		dec     ecx
		xor     edi, edi
___4b1fah:
		fld     dword [edx+___1e6f88h]
		fld     dword [edx+___1e6f84h]
		call    near __CHP
		mov     eax, ecx
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+38h]
		mov     ebp, [esp+38h]
		fistp   dword [esp+38h]
		sub     eax, ebp
		mov     ebp, [esp+38h]
		mov     [esp+4], eax
		mov     eax, esi
		fild    dword [esp+4]
		sub     eax, ebp
		fstp    dword [edx+___1e6f84h]
		mov     [esp+4], eax
		mov     eax, [edx+___1e6edch]
		fild    dword [esp+4]
		sub     eax, byte 30h
		fstp    dword [edx+___1e6f88h]
		mov     [esp+38h], eax
		mov     [edx+___1e6edch], eax
		cmp     edi, eax
		jle     short ___4b270h
		jle     short ___4b263h
		neg     eax
___4b263h:
		mov     ebp, 5fh
		sub     ebp, eax
		mov     [edx+___1e6edch], ebp
___4b270h:
		imul    eax, [edx+___1e6edch], 640h
		fld     qword [___183fb1h]
		fild    dword [edx+___1e6edch]
		fmul    st0, st1
		fild    dword [edx+___1e6edch]
		add     edx, 35eh
		fmulp   st2, st0
		fstp    dword [edx+___1e6cc8h]
		fstp    dword [edx+___1e6c1eh]
		add     eax, ebx
		add     ebx, 25800h
		mov     [edx+___1e6b82h], eax
		cmp     edx, 0d78h
		jne     near ___4b1fah
		mov     ebx, [___243d28h]
		mov     ecx, [___243d2ch]
		xor     edx, edx
		dec     ebx
		dec     ecx
		xor     esi, esi
___4b2ceh:
		mov     eax, [edx+___1f2488h]
		mov     [esp+38h], eax
		cmp     esi, eax
		jge     short ___4b2eah
		mov     edi, [esp+38h]
		mov     eax, ebx
		sub     eax, edi
		mov     [edx+___1f2488h], eax
___4b2eah:
		mov     eax, [edx+___1f248ch]
		mov     [esp+38h], eax
		cmp     esi, eax
		jge     short ___4b306h
		mov     edi, [esp+38h]
		mov     eax, ecx
		sub     eax, edi
		mov     [edx+___1f248ch], eax
___4b306h:
		add     edx, 120h
		cmp     edx, 1200h
		jne     short ___4b2ceh
		mov     ebx, [___243d28h]
		mov     ecx, [___243d2ch]
		xor     edx, edx
		dec     ebx
		dec     ecx
		mov     edi, 0fffffff0h
		xor     esi, esi
___4b32bh:
		mov     eax, [edx+___1df720h]
		mov     [esp+38h], eax
		cmp     esi, eax
		jge     short ___4b349h
		mov     ebp, [esp+38h]
		mov     eax, ebx
		sub     eax, ebp
		add     eax, edi
		mov     [edx+___1df720h], eax
___4b349h:
		mov     eax, [edx+___1df724h]
		mov     [esp+38h], eax
		cmp     esi, eax
		jge     short ___4b367h
		mov     ebp, [esp+38h]
		mov     eax, ecx
		sub     eax, ebp
		add     eax, edi
		mov     [edx+___1df724h], eax
___4b367h:
		add     edx, byte 20h
		cmp     edx, 280h
		jne     short ___4b32bh
		cmp     dword [___243c5ch], byte 0
		jle     short ___4b3b9h
		mov     ecx, [___243d2ch]
		mov     ebx, [___243c5ch]
		mov     esi, [___243d28h]
		xor     eax, eax
		dec     ecx
		shl     ebx, 2
		dec     esi
___4b394h:
		mov     edx, esi
		sub     edx, [eax+___1de920h]
		mov     ebp, [eax+___1ded20h]
		mov     [eax+___1de920h], edx
		mov     edx, ecx
		add     eax, byte 4
		sub     edx, ebp
		mov     [eax+___1ded1ch], edx
		cmp     eax, ebx
		jl      short ___4b394h
___4b3b9h:
		cmp     dword [___243c88h], byte 0
		jle     near ___4b4c2h
		mov     eax, [___243d2ch]
		mov     ebp, [___243d28h]
		dec     eax
		xor     esi, esi
		mov     [esp+0ch], eax
		mov     eax, [___243c88h]
		dec     ebp
		imul    edi, eax, 0c50h
___4b3e4h:
		mov     ecx, esi
		mov     eax, esi
		mov     ebx, [esi+___1f3b08h]
		xor     edx, edx
		test    ebx, ebx
		jle     short ___4b410h
___4b3f4h:
		mov     ebx, [eax+___1f3b10h]
		neg     ebx
		mov     [eax+___1f3b10h], ebx
		inc     edx
		mov     ebx, [ecx+___1f3b08h]
		add     eax, byte 4
		cmp     edx, ebx
		jl      short ___4b3f4h
___4b410h:
		mov     ecx, esi
		mov     eax, esi
		mov     ebx, [esi+___1f3b08h]
		xor     edx, edx
		test    ebx, ebx
		jle     short ___4b43ch
___4b420h:
		mov     ebx, [eax+___1f3c3ch]
		neg     ebx
		mov     [eax+___1f3c3ch], ebx
		inc     edx
		mov     ebx, [ecx+___1f3b08h]
		add     eax, byte 4
		cmp     edx, ebx
		jl      short ___4b420h
___4b43ch:
		mov     eax, [ecx+___1f3e98h]
		fild    dword [ecx+___1f3e94h]
		neg     eax
		fld     st0
		mov     [ecx+___1f3e94h], eax
		fchs    
		call    near __CHP
		fistp   dword [esp+4]
		mov     eax, [esp+4]
		mov     [ecx+___1f3e98h], eax
		mov     eax, [ecx+___1f3ea0h]
		fild    dword [ecx+___1f3e9ch]
		neg     eax
		fstp    st1
		mov     [ecx+___1f3e9ch], eax
		fchs    
		call    near __CHP
		fistp   dword [esp+4]
		mov     eax, [esp+4]
		mov     edx, [ecx+___1f44e4h]
		mov     [ecx+___1f3ea0h], eax
		mov     eax, ebp
		sub     eax, edx
		mov     ebx, [ecx+___1f44e8h]
		mov     [ecx+___1f44e4h], eax
		mov     eax, [esp+0ch]
		sub     eax, ebx
		add     esi, 0c50h
		mov     [ecx+___1f44e8h], eax
		cmp     esi, edi
		jl      near ___4b3e4h
___4b4c2h:
		mov     ecx, [___243c94h]
		test    ecx, ecx
		jle     near ___4b57eh
		mov     eax, [___243d28h]
		dec     eax
		lea     ebx, [ecx*4+0]
		shl     eax, 8
		xor     edx, edx
		mov     [esp+10h], eax
		mov     eax, [___243d2ch]
		sub     ebx, ecx
		dec     eax
		shl     ebx, 2
		shl     eax, 8
		sub     ebx, ecx
		mov     [esp+8], eax
		shl     ebx, 2
		fild    dword [esp+8]
		fild    dword [esp+10h]
___4b505h:
		mov     eax, [edx+___240b48h]
		mov     ecx, [edx+___240b5ch]
		imul    eax, ecx
		mov     [esp+4], eax
		fild    dword [edx+___240b54h]
		fild    dword [esp+4]
		fld     st2
		fsub    st0, st2
		fsubrp  st1, st0
		call    near __CHP
		fistp   dword [esp+4]
		mov     eax, [esp+4]
		mov     [edx+___240b54h], eax
		mov     esi, [edx+___240b5ch]
		mov     eax, [edx+___240b4ch]
		imul    eax, esi
		fild    dword [edx+___240b58h]
		mov     [esp+4], eax
		fstp    st1
		fild    dword [esp+4]
		fld     st3
		fsubrp  st2, st0
		fsubp   st1, st0
		add     edx, byte 2ch
		call    near __CHP
		fistp   dword [esp+4]
		mov     eax, [esp+4]
		mov     [edx+___240b2ch], eax
		cmp     edx, ebx
		jl      short ___4b505h
		fstp    st0
		fstp    st0
___4b57eh:
		xor     edi, edi
		mov     ebp, [___243c94h]
		mov     [esp+18h], edi
		test    ebp, ebp
		jle     near ___4b61fh
		mov     [esp+14h], edi
___4b596h:
		mov     ebx, [esp+14h]
		xor     ecx, ecx
		jmp     short ___4b5dfh
___4b59eh:
		mov     edx, [___243d5ch]
		mov     ebp, [ebx+___240b50h]
		add     ebp, edx
		xor     eax, eax
		mov     al, [ecx+ebp*1]
		mov     [esp+38h], eax
		lea     eax, [esi+ebp*1-1]
		sub     eax, ecx
		mov     al, [eax]
		mov     [ecx+ebp*1], al
		mov     eax, [ebx+___240b48h]
		imul    eax, [ebx+___240b4ch]
		add     edx, [ebx+___240b50h]
		add     edx, eax
		dec     edx
		sub     edx, ecx
		mov     al, [esp+38h]
		inc     ecx
		mov     [edx], al
___4b5dfh:
		mov     eax, [ebx+___240b4ch]
		mov     esi, [ebx+___240b48h]
		imul    esi, eax
		mov     edx, esi
		mov     eax, esi
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		cmp     ecx, eax
		jl      short ___4b59eh
		mov     ecx, [esp+14h]
		mov     esi, [esp+18h]
		mov     edi, [___243c94h]
		add     ecx, byte 2ch
		inc     esi
		mov     [esp+14h], ecx
		mov     [esp+18h], esi
		cmp     esi, edi
		jl      near ___4b596h
___4b61fh:
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

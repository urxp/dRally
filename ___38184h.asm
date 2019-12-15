 cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___180724h
	extern	___1a0228h
	extern	itoa_
	extern	___185c7ah
	extern	___251e8h
	extern	___1a10b8h
	extern	___12e78h
	extern	___1a01e0h
	extern	strupr_
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a0220h
	extern	___19de70h
	extern	___1a01fch
	extern	___1a0fa4h
	extern	___2b318h
	extern	___1a1ef8h
	extern	___19bd60h
	extern	___1a020ch
	extern	___1a0fb8h
	extern	___1a0fe0h
	extern	___35b68h
	extern	___196adch

section .text
  
__GDECL(___38184h)
		push    6ch
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 48h
		mov     [esp+30h], eax
		mov     ecx, 4
		lea     edi, [esp+14h]
		mov     esi, edx
		call 	__MOVS
		mov     eax, [esp+30h]
		lea     ebp, [eax*4+0]
		add     ebp, eax
		shl     ebp, 4
		mov     edx, 15eh
		sub     ebp, eax
		lea     ebx, [eax+1]
		sub     edx, ebp
		mov     eax, edx
		sar     edx, 1fh
		idiv    ebx
		xor     ebp, ebp
		mov     [esp+34h], eax
		mov     ebx, [esp+30h]
		mov     edx, [esp+34h]
		add     eax, byte 6ch
		add     edx, byte 4fh
		mov     [esp+2ch], eax
		mov     [esp+34h], edx
		test    ebx, ebx
		jle     near ___38426h
		lea     esi, [eax+34h]
		lea     edi, [eax+39h]
		lea     ecx, [eax+3]
		lea     eax, [edx*4+0]
		add     eax, edx
		imul    ebx, edx, byte 0
		shl     eax, 7
		mov     [esp+28h], eax
		lea     eax, [ecx*4+0]
		add     eax, ecx
		shl     eax, 7
		add     eax, ebx
		mov     [esp+3ch], eax
		mov     eax, [esp+28h]
		mov     [esp+20h], eax
		lea     eax, [edi*4+0]
		add     eax, edi
		lea     edx, [ebx+1efh]
		shl     eax, 7
		add     edx, eax
		mov     eax, [esp+28h]
		mov     [esp+24h], eax
		lea     eax, [esi*4+0]
		mov     [esp+40h], edx
		add     eax, esi
		lea     edx, [ebx+1a4h]
		shl     eax, 7
		add     edx, eax
		mov     [esp+18h], ebp
		mov     [esp+1ch], edx
___3826eh:
		xor     eax, eax
		mov     al, [esp+ebp*1+14h]
		imul    eax, eax, byte 6ch
		mov     ebx, 0ah
		mov     edx, esp
		mov     esi, ___180724h
		mov     eax, [eax+___1a0228h]
		mov     edi, esp
		call    near itoa_
		call 	__STRCAT
		mov     eax, [esp+34h]
		imul    eax, ebp
		mov     ecx, [esp+1ch]
		mov     ebx, esp
		mov     [esp+38h], eax
		mov     eax, esp
		mov     edx, ___185c7ah
		call    near ___251e8h
		sub     ecx, eax
		mov     eax, [___1a10b8h]
		call    near ___12e78h
		xor     eax, eax
		mov     al, [esp+ebp*1+14h]
		imul    eax, eax, byte 6ch
		mov     esi, ___1a01e0h
		mov     edi, esp
		mov     ecx, [esp+40h]
		add     esi, eax
		mov     ebx, esp
		call 	__STRCPY
		mov     eax, esp
		mov     edx, ___185c7ah
		call    near strupr_
		mov     eax, [___1a10b8h]
		call    near ___12e78h
		xor     eax, eax
		mov     al, [esp+ebp*1+14h]
		imul    eax, eax, byte 6ch
		mov     ecx, [esp+3ch]
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     ebx, ecx
		mov     ecx, 40h
		mov     esi, [eax+___1a0220h]
		add     ebx, 1a6h
		mov     edx, ecx
		mov     esi, [esi*4+___19de70h]
		shr     dl, 2
___38355h:
		mov     ch, dl
___38357h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___38357h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___38355h
		mov     eax, [esp+2ch]
		add     eax, [esp+38h]
		imul    ebx, eax, 280h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ebx
		lea     ebx, [eax+1eah]
		xor     eax, eax
		mov     al, [esp+ebp*1+14h]
		imul    eax, eax, byte 6ch
		imul    esi, [eax+___1a01fch], 5140h
		inc     ebp
		mov     eax, [___1a0fa4h]
		mov     ecx, 34h
		add     esi, eax
		mov     eax, [esp+18h]
		mov     edx, 64h
		add     esi, eax
		mov     edi, [esp+30h]
		shr     dl, 2
___383c4h:
		mov     ch, dl
___383c6h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___383c6h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___383c4h
		mov     eax, [esp+28h]
		mov     edx, [esp+3ch]
		mov     ebx, [esp+40h]
		mov     esi, [esp+18h]
		mov     ecx, [esp+1ch]
		add     esi, 1450h
		add     edx, eax
		mov     eax, [esp+20h]
		mov     [esp+3ch], edx
		add     ebx, eax
		mov     eax, [esp+24h]
		mov     [esp+18h], esi
		add     ecx, eax
		mov     [esp+40h], ebx
		mov     [esp+1ch], ecx
		cmp     ebp, edi
		jl      near ___3826eh
___38426h:
		call    near ___2b318h
		xor     edx, edx
		mov     ebp, [___1a1ef8h]
		mov     dl, [esp+14h]
		cmp     edx, ebp
		je      short ___38444h
		cmp     dword [___19bd60h], byte 0
		je      short ___38470h
___38444h:
		xor     edx, edx
		mov     dl, [esp+14h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fb8h]
		jmp     short ___38494h
___38470h:
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fe0h]
___38494h:
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+44h], eax
		fild    word [esp+44h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+48h], eax
		fild    word [esp+48h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+4ch], eax
		fild    word [esp+4ch]
		sub     esp, byte 4
		mov     eax, 40h
		fstp    dword [esp]
		call    near ___35b68h
		xor     edx, edx
		mov     ebx, [___1a1ef8h]
		mov     dl, [esp+15h]
		cmp     edx, ebx
		je      short ___384f1h
		cmp     dword [___19bd60h], byte 0
		je      short ___3851dh
___384f1h:
		xor     edx, edx
		mov     dl, [esp+15h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fb8h]
		jmp     short ___38541h
___3851dh:
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fe0h]
___38541h:
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+44h], eax
		fild    word [esp+44h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+48h], eax
		fild    word [esp+48h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+4ch], eax
		fild    word [esp+4ch]
		sub     esp, byte 4
		mov     eax, 50h
		fstp    dword [esp]
		call    near ___35b68h
		xor     eax, eax
		mov     esi, [___1a1ef8h]
		mov     al, [esp+16h]
		cmp     eax, esi
		je      short ___385a7h
		cmp     dword [___19bd60h], byte 0
		je      short ___385d3h
		cmp     dword [___196adch], byte 2
		jle     short ___385d3h
___385a7h:
		xor     edx, edx
		mov     dl, [esp+16h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fb8h]
		jmp     short ___385fdh
___385d3h:
		xor     edx, edx
		mov     dl, [esp+16h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fe0h]
___385fdh:
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+44h], eax
		fild    word [esp+44h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+48h], eax
		fild    word [esp+48h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+4ch], eax
		fild    word [esp+4ch]
		sub     esp, byte 4
		mov     eax, 0e0h
		fstp    dword [esp]
		call    near ___35b68h
		xor     eax, eax
		mov     edx, [___1a1ef8h]
		mov     al, [esp+17h]
		cmp     eax, edx
		je      short ___38663h
		cmp     dword [___19bd60h], byte 0
		je      short ___3868fh
		cmp     dword [___196adch], byte 3
		jle     short ___3868fh
___38663h:
		xor     edx, edx
		mov     dl, [esp+17h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fb8h]
		jmp     short ___386b9h
___3868fh:
		xor     edx, edx
		mov     dl, [esp+17h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fe0h]
___386b9h:
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+44h], eax
		fild    word [esp+44h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+48h], eax
		fild    word [esp+48h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+4ch], eax
		fild    word [esp+4ch]
		sub     esp, byte 4
		mov     eax, 0f0h
		fstp    dword [esp]
		call    near ___35b68h
		add     esp, byte 48h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

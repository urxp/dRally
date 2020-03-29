cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___243894h
	extern	___243330h
	extern	___243334h
	extern	___243ca4h
	extern	___24332ch
	extern	___243ce8h
	extern	___1e6fdah
	extern	___243cd4h
	extern	___243ca0h
	extern	___1a10a0h
	extern	___1a10a8h
	extern	___1a1094h
	extern	___1a109ch
	extern	___182f67h
	extern	__CHP
	extern	___1a1090h
	extern	___1a102ch
	extern	___196d98h
	extern	___40864h
	extern	___1c9f10h
	extern	___243d80h
	extern	___243cf4h
	extern	___243854h
	extern	___243d3ch
	extern	___1de210h
	extern	___1a1134h
	extern	___1e6fd8h
	extern	___243858h
	extern	___1de598h
	extern	___182f6fh
	extern	ceil_
	extern	___182f77h
	extern	___182f7fh
	extern	___243d48h
	extern	___24385ch
	extern	___243860h
	extern	___1de580h
	extern	___424c8h
	extern	___1e6fd9h
	extern	___1c9ec0h
	extern	___1c9ec4h
	extern	___1c9ec8h
	extern	___1c9ecch
	extern	___1c9ee0h
	extern	___1c9ef0h
	extern	___1c9ed0h
	extern	___1c9f00h
	extern	___1d8a10h
	extern	___1d2710h
	extern	___1c9ee4h
	extern	___1c9ee8h
	extern	___1c9eech
	extern	___1e6f80h
	extern	___1de584h
	extern	___182f87h
	extern	___243338h
	extern	___2435c4h
	extern	___1de5ach
	extern	___1de5b0h
	extern	___182f8fh
	extern	___243d34h
	extern	___1de5a8h
	extern	___243cdch
	extern	___243cb8h
	extern	___1d7810h
	extern	___4256ch
	extern	___1de5b4h
	extern	___182f97h
	extern	___182f9fh
	extern	___1de530h
	extern	___196de8h
	extern	dRally_Sound_pushEffect
	extern	___196dech
	extern	___182ed4h
	extern	___1de7d0h
	extern	strcmp_
	extern	___196df4h
	extern	___182fa7h
	extern	___1d5890h
	extern	___243d84h

section .text

__GDECL(___40f48h)
		push    64h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 38h
		mov     eax, [___243894h]
		mov     edx, [___243330h]
		sub     eax, edx
		mov     [___243334h], eax
		mov     eax, [___243894h]
		mov     edx, [___243334h]
		mov     ebx, 20000h
		shl     edx, 10h
		mov     [___243330h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [___243ca4h]
		mov     [___24332ch], eax
		cmp     ebx, 0beh
		jle     near ___4107dh
		imul    eax, [___243ce8h], 35eh
		cmp     dword [eax+___1e6fdah], byte 0
		jne     near ___4107dh
		mov     ebx, 46h
		mov     eax, [___243334h]
		mov     edi, [___243cd4h]
		mov     ebp, [___243ca0h]
		add     edi, eax
		add     ebp, eax
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    ebx
		mov     edx, eax
		mov     ecx, 3ch
		sar     edx, 1fh
		mov     ebx, eax
		idiv    ecx
		mov     [___1a10a0h], eax
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		idiv    ecx
		mov     ebx, 46h
		mov     [___1a10a8h], edx
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    ebx
		mov     [esp], edx
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ebx
		mov     edx, eax
		sar     edx, 1fh
		mov     ebx, eax
		idiv    ecx
		mov     [___1a1094h], eax
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		idiv    ecx
		mov     ebx, 46h
		mov     [___1a109ch], edx
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ebx
		fld     qword [___182f67h]
		fild    dword [esp]
		fmul    st0, st1
		mov     [esp], edx
		fild    dword [esp]
		fmulp   st2, st0
		mov     [___243cd4h], edi
		mov     [___243ca0h], ebp
		call    near __CHP
		fistp   dword [___1a1090h]
		call    near __CHP
		fistp   dword [___1a102ch]
___4107dh:
		cmp     dword [___196d98h], byte 40h
		jge     short ___4108bh
		call    near ___40864h
___4108bh:
		mov     ebx, ___1c9f10h
		xor     edx, edx
		mov     ebp, 10h
___41097h:
		mov     eax, [___243d80h]
		mov     ecx, [___196d98h]
		mov     esi, ebx
		lea     edi, [eax+edx*1]
		add     ebx, byte 40h
		mov     eax, 40h
		add     edi, byte 60h
		sub     eax, ecx
		mov     ecx, ebp
		sub     edi, eax
		add     edx, 200h
		rep movsd   
		cmp     edx, 19000h
		jne     short ___41097h
		mov     esi, [___243cf4h]
		xor     ebp, ebp
		test    esi, esi
		jle     near ___41159h
		mov     [esp+1ch], ebp
		xor     edi, edi
___410deh:
		imul    eax, [edi+___243854h], 35eh
		cmp     dword [eax+___1e6fdah], byte 0
		je      short ___4113eh
		mov     ecx, [esp+1ch]
		mov     eax, 40h
		mov     edx, 16h
		mov     ebx, [___243d80h]
		mov     esi, [___196d98h]
		add     ebx, 9c64h
		sub     eax, esi
		mov     esi, [___243d3ch]
		add     ebx, ecx
		mov     ecx, 1ch
		sub     ebx, eax
___41122h:
		mov     ch, dl
___41124h:
		mov     al, [esi]
		or      al, al
		je      short ___4112ch
		mov     [ebx], al
___4112ch:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___41124h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___41122h
___4113eh:
		mov     eax, [esp+1ch]
		mov     edx, [___243cf4h]
		add     edi, byte 4
		add     eax, 4000h
		inc     ebp
		mov     [esp+1ch], eax
		cmp     ebp, edx
		jl      short ___410deh
___41159h:
		mov     eax, [___243cf4h]
		dec     eax
		mov     [esp+10h], eax
		cmp     eax, byte 3
		jge     near ___411f7h
		shl     eax, 0eh
		add     eax, 0d060h
		mov     [esp+30h], eax
		mov     ebp, 40h
___4117dh:
		xor     edi, edi
		mov     esi, [esp+30h]
		mov     [esp+34h], edi
___41187h:
		mov     ebx, 2
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    ebx
		cmp     edx, byte 40h
		jge     short ___411c4h
		mov     ecx, [esp+34h]
___4119eh:
		mov     ebx, [___196d98h]
		mov     eax, ebp
		sub     eax, ebx
		mov     ebx, esi
		sub     ebx, eax
		mov     eax, ebx
		mov     ebx, [___243d80h]
		add     eax, ebx
		add     eax, ecx
		mov     byte [edx+eax*1], 0
		add     edx, byte 2
		cmp     edx, byte 40h
		jl      short ___4119eh
___411c4h:
		mov     ecx, [esp+34h]
		add     ecx, 200h
		inc     edi
		mov     [esp+34h], ecx
		cmp     edi, byte 20h
		jl      short ___41187h
		mov     edi, [esp+30h]
		mov     eax, [esp+10h]
		add     edi, 4000h
		inc     eax
		mov     [esp+30h], edi
		mov     [esp+10h], eax
		cmp     edi, 19060h
		jl      short ___4117dh
___411f7h:
		mov     ebx, 40h
		mov     eax, [___243d80h]
		mov     ecx, [___196d98h]
		add     eax, 0b475h
		sub     ebx, ecx
		mov     esi, ___1de210h
		sub     eax, ebx
		mov     edx, [___1a1134h]
		mov     ebx, eax
		lea     eax, [edx*4+0]
		mov     ebp, 1
		add     eax, edx
		mov     ecx, 0ah
		shl     eax, 4
		mov     edx, 8
		add     esi, eax
		mov     edi, 0f400h
		jmp     short ___4126dh
___41241h:
		mov     eax, [___243d80h]
		add     eax, edi
		add     eax, byte 7ah
		sub     eax, ebx
		mov     ebx, eax
		imul    esi, [___1a1134h], byte 50h
		mov     ecx, 0ah
		mov     edx, 8
		inc     ebp
		add     esi, ___1de210h
		add     edi, 4000h
___4126dh:
		mov     ch, dl
___4126fh:
		mov     al, [esi]
		or      al, al
		je      short ___41277h
		mov     [ebx], al
___41277h:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___4126fh
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___4126dh
		mov     ebx, 40h
		mov     edx, [___196d98h]
		mov     ecx, [___243cf4h]
		sub     ebx, edx
		cmp     ebp, ecx
		jl      short ___41241h
		mov     eax, [___243d80h]
		add     eax, 0b462h
		sub     eax, ebx
		mov     esi, [___243854h]
		mov     ebx, eax
		imul    eax, esi, 35eh
		xor     edx, edx
		mov     dl, [eax+___1e6fd8h]
		lea     eax, [edx*4+0]
		mov     ecx, 0ah
		add     eax, edx
		mov     esi, ___1de210h
		shl     eax, 4
		mov     edx, 8
		add     esi, eax
		mov     edi, 1
___412e4h:
		mov     ch, dl
___412e6h:
		mov     al, [esi]
		or      al, al
		je      short ___412eeh
		mov     [ebx], al
___412eeh:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___412e6h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___412e4h
		mov     ebp, [___243cf4h]
		mov     [esp+24h], edi
		cmp     ebp, edi
		jle     near ___4139ah
		mov     ebp, 0f400h
		mov     edi, 4
___4131ch:
		mov     ebx, 40h
		mov     eax, [___243d80h]
		mov     edx, [___196d98h]
		add     eax, ebp
		sub     ebx, edx
		add     eax, byte 64h
		sub     eax, ebx
		mov     ecx, [edi+___243854h]
		mov     ebx, eax
		imul    eax, ecx, 35eh
		mov     al, [eax+___1e6fd8h]
		and     eax, 0ffh
		imul    eax, eax, byte 50h
		mov     esi, ___1de210h
		mov     ecx, 0ah
		mov     edx, 8
		add     esi, eax
		add     edi, byte 4
___41365h:
		mov     ch, dl
___41367h:
		mov     al, [esi]
		or      al, al
		je      short ___4136fh
		mov     [ebx], al
___4136fh:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___41367h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___41365h
		mov     esi, [esp+24h]
		add     ebp, 4000h
		inc     esi
		mov     edx, [___243cf4h]
		mov     [esp+24h], esi
		cmp     esi, edx
		jl      short ___4131ch
___4139ah:
		cmp     dword [___243cf4h], byte 1
		jle     near ___41444h
		mov     edx, [___243858h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+___1de598h]
		fmul    qword [___182f6fh]
		sub     esp, byte 8
		fstp    qword [esp]
		call    near ceil_
		fdiv    qword [___182f77h]
		mov     ebp, 0d000h
		fsubr   qword [___182f7fh]
		xor     edx, edx
		call    near __CHP
		fistp   dword [esp+2ch]
		mov     ebx, 40h
___413f4h:
		mov     ecx, [esp+2ch]
		mov     esi, [___243d48h]
		mov     eax, [___243d80h]
		mov     edi, ebx
		add     esi, edx
		add     eax, ebp
		add     esi, byte 40h
		add     eax, 0a0h
		sub     esi, ecx
		sub     eax, ecx
		sub     edi, [___196d98h]
		add     ebp, 200h
		sub     eax, edi
		mov     ecx, [esp+2ch]
		mov     edi, eax
		add     edx, byte 40h
		call 	__MOVS
		cmp     edx, 240h
		jne     short ___413f4h
___41444h:
		cmp     dword [___243cf4h], byte 2
		jle     near ___414f0h
		mov     edx, [___24385ch]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+___1de598h]
		fmul    qword [___182f6fh]
		sub     esp, byte 8
		fstp    qword [esp]
		call    near ceil_
		fdiv    qword [___182f77h]
		mov     ebx, 11000h
		fsubr   qword [___182f7fh]
		xor     edx, edx
		call    near __CHP
		fistp   dword [esp+28h]
		mov     ebp, 40h
___4149eh:
		mov     edi, [esp+28h]
		mov     esi, [___243d48h]
		mov     eax, [___243d80h]
		mov     ecx, [___196d98h]
		add     esi, edx
		add     eax, ebx
		add     esi, byte 40h
		add     eax, 0a0h
		sub     esi, edi
		sub     eax, edi
		mov     edi, ebp
		sub     edi, ecx
		add     ebx, 200h
		sub     eax, edi
		mov     ecx, [esp+28h]
		mov     edi, eax
		add     edx, byte 40h
		call 	__MOVS
		cmp     edx, 240h
		jne     short ___4149eh
___414f0h:
		cmp     dword [___243cf4h], byte 3
		jle     near ___4159ch
		mov     edx, [___243860h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+___1de598h]
		fmul    qword [___182f6fh]
		sub     esp, byte 8
		fstp    qword [esp]
		call    near ceil_
		fdiv    qword [___182f77h]
		mov     ebx, 15000h
		fsubr   qword [___182f7fh]
		xor     edx, edx
		call    near __CHP
		fistp   dword [esp+20h]
		mov     ebp, 40h
___4154ah:
		mov     edi, [esp+20h]
		mov     esi, [___243d48h]
		mov     eax, [___243d80h]
		mov     ecx, [___196d98h]
		add     esi, edx
		add     eax, ebx
		add     esi, byte 40h
		add     eax, 0a0h
		sub     esi, edi
		sub     eax, edi
		mov     edi, ebp
		sub     edi, ecx
		add     ebx, 200h
		sub     eax, edi
		mov     ecx, [esp+20h]
		mov     edi, eax
		add     edx, byte 40h
		call 	__MOVS
		cmp     edx, 240h
		jne     short ___4154ah
___4159ch:
		mov     edx, [___243854h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
		add     eax, ___1de580h
		lea     edx, [eax+44h]
		mov     esi, [___196d98h]
		mov     eax, 40h
		mov     ebx, 463h
		sub     eax, esi
		sub     ebx, eax
		mov     eax, ebx
		call    near ___424c8h
		mov     ebx, 1
		cmp     ebx, [___243cf4h]
		jge     short ___4162bh
		mov     ecx, 4
		mov     esi, 0d463h
___415edh:
		imul    eax, [ecx+___243854h], 94h
		add     eax, ___1de580h
		lea     edx, [eax+44h]
		mov     edi, [___196d98h]
		mov     eax, 40h
		sub     eax, edi
		mov     edi, esi
		sub     edi, eax
		add     ecx, byte 4
		mov     eax, edi
		inc     ebx
		call    near ___424c8h
		mov     ebp, [___243cf4h]
		add     esi, 4000h
		cmp     ebx, ebp
		jl      short ___415edh
___4162bh:
		imul    eax, [___243854h], 35eh
		mov     al, [eax+___1e6fd9h]
		and     eax, 0ffh
		mov     ebx, [___243858h]
		mov     [___1c9ec0h], eax
		imul    eax, ebx, 35eh
		mov     al, [eax+___1e6fd9h]
		and     eax, 0ffh
		mov     ecx, [___24385ch]
		mov     [___1c9ec4h], eax
		imul    eax, ecx, 35eh
		mov     al, [eax+___1e6fd9h]
		and     eax, 0ffh
		mov     esi, [___243860h]
		mov     [___1c9ec8h], eax
		imul    eax, esi, 35eh
		mov     al, [eax+___1e6fd9h]
		mov     esi, 8000h
		mov     ecx, 0ffffffffh
		and     eax, 0ffh
		xor     ebx, ebx
		mov     [___1c9ecch], eax
___416a5h:
		mov     edi, [ebx+___1c9ee0h]
		cmp     edi, [ebx+___1c9ec0h]
		jle     short ___416e8h
		lea     eax, [edi+ecx*1]
		imul    eax, eax, byte 7
		shl     eax, 10h
		mov     [ebx+___1c9ef0h], eax
		mov     eax, [ebx+___1c9ec0h]
		add     eax, ecx
		imul    eax, eax, byte 7
		mov     ebp, [ebx+___1c9ec0h]
		mov     [ebx+___1c9ed0h], eax
		mov     eax, edi
		sub     eax, ebp
		neg     eax
		shl     eax, 10h
		mov     [ebx+___1c9f00h], eax
___416e8h:
		mov     edx, [ebx+___1c9ee0h]
		cmp     edx, [ebx+___1c9ec0h]
		jge     short ___41727h
		lea     eax, [edx+ecx*1]
		imul    eax, eax, byte 7
		shl     eax, 10h
		mov     [ebx+___1c9ef0h], eax
		mov     eax, [ebx+___1c9ec0h]
		add     eax, ecx
		imul    eax, eax, byte 7
		mov     [ebx+___1c9ed0h], eax
		mov     eax, [ebx+___1c9ec0h]
		sub     eax, edx
		shl     eax, 10h
		mov     [ebx+___1c9f00h], eax
___41727h:
		mov     eax, [ebx+___1c9f00h]
		add     eax, esi
		sar     eax, 10h
		test    eax, eax
		jle     short ___41770h
		mov     edx, [___24332ch]
		mov     eax, [ebx+___1c9f00h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		mov     edi, [ebx+___1c9ef0h]
		add     edi, eax
		mov     [ebx+___1c9ef0h], edi
		lea     eax, [edi+esi*1]
		mov     ebp, [ebx+___1c9ed0h]
		sar     eax, 10h
		cmp     eax, ebp
		jle     short ___417bch
		jmp     short ___417a8h
___41770h:
		mov     edx, [___24332ch]
		mov     eax, [ebx+___1c9f00h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		mov     ebp, [ebx+___1c9ef0h]
		add     ebp, eax
		mov     [ebx+___1c9ef0h], ebp
		lea     eax, [esi+ebp*1]
		mov     edx, [ebx+___1c9ed0h]
		sar     eax, 10h
		cmp     eax, edx
		jge     short ___417bch
___417a8h:
		mov     eax, [ebx+___1c9ec0h]
		add     eax, ecx
		imul    eax, eax, byte 7
		shl     eax, 10h
		mov     [ebx+___1c9ef0h], eax
___417bch:
		add     ebx, byte 4
		cmp     ebx, byte 10h
		jne     near ___416a5h
		mov     ebx, 40h
		mov     eax, [___243d80h]
		mov     edx, [___196d98h]
		add     eax, 9080h
		sub     ebx, edx
		sub     eax, ebx
		mov     ebx, eax
		mov     eax, [___1c9ef0h]
		add     eax, 8000h
		mov     esi, ___1d8a10h
		sar     eax, 10h
		mov     ecx, 20h
		shl     eax, 0ah
		mov     edx, ecx
		add     esi, eax
		mov     ebp, 1
		shr     dl, 2
___41809h:
		mov     ch, dl
___4180bh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___4180bh
		add     ebx, 200h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___41809h
		cmp     ebp, [___243cf4h]
		jge     near ___418cah
		mov     eax, 0e000h
		mov     edi, 4
		mov     [esp+18h], eax
___41845h:
		mov     ebx, 40h
		sub     ebx, [___196d98h]
		mov     esi, [edi+___1c9ef0h]
		add     esi, 8000h
		sar     esi, 10h
		imul    esi, esi, 240h
		mov     ecx, [esp+18h]
		mov     eax, [___243d80h]
		add     eax, ecx
		add     eax, 88h
		mov     ecx, 18h
		sub     eax, ebx
		mov     edx, ecx
		mov     ebx, eax
		add     esi, ___1d2710h
		add     edi, byte 4
		shr     dl, 2
___4188ch:
		mov     ch, dl
___4188eh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___4188eh
		add     ebx, 200h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___4188ch
		mov     eax, [esp+18h]
		inc     ebp
		add     eax, 4000h
		mov     edx, [___243cf4h]
		mov     [esp+18h], eax
		cmp     ebp, edx
		jl      near ___41845h
___418cah:
		imul    eax, [___243854h], 35eh
		mov     al, [eax+___1e6fd9h]
		and     eax, 0ffh
		mov     ecx, [___243858h]
		mov     [___1c9ee0h], eax
		imul    eax, ecx, 35eh
		mov     al, [eax+___1e6fd9h]
		and     eax, 0ffh
		mov     esi, [___24385ch]
		mov     [___1c9ee4h], eax
		imul    eax, esi, 35eh
		mov     al, [eax+___1e6fd9h]
		and     eax, 0ffh
		mov     edi, [___243860h]
		mov     [___1c9ee8h], eax
		imul    eax, edi, 35eh
		mov     al, [eax+___1e6fd9h]
		mov     ebp, [___243ce8h]
		imul    ebx, ebp, 35eh
		and     eax, 0ffh
		mov     [___1c9eech], eax
		lea     eax, [ebp*8+0]
		add     eax, ebp
		shl     eax, 2
		add     eax, ebp
		fld     dword [ebx+___1e6f80h]
		fdiv    dword [eax*4+___1de584h]
		fmul    qword [___182f87h]
		call    near __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		inc     eax
		cmp     eax, byte 1
		jge     short ___4197bh
		mov     eax, 1
___4197bh:
		lea     ebp, [eax*4+0]
		jmp     short ___419f0h
___41984h:
		mov     ebx, 21h
		mov     eax, [ebp+___243338h]
		mov     edi, [___243d80h]
		sub     ebx, eax
		shl     eax, 9
		add     edi, eax
		mov     edx, [ebp+___2435c4h]
		add     edi, byte 60h
		add     edi, edx
		mov     eax, 20h
		sub     edi, ecx
		xor     ecx, ecx
		add     ebp, byte 4
		mov     ch, cl
		mov     cl, bl
		sub     al, dl
		shl     ax, 8
		cwd     
		idiv    bx
		mov     si, ax
		xor     eax, eax
___419c7h:
		add     ax, si
		cwd     
		shl     edx, 10h
		cwd     
		mov     dl, ah
		cmp     byte [edi+edx*1], 40h
		jl      short ___419dch
		mov     [edi+edx*1], ch
___419dch:
		inc     edi
		cmp     byte [edi+edx*1], 40h
		jl      short ___419e6h
		mov     [edi+edx*1], ch
___419e6h:
		add     edi, 1ffh
		dec     cl
		jne     short ___419c7h
___419f0h:
		mov     ecx, 40h
		sub     ecx, [___196d98h]
		cmp     ebp, 288h
		jl      short ___41984h
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     edx, eax
		shl     edx, 2
		mov     ebx, [edx+___1de5ach]
		test    ebx, ebx
		je      near ___41afdh
		fild    dword [edx+___1de5b0h]
		fmul    qword [___182f8fh]
		call    near __CHP
		fistp   dword [esp+0ch]
		cmp     dword [esp+0ch], byte 0
		jge     short ___41a4ah
		xor     ebp, ebp
		mov     [esp+0ch], ebp
___41a4ah:
		mov     edx, 37h
		mov     ecx, 40h
		mov     edi, 3
		mov     eax, [___243d80h]
		mov     esi, [___196d98h]
		xor     ebx, ebx
		add     eax, 5e64h
		sub     ecx, esi
		mov     bl, [esp+0ch]
		sub     eax, ecx
		sub     edx, ebx
		add     ebx, eax
		xor     eax, eax
		xor     ebp, ebp
		test    edx, edx
		je      short ___41a92h
___41a7fh:
		mov     ecx, edx
___41a81h:
		mov     [ebx], al
		inc     ebx
		dec     ecx
		jne     short ___41a81h
		add     ebx, 200h
		sub     ebx, edx
		dec     edi
		jne     short ___41a7fh
___41a92h:
		xor     edi, edi
		jmp     short ___41ae5h
___41a96h:
		mov     edx, 8
		mov     eax, [___243d80h]
		mov     ecx, [___196d98h]
		add     eax, 5200h
		mov     esi, [___243d34h]
		lea     ebx, [eax+ebp*1]
		inc     edi
		mov     eax, 40h
		add     ebx, byte 60h
		sub     eax, ecx
		mov     ecx, 6
		sub     ebx, eax
		add     ebp, byte 8
___41ac9h:
		mov     ch, dl
___41acbh:
		mov     al, [esi]
		or      al, al
		je      short ___41ad3h
		mov     [ebx], al
___41ad3h:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___41acbh
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___41ac9h
___41ae5h:
		imul    eax, [___243ce8h], 94h
		cmp     edi, [eax+___1de5a8h]
		jge     near ___41cebh
		jmp     short ___41a96h
___41afdh:
		mov     edx, 587bh
		sub     edx, ecx
		cmp     dword [___243cdch], byte 0
		jle     near ___41c12h
		push    ebx
		push    byte 0fffffffah
		mov     eax, [___243cb8h]
		push    edx
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		mov     edx, eax
		mov     ebx, 3ch
		sar     edx, 1fh
		idiv    ebx
		push    byte 10h
		mov     ebx, 6
		mov     ecx, eax
		mov     eax, ___1d7810h
		mov     edx, ebx
		call    near ___4256ch
		push    byte 0
		mov     eax, 40h
		mov     ebp, [___196d98h]
		mov     edx, 5889h
		sub     eax, ebp
		push    byte 6
		sub     edx, eax
		mov     eax, [___243cb8h]
		push    edx
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		mov     edx, eax
		mov     ebx, 3ch
		sar     edx, 1fh
		idiv    ebx
		push    byte 10h
		mov     ebx, 6
		mov     eax, ___1d7810h
		mov     ecx, edx
		mov     edx, ebx
		call    near ___4256ch
		mov     eax, 40h
		mov     edx, [___196d98h]
		push    byte 0
		sub     eax, edx
		mov     edx, 5897h
		push    byte 6
		sub     edx, eax
		mov     eax, [___243cb8h]
		push    edx
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		mov     [esp+0ch], edx
		fild    dword [esp+0ch]
		fmul    qword [___182f67h]
		push    byte 10h
		mov     ebx, 6
		mov     eax, ___1d7810h
		mov     edx, ebx
		call    near __CHP
		fistp   dword [esp+10h]
		mov     ecx, [esp+10h]
		call    near ___4256ch
		mov     eax, [___243334h]
		mov     ebx, [___243cdch]
		sub     ebx, eax
		mov     [___243cdch], ebx
		test    ebx, ebx
		jge     near ___41cebh
		xor     esi, esi
		mov     [___243cdch], esi
		jmp     near ___41cebh
___41c12h:
		push    ebx
		push    byte 0fffffffah
		mov     eax, [___243ca0h]
		push    edx
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		mov     edx, eax
		mov     ebx, 3ch
		sar     edx, 1fh
		idiv    ebx
		push    byte 10h
		mov     ebx, 6
		mov     ecx, eax
		mov     eax, ___1d7810h
		mov     edx, ebx
		call    near ___4256ch
		push    byte 0
		mov     eax, 40h
		mov     esi, [___196d98h]
		mov     edx, 5889h
		sub     eax, esi
		push    byte 6
		sub     edx, eax
		mov     eax, [___243ca0h]
		push    edx
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		mov     edx, eax
		mov     ebx, 3ch
		sar     edx, 1fh
		idiv    ebx
		push    byte 10h
		mov     ebx, 6
		mov     eax, ___1d7810h
		mov     ecx, edx
		mov     edx, ebx
		call    near ___4256ch
		push    byte 0
		mov     eax, 40h
		mov     edi, [___196d98h]
		mov     edx, 5897h
		sub     eax, edi
		push    byte 6
		sub     edx, eax
		mov     eax, [___243ca0h]
		push    edx
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		mov     [esp+0ch], edx
		fild    dword [esp+0ch]
		fmul    qword [___182f67h]
		push    byte 10h
		mov     ebx, 6
		mov     eax, ___1d7810h
		mov     edx, ebx
		call    near __CHP
		fistp   dword [esp+10h]
		mov     ecx, [esp+10h]
		call    near ___4256ch
___41cebh:
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+___1de5b4h]
		fmul    qword [___182f97h]
		call    near __CHP
		fistp   dword [esp+4]
		cmp     dword [esp+4], byte 0
		jge     short ___41d22h
		xor     edi, edi
		mov     [esp+4], edi
___41d22h:
		mov     edx, 3ah
		mov     ecx, 40h
		mov     edi, 7
		mov     ebx, [___243d80h]
		mov     ebp, [___196d98h]
		xor     eax, eax
		add     ebx, 4464h
		sub     ecx, ebp
		mov     al, [esp+4]
		sub     ebx, ecx
		sub     edx, eax
		add     ebx, eax
		xor     eax, eax
		test    edx, edx
		je      short ___41d6fh
___41d57h:
		mov     ecx, edx
___41d59h:
		cmp     byte [ebx], 40h
		jl      short ___41d60h
		mov     [ebx], al
___41d60h:
		inc     ebx
		dec     ecx
		jne     short ___41d59h
		add     ebx, 200h
		sub     ebx, edx
		dec     edi
		jne     short ___41d57h
___41d6fh:
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+___1de598h]
		fmul    qword [___182f6fh]
		sub     esp, byte 8
		fstp    qword [esp]
		mov     ebx, 0ah
		call    near ceil_
		push    byte 0fffffff0h
		mov     eax, 40h
		mov     edx, [___196d98h]
		fsubr   qword [___182f9fh]
		push    byte 0fffffff8h
		sub     eax, edx
		mov     edx, 8e6eh
		call    near __CHP
		sub     edx, eax
		fistp   dword [esp+8]
		push    edx
		mov     ecx, [esp+0ch]
		mov     eax, ___1de210h
		push    byte 0
		mov     edx, 8
		mov     esi, ___1de530h
		call    near ___4256ch
		mov     ecx, 0ah
		mov     ebx, [___243d80h]
		mov     edx, 8
		add     ebx, eax
___41df4h:
		mov     ch, dl
___41df6h:
		mov     al, [esi]
		or      al, al
		je      short ___41dfeh
		mov     [ebx], al
___41dfeh:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___41df6h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___41df4h
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		cmp     dword [eax*4+___1de598h], 5000h
		jge     short ___41e64h
		cmp     dword [___196de8h], byte 0
		jne     short ___41e5ah
		push    8000h
		mov     ecx, 10000h
		mov     edx, 1
		push    50000h
		mov     eax, 2
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
___41e5ah:
		mov     dword [___196de8h], 1
___41e64h:
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		cmp     dword [eax*4+___1de598h], 2800h
		jge     short ___41eb8h
		cmp     dword [___196dech], byte 0
		jne     short ___41eaeh
		push    8000h
		mov     ecx, 10000h
		mov     edx, 1
		push    50000h
		mov     eax, 2
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
___41eaeh:
		mov     dword [___196dech], 1
___41eb8h:
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		cmp     dword [eax*4+___1de598h], byte 0
		jne     short ___41f32h
		mov     edx, [___243ce8h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
		mov     edx, ___182ed4h
		add     eax, ___1de7d0h
		call    near strcmp_
		test    eax, eax
		jne     short ___41f32h
		mov     ebx, [___196df4h]
		test    ebx, ebx
		jne     short ___41f28h
		push    8000h
		mov     ecx, 10000h
		push    50000h
		mov     edx, 20h
		mov     eax, 2
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
___41f28h:
		mov     dword [___196df4h], 1
___41f32h:
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+___1de598h]
		fdiv    qword [___182fa7h]
		sub     esp, byte 8
		fstp    qword [esp]
		call    near ceil_
		call    near __CHP
		fistp   dword [esp+8]
		cmp     dword [esp+8], byte 0
		jge     short ___41f74h
		xor     edi, edi
		mov     [esp+8], edi
___41f74h:
		mov     eax, 40h
		mov     ebx, [___243d80h]
		mov     ebp, [___196d98h]
		add     ebx, 6460h
		sub     eax, ebp
		mov     edx, [esp+8]
		sub     ebx, eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     esi, 1a40h
		shl     eax, 6
		mov     ecx, 15h
		sub     esi, eax
		mov     edx, 40h
		add     esi, ___1d5890h
		shr     dl, 2
___41fbeh:
		mov     ch, dl
___41fc0h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___41fc0h
		add     ebx, 200h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___41fbeh
		mov     eax, [___243cf4h]
		xor     edi, edi
		test    eax, eax
		jle     near ___42072h
		mov     ebp, 9000h
		mov     [esp+14h], edi
___41ff8h:
		mov     eax, [esp+14h]
		imul    eax, [eax+___243854h], 94h
		cmp     dword [eax+___1de598h], byte 0
		jg      short ___42056h
		mov     ebx, 40h
		mov     edx, 40h
		mov     eax, [___243d80h]
		mov     ecx, [___196d98h]
		add     eax, ebp
		sub     ebx, ecx
		add     eax, byte 60h
		mov     esi, [___243d84h]
		sub     eax, ebx
		mov     ecx, 20h
		mov     ebx, eax
___4203ah:
		mov     ch, dl
___4203ch:
		mov     al, [esi]
		or      al, al
		je      short ___42044h
		mov     [ebx], al
___42044h:
		inc     ebx
		inc     esi
		dec     ch
		jne     short ___4203ch
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     short ___4203ah
___42056h:
		mov     edx, [esp+14h]
		mov     ebx, [___243cf4h]
		add     ebp, 4000h
		add     edx, byte 4
		inc     edi
		mov     [esp+14h], edx
		cmp     edi, ebx
		jl      short ___41ff8h
___42072h:
		add     esp, byte 38h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

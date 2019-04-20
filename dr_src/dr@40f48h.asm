cpu 386

    extern  __CHK
    extern  dr@243894h
    extern  dr@243330h
    extern  dr@243334h
    extern  __CHP
    extern  dr@1a102ch
    extern  dr@1c9f10h
    extern  dr@243d80h
    extern  dr@243cf4h
    extern  dr@1a1134h
    extern  dr@243854h
    extern  dr@182f6fh
    extern  dr@243d48h
    extern  ceil
    extern  dr@1de580h
    extern  dr@1e6fd9h
    extern  dr@1c9ee0h
    extern  dr@1c9ef0h
    extern  dr@196d98h
    extern  dr@1c9ee4h
    extern  dr@243338h
    extern  dr@1d7810h
    extern  dr@243cdch
    extern  dr@654d4h
    extern  strcmp
    extern  dr@243ca4h
    extern  dr@24332ch
    extern  dr@243ce8h
    extern  dr@1e6fdah
    extern  dr@243cd4h
    extern  dr@243ca0h
    extern  dr@1a10a0h
    extern  dr@1a10a8h
    extern  dr@1a1094h
    extern  dr@1a109ch
    extern  dr@182f67h
    extern  dr@1a1090h
    extern  dr@40864h
    extern  dr@243d3ch
    extern  dr@1de210h
    extern  dr@1e6fd8h
    extern  dr@243858h
    extern  dr@1de598h
    extern  dr@182f77h
    extern  dr@182f7fh
    extern  dr@24385ch
    extern  dr@243860h
    extern  dr@424c8h
    extern  dr@1c9ec0h
    extern  dr@1c9ec4h
    extern  dr@1c9ec8h
    extern  dr@1c9ecch
    extern  dr@1c9f00h
    extern  dr@243ce8h
    extern  dr@1de5a8h
    extern  dr@4256ch
    extern  dr@196de8h
    extern  dr@182fa7h
    extern  dr@243d84h
    extern  dr@1c9ed0h
    extern  dr@1d8a10h
    extern  dr@1d2710h
    extern  dr@1c9ee8h
    extern  dr@1c9eech
    extern  dr@1e6f80h
    extern  dr@1de584h
    extern  dr@182f87h
    extern  dr@2435c4h
    extern  dr@1de5ach
    extern  dr@1de5b0h
    extern  dr@182f8fh
    extern  dr@243d34h
    extern  dr@243cb8h
    extern  dr@1de5b4h
    extern  dr@182f97h
    extern  dr@182f9fh
    extern  dr@1de530h
    extern  dr@196dech
    extern  dr@182ed4h
    extern  dr@1de7d0h
    extern  dr@196df4h
    extern  dr@1d5890h

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global dr@40f48h
dr@40f48h:
		push    64h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 38h
		mov     eax, [dr@243894h]
		mov     edx, [dr@243330h]
		sub     eax, edx
		mov     [dr@243334h], eax
		mov     eax, [dr@243894h]
		mov     edx, [dr@243334h]
		mov     ebx, 20000h
		shl     edx, 10h
;16:00040f80
		mov     [dr@243330h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [dr@243ca4h]
		mov     [dr@24332ch], eax
		cmp     ebx, 0beh
		jle     dr@4107dh
		imul    eax, [dr@243ce8h], 35eh
		cmp     dword [eax+dr@1e6fdah], byte 0
		jne     dr@4107dh
		mov     ebx, 46h
		mov     eax, [dr@243334h]
		mov     edi, [dr@243cd4h]
		mov     ebp, [dr@243ca0h]
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
		mov     [dr@1a10a0h], eax
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		idiv    ecx
		mov     ebx, 46h
		mov     [dr@1a10a8h], edx
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
		mov     [dr@1a1094h], eax
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		idiv    ecx
		mov     ebx, 46h
		mov     [dr@1a109ch], edx
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ebx
		fld     qword [dr@182f67h]
		fild    dword [esp]
		fmul    st0, st1
		mov     [esp], edx
		fild    dword [esp]
		fmulp   st2, st0
		mov     [dr@243cd4h], edi
		mov     [dr@243ca0h], ebp
		call    __CHP
		fistp   dword [dr@1a1090h]
		call    __CHP
		fistp   dword [dr@1a102ch]
dr@4107dh:
		cmp     dword [dr@196d98h], byte 40h
		jge     dr@4108bh
		call    dr@40864h
dr@4108bh:
		mov     ebx, dr@1c9f10h
		xor     edx, edx
		mov     ebp, 10h
dr@41097h:
		mov     eax, [dr@243d80h]
		mov     ecx, [dr@196d98h]
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
		jne     dr@41097h
		mov     esi, [dr@243cf4h]
		xor     ebp, ebp
		test    esi, esi
		jle     dr@41159h
		mov     [esp+1ch], ebp
		xor     edi, edi
dr@410deh:
		imul    eax, [edi+dr@243854h], 35eh
		cmp     dword [eax+dr@1e6fdah], byte 0
		je      dr@4113eh
		mov     ecx, [esp+1ch]
		mov     eax, 40h
		mov     edx, 16h
		mov     ebx, [dr@243d80h]
		mov     esi, [dr@196d98h]
		add     ebx, 9c64h
		sub     eax, esi
		mov     esi, [dr@243d3ch]
		add     ebx, ecx
		mov     ecx, 1ch
		sub     ebx, eax
dr@41122h:
		mov     ch, dl
dr@41124h:
		mov     al, [esi]
		or      al, al
		je      dr@4112ch
		mov     [ebx], al
dr@4112ch:
		inc     ebx
		inc     esi
		dec     ch
		jne     dr@41124h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     dr@41122h
dr@4113eh:
		mov     eax, [esp+1ch]
		mov     edx, [dr@243cf4h]
		add     edi, byte 4
		add     eax, 4000h
		inc     ebp
		mov     [esp+1ch], eax
		cmp     ebp, edx
		jl      dr@410deh
dr@41159h:
		mov     eax, [dr@243cf4h]
		dec     eax
		mov     [esp+10h], eax
		cmp     eax, byte 3
		jge     dr@411f7h
		shl     eax, 0eh
		add     eax, 0d060h
		mov     [esp+30h], eax
		mov     ebp, 40h
dr@4117dh:
		xor     edi, edi
		mov     esi, [esp+30h]
		mov     [esp+34h], edi
dr@41187h:
		mov     ebx, 2
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    ebx
		cmp     edx, byte 40h
		jge     dr@411c4h
		mov     ecx, [esp+34h]
dr@4119eh:
		mov     ebx, [dr@196d98h]
		mov     eax, ebp
		sub     eax, ebx
		mov     ebx, esi
		sub     ebx, eax
		mov     eax, ebx
		mov     ebx, [dr@243d80h]
		add     eax, ebx
		add     eax, ecx
		mov     byte [edx+eax*1], 0
		add     edx, byte 2
		cmp     edx, byte 40h
		jl      dr@4119eh
dr@411c4h:
		mov     ecx, [esp+34h]
		add     ecx, 200h
		inc     edi
		mov     [esp+34h], ecx
		cmp     edi, byte 20h
		jl      dr@41187h
		mov     edi, [esp+30h]
		mov     eax, [esp+10h]
		add     edi, 4000h
		inc     eax
		mov     [esp+30h], edi
		mov     [esp+10h], eax
		cmp     edi, 19060h
		jl      dr@4117dh
dr@411f7h:
		mov     ebx, 40h
		mov     eax, [dr@243d80h]
		mov     ecx, [dr@196d98h]
		add     eax, 0b475h
		sub     ebx, ecx
		mov     esi, dr@1de210h
		sub     eax, ebx
		mov     edx, [dr@1a1134h]
		mov     ebx, eax
		lea     eax, [edx*4+0]
		mov     ebp, 1
		add     eax, edx
		mov     ecx, 0ah
		shl     eax, 4
		mov     edx, 8
		add     esi, eax
		mov     edi, 0f400h
		jmp     dr@4126dh
dr@41241h:
		mov     eax, [dr@243d80h]
		add     eax, edi
		add     eax, byte 7ah
		sub     eax, ebx
		mov     ebx, eax
		imul    esi, [dr@1a1134h], byte 50h
		mov     ecx, 0ah
		mov     edx, 8
		inc     ebp
		add     esi, dr@1de210h
		add     edi, 4000h
dr@4126dh:
		mov     ch, dl
dr@4126fh:
		mov     al, [esi]
		or      al, al
		je      dr@41277h
		mov     [ebx], al
dr@41277h:
		inc     ebx
		inc     esi
		dec     ch
		jne     dr@4126fh
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     dr@4126dh
		mov     ebx, 40h
		mov     edx, [dr@196d98h]
		mov     ecx, [dr@243cf4h]
		sub     ebx, edx
		cmp     ebp, ecx
		jl      dr@41241h
		mov     eax, [dr@243d80h]
		add     eax, 0b462h
		sub     eax, ebx
		mov     esi, [dr@243854h]
		mov     ebx, eax
		imul    eax, esi, 35eh
		xor     edx, edx
		mov     dl, [eax+dr@1e6fd8h]
		lea     eax, [edx*4+0]
		mov     ecx, 0ah
		add     eax, edx
		mov     esi, dr@1de210h
		shl     eax, 4
		mov     edx, 8
		add     esi, eax
		mov     edi, 1
dr@412e4h:
		mov     ch, dl
dr@412e6h:
		mov     al, [esi]
		or      al, al
		je      dr@412eeh
		mov     [ebx], al
dr@412eeh:
		inc     ebx
		inc     esi
		dec     ch
		jne     dr@412e6h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     dr@412e4h
;16:00041300
		mov     ebp, [dr@243cf4h]
		mov     [esp+24h], edi
		cmp     ebp, edi
		jle     dr@4139ah
		mov     ebp, 0f400h
		mov     edi, 4
dr@4131ch:
		mov     ebx, 40h
		mov     eax, [dr@243d80h]
		mov     edx, [dr@196d98h]
		add     eax, ebp
		sub     ebx, edx
		add     eax, byte 64h
		sub     eax, ebx
		mov     ecx, [edi+dr@243854h]
		mov     ebx, eax
		imul    eax, ecx, 35eh
		mov     al, [eax+dr@1e6fd8h]
		and     eax, 0ffh
		imul    eax, eax, byte 50h
		mov     esi, dr@1de210h
		mov     ecx, 0ah
		mov     edx, 8
		add     esi, eax
		add     edi, byte 4
dr@41365h:
		mov     ch, dl
dr@41367h:
		mov     al, [esi]
		or      al, al
		je      dr@4136fh
		mov     [ebx], al
dr@4136fh:
		inc     ebx
		inc     esi
		dec     ch
		jne     dr@41367h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     dr@41365h
		mov     esi, [esp+24h]
		add     ebp, 4000h
		inc     esi
		mov     edx, [dr@243cf4h]
		mov     [esp+24h], esi
		cmp     esi, edx
		jl      dr@4131ch
dr@4139ah:
		cmp     dword [dr@243cf4h], byte 1
		jle     dr@41444h
		mov     edx, [dr@243858h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+dr@1de598h]
		fmul    qword [dr@182f6fh]
		sub     esp, byte 8
		fstp    qword [esp]
		call    ceil
		fdiv    qword [dr@182f77h]
		mov     ebp, 0d000h
		fsubr   qword [dr@182f7fh]
		xor     edx, edx
		call    __CHP
		fistp   dword [esp+2ch]
		mov     ebx, 40h
dr@413f4h:
		mov     ecx, [esp+2ch]
		mov     esi, [dr@243d48h]
		mov     eax, [dr@243d80h]
		mov     edi, ebx
		add     esi, edx
		add     eax, ebp
		add     esi, byte 40h
		add     eax, 0a0h
		sub     esi, ecx
		sub     eax, ecx
		sub     edi, [dr@196d98h]
		add     ebp, 200h
		sub     eax, edi
		mov     ecx, [esp+2ch]
		mov     edi, eax
		add     edx, byte 40h
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		cmp     edx, 240h
		jne     dr@413f4h
dr@41444h:
		cmp     dword [dr@243cf4h], byte 2
		jle     dr@414f0h
		mov     edx, [dr@24385ch]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+dr@1de598h]
		fmul    qword [dr@182f6fh]
		sub     esp, byte 8
		fstp    qword [esp]
		call    ceil
		fdiv    qword [dr@182f77h]
		mov     ebx, 11000h
		fsubr   qword [dr@182f7fh]
		xor     edx, edx
		call    __CHP
		fistp   dword [esp+28h]
		mov     ebp, 40h
dr@4149eh:
		mov     edi, [esp+28h]
		mov     esi, [dr@243d48h]
		mov     eax, [dr@243d80h]
		mov     ecx, [dr@196d98h]
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
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		cmp     edx, 240h
		jne     dr@4149eh
dr@414f0h:
		cmp     dword [dr@243cf4h], byte 3
		jle     dr@4159ch
		mov     edx, [dr@243860h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+dr@1de598h]
		fmul    qword [dr@182f6fh]
		sub     esp, byte 8
		fstp    qword [esp]
		call    ceil
		fdiv    qword [dr@182f77h]
		mov     ebx, 15000h
		fsubr   qword [dr@182f7fh]
		xor     edx, edx
		call    __CHP
		fistp   dword [esp+20h]
		mov     ebp, 40h
dr@4154ah:
		mov     edi, [esp+20h]
		mov     esi, [dr@243d48h]
		mov     eax, [dr@243d80h]
		mov     ecx, [dr@196d98h]
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
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		cmp     edx, 240h
		jne     dr@4154ah
dr@4159ch:
		mov     edx, [dr@243854h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
		add     eax, dr@1de580h
		lea     edx, [eax+44h]
		mov     esi, [dr@196d98h]
		mov     eax, 40h
		mov     ebx, 463h
		sub     eax, esi
		sub     ebx, eax
		mov     eax, ebx
		call    dr@424c8h
		mov     ebx, 1
		cmp     ebx, [dr@243cf4h]
		jge     dr@4162bh
		mov     ecx, 4
		mov     esi, 0d463h
dr@415edh:
		imul    eax, [ecx+dr@243854h], 94h
		add     eax, dr@1de580h
		lea     edx, [eax+44h]
		mov     edi, [dr@196d98h]
		mov     eax, 40h
		sub     eax, edi
		mov     edi, esi
		sub     edi, eax
		add     ecx, byte 4
		mov     eax, edi
		inc     ebx
		call    dr@424c8h
		mov     ebp, [dr@243cf4h]
		add     esi, 4000h
		cmp     ebx, ebp
		jl      dr@415edh
dr@4162bh:
		imul    eax, [dr@243854h], 35eh
		mov     al, [eax+dr@1e6fd9h]
		and     eax, 0ffh
		mov     ebx, [dr@243858h]
		mov     [dr@1c9ec0h], eax
		imul    eax, ebx, 35eh
		mov     al, [eax+dr@1e6fd9h]
		and     eax, 0ffh
		mov     ecx, [dr@24385ch]
		mov     [dr@1c9ec4h], eax
		imul    eax, ecx, 35eh
		mov     al, [eax+dr@1e6fd9h]
		and     eax, 0ffh
		mov     esi, [dr@243860h]
		mov     [dr@1c9ec8h], eax
		imul    eax, esi, 35eh
		mov     al, [eax+dr@1e6fd9h]
		mov     esi, 8000h
		mov     ecx, 0ffffffffh
		and     eax, 0ffh
		xor     ebx, ebx
		mov     [dr@1c9ecch], eax
dr@416a5h:
		mov     edi, [ebx+dr@1c9ee0h]
		cmp     edi, [ebx+dr@1c9ec0h]
		jle     dr@416e8h
		lea     eax, [edi+ecx*1]
		imul    eax, eax, byte 7
		shl     eax, 10h
		mov     [ebx+dr@1c9ef0h], eax
		mov     eax, [ebx+dr@1c9ec0h]
		add     eax, ecx
		imul    eax, eax, byte 7
		mov     ebp, [ebx+dr@1c9ec0h]
		mov     [ebx+dr@1c9ed0h], eax
		mov     eax, edi
		sub     eax, ebp
		neg     eax
		shl     eax, 10h
		mov     [ebx+dr@1c9f00h], eax
dr@416e8h:
		mov     edx, [ebx+dr@1c9ee0h]
		cmp     edx, [ebx+dr@1c9ec0h]
		jge     dr@41727h
		lea     eax, [edx+ecx*1]
		imul    eax, eax, byte 7
		shl     eax, 10h
		mov     [ebx+dr@1c9ef0h], eax
		mov     eax, [ebx+dr@1c9ec0h]
		add     eax, ecx
		imul    eax, eax, byte 7
		mov     [ebx+dr@1c9ed0h], eax
		mov     eax, [ebx+dr@1c9ec0h]
		sub     eax, edx
		shl     eax, 10h
		mov     [ebx+dr@1c9f00h], eax
dr@41727h:
		mov     eax, [ebx+dr@1c9f00h]
		add     eax, esi
		sar     eax, 10h
		test    eax, eax
		jle     dr@41770h
		mov     edx, [dr@24332ch]
		mov     eax, [ebx+dr@1c9f00h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		mov     edi, [ebx+dr@1c9ef0h]
		add     edi, eax
		mov     [ebx+dr@1c9ef0h], edi
		lea     eax, [edi+esi*1]
		mov     ebp, [ebx+dr@1c9ed0h]
		sar     eax, 10h
		cmp     eax, ebp
		jle     dr@417bch
		jmp     dr@417a8h
dr@41770h:
		mov     edx, [dr@24332ch]
		mov     eax, [ebx+dr@1c9f00h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		mov     ebp, [ebx+dr@1c9ef0h]
		add     ebp, eax
		mov     [ebx+dr@1c9ef0h], ebp
		lea     eax, [esi+ebp*1]
		mov     edx, [ebx+dr@1c9ed0h]
		sar     eax, 10h
		cmp     eax, edx
		jge     dr@417bch
dr@417a8h:
		mov     eax, [ebx+dr@1c9ec0h]
		add     eax, ecx
		imul    eax, eax, byte 7
		shl     eax, 10h
		mov     [ebx+dr@1c9ef0h], eax
dr@417bch:
		add     ebx, byte 4
		cmp     ebx, byte 10h
		jne     dr@416a5h
		mov     ebx, 40h
		mov     eax, [dr@243d80h]
		mov     edx, [dr@196d98h]
		add     eax, 9080h
		sub     ebx, edx
		sub     eax, ebx
		mov     ebx, eax
		mov     eax, [dr@1c9ef0h]
		add     eax, 8000h
		mov     esi, dr@1d8a10h
		sar     eax, 10h
		mov     ecx, 20h
		shl     eax, 0ah
		mov     edx, ecx
		add     esi, eax
		mov     ebp, 1
		shr     dl, 2
dr@41809h:
		mov     ch, dl
dr@4180bh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     dr@4180bh
		add     ebx, 200h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     dr@41809h
		cmp     ebp, [dr@243cf4h]
		jge     dr@418cah
		mov     eax, 0e000h
		mov     edi, 4
		mov     [esp+18h], eax
dr@41845h:
		mov     ebx, 40h
		sub     ebx, [dr@196d98h]
		mov     esi, [edi+dr@1c9ef0h]
		add     esi, 8000h
		sar     esi, 10h
		imul    esi, esi, 240h
		mov     ecx, [esp+18h]
		mov     eax, [dr@243d80h]
		add     eax, ecx
		add     eax, 88h
		mov     ecx, 18h
		sub     eax, ebx
		mov     edx, ecx
		mov     ebx, eax
;16:00041880
		add     esi, dr@1d2710h
		add     edi, byte 4
		shr     dl, 2
dr@4188ch:
		mov     ch, dl
dr@4188eh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     dr@4188eh
		add     ebx, 200h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     dr@4188ch
		mov     eax, [esp+18h]
		inc     ebp
		add     eax, 4000h
		mov     edx, [dr@243cf4h]
		mov     [esp+18h], eax
		cmp     ebp, edx
		jl      dr@41845h
dr@418cah:
		imul    eax, [dr@243854h], 35eh
		mov     al, [eax+dr@1e6fd9h]
		and     eax, 0ffh
		mov     ecx, [dr@243858h]
		mov     [dr@1c9ee0h], eax
		imul    eax, ecx, 35eh
		mov     al, [eax+dr@1e6fd9h]
		and     eax, 0ffh
		mov     esi, [dr@24385ch]
		mov     [dr@1c9ee4h], eax
		imul    eax, esi, 35eh
		mov     al, [eax+dr@1e6fd9h]
		and     eax, 0ffh
		mov     edi, [dr@243860h]
		mov     [dr@1c9ee8h], eax
		imul    eax, edi, 35eh
		mov     al, [eax+dr@1e6fd9h]
		mov     ebp, [dr@243ce8h]
		imul    ebx, ebp, 35eh
		and     eax, 0ffh
		mov     [dr@1c9eech], eax
		lea     eax, [ebp*8+0]
		add     eax, ebp
		shl     eax, 2
		add     eax, ebp
		fld     dword [ebx+dr@1e6f80h]
		fdiv    dword [eax*4+dr@1de584h]
		fmul    qword [dr@182f87h]
		call    __CHP
		fistp   dword [esp]
		mov     eax, [esp]
		inc     eax
		cmp     eax, byte 1
		jge     dr@4197bh
		mov     eax, 1
dr@4197bh:
		lea     ebp, [eax*4+0]
		jmp     dr@419f0h
dr@41984h:
		mov     ebx, 21h
		mov     eax, [ebp+dr@243338h]
		mov     edi, [dr@243d80h]
		sub     ebx, eax
		shl     eax, 9
		add     edi, eax
		mov     edx, [ebp+dr@2435c4h]
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
dr@419c7h:
		add     ax, si
		cwd     
		shl     edx, 10h
		cwd     
		mov     dl, ah
		cmp     byte [edi+edx*1], 40h
		jl      dr@419dch
		mov     [edi+edx*1], ch
dr@419dch:
		inc     edi
		cmp     byte [edi+edx*1], 40h
		jl      dr@419e6h
		mov     [edi+edx*1], ch
dr@419e6h:
		add     edi, 1ffh
		dec     cl
		jne     dr@419c7h
dr@419f0h:
		mov     ecx, 40h
		sub     ecx, [dr@196d98h]
		cmp     ebp, 288h
		jl      dr@41984h
		mov     edx, [dr@243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     edx, eax
		shl     edx, 2
		mov     ebx, [edx+dr@1de5ach]
		test    ebx, ebx
		je      dr@41afdh
		fild    dword [edx+dr@1de5b0h]
		fmul    qword [dr@182f8fh]
		call    __CHP
		fistp   dword [esp+0ch]
		cmp     dword [esp+0ch], byte 0
		jge     dr@41a4ah
		xor     ebp, ebp
		mov     [esp+0ch], ebp
dr@41a4ah:
		mov     edx, 37h
		mov     ecx, 40h
		mov     edi, 3
		mov     eax, [dr@243d80h]
		mov     esi, [dr@196d98h]
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
		je      dr@41a92h
dr@41a7fh:
		mov     ecx, edx
dr@41a81h:
		mov     [ebx], al
		inc     ebx
		dec     ecx
		jne     dr@41a81h
		add     ebx, 200h
		sub     ebx, edx
		dec     edi
		jne     dr@41a7fh
dr@41a92h:
		xor     edi, edi
		jmp     dr@41ae5h
dr@41a96h:
		mov     edx, 8
		mov     eax, [dr@243d80h]
		mov     ecx, [dr@196d98h]
		add     eax, 5200h
		mov     esi, [dr@243d34h]
		lea     ebx, [eax+ebp*1]
		inc     edi
		mov     eax, 40h
		add     ebx, byte 60h
		sub     eax, ecx
		mov     ecx, 6
		sub     ebx, eax
		add     ebp, byte 8
dr@41ac9h:
		mov     ch, dl
dr@41acbh:
		mov     al, [esi]
		or      al, al
		je      dr@41ad3h
		mov     [ebx], al
dr@41ad3h:
		inc     ebx
		inc     esi
		dec     ch
		jne     dr@41acbh
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     dr@41ac9h
dr@41ae5h:
		imul    eax, [dr@243ce8h], 94h
		cmp     edi, [eax+dr@1de5a8h]
		jge     dr@41cebh
		jmp     dr@41a96h
dr@41afdh:
		mov     edx, 587bh
		sub     edx, ecx
		cmp     dword [dr@243cdch], byte 0
		jle     dr@41c12h
		push    ebx
		push    byte 0fffffffah
		mov     eax, [dr@243cb8h]
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
		mov     eax, dr@1d7810h
		mov     edx, ebx
		call    dr@4256ch
		push    byte 0
		mov     eax, 40h
		mov     ebp, [dr@196d98h]
		mov     edx, 5889h
		sub     eax, ebp
		push    byte 6
		sub     edx, eax
		mov     eax, [dr@243cb8h]
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
		mov     eax, dr@1d7810h
		mov     ecx, edx
		mov     edx, ebx
		call    dr@4256ch
		mov     eax, 40h
		mov     edx, [dr@196d98h]
		push    byte 0
		sub     eax, edx
		mov     edx, 5897h
		push    byte 6
		sub     edx, eax
		mov     eax, [dr@243cb8h]
		push    edx
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		mov     [esp+0ch], edx
		fild    dword [esp+0ch]
		fmul    qword [dr@182f67h]
		push    byte 10h
		mov     ebx, 6
		mov     eax, dr@1d7810h
		mov     edx, ebx
		call    __CHP
		fistp   dword [esp+10h]
		mov     ecx, [esp+10h]
		call    dr@4256ch
		mov     eax, [dr@243334h]
		mov     ebx, [dr@243cdch]
		sub     ebx, eax
		mov     [dr@243cdch], ebx
		test    ebx, ebx
		jge     dr@41cebh
		xor     esi, esi
		mov     [dr@243cdch], esi
		jmp     dr@41cebh
dr@41c12h:
		push    ebx
		push    byte 0fffffffah
		mov     eax, [dr@243ca0h]
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
		mov     eax, dr@1d7810h
		mov     edx, ebx
		call    dr@4256ch
		push    byte 0
		mov     eax, 40h
		mov     esi, [dr@196d98h]
		mov     edx, 5889h
		sub     eax, esi
		push    byte 6
		sub     edx, eax
		mov     eax, [dr@243ca0h]
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
;16:00041c80
		mov     ebx, 6
		mov     eax, dr@1d7810h
		mov     ecx, edx
		mov     edx, ebx
		call    dr@4256ch
		push    byte 0
		mov     eax, 40h
		mov     edi, [dr@196d98h]
		mov     edx, 5897h
		sub     eax, edi
		push    byte 6
		sub     edx, eax
		mov     eax, [dr@243ca0h]
		push    edx
		mov     edx, eax
		mov     ebx, 46h
		sar     edx, 1fh
		idiv    ebx
		mov     [esp+0ch], edx
		fild    dword [esp+0ch]
		fmul    qword [dr@182f67h]
		push    byte 10h
		mov     ebx, 6
		mov     eax, dr@1d7810h
		mov     edx, ebx
		call    __CHP
		fistp   dword [esp+10h]
		mov     ecx, [esp+10h]
		call    dr@4256ch
dr@41cebh:
		mov     edx, [dr@243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+dr@1de5b4h]
		fmul    qword [dr@182f97h]
		call    __CHP
		fistp   dword [esp+4]
		cmp     dword [esp+4], byte 0
		jge     dr@41d22h
		xor     edi, edi
		mov     [esp+4], edi
dr@41d22h:
		mov     edx, 3ah
		mov     ecx, 40h
		mov     edi, 7
		mov     ebx, [dr@243d80h]
		mov     ebp, [dr@196d98h]
		xor     eax, eax
		add     ebx, 4464h
		sub     ecx, ebp
		mov     al, [esp+4]
		sub     ebx, ecx
		sub     edx, eax
		add     ebx, eax
		xor     eax, eax
		test    edx, edx
		je      dr@41d6fh
dr@41d57h:
		mov     ecx, edx
dr@41d59h:
		cmp     byte [ebx], 40h
		jl      dr@41d60h
		mov     [ebx], al
dr@41d60h:
		inc     ebx
		dec     ecx
		jne     dr@41d59h
		add     ebx, 200h
		sub     ebx, edx
		dec     edi
		jne     dr@41d57h
dr@41d6fh:
		mov     edx, [dr@243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+dr@1de598h]
		fmul    qword [dr@182f6fh]
		sub     esp, byte 8
		fstp    qword [esp]
		mov     ebx, 0ah
		call    ceil
		push    byte 0fffffff0h
		mov     eax, 40h
		mov     edx, [dr@196d98h]
		fsubr   qword [dr@182f9fh]
		push    byte 0fffffff8h
		sub     eax, edx
		mov     edx, 8e6eh
		call    __CHP
		sub     edx, eax
		fistp   dword [esp+8]
		push    edx
		mov     ecx, [esp+0ch]
		mov     eax, dr@1de210h
		push    byte 0
		mov     edx, 8
		mov     esi, dr@1de530h
		call    dr@4256ch
		mov     ecx, 0ah
		mov     ebx, [dr@243d80h]
		mov     edx, 8
		add     ebx, eax
dr@41df4h:
		mov     ch, dl
dr@41df6h:
		mov     al, [esi]
		or      al, al
		je      dr@41dfeh
		mov     [ebx], al
dr@41dfeh:
		inc     ebx
		inc     esi
;16:00041e00
		dec     ch
		jne     dr@41df6h
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     dr@41df4h
		mov     edx, [dr@243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		cmp     dword [eax*4+dr@1de598h], 5000h
		jge     dr@41e64h
		cmp     dword [dr@196de8h], byte 0
		jne     dr@41e5ah
		push    8000h
		mov     ecx, 10000h
		mov     edx, 1
		push    50000h
		mov     eax, 2
		xor     ebx, ebx
		call    dr@654d4h
dr@41e5ah:
		mov     dword [dr@196de8h], 1
dr@41e64h:
		mov     edx, [dr@243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		cmp     dword [eax*4+dr@1de598h], 2800h
		jge     dr@41eb8h
		cmp     dword [dr@196dech], byte 0
		jne     dr@41eaeh
		push    8000h
		mov     ecx, 10000h
		mov     edx, 1
		push    50000h
		mov     eax, 2
		xor     ebx, ebx
		call    dr@654d4h
dr@41eaeh:
		mov     dword [dr@196dech], 1
dr@41eb8h:
		mov     edx, [dr@243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		cmp     dword [eax*4+dr@1de598h], byte 0
		jne     dr@41f32h
		mov     edx, [dr@243ce8h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
		mov     edx, dr@182ed4h
		add     eax, dr@1de7d0h
		call    strcmp
		test    eax, eax
		jne     dr@41f32h
;16:00041f00
		mov     ebx, [dr@196df4h]
		test    ebx, ebx
		jne     dr@41f28h
		push    8000h
		mov     ecx, 10000h
		push    50000h
		mov     edx, 20h
		mov     eax, 2
		call    dr@654d4h
dr@41f28h:
		mov     dword [dr@196df4h], 1
dr@41f32h:
		mov     edx, [dr@243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		fild    dword [eax*4+dr@1de598h]
		fdiv    qword [dr@182fa7h]
		sub     esp, byte 8
		fstp    qword [esp]
		call    ceil
		call    __CHP
		fistp   dword [esp+8]
		cmp     dword [esp+8], byte 0
		jge     dr@41f74h
		xor     edi, edi
		mov     [esp+8], edi
dr@41f74h:
		mov     eax, 40h
		mov     ebx, [dr@243d80h]
		mov     ebp, [dr@196d98h]
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
		add     esi, dr@1d5890h
		shr     dl, 2
dr@41fbeh:
		mov     ch, dl
dr@41fc0h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     dr@41fc0h
		add     ebx, 200h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     dr@41fbeh
		mov     eax, [dr@243cf4h]
		xor     edi, edi
		test    eax, eax
		jle     dr@42072h
		mov     ebp, 9000h
		mov     [esp+14h], edi
dr@41ff8h:
		mov     eax, [esp+14h]
		imul    eax, [eax+dr@243854h], 94h
		cmp     dword [eax+dr@1de598h], byte 0
		jg      dr@42056h
		mov     ebx, 40h
		mov     edx, 40h
		mov     eax, [dr@243d80h]
		mov     ecx, [dr@196d98h]
		add     eax, ebp
		sub     ebx, ecx
		add     eax, byte 60h
		mov     esi, [dr@243d84h]
		sub     eax, ebx
		mov     ecx, 20h
		mov     ebx, eax
dr@4203ah:
		mov     ch, dl
dr@4203ch:
		mov     al, [esi]
		or      al, al
		je      dr@42044h
		mov     [ebx], al
dr@42044h:
		inc     ebx
		inc     esi
		dec     ch
		jne     dr@4203ch
		add     ebx, 200h
		sub     ebx, edx
		dec     cl
		jne     dr@4203ah
dr@42056h:
		mov     edx, [esp+14h]
		mov     ebx, [dr@243cf4h]
		add     ebp, 4000h
		add     edx, byte 4
		inc     edi
		mov     [esp+14h], edx
		cmp     edi, ebx
		jl      dr@41ff8h
dr@42072h:
		add     esp, byte 38h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
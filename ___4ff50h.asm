cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243c60h
	extern	___1de598h
	extern	___1e6fdah
	extern	___243ca4h
	extern	___243ca8h
	extern	___1e6ef0h
	extern	___1de5ach
	extern	___1de5b0h
	extern	___1de5e0h
	extern	___1de5e4h
	extern	___1e6f7ch
	extern	___1841edh
	extern	___1841f1h
	extern	___1841f9h
	extern	___1de5f4h
	extern	__CHP
	extern	___1e7086h
	extern	___184201h
	extern	___184209h
	extern	___1e6f84h
	extern	___1e6ed4h
	extern	___1e6f88h
	extern	___184211h
	extern	___2432b8h
	extern	___1e6ed8h
	extern	___2432b0h
	extern	___2432bch
	extern	___243ce8h
	extern	___2432b4h
	extern	rand_
	extern	dRally_Audio_pushSoundEffect
	extern	___184215h
	extern	___243cf4h
	extern	___243d74h
	extern	___1e6ee0h
	extern	___1de59ch
	extern	___1de580h
	extern	___24389ch
	extern	___2432c0h
	extern	___2432c4h
	extern	___1de604h
	extern	___1e707ah
	extern	___243d2ch
	extern	___243d28h
	extern	___243d60h
	extern	___19bd60h
	extern	___1df738h
	extern	___1df720h
	extern	___1df724h
	extern	___1df734h
	extern	___1e708ah
	extern	___1e708eh
	extern	___1e70a2h
	extern	___1e70a6h

section .text

__GDECL(___4ff50h)
		push    168h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, 144h
		and     esp, byte 0fffffff8h
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
		cmp     dword [eax+___1de598h], byte 0
		jle     near ___50a3fh
		imul    edx, [___243c60h], 35eh
		cmp     dword [edx+___1e6fdah], byte 0
		jne     near ___50a3fh
		cmp     dword [___243ca4h], 1aeh
		jle     near ___50a3fh
		mov     ebx, [___243ca8h]
		test    byte [edx+ebx*4+___1e6ef0h], 20h
		je      near ___50a3fh
		cmp     dword [eax+___1de5ach], byte 0
		je      near ___50a3fh
		cmp     dword [eax+___1de5b0h], byte 0
		jle     near ___50a3fh
		mov     ebx, [eax+___1de5e0h]
		shl     ebx, 2
		add     ebx, eax
		fild    dword [ebx+___1de5e4h]
		fadd    dword [edx+___1e6f7ch]
		fadd    dword [___1841edh]
		fmul    qword [___1841f1h]
		fdiv    qword [___1841f9h]
		fsin    
		fild    dword [ebx+___1de5f4h]
		fstp    qword [esp+12ch]
		fmul    qword [esp+12ch]
		mov     ecx, 1
		fst     qword [esp+104h]
		call    near __CHP
		fistp   dword [esp+138h]
		fild    dword [esp+138h]
		fsubr   qword [esp+104h]
		mov     [edx+___1e7086h], ecx
		fcomp   qword [___184201h]
		fnstsw  ax
		sahf    
		jb      short ___50071h
		fld1    
		fadd    qword [esp+104h]
		call    near __CHP
		fistp   dword [esp+0c4h]
		jmp     short ___5007fh
___50071h:
		mov     eax, [esp+138h]
		mov     [esp+0c4h], eax
___5007fh:
		mov     eax, [esp+0c4h]
		mov     edx, [___243c60h]
		mov     [esp+0e8h], eax
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
		mov     edx, [eax+___1de5e0h]
		shl     edx, 2
		mov     esi, [___243c60h]
		add     edx, eax
		imul    eax, esi, 35eh
		fild    dword [edx+___1de5e4h]
		fadd    dword [eax+___1e6f7ch]
		fadd    dword [___1841edh]
		fmul    qword [___1841f1h]
		fdiv    qword [___1841f9h]
		fcos    
		fmul    qword [___184209h]
		fild    dword [edx+___1de5f4h]
		fstp    qword [esp+114h]
		fmul    qword [esp+114h]
		fst     qword [esp+10ch]
		call    near __CHP
		fistp   dword [esp+134h]
		fild    dword [esp+134h]
		fsubr   qword [esp+10ch]
		fcomp   qword [___184201h]
		fnstsw  ax
		sahf    
		jb      short ___50138h
		fld1    
		fadd    qword [esp+10ch]
		call    near __CHP
		fistp   dword [esp+0cch]
		jmp     short ___50146h
___50138h:
		mov     eax, [esp+134h]
		mov     [esp+0cch], eax
___50146h:
		mov     eax, [esp+0cch]
		mov     edi, [___243c60h]
		mov     [esp+0e4h], eax
		imul    eax, edi, 35eh
		mov     ebx, [esp+0e8h]
		fld     dword [eax+___1e6f84h]
		mov     edx, [eax+___1e6ed4h]
		fld     dword [eax+___1e6f88h]
		sub     edx, byte 4
		fxch    st0, st1
		fld     dword [___184211h]
		fxch    st0, st1
		fadd    st0, st1
		fxch    st0, st2
		faddp   st1, st0
		fild    dword [esp+0e8h]
		add     ebx, edx
		fild    dword [esp+0cch]
		mov     [___2432b8h], ebx
		mov     edx, [eax+___1e6ed8h]
		fxch    st0, st1
		faddp   st3, st0
		faddp   st1, st0
		fxch    st0, st1
		call    near __CHP
		mov     ebx, [esp+0cch]
		sub     edx, byte 4
		fxch    st0, st1
		call    near __CHP
		add     ebx, edx
		fxch    st0, st1
		fistp   dword [___2432b0h]
		mov     [___2432bch], ebx
		mov     ebx, [___243ce8h]
		fistp   dword [___2432b4h]
		cmp     edi, ebx
		jne     short ___50213h
		push    8000h
		push    21000h
		call    near rand_
		mov     edx, eax
		mov     ebx, 2
		sar     edx, 1fh
		idiv    ebx
		add     edx, byte 13h
		mov     ecx, 9000h
		mov     eax, 9
		jmp     near ___502c8h
___50213h:
		imul    edx, ebx, 35eh
		fld     dword [eax+___1e6f88h]
		fld     dword [eax+___1e6f84h]
		fsub    dword [edx+___1e6f84h]
		fxch    st0, st1
		fsub    dword [edx+___1e6f88h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+0ach]
		mov     edx, [esp+0ach]
		imul    edx, edx
		call    near __CHP
		fistp   dword [esp+90h]
		mov     eax, [esp+90h]
		imul    eax, eax
		add     edx, eax
		mov     [esp+0b8h], edx
		fild    dword [esp+0b8h]
		fsqrt   
		call    near __CHP
		fistp   dword [esp+0b8h]
		mov     edx, [esp+0b8h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, eax
		shl     eax, 4
		mov     ecx, 9000h
		sub     eax, edx
		sub     ecx, eax
		cmp     ecx, 1000h
		jle     short ___502d5h
		push    8000h
		push    21000h
		call    near rand_
		mov     edx, eax
		mov     ebx, 2
		sar     edx, 1fh
		idiv    ebx
		add     edx, byte 13h
		mov     eax, 0ah
___502c8h:
		and     edx, 0ffh
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
___502d5h:
		imul    eax, [___243c60h], 35eh
		fld     dword [eax+___1e6f7ch]
		fadd    dword [___1841edh]
		fmul    qword [___1841f1h]
		fdiv    qword [___1841f9h]
		fsin    
		fmul    qword [___184215h]
		fst     qword [esp+124h]
		call    near __CHP
		fistp   dword [esp+13ch]
		fild    dword [esp+13ch]
		fsubr   qword [esp+124h]
		fcomp   qword [___184201h]
		fnstsw  ax
		sahf    
		jb      short ___50342h
		fld1    
		fadd    qword [esp+124h]
		call    near __CHP
		fistp   dword [esp+0c0h]
		jmp     short ___50350h
___50342h:
		mov     eax, [esp+13ch]
		mov     [esp+0c0h], eax
___50350h:
		mov     eax, [esp+0c0h]
		mov     ebx, [___243c60h]
		mov     [esp+0d4h], eax
		imul    eax, ebx, 35eh
		fld     dword [eax+___1e6f7ch]
		fadd    dword [___1841edh]
		fmul    qword [___1841f1h]
		fdiv    qword [___1841f9h]
		fcos    
		fmul    qword [___184209h]
		fmul    qword [___184215h]
		fst     qword [esp+11ch]
		call    near __CHP
		fistp   dword [esp+140h]
		fild    dword [esp+140h]
		fsubr   qword [esp+11ch]
		fcomp   qword [___184201h]
		fnstsw  ax
		sahf    
		jb      short ___503d3h
		fld1    
		fadd    qword [esp+11ch]
		call    near __CHP
		fistp   dword [esp+0c8h]
		jmp     short ___503e1h
___503d3h:
		mov     eax, [esp+140h]
		mov     [esp+0c8h], eax
___503e1h:
		call    near rand_
		mov     edx, eax
		mov     ebx, 6
		sar     edx, 1fh
		idiv    ebx
		mov     ecx, [esp+0d4h]
		sub     edx, byte 3
		call    near rand_
		add     ecx, edx
		mov     edx, eax
		sar     edx, 1fh
		idiv    ebx
		xor     esi, esi
		mov     eax, [esp+0c8h]
		sub     edx, byte 3
		mov     [esp+0e0h], esi
		add     eax, edx
		mov     [esp+0d4h], ecx
		mov     [esp+0d0h], eax
___5042dh:
		mov     eax, [esp+0e0h]
		imul    eax, [esp+0d4h]
		add     eax, 80h
		sar     eax, 8
		mov     edx, [esp+0d0h]
		mov     [esp+0f0h], eax
		mov     eax, [esp+0e0h]
		imul    eax, edx
		add     eax, 80h
		sar     eax, 8
		mov     ebx, [esp+0f0h]
		mov     [esp+0f4h], eax
		mov     eax, [___2432b0h]
		add     eax, ebx
		mov     esi, [esp+0f4h]
		mov     [esp+0dch], eax
		mov     eax, [___2432b4h]
		add     eax, esi
		mov     edi, [___243c60h]
		mov     [esp+0d8h], eax
		imul    eax, edi, 94h
		mov     [esp+100h], eax
		mov     edx, edi
		imul    eax, edi, 35eh
		xor     ecx, ecx
		mov     ebx, [___243cf4h]
		mov     [esp+0bch], eax
		xor     edx, edi
		xor     eax, eax
		test    ebx, ebx
		jle     near ___506bbh
___504cbh:
		cmp     ecx, [___243c60h]
		je      near ___506a1h
		mov     ebx, [esp+0bch]
		fld     dword [eax+___1e6f84h]
		mov     esi, [esp+0e8h]
		fld     dword [ebx+___1e6f84h]
		call    near __CHP
		mov     ebx, [esp+0f0h]
		fistp   dword [esp+0b8h]
		mov     edi, [esp+0b8h]
		call    near __CHP
		add     ebx, edi
		fistp   dword [esp+0b8h]
		add     ebx, esi
		mov     esi, [esp+0b8h]
		sub     esi, ebx
		mov     ebx, esi
		mov     esi, [esp+0bch]
		fld     dword [eax+___1e6f88h]
		fld     dword [esi+___1e6f88h]
		call    near __CHP
		mov     esi, [esp+0f4h]
		fistp   dword [esp+0b8h]
		mov     edi, [esp+0b8h]
		call    near __CHP
		add     esi, edi
		mov     edi, [esp+0e4h]
		fistp   dword [esp+0b8h]
		add     esi, edi
		mov     edi, [esp+0b8h]
		sub     edi, esi
		mov     esi, edi
		test    ebx, ebx
		jge     short ___5058dh
		mov     edi, ebx
		mov     [esp+0fch], ebx
		neg     edi
		mov     [esp+0fch], edi
		jmp     short ___50594h
___5058dh:
		mov     [esp+0fch], ebx
___50594h:
		cmp     dword [esp+0fch], byte 14h
		jge     near ___506a1h
		test    esi, esi
		jge     short ___505bah
		mov     edi, esi
		mov     [esp+0f8h], esi
		neg     edi
		mov     [esp+0f8h], edi
		jmp     short ___505c1h
___505bah:
		mov     [esp+0f8h], esi
___505c1h:
		cmp     dword [esp+0f8h], byte 14h
		jge     near ___506a1h
		add     esi, byte 14h
		imul    esi, esi, byte 28h
		mov     edi, [___243d74h]
		add     edi, [eax+___1e6ee0h]
		add     ebx, edi
		cmp     byte [esi+ebx*1+14h], 3
		jbe     near ___506a1h
		mov     ebx, 82h
		mov     esi, [eax+___1e6fdah]
		mov     [esp+0e0h], ebx
		test    esi, esi
		jne     short ___50646h
		mov     ebx, 400h
		mov     edi, [edx+___1de59ch]
		sub     ebx, edi
		mov     [esp+0b8h], ebx
		mov     ebx, [esp+100h]
		mov     ebx, [ebx+___1de580h]
		fild    dword [esp+0b8h]
		fmul    dword [ebx*4+___24389ch]
		fild    dword [edx+___1de598h]
		fsubrp  st1, st0
		call    near __CHP
		fistp   dword [edx+___1de598h]
___50646h:
		cmp     dword [edx+___1de598h], byte 0
		jge     short ___50657h
		xor     esi, esi
		mov     [edx+___1de598h], esi
___50657h:
		mov     ebx, [esp+0dch]
		mov     [___2432c0h], ebx
		mov     ebx, [esp+0d8h]
		mov     [___2432c4h], ebx
		mov     ebx, [esp+100h]
		mov     ebx, [ebx+___1de5e0h]
		mov     edi, [esp+100h]
		shl     ebx, 2
		add     ebx, edi
		mov     ebx, [ebx+___1de604h]
		lea     ebx, [ebx+ebx*2]
		mov     esi, [esp+0bch]
		inc     ebx
		mov     [esi+___1e707ah], ebx
___506a1h:
		mov     esi, [___243cf4h]
		add     eax, 35eh
		inc     ecx
		add     edx, 94h
		cmp     ecx, esi
		jl      near ___504cbh
___506bbh:
		mov     eax, [esp+0bch]
		mov     edx, [esp+0f0h]
		mov     edi, [esp+0e8h]
		fld     dword [eax+___1e6f84h]
		call    near __CHP
		add     edx, edi
		fistp   dword [esp+0b8h]
		add     edx, [esp+0b8h]
		mov     eax, [esp+0bch]
		mov     ebx, [esp+0e4h]
		fld     dword [eax+___1e6f88h]
		call    near __CHP
		mov     eax, [esp+0f4h]
		fistp   dword [esp+0b8h]
		mov     ecx, [esp+0b8h]
		add     eax, ebx
		add     eax, ecx
		test    eax, eax
		jl      near ___507b3h
		cmp     eax, [___243d2ch]
		jge     near ___507b3h
		test    edx, edx
		jl      near ___507b3h
		mov     edi, [___243d28h]
		cmp     edx, edi
		jge     short ___507b3h
		imul    eax, edi
		mov     ebx, [___243d60h]
		add     edx, ebx
		mov     al, [edx+eax*1]
		and     al, 0fh
		cmp     al, 4
		jae     short ___507b3h
		mov     esi, [esp+0f0h]
		mov     eax, [___2432b0h]
		add     eax, esi
		mov     edi, [esp+0f4h]
		mov     [___2432c0h], eax
		mov     eax, [___2432b4h]
		add     eax, edi
		mov     edx, [___243c60h]
		mov     [___2432c4h], eax
		imul    eax, edx, 94h
		mov     edx, [eax+___1de5e0h]
		mov     eax, [eax+edx*4+___1de604h]
		mov     ecx, 82h
		lea     eax, [eax+eax*2]
		mov     edx, [esp+0bch]
		inc     eax
		mov     [esp+0e0h], ecx
		mov     [edx+___1e707ah], eax
___507b3h:
		cmp     dword [___19bd60h], byte 0
		jne     near ___509b4h
		call    near rand_
		mov     edx, eax
		mov     ebx, 5
		sar     edx, 1fh
		idiv    ebx
		mov     [esp+0ech], edx
		cmp     edx, byte 14h
		jge     near ___509b4h
		mov     esi, edx
		shl     esi, 5
___507e6h:
		cmp     dword [esi+___1df738h], byte 0
		jne     near ___50991h
		imul    edx, [___243c60h], 35eh
		mov     eax, [esp+0f0h]
		fld     dword [edx+___1e6f84h]
		fld     dword [edx+___1e6f88h]
		mov     ebx, [esp+0e8h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+0b8h]
		mov     ecx, [esp+0b8h]
		call    near __CHP
		add     eax, ecx
		mov     edx, [esp+0f4h]
		add     ebx, eax
		mov     eax, [esi+___1df720h]
		fistp   dword [esp+0b8h]
		add     eax, byte 8
		mov     edi, [esp+0b8h]
		sub     ebx, eax
		add     edx, edi
		mov     eax, ebx
		mov     ebx, [esp+0e4h]
		add     ebx, edx
		mov     edx, [esi+___1df724h]
		add     edx, byte 8
		sub     ebx, edx
		mov     edx, ebx
		test    eax, eax
		jge     short ___50875h
		neg     eax
___50875h:
		cmp     eax, byte 3
		jge     near ___50991h
		test    edx, edx
		jge     short ___50884h
		neg     edx
___50884h:
		cmp     edx, byte 3
		jge     near ___50991h
		mov     eax, 1
		mov     ebx, [___243ce8h]
		xor     edx, edx
		mov     [esi+___1df738h], eax
		mov     eax, [___243c60h]
		mov     [esi+___1df734h], edx
		cmp     eax, ebx
		jne     short ___508d7h
		push    8000h
		push    50000h
		call    near rand_
		mov     edx, eax
		mov     ebx, 3
		sar     edx, 1fh
		idiv    ebx
		add     edx, byte 7
		mov     ecx, 9000h
		jmp     near ___5097fh
___508d7h:
		imul    edx, eax, 35eh
		imul    eax, ebx, 35eh
		fld     dword [edx+___1e6f88h]
		fld     dword [edx+___1e6f84h]
		fsub    dword [eax+___1e6f84h]
		fxch    st0, st1
		fsub    dword [eax+___1e6f88h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+0ach]
		mov     eax, [esp+0ach]
		imul    eax, eax
		call    near __CHP
		fistp   dword [esp+90h]
		mov     edx, [esp+90h]
		imul    edx, edx
		add     eax, edx
		mov     [esp+0b8h], eax
		fild    dword [esp+0b8h]
		fsqrt   
		call    near __CHP
		fistp   dword [esp+0b8h]
		imul    ecx, [esp+0b8h], byte 4bh
		mov     eax, 10000h
		sub     eax, ecx
		mov     ecx, eax
		cmp     eax, dword 1000h
		jle     short ___50991h
		push    8000h
		push    50000h
		call    near rand_
		mov     edx, eax
		mov     ebx, 3
		sar     edx, 1fh
		idiv    ebx
		add     edx, byte 7
___5097fh:
		mov     eax, 3
		and     edx, 0ffh
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
___50991h:
		mov     eax, [esp+0ech]
		add     eax, byte 5
		add     esi, 0a0h
		mov     [esp+0ech], eax
		cmp     esi, 280h
		jl      near ___507e6h
___509b4h:
		mov     eax, [esp+0e0h]
		add     eax, byte 5
		mov     [esp+0e0h], eax
		cmp     eax, dword 82h
		jl      near ___5042dh
		mov     edx, [___243c60h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		shl     eax, 2
		mov     ebx, [eax+___1de5b0h]
		sub     ebx, 104h
		mov     [eax+___1de5b0h], ebx
		test    ebx, ebx
		jge     short ___50a05h
		xor     esi, esi
		mov     [eax+___1de5b0h], esi
___50a05h:
		imul    eax, [___243c60h], 35eh
		mov     edx, [___2432c0h]
		mov     [eax+___1e708ah], edx
		mov     edx, [___2432c4h]
		mov     [eax+___1e708eh], edx
		mov     edx, [___2432b0h]
		mov     [eax+___1e70a2h], edx
		mov     edx, [___2432b4h]
		mov     [eax+___1e70a6h], edx
___50a3fh:
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

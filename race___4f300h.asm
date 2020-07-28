cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243ce8h
	extern	___243c8ch
	extern	___1e6f84h
	extern	___196d8ch
	extern	__CHP
	extern	___1e6ed4h
	extern	___243d28h
	extern	___196d88h
	extern	___243c90h
	extern	___196d98h
	extern	___1e6f88h
	extern	___196d94h
	extern	___1e6ed8h
	extern	___243d2ch
	extern	___196d90h
	extern	___1de598h
	extern	___1e6fdah
	extern	___1e6f7ch
	extern	___1841b1h
	extern	___1841b5h
	extern	___1841b9h
	extern	___1841c1h
	extern	___1841d9h
	extern	___1841c9h
	extern	___1841d1h
	extern	___241c78h
	extern	___243c60h
	extern	___5e769h
	extern	___1841ddh
	extern	___1841e1h
	extern	___1841e9h
	extern	___243cf4h
	extern	___196dcch
	extern	___196dc8h
	extern	___1e6ee0h
	extern	___243d80h
	extern	___243d74h
	extern	___1e70aah
	extern	___243d68h
	extern	___1e70aeh
	extern	__GET_FRAME_COUNTER

section .text

__GDECL(race___4f300h)
		push    54h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 1ch
		and     esp, byte 0fffffff8h
		mov     edi, [___243ce8h]
		imul    edx, edi, 35eh
		fild    dword [___243c8ch]
		fadd    dword [edx+___1e6f84h]
		fild    dword [___196d8ch]
		fcompp  
		fnstsw  ax
		sahf    
		jbe     short ___4f356h
		fld     dword [edx+___1e6f84h]
		call    near __CHP
		fistp   dword [esp+18h]
		mov     eax, [esp+18h]
		mov     [edx+___1e6ed4h], eax
___4f356h:
		imul    edx, edi, 35eh
		mov     eax, [___243d28h]
		mov     ebx, [___196d8ch]
		fild    dword [___243c8ch]
		sub     eax, ebx
		fadd    dword [edx+___1e6f84h]
		mov     [esp+18h], eax
		fild    dword [esp+18h]
		fcompp  
		fnstsw  ax
		sahf    
		jae     short ___4f3b2h
		mov     eax, [___243d28h]
		mov     ecx, [___196d88h]
		sub     eax, ecx
		mov     [esp+18h], eax
		fild    dword [esp+18h]
		fsubr   dword [edx+___1e6f84h]
		call    near __CHP
		fistp   dword [esp+18h]
		mov     eax, [esp+18h]
		mov     [edx+___1e6ed4h], eax
___4f3b2h:
		imul    edx, edi, 35eh
		fild    dword [___243c8ch]
		fstp    dword [esp+8]
		fld     dword [edx+___1e6f84h]
		fadd    dword [esp+8]
		fild    dword [___196d8ch]
		fxch    st0, st1
		fstp    dword [esp+10h]
		fcomp   dword [esp+10h]
		fnstsw  ax
		sahf    
		ja      short ___4f40fh
		mov     eax, [___243d28h]
		mov     esi, [___196d8ch]
		sub     eax, esi
		mov     [esp+18h], eax
		fild    dword [esp+18h]
		fcomp   dword [esp+10h]
		fnstsw  ax
		sahf    
		jb      short ___4f40fh
		mov     ebx, [___243c8ch]
		mov     eax, esi
		sub     eax, ebx
		mov     [edx+___1e6ed4h], eax
___4f40fh:
		imul    edx, edi, 35eh
		fild    dword [___243c90h]
		mov     eax, [___196d98h]
		mov     ecx, [edx+___1e6ed4h]
		fadd    dword [edx+___1e6f88h]
		add     ecx, eax
		fild    dword [___196d94h]
		mov     [edx+___1e6ed4h], ecx
		fcompp  
		fnstsw  ax
		sahf    
		jbe     short ___4f45ah
		fld     dword [edx+___1e6f88h]
		call    near __CHP
		fistp   dword [esp+18h]
		mov     eax, [esp+18h]
		mov     [edx+___1e6ed8h], eax
___4f45ah:
		imul    edx, edi, 35eh
		mov     eax, [___243d2ch]
		mov     esi, [___196d94h]
		fild    dword [___243c90h]
		sub     eax, esi
		fadd    dword [edx+___1e6f88h]
		mov     [esp+18h], eax
		fild    dword [esp+18h]
		fcompp  
		fnstsw  ax
		sahf    
		jae     short ___4f4b6h
		mov     eax, [___243d2ch]
		mov     ebx, [___196d90h]
		sub     eax, ebx
		mov     [esp+18h], eax
		fild    dword [esp+18h]
		fsubr   dword [edx+___1e6f88h]
		call    near __CHP
		fistp   dword [esp+18h]
		mov     eax, [esp+18h]
		mov     [edx+___1e6ed8h], eax
___4f4b6h:
		imul    edx, edi, 35eh
		fild    dword [___243c90h]
		fstp    dword [esp+0ch]
		fld     dword [edx+___1e6f88h]
		fadd    dword [esp+0ch]
		fild    dword [___196d94h]
		fxch    st0, st1
		fstp    dword [esp+14h]
		fcomp   dword [esp+14h]
		fnstsw  ax
		sahf    
		ja      short ___4f513h
		mov     eax, [___243d2ch]
		mov     ecx, [___196d94h]
		sub     eax, ecx
		mov     [esp+18h], eax
		fild    dword [esp+18h]
		fcomp   dword [esp+14h]
		fnstsw  ax
		sahf    
		jb      short ___4f513h
		mov     esi, [___243c90h]
		mov     eax, ecx
		sub     eax, esi
		mov     [edx+___1e6ed8h], eax
___4f513h:
		lea     eax, [edi*8+0]
		add     eax, edi
		shl     eax, 2
		add     eax, edi
		cmp     dword [eax*4+___1de598h], byte 0
		jle     near ___4f80bh
		imul    edx, edi, 35eh
		cmp     dword [edx+___1e6fdah], byte 0
		jne     near ___4f80bh
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1841b1h]
		fadd    dword [___1841b5h]
		fmul    qword [___1841b9h]
		fdiv    qword [___1841c1h]
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1841d9h]
		fadd    dword [___1841b5h]
		fmul    qword [___1841b9h]
		fdiv    qword [___1841c1h]
		fxch    st0, st2
		fmul    qword [___1841c9h]
		fxch    st0, st1
		fmul    qword [___1841d1h]
		mov     ecx, [edx+___1e6ed4h]
		mov     esi, [edx+___1e6ed8h]
		push    ecx
		fmul    qword [___1841c9h]
		push    esi
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+20h]
		mov     ebx, [esp+20h]
		call    near __CHP
		lea     eax, [ecx+ebx*1]
		fistp   dword [esp+20h]
		mov     ecx, [esp+20h]
		push    eax
		lea     eax, [esi+ecx*1]
		fld     st0
		push    eax
		fsin    
		fxch    st0, st1
		fcos    
		fmul    qword [___1841d1h]
		fxch    st0, st1
		fmul    qword [___1841c9h]
		fxch    st0, st1
		fmul    qword [___1841c9h]
		mov     eax, [edx+___1e6ed4h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+28h]
		mov     esi, [esp+28h]
		call    near __CHP
		add     eax, esi
		fistp   dword [esp+28h]
		push    eax
		mov     eax, [edx+___1e6ed8h]
		add     eax, [esp+2ch]
		push    eax
		push    ___241c78h
		mov     [___243c60h], edi
		call    near ___5e769h
	add 	esp, 1ch
		mov     edi, [___243c60h]
		imul    edx, edi, 35eh
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1841ddh]
		fadd    dword [___1841b5h]
		fmul    qword [___1841b9h]
		fdiv    qword [___1841c1h]
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1841b1h]
		fadd    dword [___1841b5h]
		fmul    qword [___1841b9h]
		fdiv    qword [___1841c1h]
		fxch    st0, st2
		fld     qword [___1841e1h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmul    qword [___1841d1h]
		mov     ebx, [edx+___1e6ed4h]
		mov     ecx, [edx+___1e6ed8h]
		push    ebx
		fmulp   st1, st0
		push    ecx
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+20h]
		mov     esi, [esp+20h]
		call    near __CHP
		lea     eax, [ebx+esi*1]
		fistp   dword [esp+20h]
		mov     ebx, [esp+20h]
		push    eax
		lea     eax, [ecx+ebx*1]
		fld     st0
		push    eax
		fsin    
		fxch    st0, st1
		fcos    
		fmul    qword [___1841d1h]
		fxch    st0, st1
		fmul    qword [___1841c9h]
		fxch    st0, st1
		fmul    qword [___1841c9h]
		mov     eax, [edx+___1e6ed4h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+28h]
		mov     ecx, [esp+28h]
		call    near __CHP
		fistp   dword [esp+28h]
		add     eax, ecx
		mov     esi, [esp+28h]
		push    eax
		mov     eax, [edx+___1e6ed8h]
		add     eax, esi
		push    eax
		push    ___241c78h
		call    near ___5e769h
	add 	esp, 1ch
		mov     edi, [___243c60h]
		imul    edx, edi, 35eh
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1841d9h]
		fld     dword [___1841b5h]
		fxch    st0, st1
		fadd    st0, st1
		fld     qword [___1841b9h]
		fxch    st0, st1
		fmul    st0, st1
		fld     qword [___1841c1h]
		fxch    st0, st1
		fdiv    st0, st1
		mov     eax, [edx+___1e6ed4h]
		push    eax
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1841e9h]
		faddp   st5, st0
		fxch    st0, st4
		fmulp   st3, st0
		fxch    st0, st2
		fdivrp  st1, st0
		fxch    st0, st1
		fld     qword [___1841c9h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st3
		fld     qword [___1841d1h]
		fxch    st0, st1
		fmul    st0, st1
		mov     ebx, [edx+___1e6ed8h]
		fmulp   st2, st0
		push    ebx
		mov     eax, [edx+___1e6ed4h]
		fxch    st0, st3
		call    near __CHP
		fistp   dword [esp+20h]
		mov     ecx, [esp+20h]
		call    near __CHP
		fistp   dword [esp+20h]
		add     eax, ecx
		mov     esi, [esp+20h]
		push    eax
		lea     eax, [ebx+esi*1]
		fld     st0
		push    eax
		fsin    
		fxch    st0, st1
		fcos    
		fmulp   st2, st0
		fld     qword [___1841e1h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmulp   st1, st0
		mov     eax, [edx+___1e6ed4h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+28h]
		mov     ebx, [esp+28h]
		call    near __CHP
		fistp   dword [esp+28h]
		add     eax, ebx
		mov     ecx, [esp+28h]
		push    eax
		mov     eax, [edx+___1e6ed8h]
		add     eax, ecx
		push    eax
		push    ___241c78h
		call    near ___5e769h
	add 	esp, 1ch
___4f80bh:
		mov     esi, [___243cf4h]
		xor     edi, edi
		test    esi, esi
		jle     near ___4fbbdh
___4f81bh:
		cmp     edi, [___243ce8h]
		je      near ___4fbaeh
		imul    edx, edi, 35eh
		fild    dword [___196dcch]
		fild    dword [___196dc8h]
		fsubr   dword [edx+___1e6f84h]
		fxch    st0, st1
		fsubr   dword [edx+___1e6f88h]
		fild    dword [___196d98h]
		faddp   st2, st0
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+18h]
		mov     eax, [esp+18h]
		fistp   dword [esp+18h]
		mov     [edx+___1e6ed4h], eax
		mov     eax, [esp+18h]
		mov     [edx+___1e6ed8h], eax
		mov     eax, [___196d98h]
		mov     esi, [edx+___1e6ed4h]
		sub     eax, byte 28h
		cmp     eax, esi
		jge     near ___4fbaeh
		cmp     esi, 168h
		jge     near ___4fbaeh
		mov     ebx, [edx+___1e6ed8h]
		cmp     ebx, byte 0ffffffd8h
		jle     near ___4fbaeh
		mov     eax, [___196d90h]
		add     eax, byte 28h
		cmp     eax, ebx
		jle     near ___4fbaeh
		imul    eax, edi, 94h
		cmp     dword [eax+___1de598h], byte 0
		jle     near ___4fbaeh
		cmp     dword [edx+___1e6fdah], byte 0
		jne     near ___4fbaeh
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1841b1h]
		fadd    dword [___1841b5h]
		fmul    qword [___1841b9h]
		fdiv    qword [___1841c1h]
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1841d9h]
		fadd    dword [___1841b5h]
		fmul    qword [___1841b9h]
		fdiv    qword [___1841c1h]
		fxch    st0, st2
		fmul    qword [___1841c9h]
		fxch    st0, st1
		fmul    qword [___1841d1h]
		mov     ebx, [edx+___1e6ed4h]
		mov     ecx, [edx+___1e6ed8h]
		push    ebx
		fmul    qword [___1841c9h]
		push    ecx
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+20h]
		mov     esi, [esp+20h]
		call    near __CHP
		lea     eax, [ebx+esi*1]
		fistp   dword [esp+20h]
		mov     ebx, [esp+20h]
		push    eax
		lea     eax, [ecx+ebx*1]
		fld     st0
		push    eax
		fsin    
		fxch    st0, st1
		fcos    
		fmul    qword [___1841d1h]
		fxch    st0, st1
		fmul    qword [___1841c9h]
		fxch    st0, st1
		fmul    qword [___1841c9h]
		mov     eax, [edx+___1e6ed4h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+28h]
		mov     ecx, [esp+28h]
		call    near __CHP
		fistp   dword [esp+28h]
		add     eax, ecx
		mov     esi, [esp+28h]
		push    eax
		mov     eax, [edx+___1e6ed8h]
		add     eax, esi
		push    eax
		push    ___241c78h
		mov     [___243c60h], edi
		call    near ___5e769h
	add 	esp, 1ch
		mov     edi, [___243c60h]
		imul    edx, edi, 35eh
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1841ddh]
		fadd    dword [___1841b5h]
		fmul    qword [___1841b9h]
		fdiv    qword [___1841c1h]
		mov     eax, [edx+___1e6ed4h]
		push    eax
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1841b1h]
		fadd    dword [___1841b5h]
		fmul    qword [___1841b9h]
		fdiv    qword [___1841c1h]
		fxch    st0, st2
		fld     qword [___1841e1h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmul    qword [___1841d1h]
		mov     ebx, [edx+___1e6ed8h]
		fmulp   st1, st0
		push    ebx
		mov     eax, [edx+___1e6ed4h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+20h]
		mov     ecx, [esp+20h]
		call    near __CHP
		fistp   dword [esp+20h]
		add     eax, ecx
		mov     esi, [esp+20h]
		push    eax
		lea     eax, [ebx+esi*1]
		fld     st0
		push    eax
		fsin    
		fxch    st0, st1
		fcos    
		fmul    qword [___1841d1h]
		fxch    st0, st1
		fmul    qword [___1841c9h]
		fxch    st0, st1
		fmul    qword [___1841c9h]
		mov     eax, [edx+___1e6ed4h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+28h]
		mov     ebx, [esp+28h]
		call    near __CHP
		fistp   dword [esp+28h]
		add     eax, ebx
		mov     ecx, [esp+28h]
		push    eax
		mov     eax, [edx+___1e6ed8h]
		add     eax, ecx
		push    eax
		push    ___241c78h
		call    near ___5e769h
	add 	esp, 1ch
		mov     edi, [___243c60h]
		imul    edx, edi, 35eh
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1841d9h]
		fld     dword [___1841b5h]
		fxch    st0, st1
		fadd    st0, st1
		fld     qword [___1841b9h]
		fxch    st0, st1
		fmul    st0, st1
		fld     qword [___1841c1h]
		fxch    st0, st1
		fdiv    st0, st1
		mov     esi, [edx+___1e6ed4h]
		push    esi
		mov     eax, [edx+___1e6ed8h]
		push    eax
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___1841e9h]
		faddp   st5, st0
		fxch    st0, st4
		fmulp   st3, st0
		fxch    st0, st2
		fdivrp  st1, st0
		fxch    st0, st2
		fld     qword [___1841d1h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fld     qword [___1841c9h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st3
		fmulp   st1, st0
		fxch    st0, st2
		call    near __CHP
		fistp   dword [esp+20h]
		mov     ebx, [esp+20h]
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+20h]
		lea     eax, [esi+ebx*1]
		mov     ecx, [esp+20h]
		push    eax
		mov     eax, [edx+___1e6ed8h]
		add     eax, ecx
		fld     st1
		push    eax
		fsin    
		fxch    st0, st2
		fcos    
		fmulp   st1, st0
		fxch    st0, st1
		fld     qword [___1841e1h]
		fxch    st0, st1
		fmul    st0, st1
		fxch    st0, st2
		fmulp   st1, st0
		mov     eax, esi
		fxch    st0, st1
		call    near __CHP
		fistp   dword [esp+28h]
		mov     esi, [esp+28h]
		call    near __CHP
		add     eax, esi
		fistp   dword [esp+28h]
		push    eax
		mov     eax, [edx+___1e6ed8h]
		add     eax, [esp+2ch]
		push    eax
		push    ___241c78h
		call    near ___5e769h
	add 	esp, 1ch
		mov     edi, [___243c60h]
___4fbaeh:
		mov     edx, [___243cf4h]
		inc     edi
		cmp     edi, edx
		jl      near ___4f81bh
___4fbbdh:
		mov     edi, [___243ce8h]
		imul    eax, edi, 35eh
		mov     esi, [eax+___1e6ee0h]
		mov     ebx, [eax+___1e6ed8h]
		mov     eax, [eax+___1e6ed4h]
		mov     [___243c60h], edi
		shl     ebx, 9
		add     ebx, eax
		sub     ebx, 2814h
		add     ebx, byte 60h
		add     ebx, [___243d80h]
		add     esi, [___243d74h]
		mov     edx, 28h
___4fc00h:
		mov     eax, [___243d80h]
		cmp     ebx, eax
		jg      short ___4fc14h
		add     esi, byte 28h
		add     ebx, 200h
		jmp     short ___4fc2ch
___4fc14h:
		mov     ecx, 28h
___4fc19h:
		mov     al, [esi]
		test    al, al
		je      short ___4fc21h
		mov     [ebx], al
___4fc21h:
		inc     ebx
		inc     esi
		dec     ecx
		jne     short ___4fc19h
		add     ebx, 1d8h
___4fc2ch:
		mov     eax, [___243d80h]
		add     eax, 19000h
		cmp     ebx, eax
		jge     short ___4fc3dh
		dec     edx
		jne     short ___4fc00h
___4fc3dh:
		mov     edi, [___243c60h]
		lea     eax, [edi*8+0]
		add     eax, edi
		shl     eax, 2
		add     eax, edi
		cmp     dword [eax*4+___1de598h], byte 0
		jg      near ___4fd37h
		imul    eax, edi, 35eh
		mov     esi, [eax+___1e70aah]
		mov     ebx, [eax+___1e6ed8h]
		shl     esi, 8
		mov     eax, [eax+___1e6ed4h]
		shl     ebx, 9
		add     ebx, eax
		sub     ebx, 1008h
		add     ebx, byte 60h
		add     ebx, [___243d80h]
		add     esi, [___243d68h]
		mov     edx, 10h
___4fc99h:
		mov     eax, [___243d80h]
		cmp     ebx, eax
		jg      short ___4fcadh
		add     esi, byte 10h
		add     ebx, 200h
		jmp     short ___4fcc5h
___4fcadh:
		mov     ecx, 10h
___4fcb2h:
		mov     al, [esi]
		test    al, al
		je      short ___4fcbah
		mov     [ebx], al
___4fcbah:
		inc     ebx
		inc     esi
		dec     ecx
		jne     short ___4fcb2h
		add     ebx, 1f0h
___4fcc5h:
		mov     eax, [___243d80h]
		add     eax, 19000h
		cmp     ebx, eax
		jge     short ___4fcd6h
		dec     edx
		jne     short ___4fc99h
___4fcd6h:
		mov     edi, [___243c60h]
		imul    eax, edi, 35eh
		mov     edx, [eax+___1e70aeh]

	push 	edx
	push 	ecx
		call    __GET_FRAME_COUNTER
	pop		ecx
	pop		edx

		add     edx, byte 3
		mov     edi, [___243c60h]
		cmp     eax, edx
		jb      short ___4fd37h
		imul    eax, edi, 35eh
		mov     ecx, [eax+___1e70aah]
		inc     ecx
		mov     [eax+___1e70aah], ecx
		cmp     ecx, byte 7
		jle     short ___4fd1ah
		xor     edx, edx
		mov     [eax+___1e70aah], edx
___4fd1ah:
		mov     [___243c60h], edi

	push 	edx
	push 	ecx
		call    __GET_FRAME_COUNTER
	pop		ecx
	pop		edx

		mov     edi, [___243c60h]
		imul    edi, edi, 35eh
		mov     [edi+___1e70aeh], eax
___4fd37h:
		mov     ebx, [___243cf4h]
		xor     edi, edi
		test    ebx, ebx
		jle     near ___4ff3fh
___4fd47h:
		cmp     edi, [___243ce8h]
		je      near ___4ff30h
		imul    eax, edi, 35eh
		mov     edx, [___196d98h]
		sub     edx, byte 14h
		mov     esi, [eax+___1e6ed4h]
		mov     [___243c60h], edi
		cmp     edx, esi
		jge     near ___4fe02h
		cmp     esi, 154h
		jge     near ___4fe02h
		mov     ebx, [eax+___1e6ed8h]
		cmp     ebx, byte 0ffffffech
		jle     short ___4fe02h
		mov     edx, [___196d90h]
		add     edx, byte 14h
		cmp     edx, ebx
		jle     short ___4fe02h
		mov     esi, [eax+___1e6ee0h]
		mov     eax, [eax+___1e6ed4h]
		shl     ebx, 9
		add     ebx, eax
		sub     ebx, 2814h
		add     ebx, byte 60h
		add     ebx, [___243d80h]
		add     esi, [___243d74h]
		mov     edx, 28h
___4fdc5h:
		mov     eax, [___243d80h]
		cmp     ebx, eax
		jg      short ___4fdd9h
		add     esi, byte 28h
		add     ebx, 200h
		jmp     short ___4fdf1h
___4fdd9h:
		mov     ecx, 28h
___4fddeh:
		mov     al, [esi]
		test    al, al
		je      short ___4fde6h
		mov     [ebx], al
___4fde6h:
		inc     ebx
		inc     esi
		dec     ecx
		jne     short ___4fddeh
		add     ebx, 1d8h
___4fdf1h:
		mov     eax, [___243d80h]
		add     eax, 19000h
		cmp     ebx, eax
		jge     short ___4fe02h
		dec     edx
		jne     short ___4fdc5h
___4fe02h:
		mov     edi, [___243c60h]
		imul    eax, edi, 35eh
		mov     edx, [___196d98h]
		sub     edx, byte 8
		mov     esi, [eax+___1e6ed4h]
		cmp     edx, esi
		jge     near ___4ff30h
		cmp     esi, 148h
		jge     near ___4ff30h
		mov     ebx, [eax+___1e6ed8h]
		cmp     ebx, byte 0fffffff8h
		jle     near ___4ff30h
		mov     edx, [___196d90h]
		add     edx, byte 8
		cmp     edx, ebx
		jle     near ___4ff30h
		imul    edx, edi, 94h
		cmp     dword [edx+___1de598h], byte 0
		jg      near ___4ff30h
		mov     esi, [eax+___1e70aah]
		shl     esi, 8
		mov     eax, [eax+___1e6ed4h]
		shl     ebx, 9
		add     ebx, eax
		sub     ebx, 1008h
		add     ebx, byte 60h
		add     ebx, [___243d80h]
		add     esi, [___243d68h]
		mov     edx, 10h
___4fe92h:
		mov     eax, [___243d80h]
		cmp     ebx, eax
		jg      short ___4fea6h
		add     esi, byte 10h
		add     ebx, 200h
		jmp     short ___4febeh
___4fea6h:
		mov     ecx, 10h
___4feabh:
		mov     al, [esi]
		test    al, al
		je      short ___4feb3h
		mov     [ebx], al
___4feb3h:
		inc     ebx
		inc     esi
		dec     ecx
		jne     short ___4feabh
		add     ebx, 1f0h
___4febeh:
		mov     eax, [___243d80h]
		add     eax, 19000h
		cmp     ebx, eax
		jge     short ___4fecfh
		dec     edx
		jne     short ___4fe92h
___4fecfh:
		mov     edi, [___243c60h]
		imul    eax, edi, 35eh
		mov     edx, [eax+___1e70aeh]

	push 	edx
	push 	ecx
		call    __GET_FRAME_COUNTER
	pop		ecx
	pop		edx

		add     edx, byte 3
		mov     edi, [___243c60h]
		cmp     eax, edx
		jb      short ___4ff30h
		imul    eax, edi, 35eh
		mov     edx, [eax+___1e70aah]
		inc     edx
		mov     [eax+___1e70aah], edx
		cmp     edx, byte 7
		jle     short ___4ff13h
		xor     ecx, ecx
		mov     [eax+___1e70aah], ecx
___4ff13h:
		mov     [___243c60h], edi

	push 	edx
	push 	ecx
		call    __GET_FRAME_COUNTER
	pop		ecx
	pop		edx

		mov     edi, [___243c60h]
		imul    edx, edi, 35eh
		mov     [edx+___1e70aeh], eax
___4ff30h:
		mov     ebx, [___243cf4h]
		inc     edi
		cmp     edi, ebx
		jl      near ___4fd47h
___4ff3fh:
		mov     [___243c60h], edi
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

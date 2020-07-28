cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243cbch
	extern	___243c90h
	extern	___243c8ch
	extern	___243ce8h
	extern	___1e6f7ch
	extern	___184185h
	extern	___184189h
	extern	___184191h
	extern	___243cc0h
	extern	___243cc8h
	extern	___243cc4h
	extern	___243ccch
	extern	___184199h
	extern	___1e6f80h
	extern	___1841a1h
	extern	___1841a9h
	extern	__CHP
	extern	___196d8ch
	extern	___196d94h
	extern	___1e6f88h
	extern	___1e6f84h
	extern	___243d28h
	extern	___196d88h
	extern	___196d90h
	extern	___243d2ch
	extern	___196dcch
	extern	___196dc8h

section .text

__GDECL(race___4ee9ch)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 18h
		mov     esi, [___243cbch]
		mov     edi, [___243c90h]
		mov     ebp, [___243c8ch]
		imul    edx, [___243ce8h], 35eh
		fld     dword [edx+___1e6f7ch]
		fadd    dword [___184185h]
		fmul    qword [___184189h]
		fdiv    qword [___184191h]
		mov     eax, [___243cc0h]
		mov     [___243cc8h], eax
		mov     eax, [___243cc4h]
		mov     [___243ccch], eax
		fld     st0
		fsin    
		fxch    st0, st1
		fcos    
		fxch    st0, st1
		fmul    qword [___184199h]
		fld     dword [edx+___1e6f80h]
		fxch    st0, st1
		fmul    st0, st1
		fld     qword [___1841a1h]
		fxch    st0, st1
		fdiv    st0, st1
		fxch    st0, st3
		fmul    qword [___1841a9h]
		fmulp   st2, st0
		fdivp   st1, st0
		mov     eax, [___243cc8h]
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fistp   dword [___243cc0h]
		mov     ecx, [___243cc0h]
		fistp   dword [___243cc4h]
		cmp     eax, ecx
		jne     short ___4ef60h
		mov     edx, [___243cc4h]
		cmp     edx, [___243ccch]
		je      short ___4ef65h
___4ef60h:
		mov     esi, 5
___4ef65h:
		test    esi, esi
		jle     short ___4ef8ch
		mov     edx, [___243cc0h]
		sub     edx, ebp
		mov     eax, edx
		sar     edx, 1fh
		idiv    esi
		mov     edx, [___243cc4h]
		sub     edx, edi
		add     ebp, eax
		mov     eax, edx
		sar     edx, 1fh
		idiv    esi
		dec     esi
		add     edi, eax
___4ef8ch:
		imul    eax, [___243ce8h], 35eh
		mov     ecx, [___196d8ch]
		mov     edx, [___196d94h]
		fld     dword [eax+___1e6f88h]
		fld     dword [eax+___1e6f84h]
		call    near __CHP
		fxch    st0, st1
		call    near __CHP
		fxch    st0, st1
		fistp   dword [esp+10h]
		fistp   dword [esp+14h]
		mov     ebx, [esp+10h]
		mov     eax, [esp+14h]
		sub     ebx, ecx
		sub     eax, edx
		mov     edx, [___243d28h]
		lea     ecx, [edi+eax*1]
		mov     eax, [___196d88h]
		add     ebx, ebp
		sub     edx, eax
		cmp     ebx, edx
		jle     short ___4efe8h
		mov     ebx, edx
___4efe8h:
		test    ebx, ebx
		jge     short ___4efeeh
		xor     ebx, ebx
___4efeeh:
		mov     eax, [___196d90h]
		mov     edx, [___243d2ch]
		sub     edx, eax
		cmp     ecx, edx
		jle     short ___4f001h
		mov     ecx, edx
___4f001h:
		test    ecx, ecx
		jge     short ___4f007h
		xor     ecx, ecx
___4f007h:
		mov     [___243c8ch], ebp
		mov     [___243c90h], edi
		mov     [___243cbch], esi
		mov     [___196dcch], ecx
		mov     [___196dc8h], ebx
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

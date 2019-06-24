%include "macros.inc"

    extern  __ZBuf2F
    extern  __set_ERANGE
    extern  __HugeValue
    extern  _Scale10V

%include "layout.inc"

section @text

__GDECL(strtod)
		push    ebp
		mov     ebp, esp
		push    ebx
		push    ecx
		push    esi
		push    edi
		sub     esp, byte 28h
		push    edx
		mov     [ebp-14h], eax
___7cde2h:
		mov     bl, [eax]
		xor     edx, edx
		mov     dl, bl
		cmp     edx, byte 20h
		je      ___7cdf7h
		cmp     edx, byte 9
		jl      ___7cdfah
		cmp     edx, byte 0dh
		jg      ___7cdfah
___7cdf7h:
		inc     eax
		jmp     ___7cde2h
___7cdfah:
		xor     edx, edx
		xor     cl, cl
		mov     dl, bl
		lea     ebx, [eax+1]
		cmp     edx, byte 2bh
		je      ___7ce0fh
		cmp     edx, byte 2dh
		jne     ___7ce11h
		mov     cl, 1
___7ce0fh:
		mov     eax, ebx
___7ce11h:
		xor     ebx, ebx
		mov     dh, 30h
		mov     [ebp-1ch], ebx
___7ce18h:
		mov     dl, [eax]
		mov     ch, cl
		movzx   esi, dl
		and     ch, 8
		inc     eax
		cmp     esi, byte 2eh
		jne     ___7ce34h
		movzx   esi, ch
		test    esi, esi
		jne     ___7ce61h
		or      cl, 8
		jmp     ___7ce18h
___7ce34h:
		cmp     esi, byte 30h
		jl      ___7ce61h
		cmp     esi, byte 39h
		jg      ___7ce61h
		movzx   esi, ch
		test    esi, esi
		je      ___7ce48h
		inc     dword [ebp-1ch]
___7ce48h:
		or      dh, dl
		movzx   esi, dh
		cmp     esi, byte 30h
		je      ___7ce5ch
		cmp     ebx, byte 11h
		jge     ___7ce5bh
		mov     [ebx+ebp-38h], dl
___7ce5bh:
		inc     ebx
___7ce5ch:
		or      cl, 4
		jmp     ___7ce18h
___7ce61h:
		mov     dh, cl
		and     dh, 4
		movzx   edi, dh
		xor     esi, esi
		test    edi, edi
		je      ___7cef7h
		and     edx, 0ffh
		cmp     edx, byte 65h
		je      ___7ce87h
		cmp     edx, byte 45h
		jne     ___7cef3h
___7ce87h:
		lea     edx, [eax-1]
		mov     [ebp-18h], edx
		mov     dl, [eax]
		lea     edi, [eax+1]
		and     edx, 0ffh
		cmp     edx, byte 2bh
		je      ___7cea5h
		cmp     edx, byte 2dh
		jne     ___7cea7h
		or      cl, 2
___7cea5h:
		mov     eax, edi
___7cea7h:
		and     cl, 0fbh
___7ceaah:
		mov     dl, [eax]
		and     edx, 0ffh
		cmp     edx, byte 30h
		jl      ___7ced2h
		cmp     edx, byte 39h
		jg      ___7ced2h
		cmp     esi, 3e8h
		jge     ___7cecch
		imul    esi, esi, byte 0ah
		add     edx, esi
		lea     esi, [edx-30h]
___7cecch:
		or      cl, 4
		inc     eax
		jmp     ___7ceaah
___7ced2h:
		mov     dl, cl
		and     dl, 2
		and     edx, 0ffh
		je      ___7cee1h
		neg     esi
___7cee1h:
		mov     dl, cl
		and     dl, 4
		and     edx, 0ffh
		jne     ___7cef4h
		mov     eax, [ebp-18h]
		jmp     ___7cef4h
___7cef3h:
		dec     eax
___7cef4h:
		mov     [ebp-14h], eax
___7cef7h:
		sub     esi, [ebp-1ch]
		cmp     ebx, byte 11h
		jle     ___7cf09h
		sub     ebx, byte 11h
		add     esi, ebx
		mov     ebx, 11h
___7cf09h:
		test    ebx, ebx
		jle     ___7cf1ch
		xor     eax, eax
		mov     al, [ebx+ebp-39h]
		cmp     eax, byte 30h
		jne     ___7cf1ch
		inc     esi
		dec     ebx
		jmp     ___7cf09h
___7cf1ch:
		test    ebx, ebx
		jne     ___7cf2bh
		mov     [ebp-24h], ebx
		mov     [ebp-20h], ebx
		jmp     ___7cfafh
___7cf2bh:
		xor     ah, ah
		lea     edx, [ebp-24h]
		mov     [ebx+ebp-38h], ah
		lea     eax, [ebp-38h]
		call    __ZBuf2F
		lea     eax, [esi+ebx-1]
		cmp     eax, dword 134h
		jle     ___7cf71h
		call    __set_ERANGE
		mov     al, cl
		and     al, 1
		and     eax, 0ffh
		je      ___7cf5fh
		fld     qword [__HugeValue]
		jmp     ___7cfaah
___7cf5fh:
		mov     eax, [__HugeValue]
		mov     [ebp-24h], eax
		mov     eax, [__HugeValue+4]
		mov     [ebp-20h], eax
		jmp     ___7cfafh
___7cf71h:
		cmp     eax, dword 0fffffecch
		jge     ___7cf87h
		xor     ecx, ecx
		call    __set_ERANGE
		mov     [ebp-24h], ecx
		mov     [ebp-20h], ecx
		jmp     ___7cfafh
___7cf87h:
		test    esi, esi
		je      ___7cf9ch
		push    esi
		mov     edx, [ebp-20h]
		push    edx
		mov     ebx, [ebp-24h]
		push    ebx
		call    _Scale10V
		fstp    qword [ebp-24h]
___7cf9ch:
		mov     al, cl
		and     al, 1
		and     eax, 0ffh
		je      ___7cfafh
		fld     qword [ebp-24h]
___7cfaah:
		fchs    
		fstp    qword [ebp-24h]
___7cfafh:
		mov     edx, [ebp-3ch]
		test    edx, edx
		je      ___7cfbbh
		mov     eax, [ebp-14h]
		mov     [edx], eax
___7cfbbh:
		fld     qword [ebp-24h]
		lea     esp, [ebp-10h]
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		pop     ebp
		retn    

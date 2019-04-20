cpu 386

    extern	__ZBuf2F
    extern	__set_ERANGE
    extern	__HugeValue
    extern	_Scale10V
    extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global strtod
strtod:
		push    ebp
		mov     ebp, esp
		push    ebx
		push    ecx
		push    esi
		push    edi
		sub     esp, byte 28h
		push    edx
		mov     [ebp-14h], eax
dr@7cde2h:
		mov     bl, [eax]
		xor     edx, edx
		mov     dl, bl
		cmp     edx, byte 20h
		je      short dr@7cdf7h
		cmp     edx, byte 9
		jl      short dr@7cdfah
		cmp     edx, byte 0dh
		jg      short dr@7cdfah
dr@7cdf7h:
		inc     eax
		jmp     short dr@7cde2h
dr@7cdfah:
		xor     edx, edx
		xor     cl, cl
		mov     dl, bl
;33:0007ce00
		lea     ebx, [eax+1]
		cmp     edx, byte 2bh
		je      short dr@7ce0fh
		cmp     edx, byte 2dh
		jne     short dr@7ce11h
		mov     cl, 1
dr@7ce0fh:
		mov     eax, ebx
dr@7ce11h:
		xor     ebx, ebx
		mov     dh, 30h
		mov     [ebp-1ch], ebx
dr@7ce18h:
		mov     dl, [eax]
		mov     ch, cl
		movzx   esi, dl
		and     ch, 8
		inc     eax
		cmp     esi, byte 2eh
		jne     short dr@7ce34h
		movzx   esi, ch
		test    esi, esi
		jne     short dr@7ce61h
		or      cl, 8
		jmp     short dr@7ce18h
dr@7ce34h:
		cmp     esi, byte 30h
		jl      short dr@7ce61h
		cmp     esi, byte 39h
		jg      short dr@7ce61h
		movzx   esi, ch
		test    esi, esi
		je      short dr@7ce48h
		inc     dword [ebp-1ch]
dr@7ce48h:
		or      dh, dl
		movzx   esi, dh
		cmp     esi, byte 30h
		je      short dr@7ce5ch
		cmp     ebx, byte 11h
		jge     short dr@7ce5bh
		mov     [ebx+ebp*1-38h], dl
dr@7ce5bh:
		inc     ebx
dr@7ce5ch:
		or      cl, 4
		jmp     short dr@7ce18h
dr@7ce61h:
		mov     dh, cl
		and     dh, 4
		movzx   edi, dh
		xor     esi, esi
		test    edi, edi
		je      near dr@7cef7h
		and     edx, 0ffh
		cmp     edx, byte 65h
		je      short dr@7ce87h
		cmp     edx, byte 45h
		jne     near dr@7cef3h
dr@7ce87h:
		lea     edx, [eax-1]
		mov     [ebp-18h], edx
		mov     dl, [eax]
		lea     edi, [eax+1]
		and     edx, 0ffh
		cmp     edx, byte 2bh
		je      short dr@7cea5h
		cmp     edx, byte 2dh
		jne     short dr@7cea7h
		or      cl, 2
dr@7cea5h:
		mov     eax, edi
dr@7cea7h:
		and     cl, 0fbh
dr@7ceaah:
		mov     dl, [eax]
		and     edx, 0ffh
		cmp     edx, byte 30h
		jl      short dr@7ced2h
		cmp     edx, byte 39h
		jg      short dr@7ced2h
		cmp     esi, 3e8h
		jge     short dr@7cecch
		imul    esi, esi, byte 0ah
		add     edx, esi
		lea     esi, [edx-30h]
dr@7cecch:
		or      cl, 4
		inc     eax
		jmp     short dr@7ceaah
dr@7ced2h:
		mov     dl, cl
		and     dl, 2
		and     edx, 0ffh
		je      short dr@7cee1h
		neg     esi
dr@7cee1h:
		mov     dl, cl
		and     dl, 4
		and     edx, 0ffh
		jne     short dr@7cef4h
		mov     eax, [ebp-18h]
		jmp     short dr@7cef4h
dr@7cef3h:
		dec     eax
dr@7cef4h:
		mov     [ebp-14h], eax
dr@7cef7h:
		sub     esi, [ebp-1ch]
		cmp     ebx, byte 11h
		jle     short dr@7cf09h
		sub     ebx, byte 11h
		add     esi, ebx
		mov     ebx, 11h
dr@7cf09h:
		test    ebx, ebx
		jle     short dr@7cf1ch
		xor     eax, eax
		mov     al, [ebx+ebp*1-39h]
		cmp     eax, byte 30h
		jne     short dr@7cf1ch
		inc     esi
		dec     ebx
		jmp     short dr@7cf09h
dr@7cf1ch:
		test    ebx, ebx
		jne     short dr@7cf2bh
		mov     [ebp-24h], ebx
		mov     [ebp-20h], ebx
		jmp     near dr@7cfafh
dr@7cf2bh:
		xor     ah, ah
		lea     edx, [ebp-24h]
		mov     [ebx+ebp*1-38h], ah
		lea     eax, [ebp-38h]
		call    near __ZBuf2F
		lea     eax, [esi+ebx*1-1]
		cmp     eax, dword 134h
		jle     short dr@7cf71h
		call    near __set_ERANGE
		mov     al, cl
		and     al, 1
		and     eax, 0ffh
		je      short dr@7cf5fh
		fld     qword [__HugeValue]
		jmp     short dr@7cfaah
dr@7cf5fh:
		mov     eax, [__HugeValue]
		mov     [ebp-24h], eax
		mov     eax, [__HugeValue+4]
		mov     [ebp-20h], eax
		jmp     short dr@7cfafh
dr@7cf71h:
		cmp     eax, dword 0fffffecch
		jge     short dr@7cf87h
		xor     ecx, ecx
		call    near __set_ERANGE
		mov     [ebp-24h], ecx
		mov     [ebp-20h], ecx
		jmp     short dr@7cfafh
dr@7cf87h:
		test    esi, esi
		je      short dr@7cf9ch
		push    esi
		mov     edx, [ebp-20h]
		push    edx
		mov     ebx, [ebp-24h]
		push    ebx
		call    near _Scale10V
		fstp    qword [ebp-24h]
dr@7cf9ch:
		mov     al, cl
		and     al, 1
		and     eax, 0ffh
		je      short dr@7cfafh
		fld     qword [ebp-24h]
dr@7cfaah:
		fchs    
		fstp    qword [ebp-24h]
dr@7cfafh:
		mov     edx, [ebp-3ch]
		test    edx, edx
		je      short dr@7cfbbh
		mov     eax, [ebp-14h]
		mov     [edx], eax
dr@7cfbbh:
		fld     qword [ebp-24h]
		lea     esp, [ebp-10h]
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		pop     ebp
		retn

cpu 386

    extern	__Nan_Inf
    extern	frexp
    extern	modf
    extern	_Scale
    extern	__Bin2String
    extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __cvt
__cvt:
		push    ebp
		mov     ebp, esp
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 2ch
		mov     ebx, [ebp+10h]
		mov     ecx, [ebp+14h]
		mov     esi, [ebp+18h]
		mov     edx, [ebp+20h]
		push    edx
		mov     edi, [ebp+0ch]
		push    edi
		mov     eax, [ebp+8]
		mov     dword [esi], 0
		push    eax
		mov     dword [ecx], 0
		call    near __Nan_Inf
		test    eax, eax
		je      short dr@7e045h
		mov     eax, edx
		jmp     near dr@7e1dah
dr@7e045h:
		xor     edx, edx
		xor     edi, edi
		mov     [ebp-2ch], dx
		mov     [ebp-2ah], di
		mov     [ebp-28h], dx
		mov     [ebp-26h], dx
		mov     edx, [ebp+0ch]
		mov     edi, [ebp+8]
		test    edx, 7fffffffh
		jne     short dr@7e06fh
		test    edi, edi
		je      near dr@7e197h
dr@7e06fh:
		fldz    
		fcomp   qword [ebp+8]
		fnstsw  ax
		sahf    
		jbe     short dr@7e087h
		fld     qword [ebp+8]
		fchs    
		mov     dword [esi], 0ffffffffh
		fstp    qword [ebp+8]
dr@7e087h:
		push    ecx
		mov     eax, [ebp+0ch]
		push    eax
		mov     edx, [ebp+8]
		push    edx
		call    near frexp
		mov     edx, [ecx]
		fstp    st0
		test    edx, edx
		jge     short dr@7e09fh
		neg     edx
dr@7e09fh:
		mov     eax, edx
		shl     edx, 2
		sub     edx, eax
		add     edx, byte 5
		mov     edi, 0ah
		mov     eax, edx
		sar     edx, 1fh
		idiv    edi
		mov     edi, [ecx]
		mov     edx, eax
		test    edi, edi
		jge     short dr@7e0bfh
		neg     edx
dr@7e0bfh:
		mov     eax, [ebp+1ch]
		mov     [ecx], edx
		cmp     eax, byte 46h
		jne     short dr@7e0cbh
		add     ebx, edx
dr@7e0cbh:
		test    ebx, ebx
		jl      near dr@7e165h
		cmp     ebx, byte 10h
		jle     short dr@7e0ddh
		mov     ebx, 10h
dr@7e0ddh:
		xor     ah, ah
		mov     [ebp-18h], ah
		lea     eax, [ebp-24h]
		push    eax
		mov     edi, [ebp+0ch]
		push    edi
		mov     eax, [ebp+8]
		push    eax
		call    near modf
		fldz    
		fcompp  
		fnstsw  ax
		sahf    
		jne     short dr@7e107h
		cmp     ebx, edx
		jle     short dr@7e107h
;33:0007e100
		mov     al, 1
		mov     ebx, edx
		mov     [ebp-18h], al
dr@7e107h:
		lea     eax, [ebp-2ch]
		push    eax
		push    ebx
		mov     edi, [ebp+0ch]
		push    edi
		mov     eax, [ebp+8]
		push    eax
		mov     eax, [ecx]
		call    near _Scale
		mov     edi, eax
		test    eax, eax
		je      short dr@7e165h
		add     [ecx], eax
		cmp     dword [ebp+1ch], byte 46h
		je      short dr@7e12fh
		cmp     byte [ebp-18h], 0
		je      short dr@7e131h
dr@7e12fh:
		add     ebx, edi
dr@7e131h:
		cmp     ebx, byte 1
		jge     short dr@7e13dh
		mov     ebx, 1
		jmp     short dr@7e147h
dr@7e13dh:
		cmp     ebx, byte 10h
		jle     short dr@7e147h
		mov     ebx, 10h
dr@7e147h:
		lea     eax, [ebp-2ch]
		push    eax
		push    ebx
		mov     edi, [ebp+0ch]
		push    edi
		mov     eax, [ebp+8]
		push    eax
		mov     eax, [ecx]
		call    near _Scale
		test    eax, eax
		jle     short dr@7e165h
		mov     edi, [ecx]
		inc     edi
		inc     ebx
		mov     [ecx], edi
dr@7e165h:
		mov     eax, [ebp-2ch]
		sar     eax, 10h
		mov     [ebp-1ch], eax
		mov     eax, [ebp-2eh]
		mov     edi, [ebp-1ch]
		sar     eax, 10h
		or      eax, edi
		mov     edi, [ebp-2ah]
		sar     edi, 10h
		or      eax, edi
		mov     edi, [ebp-28h]
		sar     edi, 10h
		or      eax, edi
		jne     short dr@7e197h
		mov     [esi], eax
		mov     [ecx], eax
		cmp     dword [ebp+1ch], byte 46h
		jne     short dr@7e197h
		sub     ebx, edx
dr@7e197h:
		cmp     ebx, byte 1
		jge     short dr@7e1a3h
		mov     ebx, 1
		jmp     short dr@7e1adh
dr@7e1a3h:
		cmp     ebx, byte 11h
		jle     short dr@7e1adh
		mov     ebx, 11h
dr@7e1adh:
		lea     edx, [ebp-40h]
		lea     eax, [ebp-2ch]
		lea     esi, [ebp-40h]
		mov     edi, [ebp+20h]
		call    near __Bin2String
		push    edi
dr@7e1bfh:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      short dr@7e1d7h
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     short dr@7e1bfh
dr@7e1d7h:
		pop     edi
		mov     eax, edi
dr@7e1dah:
		lea     esp, [ebp-14h]
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		pop     ebp
		ret     1ch
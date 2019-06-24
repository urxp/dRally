%include "macros.inc"

    extern  memset__clib3r
    extern  __Nan_Inf
    extern  IF@LOG10
    extern  floor
    extern  __CHP
    extern  _Scale10V
    extern  __cvt

%include "layout.inc"

section @text

__GDECL(_SetMaxPrec)
		mov     [_MaxPrec], eax
		retn    
DoEFormat:
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     edi, eax
		mov     esi, edx
		mov     [esp], ecx
		mov     eax, ebx
		test    edx, edx
		jge     ___7ca3ch
		mov     cl, 2dh
		neg     esi
		jmp     ___7ca3eh
___7ca3ch:
		mov     cl, 2bh
___7ca3eh:
		mov     ebx, 64h
		mov     edx, 3
		cmp     esi, ebx
		jge     ___7ca61h
		mov     ebx, 0ah
		mov     edx, 2
		cmp     esi, ebx
		jge     ___7ca61h
		mov     edx, 1
		mov     ebx, edx
___7ca61h:
		test    eax, eax
		jne     ___7ca71h
		mov     eax, 2
		cmp     edx, byte 3
		jne     ___7ca71h
		mov     eax, edx
___7ca71h:
		lea     ebp, [eax+1]
		cmp     ebp, [esp]
		jg      ___7cabdh
		cmp     edx, eax
		jg      ___7cabah
		mov     [edi], cl
___7ca7fh:
		inc     edi
		cmp     eax, edx
		jle     ___7ca8ah
		dec     eax
		mov     byte [edi], 30h
		jmp     ___7ca7fh
___7ca8ah:
		mov     edx, esi
		mov     eax, esi
		sar     edx, 1fh
		idiv    ebx
		mov     edx, esi
		add     eax, byte 30h
		sar     edx, 1fh
		mov     [edi], al
		mov     eax, esi
		idiv    ebx
		mov     esi, edx
		mov     eax, ebx
		mov     edx, ebx
		mov     ebx, 0ah
		sar     edx, 1fh
		idiv    ebx
		inc     edi
		mov     ebx, eax
		test    eax, eax
		jne     ___7ca8ah
		jmp     ___7cabdh
___7cabah:
		lea     ebp, [edx+1]
___7cabdh:
		mov     eax, ebp
		add     esp, byte 4
		pop     ebp
		pop     edi
___7cac4h:
		pop     esi
		retn    
DoFFormat:
		push    esi
		mov     esi, ebx
		test    ecx, ecx
		jne     ___7cadbh
		test    ebx, ebx
		jg      ___7cadbh
		mov     byte [eax], 30h
		inc     eax
		mov     byte [eax], 2eh
		inc     eax
		pop     esi
		retn    
___7cadbh:
		test    esi, esi
		jle     ___7caech
		mov     bl, [edx]
		test    bl, bl
		je      ___7caech
		inc     edx
		dec     esi
		mov     [eax], bl
		inc     eax
		jmp     ___7cadbh
___7caech:
		test    esi, esi
		jle     ___7caf9h
___7caf0h:
		dec     esi
		mov     byte [eax], 30h
		inc     eax
		test    esi, esi
		jg      ___7caf0h
___7caf9h:
		mov     byte [eax], 2eh
		inc     eax
		test    ecx, ecx
		jle     ___7cb0dh
___7cb01h:
		test    esi, esi
		je      ___7cb0dh
		inc     esi
		mov     byte [eax], 30h
		inc     eax
		dec     ecx
		jne     ___7cb01h
___7cb0dh:
		test    ecx, ecx
		jle     ___7cac4h
___7cb11h:
		mov     bh, [edx]
		test    bh, bh
		je      ___7cb1eh
		inc     edx
		mov     [eax], bh
		inc     eax
		dec     ecx
		jne     ___7cb11h
___7cb1eh:
		test    ecx, ecx
		je      ___7cac4h
		dec     ecx
		mov     byte [eax], 30h
		inc     eax
		jmp     ___7cb1eh
AdjField:
		push    ebp
		mov     ebp, esp
		push    ecx
		push    esi
		push    edi
		sub     esp, byte 8
		mov     edi, eax
		mov     esi, edx
		cmp     edx, ebx
		je      ___7cb92h
		mov     [ebp-14h], edi
		mov     al, [eax+1]
		lea     edx, [ebx+edi]
		mov     [ebp-10h], al
		lea     eax, [esi+edi]
___7cb49h:
		dec     eax
		dec     edx
		mov     cl, [eax]
		dec     esi
		mov     [edx], cl
		mov     ecx, [ebp-14h]
		dec     ebx
		cmp     eax, ecx
		jne     ___7cb49h
		xor     eax, ecx
		mov     al, [edi]
		cmp     eax, byte 2eh
		jne     ___7cb68h
		dec     ebx
		mov     byte [edi+ebx], 30h
		jmp     ___7cb86h
___7cb68h:
		cmp     eax, byte 2bh
		je      ___7cb72h
		cmp     eax, byte 2dh
		jne     ___7cb86h
___7cb72h:
		xor     eax, eax
		mov     al, [ebp-10h]
		cmp     eax, byte 2eh
		jne     ___7cb86h
		mov     byte [edi+ebx], 30h
		dec     ebx
		mov     dl, [edi]
		mov     [edi+ebx], dl
___7cb86h:
		mov     edx, 20h
		mov     eax, edi
		call    memset__clib3r
___7cb92h:
		lea     esp, [ebp-0ch]
		pop     edi
		pop     esi
		pop     ecx
		pop     ebp
		retn    
__GDECL(_FtoS)
		push    ebp
		mov     ebp, esp
		push    esi
		push    edi
		sub     esp, byte 38h
		mov     edi, [ebp+8]
		mov     [ebp-0ch], eax
		mov     ch, cl
		lea     eax, [ebp-40h]
		push    eax
		mov     esi, [edx+4]
		push    esi
		mov     eax, [edx]
		push    eax
		call    __Nan_Inf
		test    eax, eax
		je      ___7cbdah
		mov     eax, [ebp-0ch]
		xor     esi, esi
		jmp     ___7cbcdh
___7cbc5h:
		cmp     esi, edi
		jge     ___7cbcbh
		mov     [eax], dh
___7cbcbh:
		inc     eax
		inc     esi
___7cbcdh:
		mov     dh, [esi+ebp-40h]
		test    dh, dh
		jne     ___7cbc5h
		jmp     ___7cdb7h
___7cbdah:
		mov     cl, [ebp+18h]
		mov     al, cl
		cmp     eax, byte 47h
		jne     ___7cc4fh
		fld     qword [edx]
		fabs    
		fstp    qword [ebp-2ch]
		mov     esi, [ebp-28h]
		mov     eax, [ebp-2ch]
		test    esi, 7fffffffh
		jne     ___7cc01h
		test    eax, eax
		je      ___7cc48h
___7cc01h:
		fld     qword [ebp-2ch]
		call    IF@LOG10
		fstp    qword [ebp-2ch]
		mov     eax, [ebp-28h]
		push    eax
		mov     esi, [ebp-2ch]
		push    esi
		call    floor
		call    __CHP
		fistp   dword [ebp-14h]
		mov     eax, [ebp-14h]
		cmp     eax, byte 0fffffffch
		jl      ___7cc2dh
		cmp     ebx, eax
		jg      ___7cc31h
___7cc2dh:
		mov     cl, 45h
		jmp     ___7cc4fh
___7cc31h:
		fldz    
		fcomp   qword [ebp-2ch]
		fnstsw  ax
		sahf    
		ja      ___7cc3eh
		inc     dword [ebp-14h]
___7cc3eh:
		mov     esi, [ebp-14h]
		sub     ebx, esi
		test    esi, esi
		jge     ___7cc48h
		dec     ebx
___7cc48h:
		xor     esi, esi
		mov     cl, 46h
		mov     [ebp+0ch], esi
___7cc4fh:
		xor     eax, eax
		mov     al, cl
		cmp     eax, byte 45h
		jne     ___7cc7eh
		mov     eax, ebx
		mov     esi, [ebp+0ch]
		neg     eax
		cmp     eax, esi
		jge     ___7cc6ah
		lea     eax, [ebx+2]
		cmp     eax, esi
		jg      ___7cc7eh
___7cc6ah:
		mov     edx, 2ah
		mov     eax, [ebp-0ch]
		mov     ebx, edi
		call    memset__clib3r
		jmp     ___7cdcbh
___7cc7eh:
		xor     eax, eax
		mov     al, [ebp+18h]
		mov     esi, ebx
		cmp     eax, byte 45h
		jne     ___7cc9bh
		mov     eax, [ebp+0ch]
		test    eax, eax
		jle     ___7cc96h
		lea     esi, [ebx+1]
		jmp     ___7cc9bh
___7cc96h:
		jge     ___7cc9bh
		lea     esi, [eax+ebx]
___7cc9bh:
		mov     eax, [edx]
		mov     [ebp-24h], eax
		mov     eax, [edx+4]
		mov     ebx, [ebp-24h]
		mov     [ebp-20h], eax
		test    eax, 7fffffffh
		jne     ___7ccb4h
		test    ebx, ebx
		je      ___7ccd5h
___7ccb4h:
		xor     eax, eax
		mov     al, cl
		cmp     eax, byte 45h
		je      ___7ccd5h
		mov     eax, [ebp+0ch]
		test    eax, eax
		je      ___7ccd5h
		push    eax
		mov     ebx, [ebp-20h]
		push    ebx
		mov     eax, [ebp-24h]
		push    eax
		call    _Scale10V
		fstp    qword [ebp-24h]
___7ccd5h:
		lea     eax, [ebp-40h]
		push    eax
		xor     eax, eax
		mov     al, cl
		push    eax
		lea     eax, [ebp-18h]
		push    eax
		lea     eax, [ebp-1ch]
		push    eax
		push    esi
		mov     edx, [ebp-20h]
		push    edx
		mov     ebx, [ebp-24h]
		push    ebx
		call    __cvt
		mov     eax, [ebp-0ch]
		mov     edx, [ebp-18h]
		mov     [ebp-10h], eax
		inc     eax
		test    edx, edx
		je      ___7cd0dh
		mov     edx, [ebp-0ch]
		mov     [ebp-10h], eax
		mov     byte [edx], 2dh
		jmp     ___7cd1ah
___7cd0dh:
		test    ch, ch
		je      ___7cd1ah
		mov     edx, [ebp-0ch]
		mov     [ebp-10h], eax
		mov     byte [edx], 2bh
___7cd1ah:
		xor     edx, edx
		mov     dl, cl
		lea     eax, [edi+1]
		cmp     edx, byte 45h
		jne     ___7cd8ch
		mov     edx, [ebp+0ch]
		mov     ecx, esi
		sub     ecx, edx
		cmp     edi, ecx
		jl      ___7cdb5h
		mov     eax, [ebp-10h]
		mov     ebx, edx
		lea     edx, [ebp-40h]
		call    DoFFormat
		mov     ebx, [ebp-0ch]
		mov     dl, [ebp+14h]
		mov     esi, eax
		mov     [ebp-10h], eax
		sub     esi, ebx
		test    dl, dl
		je      ___7cd5eh
		cmp     esi, edi
		jge     ___7cd5eh
		mov     [eax], dl
		inc     eax
		inc     esi
		mov     [ebp-10h], eax
___7cd5eh:
		mov     ecx, [ebp-20h]
		mov     eax, [ebp-24h]
		test    ecx, 7fffffffh
		jne     ___7cd70h
		test    eax, eax
		je      ___7cd76h
___7cd70h:
		mov     eax, [ebp+0ch]
		sub     [ebp-1ch], eax
___7cd76h:
		mov     ebx, [ebp+10h]
		mov     edx, [ebp-1ch]
		mov     ecx, edi
		mov     eax, [ebp-10h]
		sub     ecx, esi
		call    DoEFormat
		add     esi, eax
		jmp     ___7cdb7h
___7cd8ch:
		mov     ebx, [ebp-10h]
		mov     edx, [ebp-1ch]
		mov     ecx, [ebp-0ch]
		inc     edx
		sub     ebx, ecx
		add     edx, esi
		add     edx, ebx
		cmp     edi, edx
		jl      ___7cdb5h
		mov     ebx, [ebp-1ch]
		lea     edx, [ebp-40h]
		mov     eax, [ebp-10h]
		mov     ecx, esi
		mov     esi, [ebp-0ch]
		call    DoFFormat
		sub     eax, esi
___7cdb5h:
		mov     esi, eax
___7cdb7h:
		cmp     esi, edi
		jg      ___7cc6ah
		mov     eax, [ebp-0ch]
		mov     ebx, edi
		mov     edx, esi
		call    AdjField
___7cdcbh:
		lea     esp, [ebp-8]
		pop     edi
		pop     esi
		pop     ebp
		ret     14h


section @data

_MaxPrec:
db	11h,0,0,0

cpu 386

    extern  memset
    extern	__Nan_Inf
    extern	IF@DLOG10
    extern	floor
    extern	__CHP
    extern	_Scale10V
    extern	__cvt
    extern	__8087

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _SetMaxPrec
_SetMaxPrec:
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
		jge     short dr@7ca3ch
		mov     cl, 2dh
		neg     esi
		jmp     short dr@7ca3eh
dr@7ca3ch:
		mov     cl, 2bh
dr@7ca3eh:
		mov     ebx, 64h
		mov     edx, 3
		cmp     esi, ebx
		jge     short dr@7ca61h
		mov     ebx, 0ah
		mov     edx, 2
		cmp     esi, ebx
		jge     short dr@7ca61h
		mov     edx, 1
		mov     ebx, edx
dr@7ca61h:
		test    eax, eax
		jne     short dr@7ca71h
		mov     eax, 2
		cmp     edx, byte 3
		jne     short dr@7ca71h
		mov     eax, edx
dr@7ca71h:
		lea     ebp, [eax+1]
		cmp     ebp, [esp]
		jg      short dr@7cabdh
		cmp     edx, eax
		jg      short dr@7cabah
		mov     [edi], cl
dr@7ca7fh:
		inc     edi
;33:0007ca80
		cmp     eax, edx
		jle     short dr@7ca8ah
		dec     eax
		mov     byte [edi], 30h
		jmp     short dr@7ca7fh
dr@7ca8ah:
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
		jne     short dr@7ca8ah
		jmp     short dr@7cabdh
dr@7cabah:
		lea     ebp, [edx+1]
dr@7cabdh:
		mov     eax, ebp
		add     esp, byte 4
		pop     ebp
		pop     edi
dr@7cac4h:
		pop     esi
		retn    
DoFFormat:
		push    esi
		mov     esi, ebx
		test    ecx, ecx
		jne     short dr@7cadbh
		test    ebx, ebx
		jg      short dr@7cadbh
		mov     byte [eax], 30h
		inc     eax
		mov     byte [eax], 2eh
		inc     eax
		pop     esi
		retn    
dr@7cadbh:
		test    esi, esi
		jle     short dr@7caech
		mov     bl, [edx]
		test    bl, bl
		je      short dr@7caech
		inc     edx
		dec     esi
		mov     [eax], bl
		inc     eax
		jmp     short dr@7cadbh
dr@7caech:
		test    esi, esi
		jle     short dr@7caf9h
dr@7caf0h:
		dec     esi
		mov     byte [eax], 30h
		inc     eax
		test    esi, esi
		jg      short dr@7caf0h
dr@7caf9h:
		mov     byte [eax], 2eh
		inc     eax
		test    ecx, ecx
		jle     short dr@7cb0dh
dr@7cb01h:
		test    esi, esi
		je      short dr@7cb0dh
		inc     esi
		mov     byte [eax], 30h
		inc     eax
		dec     ecx
		jne     short dr@7cb01h
dr@7cb0dh:
		test    ecx, ecx
		jle     short dr@7cac4h
dr@7cb11h:
		mov     bh, [edx]
		test    bh, bh
		je      short dr@7cb1eh
		inc     edx
		mov     [eax], bh
		inc     eax
		dec     ecx
		jne     short dr@7cb11h
dr@7cb1eh:
		test    ecx, ecx
		je      short dr@7cac4h
		dec     ecx
		mov     byte [eax], 30h
		inc     eax
		jmp     short dr@7cb1eh
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
		je      short dr@7cb92h
		mov     [ebp-14h], edi
		mov     al, [eax+1]
		lea     edx, [ebx+edi*1]
		mov     [ebp-10h], al
		lea     eax, [esi+edi*1]
dr@7cb49h:
		dec     eax
		dec     edx
		mov     cl, [eax]
		dec     esi
		mov     [edx], cl
		mov     ecx, [ebp-14h]
		dec     ebx
		cmp     eax, ecx
		jne     short dr@7cb49h
		xor     eax, ecx
		mov     al, [edi]
		cmp     eax, byte 2eh
		jne     short dr@7cb68h
		dec     ebx
		mov     byte [edi+ebx*1], 30h
		jmp     short dr@7cb86h
dr@7cb68h:
		cmp     eax, byte 2bh
		je      short dr@7cb72h
		cmp     eax, byte 2dh
		jne     short dr@7cb86h
dr@7cb72h:
		xor     eax, eax
		mov     al, [ebp-10h]
		cmp     eax, byte 2eh
		jne     short dr@7cb86h
		mov     byte [edi+ebx*1], 30h
;33:0007cb80
		dec     ebx
		mov     dl, [edi]
		mov     [edi+ebx*1], dl
dr@7cb86h:
		mov     edx, 20h
		mov     eax, edi
		call    near memset
dr@7cb92h:
		lea     esp, [ebp-0ch]
		pop     edi
		pop     esi
		pop     ecx
		pop     ebp
		retn    
global _FtoS
_FtoS:
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
		call    near __Nan_Inf
		test    eax, eax
		je      short dr@7cbdah
		mov     eax, [ebp-0ch]
		xor     esi, esi
		jmp     short dr@7cbcdh
dr@7cbc5h:
		cmp     esi, edi
		jge     short dr@7cbcbh
		mov     [eax], dh
dr@7cbcbh:
		inc     eax
		inc     esi
dr@7cbcdh:
		mov     dh, [esi+ebp*1-40h]
		test    dh, dh
		jne     short dr@7cbc5h
		jmp     near dr@7cdb7h
dr@7cbdah:
		mov     cl, [ebp+18h]
		mov     al, cl
		cmp     eax, byte 47h
		jne     near dr@7cc4fh
		fld     qword [edx]
		fabs    
		fstp    qword [ebp-2ch]
		mov     esi, [ebp-28h]
		mov     eax, [ebp-2ch]
		test    esi, 7fffffffh
		jne     short dr@7cc01h
		test    eax, eax
		je      short dr@7cc48h
dr@7cc01h:
		fld     qword [ebp-2ch]
		call    near IF@DLOG10
		fstp    qword [ebp-2ch]
		mov     eax, [ebp-28h]
		push    eax
		mov     esi, [ebp-2ch]
		push    esi
		call    near floor
		call    near __CHP
		fistp   dword [ebp-14h]
		mov     eax, [ebp-14h]
		cmp     eax, byte 0fffffffch
		jl      short dr@7cc2dh
		cmp     ebx, eax
		jg      short dr@7cc31h
dr@7cc2dh:
		mov     cl, 45h
		jmp     short dr@7cc4fh
dr@7cc31h:
		fldz    
		fcomp   qword [ebp-2ch]
		fnstsw  ax
		sahf    
		ja      short dr@7cc3eh
		inc     dword [ebp-14h]
dr@7cc3eh:
		mov     esi, [ebp-14h]
		sub     ebx, esi
		test    esi, esi
		jge     short dr@7cc48h
		dec     ebx
dr@7cc48h:
		xor     esi, esi
		mov     cl, 46h
		mov     [ebp+0ch], esi
dr@7cc4fh:
		xor     eax, eax
		mov     al, cl
		cmp     eax, byte 45h
		jne     short dr@7cc7eh
		mov     eax, ebx
		mov     esi, [ebp+0ch]
		neg     eax
		cmp     eax, esi
		jge     short dr@7cc6ah
		lea     eax, [ebx+2]
		cmp     eax, esi
		jg      short dr@7cc7eh
dr@7cc6ah:
		mov     edx, 2ah
		mov     eax, [ebp-0ch]
		mov     ebx, edi
		call    near memset
		jmp     near dr@7cdcbh
dr@7cc7eh:
		xor     eax, eax
;33:0007cc80
		mov     al, [ebp+18h]
		mov     esi, ebx
		cmp     eax, byte 45h
		jne     short dr@7cc9bh
		mov     eax, [ebp+0ch]
		test    eax, eax
		jle     short dr@7cc96h
		lea     esi, [ebx+1]
		jmp     short dr@7cc9bh
dr@7cc96h:
		jge     short dr@7cc9bh
		lea     esi, [eax+ebx*1]
dr@7cc9bh:
		mov     eax, [edx]
		mov     [ebp-24h], eax
		mov     eax, [edx+4]
		mov     ebx, [ebp-24h]
		mov     [ebp-20h], eax
		test    eax, 7fffffffh
		jne     short dr@7ccb4h
		test    ebx, ebx
		je      short dr@7ccd5h
dr@7ccb4h:
		xor     eax, eax
		mov     al, cl
		cmp     eax, byte 45h
		je      short dr@7ccd5h
		mov     eax, [ebp+0ch]
		test    eax, eax
		je      short dr@7ccd5h
		push    eax
		mov     ebx, [ebp-20h]
		push    ebx
		mov     eax, [ebp-24h]
		push    eax
		call    near _Scale10V
		fstp    qword [ebp-24h]
dr@7ccd5h:
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
		call    near __cvt
		mov     eax, [ebp-0ch]
		mov     edx, [ebp-18h]
		mov     [ebp-10h], eax
		inc     eax
		test    edx, edx
;33:0007cd00
		je      short dr@7cd0dh
		mov     edx, [ebp-0ch]
		mov     [ebp-10h], eax
		mov     byte [edx], 2dh
		jmp     short dr@7cd1ah
dr@7cd0dh:
		test    ch, ch
		je      short dr@7cd1ah
		mov     edx, [ebp-0ch]
		mov     [ebp-10h], eax
		mov     byte [edx], 2bh
dr@7cd1ah:
		xor     edx, edx
		mov     dl, cl
		lea     eax, [edi+1]
		cmp     edx, byte 45h
		jne     short dr@7cd8ch
		mov     edx, [ebp+0ch]
		mov     ecx, esi
		sub     ecx, edx
		cmp     edi, ecx
		jl      near dr@7cdb5h
		mov     eax, [ebp-10h]
		mov     ebx, edx
		lea     edx, [ebp-40h]
		call    near DoFFormat
		mov     ebx, [ebp-0ch]
		mov     dl, [ebp+14h]
		mov     esi, eax
		mov     [ebp-10h], eax
		sub     esi, ebx
		test    dl, dl
		je      short dr@7cd5eh
		cmp     esi, edi
		jge     short dr@7cd5eh
		mov     [eax], dl
		inc     eax
		inc     esi
		mov     [ebp-10h], eax
dr@7cd5eh:
		mov     ecx, [ebp-20h]
		mov     eax, [ebp-24h]
		test    ecx, 7fffffffh
		jne     short dr@7cd70h
		test    eax, eax
		je      short dr@7cd76h
dr@7cd70h:
		mov     eax, [ebp+0ch]
		sub     [ebp-1ch], eax
dr@7cd76h:
		mov     ebx, [ebp+10h]
		mov     edx, [ebp-1ch]
		mov     ecx, edi
		mov     eax, [ebp-10h]
		sub     ecx, esi
		call    near DoEFormat
		add     esi, eax
		jmp     short dr@7cdb7h
dr@7cd8ch:
		mov     ebx, [ebp-10h]
		mov     edx, [ebp-1ch]
		mov     ecx, [ebp-0ch]
		inc     edx
		sub     ebx, ecx
		add     edx, esi
		add     edx, ebx
		cmp     edi, edx
		jl      short dr@7cdb5h
		mov     ebx, [ebp-1ch]
		lea     edx, [ebp-40h]
		mov     eax, [ebp-10h]
		mov     ecx, esi
		mov     esi, [ebp-0ch]
		call    near DoFFormat
		sub     eax, esi
dr@7cdb5h:
		mov     esi, eax
dr@7cdb7h:
		cmp     esi, edi
		jg      near dr@7cc6ah
		mov     eax, [ebp-0ch]
		mov     ebx, edi
		mov     edx, esi
		call    near AdjField
dr@7cdcbh:
		lea     esp, [ebp-8]
		pop     edi
		pop     esi
		pop     ebp
		ret     14h


SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
_MaxPrec:
    db	11h,0,0,0
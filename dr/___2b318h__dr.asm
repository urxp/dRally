%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(___12940h)
    extern  __CEXT_F(___11564h)
    extern  __CEXT_V(MyID)
    extern  __CEXT_V(Roster)
    extern  __CEXT_V(___1a0fb8h)
    extern  __CEXT_F(___24010h)
    extern  __CHP
    extern  __CEXT_V(___196ad8h)
    extern  __CEXT_V(bgcop_pal_p)
    extern  __CEXT_V(___1821e2h)
    extern  __CEXT_V(Pal8to24_0)
    extern  __CEXT_V(Pal8to24_1)
    extern  __CEXT_V(___1a1edch)

%include "layout.inc"

section @text

;; 2b318h
__GDECL(__CEXT_F(___2b318h))
		push    38h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    ebp
		mov     ebp, esp
		sub     esp, byte 14h
		and     esp, byte 0fffffff8h
		call    __CEXT_F(___12940h)
		mov     edx, [__CEXT_V(MyID)]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+__CEXT_V(Roster)+2ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [__CEXT_V(___1a0fb8h)]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+0ch], eax
		fild    word [esp+0ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+10h], eax
		fild    word [esp+10h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+14h], eax
		fild    word [esp+14h]
		sub     esp, byte 4
		fstp    dword [esp]
		call    __CEXT_F(___11564h)
		mov     edx, [__CEXT_V(MyID)]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+__CEXT_V(Roster)+2ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [__CEXT_V(___1a0fb8h)]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+0ch], eax
		fild    word [esp+0ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+10h], eax
		fild    word [esp+10h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+14h], eax
		fild    word [esp+14h]
		sub     esp, byte 4
		mov     ecx, 900h
		fstp    dword [esp]
		xor     edx, edx
		call    __CEXT_F(___24010h)
		mov     [esp+10h], edx
		mov     esi, 640000h
___2b416h:
		mov     eax, [__CEXT_V(___196ad8h)]
		mov     edx, [__CEXT_V(bgcop_pal_p)]
		lea     eax, [eax+eax*2]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx]
		mov     [esp+0ch], eax
		fild    word [esp+0ch]
		fmul    qword [__CEXT_V(___1821e2h)]
		fild    dword [esp+10h]
		fstp    qword [esp]
		fmul    qword [esp]
		call    __CHP
		fistp   dword [esp+8]
		mov     edx, [esp+8]
		mov     ebx, esi
		shl     edx, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [__CEXT_V(___196ad8h)]
		mov     [ecx+__CEXT_V(Pal8to24_1)], eax
		mov     eax, [__CEXT_V(bgcop_pal_p)]
		lea     edx, [edx+edx*2]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+1]
		mov     [esp+0ch], eax
		fild    word [esp+0ch]
		fmul    qword [__CEXT_V(___1821e2h)]
		fmul    qword [esp]
		call    __CHP
		fistp   dword [esp+8]
		mov     edx, [esp+8]
		mov     ebx, esi
		shl     edx, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     [ecx+__CEXT_V(Pal8to24_1)+4], eax
		mov     eax, [__CEXT_V(___196ad8h)]
		mov     edx, [__CEXT_V(bgcop_pal_p)]
		lea     eax, [eax+eax*2]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+0ch], eax
		fild    word [esp+0ch]
		fmul    qword [__CEXT_V(___1821e2h)]
		fmul    qword [esp]
		call    __CHP
		fistp   dword [esp+8]
		mov     edx, [esp+8]
		mov     ebx, esi
		shl     edx, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [esp+10h]
		add     ecx, byte 0ch
		inc     ebx
		mov     [ecx+__CEXT_V(Pal8to24_1)-4], eax
		mov     [esp+10h], ebx
		cmp     ebx, byte 20h
		jl      ___2b416h
		mov     ecx, 0c0h
		mov     esi, 640000h
___2b516h:
		mov     edx, [__CEXT_V(___1a1edch)]
		mov     eax, [ecx+__CEXT_V(Pal8to24_0)]
		shl     edx, 10h
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		mov     edx, eax
		mov     ebx, esi
		shl     edx, 10h
		mov     [esp+8], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [__CEXT_V(___1a1edch)]
		mov     [ecx+__CEXT_V(Pal8to24_1)], eax
		shl     edx, 10h
		mov     eax, [ecx+__CEXT_V(Pal8to24_0)+4]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		mov     edx, eax
		mov     ebx, esi
		shl     edx, 10h
		mov     [esp+8], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     edx, [__CEXT_V(___1a1edch)]
		mov     [ecx+__CEXT_V(Pal8to24_1)+4], eax
		shl     edx, 10h
		mov     eax, [ecx+__CEXT_V(Pal8to24_0)+8]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		add     ecx, byte 0ch
		mov     edx, eax
		mov     ebx, esi
		shl     edx, 10h
		mov     [esp+8], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     [ecx+__CEXT_V(Pal8to24_1)-4], eax
		cmp     ecx, 180h
		jne     ___2b516h
		mov     esp, ebp
		pop     ebp
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

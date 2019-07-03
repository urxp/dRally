%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(__STOSB__clib3r)
    extern  __CEXT_V(___196a84h)
    extern  __CEXT_V(___196a98h)
    extern  __CEXT_V(___196a9ch)
    extern  __CEXT_V(___196aa0h)
    extern  __CEXT_V(___185a50h)
    extern  __CEXT_V(___1a1ef8h)
    extern  __CEXT_F(___2ec68h)
    extern  __CEXT_V(___199f54h)
    extern  __CEXT_V(___185a30h)
    extern  __CEXT_V(___1a0240h)
    extern  __CEXT_V(___1a0244h)
    extern  __CEXT_V(___1a0248h)
    extern  __CEXT_V(___1a023ch)
    extern  __CEXT_V(___181d17h)
    extern  __CEXT_V(___181d0fh)
    extern  __CEXT_V(___181d1bh)
    extern  __CEXT_V(___181d1fh)
    extern  __CEXT_V(___181d0bh)
    extern  __CHP
    extern  __CEXT_V(___1a0224h)
    extern  __CEXT_V(___1a01e0h)
    extern  __CEXT_V(___1a0230h)
    extern  __CEXT_V(___1a0234h)
    extern  __CEXT_V(___1a0238h)
    extern  __CEXT_F(rand__clib3r)
    extern  __CEXT_V(___1a01fch)
    extern  __CEXT_V(___18e938h)
    extern  __CEXT_V(___1a01f0h)
    extern  __CEXT_V(___18e93ch)
    extern  __CEXT_V(___1a01f4h)
    extern  __CEXT_V(___18e940h)
    extern  __CEXT_V(___1a01f8h)
    extern  __CEXT_V(___18e2a4h)
    extern  __CEXT_V(___1a021ch)
    extern  __CEXT_V(___1a1ef8h)
    extern  __CEXT_V(___1a0228h)
    extern  __CEXT_V(___1a0220h)
    extern  __CEXT_V(___1a020ch)
    extern  __CEXT_V(___1a01ech)
    extern  __CEXT_V(___1a022ch)
    extern  __CEXT_V(___1a0230h)
    extern  __CEXT_V(___1a0234h)
    extern  __CEXT_V(___1a0224h)
    extern  __CEXT_V(___1a0238h)
    extern  __CEXT_V(___1a0210h)
    extern  __CEXT_V(___1a0214h)
    extern  __CEXT_V(___1a0218h)
    extern  __CEXT_F(___2b318h)
    extern  __CEXT_V(___1a1ee8h)
    extern  __CEXT_V(___1a1ec0h)
    extern  __CEXT_V(___1a1ee0h)
    extern  __CEXT_V(___1a1eech)
    extern  __CEXT_V(___1a1ec8h)
    extern  __CEXT_V(___1a1ed0h)
    extern  __CEXT_V(___1a1ee4h)

%include "layout.inc"

section @text

ListOfDrivers:
db	"SAM SPEED",0,0
db	"JANE HONDA",0
db	"DUKE NUKEM",0
db	"NASTY NICK",0
db	"MOTOR MARY",0
db	"MAD MAC",0,0,0,0
db	"MATT MILER",0
db	"CLINT WEST",0
db	"LEE VICE",0,0,0
db	"DARK RYDER",0
db	"GREG PECK",0,0
db	"SUZY STOCK",0
db	"IRON JOHN",0,0
db	"MORI SATO",0,0
db	"CHER STONE",0
db	"DIESEL JOE",0
db	"MIC DAIR",0,0,0
db	"LIZ ARDEN",0,0
db	"BOGUS BILL",0
db	"FARMER TED",0

;; 2415ch
__GDECL(__CEXT_F(initDrivers))
		push    11ch
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, esp
		sub     esp, 100h
		and     esp, byte 0fffffff8h
		mov     ecx, 37h
		mov     edi, esp
		mov     esi, ListOfDrivers
		lea     eax, [esp+0dch]
		rep movsd   
		xor     edx, edx
		mov     ecx, 14h
		xor     ebx, ebx
		call    __CEXT_F(__STOSB__clib3r)
		mov     edx, 13h
		mov     [__CEXT_V(___196a84h)], ebx
		mov     [__CEXT_V(___196a98h)], ebx
		mov     [__CEXT_V(___196a9ch)], ebx
		mov     [__CEXT_V(___196aa0h)], ebx
		mov     [__CEXT_V(___185a50h)], ebx
		mov     [__CEXT_V(___1a1ef8h)], edx
		call    __CEXT_F(___2ec68h)
		mov     [__CEXT_V(___199f54h)], ebx
		mov     [__CEXT_V(___185a30h)], ebx
		xor     edx, edx
		xor     eax, eax
___241d8h:
		mov     [eax+__CEXT_V(___1a0240h)], edx
		mov     [eax+__CEXT_V(___1a0244h)], edx
		mov     [eax+__CEXT_V(___1a0248h)], edx
		mov     [eax+__CEXT_V(___1a023ch)], edx
        add     eax, byte 6ch
		cmp     eax, dword 870h
		jne     ___241d8h
		mov     ecx, 5
		xor     eax, eax
___24201h:
		mov     [eax+__CEXT_V(___1a01fch)], ecx
		add     eax, byte 6ch
		cmp     eax, dword 144h
		jne     ___24201h
		mov     esi, 4
___24216h:
		mov     [eax+__CEXT_V(___1a01fch)], esi
		add     eax, byte 6ch
		cmp     eax, dword 2f4h
		jne     ___24216h
		mov     edi, 3
___2422bh:
		mov     [eax+__CEXT_V(___1a01fch)], edi
		add     eax, byte 6ch
		cmp     eax, dword 438h
		jne     ___2422bh
		mov     edx, 2
___24240h:
		mov     [eax+__CEXT_V(___1a01fch)], edx
		add     eax, byte 6ch
		cmp     eax, dword 5e8h
		jne     ___24240h
		mov     ebx, 1
___24255h:
		mov     [eax+__CEXT_V(___1a01fch)], ebx
		add     eax, byte 6ch
		cmp     eax, dword 72ch
		jne     ___24255h
___24265h:
		xor     ecx, ecx
		mov     [eax+__CEXT_V(___1a01fch)], ecx
		add     eax, byte 6ch
		cmp     eax, dword 870h
		jne     ___24265h
		mov     esi, 1
		mov     edi, 12h
		xor     edx, edx
		mov     [esp+0f8h], esi
		mov     [esp+0fch], edi
		fld     dword [__CEXT_V(___181d17h)]
		fld     qword [__CEXT_V(___181d0fh)]
		fld     dword [__CEXT_V(___181d1bh)]
		fld     dword [__CEXT_V(___181d1fh)]
		fld     dword [__CEXT_V(___181d0bh)]
___242afh:
		fild    dword [esp+0f8h]
		fldlg2  
		fxch    st0, st1
		fyl2x   
		fmul    st0, st1
		call    __CHP
		fsubr   st0, st3
		fild    dword [esp+0fch]
		fmul    st0, st5
		fadd    st0, st3
		faddp   st1, st0
		fmul    st0, st5
		call    __CHP
		fistp   dword [esp+0f0h]
		mov     eax, [esp+0f0h]
		mov     ebx, [esp+0fch]
		mov     [edx+__CEXT_V(___1a0224h)], eax
		add     edx, byte 6ch
		mov     eax, [esp+0f8h]
		dec     ebx
		inc     eax
		mov     [esp+0fch], ebx
		mov     [esp+0f8h], eax
		cmp     edx, 804h
		jne     ___242afh
		fstp    st0
		mov     ecx, __CEXT_V(___1a01e0h)
		fstp    st0
		xor     ebx, ebx
		fstp    st0
		fstp    st0
		mov     [esp+0f4h], ecx
		fstp    st0
___2432eh:
		imul    esi, ebx, byte 6ch
		xor     edi, edi
		mov     [esi+__CEXT_V(___1a022ch)], edi
		mov     [esi+__CEXT_V(___1a0230h)], edi
		mov     [esi+__CEXT_V(___1a0234h)], edi
		mov     [esi+__CEXT_V(___1a0238h)], edi
		call    __CEXT_F(rand__clib3r)
		mov     edx, eax
		mov     ecx, 186a0h
		sar     edx, 1fh
		idiv    ecx
		imul    ecx, [esi+__CEXT_V(___1a01fch)], 6e0h
		mov     [esi+__CEXT_V(___1a01ech)], edi
		mov     [esi+__CEXT_V(___1a0210h)], edx
		mov     ecx, [ecx+__CEXT_V(___18e938h)]
		call    __CEXT_F(rand__clib3r)
		mov     edx, eax
		sar     edx, 1fh
		idiv    ecx
		mov     [esi+__CEXT_V(___1a01f0h)], edx
		imul    ecx, [esi+__CEXT_V(___1a01fch)], 6e0h
		mov     ecx, [ecx+__CEXT_V(___18e93ch)]
		call    __CEXT_F(rand__clib3r)
		mov     edx, eax
		sar     edx, 1fh
		idiv    ecx
		imul    ecx, [esi+__CEXT_V(___1a01fch)], 6e0h
		mov     [esi+__CEXT_V(___1a01f4h)], edx
		mov     ecx, [ecx+__CEXT_V(___18e940h)]
		call    __CEXT_F(rand__clib3r)
		mov     edx, eax
		sar     edx, 1fh
		idiv    ecx
		mov     [esi+__CEXT_V(___1a01f8h)], edx
		imul    eax, [esi+__CEXT_V(___1a01fch)], 6e0h
		mov     eax, [eax+__CEXT_V(___18e2a4h)]
		mov     [esi+__CEXT_V(___1a021ch)], eax
		lea     eax, [ebx+1]
		mov     ecx, [__CEXT_V(___1a1ef8h)]
		mov     edx, ebx
		mov     [esi+__CEXT_V(___1a0228h)], eax
		imul    esi, ecx, byte 6ch
___243f8h:
		cmp     byte [esp+edx+0dch], 0
		jne     ___2440ah
		cmp     edx, [esi+__CEXT_V(___1a0220h)]
		jne     ___2440dh
___2440ah:
		inc     edx
		jmp     ___243f8h
___2440dh:
		imul    esi, edx, byte 0bh
		mov     byte [esp+edx+0dch], 1
		imul    ecx, ebx, byte 6ch
		mov     eax, esp
		mov     edi, [esp+0f4h]
		add     esi, eax
		push    edi
___24427h:
		mov     al, [esi]
		mov     [edi], al
		cmp     al, 0
		je      ___2443fh
		mov     al, [esi+1]
		add     esi, byte 2
		mov     [edi+1], al
		add     edi, byte 2
		cmp     al, 0
		jne     ___24427h
___2443fh:
		pop     edi
		lea     eax, [edi+6ch]
		mov     [esp+0f4h], eax
		mov     [ecx+__CEXT_V(___1a0220h)], edx
		inc     ebx
		mov     [ecx+__CEXT_V(___1a020ch)], edx
		cmp     ebx, byte 13h
		jl      ___2432eh
		mov     edx, [__CEXT_V(___1a1ef8h)]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		xor     ebx, ebx
		mov     [eax*4+__CEXT_V(___1a01ech)], ebx
		mov     [eax*4+__CEXT_V(___1a01f0h)], ebx
		mov     [eax*4+__CEXT_V(___1a01f8h)], ebx
		mov     [eax*4+__CEXT_V(___1a01f4h)], ebx
		xor     ecx, ecx
		mov     [eax*4+__CEXT_V(___1a01fch)], ebx
		mov     [eax*4+__CEXT_V(___1a022ch)], ecx
		mov     [eax*4+__CEXT_V(___1a0230h)], ecx
		mov     [eax*4+__CEXT_V(___1a0234h)], ecx
		mov     [eax*4+__CEXT_V(___1a0224h)], ecx
		mov     edx, 1efh
		mov     [eax*4+__CEXT_V(___1a0238h)], ecx
		mov     ecx, 0ffffffffh
		mov     [eax*4+__CEXT_V(___1a0210h)], edx
		mov     [eax*4+__CEXT_V(___1a0214h)], ecx
		lea     edx, [ebx*8+0]
		mov     [eax*4+__CEXT_V(___1a0218h)], ecx
		shl     edx, 3
		mov     ebx, 14h
		shl     edx, 5
		mov     [eax*4+__CEXT_V(___1a0228h)], ebx
		mov     edx, [edx+__CEXT_V(___18e2a4h)]
		xor     edi, edi
		mov     [eax*4+__CEXT_V(___1a021ch)], edx
		call    __CEXT_F(___2b318h)
		mov     [__CEXT_V(___1a1ee8h)], edi
		mov     [__CEXT_V(___1a1ec0h)], edi
		xor     edx, edx
		xor     eax, eax
		mov     edi, 1
		mov     [__CEXT_V(___1a1ee0h)], eax
		mov     [__CEXT_V(___1a1eech)], edx
		mov     [__CEXT_V(___1a1ec8h)], edx
		mov     [__CEXT_V(___1a1ed0h)], edx
		mov     [__CEXT_V(___1a1ee4h)], edi
		mov     esp, ebp
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

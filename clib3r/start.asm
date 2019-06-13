%include "macros.inc"

;	extern 	___begtext
	extern 	__STACKTOP
	extern 	__psp
	extern 	__osmajor
	extern 	__osminor
	extern 	__curbrk
	extern 	__GDAptr
	extern 	__D16Infoseg
	extern 	__ExtenderSubtype
	extern 	__Envptr
	extern 	__Envseg
	extern 	__no87
	extern 	__STACKLOW
	extern 	__dynend
	extern 	_edata
	extern 	__Extender
	extern 	_end
	extern 	__LpCmdLine
	extern 	__LpPgmName
	extern 	__InitRtns
	extern 	__CMain
	extern 	__FiniRtns

%include "layout.inc"

section BEGTEXT
forever:
		int3
		jmp     forever
global ___begtext
___begtext:
		nop	;3
		nop	;4
		nop	;5
		nop	;6
		nop	;7
		nop	;8
		nop	;9
		nop	;A
		nop	;B
		nop	;C
		nop	;D
		nop	;E
		nop	;F

section @text

global _cstart_
_cstart_

global start
start:
		jmp     short around

db	"WATCOM C/C++32 Run-Time system. "
db	"(c) Copyright by WATCOM International Corp. 1988-1995. "
db	"All rights reserved."
	align	4
dd	___begtext
ConsoleName:
db	"con",0

around:
		sti     
		and     esp, byte 0fffffffch
		mov     ebx, esp
		mov     [__STACKTOP], ebx
		mov     [__curbrk], ebx
		mov     ax, 24h
		mov     [__psp], ax
		mov     ebx, 50484152h
		sub     eax, eax
		mov     ah, 30h
		int     21h
		mov     [__osmajor], al
		mov     [__osminor], ah
		mov     ecx, eax
		sub     esi, esi
		mov     edi, 81h
		shr     eax, 10h
		cmp     ax, word 4458h
		jne     short not_pharlap
		sub     bl, 30h
		mov     al, bl
		mov     ah, 0
		push    eax
		;mov     es, [__psp]
		db	66h,8eh,5
		dd	__psp
		mov     ebx, [es:5ch]
		add     ebx, 0fffh
		and     ebx, 0fffff000h
		mov     [__curbrk], ebx
		shr     ebx, 0ch
		;mov     ax, ds
		db	66h,8ch,0d8h
		;mov     es, eax
		db	8eh,0c0h
		mov     ah, 4ah
		int     21h
		pop     eax
		;mov     bx, ds
		db	66h,8ch,0dbh
		mov     cx, 2ch
		jmp     short know_ext1
not_pharlap:
		cmp     ax, word 4243h
		jne     short not_intel
		mov     [__GDAptr], edx
		mov     esi, edx
		mov     edx, [esi+1ch]
		mov     ebx, esp
		sub     ebx, edx
		mov     ah, 4ah
		int     21h
		;mov     bx, ds
		db	66h,8ch,0dbh
		;mov     [__psp], ds
		db	66h,8ch,1dh
		dd	__psp
		mov     eax, [esi+10h]
		add     edi, eax
		sub     esi, esi
		mov     si, [eax+2ch]
		shl     esi, 4
		;mov     cx, ds
		db	66h,8ch,0d9h
		mov     al, 9
		mov     ah, 0
know_ext1:
		jmp     short know_extender
not_intel:
		mov     dx, 78h
		mov     ax, 0ff00h
		int     21h
		cmp     al, 0
		je      short not_DOS4G
		;mov     ax, gs
		db	66h,8ch,0e8h
		cmp     ax, byte 0
		je      short rat9
		mov     [__D16Infoseg], ax
rat9:
		mov     ax, 6
		;mov     bx, ds
		db	66h,8ch,0dbh
		int     31h
		mov     al, 1
		mov     ah, 0
		or      dx, cx
		je      short rat10
		mov     ah, 1
rat10:
		;mov     [__psp], es
		db	66h,8ch,5
		dd	__psp
		mov     cx, [es:2ch]
		jmp     short know_extender
not_DOS4G:
		;mov     dx, ds
		db	66h,8ch,0dah
		mov     cx, 24h
		;mov     ds, ecx
		db	8eh,0d9h
		mov     cx, 2ch
		;mov     ds, edx
		db	8eh,0dah
		mov     bx, 17h
		mov     al, 0
		mov     ah, 0
know_extender:
		mov     [__Extender], al
		mov     [__ExtenderSubtype], ah
		;mov     es, ebx
		db	8eh,0c3h
		;mov     [es:__saved_DS], ds
		db	66h,26h,8ch,1dh
		dd	__saved_DS
		mov     [__Envptr], esi
		mov     [__Envseg], cx
		push    esi
		;mov     es, [__psp]
		db	66h,8eh,5
		dd	__psp
		;mov     edx, _end
		db	3eh,0bah
		dd	_end
		add     edx, byte 0fh
		and     dl, 0f0h
		sub     ecx, ecx
		mov     cl, [es:edi-1]
		cld     
		mov     al, 20h
		repe scasb   
		lea     esi, [edi-1]
		mov     edi, edx
		;mov     bx, es
		db	66h,8ch,0c3h
		;mov     dx, ds
		db	66h,8ch,0dah
		;mov     ds, ebx
		db	8eh,0dbh
		;mov     es, edx
		db	8eh,0c2h
		je      short noparm
		inc     ecx
		rep movsb   
noparm:
		sub     al, al
		stosb   
		stosb   
		pop     esi
		dec     edi
		push    edi
		push    edx
		;mov     ds, [es:__Envseg]
		db	26h,66h,8eh,1dh
		dd	__Envseg
		sub     ebp, ebp
___63e8ch:
		mov     eax, [esi]
		or      eax, 20202020h
		cmp     eax, dword 37386f6eh
		jne     short ___63ea1h
		cmp     byte [esi+4], 3dh
		jne     short ___63ea1h
		inc     ebp
___63ea1h:
		cmp     byte [esi], 0
		lodsb   
		jne     short ___63ea1h
		cmp     byte [esi], 0
		jne     short ___63e8ch
		lodsb   
		inc     esi
		inc     esi
___63eafh:
		cmp     byte [esi], 0
		movsb   
		jne     short ___63eafh
		pop     ds
		pop     esi
		mov     ebx, esp
		mov     [__no87], bp
		mov     [__STACKLOW], edi
		mov     [__dynend], ebx
		;mov     ecx, _end
		db	3eh,0b9h
		dd	_end
		;mov     edi, _edata
		db	3eh,0bfh
		dd	_edata
		sub     ecx, edi
		cmp     byte [__Extender], 1
		jne     short zerobss
		cmp     ecx, 1000h
		jbe     short zerobss
		mov     ecx, 1000h
zerobss:
		mov     dl, cl
		shr     ecx, 2
		sub     eax, eax
		rep stosd   
		mov     cl, dl
		and     cl, 3
		rep stosb   
		;mov     eax, _end
		db	3eh,0b8h
		dd	_end
		add     eax, byte 0fh
		and     al, 0f0h
		mov     [__LpCmdLine], eax
		mov     [__LpPgmName], esi
		mov     eax, 0ffh
		call    near __InitRtns
		sub     ebp, ebp
		call    near __CMain
global __exit_
__exit_:
		jmp     short ok
global __do_exit_with_msg__
__do_exit_with_msg__:
		push    edx
		push    eax
		mov     edx, ConsoleName
		mov     ax, 3d01h
		int     21h
		mov     bx, ax
		pop     edx
		mov     esi, edx
		cld     
___63f3dh:
		lodsb   
		cmp     al, 0
		jne     short ___63f3dh
		mov     ecx, esi
		sub     ecx, edx
		dec     ecx
		mov     ah, 40h
		int     21h
		pop     eax
ok:
		push    eax
		mov     eax, 0
		mov     edx, 0ffh
		call    near __FiniRtns
		pop     eax
		mov     ah, 4ch
		int     21h
		db	8dh,40h,0
global __GETDS
__GETDS:
		;mov     ds, [cs:__saved_DS]
		db	66h,2eh,8eh,1dh
		dd	__saved_DS
		retn    
__saved_DS:
db	0,0
global ___GETDSEnd_
___GETDSEnd_:
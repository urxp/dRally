cpu 386

	extern	__CMain
	extern	__InitRtns
	extern	__FiniRtns
	extern	__DOSseg__

	extern	_edata		        ; end of DATA (start of BSS)
	extern	_end		        ; end of BSS (start of STACK)

	extern  __dynend            ; "C"
	extern	__curbrk            ; "C"
	extern	__psp               ; "C"
	extern	__osmajor           ; "C"
	extern	__osminor           ; "C"
	extern	__STACKLOW          ; "C"
	extern	__STACKTOP          ; "C"
	extern	__child             ; "C"
	extern	__no87
	extern	__Extender          ; "C"
	extern	__ExtenderSubtype   ; "C"
	extern	__Envptr            ; "C"
	extern	__Envseg            ; "C"
	extern	__FPE_handler
	extern  ___FPE_handler
	extern	__LpCmdLine         ; "C"
	extern	__LpPgmName         ; "C"


GROUP DGROUP	_NULL _AFTERNULL CONST _DATA DATA TIB TI TIE XIB XI XIE YIB YI YIE _BSS STACK

SEGMENT BEGTEXT	PUBLIC USE32 ALIGN=16 CLASS=CODE
forever:
	    int     3h
	    jmp	    short forever
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

SEGMENT _TEXT	PUBLIC USE32 ALIGN=4 CLASS=CODE

SEGMENT _NULL	PUBLIC USE32 ALIGN=16 CLASS=BEGDATA
global __nullarea
__nullarea:
	db	01h,01h,01h,00h
	
SEGMENT _AFTERNULL	PUBLIC USE32 ALIGN=2 CLASS=BEGDATA
SEGMENT CONST		PUBLIC USE32 ALIGN=2 CLASS=DATA


SEGMENT TIB		PUBLIC USE32 ALIGN=1 CLASS=DATA
SEGMENT TI		PUBLIC USE32 ALIGN=1 CLASS=DATA
SEGMENT TIE		PUBLIC USE32 ALIGN=1 CLASS=DATA

SEGMENT XIB		PUBLIC USE32 ALIGN=2 CLASS=DATA
SEGMENT XI		PUBLIC USE32 ALIGN=2 CLASS=DATA
SEGMENT XIE		PUBLIC USE32 ALIGN=2 CLASS=DATA

SEGMENT YIB		PUBLIC USE32 ALIGN=2 CLASS=DATA
SEGMENT YI		PUBLIC USE32 ALIGN=2 CLASS=DATA
SEGMENT YIE		PUBLIC USE32 ALIGN=2 CLASS=DATA


SEGMENT _DATA	PUBLIC USE32 ALIGN=4 CLASS=DATA

X_ERGO			            equ	0
X_RATIONAL		            equ	1
X_PHARLAP_V2		        equ	2
X_PHARLAP_V3		        equ	3
X_PHARLAP_V4		        equ	4
X_PHARLAP_V5		        equ	5
X_PHARLAP_V6		        equ	6
X_INTEL 		            equ	9
X_WIN386 		            equ	10
XS_NONE			            equ	0
XS_RATIONAL_ZEROBASE	    equ	0
XS_RATIONAL_NONZEROBASE	    equ	1

global __GDAptr
__GDAptr:	             	
	dd	0 				; IGC and Intel Code Builder GDA address
global __D16Infoseg
__D16Infoseg:
	dw  20h				; DOS/4G kernel segment
global __x386_zero_base_selector
__x386_zero_base_selector:
   dw  0	    		; base 0 selector for X-32VM

SEGMENT DATA	PUBLIC USE32 ALIGN=2 CLASS=DATA
SEGMENT _BSS	PUBLIC USE32 ALIGN=2 CLASS=BSS

STACK_SIZE	equ	1000h
SEGMENT STACK 	STACK USE32 ALIGN=16 CLASS=STACK
    resb STACK_SIZE


SEGMENT _TEXT
global _cstart_

..start:
_cstart_:
		jmp     around
;
; copyright message
;
db	"WATCOM C/C++32 Run-Time system. "
db  "(c) Copyright by WATCOM International Corp. 1988-1995."
db	" All rights reserved."
    align	4
dd  ___begtext	; make sure dead code elimination
				; doesn't kill BEGTEXT
;
; miscellaneous code-segment messages
;
ConsoleName db	"con",0
around:
		sti

PSP_SEG equ	24h
ENV_SEG equ	2ch

		and     esp, 0fffffffch
		mov     ebx, esp
		mov     [__STACKTOP], ebx
		mov     [__curbrk], ebx
		mov     ax, PSP_SEG
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
		cmp     ax, 4458h
		jne     not_pharlap
		sub     bl, 30h
		mov     al, bl
		mov     ah, XS_NONE
		push    eax
		mov     es, [__psp]
		mov     ebx, [es:5ch]
		add     ebx, 0fffh
		and     ebx, 0fffff000h
		mov     [__curbrk], ebx
		shr     ebx, 0ch
		mov     ax, ds
		mov     es, ax
		mov     ah, 4ah
		int     21h
		pop     eax
		mov     bx, ds
		mov     cx, ENV_SEG
		jmp     know_ext1
not_pharlap:
		cmp     ax, 4243h
		jne     not_intel

GDA_PSPA equ	16			; - offset into GDA to PSP address
GDA_LDPT equ	28			; - offset into GDA to load address

		mov     [__GDAptr], edx
		mov     esi, edx
		mov     edx, [esi+GDA_LDPT]
		mov     ebx, esp
		sub     ebx, edx
		mov     ah, 4ah
		int     21h
		mov     bx, ds
		mov     [__psp], ds
		mov     eax, [esi+GDA_PSPA]
		add     edi, eax
		sub     esi, esi
		mov     si, [eax+2ch]
		shl     esi, 4
		mov     cx, ds
		mov     al, X_INTEL
		mov     ah, XS_NONE
know_ext1:
		jmp     know_extender
not_intel:
		mov     dx, 78h
		mov     ax, 0ff00h
		int     21h
		cmp     al, 0
		je      not_DOS4G
		mov     ax, gs
		cmp     ax, 0
		je      rat9
		mov     [__D16Infoseg], ax
rat9:
		mov     ax, 6
		mov     bx, ds
		int     31h
		mov     al, X_RATIONAL
		mov     ah, XS_RATIONAL_ZEROBASE
		or      dx, cx
		je      rat10
		mov     ah, XS_RATIONAL_NONZEROBASE
rat10:
		mov     [__psp], es
		mov     cx, [es:2ch]
		jmp     know_extender
not_DOS4G:
		mov     dx, ds
		mov     cx, PSP_SEG
		mov     ds, cx
		mov     cx, [2ch]
		mov     ds, dx
		mov     bx, 17h
		mov     al, X_ERGO
		mov     ah, XS_NONE
know_extender:
		mov     [__Extender], al
		mov     [__ExtenderSubtype], ah
		mov     es, bx
		mov     [es:__saved_DS], ds
		mov     [__Envptr], esi
		mov     [__Envseg], cx
		push    esi
		mov     es, [__psp]
		mov     edx, _end
		add     edx, 0fh
		and     dl, 0f0h
		sub     ecx, ecx
		mov     cl, [es:edi-1]
		cld     
		mov     al, 20h
		repe scasb   
		lea     esi, [edi-1]
		mov     edi, edx
		mov     bx, es
		mov     dx, ds
		mov     ds, bx
		mov     es, dx
		je      noparm
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
		mov     ds, [es:__Envseg]
		sub     ebp, ebp
dr@63e8ch:
		mov     eax, [esi]
		or      eax, 20202020h
		cmp     eax, 37386f6eh
		jne     dr@63ea1h
		cmp     byte [esi+4], 3dh
		jne     dr@63ea1h
		inc     ebp
dr@63ea1h:
		cmp     byte [esi], 0
		lodsb   
		jne     dr@63ea1h
		cmp     byte [esi], 0
		jne     dr@63e8ch
		lodsb   
		inc     esi
		inc     esi
dr@63eafh:
		cmp     byte [esi], 0
		movsb   
		jne     dr@63eafh
		pop     ds
		pop     esi
		mov     ebx, esp
		mov     [__no87], bp
		mov     [__STACKLOW], edi
		mov     [__dynend], ebx
		mov     ecx, _end
		mov     edi, _edata
		sub     ecx, edi
		cmp     byte [__Extender], X_RATIONAL
		jne     zerobss
		cmp     ecx, 1000h
		jbe     zerobss
		mov     ecx, 1000h
zerobss:
		mov     dl, cl
		shr     ecx, 2
		sub     eax, eax
		rep stosd   
		mov     cl, dl
		and     cl, 3
		rep stosb   
		mov     eax, _end
		add     eax, 0fh
		and     al, 0f0h
		mov     [__LpCmdLine], eax
		mov     [__LpPgmName], esi
		mov     eax, 0ffh
		call    __InitRtns
		sub     ebp, ebp
		call    __CMain

global __exit_ ;"C"
__exit_:
		jmp     ok

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
dr@63f3dh:
		lodsb   
		cmp     al, 0
		jne     dr@63f3dh
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
		call    __FiniRtns
		pop     eax
		mov     ah, 4ch
		int     21h

        align 4

global __GETDS
__GETDS:
global ___GETDSStart_ ;"C"
___GETDSStart_:
		mov     ds, [cs:__saved_DS]
		ret    
__saved_DS dw   0
global ___GETDSEnd_ ; "C"
___GETDSEnd_: 
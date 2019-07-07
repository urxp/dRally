%include "macros.inc"

	extern	__CEXT_F(___649a8h)
	extern	__CEXT_F(___680c8h)
	extern	__CEXT_F(___64a28h)
	extern	__CEXT_F(___6000fh)
	extern	__CEXT_F(___67e48h__esp)
	extern	__CEXT_V(___24e5c0h)
	extern	__CEXT_F(__STOSD__clib3r)
	extern	__CEXT_V(AMP_Volume)
	extern	__CEXT_V(MSX_Volume)
	extern	__CEXT_V(SFX_Volume)
	extern	__CEXT_F(updateVolume)
	extern	__CEXT_F(___5fff2h)

%include "layout.inc"

section @text

db	0
db	0dh,0ah
db	"------------------------------------------------------------------------------"
db	0dh,0ah
db	" ESP Music System v1.29 for Watcom C/C++    Current Revision March 17th, 1996"
db	0dh,0ah
db	" Copyright (c) 1995, 1996 by Markus Stein       E-Mail: steinm@cs.uni-bonn.de"
db	0dh,0ah
db	"------------------------------------------------------------------------------"
db	0dh,0ah
db	0

	align	4

;; 64864
__GDECL(__CEXT_F(___64864h__esp))
		sub     esp, 4
		mov     [esp], al
		call    __CEXT_F(___649a8h)
		call    __CEXT_F(___680c8h)
		mov     eax, __CEXT_F(___64a28h)
		call    __CEXT_F(___6000fh)
		xor     eax, eax
		mov     al, [esp+8]
		push    eax
		xor     eax, eax
		and     ebx, 0ffh
		mov     al, [esp+4]
		call    __CEXT_F(___67e48h__esp)
		mov     ecx, 20h
		mov     edx, 10000h
		mov     eax, __CEXT_V(___24e5c0h)
		call    __CEXT_F(__STOSD__clib3r)
		mov     edx, 10000h
		mov     [__CEXT_V(AMP_Volume)], edx
		mov     [__CEXT_V(MSX_Volume)], edx
		mov     [__CEXT_V(SFX_Volume)], edx
		call    __CEXT_F(updateVolume)
		mov     eax, __CEXT_F(___64a28h)
		call    __CEXT_F(___5fff2h)
		add     esp, 4
		ret     4

cpu 386

	extern 	dr@int09h

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global ScanCodesMap
ScanCodesMap:
db	0
global KEY_ESC
KEY_ESC:
db	0
db	0,0,0,0,0,0,0,0,0,0,0,0,0
global KEY_TAB
KEY_TAB:
db	0
db	0,0,0,0,0
global KEY_Y
KEY_Y:
db	0
db	0,0,0
global KEY_P
KEY_P:
db	0,0,0
global KEY_ENTER
KEY_ENTER:
db	0
KEY_LEFT_CTRL:
db	0,0,0,0,0,0,0,0,0,0,0,0,0
KEY_LEFT_SHIFT:
db	0,0,0,0,0,0,0
global KEY_N
KEY_N:
db	0,0,0,0,0
KEY_RIGHT_SHIFT:
db	0,0
KEY_LEFT_ALT:
db	0,0,0
global KEY_F1
KEY_F1:
db	0
global KEY_F2
KEY_F2:
db	0
global KEY_F3
KEY_F3:
db	0
global KEY_F4
KEY_F4:
db	0
global KEY_F5
KEY_F5:
db	0,0,0,0,0,0,0,0,0
global KEY_UP
KEY_UP:
db	0,0,0
global KEY_LEFT
KEY_LEFT:
db	0,0
global KEY_RIGHT
KEY_RIGHT:
db	0,0,0
global KEY_DOWN
KEY_DOWN:
db	0,0,0
KEY_DEL:
db	0,0,0,0,0
global KEY_F12
KEY_F12:
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0
global KEY_KEYPAD_ENTER
KEY_KEYPAD_ENTER:
db	0
KEY_RIGHT_CTRL:
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0
KEY_RIGHT_ALT:
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
global KEY_GREY_UP
KEY_GREY_UP:
db	0,0,0
global KEY_GREY_LEFT
KEY_GREY_LEFT:
db	0,0
global KEY_GREY_RIGHT
KEY_GREY_RIGHT:
db	0,0,0
global KEY_GREY_DOWN
KEY_GREY_DOWN:
db	0,0,0
KEY_GREY_DEL:
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

global ScanCode
ScanCode:
db	0
global KeyCode
KeyCode:
db	0
global KeyCodes
KeyCodes:
db	0,1bh,31h,32h,33h,34h,35h,36h,37h,38h,39h,30h,2dh,3dh,8,9
db	71h,77h,65h,72h,74h,79h,75h,69h,6fh,70h,5bh,5dh,0dh,0,61h,73h
db	64h,66h,67h,68h,6ah,6bh,6ch,3bh,27h,0,0,5ch,7ah,78h,63h,76h
db	62h,6eh,6dh,2ch,2eh,2fh,0,2ah,0,20h,0,0,0,0,0,0
db	0,0,0,0,0,0,0,37h,38h,39h,2dh,34h,35h,36h,2bh,31h
db	32h,33h,30h,0,0,0,5ch,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,2fh,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0cdh,0c9h,0ceh,0,0cah,0,0cbh
db	0,0cfh,0cch,0d0h,0d1h,0d2h
global ShiftKeyCodes
ShiftKeyCodes:
db	0,1bh,21h,40h,23h,24h,25h,5eh,26h,2ah,28h,29h,5fh,2bh,8,9
db	51h,57h,45h,52h,54h,59h,55h,49h,4fh,50h
db	7bh,7dh,0dh,0,41h,53h,44h,46h,47h,48h,4ah,4bh,4ch,3ah,22h,0
db	0,7ch,5ah,58h,43h,56h,42h,4eh,4dh,3ch,3eh,3fh,0,2ah,0,20h
db	0,0,0,0,0,0,0,0,0,0,0,0,0,37h,38h,39h
db	2dh,34h,35h,36h,2bh,31h,32h,33h,30h,0,0,0,7ch,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,2fh,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0cdh,0c9h,0ceh
db	0,0cah,0,0cbh,0,0cfh,0cch,0d0h,0d1h,0d2h
global EScanCode
EScanCode:
db	0
SavedInt09h:
db	0,0,0,0,0,0
Int09h_Installed:
db	0
global install_Int09h
install_Int09h:
		cmp     byte [Int09h_Installed], 1
		je      .@1
		nop     
		nop     
		nop     
		nop     
		mov     byte [Int09h_Installed], 1
		cli     
		pushad  
		push    ds
		push    es
		mov     eax, 3509h
		int     21h
		mov     [SavedInt09h], ebx
		mov     [SavedInt09h+4], es
		mov     eax, 2509h
		mov     edx, dr@int09h
		push    cs
		pop     ds
		int     21h
		pop     es
		pop     ds
		popad   
		sti  
.@1:
		retn    
global restore_Int09h
restore_Int09h:
		cmp     byte [Int09h_Installed], 0
		je      .@1
		nop     
		nop     
		nop     
		nop     
		mov     byte [Int09h_Installed], 0
		cli     
		pushad  
		push    ds
		mov     edx, [SavedInt09h]
		mov     ds, [SavedInt09h+4]
		mov     eax, 2509h
		int     21h
		pop     ds
		popad   
		sti     
.@1:
		retn    
global getKeyCode
getKeyCode:
		cli     
		xor     eax, eax
		mov     al, [KeyCode]
		mov     byte [KeyCode], 0
		sti     
		retn    
global getScanCode
getScanCode:
		cli     
		xor     eax, eax
		mov     al, [ScanCode]
		mov     byte [ScanCode], 0
		sti     
		retn
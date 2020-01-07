cpu 386
%include "macros.inc"

	extern	__CHK
	extern	dRally_System_clean
	extern	___19bd60h
	extern	___623d4h
	extern	___184bf4h
	extern	printf_
	extern	exit_
	extern	___184c3ch
	extern	___184c68h
	extern	___184c6ch
	extern	putchar_
	extern	___184c70h
	extern	___184c74h
	extern 	VGA3_SETMODE

section .text

___586b0h:
db	1,"Unable to allocate sufficient amount of Base Memory!",0
db	2,"Unable to free Base Memory block!",0
db 	3,"Unable to change the size of a Base Memory block!",0
db 	4,"Unable to allocate sufficient amount of Flat Memory!",0
db 	5,"Unable to free Flat Memory block!",0
db 	6,"Unable to change the size Flat Memory block!",0
db	7,"Flat Memory block handle has changed while resizing!",0
db 	8,"Selector Allocation failed! Not enough Selectors!",0
db 	9,"Selector Deallocation failed!",0
db 	0ah,"Unable to set Selector's Base!",0
db 	0bh,"Unable to set Selector's Limit!",0
db 	0ch,"...",0
db 	0dh,"Unable to allocate sufficient amount of Heap Memory!",0
db 	0eh,"Unable to free a Heap Memory block!",0
db 	0fh,"Unable to change the size of a Heap Memory block!",0
db 	10h,"You need at least a standard VGA!",0
db 	11h,"Integrity Failure! File '%s' has been changed!",0
db 	12h,"File Error! Couldn't find Archive '%s'!",0
db 	13h,"File Error! Couldn't find File '%s'!",0
db 	14h,"File Error! Couldn't find File '%s' inside Archive '%s'!",0
db 	15h,"Unable to create Memory Log File '%s'!",0
db 	16h,"Unable to write to Memory Log File '%s'!",0
db 	17h,"Heap memory block size exceeded!",0
db	20h,"SoundBlaster or compatible initialization failed!",0
db 	21h,"SoundBlaster or compatible I/O Error!",0
db 	28h,"Sound Module '%s' is invalid!",0
db	29h,"Sound Module '%s' doesn't contain any data to play!",0
db 	0ffh,0

	align 	4

__GDECL(___58b20h)
		push    490h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, 470h
		mov     ecx, 11bh
		mov     edi, esp
		mov     esi, ___586b0h
		rep movsd   
		movsw   
		movsb   
		mov     ah, [esp]
		mov     edx, esp
		cmp     ah, 0ffh
		je      ___58b69h
___58b50h:
		mov     bh, [esp+488h]
		cmp     bh, [edx]
		je      ___58b69h
___58b5bh:
		mov     eax, edx
		mov     bh, [eax]
		inc     edx
		test    bh, bh
		jne     ___58b5bh
		cmp     byte [edx], 0ffh
		jne     ___58b50h
___58b69h:

	push 	eax
	push 	ecx
	push 	edx
		call    dRally_System_clean
	pop 	edx
	pop 	ecx
	pop 	eax
	
		cmp     dword [___19bd60h], byte 0
		je      ___58b7ch
		call    ___623d4h
___58b7ch:
		call 	VGA3_SETMODE
		cmp     byte [edx], 0ffh
		jne     ___58ba9h
		xor     eax, eax
		mov     al, [esp+488h]
		push    eax
		push    ___184bf4h
		call    printf_
		add     esp, byte 8
		mov     eax, 0ffh
		call    exit_
___58ba9h:
		xor     eax, eax
		mov     al, [esp+488h]
		push    eax
		push    ___184c3ch
		inc     edx
		lea     ecx, [esp+494h]
		call    printf_
		mov     al, [edx]
		add     esp, byte 8
		test    al, al
		je      ___58c2bh
___58bceh:
		mov     bl, [edx]
		cmp     bl, 25h
		jne     ___58c1ah
		mov     bl, [edx+1]
		inc     edx
		cmp     bl, 64h
		jb      ___58c14h
		lea     eax, [ecx+4]
		jbe     ___58beah
		cmp     bl, 73h
		je      ___58bffh
		jmp     ___58c14h
___58beah:
		mov     edi, [eax-4]
		push    edi
		push    ___184c68h
		mov     ecx, eax
		call    printf_
		add     esp, byte 8
		jmp     ___58c23h
___58bffh:
		mov     esi, [eax-4]
		push    esi
		push    ___184c6ch
		mov     ecx, eax
		call    printf_
		add     esp, byte 8
		jmp     ___58c23h
___58c14h:
		xor     eax, eax
		mov     al, [edx]
		jmp     ___58c1eh
___58c1ah:
		xor     eax, eax
		mov     al, bl
___58c1eh:
		call    putchar_
___58c23h:
		mov     ah, [edx+1]
		inc     edx
		test    ah, ah
		jne     ___58bceh
___58c2bh:
		push    ___184c70h
		call    printf_
		add     esp, byte 4
		push    ___184c74h
		call    printf_
		add     esp, byte 4
		xor     eax, eax
		mov     al, [esp+488h]
		call    exit_
		add     esp, 470h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___5ec04h
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
db	2,55h,6eh,61h,62h,6ch,65h,20h,74h,6fh
db	20h,66h,72h,65h,65h,20h,42h,61h,73h,65h,20h,4dh,65h,6dh,6fh,72h
db	79h,20h,62h,6ch,6fh,63h,6bh,21h,0,3,55h,6eh,61h,62h,6ch,65h
db	20h,74h,6fh,20h,63h,68h,61h,6eh,67h,65h,20h,74h,68h,65h,20h,73h
db	69h,7ah,65h,20h,6fh,66h,20h,61h,20h,42h,61h,73h,65h,20h,4dh,65h
db	6dh,6fh,72h,79h,20h,62h,6ch,6fh,63h,6bh,21h,0,4,55h,6eh,61h
db	62h,6ch,65h,20h,74h,6fh,20h,61h,6ch,6ch,6fh,63h,61h,74h,65h,20h
db	73h,75h,66h,66h,69h,63h,69h,65h,6eh,74h,20h,61h,6dh,6fh,75h,6eh
db	74h,20h,6fh,66h,20h,46h,6ch,61h,74h,20h,4dh,65h,6dh,6fh,72h,79h
db	21h,0,5,55h,6eh,61h,62h,6ch,65h,20h,74h,6fh,20h,66h,72h,65h
db	65h,20h,46h,6ch,61h,74h,20h,4dh,65h,6dh,6fh,72h,79h,20h,62h,6ch
db	6fh,63h,6bh,21h,0,6,55h,6eh,61h,62h,6ch,65h,20h,74h,6fh,20h
db	63h,68h,61h,6eh,67h,65h,20h,74h,68h,65h,20h,73h,69h,7ah,65h,20h
db	46h,6ch,61h,74h,20h,4dh,65h,6dh,6fh,72h,79h,20h,62h,6ch,6fh,63h
db	6bh,21h,0,7,46h,6ch,61h,74h,20h,4dh,65h,6dh,6fh,72h,79h,20h
db	62h,6ch,6fh,63h,6bh,20h,68h,61h,6eh,64h,6ch,65h,20h,68h,61h,73h
db	20h,63h,68h,61h,6eh,67h,65h,64h,20h,77h,68h,69h,6ch,65h,20h,72h
db	65h,73h,69h,7ah,69h,6eh,67h,21h,0,8,53h,65h,6ch,65h,63h,74h
db	6fh,72h,20h,41h,6ch,6ch,6fh,63h,61h,74h,69h,6fh,6eh,20h,66h,61h
db	69h,6ch,65h,64h,21h,20h,4eh,6fh,74h,20h,65h,6eh,6fh,75h,67h,68h
db	20h,53h,65h,6ch,65h,63h,74h,6fh,72h,73h,21h,0,9,53h,65h,6ch
db	65h,63h,74h,6fh,72h,20h,44h,65h,61h,6ch,6ch,6fh,63h,61h,74h,69h
db	6fh,6eh,20h,66h,61h,69h,6ch,65h,64h,21h,0,0ah,55h,6eh,61h,62h
db	6ch,65h,20h,74h,6fh,20h,73h,65h,74h,20h,53h,65h,6ch,65h,63h,74h
db	6fh,72h,27h,73h,20h,42h,61h,73h,65h,21h,0,0bh,55h,6eh,61h,62h
db	6ch,65h,20h,74h,6fh,20h,73h,65h,74h,20h,53h,65h,6ch,65h,63h,74h
db	6fh,72h,27h,73h,20h,4ch,69h,6dh,69h,74h,21h,0,0ch,2eh,2eh,2eh
db	0,0dh,55h,6eh,61h,62h,6ch,65h,20h,74h,6fh,20h,61h,6ch,6ch,6fh
db	63h,61h,74h,65h,20h,73h,75h,66h,66h,69h,63h,69h,65h,6eh,74h,20h
db	61h,6dh,6fh,75h,6eh,74h,20h,6fh,66h,20h,48h,65h,61h,70h,20h,4dh
db	65h,6dh,6fh,72h,79h,21h,0,0eh,55h,6eh,61h,62h,6ch,65h,20h,74h
db	6fh,20h,66h,72h,65h,65h,20h,61h,20h,48h,65h,61h,70h,20h,4dh,65h
db	6dh,6fh,72h,79h,20h,62h,6ch,6fh,63h,6bh,21h,0,0fh,55h,6eh,61h
db	62h,6ch,65h,20h,74h,6fh,20h,63h,68h,61h,6eh,67h,65h,20h,74h,68h
db	65h,20h,73h,69h,7ah,65h,20h,6fh,66h,20h,61h,20h,48h,65h,61h,70h
db	20h,4dh,65h,6dh,6fh,72h,79h,20h,62h,6ch,6fh,63h,6bh,21h,0,10h
db	59h,6fh,75h,20h,6eh,65h,65h,64h,20h,61h,74h,20h,6ch,65h,61h,73h
db	74h,20h,61h,20h,73h,74h,61h,6eh,64h,61h,72h,64h,20h,56h,47h,41h
db	21h,0,11h,49h,6eh,74h,65h,67h,72h,69h,74h,79h,20h,46h,61h,69h
db	6ch,75h,72h,65h,21h,20h,46h,69h,6ch,65h,20h,27h,25h,73h,27h,20h
db	68h,61h,73h,20h,62h,65h,65h,6eh,20h,63h,68h,61h,6eh,67h,65h,64h
db	21h,0,12h,46h,69h,6ch,65h,20h,45h,72h,72h,6fh,72h,21h,20h,43h
db	6fh,75h,6ch,64h,6eh,27h,74h,20h,66h,69h,6eh,64h,20h,41h,72h,63h
db	68h,69h,76h,65h,20h,27h,25h,73h,27h,21h,0,13h,46h,69h,6ch,65h
db	20h,45h,72h,72h,6fh,72h,21h,20h,43h,6fh,75h,6ch,64h,6eh,27h,74h
db	20h,66h,69h,6eh,64h,20h,46h,69h,6ch,65h,20h,27h,25h,73h,27h,21h
db	0,14h,46h,69h,6ch,65h,20h,45h,72h,72h,6fh,72h,21h,20h,43h,6fh
db	75h,6ch,64h,6eh,27h,74h,20h,66h,69h,6eh,64h,20h,46h,69h,6ch,65h
db	20h,27h,25h,73h,27h,20h,69h,6eh,73h,69h,64h,65h,20h,41h,72h,63h
db	68h,69h,76h,65h,20h,27h,25h,73h,27h,21h,0,15h,55h,6eh,61h,62h
db	6ch,65h,20h,74h,6fh,20h,63h,72h,65h,61h,74h,65h,20h,4dh,65h,6dh
db	6fh,72h,79h,20h,4ch,6fh,67h,20h,46h,69h,6ch,65h,20h,27h,25h,73h
db	27h,21h,0,16h,55h,6eh,61h,62h,6ch,65h,20h,74h,6fh,20h,77h,72h
db	69h,74h,65h,20h,74h,6fh,20h,4dh,65h,6dh,6fh,72h,79h,20h,4ch,6fh
db	67h,20h,46h,69h,6ch,65h,20h,27h,25h,73h,27h,21h,0,17h,48h,65h
db	61h,70h,20h,6dh,65h,6dh,6fh,72h,79h,20h,62h,6ch,6fh,63h,6bh,20h
db	73h,69h,7ah,65h,20h,65h,78h,63h,65h,65h,64h,65h,64h,21h,0
db	20h,"SoundBlaster or compatible initialization failed!",0
db 	21h,"SoundBlaster or compatible I/O Error!",0
db 	28h,"Sound Module '%s' is invalid!",0
db	29h,"Sound Module '%s' doesn't contain any data to play!",0
db 	0ffh,0
db 	90h
__GDECL(___58b20h)
		push    490h
		call    near __CHK
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
		je      short ___58b69h
___58b50h:
		mov     bh, [esp+488h]
		cmp     bh, [edx]
		je      short ___58b69h
___58b5bh:
		mov     eax, edx
		mov     bh, [eax]
		inc     edx
		test    bh, bh
		jne     short ___58b5bh
		cmp     byte [edx], 0ffh
		jne     short ___58b50h
___58b69h:
		call    near ___5ec04h
		cmp     dword [___19bd60h], byte 0
		je      short ___58b7ch
		call    near ___623d4h
___58b7ch:
		call 	VGA3_SETMODE
		cmp     byte [edx], 0ffh
		jne     short ___58ba9h
		xor     eax, eax
		mov     al, [esp+488h]
		push    eax
		push    ___184bf4h
		call    near printf_
		add     esp, byte 8
		mov     eax, 0ffh
		call    near exit_
___58ba9h:
		xor     eax, eax
		mov     al, [esp+488h]
		push    eax
		push    ___184c3ch
		inc     edx
		lea     ecx, [esp+494h]
		call    near printf_
		mov     al, [edx]
		add     esp, byte 8
		test    al, al
		je      short ___58c2bh
___58bceh:
		mov     bl, [edx]
		cmp     bl, 25h
		jne     short ___58c1ah
		mov     bl, [edx+1]
		inc     edx
		cmp     bl, 64h
		jb      short ___58c14h
		lea     eax, [ecx+4]
		jbe     short ___58beah
		cmp     bl, 73h
		je      short ___58bffh
		jmp     short ___58c14h
___58beah:
		mov     edi, [eax-4]
		push    edi
		push    ___184c68h
		mov     ecx, eax
		call    near printf_
		add     esp, byte 8
		jmp     short ___58c23h
___58bffh:
		mov     esi, [eax-4]
		push    esi
		push    ___184c6ch
		mov     ecx, eax
		call    near printf_
		add     esp, byte 8
		jmp     short ___58c23h
___58c14h:
		xor     eax, eax
		mov     al, [edx]
		jmp     short ___58c1eh
___58c1ah:
		xor     eax, eax
		mov     al, bl
___58c1eh:
		call    near putchar_
___58c23h:
		mov     ah, [edx+1]
		inc     edx
		test    ah, ah
		jne     short ___58bceh
___58c2bh:
		push    ___184c70h
		call    near printf_
		add     esp, byte 4
		push    ___184c74h
		call    near printf_
		add     esp, byte 4
		xor     eax, eax
		mov     al, [esp+488h]
		call    near exit_
		add     esp, 470h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

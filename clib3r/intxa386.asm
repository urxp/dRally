cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __int386x
__int386x:
		push    ebp
		push    es
		push    ebx
		push    ds
		push    edx
		call    near dr@6d6feh
		push    ds
		push    edi
		mov     ebp, esp
		mov     edi, [ebp+8]
		;mov     ds, [ebp+0ch]
		db	8eh,5dh,0ch
		mov     [edi], eax
		mov     [edi+4], ebx
		mov     [edi+8], ecx
		mov     [edi+0ch], edx
		mov     [edi+10h], esi
		pop     dword [edi+14h]
		sbb     eax, eax
		mov     [edi+18h], eax
		pop     eax
		pop     ebx
		pop     ebx
		pop     ebx
		mov     [ebx+6], ax
		;mov     [ebx], es
		db	66h,8ch,3
		pop     es
		pop     ebp
		retn    
dr@6d6feh:
		lea     esi, [esi+esi*2]
		lea     eax, [cs:esi+dr@6d7a4h]
		push    eax
		;mov     es, [ebx]
		db	8eh,3
		mov     bp, [ebx+6]
		mov     eax, [edi]
		mov     ebx, [edi+4]
		mov     ecx, [edi+8]
		mov     edx, [edi+0ch]
		mov     esi, [edi+10h]
		mov     edi, [edi+14h]
		;mov     ds, ebp
		db	8eh,0ddh
		retn    
global _DoINTR
_DoINTR:
		pushad  
		push    gs
		push    fs
		push    es
		push    ds
		push    edx
		call    near dr@6d770h
		push    ebx
		push    ds
		push    ebp
		mov     ebp, esp
		mov     ebx, [ebp+0ch]
		;mov     ds, [ebp+10h]
		db	8eh,5dh,10h
		mov     [ebx], eax
		pushfd  
		pop     eax
		mov     [ebx+24h], ax
		mov     [ebx+8], ecx
		mov     [ebx+0ch], edx
		mov     [ebx+14h], esi
		mov     [ebx+18h], edi
		pop     dword [ebx+10h]
		pop     eax
		mov     [ebx+1ch], ax
		pop     dword [ebx+4]
		;mov     [ebx+1eh], es
		db	66h,8ch,43h,1eh
		;mov     [ebx+20h], fs
		db	66h,8ch,63h,20h
		;mov     [ebx+22h], gs
		db	66h,8ch,6bh,22h
		add     esp, byte 8
		pop     es
		pop     fs
		pop     gs
		popad   
		retn    
dr@6d770h:
		and     eax, 0ffh
		lea     eax, [eax+eax*2]
		lea     eax, [cs:eax+dr@6d7a4h]
		push    eax
;30:0006d780
		mov     ebx, edx
		push    dword [ebx+1ch]
		mov     eax, [ebx]
		mov     ecx, [ebx+8]
		mov     edx, [ebx+0ch]
		mov     esi, [ebx+14h]
		mov     edi, [ebx+18h]
		mov     ebp, [ebx+10h]
		;mov     es, [ebx+1eh]
		db	8eh,43h,1eh
		;mov     fs, [ebx+20h]
		db	8eh,63h,20h
		;mov     gs, [ebx+22h]
		db	8eh,6bh,22h
		mov     ebx, [ebx+4]
		pop     ds
		retn    
dr@6d7a4h:
db	0cdh,0,0c3h,0cdh,1,0c3h,0cdh,2,0c3h,0cch,90h,0c3h,0cdh,4,0c3h,0cdh
db	5,0c3h,0cdh,6,0c3h,0cdh,7,0c3h,0cdh,8,0c3h,0cdh,9,0c3h,0cdh,0ah
db	0c3h,0cdh,0bh,0c3h,0cdh,0ch,0c3h,0cdh,0dh,0c3h,0cdh,0eh,0c3h,0cdh,0fh,0c3h
db	0cdh,10h,0c3h,0cdh,11h,0c3h,0cdh,12h,0c3h,0cdh,13h,0c3h,0cdh,14h,0c3h,0cdh
db	15h,0c3h,0cdh,16h,0c3h,0cdh,17h,0c3h,0cdh,18h,0c3h,0cdh,19h,0c3h,0cdh,1ah
db	0c3h,0cdh,1bh,0c3h,0cdh,1ch,0c3h,0cdh,1dh,0c3h,0cdh,1eh
db	0c3h,0cdh,1fh,0c3h,0cdh,20h,0c3h,0cdh,21h,0c3h,0cdh,22h,0c3h,0cdh,23h,0c3h
db	0cdh,24h,0c3h,0cdh,25h,0c3h,0cdh,26h,0c3h,0cdh,27h,0c3h,0cdh,28h,0c3h,0cdh
db	29h,0c3h,0cdh,2ah,0c3h,0cdh,2bh,0c3h,0cdh,2ch,0c3h,0cdh,2dh,0c3h,0cdh,2eh
db	0c3h,0cdh,2fh,0c3h,0cdh,30h,0c3h,0cdh,31h,0c3h,0cdh,32h,0c3h,0cdh,33h,0c3h
db	0cdh,34h,0c3h,0cdh,35h,0c3h,0cdh,36h,0c3h,0cdh,37h,0c3h,0cdh,38h,0c3h,0cdh
db	39h,0c3h,0cdh,3ah,0c3h,0cdh,3bh,0c3h,0cdh,3ch,0c3h,0cdh,3dh,0c3h,0cdh,3eh
db	0c3h,0cdh,3fh,0c3h,0cdh,40h,0c3h,0cdh,41h,0c3h,0cdh,42h,0c3h,0cdh,43h,0c3h
db	0cdh,44h,0c3h,0cdh,45h,0c3h,0cdh,46h,0c3h,0cdh,47h,0c3h,0cdh,48h,0c3h,0cdh
db	49h,0c3h,0cdh,4ah,0c3h,0cdh,4bh,0c3h,0cdh,4ch,0c3h,0cdh,4dh,0c3h,0cdh,4eh
db	0c3h,0cdh,4fh,0c3h,0cdh,50h,0c3h,0cdh,51h,0c3h,0cdh,52h,0c3h,0cdh,53h,0c3h
db	0cdh,54h,0c3h,0cdh,55h,0c3h,0cdh,56h,0c3h,0cdh,57h,0c3h,0cdh,58h,0c3h,0cdh
db	59h,0c3h,0cdh,5ah,0c3h,0cdh,5bh,0c3h,0cdh,5ch,0c3h,0cdh,5dh,0c3h,0cdh,5eh
db	0c3h,0cdh,5fh,0c3h,0cdh,60h,0c3h,0cdh,61h,0c3h,0cdh,62h,0c3h,0cdh,63h,0c3h
db	0cdh,64h,0c3h,0cdh,65h,0c3h,0cdh,66h,0c3h,0cdh,67h,0c3h,0cdh,68h,0c3h,0cdh
db	69h,0c3h,0cdh,6ah,0c3h,0cdh,6bh,0c3h,0cdh,6ch,0c3h,0cdh,6dh,0c3h,0cdh,6eh
db	0c3h,0cdh,6fh,0c3h,0cdh,70h,0c3h,0cdh,71h,0c3h,0cdh,72h,0c3h,0cdh,73h,0c3h
db	0cdh,74h,0c3h,0cdh,75h,0c3h,0cdh,76h,0c3h,0cdh,77h,0c3h,0cdh,78h,0c3h,0cdh
db	79h,0c3h,0cdh,7ah,0c3h,0cdh,7bh,0c3h,0cdh,7ch,0c3h,0cdh,7dh,0c3h,0cdh,7eh
db	0c3h,0cdh,7fh,0c3h,0cdh,80h,0c3h,0cdh,81h,0c3h,0cdh,82h,0c3h,0cdh,83h,0c3h
db	0cdh,84h,0c3h,0cdh,85h,0c3h,0cdh,86h,0c3h,0cdh,87h,0c3h,0cdh,88h,0c3h,0cdh
db	89h,0c3h,0cdh,8ah,0c3h,0cdh,8bh,0c3h,0cdh,8ch,0c3h,0cdh,8dh,0c3h,0cdh,8eh
db	0c3h,0cdh,8fh,0c3h,0cdh,90h,0c3h,0cdh,91h,0c3h,0cdh,92h,0c3h,0cdh,93h,0c3h
db	0cdh,94h,0c3h,0cdh,95h,0c3h,0cdh,96h,0c3h,0cdh,97h,0c3h,0cdh,98h,0c3h,0cdh
db	99h,0c3h,0cdh,9ah,0c3h,0cdh,9bh,0c3h,0cdh,9ch,0c3h,0cdh,9dh,0c3h,0cdh,9eh
db	0c3h,0cdh,9fh,0c3h,0cdh,0a0h,0c3h,0cdh,0a1h,0c3h,0cdh,0a2h,0c3h,0cdh,0a3h,0c3h
db	0cdh,0a4h,0c3h,0cdh,0a5h,0c3h,0cdh,0a6h,0c3h,0cdh,0a7h,0c3h,0cdh,0a8h,0c3h,0cdh
db	0a9h,0c3h,0cdh,0aah,0c3h,0cdh,0abh,0c3h,0cdh,0ach,0c3h,0cdh,0adh,0c3h,0cdh,0aeh
db	0c3h,0cdh,0afh,0c3h,0cdh,0b0h,0c3h,0cdh,0b1h,0c3h,0cdh,0b2h,0c3h,0cdh,0b3h,0c3h
db	0cdh,0b4h,0c3h,0cdh,0b5h,0c3h,0cdh,0b6h,0c3h,0cdh,0b7h,0c3h,0cdh,0b8h,0c3h,0cdh
db	0b9h,0c3h,0cdh,0bah,0c3h,0cdh,0bbh,0c3h,0cdh,0bch,0c3h,0cdh,0bdh,0c3h,0cdh,0beh
db	0c3h,0cdh,0bfh,0c3h,0cdh,0c0h,0c3h,0cdh,0c1h,0c3h,0cdh,0c2h,0c3h,0cdh,0c3h,0c3h
db	0cdh,0c4h,0c3h,0cdh,0c5h,0c3h,0cdh,0c6h,0c3h,0cdh,0c7h,0c3h,0cdh,0c8h,0c3h,0cdh
db	0c9h,0c3h,0cdh,0cah,0c3h,0cdh,0cbh,0c3h,0cdh,0cch,0c3h,0cdh,0cdh,0c3h,0cdh,0ceh
db	0c3h,0cdh,0cfh,0c3h,0cdh,0d0h,0c3h,0cdh,0d1h,0c3h,0cdh,0d2h,0c3h,0cdh,0d3h,0c3h
db	0cdh,0d4h,0c3h,0cdh,0d5h,0c3h,0cdh,0d6h,0c3h,0cdh,0d7h,0c3h,0cdh,0d8h,0c3h,0cdh
db	0d9h,0c3h,0cdh,0dah,0c3h,0cdh,0dbh,0c3h,0cdh,0dch,0c3h,0cdh,0ddh,0c3h,0cdh,0deh
db	0c3h,0cdh,0dfh,0c3h,0cdh,0e0h,0c3h,0cdh,0e1h,0c3h,0cdh,0e2h,0c3h,0cdh,0e3h,0c3h
db	0cdh,0e4h,0c3h,0cdh,0e5h,0c3h,0cdh,0e6h,0c3h,0cdh,0e7h,0c3h,0cdh,0e8h,0c3h,0cdh
db	0e9h,0c3h,0cdh,0eah,0c3h,0cdh,0ebh,0c3h,0cdh,0ech,0c3h,0cdh,0edh,0c3h,0cdh,0eeh
db	0c3h,0cdh,0efh,0c3h,0cdh,0f0h,0c3h,0cdh,0f1h,0c3h,0cdh,0f2h,0c3h,0cdh,0f3h,0c3h
db	0cdh,0f4h,0c3h,0cdh,0f5h,0c3h,0cdh,0f6h,0c3h,0cdh,0f7h,0c3h,0cdh,0f8h,0c3h,0cdh
db	0f9h,0c3h,0cdh,0fah,0c3h,0cdh,0fbh,0c3h,0cdh,0fch,0c3h,0cdh,0fdh,0c3h,0cdh,0feh
db	0c3h,0cdh,0ffh,0c3h
cpu 386
%include "macros.inc"

	extern 	printf_

	extern	___680c8h
	extern	___6000fh
	extern	___67e48h
	extern	___24e5c0h
	extern	__STOSD
	extern	___199fe8h
	extern	___199fech
	extern	___199ff0h
	extern	___5fff2h
	extern	___199ff4h
	extern	___68d07h
	extern	___68d01h
	extern	___199ff8h
	extern	___5eefch
	extern	___24e640h
	extern	___6879ch
	extern	SOUND_TYPE
	extern	___19a27bh
	extern	___6815ch
	extern	___19a280h
	extern	___19a281h
	extern	___68cfbh
	extern	___68718h
	extern	___6880ch
	extern	___68c40h
	extern	___199ffch
	extern	___19a000h
	extern	___24e59fh
	extern	___19a28ch
	extern	___19a27ch
	extern	___68c3ch
	extern	___688d0h
	extern	___24e750h
	extern	___68b10h
	extern	___19a279h
	extern	___19a27dh
	extern	___687b8h
	extern	___24e5a0h
	extern	___24e79ch
	extern	___68990h
	extern	___24e798h
	extern	___68a10h
	extern	___68a90h
	extern	___5ed38h
	extern	memset_
	extern	___24e7a0h
	extern	___19a27eh
	extern	___68910h
	extern	___68bach
	extern	___24e5bch
	extern	___19a284h
	extern	___24e7a5h
	extern	___24e7a6h
	extern	___68284h
	extern	___682a4h
	extern	SOUND_ADDR
	extern	SOUND_IRQ
	extern	SOUND_DMA
	extern	___688cch
	extern	___688c5h
	extern	___68d4ch

section .text

db	0dh,0ah,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh
db	2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh
db	2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh
db	2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh
db	2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh
db	2dh,0dh,0ah,20h,45h,53h,50h,20h,4dh,75h,73h,69h,63h,20h,53h,79h
db	73h,74h,65h,6dh,20h,76h,31h,2eh,32h,39h,20h,66h,6fh,72h,20h,57h
db	61h,74h,63h,6fh,6dh,20h,43h,2fh,43h,2bh,2bh,20h,20h,20h,20h,43h
db	75h,72h,72h,65h,6eh,74h,20h,52h,65h,76h,69h,73h,69h,6fh,6eh,20h
db	4dh,61h,72h,63h,68h,20h,31h,37h,74h,68h,2ch,20h,31h,39h,39h,36h
db	0dh,0ah,20h,43h,6fh,70h,79h,72h,69h,67h,68h,74h,20h,28h,63h,29h
db	20h,31h,39h,39h,35h,2ch,20h,31h,39h,39h,36h,20h,62h,79h,20h,4dh
db	61h,72h,6bh,75h,73h,20h,53h,74h,65h,69h,6eh,20h,20h,20h,20h,20h
db	20h,20h,45h,2dh,4dh,61h,69h,6ch,3ah,20h,73h,74h,65h,69h,6eh,6dh
db	40h,63h,73h,2eh,75h,6eh,69h,2dh,62h,6fh,6eh,6eh,2eh,64h,65h,0dh
db	0ah,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh
db	2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh
db	2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh
db	2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh
db	2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,2dh,0dh
db	0ah,0
	align 	4
__GDECL(___64864h)
		sub     esp, byte 4
		mov     [esp], al
		call    ___649a8h
		call    ___680c8h
		mov     eax, ___64a28h
		call    ___6000fh
		xor     eax, eax
		mov     al, [esp+8]
		push    eax
		xor     eax, eax
		and     ebx, 0ffh
		mov     al, [esp+4]
		call    ___67e48h
		mov     ecx, 20h
		mov     edx, 10000h
		mov     eax, ___24e5c0h
		call    __STOSD
		mov     edx, 10000h
		mov     [___199fe8h], edx
		mov     [___199fech], edx
		mov     [___199ff0h], edx
		call    ___65788h
		mov     eax, ___64a28h
		call    ___5fff2h
		add     esp, byte 4
		ret     4
	align 	4
__GDECL(___648d8h)
		push    edx
		cmp     byte [___199ff4h], 0
		je      ___64916h
		xor     dl, dl
		mov     eax, ___68d07h
		mov     [___199ff4h], dl
		call    ___68d01h
		mov     eax, [___199ff8h]
		call    ___5eefch
		xor     edx, edx
		mov     eax, [___24e640h]
		mov     [___199ff8h], edx
		call    ___5eefch
		mov     [___24e640h], edx
___64916h:
		call    ___6879ch
		cmp		byte [SOUND_TYPE], 0
		je      ___6493ch
		cmp     byte [___19a27bh], 0
		je      ___6493ch
		call    ___6815ch
		mov     eax, ___649a8h
		call    ___5fff2h
___6493ch:
		pop     edx
		retn    
	align 	4

__GDECL(___649a8h)
		push    ecx
		push    edx
		cmp     byte [___199ff4h], 0
		je      ___649e7h
		xor     dl, dl
		mov     eax, ___68d07h
		mov     [___199ff4h], dl
		call    ___68d01h
		mov     eax, [___199ff8h]
		call    ___5eefch
		xor     edx, edx
		mov     eax, [___24e640h]
		mov     [___199ff8h], edx
		call    ___5eefch
		mov     [___24e640h], edx
___649e7h:
		cmp		byte [SOUND_TYPE], 0
		je      ___64a19h
		cmp     byte [___19a27bh], 0
		je      ___64a19h
		cmp     byte [___19a280h], 0
		je      ___64a19h
		mov     eax, ___68d07h
		call    ___68cfbh
		xor     cl, cl
		call    ___68718h
		mov     [___19a280h], cl
___64a19h:
		mov     eax, ___649a8h
		call    ___6000fh
		pop     edx
		pop     ecx
		retn    
	align 	4

__GDECL(___64a28h)
		push    ebx
		call    ___653c8h
		cmp		byte [SOUND_TYPE], 0
		je      ___64a60h
		cmp     byte [___19a27bh], 0
		je      ___64a60h
		cmp     byte [___19a280h], 0
		je      ___64a60h
		mov     eax, ___68d07h
		call    ___68cfbh
		xor     bl, bl
		call    ___68718h
		mov     [___19a280h], bl
___64a60h:
		mov     eax, ___649a8h
		call    ___6000fh
		call    ___680c8h
		mov     eax, ___64a28h
		call    ___6000fh
		pop     ebx
		retn    
	align 	4

___64a7ch:
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     [esp+4], eax
		mov     [esp+8], edx
___64a8ch:
		mov     ecx, [esp+8]
		mov     ebx, [esp+4]
		cmp     ebx, ecx
		jge     ___64b55h
		lea     edx, [ebx+ecx*1]
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     edx, [___24e640h]
		imul    eax, [edx+eax*4], byte 21h
		mov     edx, [___199ff8h]
		mov     al, [edx+eax*1+12h]
		and     eax, 0ffh
		mov     [esp+0ch], eax
___64ac5h:
		mov     eax, [___24e640h]
		imul    eax, [eax+ebx*4], byte 21h
		mov     edx, [___199ff8h]
		mov     al, [edx+eax*1+12h]
		mov     edx, [esp+0ch]
		and     eax, 0ffh
		cmp     eax, edx
		jle     ___64ae8h
		inc     ebx
		jmp     ___64ac5h
___64ae8h:
		mov     edi, [___24e640h]
		lea     eax, [ecx*4+0]
___64af5h:
		lea     edx, [edi+eax*1]
		mov     ebp, [edx]
		imul    esi, ebp, byte 21h
		mov     [esp], esi
		mov     ebp, [esp]
		mov     esi, [___199ff8h]
		add     esi, ebp
		movzx   esi, byte [esi+12h]
		mov     [esp], esi
		mov     ebp, [esp]
		lea     esi, [ecx-1]
		cmp     ebp, [esp+0ch]
		jge     ___64b25h
		mov     ecx, esi
		sub     eax, byte 4
		jmp     ___64af5h
___64b25h:
		cmp     ebx, ecx
		jg      ___64b3dh
		lea     eax, [ebx*4+0]
		add     edi, eax
		mov     eax, [edx]
		mov     ecx, [edi]
		mov     [edi], eax
		inc     ebx
		mov     [edx], ecx
		mov     ecx, esi
___64b3dh:
		cmp     ebx, ecx
		jle     ___64ac5h
		mov     eax, [esp+4]
		mov     edx, ecx
		call    ___64a7ch
		mov     [esp+4], ebx
		jmp     ___64a8ch
___64b55h:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
	align 	4

___64b60h:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		cmp     byte [___199ff4h], 0
		je      ___65277h
		cmp     byte [___19a281h], 0
		jne     ___65277h
		call    ___6880ch
		xor     edx, edx
		and     eax, 0ffffh
		mov     dx, [___68c40h]
		imul    eax, edx
		mov     edx, 53e2ch
		imul    edx
		shrd    eax, edx, 10h
		mov     ebp, eax
		xor     edx, edx
		mov     [esp+8], edx
		mov     eax, [esp+8]
		cmp     eax, [___199ffch]
		jge     ___64d28h
___64bbch:
		imul    edx, [esp+8], byte 21h
		mov     eax, [___199ff8h]
		cmp     byte [edx+eax*1+14h], 0
		je      ___64c8dh
		imul    edx, [esp+8], byte 21h
		cmp     byte [edx+eax*1+19h], 0
		je      ___64c74h
		imul    ebx, [esp+8], byte 21h
		mov     edx, [___19a000h]
		inc     edx
		mov     bl, [ebx+eax*1+19h]
		mov     [___19a000h], edx
		mov     [edx+___24e59fh], bl
		imul    edx, [esp+8], byte 21h
		mov     ah, [edx+eax*1+19h]
		mov     al, ah
		cmp 	byte [SOUND_TYPE], 0
		je      ___64c4bh
		cmp     byte [___19a27bh], 0
		je      ___64c4bh
		cmp     dword [___19a28ch], byte 0
		je      ___64c4bh
		test    ah, ah
		je      ___64c4bh
		mov     al, [___19a27ch]
		xor     edx, edx
		add     al, ah
		mov     ebx, [___68c3ch]
		mov     dl, al
		cmp     edx, ebx
		ja      ___64c4bh
		xor     edx, edx
		mov     dl, al
		mov     word [NoSplit edx*2+___688d0h], 0ffffh
___64c4bh:
		and     eax, 0ffh
		mov     ecx, 0ffffh
		mov     dl, 1
		mov     [NoSplit eax*2+___24e750h], cx
		mov     [eax+___68b10h], dl
		imul    edx, [esp+8], byte 21h
		mov     eax, [___199ff8h]
		mov     byte [edx+eax*1+19h], 0
___64c74h:
		imul    edx, [esp+8], byte 21h
		mov     eax, [___199ff8h]
		mov     byte [edx+eax*1+14h], 0
		imul    edx, [esp+8], byte 21h
		mov     byte [edx+eax*1+12h], 0
___64c8dh:
		imul    edx, [esp+8], byte 21h
		mov     eax, [___199ff8h]
		cmp     byte [edx+eax*1+13h], 0
		je      ___64d10h
		imul    edx, [esp+8], byte 21h
		cmp     byte [edx+eax*1+19h], 0
		je      ___64d10h
		imul    edx, [esp+8], byte 21h
		xor     ebx, ebx
		mov     bl, [edx+eax*1+19h]
		mov     edx, [___19a279h]
		sar     edx, 18h
		cmp     byte [edx+ebx*1+___68b10h], 0
		je      ___64d10h
		imul    edx, [esp+8], byte 21h
		lea     ebx, [eax+edx*1]
		imul    edx, [esp+8], byte 21h
		lea     ecx, [eax+edx*1]
		mov     dl, [ebx+12h]
		mov     [ecx+20h], dl
		imul    edx, [esp+8], byte 21h
		mov     byte [edx+eax*1+12h], 0
		imul    edx, [esp+8], byte 21h
		lea     ebx, [eax+edx*1]
		mov     edx, [___19a000h]
		inc     edx
		mov     bl, [ebx+19h]
		mov     [edx+___24e59fh], bl
		mov     [___19a000h], edx
		imul    edx, [esp+8], byte 21h
		mov     byte [edx+eax*1+19h], 0
___64d10h:
		mov     eax, [esp+8]
		inc     dword [esp+8]
		mov     eax, [esp+8]
		cmp     eax, [___199ffch]
		jl      ___64bbch
___64d28h:
		xor     edi, edi
		mov     [esp+8], edi
		mov     eax, [esp+8]
		cmp     eax, [___199ffch]
		jge     ___64d91h
___64d3ah:
		mov     eax, [esp+8]
		mov     edx, [___24e640h]
		shl     eax, 2
		add     edx, eax
		mov     eax, [esp+8]
		mov     [edx], eax
		imul    edx, [esp+8], byte 21h
		mov     eax, [___199ff8h]
		cmp     word [edx+eax*1], byte 0
		je      ___64d81h
		imul    edx, [esp+8], byte 21h
		cmp     byte [edx+eax*1+12h], 0
		jne     ___64d81h
		imul    edx, [esp+8], byte 21h
		lea     ebx, [eax+edx*1]
		imul    edx, [esp+8], byte 21h
		add     edx, eax
		mov     al, [ebx+20h]
		mov     [edx+12h], al
___64d81h:
		inc     dword [esp+8]
		mov     eax, [esp+8]
		cmp     eax, [___199ffch]
		jl      ___64d3ah
___64d91h:
		mov     edx, [___199ffch]
		xor     eax, eax
		dec     edx
		call    ___64a7ch
		xor     eax, eax
		mov     al, [___19a27dh]
		mov     [esp], eax
		xor     ebx, ebx
		mov     [esp+4], ebx
		mov     eax, [esp+4]
		cmp     eax, [___199ffch]
		jge     ___64f04h
___64dbfh:
		mov     eax, [esp+4]
		inc     dword [esp+4]
		mov     edx, [___24e640h]
		mov     eax, [edx+eax*4]
		mov     [esp+8], eax
		imul    edx, [esp+8], byte 21h
		cmp     dword [esp], byte 0
		jle     ___64e07h
		mov     eax, [___199ff8h]
		cmp     byte [edx+eax*1+13h], 0
		je      ___64ef4h
		imul    edx, [esp+8], byte 21h
		cmp     byte [edx+eax*1+12h], 0
		je      ___64ef4h
		dec     dword [esp]
		jmp     ___64ef4h
___64e07h:
		mov     eax, [___199ff8h]
		cmp     byte [edx+eax*1+13h], 0
		je      ___64ef4h
		imul    edx, [esp+8], byte 21h
		cmp     byte [edx+eax*1+12h], 0
		je      ___64ef4h
		imul    edx, [esp+8], byte 21h
		cmp     byte [edx+eax*1+19h], 0
		je      ___64ef4h
		imul    edx, [esp+8], byte 21h
		add     edx, eax
		mov     al, [___19a27ch]
		add     al, [edx+19h]
		and     eax, 0ffh
		call    ___687b8h
		mov     edx, eax
		imul    ebx, [esp+8], byte 21h
		mov     eax, [___199ff8h]
		mov     [ebx+eax*1+15h], edx
		imul    edx, [esp+8], byte 21h
		mov     ah, [edx+eax*1+19h]
		mov     al, ah
		cmp 	byte [SOUND_TYPE], 0
		je      ___64eaeh
		cmp     byte [___19a27bh], 0
		je      ___64eaeh
		cmp     dword [___19a28ch], byte 0
		je      ___64eaeh
		test    ah, ah
		je      ___64eaeh
		mov     al, [___19a27ch]
		xor     edx, edx
		add     al, ah
		mov     ebx, [___68c3ch]
		mov     dl, al
		cmp     edx, ebx
		ja      ___64eaeh
		xor     edx, edx
		mov     dl, al
		mov     word [NoSplit edx*2+___688d0h], 0ffffh
___64eaeh:
		and     eax, 0ffh
		mov     edx, 0ffffh
		mov     bl, 1
		mov     [NoSplit eax*2+___24e750h], dx
		mov     [eax+___68b10h], bl
		imul    eax, [esp+8], byte 21h
		mov     edx, [___199ff8h]
		lea     ebx, [edx+eax*1]
		mov     eax, [___19a000h]
		inc     eax
		mov     bl, [ebx+19h]
		mov     [eax+___24e59fh], bl
		mov     [___19a000h], eax
		imul    eax, [esp+8], byte 21h
		mov     byte [edx+eax*1+19h], 0
___64ef4h:
		mov     eax, [esp+4]
		cmp     eax, [___199ffch]
		jl      ___64dbfh
___64f04h:
		xor     eax, eax
		mov     al, [___19a27dh]
		mov     edi, [esp]
		sub     eax, edi
		mov     [esp], eax
		xor     eax, eax
		mov     [esp+4], eax
		mov     eax, [esp+4]
		cmp     eax, [___199ffch]
		jge     ___65277h
___64f29h:
		mov     eax, [esp+4]
		inc     dword [esp+4]
		mov     edx, [___24e640h]
		mov     eax, [edx+eax*4]
		mov     [esp+8], eax
		imul    edx, [esp+8], byte 21h
		cmp     dword [esp], byte 0
		jle     ___651a2h
		mov     eax, [___199ff8h]
		cmp     byte [edx+eax*1+13h], 0
		je      ___65267h
		imul    edx, [esp+8], byte 21h
		lea     ebx, [eax+edx*1]
		imul    edx, [esp+8], byte 21h
		mov     cx, [ebx]
		add     edx, eax
		test    cx, cx
		je      ___6505eh
		cmp     byte [edx+19h], 0
		jne     ___64f9bh
		mov     ecx, [___19a000h]
		dec     ecx
		mov     [___19a000h], ecx
		imul    edx, [esp+8], byte 21h
		add     edx, eax
		mov     al, [ecx+___24e5a0h]
		mov     [edx+19h], al
___64f9bh:
		imul    edx, [esp+8], byte 21h
		mov     eax, [___199ff8h]
		mov     ebx, [edx+eax*1+0eh]
		imul    edx, [esp+8], byte 21h
		mov     esi, [edx+eax*1+0ah]
		imul    edx, [esp+8], byte 21h
		mov     ecx, [edx+eax*1+6]
		push    ebx
		imul    edx, [esp+0ch], byte 21h
		mov     ebx, [edx+eax*1+2]
		push    esi
		imul    edx, [esp+10h], byte 21h
		mov     dl, [edx+eax*1]
		and     edx, 0ffh
		imul    esi, [esp+10h], byte 21h
		mov     al, [esi+eax*1+19h]
		and     eax, 0ffh
		call    ___654d4h
		imul    edx, [esp+8], byte 21h
		mov     eax, [___199ff8h]
		mov     dx, [edx+eax*1]
		and     edx, 0ffffh
		lea     ebx, [edx*4+0]
		mov     edx, [___24e79ch]
		add     ebx, edx
		imul    edx, [esp+8], byte 21h
		mov     ebx, [ebx]
		mov     [edx+eax*1+1ah], ebx
		imul    edx, [esp+8], byte 21h
		lea     ebx, [eax+edx*1]
		imul    edx, [esp+8], byte 21h
		mov     bx, [ebx]
		mov     [edx+eax*1+1eh], bx
		imul    edx, [esp+8], byte 21h
		lea     ebx, [eax+edx*1]
		imul    edx, [esp+8], byte 21h
		mov     ebx, [ebx+2]
		mov     [edx+eax*1+15h], ebx
		imul    edx, [esp+8], byte 21h
		mov     word [edx+eax*1], 0
		imul    edx, [esp+8], byte 21h
		mov     dword [edx+eax*1+2], 0
		dec     dword [esp]
		jmp     ___65267h
___6505eh:
		cmp     byte [edx+19h], 0
		je      ___65134h
		imul    edx, [esp+8], byte 21h
		mov     dl, [edx+eax*1+19h]
		imul    ecx, [esp+8], byte 21h
		mov     ecx, [ecx+eax*1+6]
		imul    ebx, [esp+8], byte 21h
		mov     esi, [ebx+eax*1+0ah]
		imul    ebx, [esp+8], byte 21h
		mov     eax, [ebx+eax*1+0eh]
		mov     [esp+0ch], eax
		cmp 	byte [SOUND_TYPE], 0
		je      ___6519ah
		cmp     byte [___19a27bh], 0
		je      ___6519ah
		cmp     dword [___19a28ch], byte 0
		je      ___6519ah
		test    dl, dl
		je      ___6519ah
		mov     al, [___19a27ch]
		add     al, dl
		xor     edx, edx
		mov     ebx, [___68c3ch]
		mov     dl, al
		cmp     edx, ebx
		ja      ___6519ah
		xor     ebx, ebx
		mov     bl, al
		mov     ax, [NoSplit ebx*2+___24e750h]
		cmp     ax, word 0ffffh
		je      ___6519ah
		xor     edi, edi
		mov     di, ax
		mov     eax, [___24e79ch]
		mov     edx, esi
		mov     eax, [eax+edi*4]
		imul    edx
		shrd    eax, edx, 10h
		mov     [ebx*4+___68990h], eax
		mov     eax, [___24e798h]
		mov     edx, ecx
		mov     eax, [eax+edi*4]
		imul    edx
		shrd    eax, edx, 10h
		mov     [ebx*4+___68a10h], eax
		mov     eax, [esp+0ch]
		mov     [ebx*4+___68a90h], eax
		dec     dword [esp]
		jmp     ___65267h
___65134h:
		mov     esi, [___19a000h]
		dec     esi
		mov     [___19a000h], esi
		imul    edx, [esp+8], byte 21h
		lea     ecx, [eax+edx*1]
		mov     dl, [esi+___24e5a0h]
		mov     [ecx+19h], dl
		imul    edx, [esp+8], byte 21h
		mov     ecx, [edx+eax*1+0eh]
		imul    edx, [esp+8], byte 21h
		mov     edi, [edx+eax*1+0ah]
		imul    edx, [esp+8], byte 21h
		push    ecx
		mov     ecx, [edx+eax*1+6]
		imul    edx, [esp+0ch], byte 21h
		mov     ebx, [edx+eax*1+15h]
		push    edi
		imul    edx, [esp+10h], byte 21h
		mov     dl, [edx+eax*1+1eh]
		and     edx, 0ffh
		imul    esi, [esp+10h], byte 21h
		mov     al, [esi+eax*1+19h]
		and     eax, 0ffh
		call    ___654d4h
___6519ah:
		dec     dword [esp]
		jmp     ___65267h
___651a2h:
		mov     eax, [___199ff8h]
		cmp     byte [edx+eax*1+13h], 0
		je      ___65267h
		imul    edx, [esp+8], byte 21h
		cmp     word [edx+eax*1], byte 0
		je      ___65229h
		imul    edx, [esp+8], byte 21h
		mov     dx, [edx+eax*1]
		and     edx, 0ffffh
		mov     ebx, [___24e79ch]
		shl     edx, 2
		lea     ecx, [ebx+edx*1]
		imul    edx, [esp+8], byte 21h
		lea     ebx, [eax+edx*1]
		mov     edx, [ecx]
		mov     [ebx+1ah], edx
		imul    ebx, [esp+8], byte 21h
		imul    edx, [esp+8], byte 21h
		lea     ecx, [eax+edx*1]
		mov     dx, [ebx+eax*1]
		mov     [ecx+1eh], dx
		imul    edx, [esp+8], byte 21h
		lea     ebx, [eax+edx*1]
		imul    edx, [esp+8], byte 21h
		lea     ecx, [eax+edx*1]
		mov     edx, [ebx+2]
		mov     [ecx+15h], edx
		imul    edx, [esp+8], byte 21h
		mov     word [edx+eax*1], 0
		imul    edx, [esp+8], byte 21h
		mov     dword [edx+eax*1+2], 0
___65229h:
		imul    edx, [esp+8], byte 21h
		mov     eax, [___199ff8h]
		cmp     byte [edx+eax*1+12h], 0
		je      ___65267h
		imul    ebx, [esp+8], byte 21h
		add     ebx, eax
		imul    edx, [esp+8], byte 21h
		mov     edx, [edx+eax*1+0ah]
		imul    ecx, [esp+8], byte 21h
		mov     eax, [ecx+eax*1+1ah]
		imul    edx
		shrd    eax, edx, 10h
		mov     edx, ebp
		imul    edx
		shrd    eax, edx, 10h
		sar     eax, 10h
		add     [ebx+15h], eax
___65267h:
		mov     eax, [esp+4]
		cmp     eax, [___199ffch]
		jl      ___64f29h
___65277h:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4

___653c8h:
		push    edx
		cmp     byte [___199ff4h], 0
		je      ___65406h
		xor     dl, dl
		mov     eax, ___68d07h
		mov     [___199ff4h], dl
		call    ___68d01h
		mov     eax, [___199ff8h]
		call    ___5eefch
		xor     edx, edx
		mov     eax, [___24e640h]
		mov     [___199ff8h], edx
		call    ___5eefch
		mov     [___24e640h], edx
___65406h:
		pop     edx
		retn    
	align 	4

__GDECL(___654d4h)
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     ebp, ebx
		cmp		byte [SOUND_TYPE], 0
		je      ___655a4h
		cmp     byte [___19a27bh], 0
		je      ___655a4h
		cmp     dword [___19a28ch], byte 0
		je      ___655a4h
		test    al, al
		je      ___655a4h
		add     al, [___19a27ch]
		xor     ebx, ebx
		mov     esi, [___68c3ch]
		mov     bl, al
		cmp     ebx, esi
		ja      ___655a4h
		xor     ebx, ebx
		mov     si, [___24e7a0h]
		mov     bl, dl
		cmp     bx, si
		jg      ___655a4h
		xor     bh, bh
		movzx   esi, al
		mov     [esp], ebx
		mov     eax, [___24e79ch]
		mov     edi, [esp]
		mov     bx, [___19a27eh]
		mov     [esi*4+___68910h], ebp
		add     ebx, edi
		movzx   ebp, dl
		mov     [NoSplit esi*2+___688d0h], bx
		mov     edx, [esp+14h]
		mov     eax, [eax+ebp*4]
		imul    edx
		shrd    eax, edx, 10h
		mov     [esi*4+___68990h], eax
		mov     eax, [___24e798h]
		mov     edx, ecx
		mov     eax, [eax+ebp*4]
		xor     bh, bh
		imul    edx
		shrd    eax, edx, 10h
		mov     [esi*4+___68a10h], eax
		mov     [NoSplit esi*2+___24e750h], di
		mov     eax, [esp+18h]
		mov     [esi+___68b10h], bh
		mov     [esi*4+___68a90h], eax
___655a4h:
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		ret     8
	align 	4
__GDECL(___655b0h)
		push    esi
		push    edi
		push    ebp
		mov     esi, edx
		cmp		byte [SOUND_TYPE], 0
		je      ___65636h
		cmp     byte [___19a27bh], 0
		je      ___65636h
		cmp     dword [___19a28ch], byte 0
		je      ___65636h
		test    al, al
		je      ___65636h
		add     al, [___19a27ch]
		mov     ebp, [___68c3ch]
		movzx   edi, al
		cmp     edi, ebp
		ja      ___65636h
		movzx   ebp, al
		mov     ax, [NoSplit ebp*2+___24e750h]
		cmp     ax, word 0ffffh
		je      ___65636h
		xor     edi, edi
		mov     di, ax
		mov     eax, [___24e79ch]
		mov     edx, ebx
		mov     eax, [eax+edi*4]
		imul    edx
		shrd    eax, edx, 10h
		mov     [ebp*4+___68990h], eax
		mov     eax, [___24e798h]
		mov     edx, esi
		mov     eax, [eax+edi*4]
		imul    edx
		shrd    eax, edx, 10h
		mov     [ebp*4+___68a10h], eax
		mov     [ebp*4+___68a90h], ecx
___65636h:
		pop     ebp
		pop     edi
		pop     esi
		retn    
	align 	4

__GDECL(___6563ch)
		push    ebx
		push    ecx
		push    edx
		cmp		byte [SOUND_TYPE], 0
		je      ___65680h
		cmp     byte [___19a27bh], 0
		je      ___65680h
		cmp     dword [___19a28ch], byte 0
		je      ___65680h
		test    al, al
		je      ___65680h
		add     al, [___19a27ch]
		xor     edx, edx
		mov     ebx, [___68c3ch]
		mov     dl, al
		cmp     edx, ebx
		ja      ___65680h
		xor     edx, edx
		mov     dl, al
		mov     word [NoSplit edx*2+___688d0h], 0ffffh
___65680h:
		and     eax, 0ffh
		mov     ecx, 0ffffh
		mov     bl, 1
		mov     [NoSplit eax*2+___24e750h], cx
		mov     [eax+___68b10h], bl
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___6569eh:
		xor     ebx, ebx
		xor     ecx, ecx
		jmp     ___656cdh
___656a4h:
		mov     edx, [___199fech]
		mov     eax, [___199fe8h]
		mov     esi, [ebx+___24e5c0h]
		imul    edx
		shrd    eax, edx, 10h
		add     ebx, byte 4
		mov     edx, esi
		inc     ecx
		imul    edx
		shrd    eax, edx, 10h
		mov     [ebx+___68bach], eax
___656cdh:
		mov     esi, [___19a279h]
		sar     esi, 18h
		cmp     ecx, esi
		jle     ___656a4h
		inc     esi
		cmp     esi, byte 20h
		jge     ___6570ah
		lea     ebx, [esi*4+0]
___656e7h:
		mov     edx, [___199ff0h]
		mov     eax, [___199fe8h]
		add     ebx, byte 4
		imul    edx
		shrd    eax, edx, 10h
		inc     esi
		mov     [ebx+___68bach], eax
		cmp     ebx, 80h
		jl      ___656e7h
___6570ah:
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
___6570eh:
		retn    
	align 	4

__GDECL(___65710h)
		cmp		byte [SOUND_TYPE], 0
		je      ___6570eh
		cmp     byte [___19a27bh], 0
		je      ___6570eh
		mov     [___199fe8h], eax
		jmp     ___65788h
__GDECL(___6572ch)
		cmp		byte [SOUND_TYPE], 0
		je      ___6570eh
		cmp     byte [___19a27bh], 0
		je      ___6570eh
		mov     [___199fech], eax
		jmp     ___65788h
	align 	4

__GDECL(___65770h)
		cmp		byte [SOUND_TYPE], 0
		je      ___6570eh
		cmp     byte [___19a27bh], 0
		je      ___6570eh
		mov     [___199ff0h], eax
		nop     
___65788h:
		push    ebx
		push    ecx
		push    edx
		push    esi
		cmp     dword [___19a28ch], byte 0
		jne     ___6569eh
		xor     ebx, ebx
___6579bh:
		mov     edx, [___199fech]
		mov     eax, [___199fe8h]
		mov     ecx, [ebx+___24e5c0h]
		imul    edx
		shrd    eax, edx, 10h
		mov     edx, ecx
		add     ebx, byte 4
		imul    edx
		shrd    eax, edx, 10h
		mov     [ebx+___68bach], eax
		cmp     ebx, 80h
		je      ___6570ah
		jmp     ___6579bh
	align 	4

__GDECL(___658b0h)
		jmp     ___68284h
	align 	4

__GDECL(___658b8h)
		jmp     ___682a4h
	align 	4

__GDECL(___658d0h)
		mov     [SOUND_ADDR], dx
		mov     [SOUND_IRQ], bl
		mov     [SOUND_DMA], cl
		test    al, al
		setne 	al
		mov     [SOUND_TYPE], al
		retn
	align 	4

__GDECL(___65990h)
		cmp     ax, word 1f40h
		jae     ___6599bh
		mov     eax, 1f40h
___6599bh:
		cmp     ax, word 0ac44h
		jbe     ___659a6h
		mov     eax, 0ac44h
___659a6h:
		mov     [___688cch], ax
		retn    
	align 	4

__GDECL(___659b8h)
		test    al, al
		setne   al
		and     eax, 0ffh
		mov     [___68d4ch], al
		retn    

cpu 386
%include "macros.inc"

	extern 	__MOVS
	extern	___24e794h
	extern	___5ed38h
	extern	memset_
	extern	___24e790h
	extern	___24e7a4h
	extern	___24e79ch
	extern	___24e798h
	extern	___5f080h
	extern	___5eefch
	extern	___19a288h
	extern	___71590h
	extern	___19a284h
	extern	___7552ch
	extern	___19a290h
	extern	___19a28ch
	extern	___19a27ch
	extern	___716fch
	extern	___75840h
	extern	___19a27eh
	extern	___24e7a2h
	extern	___19a27dh
	extern	___19a279h
	extern	___24e7a0h
	extern	___68d58h
	extern	___24e79eh
	extern	___19a27bh
	extern	___71a38h
	;extern	___75cf4h
	extern	___718ech
	;extern	___75c30h
	extern	__STOSD
	extern	___19a278h
	;extern	___75d70h
	;extern	___76547h
	extern	___771f4h
	extern	___775f1h
	;extern	___77a60h
	;extern	___77bd4h
	;extern	___77c14h
	;extern	___77d68h
	;extern	___75e50h
	extern	___19a27ah
	extern	___19a280h
	extern	___19a281h
	extern	___71a44h
	;extern	___75d00h
	extern	___71a88h
	;extern	___75d44h
	;extern	___75db0h
	;extern	___77ddbh
	;extern	___75e20h
	;extern	___76fd6h
	extern	___24e650h
	extern	___24e6cch
;	extern	___76be2h
	extern	___771b0h
;	extern	___77d2ch
	;extern	___75e34h
;	extern	___780e8h
	extern	___78111h
	extern	___6bcf9h
	extern	getenv_

section .text

___677c0h:
db	78h,20h,65h,66h,20h,20h,78h,78h,0,8dh,40h,0
___677cch:
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     edi, [___24e794h]
		mov     esi, eax
		mov     ecx, edx
		mov     [esp+4], bl
		mov     edx, eax
		mov     [___24e794h], edi
		lea     eax, [ecx*4+0]
		sub     eax, ecx
		add     eax, eax
		add     eax, edx
		mov     edx, 1
		add     eax, byte 2
		mov     ebx, 2
		call    near ___5ed38h
		xor     edx, edx
		mov     [___24e794h], eax
		call    near memset_
		mov     edi, [___24e794h]
		lea     eax, [edi+2]
		mov     [___24e790h], eax
		xor     ah, ah
		mov     dl, [esp+4]
		mov     [___24e7a4h], ah
		test    dl, dl
		jne     near ___67902h
		lea     ebx, [ecx*8+0]
		lea     eax, [ecx*4+0]
		add     eax, ecx
		shl     eax, 2
		lea     edx, [ecx+eax*1]
		lea     eax, [ebx+8]
		add     eax, edx
		mov     edx, 1
		lea     esi, [ecx*4+0]
		call    near ___5ed38h
		lea     edx, [esi+4]
		mov     [___24e79ch], eax
		add     eax, edx
		mov     [___24e798h], eax
		add     eax, edx
		mov     [___68c38h], eax
		test    ecx, ecx
		jle     short ___67902h
		mov     ebp, esi
		mov     [esp], esi
		xor     edx, edx
		xor     ebx, ebx
___678c8h:
		mov     ecx, [esp]
		mov     eax, [___68c38h]
		add     ecx, eax
		add     ecx, ebx
		mov     edi, [___24e794h]
		mov     [edx+eax*1], ecx
		mov     [ecx], edi
		mov     esi, [edx+eax*1]
		mov     [esi+4], edi
		mov     esi, [edx+eax*1]
		mov     [esi+8], edi
		mov     esi, [edx+eax*1]
		mov     [esi+0ch], edi
		mov     eax, [edx+eax*1]
		add     edx, byte 4
		add     ebx, byte 11h
		mov     byte [eax+10h], 0
		cmp     edx, ebp
		jl      short ___678c8h
___67902h:
		mov     edi, [___24e794h]
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
	align 	4


__GDECL(___67994h)
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     ebp, eax
		mov     [esp+4], ecx
		xor     eax, eax
		mov     ecx, edx
		sub     ecx, ebp
		mov     esi, eax
		inc     ecx
		test    eax, eax
		je      near ___67a4fh
		mov     edi, [___24e790h]
		mov     [esp+8], edi
		mov     edi, [___24e794h]
		sub     [esp+8], edi
		mov     edi, [esp+8]
		mov     [esp], edi
		add     edi, eax
		dec     eax
		not     eax
		and     eax, edi
		mov     edi, [esp]
		add     edi, ecx
		cmp     eax, edi
		jge     short ___67a1ah
		mov     edi, [___24e794h]
		add     eax, edi
		add     eax, byte 2
		mov     [___24e790h], eax
___67a1ah:
		cmp     ecx, esi
		jle     short ___67a4fh
		lea     edx, [esi+ebp*1-4]
		cmp     ebx, edx
		jle     short ___67a33h
		mov     ah, [esp+1ch]
		and     ah, 0fch
		mov     ebx, ebp
		mov     [esp+1ch], ah
___67a33h:
		cmp     edx, [esp+4]
		jge     short ___67a3dh
		mov     [esp+4], edx
___67a3dh:
		mov     eax, [esp+4]
		sar     esi, 6
		sub     eax, ebx
		cmp     eax, esi
		jg      short ___67a4fh
		and     byte [esp+1ch], 0fch
___67a4fh:
		mov     edi, [___24e790h]
		mov     esi, ebp
		call 	__MOVS
		xor     eax, eax
		mov     al, [___24e7a4h]
		mov     ecx, [___68c38h]
		shl     eax, 2
		add     eax, ecx
		mov     esi, [eax]
		mov     ecx, [___24e790h]
		mov     [esi], ecx
		lea     esi, [ecx+edx*1]
		mov     edi, [eax]
		sub     esi, ebp
		mov     [edi+4], esi
		lea     esi, [ebx+ecx*1]
		mov     ebx, [eax]
		sub     esi, ebp
		mov     [ebx+8], esi
		mov     ebx, [esp+4]
		add     ebx, ecx
		mov     esi, [eax]
		sub     ebx, ebp
		sub     edx, ebp
		mov     [esi+0ch], ebx
		inc     edx
		mov     eax, [eax]
		mov     bl, [esp+1ch]
		add     ecx, edx
		mov     [eax+10h], bl
		mov     al, bl
		mov     [___24e790h], ecx
		test    bl, 4
		setnz   ah
		movzx   esi, ah
		inc     esi
		mov     edx, esi
		test    bl, 3
		jne     short ___67ae6h
		xor     eax, eax
		mov     al, [___24e7a4h]
		lea     ebx, [eax*4+0]
		mov     eax, [___68c38h]
		mov     esi, [ebx+eax*1]
		mov     esi, [esi+4]
		jmp     short ___67b1eh
___67ae6h:
		and     al, 3
		cmp     al, 1
		jne     short ___67b07h
		xor     eax, eax
		mov     al, [___24e7a4h]
		lea     ebx, [eax*4+0]
		mov     eax, [___68c38h]
		mov     esi, [ebx+eax*1]
		mov     esi, [esi+8]
		jmp     short ___67b1eh
___67b07h:
		xor     ebx, ebx
		mov     eax, [___68c38h]
		mov     bl, [___24e7a4h]
		mov     eax, [eax+ebx*4]
		mov     eax, [eax+0ch]
		sub     eax, esi
		mov     esi, eax
___67b1eh:
		mov     edi, [___24e790h]
		mov     ecx, edx
		call 	__MOVS
		mov     ebx, [___24e790h]
		add     ebx, edx
		mov     [___24e790h], ebx
		lea     eax, [ebx+3]
		and     al, 0fch
		mov     dl, [___24e7a4h]
		mov     [___24e790h], eax
		xor     eax, eax
		mov     al, dl
		inc     dl
		mov     [___24e7a4h], dl
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		ret     4
	align 	4

___67bbch:
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 3ch
		mov     [esp+1ch], eax
		mov     [esp+18h], edx
		mov     [esp+10h], ebx
		mov     [esp+14h], ecx
		mov     ebp, [___24e790h]
		sub     ebp, [___24e794h]
		mov     edx, 1
		mov     eax, ebp
		call    near ___5ed38h
		mov     ecx, ebp
		mov     ebx, [___24e794h]
		mov     [esp+0ch], eax
		mov     edi, eax
		mov     esi, ebx
		mov     edx, eax
		call 	__MOVS
		sub     edx, ebx
		mov     ecx, [___24e794h]
		xor     eax, eax
		mov     [esp+4], edx
		mov     al, [___24e7a4h]
		mov     dl, 1
		mov     [esp], eax
		test    ecx, ecx
		je      short ___67c37h
		mov     eax, ecx
		xor     esi, esi
		call    near ___5eefch
		mov     [___24e794h], esi
___67c37h:
		test    dl, dl
		jne     short ___67c45h
		mov     eax, [___24e79ch]
		call    near ___5eefch
___67c45h:
		mov     ebx, 1
		mov     edx, [esp]
		mov     eax, ebp
		call    near ___677cch
		xor     edi, edi
		mov     ebp, [esp]
		mov     [esp+24h], edi
		test    ebp, ebp
		jle     near ___67e23h
		mov     [esp+20h], edi
___67c69h:
		mov     esi, [esp+20h]
		mov     edx, [___68c38h]
		add     edx, esi
		mov     edx, [edx]
		mov     ebx, [esp+4]
		mov     eax, [edx]
		add     ebx, eax
		mov     [esp+2ch], ebx
		mov     eax, [edx+4]
		mov     ebx, [esp+4]
		add     ebx, eax
		mov     [esp+34h], ebx
		mov     eax, [edx+8]
		mov     ebx, [esp+4]
		add     ebx, eax
		mov     [esp+8], ebx
		mov     eax, [edx+0ch]
		mov     ebx, [esp+4]
		add     ebx, eax
		mov     al, [edx+10h]
		mov     edi, [esp+10h]
		mov     [esp+38h], al
		mov     eax, [esp+24h]
		mov     [esp+28h], ebx
		cmp     eax, edi
		jl      near ___67de8h
		cmp     eax, [esp+14h]
		jge     near ___67de8h
		cmp     dword [esp+1ch], byte 0
		je      near ___67d4bh
		test    byte [esp+38h], 4
		je      short ___67d4bh
		mov     edx, [esp+2ch]
		mov     ebx, [esp+34h]
		mov     ebp, edx
		cmp     edx, ebx
		ja      short ___67d00h
		mov     ecx, [esp+34h]
___67cefh:
		mov     bl, [edx+1]
		inc     ebp
		xor     bl, 80h
		add     edx, byte 2
		mov     [ebp-1], bl
		cmp     edx, ecx
		jbe     short ___67cefh
___67d00h:
		mov     edx, [esp+34h]
		mov     esi, [esp+2ch]
		sub     edx, esi
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		lea     edx, [esi+eax*1]
		mov     [esp+34h], edx
		mov     edx, [esp+8]
		sub     edx, esi
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		lea     edx, [esi+eax*1]
		mov     [esp+8], edx
		mov     edx, [esp+28h]
		sub     edx, esi
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		lea     edx, [esi+eax*1]
		mov     [esp+28h], edx
		and     byte [esp+38h], 0fbh
___67d4bh:
		cmp     dword [esp+18h], byte 0
		je      near ___67de8h
		mov     edx, [esp+2ch]
		mov     cl, [esp+38h]
		mov     ebx, edx
		test    cl, 4
		setnz   al
		and     eax, 0ffh
		inc     eax
		mov     ecx, [esp+34h]
		mov     ebp, eax
		cmp     edx, ecx
		ja      short ___67da2h
		add     eax, eax
		mov     [esp+30h], eax
___67d7ch:
		mov     ecx, ebp
		mov     esi, edx
		mov     edi, ebx
		call 	__MOVS
		mov     esi, [esp+30h]
		mov     edi, [esp+34h]
		add     edx, esi
		add     ebx, ebp
		cmp     edx, edi
		jbe     short ___67d7ch
___67da2h:
		mov     edx, [esp+34h]
		mov     ebp, [esp+2ch]
		sub     edx, ebp
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		lea     edx, [eax+ebp*1]
		mov     [esp+34h], edx
		mov     edx, [esp+8]
		sub     edx, ebp
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		lea     edx, [eax+ebp*1]
		mov     [esp+8], edx
		mov     edx, [esp+28h]
		sub     edx, ebp
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		lea     edx, [eax+ebp*1]
		mov     [esp+28h], edx
___67de8h:
		xor     eax, eax
		mov     ecx, [esp+28h]
		mov     al, [esp+38h]
		mov     ebx, [esp+8]
		push    eax
		mov     edx, [esp+38h]
		mov     eax, [esp+30h]
		call    near ___67994h
		mov     eax, [esp+20h]
		mov     edx, [esp+24h]
		mov     ebx, [esp]
		add     eax, byte 4
		inc     edx
		mov     [esp+20h], eax
		mov     [esp+24h], edx
		cmp     edx, ebx
		jl      near ___67c69h
___67e23h:
		mov     eax, [esp+0ch]
		call    near ___5eefch
		mov     ecx, [___24e794h]
		mov     edx, [___24e790h]
		mov     eax, ecx
		sub     edx, ecx
		call    near ___5f080h
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		retn    
__GDECL(___67e48h)
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     edi, ebx
		mov     esi, ecx
		xor     ebx, ebx
		mov     [esp+8], ebx
		mov     [esp+4], ebx
		mov     [esp], ebx
		mov     [esp+0ch], ebx
		test    eax, eax
		jne     short ___67e69h
		xor     edx, edx
___67e69h:
		test    edi, edi
		jne     short ___67e6fh
		xor     esi, esi
___67e6fh:
		test    edx, edx
		jne     short ___67e75h
		xor     eax, eax
___67e75h:
		test    esi, esi
		jne     short ___67e7bh
		xor     edi, edi
___67e7bh:
		test    edx, edx
		jne     short ___67e87h
		test    esi, esi
		je      near ___680bdh
___67e87h:
		test    esi, esi
		je      short ___67e9ah
		cmp     dword [esp+20h], byte 1
		jge     short ___67e9ah
		mov     dword [esp+20h], 1
___67e9ah:
		test    esi, esi
		jne     short ___67ea2h
		mov     [esp+20h], esi
___67ea2h:
		mov     [___19a288h], eax
		cmp     eax, byte 1
		jb      short ___67ee7h
		lea     ecx, [esp+8]
		lea     ebx, [esp+0ch]
		mov     eax, 1
		call    near ___71590h
		mov     [___19a284h], eax
		jmp     short ___67eefh
___67ee7h:
		xor     ecx, ecx
		mov     [___19a288h], ecx
___67eefh:
		mov     [___19a290h], edi
		cmp     edi, byte 1
		jb      short ___67f2fh
		jbe     short ___67f03h
		cmp     edi, byte 2
		je      short ___67f19h
		jmp     short ___67f2fh
___67f03h:
		mov     ecx, esp
		lea     ebx, [esp+4]
		mov     edx, esi
		xor     eax, eax
		call    near ___71590h
		mov     [___19a28ch], eax
		jmp     short ___67f37h
___67f19h:
		mov     ecx, esp
		lea     ebx, [esp+4]
		mov     edx, esi
		xor     eax, eax
		call    near ___7552ch
		mov     [___19a28ch], eax
		jmp     short ___67f37h
___67f2fh:
		xor     esi, esi
		mov     [___19a290h], esi
___67f37h:
		mov     edx, [esp+8]
		mov     edi, [esp]
		mov     eax, [esp+0ch]
		mov     ebp, [esp+4]
		xor     ebx, ebx
		add     edx, edi
		add     eax, ebp
		call    near ___677cch
		mov     byte [___19a27ch], 0ffh
		mov     eax, [___19a288h]
		cmp     eax, byte 1
		jb      short ___67f9ch
		mov     ebx, [esp+0ch]
		mov     eax, 1
		mov     edx, [___19a284h]
		call    near ___716fch
		dec     al
		mov     [___19a27ch], al
___67f9ch:
		xor     eax, eax
		mov     al, [___24e7a4h]
		mov     [___19a27eh], ax
		mov     [___24e7a2h], ax
		mov     al, [esp+20h]
		mov     [___19a27dh], al
		mov     eax, [___19a290h]
		cmp     eax, byte 1
		jb      short ___67fefh
		jbe     short ___67fcbh
		cmp     eax, byte 2
		je      short ___67fdeh
		jmp     short ___67fefh
___67fcbh:
		mov     ebx, [esp+4]
		mov     edx, [___19a28ch]
		xor     eax, eax
		call    near ___716fch
		jmp     short ___67fefh
___67fdeh:
		mov     ebx, [esp+4]
		mov     edx, [___19a28ch]
		xor     eax, eax
		call    near ___75840h
___67fefh:
		xor     eax, eax
		mov     edx, [___19a279h]
		mov     al, [___19a27dh]
		sar     edx, 18h
		add     edx, eax
		mov     eax, [___24e790h]
		mov     [___68c3ch], edx
		mov     edx, [___24e794h]
		sub     eax, edx
		mov     ebx, edx
		mov     edx, eax
		mov     eax, ebx
		call    near ___5f080h
		xor     eax, eax
		mov     dx, [___24e7a2h]
		mov     al, [___24e7a4h]
		sub     eax, edx
		mov     ebx, [___19a28ch]
		mov     [___24e7a0h], ax
		test    ebx, ebx
		je      short ___68046h
		mov     eax, ebx
		call    near ___5eefch
___68046h:
		cmp		byte [SOUND_TYPE], 0
		je      short ___68089h
		cmp     byte [___68d58h], 0
		setnz   al
		and     eax, 0ffh
		jmp     short ___6808bh
___68089h:
		xor     eax, eax
___6808bh:
		test    eax, eax
		jne     short ___680b0h
		mov     eax, [___24e7a0h]
		mov     ecx, [___24e79eh]
		xor     ebx, ebx
		sar     eax, 10h
		sar     ecx, 10h
		xor     edx, edx
		add     ecx, eax
		mov     eax, 1
		call    near ___67bbch
___680b0h:
		mov     dh, 1
		mov     [___19a27bh], dh
___680bdh:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		ret     4
	align 	4
__GDECL(___680c8h)
		push    ebx
		push    edx
		push    esi
		push    edi
		push    ebp
		cmp     byte [___19a27bh], 0
		je      near ___68156h
		cmp     dword [___19a284h], byte 0
		je      short ___68114h
		mov     eax, [___19a288h]
		cmp     eax, byte 1
		jb      short ___68102h
		call    near ___71a38h
___68102h:
		mov     eax, [___19a284h]
		xor     ebx, ebx
		call    near ___5eefch
		mov     [___19a284h], ebx
___68114h:
		cmp     dword [___19a28ch], byte 0
		je      short ___68125h
		xor     esi, esi
		mov     [___19a28ch], esi
___68125h:
		mov     edi, [___24e794h]
		xor     dl, dl
		test    edi, edi
		je      short ___68140h
		mov     eax, edi
		xor     ebp, ebp
		call    near ___5eefch
		mov     [___24e794h], ebp
___68140h:
		test    dl, dl
		jne     short ___6814eh
		mov     eax, [___24e79ch]
		call    near ___5eefch
___6814eh:
		xor     dl, dl
		mov     [___19a27bh], dl
___68156h:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ebx
		retn    
__GDECL(___6815ch)
		push    ebx
		push    ecx
		push    edx
		cmp     byte [___19a27bh], 0
		je      near ___6827eh
		cmp     dword [___19a284h], byte 0
		je      short ___681a0h
		mov     eax, [___19a288h]
		cmp     eax, byte 1
		jb      near ___6827eh
___6818eh:
		call    near ___718ech
		pop     edx
		pop     ecx
		pop     ebx
		retn     
___681a0h:
		call    near ___68c42h
		mov     edx, 2eeh
		mov     ecx, 20h
		mov     eax, ___68a90h
		mov     [___68c40h], dx
		mov     edx, 8000h
		call    near __STOSD
		call    near ___68858h
		cmp     byte [___19a278h], 0
		jne     near ___6826eh
		cmp 	byte [SOUND_TYPE], 0
		je      ___6825eh
		call    near ___771f4h
		call    near ___775f1h
___6825eh:
		xor     bl, bl
		mov     dh, 1
		mov     [___19a27ah], bl
		mov     [___19a278h], dh
___6826eh:
		mov     cl, 1
		xor     bh, bh
		mov     [___19a280h], cl
		mov     [___19a281h], bh
___6827eh:
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4
__GDECL(___68284h)
		mov     eax, [___19a288h]
		cmp     eax, byte 1
		jb      ___6829dh
		jmp     ___71a44h
___6829dh:
		mov     eax, 0ffffffffh
		retn    
	align 	4
__GDECL(___682a4h)
		push    edx
		mov     edx, [___19a288h]
		cmp     edx, byte 1
		jb      short ___682c9h
		call    near ___71a88h
		pop     edx
		retn    
___682c9h:
		xor     al, al
		pop     edx
		retn    
	align 	4
__GDECL(___685a4h)
		push    edx
		call    near ___68858h
		cmp     byte [___19a278h], 0
		jne     near ___68681h
		cmp		byte [SOUND_TYPE], 0
		je      short ___68672h
		call    near ___771f4h
		call    near ___775f1h   
___68672h:
		mov     byte [___19a278h], 1
		xor     dh, dh
		mov     [___19a27ah], dh
___68681h:
		pop     edx
		retn    
	align 	4

__GDECL(___68718h)
		push    edx
		cmp     byte [___19a278h], 0
		je      near ___6877eh
		cmp		byte [SOUND_TYPE], 0
		je      ___68776h
		call    near ___771b0h
___68776h:
		xor     dl, dl
		mov     [___19a278h], dl
___6877eh:
		pop     edx
		retn    
	align 	4


__GDECL(___6879ch)
		push    edx
		cmp     byte [___19a279h], 0
		je      short ___687b3h
		xor     dl, dl
		call    near ___78111h
		mov     [___19a279h], dl
___687b3h:
		pop     edx
		retn    
	align 	4
__GDECL(___687b8h)
		cmp     byte [___19a278h], 0
		je      ___68808h
		cmp 	byte [SOUND_TYPE], 0
		je      ___68808h
		and     eax, 0ffh
		jmp     ___6bcf9h
___68808h:
		xor     eax, eax
		retn    
	align 	4
__GDECL(___6880ch)
		mov     al, [___19a278h]
		test    al, al
		je      ___68851h
		cmp 	byte [SOUND_TYPE], 0
		je      ___68851h
		mov     ax, [___688cch]
		retn    
___68851h:
		xor     eax, eax
		retn    
	align 	4

___68858h:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 0ch
		mov     edi, esp
		mov     esi, ___677c0h
		mov     ah, 69h
		movsd   
		movsd   
		movsb   
		mov     dl, 73h
		mov     bl, [esp]
		mov     cl, [esp+3]
		mov     [esp+1], ah
		mov     [esp+4], dl
		mov     dh, 55h
		mov     eax, esp
		sub     bl, 2ch
		dec     cl
		mov     [esp], bl
		mov     bh, [esp+2]
		mov     [esp+5], dh
		inc     bh
		mov     [esp+3], cl
		mov     [esp+2], bh
		call    near getenv_
		test    eax, eax
		je      short ___688a9h
		call    near ___68d08h
___688a9h:
		add     esp, byte 0ch
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	10h


__GDECL(___68c42h)
		pushad  
		xor     edi, edi
		xor     eax, eax
		mov     ecx, 20h
___68c4ch:
		mov     word [NoSplit edi*2+___688d0h], 0ffffh
		mov     [edi*4+___68910h], eax
		mov     [edi*4+___68990h], eax
		mov     [edi*4+___68a10h], eax
		mov     byte [edi+___68b10h], 1
		mov     [edi*4+___68b30h], eax
		inc     edi
		loop    ___68c4ch
		popad   
		retn    


__GDECL(___68cfbh)
		mov     [___68c30h], eax
		retn    
__GDECL(___68d01h)
		mov     [___68c34h], eax
		retn    
__GDECL(___68d07h)
		retn    
___68d08h:
		pushad  
		xor     ecx, ecx
		inc     cl
		shl     ecx, 14h
___68d10h:
		mov     dh, 2
		mov     dl, 0c8h
		inc     dh
		xor     al, al
		out     dx, al
		inc     dl
		xchg    al, cl
		out     dx, al
		xchg    al, cl
		out     dx, al
		out     dx, al
		loop    ___68d10h
		popad   
		retn    


section .data

__GDECL(SOUND_TYPE)
db	0
__GDECL(SOUND_ADDR)
db	0,0
__GDECL(SOUND_IRQ)
db	0
__GDECL(SOUND_DMA)
db	0
__GDECL(___688c5h)
db	64h,8bh,0c0h
__GDECL(___688c8h)
db	0,0,0,0
__GDECL(___688cch)
db	22h,56h
___688ceh:
db	0,90h
__GDECL(___688d0h)
db	0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh
db	0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh
db	0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh
db	0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh,0ffh
__GDECL(___68910h)
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0
___6898ch:
db	0,0,0,0
__GDECL(___68990h)
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0
__GDECL(___68a0ch)
db	0,0,0,0
__GDECL(___68a10h)
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0
__GDECL(___68a8ch)
db	0,0,0,0
__GDECL(___68a90h)
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
__GDECL(___68b10h)
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
__GDECL(___68b30h)
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0
__GDECL(___68bach)
db	0,0,0,0
__GDECL(___68bb0h)
db	0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0
db	0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0
db	0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0
db	0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0
db	0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0
db	0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0
db	0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0
db	0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0
__GDECL(___68c30h)
dd	___68d07h
__GDECL(___68c34h)
dd	___68d07h
__GDECL(___68c38h)
db	0,0,0,0
__GDECL(___68c3ch)
db	0,0,0,0
__GDECL(___68c40h)
db	0,0

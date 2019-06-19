%include "macros.inc"

    extern  __CEXT_F(___5f080h)
    extern  __CEXT_F(___677cch)
    extern  __CEXT_F(___67bbch)
    extern  __CEXT_F(___68398h)
    extern  __CEXT_V(___68c3ch)
    extern  __CEXT_V(___68d58h)
    extern  __CEXT_F(___716fch)
    extern  __CEXT_F(___75840h)
    extern  __CEXT_V(___19a279h)
    extern  __CEXT_V(___19a27ch)
    extern  __CEXT_V(SFX_Number)
    extern  __CEXT_V(___19a27eh)
    extern  __CEXT_V(MSX_Tracker)
    extern  __CEXT_V(SFX_Ptr)
    extern  __CEXT_V(SFX_Tracker)
    extern  __CEXT_V(___24e790h)
    extern  __CEXT_V(___24e794h)
    extern  __CEXT_V(___24e79eh)
    extern  __CEXT_V(___24e7a0h)
    extern  __CEXT_V(___24e7a2h)
    extern  __CEXT_V(___24e7a4h)

    extern  __CEXT_F(loadS3M)
    extern  __CEXT_V(MSX_Ptr)
    extern  __CEXT_F(loadXM)
    extern  __CEXT_F(freeMemory)
    extern  __CEXT_V(Sound_CardType)
    extern  __CEXT_V(IsSoundEnabled)

%include "layout.inc"

section @text

;; 67e48h
__GDECL(__CEXT_F(___67e48h__tbd))
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
		jne     ___67e69h
		xor     edx, edx
___67e69h:
		test    edi, edi
		jne     ___67e6fh
		xor     esi, esi
___67e6fh:
		test    edx, edx
		jne     ___67e75h
		xor     eax, eax
___67e75h:
		test    esi, esi
		jne     ___67e7bh
		xor     edi, edi
___67e7bh:
		test    edx, edx
		jne     ___67e87h
		test    esi, esi
		je      ___680bdh
___67e87h:
		test    esi, esi
		je      ___67e9ah
		cmp     dword [esp+20h], byte 1
		jge     ___67e9ah
		mov     dword [esp+20h], 1
___67e9ah:
		test    esi, esi
		jne     ___67ea2h
		mov     [esp+20h], esi
___67ea2h:
		mov     [__CEXT_V(MSX_Tracker)], eax
		cmp     eax, byte 1
		jb      ___67ee7h
		jbe     ___67eb5h
		cmp     eax, byte 2
		je      ___67eceh
		jmp     ___67ee7h
___67eb5h:
		lea     ecx, [esp+8]
		lea     ebx, [esp+0ch]
		mov     eax, 1
		call    __CEXT_F(loadS3M)
		mov     [__CEXT_V(MSX_Ptr)], eax
		jmp     ___67eefh
___67eceh:
		lea     ecx, [esp+8]
		lea     ebx, [esp+0ch]
		mov     eax, 1
		call    __CEXT_F(loadXM)
		mov     [__CEXT_V(MSX_Ptr)], eax
		jmp     ___67eefh
___67ee7h:
		xor     ecx, ecx
		mov     [__CEXT_V(MSX_Tracker)], ecx
___67eefh:
		mov     [__CEXT_V(SFX_Tracker)], edi
		cmp     edi, byte 1
		jb      ___67f2fh
		jbe     ___67f03h
		cmp     edi, byte 2
		je      ___67f19h
		jmp     ___67f2fh
___67f03h:
		mov     ecx, esp
		lea     ebx, [esp+4]
		mov     edx, esi
		xor     eax, eax
		call    __CEXT_F(loadS3M)
		mov     [__CEXT_V(SFX_Ptr)], eax
		jmp     ___67f37h
___67f19h:
		mov     ecx, esp
		lea     ebx, [esp+4]
		mov     edx, esi
		xor     eax, eax
		call    __CEXT_F(loadXM)
		mov     [__CEXT_V(SFX_Ptr)], eax
		jmp     ___67f37h
___67f2fh:
		xor     esi, esi
		mov     [__CEXT_V(SFX_Tracker)], esi
___67f37h:
		mov     edx, [esp+8]
		mov     edi, [esp]
		mov     eax, [esp+0ch]
		mov     ebp, [esp+4]
		xor     ebx, ebx
		add     edx, edi
		add     eax, ebp
		call    __CEXT_F(___677cch)
		mov     byte [__CEXT_V(___19a27ch)], 0ffh
		mov     eax, [__CEXT_V(MSX_Tracker)]
		cmp     eax, byte 1
		jb      ___67f9ch
		jbe     ___67f6bh
		cmp     eax, byte 2
		je      ___67f81h
		jmp     ___67f9ch
___67f6bh:
		mov     ebx, [esp+0ch]
		mov     eax, 1
		mov     edx, [__CEXT_V(MSX_Ptr)]
		call    __CEXT_F(___716fch)
		jmp     ___67f95h
___67f81h:
		mov     ebx, [esp+0ch]
		mov     eax, 1
		mov     edx, [__CEXT_V(MSX_Ptr)]
		call    __CEXT_F(___75840h)
___67f95h:
		dec     al
		mov     [__CEXT_V(___19a27ch)], al
___67f9ch:
		xor     eax, eax
		mov     al, [__CEXT_V(___24e7a4h)]
		mov     [__CEXT_V(___19a27eh)], ax
		mov     [__CEXT_V(___24e7a2h)], ax
		mov     al, [esp+20h]
		mov     [__CEXT_V(SFX_Number)], al
		mov     eax, [__CEXT_V(SFX_Tracker)]
		cmp     eax, byte 1
		jb      ___67fefh
		jbe     ___67fcbh
		cmp     eax, byte 2
		je      ___67fdeh
		jmp     ___67fefh
___67fcbh:
		mov     ebx, [esp+4]
		mov     edx, [__CEXT_V(SFX_Ptr)]
		xor     eax, eax
		call    __CEXT_F(___716fch)
		jmp     ___67fefh
___67fdeh:
		mov     ebx, [esp+4]
		mov     edx, [__CEXT_V(SFX_Ptr)]
		xor     eax, eax
		call    __CEXT_F(___75840h)
___67fefh:
		xor     eax, eax
		mov     edx, [__CEXT_V(___19a279h)]
		mov     al, [__CEXT_V(SFX_Number)]
		sar     edx, 18h
		add     edx, eax
		mov     eax, [__CEXT_V(___24e790h)]
		mov     [__CEXT_V(___68c3ch)], edx
		mov     edx, [__CEXT_V(___24e794h)]
		sub     eax, edx
		mov     ebx, edx
		mov     edx, eax
		mov     eax, ebx
		call    __CEXT_F(___5f080h)
		xor     eax, eax
		mov     dx, [__CEXT_V(___24e7a2h)]
		mov     al, [__CEXT_V(___24e7a4h)]
		sub     eax, edx
		mov     ebx, [__CEXT_V(SFX_Ptr)]
		mov     [__CEXT_V(___24e7a0h)], ax
		test    ebx, ebx
		je      ___68046h
		mov     eax, ebx
		call    __CEXT_F(freeMemory)
___68046h:
		mov     al, [__CEXT_V(Sound_CardType)]
		cmp     al, 19h
		jb      ___6805fh
		cmp     al, 1ah
		jbe     ___68078h
		cmp     al, 20h
		jb      ___68089h
		jbe     ___68071h
		cmp     al, 21h
		je      ___68078h
		jmp     ___68089h
___6805fh:
		cmp     al, 1
		jb      ___68089h
		cmp     al, 2
		jbe     ___68078h
		cmp     al, 11h
		jb      ___68089h
		cmp     al, 13h
		jbe     ___68078h
		jmp     ___68089h
___68071h:
		mov     eax, 1
		jmp     ___6808bh
___68078h:
		cmp     byte [__CEXT_V(___68d58h)], 0
		setnz   al
		and     eax, 0ffh
		jmp     ___6808bh
___68089h:
		xor     eax, eax
___6808bh:
		test    eax, eax
		jne     ___680b0h
		mov     eax, [__CEXT_V(___24e7a0h)]
		mov     ecx, [__CEXT_V(___24e79eh)]
		xor     ebx, ebx
		sar     eax, 10h
		sar     ecx, 10h
		xor     edx, edx
		add     ecx, eax
		mov     eax, 1
		call    __CEXT_F(___67bbch)
___680b0h:
		mov     dh, 1
		call    __CEXT_F(___68398h)
		mov     [__CEXT_V(IsSoundEnabled)], dh
___680bdh:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		retn     4

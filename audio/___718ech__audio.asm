%include "macros.inc"

	extern 	__CHK;

	extern	__CEXT_F(__STOSB__clib3r)
	extern	__CEXT_V(Sound_CardType)
	extern	__CEXT_V(IsSoundEnabled)
	extern	__CEXT_V(MSX_Ptr)
	extern	__CEXT_V(___19a468h)
	extern	__CEXT_V(S3M_GlobalVolume)
	extern	__CEXT_V(S3M_InitialTempo)
	extern	__CEXT_V(S3M_InitialSpeed)
	extern	__CEXT_V(___24e860h)
	extern	__CEXT_V(___68c40h)
	extern	__CEXT_V(___24e858h)
	extern	__CEXT_V(___68a90h)
	extern	__CEXT_V(___24e830h)
	extern	__CEXT_V(___24e750h)
	extern	__CEXT_F(___6ef2ch__audio)
	extern	__CEXT_F(___68cfbh)
	extern	__CEXT_F(___685a4h)
	extern	__CEXT_V(___19a281h)
	extern	__CEXT_V(___19a280h)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(___718ech))
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ah, [__CEXT_V(Sound_CardType)]
		xor     ecx, ecx
		test    ah, ah
		je      ___71a2fh
		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
		je      ___71a2fh
		cmp     byte [__CEXT_V(___19a280h)], 0
		jne     ___71a2fh
		mov     edx, [__CEXT_V(MSX_Ptr)]
		test    edx, edx
		je      ___71a2fh
		mov     byte [__CEXT_V(___19a468h)], 1
		mov     eax, edx
		mov     dl, [edx+30h]
		mov     [__CEXT_V(S3M_GlobalVolume)], dl
		mov     dl, [eax+31h]
		mov     al, [eax+32h]
		mov     [__CEXT_V(S3M_InitialTempo)], al
		movzx   esi, al
		mov     eax, 7a12h
		mov     [__CEXT_V(S3M_InitialSpeed)], dl
		mov     edx, eax
		sar     edx, 1fh
		idiv    esi
		mov     edi, [__CEXT_V(___24e860h)]
		mov     [__CEXT_V(___68c40h)], ax
		xor     edx, edx
		xor     eax, eax
___7196ch:
		mov     esi, [__CEXT_V(___24e858h)]
		add     esi, eax
		mov     bh, [esi]
		cmp     bh, 0fh
		ja      ___719bfh
		cmp     bh, 7
		ja      ___7198ch
		mov     dword [edx+__CEXT_V(___68a90h)], 3000h
		jmp     ___71996h
___7198ch:
		mov     dword [edx+__CEXT_V(___68a90h)], 0c000h
___71996h:
		test    edi, edi
		je      ___719b3h
		lea     esi, [edi+eax]
		mov     bl, [esi]
		test    bl, 20h
		je      ___719b3h
		and     bl, 0fh
		movzx   esi, bl
		shl     esi, 0ch
		mov     [edx+__CEXT_V(___68a90h)], esi
___719b3h:
		add     edx, 4
		mov     [eax+__CEXT_V(___24e830h)], cl
		inc     ecx
		jmp     ___719c6h
___719bfh:
		mov     byte [eax+__CEXT_V(___24e830h)], 0ffh
___719c6h:
		inc     eax
		cmp     eax, 20h
		jl      ___7196ch
		mov     ebp, 8000h
		lea     eax, [ecx*4+0]
___719d8h:
		cmp     eax, 80h
		jge     ___719ebh
		inc     ecx
		mov     [eax+__CEXT_V(___68a90h)], ebp
		add     eax, 4
		jmp     ___719d8h
___719ebh:
		mov     ecx, 40h
		mov     edx, 0ffffffffh
		mov     eax, __CEXT_V(___24e750h)
		call    __CEXT_F(__STOSB__clib3r)
		xor     bh, bh
		mov     eax, __CEXT_F(___6ef2ch__audio)
		mov     cl, 1
		call    __CEXT_F(___68cfbh)
		call    __CEXT_F(___685a4h)
		mov     [__CEXT_V(___19a281h)], bh
		mov     [__CEXT_V(___19a280h)], cl
		cmp     cl, [__CEXT_V(___19a468h)]
		jne     ___71a2fh
___71a26h:
		cmp     byte [__CEXT_V(___19a468h)], 1
		je      ___71a26h
___71a2fh:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

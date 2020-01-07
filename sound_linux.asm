cpu 386
%include "macros.inc"

	extern 	___60448h
	extern 	___60454h

	extern 	SET_S3M_CB_cdecl
	extern 	memcpy
	extern 	START_DMA
	extern 	DMA_BYTES_TRANSFERED
	extern 	DMA_ALLOC_BUFFER
	extern 	___77741h_cdecl
	extern 	DSP_WRITE
	extern 	___779f9h_SB16_setPorts_cdecl
	extern 	___779a1h_SB16_resetDSP_cdecl
	extern 	___7792dh_setStereo_cdecl
	extern 	___771f4h_SB16_init_cdecl
	extern 	___77664h
	extern 	___685a4h_cdecl
	extern 	___6815ch_cdecl
	extern 	___65788h_updateVolume_cdecl
	extern 	dRally_Audio_load
	extern 	dRally_Audio_play
	extern 	dRally_Audio_playSoundEffect
	extern 	RESTORE_SOUND_DEFAULTS
	extern 	___680c8h_cdecl


	extern	___199ff4h
	extern	___199ff8h
	extern	dRally_Memory_free
	extern	___24e640h
	extern	___19a27bh
	extern	___19a280h
	extern	___6000fh_cdecl
	extern	___19a281h
	extern	___199ffch
	extern	___19a000h
	extern	___24e59fh
	extern	SFX_struct_content_ptr
	extern	___19a27ch
	extern	___24e750h
	extern	___19a279h
	extern	___19a27dh
	extern	___24e5a0h
	extern	___24e79ch
	extern	___24e798h
	extern	MSX_VOLUME
	extern	MASTER_VOLUME
	extern	___24e5c0h
	extern	SFX_VOLUME
	extern	GET_IRQ_ISR
	extern	SET_IRQ_ISR
	extern	ENABLE_IRQ
	extern	__STOSD
	extern	___5fff2h_cdecl
	extern	___24e7a0h
	extern	___19a27eh
	extern	MSX_struct_type
	extern	___24e794h
	extern	dRally_Memory_alloc
	extern	memset_
	extern 	memcpy_
	extern	___24e790h
	extern	___24e7a4h
	extern	__MOVS
	extern	dRally_Memory_resize
	extern	MSX_struct_content_ptr
	extern	SFX_struct_type
	extern	___24e7a2h
	extern	___24e79eh
	extern	___19a278h
	extern	___19a27ah
	extern	___24f7d8h
	extern	___5f734h_allocDosMem
	extern	___24f7c8h
	extern	___24f760h
	extern	___5f7fch_freeDosMem
	extern	___19a468h
	extern	___19a469h
	extern	___19a53dh
	extern	___19a53ch
	extern	___19a46ah
	extern	___19a53eh
	extern	___19a540h
	extern	___19a53fh
	extern	___19a684h
	extern	___19a685h
	extern	___19a686h
	extern	___19a5e2h
	extern	___24e87eh
	extern	___19a542h
	extern	___19a562h
	extern	___19a582h
	extern	___19a592h
	extern	___19a5a2h
	extern	___19a5b2h
	extern	___19a5c2h
	extern	___19a5d2h
	extern	___19a5e4h
	extern	___19a5f4h
	extern	___19a604h
	extern	___19a624h
	extern	___19a644h
	extern	___24e880h
	extern	___19a664h
	extern	___19a674h
	extern	___19a46ch
	extern	___24e7a6h
	extern	___24e7a5h
	extern	___24e86eh
	extern	___24e85ch
	extern	___24e872h
	extern	___24e854h
	extern	___24e8a0h
	extern	___24e87fh
	extern	___24e87dh
	extern	___24e830h
	extern	___24e87ah
	extern	___24e87ch
	extern	___24e879h
	extern	___24e878h
	extern	___19a484h
	extern	___24e864h
	extern	___24e86fh
	extern	___24e871h
	extern	___24e850h
	extern	___19a470h
	extern	___19a474h
	extern	___19a49ch
	extern	___19a478h
	extern	___19a47ch
	extern	___19a480h
	extern	___24e870h
	extern	___19a5e0h
	extern	___19a4bah
	extern	___24e874h
	extern	___19a4bch
	extern	rand_
	extern	load_musics_bpa
	extern	___185114h
	extern	strncmp_
	extern	___58b20h
	extern	___24e868h
	extern	entrysize_musics_bpa
	extern	___5f248h
	extern	___19a464h
	extern	___24e86ch
	extern	___24e858h
	extern	___24e860h
	extern	___5f26ch
	extern	___5f2b4h
	extern	__STOSB
	extern	___24e9dah
	extern	___19a724h
	extern	___19a726h
	extern	___19a804h
	extern	___18511ch
	extern	___24e9bch
	extern	___19ae07h
	extern	___19ae04h
	extern	___19a688h
	extern	___24e9d4h
	extern	___24e9ceh
	extern	___24e9b4h
	extern	___24e9a8h
	extern	___24e9ach
	extern	___24e9d0h
	extern	___24e9d2h
	extern	___24e9cch
	extern	___24e9c8h
	extern	___24e9c0h
	extern	___24e9c4h
	extern	___24e9b0h
	extern	___24e9a4h
	extern	___24e9b8h
	extern	___24e8a4h
	extern	___60765h
	extern	INSTALL_AUDIO_CB_cdecl
	extern	___5fbc0h
	extern	___60356h

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



;__GDECL(___649a8h_cdecl)
;	push 	esi
;	push 	edi
;	push 	ebx
;	push 	ebp
;		push    ecx
;		push    edx
;		cmp     byte [___199ff4h], 0
;		je      ___649e7h
;		xor     dl, dl
;		mov     eax, ___68d07h
;		mov     [___199ff4h], dl
;	push 	eax
;		call    ___68d01h_cdecl
;	add 	esp, 4
;
;		mov     eax, [___199ff8h]
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near dRally_Memory_free
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;		xor     edx, edx
;		mov     eax, [___24e640h]
;		mov     [___199ff8h], edx
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near dRally_Memory_free
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;		mov     [___24e640h], edx
;___649e7h:
;		cmp		byte [SOUND_TYPE], 0
;		je      ___64a19h
;		cmp     byte [___19a27bh], 0
;		je      ___64a19h
;		cmp     byte [___19a280h], 0
;		je      ___64a19h
;		mov     eax, ___68d07h
;	push 	eax
;		call    SET_S3M_CB_cdecl
;	add 	esp, 4
;		xor     cl, cl
;	push 	eax
;	push 	ecx
;	push 	edx
;		call    ___68718h_cdecl
;	pop 	edx
;	pop 	ecx
;	pop 	eax
;		mov     [___19a280h], cl
;___64a19h:
;		mov     eax, ___649a8h_cdecl
;	push 	eax
;		call    ___6000fh_cdecl
;	add 	esp, 4
;		pop     edx
;		pop     ecx
;	pop 	ebp
;	pop		ebx
;	pop 	edi
;	pop 	esi
;		retn    
;	align 	4

;__GDECL(___64a28h_cdecl)
;		push    ebx
;	push 	eax
;	push 	ecx
;	push 	edx
;		call    ___653c8h_cdecl
;	pop 	edx
;	pop 	ecx
;	pop 	eax
;		cmp		byte [SOUND_TYPE], 0
;		je      ___64a60h
;		cmp     byte [___19a27bh], 0
;		je      ___64a60h
;		cmp     byte [___19a280h], 0
;		je      ___64a60h
;		mov     eax, ___68d07h
;	push 	eax
;		call    SET_S3M_CB_cdecl
;	add 	esp, 4
;		xor     bl, bl
;	push 	eax
;	push 	ecx
;	push 	edx
;		call    ___68718h_cdecl
;	pop 	edx
;	pop 	ecx
;	pop 	eax
;		mov     [___19a280h], bl
;___64a60h:
;		mov     eax, ___649a8h_cdecl
;	push 	eax
;		call    ___6000fh_cdecl
;	add 	esp, 4
;	push 	eax
;	push 	edx
;	push 	ecx
;		call    ___680c8h_cdecl
;	pop 	ecx
;	pop 	edx
;	pop 	eax
;		mov     eax, ___64a28h_cdecl
;	push 	eax
;		call    ___6000fh_cdecl
;	add 	esp, 4
;		pop     ebx
;		retn    
;	align 	4

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
		call    ___6880ch_getSampleRate
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
		cmp     dword [SFX_struct_content_ptr], byte 0
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
		cmp     dword [SFX_struct_content_ptr], byte 0
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
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
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
		cmp     dword [SFX_struct_content_ptr], byte 0
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
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
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

__GDECL(___653c8h_cdecl)
		push    edx
		cmp     byte [___199ff4h], 0
		je      ___65406h
		xor     dl, dl
		mov     eax, ___68d07h
		mov     [___199ff4h], dl
	push 	eax
		call    ___68d01h_cdecl
	add 	esp, 4
		mov     eax, [___199ff8h]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx
		xor     edx, edx
		mov     eax, [___24e640h]
		mov     [___199ff8h], edx
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     [___24e640h], edx
___65406h:
		pop     edx
		retn    
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
		cmp     dword [SFX_struct_content_ptr], byte 0
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

;__GDECL(___6563ch_cdecl)
;	mov 	eax, [esp+4]
;		push    ebx
;		push    ecx
;		push    edx
;		cmp		byte [SOUND_TYPE], 0
;		je      ___65680h
;		cmp     byte [___19a27bh], 0
;		je      ___65680h
;		cmp     dword [SFX_struct_content_ptr], byte 0
;		je      ___65680h
;		test    al, al
;		je      ___65680h
;		add     al, [___19a27ch]
;		xor     edx, edx
;		mov     ebx, [___68c3ch]
;		mov     dl, al
;		cmp     edx, ebx
;		ja      ___65680h
;		xor     edx, edx
;		mov     dl, al
;		mov     word [NoSplit edx*2+___688d0h], 0ffffh
;___65680h:
;		and     eax, 0ffh
;		mov     ecx, 0ffffh
;		mov     bl, 1
;		mov     [NoSplit eax*2+___24e750h], cx
;		mov     [eax+___68b10h], bl
;		pop     edx
;		pop     ecx
;		pop     ebx
;		retn    





;__GDECL(___65788h_updateVolume_cdecl) 	;;	C
;		push    ebx
;		;push    ecx
;		;push    edx
;		push    esi
;		cmp     dword [SFX_struct_content_ptr], byte 0
;		je     ___6579ah
;		xor     ebx, ebx
;		xor     ecx, ecx
;		jmp     ___656cdh
;___656a4h:
;		mov     edx, [MSX_VOLUME]
;		mov     eax, [MASTER_VOLUME]
;		mov     esi, [ebx+___24e5c0h]
;		imul    edx
;		shrd    eax, edx, 10h
;		add     ebx, byte 4
;		mov     edx, esi
;		inc     ecx
;		imul    edx
;		shrd    eax, edx, 10h
;		mov     [ebx+___68bach], eax
;___656cdh:
;		mov     esi, [___19a279h]
;		sar     esi, 18h
;		cmp     ecx, esi
;		jle     ___656a4h
;		inc     esi
;		cmp     esi, byte 20h
;		jge     ___6570ah
;		lea     ebx, [esi*4+0]
;___656e7h:
;		mov     edx, [SFX_VOLUME]
;		mov     eax, [MASTER_VOLUME]
;		add     ebx, byte 4
;		imul    edx
;		shrd    eax, edx, 10h
;		inc     esi
;;		mov     [ebx+___68bach], eax
;		cmp     ebx, 80h
;		jl      ___656e7h
;___6570ah:
;		pop     esi
;		;pop     edx
;		;pop     ecx
;		pop     ebx
;		retn    
;___6579ah:
;		xor     ebx, ebx
;___6579bh:
;		mov     edx, [MSX_VOLUME]
;		mov     eax, [MASTER_VOLUME]
;		mov     ecx, [ebx+___24e5c0h]
;		imul    edx
;		shrd    eax, edx, 10h
;		mov     edx, ecx
;		add     ebx, byte 4
;		imul    edx
;		shrd    eax, edx, 10h
;		mov     [ebx+___68bach], eax
;		cmp     ebx, 80h
;		jne     ___6579bh
;		jmp 	___6570ah
;
;	align 	4
;
;__GDECL(___658d0h_cdecl)
;	push 	ebx
;	mov 	ecx, [esp+14h]
;	mov 	ebx, [esp+10h]
;	mov 	edx, [esp+0ch]
;	mov 	eax, [esp+8]
;		mov     [SOUND_ADDR], dx
;		mov     [SOUND_IRQ], bl
;		mov     [SOUND_DMA], cl
;		test    al, al
;		setne 	al
;		mov     [SOUND_TYPE], al
;	pop 	ebx
;		retn
;	align 	4


;	align 	4

;___659b8h:
;		test    al, al
;		setne   al
;		and     eax, 0ffh
;		mov     [___68d4ch], al
;		retn    


;__GDECL(DSP_RESET)
;		push 	ecx
;		push 	edx  
;		mov     dx, [A2x6h_DSP_Reset_WO]
;		mov		al, 1		; Write a 1 to the DSP reset port
;		out		dx, ax
;		sub		al, al 		; Delay loop
;.delay:
;		dec		al
;		jne		.delay
;		out 	dx, al 		; Write a 0 to the DSP reset port
;
;		mov 	ecx, 10000h	; Maximum of 65536 tries
;.empty:
;		mov		dx, [A2xEh_DSP_Read_Buffer_Status_Bit_7_RO]
;							; Read-Buffer Status port, 2xEh
;		in 		al, dx 		; Read Read-Buffer Status port
;		or		al, al 		; Data available?
;		jns 	.next_attempt 
;							; Bit 7 clear, try again
;		mov  	dx, [A2xAh_DSP_Read_Data_Port_RO]
;		in 		al, dx 		; Read in-bound DSP data
;		cmp 	al, 0aah 	; Receive success code, 0AAh?
;		mov 	eax, 1
;		je 		.ok
;.next_attempt:
;		loop 	.empty ; Try again
;		xor 	eax, eax
;.ok:
;		pop 	edx
;		pop 	ecx
;		retn

;DSP_READ:	;; _CDECL
;	push 	ebx
;		mov     dx, [A2xEh_DSP_Read_Buffer_Status_Bit_7_RO]
;		mov     ebx, 400h
;.busy:
;		dec     ebx
;		je      .failed
;		in      al, dx
;		or      al, al
;		jns     .busy
;		mov     dx, [A2xAh_DSP_Read_Data_Port_RO]
;		in      al, dx
;	pop 	ebx
;		retn    
;.failed:
;		push    byte 21h
;		call    near ___58b20h
;		add     esp, byte 4


;DSP_WRITE:		;; _CDECL
;		push 	ebx
;	mov 	eax, [esp+8]
;		mov     dx, [A2xCh_DSP_Write_Buffer_Status_Bit_7_R]
;		mov     ah, al
;		mov     ebx, 400h
;.busy:
;		dec     ebx
;		je      .failed
;		in      al, dx
;		or      al, al
;		js      .busy
;		mov     dx, [A2xCh_DSP_Write_Command_Data_W]
;		mov     al, ah
;		out     dx, al
;		pop 	ebx
;		retn    
;.failed:
;		push    byte 21h
;		call    near ___58b20h
;		add     esp, byte 4

;___7792dh_setStereo_cdecl:
;		pushad  
;;		call    DSP_GET_VERSION			;; 405h
;;		cmp     ah, 3
;;		jb      ___77955h
;		mov     dx, [A2x4h_Mixer_Chip_Register_Address_Port_WO]
;		mov     al, 0eh
;		out     dx, al
;		mov 	dx, [A2x5h_Mixer_Chip_Data_Port_RW]
;		in      al, dx
;		or      al, 20h		; 00100000b
;							; Output filter off, bypass the low-pass filter
;		and     al, 0fdh	; 11111101b
;							; mono output
;		cmp     byte [StereoSound], 0
;		je      ___77954h
;		or      al, 2		; 00000010b
;							; stereo output
;___77954h:
;		out     dx, al
;;___77955h:
;		popad   
;		retn    

INSTALL_SOUND_ISR:
	mov 	eax, [esp+4]
		pushad  
		pushfd  
		cli     
		push    eax
		mov     eax, [___775ech]
		or      eax, [___775e8h]
		jne     short ___778bdh
		mov     al, [LOC_SOUND_IRQ]
		mov 	edx, ___775e8h
		call    near GET_IRQ_ISR
___778bdh:
		pop     edx
		;mov     cx, cs
		mov     al, [LOC_SOUND_IRQ]

	push 	cs
	push 	edx
	mov 	edx, esp
		call    near SET_IRQ_ISR
	add 	esp, 8

		mov     al, [LOC_SOUND_IRQ]
		call    near ENABLE_IRQ
		popfd   
		popad   
		retn    


;; 	void START_DMA(_eax[DMA], _edx[??? 58h], _ecx, _esi)
;START_DMA:
;	push 	esi
;	push 	ebx
;
;	mov 	eax, [esp+0ch]
;	mov 	edx, [esp+10h]
;	mov 	ecx, [esp+14h]
;	mov 	esi, [esp+18h]
;
;		shr     ecx, 1
;		mov     ebx, esi
;		shr     ebx, 1
;		mov     si, bx
;		dec     ecx
;		push    edx
;		movzx   ebx, al
;
;		;; disable channel1(5)
;		mov     edx, 0d4h			;;	DMA_SINGLE_MASK
;		mov     al, bl
;		and     al, 3
;		or      al, 4
;		out     dx, al
;
;		mov     edx, 0d8h			;;	DMA_CLEAR_POINTER
;		xor     al, al
;		out     dx, al
;
;
;		pop     edx
;		mov     al, bl
;		and     al, 3
;		or      al, dl
;		mov     edx, 0d6h			;;	DMA_TRANSFER_MODE
;		out     dx, al
;
;
;		mov     edx, 8bh			;;	DMA5_PAGE
;		shld    eax, esi, 10h
;		out     dx, al
;
;
;		shr     eax, 10h
;		mov     edx, 0c4h			;; 	DMA5_ADDRES
;		xchg    esi, eax
;		out     dx, al
;		mov     al, ah
;		out     dx, al
;
;
;		mov     eax, esi
;		mov     edx, 0c6h			;;	DMA5_COUNT
;		mov     al, cl
;		out     dx, al
;		mov     al, ch
;		out     dx, al
;
;		;; enable channel1(5)
;		mov     edx, 0d4h			;;	DMA_SINGLE_MASK
;		mov     al, bl
;		and     al, 3
;		out     dx, al
;
;	pop 	ebx
;	pop 	esi
;	   
;		retn    





;___77664h:
;		push    eax
;		push    ebx
;		push    edx
;;		mov     dx, [A2xFh_DSP_16Bit_Interrupt_Acknowledge]
;;		in      al, dx
;		mov     ebx, [___775dch]
;	;shr 	ebx, 1
;		dec     ebx
;		cmp		byte [SOUND_TYPE], 0
;		je		___776f8h
;
;		;;	Program 16-bit DMA mode digitized sound I/O
;		;; 0xB0	digital-to-analog, single-cycle DMA mode, FIFO off
;		;; 0xB6	digital-to-analog, auto-init DMA mode, FIFO on
;		mov     al, 0b6h;0b0h
;		push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;		cmp     byte [StereoSound], 0
;		setnz   al
;		shl     al, 5
;		or      al, 10h					;; 	signed
;		push 	eax
;		call    near DSP_WRITE			;;	bMode
;		add 	esp, 4
;		mov     al, bl
;		push 	eax
;		call    near DSP_WRITE			;; 	wLength.LowByte
;		add 	esp, 4
;		mov     al, bh
;		push 	eax
;		call    near DSP_WRITE			;;	wLength.HighByte
;		add 	esp, 4
;		jmp     short ___77736h
;___776f8h:
;		cmp     word [___775e0h], 0d2h	;;	210
;		ja      short ___7771ah
;
;		;;	8-bit single-cycle DMA mode digitized sound output
;		mov     al, 14h
;		push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;		mov     al, bl
;		push 	eax
;		call    near DSP_WRITE			;;	wLength.LowByte
;		add 	esp, 4
;		mov     al, bh
;		push 	eax
;		call    near DSP_WRITE			;;	wLength.HighByte
;		add 	esp, 4
;		jmp     short ___77736h
;___7771ah:
;
;		;;	Set DSP block transfer size
;		mov     al, 48h
;		push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;		mov     al, bl
;		push 	eax
;		call    near DSP_WRITE			;;	wBlockSize.LowByte
;		add 	esp, 4
;		mov     al, bh
;		push 	eax
;		call    near DSP_WRITE			;;	wBlockSize.HighByte
;		add 	esp, 4
;
;		;;	8-bit high-speed single-cycle DMA mode digitized sound input
;		mov     al, 91h
;		push 	eax
;		call    near DSP_WRITE		
;		add 	esp, 4
;___77736h:
;		mov     byte [___775f0h], 1
;		pop     edx
;		pop     ebx
;		pop     eax
;		retn    


























;;	dRally_Audio_load(MSX_type, MSX_file, SFX_type, SFX_file, num_channels);
;__GDECL(dRally_Audio_load)
;	push 	ebx
;	push 	esi
;	push 	edi
;	push 	ebp
;
;	mov 	ecx, [esp+20h]
;	mov 	ebx, [esp+1ch]
;	mov 	edx, [esp+18h]
;	mov 	eax, [esp+14h]
;
;		sub     esp, byte 4
;		mov     [esp], al
;		call    ___649a8h_cdecl 			;; ___649a8h_cdecl();
;	push 	eax
;	push 	edx
;	push 	ecx
;		call    ___680c8h_cdecl
;	pop 	ecx
;	pop 	edx
;	pop 	eax
;		mov     eax, ___64a28h_cdecl
;	push 	eax
;		call    ___6000fh_cdecl			;; ___6000fh_cdecl(__eax);
;	add 	esp, 4
;		xor     eax, eax
;		mov     al, [esp+28h]
;		push    eax
;		xor     eax, eax
;		and     ebx, 0ffh
;		mov     al, [esp+4]
;
;
;		push 	ecx
;		push 	ebx
;		push 	edx
;		push 	eax
;
;		call    ___67e48h_allocSounds_cdecl
;		;;	___67e48h_allocSounds_cdecl(MSX_type, MSX_file, SFX_type, S;FX_file, num_channels);
;		add 	esp, 14h
;
;		mov     ecx, 20h
;		mov     edx, 10000h
;		mov     eax, ___24e5c0h
;		call    __STOSD
;		mov     edx, 10000h
;		mov     [MASTER_VOLUME], edx
;		mov     [MSX_VOLUME], edx
;		mov     [SFX_VOLUME], edx
;	
;		push 	ecx
;		push 	edx
;		call    ___65788h_updateVolume_cdecl
;		pop 	edx
;		pop 	ecx
;		mov     eax, ___64a28h_cdecl
;	push 	eax
;		call    ___5fff2h_cdecl
;	add 	esp, 4
;		add     esp, byte 4
;	pop		ebp
;	pop 	edi
;	pop 	esi
;	pop 	ebx
;		retn

	align 	4

;__GDECL(dRally_Audio_play)
;		push    edx
;		cmp     byte [___199ff4h], 0
;		je      ___64916h
;		xor     dl, dl
;		mov     eax, ___68d07h
;		mov     [___199ff4h], dl
;	push 	eax
;		call    ___68d01h_cdecl
;	add 	esp, 4
;		mov     eax, [___199ff8h]
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near dRally_Memory_free
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;		xor     edx, edx
;		mov     eax, [___24e640h]
;		mov     [___199ff8h], edx
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near dRally_Memory_free
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;		mov     [___24e640h], edx
;___64916h:
;		call    ___6879ch_cdecl
;		cmp		byte [SOUND_TYPE], 0
;		je      ___6493ch
;		cmp     byte [___19a27bh], 0
;		je      ___6493ch
;		call    ___6815ch_cdecl
;		mov     eax, ___649a8h_cdecl
;	push 	eax
;		call    ___5fff2h_cdecl
;	add 	esp, 4
;___6493ch:
;		pop     edx
;		retn    

;__GDECL(dRally_Audio_setSampleRate)
;
;	mov 	eax, [esp+4]
;
;		cmp     ax, word 1f40h
;		jae     ___6599bh
;		mov     eax, 1f40h
;___6599bh:
;		cmp     ax, word 0ac44h
;		jbe     ___659a6h
;		mov     eax, 0ac44h
;___659a6h:
;		mov     [SOUND_SAMPLERATE], ax
;		retn    
;
;	align 	4

;;	playSFX(ch, n, 0, 0x10000, 0x10000, 0x8000);
;__GDECL(dRally_Audio_playSoundEffect)
;		push    esi
;		push    edi
;		push    ebp
;		push 	ebx
;
;	mov 	ecx, [esp+20h]
;	mov 	ebx, [esp+1ch]
;	mov 	edx, [esp+18h]
;	mov 	eax, [esp+14h]

;		sub     esp, byte 4
;		mov     ebp, ebx
;		cmp		byte [SOUND_TYPE], 0
;		je      ___655a4h
;		cmp     byte [___19a27bh], 0
;		je      ___655a4h
;		cmp     dword [SFX_struct_content_ptr], byte 0
;		je      ___655a4h
;		test    al, al
;		je      ___655a4h
;		add     al, [___19a27ch]
;		xor     ebx, ebx
;		mov     esi, [___68c3ch]
;		mov     bl, al
;		cmp     ebx, esi
;		ja      ___655a4h
;		xor     ebx, ebx
;		mov     si, [___24e7a0h]
;		mov     bl, dl
;		cmp     bx, si
;		jg      ___655a4h
;		xor     bh, bh
;		movzx   esi, al
;		mov     [esp], ebx
;		mov     eax, [___24e79ch]
;		mov     edi, [esp]
;		mov     bx, [___19a27eh]
;		mov     [esi*4+___68910h], ebp
;		add     ebx, edi
;		movzx   ebp, dl
;		mov     [NoSplit esi*2+___688d0h], bx
;		mov     edx, [esp+28h]
;		mov     eax, [eax+ebp*4]
;		imul    edx
;		shrd    eax, edx, 10h
;		mov     [esi*4+___68990h], eax
;		mov     eax, [___24e798h]
;		mov     edx, ecx
;		mov     eax, [eax+ebp*4]
;		xor     bh, bh
;		imul    edx
;		shrd    eax, edx, 10h
;		mov     [esi*4+___68a10h], eax
;		mov     [NoSplit esi*2+___24e750h], di
;		mov     eax, [esp+2ch]
;		mov     [esi+___68b10h], bh
;		mov     [esi*4+___68a90h], eax
;___655a4h:
;		add     esp, byte 4
;		pop 	ebx
;		pop     ebp
;		pop     edi
;		pop     esi
;		retn




;__GDECL(dRally_Audio_setMasterVolume)
;		cmp		byte [SOUND_TYPE], 0
;		je      ___6570eh
;		cmp     byte [___19a27bh], 0
;		je      ___6570eh
;		mov     [MASTER_VOLUME], eax
;		push 	eax
;		push 	ecx
;		push 	edx
;		call    ___65788h_updateVolume_cdecl
;		pop 	edx
;		pop 	ecx
;		pop 	eax
;		retn
;__GDECL(dRally_Audio_setMusicVolume)
;		cmp		byte [SOUND_TYPE], 0
;		je      ___6570eh
;		cmp     byte [___19a27bh], 0
;		je      ___6570eh
;		mov     [MSX_VOLUME], eax
;		push 	eax
;		push 	ecx
;		push 	edx
;		call    ___65788h_updateVolume_cdecl
;		pop 	edx
;		pop 	ecx
;		pop 	eax
;		retn
;__GDECL(dRally_Audio_setEffectVolume)
;		cmp		byte [SOUND_TYPE], 0
;		je      ___6570eh
;		cmp     byte [___19a27bh], 0
;		je      ___6570eh
;		mov     [SFX_VOLUME], eax
;		push 	eax
;		push 	ecx
;		push 	edx
;		call    ___65788h_updateVolume_cdecl
;		pop 	edx
;		pop 	ecx
;		pop 	eax
;		retn


;___6570eh:
;		retn    
;	align 	4

;__GDECL(dRally_Audio_setPosition)
;	mov 	eax, [esp+4]
;		push    edx
;		mov     edx, [MSX_struct_type]
;		cmp     edx, byte 1
;		jb      short ___682c9h
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near ___71a88h
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;		pop     edx
;		retn    
;___682c9h:
;		xor     al, al
;		pop     edx
;		retn    

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
		add     eax, byte 2			;; eax = size + 6*samples + 2
		mov     ebx, 2

	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Memory_alloc
	add 	esp, 8
	pop 	ecx

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
		add     eax, edx			;;	eax = 29*samples+8
		mov     edx, 1
		lea     esi, [ecx*4+0]

	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Memory_alloc
	add 	esp, 8
	pop 	ecx

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


___67994h:
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

	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Memory_alloc
	add 	esp, 8
	pop 	ecx

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
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     [___24e794h], esi
___67c37h:
		test    dl, dl
		jne     short ___67c45h
		mov     eax, [___24e79ch]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx
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
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     ecx, [___24e794h]
		mov     edx, [___24e790h]
		mov     eax, ecx
		sub     edx, ecx

	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Memory_resize
	add 	esp, 8
	pop 	ecx

		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		retn    

;;	___67e48h_allocSounds_cdecl(MSX_type, MSX_file, SFX_type, SFX_file, num_channels);
__GDECL(___67e48h_allocSounds_cdecl)
		push 	ebx
		push    esi
		push    edi
		push    ebp

	mov 	ecx, [esp+20h]
	mov 	ebx, [esp+1ch]
	mov 	edx, [esp+18h]
	mov 	eax, [esp+14h]

		sub     esp, byte 10h
		mov     edi, ebx
		mov     esi, ecx
		xor     ebx, ebx
		mov     [esp+8], ebx
		mov     [esp+4], ebx
		mov     [esp], ebx
		mov     [esp+0ch], ebx
		test    eax, eax
		jne     .msx_type_not_zero
		xor     edx, edx
.msx_type_not_zero:
		test    edi, edi
		jne     .sfx_type_not_zero
		xor     esi, esi
.sfx_type_not_zero:
		test    edx, edx
		jne     .msx_file_not_null
		xor     eax, eax
.msx_file_not_null:
		test    esi, esi
		jne     .sfx_file_not_null
		xor     edi, edi
.sfx_file_not_null:
		test    edx, edx
		jne     short ___67e87h
		test    esi, esi
		je      near ___680bdh
___67e87h:
		test    esi, esi
		je      short ___67e9ah
		cmp     dword [esp+34h], byte 1		;; num_channels
		jge     short ___67e9ah
		mov     dword [esp+34h], 1			;; num_channels
___67e9ah:
		test    esi, esi
		jne     short ___67ea2h
		mov     [esp+34h], esi				;; num_channels
___67ea2h:
		mov     [MSX_struct_type], eax
		cmp     eax, byte 1
		jb      short ___67ee7h
		lea     ecx, [esp+8]
		lea     ebx, [esp+0ch]
		mov     eax, 1
		call    near load_s3m
		;;	load_s3m(???, MSX_file, ???, ???:
		mov     [MSX_struct_content_ptr], eax
		jmp     short ___67eefh
___67ee7h:
		xor     ecx, ecx
		mov     [MSX_struct_type], ecx
___67eefh:
		mov     [SFX_struct_type], edi
		cmp     edi, byte 1				;;	SCREAM_TRACKER_3
		jb      short ___67f2fh
		jbe     short ___67f03h
		cmp     edi, byte 2				;;	FAST_TRACKER_2
		je      short ___67f19h
		jmp     short ___67f2fh
___67f03h:
		mov     ecx, esp
		lea     ebx, [esp+4]
		mov     edx, esi
		xor     eax, eax
		call    near load_s3m
		;;	load_s3m(???, SFX_file, ???, ???:
		mov     [SFX_struct_content_ptr], eax
		jmp     short ___67f37h
___67f19h:
		mov     ecx, esp
		lea     ebx, [esp+4]
		mov     edx, esi
		xor     eax, eax
		call    near load_xm
		;;	load_xm(???, SFX_file, ???, ???:
		mov     [SFX_struct_content_ptr], eax
		jmp     short ___67f37h
___67f2fh:
		xor     esi, esi
		mov     [SFX_struct_type], esi
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
		mov     eax, [MSX_struct_type]
		cmp     eax, byte 1
		jb      short ___67f9ch
		mov     ebx, [esp+0ch]
		mov     eax, 1
		mov     edx, [MSX_struct_content_ptr]
		call    near ___716fch
		dec     al
		mov     [___19a27ch], al
___67f9ch:
		xor     eax, eax
		mov     al, [___24e7a4h]
		mov     [___19a27eh], ax
		mov     [___24e7a2h], ax
		mov     al, [esp+34h]
		mov     [___19a27dh], al
		mov     eax, [SFX_struct_type]
		cmp     eax, byte 1
		jb      short ___67fefh
		jbe     short ___67fcbh
		cmp     eax, byte 2
		je      short ___67fdeh
		jmp     short ___67fefh
___67fcbh:
		mov     ebx, [esp+4]
		mov     edx, [SFX_struct_content_ptr]
		xor     eax, eax
		call    near ___716fch
		jmp     short ___67fefh
___67fdeh:
		mov     ebx, [esp+4]
		mov     edx, [SFX_struct_content_ptr]
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

	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Memory_resize
	add 	esp, 8
	pop 	ecx

		xor     eax, eax
		mov     dx, [___24e7a2h]
		mov     al, [___24e7a4h]
		sub     eax, edx
		mov     ebx, [SFX_struct_content_ptr]
		mov     [___24e7a0h], ax
		test    ebx, ebx
		je      short ___68046h
		mov     eax, ebx
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx
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
		pop 	ebx
		retn
	align 	4






;__GDECL(___680c8h_cdecl)
;		push    ebx
;		push    edx
;		push    esi
;		push    edi
;		push    ebp
;		cmp     byte [___19a27bh], 0
;		je      near ___68156h
;		cmp     dword [MSX_struct_content_ptr], byte 0
;		je      short ___68114h
;		mov     eax, [MSX_struct_type]
;		cmp     eax, byte 1
;		jb      short ___68102h
;	push 	edx
;	push 	eax
;	push 	ecx
;		call    near ___71a38h_cdecl
;	pop 	ecx
;	pop 	eax
;	pop 	edx
;___68102h:
;		mov     eax, [MSX_struct_content_ptr]
;		xor     ebx, ebx
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near dRally_Memory_free
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;		mov     [MSX_struct_content_ptr], ebx
;___68114h:
;		cmp     dword [SFX_struct_content_ptr], byte 0
;		je      short ___68125h
;		xor     esi, esi
;		mov     [SFX_struct_content_ptr], esi
;___68125h:
;		mov     edi, [___24e794h]
;		xor     dl, dl
;		test    edi, edi
;		je      short ___68140h
;		mov     eax, edi
;		xor     ebp, ebp
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near dRally_Memory_free
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;		mov     [___24e794h], ebp
;___68140h:
;		test    dl, dl
;		jne     short ___6814eh
;		mov     eax, [___24e79ch]
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near dRally_Memory_free
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;___6814eh:
;		xor     dl, dl
;		mov     [___19a27bh], dl
;___68156h:
;		pop     ebp
;		pop     edi
;		pop     esi
;		pop     edx
;		pop     ebx
;		retn    




;___6815ch_cdecl:
;		push    ebx
;		push    ecx
;		push    edx
;		cmp     byte [___19a27bh], 0
;		je      near ___6827eh
;		cmp     dword [MSX_struct_content_ptr], byte 0
;		je      short ___681a0h
;		mov     eax, [MSX_struct_type]
;		cmp     eax, byte 1
;		jb      near ___6827eh
;___6818eh:
;		call    near ___718ech_cdecl
;		pop     edx
;		pop     ecx
;		pop     ebx
;		retn     
;___681a0h:
;		call    near ___68c42h_cdecl
;		mov     edx, 2eeh
;		mov     ecx, 20h
;		mov     eax, ___68a90h
;		mov     [___68c40h], dx
;		mov     edx, 8000h
;		call    near __STOSD
;		;call    near ___68858h
;		cmp     byte [___19a278h], 0
;		jne     near ___6826eh
;		cmp 	byte [SOUND_TYPE], 0
;		je      ___6825eh
;	push 	edx
;	push 	ecx
;		call    near ___771f4h_SB16_init_cdecl
;	pop 	ecx
;	pop 	edx
;		call    near ___775f1h_cdecl
;___6825eh:
;		xor     bl, bl
;		mov     dh, 1
;		mov     [___19a27ah], bl
;		mov     [___19a278h], dh
;___6826eh:
;		mov     cl, 1
;		xor     bh, bh
;		mov     [___19a280h], cl
;		mov     [___19a281h], bh
;___6827eh:
;		pop     edx
;		pop     ecx
;		pop     ebx
;		retn    
;	align 	4


;__GDECL(___68284h_cdecl)
;		mov     eax, [MSX_struct_type]
;		cmp     eax, byte 1
;		jb      ___6829dh
;		jmp     ___71a44h_cdecl
;___6829dh:
;		mov     eax, 0ffffffffh
;		retn    
;	align 	4





;___685a4h_cdecl:
;		push    edx
;		;call    near ___68858h
;		cmp     byte [___19a278h], 0
;		jne     near ___68681h
;		cmp		byte [SOUND_TYPE], 0
;		je      short ___68672h
;	push 	edx
;	push 	ecx
;		call    near ___771f4h_SB16_init_cdecl
;	pop 	ecx
;	pop 	edx
;		call    near ___775f1h_cdecl   
;___68672h:
;		mov     byte [___19a278h], 1
;		xor     dh, dh
;		mov     [___19a27ah], dh
;___68681h:
;		pop     edx
;		retn    
;	align 	4



__GDECL(___68718h_cdecl)
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


__GDECL(___6879ch_cdecl)
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


___687b8h:
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


___6880ch_getSampleRate:
		mov     al, [___19a278h]
		test    al, al
		je      ___68851h
		cmp 	byte [SOUND_TYPE], 0
		je      ___68851h
		mov     ax, [SOUND_SAMPLERATE]
		retn    
___68851h:
		xor     eax, eax
		retn    
	align 	4

;___68858h:
;		push    ebx
;		push    ecx
;		push    edx
;		push    esi
;		push    edi
;		sub     esp, byte 0ch
;		mov     edi, esp
;		mov     esi, ___677c0h
;		mov     ah, 69h
;		movsd   
;		movsd   
;		movsb   
;		mov     dl, 73h
;		mov     bl, [esp]
;		mov     cl, [esp+3]
;		mov     [esp+1], ah
;		mov     [esp+4], dl
;		mov     dh, 55h
;		mov     eax, esp
;		sub     bl, 2ch
;		dec     cl
;		mov     [esp], bl
;		mov     bh, [esp+2]
;		mov     [esp+5], dh
;		inc     bh
;		mov     [esp+3], cl
;		mov     [esp+2], bh
;		call    near getenv_
;		test    eax, eax
;		je      short ___688a9h
;		call    near ___68d08h
;___688a9h:
;		add     esp, byte 0ch
;		pop     edi
;		pop     esi
;		pop     edx
;		pop     ecx
;		pop     ebx
;		retn    
;	align 	10h


__GDECL(___68c42h_cdecl)
		pushad  
		xor     edi, edi
		xor     eax, eax
		mov     ecx, 20h
___68c4ch:
		mov     word [edi*2+___688d0h], 0ffffh
		mov     [edi*4+___68910h], eax
		mov     [edi*4+___68990h], eax
		mov     [edi*4+___68a10h], eax
		mov     byte [edi+___68b10h], 1
		mov     [edi*4+___68b30h], eax
		inc     edi
		loop    ___68c4ch
		popad   
		retn    


;SET_S3M_CB_cdecl:
;	mov 	eax, [esp+4]
;		mov     [S3M_CALLBACK], eax
;		retn    
__GDECL(___68d01h_cdecl)
	mov 	eax, [esp+4]
		mov     [___68c34h], eax
		retn    
__GDECL(___68d07h)
		retn    


;___68d08h:
;		pushad  
;		xor     ecx, ecx
;		inc     cl
;		shl     ecx, 14h
;___68d10h:
;		mov     dh, 2
;		mov     dl, 0c8h
;		inc     dh
;		xor     al, al
;		out     dx, al
;		inc     dl
;		xchg    al, cl
;		out     dx, al
;		xchg    al, cl
;		out     dx, al
;		out     dx, al
;		loop    ___68d10h
;		popad   
;		retn    

___691b8h:
		pushad  
		xor     eax, eax
		xor     edi, edi
___691bdh:
		mov     [edi*4+___68d94h], eax
		mov     [edi*4+___68e14h], eax
		mov     [edi+___68e94h], al
		inc     edi
		cmp     edi, byte 20h
		jb      short ___691bdh
		mov     [___68d70h], eax
		popad   
		retn    



;;	___691deh_cdecl(_eax, _edx, _edi);
__GDECL(___691deh_cdecl)			;; C
		;pushad  
	push 	ebx
	push 	esi
	push 	edi
	push 	ebp

	mov 	edi, [esp+1ch]
	mov 	edx, [esp+18h]
	mov 	eax, [esp+14h]

		mov     [___68d60h], edi
		mov     [___68d64h], edx
		mov     [___68d68h], eax
		mov     [___68d6ch], eax
		mov     dword [___68d78h], 0
___691ffh:
		cmp     word [___68d72h], byte 0
		jne     ___6923bh
		pushad  
		call    dword [S3M_CALLBACK]
		call    dword [___68c34h]
		popad   
		movzx   edx, word [___68c40h]
		movzx   eax, word [SOUND_SAMPLERATE]
		imul    edx
		shld    edx, eax, 10h
		shl     eax, 10h
		mov     ebx, 30d4h
		div     ebx
		add     [___68d70h], eax
___6923bh:
		movzx   eax, word [___68d72h]
		cmp     eax, [___68d6ch]
		jbe     ___6924fh
		mov     eax, [___68d6ch]
___6924fh:
		sub     [___68d72h], ax
		mov     [___68d74h], eax
		xor     esi, esi
___6925dh:
		movzx   ebx, word [esi*2+___688d0h]
		or      ebx, ebx
		je      ___6934dh
		cmp     bx, 0ffffh
		jne     ___6929dh
___69274h:
		xor     eax, eax
		mov     [esi*4+___68d94h], eax
		mov     [esi*4+___68e14h], eax
		mov     [esi+___68e94h], al
		mov     [esi*4+___68b30h], eax
		mov     byte [esi+___68b10h], 1
		jmp     ___69338h
___6929dh:
		dec     ebx
		shl     ebx, 2
		add     ebx, [___68c38h]
		mov     ebx, [ebx]
		mov     [esi*4+___68b30h], ebx
		mov     byte [esi+___68e94h], 0
		mov     eax, [ebx]
		add     eax, [esi*4+___68910h]
		mov     dl, [ebx+10h]
		and     dl, 3
		jne     ___692cfh
		cmp     eax, [ebx+4]
		jae     ___69274h
		jmp     ___69326h
___692cfh:
		cmp     dl, 1
		jne     ___692f1h
		cmp     eax, [ebx+4]
		jb      ___69326h
		cmp     eax, [ebx+8]
		jbe     ___69326h
		sub     eax, [ebx+8]
		mov     ebp, [ebx+4]
		sub     ebp, [ebx+8]
		cdq     
		idiv    ebp
		mov     eax, edx
		add     eax, [ebx+8]
		jmp     ___69326h
___692f1h:
		cmp     eax, [ebx+4]
		jb      ___69326h
		cmp     eax, [ebx+8]
		jbe     ___69326h
		sub     eax, [ebx+8]
		mov     ebp, [ebx+4]
		sub     ebp, [ebx+8]
		shl     ebp, 1
		cdq     
		idiv    ebp
		shr     ebp, 1
		cmp     eax, ebp
		ja      ___69316h
		mov     eax, edx
		add     eax, [ebx+8]
		jmp     ___69326h
___69316h:
		mov     byte [esi+___68e94h], 1
		mov     eax, edx
		neg     eax
		add     eax, ebp
		add     eax, [ebx+8]
___69326h:
		mov     [esi*4+___68d94h], eax
		mov     dword [esi*4+___68e14h], 0
___69338h:
		mov     word [esi*2+___688d0h], 0
		mov     dword [esi*4+___68910h], 0
___6934dh:
		mov     ebx, [esi*4+___68b30h]
		or      ebx, ebx
		je      ___6a600h
		mov     eax, [esi*4+___68a10h]
		imul    dword [esi*4+___68bb0h]
		shrd    eax, edx, 19h
		shl     eax, 8
		or      eax, eax
		je      ___6a600h
		dec     ah
		mov     [___68d7ch], eax
		mov     eax, [esi*4+___68990h]
		imul    dword [___68d30h]
		mov     [___68d84h], edx
		xor     ax, ax
		mov     [___68d88h], eax
		shrd    eax, edx, 10h
		mov     [___68d8ch], eax
		mov     edi, [___68d78h]
		shl     edi, 2
		test    byte [___68d5ch], 1
		je      ___693ceh
		mov     eax, [esi*4+___68a90h]
		shr     eax, 0ch
		je      ___693ceh
		cmp     al, 0fh
		jb      ___693e0h
		add     edi, [___68d38h]
		jmp     ___693d4h
___693ceh:
		add     edi, [___68d34h]
___693d4h:
		mov     dword [___694bch], ___694c0h
		jmp     ___6944dh
___693e0h:
		cmp     al, 7
		jb      ___6940ch
		cmp     al, 8
		ja      ___6940ch
		add     edi, [___68d34h]
		imul    eax, [___68d7ch], 96h
		shr     eax, 8
		mov     [___68d7ch], eax
		mov     dword [___694bch], ___69923h
		jmp     ___6944dh
___6940ch:
		movzx   edx, byte [eax+___68eb4h]
		imul    edx, [___68d7ch]
		shr     edx, 8
		neg     al
		add     al, 10h
		movzx   eax, byte [eax+___68eb4h]
		imul    eax, [___68d7ch]
		shr     eax, 8
		mov     [___68d7ch], edx
		mov     [___68d80h], eax
		add     edi, [___68d34h]
		mov     dword [___694bch], ___69e52h
___6944dh:
		mov     ecx, [___68d74h]
___69453h:
		cmp     byte [esi+___68e94h], 0
		je      ___69468h
		mov     eax, [esi*4+___68d94h]
		sub     eax, [ebx+8]
		jmp     ___69472h
___69468h:
		mov     eax, [ebx+4]
		sub     eax, [esi*4+___68d94h]
___69472h:
		jns     ___69476h
		xor     eax, eax
___69476h:
		xor     edx, edx
		cmp     [___68d8ch], edx
		je      ___694afh
		shld    edx, eax, 10h
		shl     eax, 10h
		mov     ax, [esi*4+___68e14h]
		cmp     byte [esi+___68e94h], 0
		jne     ___6949bh
		neg     ax
___6949bh:
		div     dword [___68d8ch]
		inc     eax
		mov     [___68d90h], eax
		cmp     [___68d90h], ecx
		jbe     ___694b5h
___694afh:
		mov     [___68d90h], ecx
___694b5h:
		sub     ecx, [___68d90h]
		jmp 	dword [___694bch]
___694c0h:
		push    ecx
		push    esi
		push    ebx
		mov     eax, [___68d7ch]
		mov     ecx, [esi*4+___68e14h]
		mov     edx, [___68d88h]
		mov     ebp, [___68d84h]
		cmp     byte [esi+___68e94h], 0
		je      ___694eeh
		not     edx
		not     ebp
		add     edx, byte 1
		adc     ebp, byte 0
___694eeh:
		mov     esi, [esi*4+___68d94h]
___6963eh:
		cmp     dword [___68d90h], byte 10h
		jb      ___698ebh
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+4], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+8], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+0ch], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+10h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+14h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+18h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+1ch], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+20h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+24h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add		al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+28h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+2ch], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+30h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+34h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+38h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+3ch], ebx
		add     edi, byte 40h
		sub     dword [___68d90h], byte 10h
		je      ___6991eh
		jmp     ___6963eh
___698ebh:
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi], ebx
		add     edi, byte 4
		dec     dword [___68d90h]
		jne     ___698ebh
___6991eh:
		jmp     ___6a550h
___69923h:
		push    ecx
		push    esi
		push    ebx
		mov     eax, [___68d7ch]
		mov     ecx, [esi*4+___68e14h]
		mov     edx, [___68d88h]
		mov     ebp, [___68d84h]
		cmp     byte [esi+___68e94h], 0
		je      ___69951h
		not     edx
		not     ebp
		add     edx, byte 1
		adc     ebp, byte 0
___69951h:
		mov     esi, [esi*4+___68d94h]
___69b07h:
		cmp     dword [___68d90h], byte 10h
		jb      ___69e14h
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi], ebx
		add     [edi+0f00h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+4], ebx
		add     [edi+0f04h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+8], ebx
		add     [edi+0f08h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+0ch], ebx
		add     [edi+0f0ch], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+10h], ebx
		add     [edi+0f10h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+14h], ebx
		add     [edi+0f14h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+18h], ebx
		add     [edi+0f18h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+1ch], ebx
		add     [edi+0f1ch], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+20h], ebx
		add     [edi+0f20h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+24h], ebx
		add     [edi+0f24h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+28h], ebx
		add     [edi+0f28h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add		al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+2ch], ebx
		add     [edi+0f2ch], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+30h], ebx
		add     [edi+0f30h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+34h], ebx
		add     [edi+0f34h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+38h], ebx
		add     [edi+0f38h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+3ch], ebx
		add     [edi+0f3ch], ebx
		add     edi, byte 40h
		sub     dword [___68d90h], byte 10h
		je      ___69e4dh
		jmp     ___69b07h
___69e14h:
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi], ebx
		add     [edi+0f00h], ebx
		add     edi, byte 4
		dec     dword [___68d90h]
		jne     ___69e14h
___69e4dh:
		jmp     ___6a550h
___69e52h:
		push    ecx
		push    esi
		push    ebx
		mov     eax, [___68d7ch]
		mov     ecx, [esi*4+___68e14h]
		mov     edx, [___68d80h]
		mov     ebp, [___68d84h]
		push    dword [___68d88h]
		cmp     byte [esi+___68e94h], 0
		je      ___69e8eh
		not     dword [___68d88h]
		not     ebp
		add     dword [___68d88h], byte 1
		adc     ebp, byte 0
___69e8eh:
		mov     esi, [esi*4+___68d94h]
___6a127h:
		cmp     dword [___68d90h], byte 10h
		jb      ___6a504h
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f00h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+4], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f04h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+8], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f08h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+0ch], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f0ch], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+10h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f10h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+14h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f14h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov		ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+18h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f18h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+1ch], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f1ch], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+20h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f20h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+24h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f24h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+28h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f28h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+2ch], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f2ch], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+30h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f30h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+34h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f34h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+38h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f38h], ebx
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+3ch], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f3ch], ebx
		add     edi, byte 40h
		sub     dword [___68d90h], byte 10h
		je      ___6a54ah
		jmp     ___6a127h
___6a504h:
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, [esi+1]
		mov     al, [esi]
		sub     ebx, eax
		shld    ebx, ecx, 5
		mov     ah, [___68d7dh]
		add 	ebx, [___68d48h]
		add 	al, [ebx+1fe0h]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f00h], ebx
		add     edi, byte 4
		dec     dword [___68d90h]
		jne     ___6a504h
___6a54ah:
		pop     dword [___68d88h]
___6a550h:
		mov     eax, esi
		pop     ebx
		pop     esi
		mov     [esi*4+___68e14h], ecx
		mov     [esi*4+___68d94h], eax
		pop     ecx
		or      ecx, ecx
		je      ___6a600h
		test    byte [ebx+10h], 3
		je      ___6a5e2h
		test    byte [ebx+10h], 2
		jne     ___6a589h
		sub     eax, [ebx+0ch]
		add     eax, [ebx+8]
		mov     [esi*4+___68d94h], eax
		jmp     ___69453h
___6a589h:
		cmp     byte [esi+___68e94h], 0
		jne     ___6a5b5h
		sub     eax, [ebx+0ch]
		not     dword [esi*4+___68e14h]
		not     eax
		add     dword [esi*4+___68e14h], byte 1
		adc     eax, byte 1
		add     eax, [ebx+0ch]
		mov     [esi*4+___68d94h], eax
		jmp     ___6a5d6h
___6a5b5h:
		sub     eax, [ebx+8]
		not     dword [esi*4+___68e14h]
		not     eax
		add     dword [esi*4+___68e14h], byte 1
		adc     eax, byte 1
		add     eax, [ebx+8]
		mov     [esi*4+___68d94h], eax
___6a5d6h:
		xor     byte [esi+___68e94h], 1
		jmp     ___69453h
___6a5e2h:
		xor     eax, eax
		mov     [esi*4+___68d94h], eax
		mov     [esi*4+___68e14h], eax
		mov     [esi*4+___68b30h], eax
		mov     byte [esi+___68b10h], 1
___6a600h:
		inc     esi
		cmp     esi, [___68c3ch]
		jbe     ___6925dh
		mov     eax, [___68d74h]
		add     [___68d78h], eax
		sub     [___68d6ch], eax
		jne     ___691ffh
		cmp     byte [___68d5eh], 0
		jne     ___6b4d8h
		cmp     byte [___68d5ch], 0
		je      ___6afdfh
		cmp     byte [___68d5dh], 0
		jne     ___6a850h
		mov     ebp, [___68d68h]
		mov     esi, [___68d34h]
		mov     ecx, [___68d38h]
		mov     edi, [___68d60h]
		xor     ebx, ebx
		mov     edx, [___68d44h]
___6a66bh:
		cmp     ebp, byte 10h
		jb      ___6a828h
		movsx   eax, word [esi+2]
		mov     [esi], ebx
		mov     al, [edx+eax*1]
		mov     [edi+1], al
		movsx   eax, word [ecx+2]
		mov     [ecx], ebx
		mov     al, [edx+eax*1]
		mov     [edi], al
		movsx   eax, word [esi+6]
		mov     [esi+4], ebx
		mov     al, [edx+eax*1]
		mov     [edi+3], al
		movsx   eax, word [ecx+6]
		mov     [ecx+4], ebx
		mov     al, [edx+eax*1]
		mov     [edi+2], al
		movsx   eax, word [esi+0ah]
		mov     [esi+8], ebx
		mov     al, [edx+eax*1]
		mov     [edi+5], al
		movsx   eax, word [ecx+0ah]
		mov     [ecx+8], ebx
		mov     al, [edx+eax*1]
		mov     [edi+4], al
		movsx   eax, word [esi+0eh]
		mov     [esi+0ch], ebx
		mov     al, [edx+eax*1]
		mov     [edi+7], al
		movsx   eax, word [ecx+0eh]
		mov     [ecx+0ch], ebx
		mov     al, [edx+eax*1]
		mov     [edi+6], al
		movsx   eax, word [esi+12h]
		mov     [esi+10h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+9], al
		movsx   eax, word [ecx+12h]
		mov     [ecx+10h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+8], al
		movsx   eax, word [esi+16h]
		mov     [esi+14h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+0bh], al
		movsx   eax, word [ecx+16h]
		mov     [ecx+14h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+0ah], al
		movsx   eax, word [esi+1ah]
		mov     [esi+18h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+0dh], al
		movsx   eax, word [ecx+1ah]
		mov     [ecx+18h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+0ch], al
		movsx   eax, word [esi+1eh]
		mov     [esi+1ch], ebx
		mov     al, [edx+eax*1]
		mov     [edi+0fh], al
		movsx   eax, word [ecx+1eh]
		mov     [ecx+1ch], ebx
		mov     al, [edx+eax*1]
		mov     [edi+0eh], al
		movsx   eax, word [esi+22h]
		mov     [esi+20h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+11h], al
		movsx   eax, word [ecx+22h]
		mov     [ecx+20h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+10h], al
		movsx   eax, word [esi+26h]
		mov     [esi+24h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+13h], al
		movsx   eax, word [ecx+26h]
		mov     [ecx+24h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+12h], al
		movsx   eax, word [esi+2ah]
		mov     [esi+28h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+15h], al
		movsx   eax, word [ecx+2ah]
		mov     [ecx+28h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+14h], al
		movsx   eax, word [esi+2eh]
		mov     [esi+2ch], ebx
		mov     al, [edx+eax*1]
		mov     [edi+17h], al
		movsx   eax, word [ecx+2eh]
		mov     [ecx+2ch], ebx
		mov     al, [edx+eax*1]
		mov     [edi+16h], al
		movsx   eax, word [esi+32h]
		mov     [esi+30h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+19h], al
		movsx   eax, word [ecx+32h]
		mov     [ecx+30h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+18h], al
		movsx   eax, word [esi+36h]
		mov     [esi+34h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+1bh], al
		movsx   eax, word [ecx+36h]
		mov     [ecx+34h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+1ah], al
		movsx   eax, word [esi+3ah]
		mov     [esi+38h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+1dh], al
		movsx   eax, word [ecx+3ah]
		mov     [ecx+38h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+1ch], al
		movsx   eax, word [esi+3eh]
		mov     [esi+3ch], ebx
		mov     al, [edx+eax*1]
		mov     [edi+1fh], al
		movsx   eax, word [ecx+3eh]
		mov     [ecx+3ch], ebx
		mov     al, [edx+eax*1]
		mov     [edi+1eh], al
		add     edi, byte 20h
		add     esi, byte 40h
		add     ecx, byte 40h
		sub     ebp, byte 10h
		je      ___6bcf7h
		jmp     ___6a66bh
___6a828h:
		movsx   eax, word [esi+2]
		mov     [esi], ebx
		mov     al, [edx+eax*1]
		mov     [edi+1], al
		movsx   eax, word [ecx+2]
		mov     [ecx], ebx
		mov     al, [edx+eax*1]
		mov     [edi], al
		add     edi, byte 2
		add     esi, byte 4
		add     ecx, byte 4
		dec     ebp
		jne     ___6a828h
		jmp     ___6bcf7h
___6a850h:
		mov     ebp, [___68d68h]
		mov     esi, [___68d34h]
		mov     ecx, [___68d38h]
		mov     edi, [___68d60h]
		xor     ebx, ebx
___6a86ah:
		cmp     ebp, byte 10h
		jb      ___6ace5h
		mov     eax, [esi]
		mov     edx, [ecx]
		mov     [esi], ebx
		mov     [ecx], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6ad37h
		cmp     eax, dword 7fffh
		jg      ___6ad41h
___6a891h:
		cmp     edx, 0ffff8000h
		jl      ___6ad4bh
		cmp     edx, 7fffh
		jg      ___6ad55h
___6a8a9h:
		mov     [edi+2], al
		mov     [edi], dl
		mov     [edi+3], ah
		mov     [edi+1], dh
		mov     eax, [esi+4]
		mov     edx, [ecx+4]
		mov     [esi+4], ebx
		mov     [ecx+4], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6ad5fh
		cmp     eax, dword 7fffh
		jg      ___6ad69h
___6a8d6h:
		cmp     edx, 0ffff8000h
		jl      ___6ad73h
		cmp     edx, 7fffh
		jg      ___6ad7dh
___6a8eeh:
		mov     [edi+6], al
		mov     [edi+4], dl
		mov     [edi+7], ah
		mov     [edi+5], dh
		mov     eax, [esi+8]
		mov     edx, [ecx+8]
		mov     [esi+8], ebx
		mov     [ecx+8], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6ad87h
		cmp     eax, dword 7fffh
		jg      ___6ad91h
___6a91ch:
		cmp     edx, 0ffff8000h
		jl      ___6ad9bh
		cmp     edx, 7fffh
		jg      ___6ada5h
___6a934h:
		mov     [edi+0ah], al
		mov     [edi+8], dl
		mov     [edi+0bh], ah
		mov     [edi+9], dh
		mov     eax, [esi+0ch]
		mov     edx, [ecx+0ch]
		mov     [esi+0ch], ebx
		mov     [ecx+0ch], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6adafh
		cmp     eax, dword 7fffh
		jg      ___6adb9h
___6a962h:
		cmp     edx, 0ffff8000h
		jl      ___6adc3h
		cmp     edx, 7fffh
		jg      ___6adcdh
___6a97ah:
		mov     [edi+0eh], al
		mov     [edi+0ch], dl
		mov     [edi+0fh], ah
		mov     [edi+0dh], dh
		mov     eax, [esi+10h]
		mov     edx, [ecx+10h]
		mov     [esi+10h], ebx
		mov     [ecx+10h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6add7h
		cmp     eax, dword 7fffh
		jg      ___6ade1h
___6a9a8h:
		cmp     edx, 0ffff8000h
		jl      ___6adebh
		cmp     edx, 7fffh
		jg      ___6adf5h
___6a9c0h:
		mov     [edi+12h], al
		mov     [edi+10h], dl
		mov     [edi+13h], ah
		mov     [edi+11h], dh
		mov     eax, [esi+14h]
		mov     edx, [ecx+14h]
		mov     [esi+14h], ebx
		mov     [ecx+14h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6adffh
		cmp     eax, dword 7fffh
		jg      ___6ae09h
___6a9eeh:
		cmp     edx, 0ffff8000h
		jl      ___6ae13h
		cmp     edx, 7fffh
		jg      ___6ae1dh
___6aa06h:
		mov     [edi+16h], al
		mov     [edi+14h], dl
		mov     [edi+17h], ah
		mov     [edi+15h], dh
		mov     eax, [esi+18h]
		mov     edx, [ecx+18h]
		mov     [esi+18h], ebx
		mov     [ecx+18h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6ae27h
		cmp     eax, dword 7fffh
		jg      ___6ae31h
___6aa34h:
		cmp     edx, 0ffff8000h
		jl      ___6ae3bh
		cmp     edx, 7fffh
		jg      ___6ae45h
___6aa4ch:
		mov     [edi+1ah], al
		mov     [edi+18h], dl
		mov     [edi+1bh], ah
		mov     [edi+19h], dh
		mov     eax, [esi+1ch]
		mov     edx, [ecx+1ch]
		mov     [esi+1ch], ebx
		mov     [ecx+1ch], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6ae4fh
		cmp     eax, dword 7fffh
		jg      ___6ae59h
___6aa7ah:
		cmp     edx, 0ffff8000h
		jl      ___6ae63h
		cmp     edx, 7fffh
		jg      ___6ae6dh
___6aa92h:
		mov     [edi+1eh], al
		mov     [edi+1ch], dl
		mov     [edi+1fh], ah
		mov     [edi+1dh], dh
		mov     eax, [esi+20h]
		mov     edx, [ecx+20h]
		mov     [esi+20h], ebx
		mov     [ecx+20h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6ae77h
		cmp     eax, dword 7fffh
		jg      ___6ae81h
___6aac0h:
		cmp     edx, 0ffff8000h
		jl      ___6ae8bh
		cmp     edx, 7fffh
		jg      ___6ae95h
___6aad8h:
		mov     [edi+22h], al
		mov     [edi+20h], dl
		mov     [edi+23h], ah
		mov     [edi+21h], dh
		mov     eax, [esi+24h]
		mov     edx, [ecx+24h]
		mov     [esi+24h], ebx
		mov     [ecx+24h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6ae9fh
		cmp     eax, dword 7fffh
		jg      ___6aea9h
___6ab06h:
		cmp     edx, 0ffff8000h
		jl      ___6aeb3h
		cmp     edx, 7fffh
		jg      ___6aebdh
___6ab1eh:
		mov     [edi+26h], al
		mov     [edi+24h], dl
		mov     [edi+27h], ah
		mov     [edi+25h], dh
		mov     eax, [esi+28h]
		mov     edx, [ecx+28h]
		mov     [esi+28h], ebx
		mov     [ecx+28h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6aec7h
		cmp     eax, dword 7fffh
		jg      ___6aed1h
___6ab4ch:
		cmp     edx, 0ffff8000h
		jl      ___6aedbh
		cmp     edx, 7fffh
		jg      ___6aee5h
___6ab64h:
		mov     [edi+2ah], al
		mov     [edi+28h], dl
		mov     [edi+2bh], ah
		mov     [edi+29h], dh
		mov     eax, [esi+2ch]
		mov     edx, [ecx+2ch]
		mov     [esi+2ch], ebx
		mov     [ecx+2ch], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6aeefh
		cmp     eax, dword 7fffh
		jg      ___6aef9h
___6ab92h:
		cmp     edx, 0ffff8000h
		jl      ___6af03h
		cmp     edx, 7fffh
		jg      ___6af0dh
___6abaah:
		mov     [edi+2eh], al
		mov     [edi+2ch], dl
		mov     [edi+2fh], ah
		mov     [edi+2dh], dh
		mov     eax, [esi+30h]
		mov     edx, [ecx+30h]
		mov     [esi+30h], ebx
		mov     [ecx+30h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6af17h
		cmp     eax, dword 7fffh
		jg      ___6af21h
___6abd8h:
		cmp     edx, 0ffff8000h
		jl      ___6af2bh
		cmp     edx, 7fffh
		jg      ___6af35h
___6abf0h:
		mov     [edi+32h], al
		mov     [edi+30h], dl
		mov     [edi+33h], ah
		mov     [edi+31h], dh
		mov     eax, [esi+34h]
		mov     edx, [ecx+34h]
		mov     [esi+34h], ebx
		mov     [ecx+34h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6af3fh
		cmp     eax, dword 7fffh
		jg      ___6af49h
___6ac1eh:
		cmp     edx, 0ffff8000h
		jl      ___6af53h
		cmp     edx, 7fffh
		jg      ___6af5dh
___6ac36h:
		mov     [edi+36h], al
		mov     [edi+34h], dl
		mov     [edi+37h], ah
		mov     [edi+35h], dh
		mov     eax, [esi+38h]
		mov     edx, [ecx+38h]
		mov     [esi+38h], ebx
		mov     [ecx+38h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6af67h
		cmp     eax, dword 7fffh
		jg      ___6af71h
___6ac64h:
		cmp     edx, 0ffff8000h
		jl      ___6af7bh
		cmp     edx, 7fffh
		jg      ___6af85h
___6ac7ch:
		mov     [edi+3ah], al
		mov     [edi+38h], dl
		mov     [edi+3bh], ah
		mov     [edi+39h], dh
		mov     eax, [esi+3ch]
		mov     edx, [ecx+3ch]
		mov     [esi+3ch], ebx
		mov     [ecx+3ch], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6af8fh
		cmp     eax, dword 7fffh
		jg      ___6af99h
___6acaah:
		cmp     edx, 0ffff8000h
		jl      ___6afa3h
		cmp     edx, 7fffh
		jg      ___6afadh
___6acc2h:
		mov     [edi+3eh], al
		mov     [edi+3ch], dl
		mov     [edi+3fh], ah
		mov     [edi+3dh], dh
		add     edi, byte 40h
		add     esi, byte 40h
		add     ecx, byte 40h
		sub     ebp, byte 10h
		je      ___6bcf7h
		jmp     ___6a86ah
___6ace5h:
		mov     eax, [esi]
		mov     edx, [ecx]
		mov     [esi], ebx
		mov     [ecx], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6afb7h
		cmp     eax, dword 7fffh
		jg      ___6afc1h
___6ad03h:
		cmp     edx, 0ffff8000h
		jl      ___6afcbh
		cmp     edx, 7fffh
		jg      ___6afd5h
___6ad1bh:
		mov     [edi+2], al
		mov     [edi], dl
		mov     [edi+3], ah
		mov     [edi+1], dh
		add     edi, byte 4
		add     esi, byte 4
		add     ecx, byte 4
		dec     ebp
		jne     ___6ace5h
		jmp     ___6bcf7h
___6ad37h:
		mov     eax, 0ffff8000h
		jmp     ___6a891h
___6ad41h:
		mov     eax, 7fffh
		jmp     ___6a891h
___6ad4bh:
		mov     edx, 0ffff8000h
		jmp     ___6a8a9h
___6ad55h:
		mov     edx, 7fffh
		jmp     ___6a8a9h
___6ad5fh:
		mov     eax, 0ffff8000h
		jmp     ___6a8d6h
___6ad69h:
		mov     eax, 7fffh
		jmp     ___6a8d6h
___6ad73h:
		mov     edx, 0ffff8000h
		jmp     ___6a8eeh
___6ad7dh:
		mov     edx, 7fffh
		jmp     ___6a8eeh
___6ad87h:
		mov     eax, 0ffff8000h
		jmp     ___6a91ch
___6ad91h:
		mov     eax, 7fffh
		jmp     ___6a91ch
___6ad9bh:
		mov     edx, 0ffff8000h
		jmp     ___6a934h
___6ada5h:
		mov     edx, 7fffh
		jmp     ___6a934h
___6adafh:
		mov     eax, 0ffff8000h
		jmp     ___6a962h
___6adb9h:
		mov     eax, 7fffh
		jmp     ___6a962h
___6adc3h:
		mov     edx, 0ffff8000h
		jmp     ___6a97ah
___6adcdh:
		mov     edx, 7fffh
		jmp     ___6a97ah
___6add7h:
		mov     eax, 0ffff8000h
		jmp     ___6a9a8h
___6ade1h:
		mov     eax, 7fffh
		jmp     ___6a9a8h
___6adebh:
		mov     edx, 0ffff8000h
		jmp     ___6a9c0h
___6adf5h:
		mov     edx, 7fffh
		jmp     ___6a9c0h
___6adffh:
		mov     eax, 0ffff8000h
		jmp     ___6a9eeh
___6ae09h:
		mov     eax, 7fffh
		jmp     ___6a9eeh
___6ae13h:
		mov     edx, 0ffff8000h
		jmp     ___6aa06h
___6ae1dh:
		mov     edx, 7fffh
		jmp     ___6aa06h
___6ae27h:
		mov     eax, 0ffff8000h
		jmp     ___6aa34h
___6ae31h:
		mov     eax, 7fffh
		jmp     ___6aa34h
___6ae3bh:
		mov     edx, 0ffff8000h
		jmp     ___6aa4ch
___6ae45h:
		mov     edx, 7fffh
		jmp     ___6aa4ch
___6ae4fh:
		mov     eax, 0ffff8000h
		jmp     ___6aa7ah
___6ae59h:
		mov     eax, 7fffh
		jmp     ___6aa7ah
___6ae63h:
		mov     edx, 0ffff8000h
		jmp     ___6aa92h
___6ae6dh:
		mov     edx, 7fffh
		jmp     ___6aa92h
___6ae77h:
		mov     eax, 0ffff8000h
		jmp     ___6aac0h
___6ae81h:
		mov     eax, 7fffh
		jmp     ___6aac0h
___6ae8bh:
		mov     edx, 0ffff8000h
		jmp     ___6aad8h
___6ae95h:
		mov     edx, 7fffh
		jmp     ___6aad8h
___6ae9fh:
		mov     eax, 0ffff8000h
		jmp     ___6ab06h
___6aea9h:
		mov     eax, 7fffh
		jmp     ___6ab06h
___6aeb3h:
		mov     edx, 0ffff8000h
		jmp     ___6ab1eh
___6aebdh:
		mov     edx, 7fffh
		jmp     ___6ab1eh
___6aec7h:
		mov     eax, 0ffff8000h
		jmp     ___6ab4ch
___6aed1h:
		mov     eax, 7fffh
		jmp     ___6ab4ch
___6aedbh:
		mov     edx, 0ffff8000h
		jmp     ___6ab64h
___6aee5h:
		mov     edx, 7fffh
		jmp     ___6ab64h
___6aeefh:
		mov     eax, 0ffff8000h
		jmp     ___6ab92h
___6aef9h:
		mov     eax, 7fffh
		jmp     ___6ab92h
___6af03h:
		mov     edx, 0ffff8000h
		jmp     ___6abaah
___6af0dh:
		mov     edx, 7fffh
		jmp     ___6abaah
___6af17h:
		mov     eax, 0ffff8000h
		jmp     ___6abd8h
___6af21h:
		mov     eax, 7fffh
		jmp     ___6abd8h
___6af2bh:
		mov     edx, 0ffff8000h
		jmp     ___6abf0h
___6af35h:
		mov     edx, 7fffh
		jmp     ___6abf0h
___6af3fh:
		mov     eax, 0ffff8000h
		jmp     ___6ac1eh
___6af49h:
		mov     eax, 7fffh
		jmp     ___6ac1eh
___6af53h:
		mov     edx, 0ffff8000h
		jmp     ___6ac36h
___6af5dh:
		mov     edx, 7fffh
		jmp     ___6ac36h
___6af67h:
		mov     eax, 0ffff8000h
		jmp     ___6ac64h
___6af71h:
		mov     eax, 7fffh
		jmp     ___6ac64h
___6af7bh:
		mov     edx, 0ffff8000h
		jmp     ___6ac7ch
___6af85h:
		mov     edx, 7fffh
		jmp     ___6ac7ch
___6af8fh:
		mov     eax, 0ffff8000h
		jmp     ___6acaah
___6af99h:
		mov     eax, 7fffh
		jmp     ___6acaah
___6afa3h:
		mov     edx, 0ffff8000h
		jmp     ___6acc2h
___6afadh:
		mov     edx, 7fffh
		jmp     ___6acc2h
___6afb7h:
		mov     eax, 0ffff8000h
		jmp     ___6ad03h
___6afc1h:
		mov     eax, 7fffh
		jmp     ___6ad03h
___6afcbh:
		mov     edx, 0ffff8000h
		jmp     ___6ad1bh
___6afd5h:
		mov     edx, 7fffh
		jmp     ___6ad1bh
___6afdfh:
		cmp     byte [___68d5dh], 0
		jne     ___6b109h
		mov     ecx, [___68d68h]
		mov     esi, [___68d34h]
		mov     edi, [___68d60h]
		xor     ebx, ebx
		mov     edx, [___68d44h]
___6b006h:
		cmp     ecx, byte 10h
		jb      ___6b0f1h
		movsx   eax, word [esi+2]
		mov     [esi], ebx
		mov     al, [edx+eax*1]
		mov     [edi], al
		movsx   eax, word [esi+6]
		mov     [esi+4], ebx
		mov     al, [edx+eax*1]
		mov     [edi+1], al
		movsx   eax, word [esi+0ah]
		mov     [esi+8], ebx
		mov     al, [edx+eax*1]
		mov     [edi+2], al
		movsx   eax, word [esi+0eh]
		mov     [esi+0ch], ebx
		mov     al, [edx+eax*1]
		mov     [edi+3], al
		movsx   eax, word [esi+12h]
		mov     [esi+10h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+4], al
		movsx   eax, word [esi+16h]
		mov     [esi+14h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+5], al
		movsx   eax, word [esi+1ah]
		mov     [esi+18h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+6], al
		movsx   eax, word [esi+1eh]
		mov     [esi+1ch], ebx
		mov     al, [edx+eax*1]
		mov     [edi+7], al
		movsx   eax, word [esi+22h]
		mov     [esi+20h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+8], al
		movsx   eax, word [esi+26h]
		mov     [esi+24h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+9], al
		movsx   eax, word [esi+2ah]
		mov     [esi+28h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+0ah], al
		movsx   eax, word [esi+2eh]
		mov     [esi+2ch], ebx
		mov     al, [edx+eax*1]
		mov     [edi+0bh], al
		movsx   eax, word [esi+32h]
		mov     [esi+30h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+0ch], al
		movsx   eax, word [esi+36h]
		mov     [esi+34h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+0dh], al
		movsx   eax, word [esi+3ah]
		mov     [esi+38h], ebx
		mov     al, [edx+eax*1]
		mov     [edi+0eh], al
		movsx   eax, word [esi+3eh]
		mov     [esi+3ch], ebx
		mov     al, [edx+eax*1]
		mov     [edi+0fh], al
		add     edi, byte 10h
		add     esi, byte 40h
		sub     ecx, byte 10h
		je      ___6bcf7h
		jmp     ___6b006h
___6b0f1h:
		movsx   eax, word [esi+2]
		mov     [esi], ebx
		mov     al, [edx+eax*1]
		mov     [edi], al
		add     edi, byte 1
		add     esi, byte 4
		loop    ___6b0f1h
		jmp     ___6bcf7h
___6b109h:
		mov     ebp, [___68d68h]
		mov     esi, [___68d34h]
		mov     edi, [___68d60h]
		xor     ebx, ebx
___6b11dh:
		cmp     ebp, byte 10h
		jb      ___6b357h
		mov     eax, [esi]
		mov     [esi], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b384h
		cmp     eax, dword 7fffh
		jg      ___6b38eh
___6b140h:
		mov     [edi], al
		mov     [edi+1], ah
		mov     eax, [esi+4]
		mov     [esi+4], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b398h
		cmp     eax, dword 7fffh
		jg      ___6b3a2h
___6b161h:
		mov     [edi+2], al
		mov     [edi+3], ah
		mov     eax, [esi+8]
		mov     [esi+8], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b3ach
		cmp     eax, dword 7fffh
		jg      ___6b3b6h
___6b183h:
		mov     [edi+4], al
		mov     [edi+5], ah
		mov     eax, [esi+0ch]
		mov     [esi+0ch], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b3c0h
		cmp     eax, dword 7fffh
		jg      ___6b3cah
___6b1a5h:
		mov     [edi+6], al
		mov     [edi+7], ah
		mov     eax, [esi+10h]
		mov     [esi+10h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b3d4h
		cmp     eax, dword 7fffh
		jg      ___6b3deh
___6b1c7h:
		mov     [edi+8], al
		mov     [edi+9], ah
		mov     eax, [esi+14h]
		mov     [esi+14h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b3e8h
		cmp     eax, dword 7fffh
		jg      ___6b3f2h
___6b1e9h:
		mov     [edi+0ah], al
		mov     [edi+0bh], ah
		mov     eax, [esi+18h]
		mov     [esi+18h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b3fch
		cmp     eax, dword 7fffh
		jg      ___6b406h
___6b20bh:
		mov     [edi+0ch], al
		mov     [edi+0dh], ah
		mov     eax, [esi+1ch]
		mov     [esi+1ch], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b410h
		cmp     eax, dword 7fffh
		jg      ___6b41ah
___6b22dh:
		mov     [edi+0eh], al
		mov     [edi+0fh], ah
		mov     eax, [esi+20h]
		mov     [esi+20h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b424h
		cmp     eax, dword 7fffh
		jg      ___6b42eh
___6b24fh:
		mov     [edi+10h], al
		mov     [edi+11h], ah
		mov     eax, [esi+24h]
		mov     [esi+24h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b438h
		cmp     eax, dword 7fffh
		jg      ___6b442h
___6b271h:
		mov     [edi+12h], al
		mov     [edi+13h], ah
		mov     eax, [esi+28h]
		mov     [esi+28h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b44ch
		cmp     eax, dword 7fffh
		jg      ___6b456h
___6b293h:
		mov     [edi+14h], al
		mov     [edi+15h], ah
		mov     eax, [esi+2ch]
		mov     [esi+2ch], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b460h
		cmp     eax, dword 7fffh
		jg      ___6b46ah
___6b2b5h:
		mov     [edi+16h], al
		mov     [edi+17h], ah
		mov     eax, [esi+30h]
		mov     [esi+30h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b474h
		cmp     eax, dword 7fffh
		jg      ___6b47eh
___6b2d7h:
		mov     [edi+18h], al
		mov     [edi+19h], ah
		mov     eax, [esi+34h]
		mov     [esi+34h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b488h
		cmp     eax, dword 7fffh
		jg      ___6b492h
___6b2f9h:
		mov     [edi+1ah], al
		mov     [edi+1bh], ah
		mov     eax, [esi+38h]
		mov     [esi+38h], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b49ch
		cmp     eax, dword 7fffh
		jg      ___6b4a6h
___6b31bh:
		mov     [edi+1ch], al
		mov     [edi+1dh], ah
		mov     eax, [esi+3ch]
		mov     [esi+3ch], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b4b0h
		cmp     eax, dword 7fffh
		jg      ___6b4bah
___6b33dh:
		mov     [edi+1eh], al
		mov     [edi+1fh], ah
		add     edi, byte 20h
		add     esi, byte 40h
		sub     ebp, byte 10h
		je      ___6bcf7h
		jmp     ___6b11dh
___6b357h:
		mov     eax, [esi]
		mov     [esi], ebx
		cmp     eax, dword 0ffff8000h
		jl      ___6b4c4h
		cmp     eax, dword 7fffh
		jg      ___6b4ceh
___6b371h:
		mov     [edi], al
		mov     [edi+1], ah
		add     edi, byte 2
		add     esi, byte 4
		dec     ebp
		jne     ___6b357h
		jmp     ___6bcf7h
___6b384h:
		mov     eax, 0ffff8000h
		jmp     ___6b140h
___6b38eh:
		mov     eax, 7fffh
		jmp     ___6b140h
___6b398h:
		mov     eax, 0ffff8000h
		jmp     ___6b161h
___6b3a2h:
		mov     eax, 7fffh
		jmp     ___6b161h
___6b3ach:
		mov     eax, 0ffff8000h
		jmp     ___6b183h
___6b3b6h:
		mov     eax, 7fffh
		jmp     ___6b183h
___6b3c0h:
		mov     eax, 0ffff8000h
		jmp     ___6b1a5h
___6b3cah:
		mov     eax, 7fffh
		jmp     ___6b1a5h
___6b3d4h:
		mov     eax, 0ffff8000h
		jmp     ___6b1c7h
___6b3deh:
		mov     eax, 7fffh
		jmp     ___6b1c7h
___6b3e8h:
		mov     eax, 0ffff8000h
		jmp     ___6b1e9h
___6b3f2h:
		mov     eax, 7fffh
		jmp     ___6b1e9h
___6b3fch:
		mov     eax, 0ffff8000h
		jmp     ___6b20bh
___6b406h:
		mov     eax, 7fffh
		jmp     ___6b20bh
___6b410h:
		mov     eax, 0ffff8000h
		jmp     ___6b22dh
___6b41ah:
		mov     eax, 7fffh
		jmp     ___6b22dh
___6b424h:
		mov     eax, 0ffff8000h
		jmp     ___6b24fh
___6b42eh:
		mov     eax, 7fffh
		jmp     ___6b24fh
___6b438h:
		mov     eax, 0ffff8000h
		jmp     ___6b271h
___6b442h:
		mov     eax, 7fffh
		jmp     ___6b271h
___6b44ch:
		mov     eax, 0ffff8000h
		jmp     ___6b293h
___6b456h:
		mov     eax, 7fffh
		jmp     ___6b293h
___6b460h:
		mov     eax, 0ffff8000h
		jmp     ___6b2b5h
___6b46ah:
		mov     eax, 7fffh
		jmp     ___6b2b5h
___6b474h:
		mov     eax, 0ffff8000h
		jmp     ___6b2d7h
___6b47eh:
		mov     eax, 7fffh
		jmp     ___6b2d7h
___6b488h:
		mov     eax, 0ffff8000h
		jmp     ___6b2f9h
___6b492h:
		mov     eax, 7fffh
		jmp     ___6b2f9h
___6b49ch:
		mov     eax, 0ffff8000h
		jmp     ___6b31bh
___6b4a6h:
		mov     eax, 7fffh
		jmp     ___6b31bh
___6b4b0h:
		mov     eax, 0ffff8000h
		jmp     ___6b33dh
___6b4bah:
		mov     eax, 7fffh
		jmp     ___6b33dh
___6b4c4h:
		mov     eax, 0ffff8000h
		jmp     ___6b371h
___6b4ceh:
		mov     eax, 7fffh
		jmp     ___6b371h
___6b4d8h:
		mov     ebp, [___68d68h]
		mov     esi, [___68d34h]
		mov     ecx, [___68d38h]
		mov     edi, [___68d60h]
		mov     ebx, [___68d64h]
___6b4f6h:
		cmp     ebp, byte 10h
		jb      ___6b9f3h
		mov     eax, [esi]
		mov     edx, [ecx]
		mov     dword [esi], 0
		mov     dword [ecx], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6ba4fh
		cmp     eax, dword 7fffh
		jg      ___6ba59h
___6b525h:
		cmp     edx, 0ffff8000h
		jl      ___6ba63h
		cmp     edx, 7fffh
		jg      ___6ba6dh
___6b53dh:
		mov     [edi], al
		mov     [ebx], dl
		mov     [edi+1], ah
		mov     [ebx+1], dh
		mov     eax, [esi+4]
		mov     edx, [ecx+4]
		mov     dword [esi+4], 0
		mov     dword [ecx+4], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6ba77h
		cmp     eax, dword 7fffh
		jg      ___6ba81h
___6b571h:
		cmp     edx, 0ffff8000h
		jl      ___6ba8bh
		cmp     edx, 7fffh
		jg      ___6ba95h
___6b589h:
		mov     [edi+2], al
		mov     [ebx+2], dl
		mov     [edi+3], ah
		mov     [ebx+3], dh
		mov     eax, [esi+8]
		mov     edx, [ecx+8]
		mov     dword [esi+8], 0
		mov     dword [ecx+8], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6ba9fh
		cmp     eax, dword 7fffh
		jg      ___6baa9h
___6b5bfh:
		cmp     edx, 0ffff8000h
		jl      ___6bab3h
		cmp     edx, 7fffh
		jg      ___6babdh
___6b5d7h:
		mov     [edi+4], al
		mov     [ebx+4], dl
		mov     [edi+5], ah
		mov     [ebx+5], dh
		mov     eax, [esi+0ch]
		mov     edx, [ecx+0ch]
		mov     dword [esi+0ch], 0
		mov     dword [ecx+0ch], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bac7h
		cmp     eax, dword 7fffh
		jg      ___6bad1h
___6b60dh:
		cmp     edx, 0ffff8000h
		jl      ___6badbh
		cmp     edx, 7fffh
		jg      ___6bae5h
___6b625h:
		mov     [edi+6], al
		mov     [ebx+6], dl
		mov     [edi+7], ah
		mov     [ebx+7], dh
		mov     eax, [esi+10h]
		mov     edx, [ecx+10h]
		mov     dword [esi+10h], 0
		mov     dword [ecx+10h], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6baefh
		cmp     eax, dword 7fffh
		jg      ___6baf9h
___6b65bh:
		cmp     edx, 0ffff8000h
		jl      ___6bb03h
		cmp     edx, 7fffh
		jg      ___6bb0dh
___6b673h:
		mov     [edi+8], al
		mov     [ebx+8], dl
		mov     [edi+9], ah
		mov     [ebx+9], dh
		mov     eax, [esi+14h]
		mov     edx, [ecx+14h]
		mov     dword [esi+14h], 0
		mov     dword [ecx+14h], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bb17h
		cmp     eax, dword 7fffh
		jg      ___6bb21h
___6b6a9h:
		cmp     edx, 0ffff8000h
		jl      ___6bb2bh
		cmp     edx, 7fffh
		jg      ___6bb35h
___6b6c1h:
		mov     [edi+0ah], al
		mov     [ebx+0ah], dl
		mov     [edi+0bh], ah
		mov     [ebx+0bh], dh
		mov     eax, [esi+18h]
		mov     edx, [ecx+18h]
		mov     dword [esi+18h], 0
		mov     dword [ecx+18h], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bb3fh
		cmp     eax, dword 7fffh
		jg      ___6bb49h
___6b6f7h:
		cmp     edx, 0ffff8000h
		jl      ___6bb53h
		cmp     edx, 7fffh
		jg      ___6bb5dh
___6b70fh:
		mov     [edi+0ch], al
		mov     [ebx+0ch], dl
		mov     [edi+0dh], ah
		mov     [ebx+0dh], dh
		mov     eax, [esi+1ch]
		mov     edx, [ecx+1ch]
		mov     dword [esi+1ch], 0
		mov     dword [ecx+1ch], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bb67h
		cmp     eax, dword 7fffh
		jg      ___6bb71h
___6b745h:
		cmp     edx, 0ffff8000h
		jl      ___6bb7bh
		cmp     edx, 7fffh
		jg      ___6bb85h
___6b75dh:
		mov     [edi+0eh], al
		mov     [ebx+0eh], dl
		mov     [edi+0fh], ah
		mov     [ebx+0fh], dh
		mov     eax, [esi+20h]
		mov     edx, [ecx+20h]
		mov     dword [esi+20h], 0
		mov     dword [ecx+20h], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bb8fh
		cmp     eax, dword 7fffh
		jg      ___6bb99h
___6b793h:
		cmp     edx, 0ffff8000h
		jl      ___6bba3h
		cmp     edx, 7fffh
		jg      ___6bbadh
___6b7abh:
		mov     [edi+10h], al
		mov     [ebx+10h], dl
		mov     [edi+11h], ah
		mov     [ebx+11h], dh
		mov     eax, [esi+24h]
		mov     edx, [ecx+24h]
		mov     dword [esi+24h], 0
		mov     dword [ecx+24h], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bbb7h
		cmp     eax, dword 7fffh
		jg      ___6bbc1h
___6b7e1h:
		cmp     edx, 0ffff8000h
		jl      ___6bbcbh
		cmp     edx, 7fffh
		jg      ___6bbd5h
___6b7f9h:
		mov     [edi+12h], al
		mov     [ebx+12h], dl
		mov     [edi+13h], ah
		mov     [ebx+13h], dh
		mov     eax, [esi+28h]
		mov     edx, [ecx+28h]
		mov     dword [esi+28h], 0
		mov     dword [ecx+28h], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bbdfh
		cmp     eax, dword 7fffh
		jg      ___6bbe9h
___6b82fh:
		cmp     edx, 0ffff8000h
		jl      ___6bbf3h
		cmp     edx, 7fffh
		jg      ___6bbfdh
___6b847h:
		mov     [edi+14h], al
		mov     [ebx+14h], dl
		mov     [edi+15h], ah
		mov     [ebx+15h], dh
		mov     eax, [esi+2ch]
		mov     edx, [ecx+2ch]
		mov     dword [esi+2ch], 0
		mov     dword [ecx+2ch], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bc07h
		cmp     eax, dword 7fffh
		jg      ___6bc11h
___6b87dh:
		cmp     edx, 0ffff8000h
		jl      ___6bc1bh
		cmp     edx, 7fffh
		jg      ___6bc25h
___6b895h:
		mov     [edi+16h], al
		mov     [ebx+16h], dl
		mov     [edi+17h], ah
		mov     [ebx+17h], dh
		mov     eax, [esi+30h]
		mov     edx, [ecx+30h]
		mov     dword [esi+30h], 0
		mov     dword [ecx+30h], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bc2fh
		cmp     eax, dword 7fffh
		jg      ___6bc39h
___6b8cbh:
		cmp     edx, 0ffff8000h
		jl      ___6bc43h
		cmp     edx, 7fffh
		jg      ___6bc4dh
___6b8e3h:
		mov     [edi+18h], al
		mov     [ebx+18h], dl
		mov     [edi+19h], ah
		mov     [ebx+19h], dh
		mov     eax, [esi+34h]
		mov     edx, [ecx+34h]
		mov     dword [esi+34h], 0
		mov     dword [ecx+34h], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bc57h
		cmp     eax, dword 7fffh
		jg      ___6bc61h
___6b919h:
		cmp     edx, 0ffff8000h
		jl      ___6bc6bh
		cmp     edx, 7fffh
		jg      ___6bc75h
___6b931h:
		mov     [edi+1ah], al
		mov     [ebx+1ah], dl
		mov     [edi+1bh], ah
		mov     [ebx+1bh], dh
		mov     eax, [esi+38h]
		mov     edx, [ecx+38h]
		mov     dword [esi+38h], 0
		mov     dword [ecx+38h], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bc7fh
		cmp     eax, dword 7fffh
		jg      ___6bc89h
___6b967h:
		cmp     edx, 0ffff8000h
		jl      ___6bc93h
		cmp     edx, 7fffh
		jg      ___6bc9dh
___6b97fh:
		mov     [edi+1ch], al
		mov     [ebx+1ch], dl
		mov     [edi+1dh], ah
		mov     [ebx+1dh], dh
		mov     eax, [esi+3ch]
		mov     edx, [ecx+3ch]
		mov     dword [esi+3ch], 0
		mov     dword [ecx+3ch], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bca7h
		cmp     eax, dword 7fffh
		jg      ___6bcb1h
___6b9b5h:
		cmp     edx, 0ffff8000h
		jl      ___6bcbbh
		cmp     edx, 7fffh
		jg      ___6bcc5h
___6b9cdh:
		mov     [edi+1eh], al
		mov     [ebx+1eh], dl
		mov     [edi+1fh], ah
		mov     [ebx+1fh], dh
		add     edi, byte 20h
		add     ebx, byte 20h
		add     esi, byte 40h
		add     ecx, byte 40h
		sub     ebp, byte 10h
		je      ___6bcf7h
		jmp     ___6b4f6h
___6b9f3h:
		mov     eax, [esi]
		mov     edx, [ecx]
		mov     dword [esi], 0
		mov     dword [ecx], 0
		cmp     eax, dword 0ffff8000h
		jl      ___6bccfh
		cmp     eax, dword 7fffh
		jg      ___6bcd9h
___6ba19h:
		cmp     edx, 0ffff8000h
		jl      ___6bce3h
		cmp     edx, 7fffh
		jg      ___6bcedh
___6ba31h:
		mov     [edi], al
		mov     [ebx], dl
		mov     [edi+1], ah
		mov     [ebx+1], dh
		add     edi, byte 2
		add     ebx, byte 2
		add     esi, byte 4
		add     ecx, byte 4
		dec     ebp
		jne     ___6b9f3h
		jmp     ___6bcf7h
___6ba4fh:
		mov     eax, 0ffff8000h
		jmp     ___6b525h
___6ba59h:
		mov     eax, 7fffh
		jmp     ___6b525h
___6ba63h:
		mov     edx, 0ffff8000h
		jmp     ___6b53dh
___6ba6dh:
		mov     edx, 7fffh
		jmp     ___6b53dh
___6ba77h:
		mov     eax, 0ffff8000h
		jmp     ___6b571h
___6ba81h:
		mov     eax, 7fffh
		jmp     ___6b571h
___6ba8bh:
		mov     edx, 0ffff8000h
		jmp     ___6b589h
___6ba95h:
		mov     edx, 7fffh
		jmp     ___6b589h
___6ba9fh:
		mov     eax, 0ffff8000h
		jmp     ___6b5bfh
___6baa9h:
		mov     eax, 7fffh
		jmp     ___6b5bfh
___6bab3h:
		mov     edx, 0ffff8000h
		jmp     ___6b5d7h
___6babdh:
		mov     edx, 7fffh
		jmp     ___6b5d7h
___6bac7h:
		mov     eax, 0ffff8000h
		jmp     ___6b60dh
___6bad1h:
		mov     eax, 7fffh
		jmp     ___6b60dh
___6badbh:
		mov     edx, 0ffff8000h
		jmp     ___6b625h
___6bae5h:
		mov     edx, 7fffh
		jmp     ___6b625h
___6baefh:
		mov     eax, 0ffff8000h
		jmp     ___6b65bh
___6baf9h:
		mov     eax, 7fffh
		jmp     ___6b65bh
___6bb03h:
		mov     edx, 0ffff8000h
		jmp     ___6b673h
___6bb0dh:
		mov     edx, 7fffh
		jmp     ___6b673h
___6bb17h:
		mov     eax, 0ffff8000h
		jmp     ___6b6a9h
___6bb21h:
		mov     eax, 7fffh
		jmp     ___6b6a9h
___6bb2bh:
		mov     edx, 0ffff8000h
		jmp     ___6b6c1h
___6bb35h:
		mov     edx, 7fffh
		jmp     ___6b6c1h
___6bb3fh:
		mov     eax, 0ffff8000h
		jmp     ___6b6f7h
___6bb49h:
		mov     eax, 7fffh
		jmp     ___6b6f7h
___6bb53h:
		mov     edx, 0ffff8000h
		jmp     ___6b70fh
___6bb5dh:
		mov     edx, 7fffh
		jmp     ___6b70fh
___6bb67h:
		mov     eax, 0ffff8000h
		jmp     ___6b745h
___6bb71h:
		mov     eax, 7fffh
		jmp     ___6b745h
___6bb7bh:
		mov     edx, 0ffff8000h
		jmp     ___6b75dh
___6bb85h:
		mov     edx, 7fffh
		jmp     ___6b75dh
___6bb8fh:
		mov     eax, 0ffff8000h
		jmp     ___6b793h
___6bb99h:
		mov     eax, 7fffh
		jmp     ___6b793h
___6bba3h:
		mov     edx, 0ffff8000h
		jmp     ___6b7abh
___6bbadh:
		mov     edx, 7fffh
		jmp     ___6b7abh
___6bbb7h:
		mov     eax, 0ffff8000h
		jmp     ___6b7e1h
___6bbc1h:
		mov     eax, 7fffh
		jmp     ___6b7e1h
___6bbcbh:
		mov     edx, 0ffff8000h
		jmp     ___6b7f9h
___6bbd5h:
		mov     edx, 7fffh
		jmp     ___6b7f9h
___6bbdfh:
		mov     eax, 0ffff8000h
		jmp     ___6b82fh
___6bbe9h:
		mov     eax, 7fffh
		jmp     ___6b82fh
___6bbf3h:
		mov     edx, 0ffff8000h
		jmp     ___6b847h
___6bbfdh:
		mov     edx, 7fffh
		jmp     ___6b847h
___6bc07h:
		mov     eax, 0ffff8000h
		jmp     ___6b87dh
___6bc11h:
		mov     eax, 7fffh
		jmp     ___6b87dh
___6bc1bh:
		mov     edx, 0ffff8000h
		jmp     ___6b895h
___6bc25h:
		mov     edx, 7fffh
		jmp     ___6b895h
___6bc2fh:
		mov     eax, 0ffff8000h
		jmp     ___6b8cbh
___6bc39h:
		mov     eax, 7fffh
		jmp     ___6b8cbh
___6bc43h:
		mov     edx, 0ffff8000h
		jmp     ___6b8e3h
___6bc4dh:
		mov     edx, 7fffh
		jmp     ___6b8e3h
___6bc57h:
		mov     eax, 0ffff8000h
		jmp     ___6b919h
___6bc61h:
		mov     eax, 7fffh
		jmp     ___6b919h
___6bc6bh:
		mov     edx, 0ffff8000h
		jmp     ___6b931h
___6bc75h:
		mov     edx, 7fffh
		jmp     ___6b931h
___6bc7fh:
		mov     eax, 0ffff8000h
		jmp     ___6b967h
___6bc89h:
		mov     eax, 7fffh
		jmp     ___6b967h
___6bc93h:
		mov     edx, 0ffff8000h
		jmp     ___6b97fh
___6bc9dh:
		mov     edx, 7fffh
		jmp     ___6b97fh
___6bca7h:
		mov     eax, 0ffff8000h
		jmp     ___6b9b5h
___6bcb1h:
		mov     eax, 7fffh
		jmp     ___6b9b5h
___6bcbbh:
		mov     edx, 0ffff8000h
		jmp     ___6b9cdh
___6bcc5h:
		mov     edx, 7fffh
		jmp     ___6b9cdh
___6bccfh:
		mov     eax, 0ffff8000h
		jmp     ___6ba19h
___6bcd9h:
		mov     eax, 7fffh
		jmp     ___6ba19h
___6bce3h:
		mov     edx, 0ffff8000h
		jmp     ___6ba31h
___6bcedh:
		mov     edx, 7fffh
		jmp     ___6ba31h
___6bcf7h:
		;popad
	pop 	ebp
	pop 	edi
	pop 	esi
	pop 	ebx   
		retn    

;;	_eax DMA_ALLOC_BUFFER(_eax:dma_ch, _edx:???size, _ebx:0);
;DMA_ALLOC_BUFFER:		;; _cdecl
;		push    ecx
;		push    esi
;		push    edi
;		push    ebp
;
;	mov 	ebx, [esp+1ch]
;	mov 	edx, [esp+18h]
;	mov 	eax, [esp+14h]
;
;		sub     esp, byte 8
;		mov     [esp], al
;		mov     ecx, edx
;		mov     [esp+4], bl
;		cmp     edx, 8000h
;		ja      near ___7c596h
;		mov     ebx, 1
;		mov     eax, ___24f7d8h
;	push 	ecx
;	push 	ebx
;	push 	edx
;	push 	eax
;		call    near ___5f734h_allocDosMem
;	add 	esp, 0ch
;	pop 	ecx
;		mov     ebx, 1
;		mov     eax, ___24f7c8h
;		mov     edx, ecx
;	push 	ecx
;	push 	ebx
;	push 	edx
;	push 	eax
;		call    near ___5f734h_allocDosMem
;	add 	esp, 0ch
;	pop 	ecx
;		mov     eax, [___24f7d8h]
;		add     eax, ecx
;		and     eax, 0ffffh
;		cmp     eax, ecx
;		jb      short ___7c53ch
;		movzx   esi, byte [esp]
;		lea     eax, [esi*4+0]
;		sub     eax, esi
;		lea     edi, [esi+eax*4+___24f760h]
;		mov     esi, ___24f7d8h
;		mov     eax, ___24f7c8h
;		jmp     short ___7c55ah
;___7c53ch:
;		movzx   esi, byte [esp]
;		lea     eax, [esi*4+0]
;		sub     eax, esi
;		lea     edi, [esi+eax*4+___24f760h]
;		mov     esi, ___24f7c8h
;		mov     eax, ___24f7d8h
;___7c55ah:
;		movsd   
;		movsd   
;		movsd   
;		movsb   
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near ___5f7fch_freeDosMem
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;		movzx   esi, byte [esp]
;		lea     eax, [esi*4+0]
;		sub     eax, esi
;		shl     eax, 2
;		xor     edx, edx
;		add     esi, eax
;		mov     ebx, ecx
;		mov     dl, [esp+4]
;		mov     eax, [esi+___24f760h]
;	push 	ecx
;	push 	ebx
;	push 	edx
;	push 	eax
;		call    near memset_cdecl
;	add 	esp, 0ch
;	pop 	ecx
;		mov     eax, [esi+___24f760h]
;		add     esp, byte 8
;		pop     ebp
;		pop     edi
;		pop     esi
;		pop     ecx
;		retn    
;___7c596h:
;		mov     ebx, 1
;		lea     ebp, [edx+10000h]
;		mov     eax, ___24f7d8h
;		mov     edx, ebp
;		movzx   esi, byte [esp]
;	push 	ecx
;	push 	ebx
;	push 	edx
;	push 	eax
;		call    near ___5f734h_allocDosMem
;	add 	esp, 0ch
;	pop 	ecx
;		lea     edi, [esi*4+0]
;		mov     eax, 10000h
;		mov     ebx, 1
;		mov     edx, [___24f7d8h]
;		sub     edi, esi
;		and     edx, 0ffffh
;		shl     edi, 2
;		sub     eax, edx
;		add     edi, esi
;		mov     edx, eax
;		mov     eax, ___24f7d8h
;		mov     esi, ___24f760h
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near ___5f7fch_freeDosMem
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;		sub     edx, byte 10h
;		mov     eax, ___24f7d8h
;		add     esi, edi
;	push 	ecx
;	push 	ebx
;	push 	edx
;	push 	eax
;		call    near ___5f734h_allocDosMem
;	add 	esp, 0ch
;	pop 	ecx
;		mov     ebx, 1
;		mov     edx, ecx
;		mov     eax, esi
;	push 	ecx
;	push 	ebx
;	push 	edx
;	push 	eax
;		call    near ___5f734h_allocDosMem
;	add 	esp, 0ch
;	pop 	ecx
;		mov     eax, ___24f7d8h
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near ___5f7fch_freeDosMem
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;		test    word [edi+___24f760h], 0ffffh
;		jne     short ___7c63bh
;		mov     ebx, ecx
;		xor     edx, edx
;		mov     eax, [edi+___24f760h]
;		mov     dl, [esp+4]
;	push 	ecx
;	push 	ebx
;	push 	edx
;	push 	eax
;		call    near memset_cdecl
;	add 	esp, 0ch
;	pop 	ecx
;		mov     eax, [edi+___24f760h]
;		add     esp, byte 8
;		pop     ebp
;		pop     edi
;		pop     esi
;		pop     ecx
;		retn    
;___7c63bh:
;		mov     eax, esi
;		mov     ebx, 1
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near ___5f7fch_freeDosMem
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;		mov     edx, ebp
;		mov     eax, esi
;	push 	ecx
;	push 	ebx
;	push 	edx
;	push 	eax
;		call    near ___5f734h_allocDosMem
;	add 	esp, 0ch
;	pop 	ecx
;		mov     esi, [edi+___24f760h]
;		test    si, 0ffffh
;		je      short ___7c66fh
;		mov     eax, esi
;		mov     edx, 10000h
;		and     eax, 0ffffh
;		sub     edx, eax
;		add     ecx, edx
;		add     esi, edx
;___7c66fh:
;		movzx   edi, byte [esp]
;		lea     eax, [edi*4+0]
;		xor     edx, edx
;		sub     eax, edi
;		mov     ebx, ecx
;		mov     dl, [esp+4]
;		mov     eax, [edi+eax*4+___24f760h]
;	push 	ecx
;	push 	ebx
;	push 	edx
;	push 	eax
;		call    near memset_cdecl
;	add 	esp, 0ch
;	pop 	ecx
;		mov     eax, esi
;		add     esp, byte 8
;		pop     ebp
;		pop     edi
;		pop     esi
;		pop     ecx
;		retn    
;db	8bh,0c0h

__GDECL(memset_cdecl)
	push 	esi
	push 	edi
	push 	ebx
	mov 	ebx, [esp+18h]
	mov 	edx, [esp+14h]
	mov 	eax, [esp+10h]
	call 	memset_
	pop 	ebx
	pop 	edi
	pop 	esi
	retn
__GDECL(memcpy_cdecl)
	jmp memcpy
;	push 	esi
;	push 	edi
;	push 	ebx
;	mov 	ebx, [esp+18h]
;	mov 	edx, [esp+14h]
;	mov 	eax, [esp+10h]
;	call 	memcpy_
;	pop 	ebx
;	pop 	edi
;	pop 	esi
;	retn



;___7c69ch:
;		push    edx
;		xor     edx, edx
;		mov     dl, al
;		lea     eax, [edx*4+0]
;		sub     eax, edx
;		shl     eax, 2
;		add     eax, edx
;		add     eax, ___24f760h
;	push 	edx
;	push 	ecx
;	push 	eax
;		call    near ___5f7fch_freeDosMem
;	add 	esp, 4
;	pop 	ecx
;	pop 	edx
;		pop     edx
;		retn    
;db	0,0,0,0,0
___7c6c0h:
		mov     eax, [___68d40h]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___68d48h]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx
		retn



__GDECL(___7c6d4h_cdecl)
	push 	ebx
		push    esi
		push    edi
		push    ebp

	mov 	ecx, [esp+20h]
	mov 	ebx, [esp+1ch]
	mov 	edx, [esp+18h]
	mov 	eax, [esp+14h]

		sub     esp, byte 10h
		mov     ebp, [___68d48h]
		mov     esi, eax
		mov     [esp+8], dl
		mov     [esp+0ch], bl
		call    near ___691b8h
		mov     edx, 1
		mov     eax, 23e00h
		shl     esi, 2
		mov     ebx, 23e00h
		mov     [___68d3ch], esi

	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Memory_alloc
	add 	esp, 8
	pop 	ecx

		xor     edx, edx
		mov     [___68d40h], eax
		call    near memset_
		mov     eax, [___68d40h]
		lea     edx, [eax+20000h]
		mov     [___68d44h], edx
		lea     edx, [eax+22000h]
		add     eax, 22f00h
		mov     [___68d5eh], cl
		mov     [___68d38h], eax
		mov     al, [esp+8]
		mov     ebx, [___68d44h]
		mov     [___68d5ch], al
		mov     al, [esp+0ch]
		mov     [___68d34h], edx
		mov     [___68d5dh], al
___7c75dh:
		mov     eax, [___68d44h]
		add     eax, 0f81h
		mov     ebp, [___68d48h]
		cmp     ebx, eax
		je      short ___7c77bh
		inc     ebx
		mov     al, [esp+34h]
		mov     [ebx-1], al
		jmp     short ___7c75dh
___7c77bh:
		cmp     byte [esp+34h], 0
		jne     short ___7c79ch
		cmp     byte [esp+38h], 0ffh
		jne     short ___7c79ch
		mov     ecx, 1
___7c78eh:
		mov     [ebx], cl
		inc     ecx
		inc     ebx
		cmp     ecx, 0feh
		je      short ___7c7ceh
		jmp     short ___7c78eh
___7c79ch:
		mov     ecx, 1
		movzx   esi, byte [esp+34h]
		mov     edi, 0ffh
___7c7abh:
		xor     eax, eax
		mov     al, [esp+38h]
		mov     edx, eax
		sub     edx, esi
		imul    edx, ecx
		mov     eax, edx
		sar     edx, 1fh
		idiv    edi
		inc     ebx
		add     eax, esi
		inc     ecx
		mov     [ebx-1], al
		cmp     ecx, 0feh
		jne     short ___7c7abh
___7c7ceh:
		mov     eax, [___68d44h]
		add     eax, 2000h
		cmp     ebx, eax
		je      short ___7c7e6h
		inc     ebx
		mov     al, [esp+38h]
		mov     [ebx-1], al
		jmp     short ___7c7ceh
___7c7e6h:
		mov     edx, 1
		mov     eax, 3fe0h
		mov     ebx, 0ffffe040h
		mov     [___68d48h], ebp

	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Memory_alloc
	add 	esp, 8
	pop 	ecx

		mov     edx, 0ffffff01h
		mov     ebp, eax
		mov     [esp], ebx
		mov     [esp+4], edx
___7c80eh:
		mov     ebx, [esp+4]
		mov     ecx, [esp+4]
		mov     esi, [esp]
		shl     ebx, 10h
		shl     ecx, 5
		mov     edi, ebx
		imul    ebx, ebx, byte 0
___7c824h:
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		shl     edx, 5
		sbb     eax, edx
		sar     eax, 5
		add     eax, 8000h
		sar     eax, 10h
		inc     ecx
		mov     dl, al
		mov     eax, ebp
		add     ebx, edi
		mov     [ecx+eax*1+1fdfh], dl
		cmp     ecx, esi
		jne     short ___7c824h
		mov     esi, [esp+4]
		mov     ecx, [esp]
		inc     esi
		add     ecx, byte 20h
		mov     [esp+4], esi
		mov     [esp], ecx
		cmp     esi, 0ffh
		jle     short ___7c80eh
		mov     eax, [___68d44h]
		add     eax, 1000h
		mov     [___68d48h], ebp
		mov     [___68d44h], eax
		call    near ___6bd2eh
		mov     eax, 56220000h
		xor     ebx, ebx
		mov     edx, eax
		mov     bx, [SOUND_SAMPLERATE]
		sar     edx, 1fh
		idiv    ebx
		mov     ebp, [___68d48h]
		mov     [___68d30h], eax
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
	pop 	ebx
		retn
db	0,0,0,0,0,0

;DMA_BYTES_TRANSFERED:
;		push    ebx
;		push    edx
;
;		mov 	dx, 0d8h			;; 	DMA_CLEAR_POINTER
;		xor     al, al
;		out     dx, al
;
;
;		mov 	dx, 0c6h			;;	DMA5_COUNT
;		in      al, dx
;		mov     ah, al
;		in      al, dx
;		xchg    al, ah
;		mov     bx, ax
;		in      al, dx
;		mov     ah, al
;		in      al, dx
;		xchg    al, ah
;		sub     bx, ax
;		cmp     bx, byte 7fh
;		jbe     short ___7ca16h_2
;		in      al, dx
;		mov     ah, al
;		in      al, dx
;		xchg    al, ah
;___7ca16h_2:
;		movzx   eax, ax
;		inc     eax
;		pop     edx
;		pop     ebx
;		retn    


___6edd0h:
dd	___6f6d0h
dd	___6f704h
dd	___6f728h
dd	___6f788h
dd	___6f821h
dd	___6f981h
dd	___6ffe5h
dd	___6fae2h
dd	___6fb15h
dd	___6fb39h
dd	___6fc40h
dd	___6fc64h
dd	___6ffcah
dd	___6ffcah
dd	___6fc88h
dd	___6ffcah
dd	___6fce0h
dd	___6fd04h
dd	___6fd37h
dd	___6ff7dh
dd	___6ffcah
dd	___6ffb0h
___6ee28h:
dd	___6fd52h
dd	___6fd6bh
dd	___6fd84h
dd	___6fdb1h
dd	___6fde3h
dd	___6ff60h
dd	___6ff60h
dd	___6ff60h
dd	___6fe1ah
dd	___6ff60h
dd	___6fe4dh
dd	___6fe66h
dd	___6ff15h
dd	___6ffe5h
dd	___6ff2fh
dd	___6ff42h
___6ee68h:
dd	___7017ah
dd	___70241h
dd	___702d7h
dd	___70356h
dd	___704a8h
dd	___7064bh
dd	___70732h
dd	___7080eh
dd	___70a82h
dd	___71566h
dd	___71566h
dd	___71566h
dd	___71566h
dd	___70d06h
dd	___71040h
dd	___711d1h
dd	___71566h
dd	___713feh
___6eeb0h:
dd	___704cch
dd	___7050bh
dd	___70550h
dd	___705a1h
___6eec0h:
dd	___70832h
dd	___70871h
dd	___708b1h
dd	___70902h
___6eed0h:
dd	___70da0h
dd	___70dd6h
dd	___70e0dh
dd	___70e30h
dd	___70e53h
dd	___70e7ah
dd	___70eaah
dd	___71017h
dd	___70ebch
dd	___70eebh
dd	___70f1bh
dd	___70f4bh
dd	___70f7bh
dd	___70fa8h
dd	___70fe4h
___6ef0ch:
dd	___71063h
dd	___7109eh
dd	___710d3h
dd	___7110dh
___6ef1ch:
dd	___7141eh
dd	___71449h
dd	___7146dh
dd	___714a3h
__GDECL(___6ef2ch)
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ah, [___19a281h]
		test    ah, ah
		jne     near ___71588h
		cmp     byte [___19a468h], 0
		je      near ___6f02fh
		mov     [___19a469h], ah
		mov     bl, 1
		mov     [___19a53dh], ah
		mov     [___19a53ch], bl
		xor     bh, bh
		mov     [___19a46ah], ah
		mov     [___19a53eh], ah
		mov     [___19a540h], bl
		xor     al, al
		xor     bl, bl
		mov     [___19a53fh], ah
		mov     [___19a684h], ah
		mov     [___19a685h], ah
		mov     [___19a686h], ah
		mov     [___19a5e2h], ax
		mov     [___24e87eh], ah
___6ef9dh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     cl, al
		mov     [NoSplit eax*2+___19a542h], bx
		mov     [NoSplit eax*2+___19a562h], bx
		mov     [eax+___19a582h], bl
		mov     [eax+___19a592h], bl
		mov     [eax+___19a5a2h], bl
		mov     [eax+___19a5b2h], bl
		mov     [eax+___19a5c2h], bl
		mov     [eax+___19a5d2h], bl
		mov     [eax+___19a5e4h], bl
		mov     [eax+___19a5f4h], bl
		mov     [NoSplit eax*2+___19a604h], bx
		mov     [NoSplit eax*2+___19a624h], bx
		mov     [NoSplit eax*2+___19a644h], bx
		mov     [NoSplit eax*2+___24e880h], bx
		mov     [eax+___19a664h], bl
		inc     cl
		mov     [eax+___19a674h], bl
		mov     [___24e87eh], cl
		cmp     cl, 10h
		jne     near ___6ef9dh
		call    near ___68c42h_cdecl
		xor     al, al
		mov     [___19a468h], al
___6f02fh:
		mov     edx, [___19a46ch]
		cmp     edx, byte 0ffffffffh
		je      short ___6f079h
		mov     eax, edx
		sar     eax, 8
		and     eax, 0ffh
		mov     [___19a469h], al
		mov     al, [___19a46ch]
		mov     [___19a53fh], al
		cmp     al, 3fh
		jbe     short ___6f05eh
		mov     byte [___19a53fh], 3fh
___6f05eh:
		xor     bl, bl
		mov     dh, 1
		mov     [___19a53dh], bl
		mov     ebx, 0ffffffffh
		mov     [___19a53ch], dh
		mov     [___19a46ch], ebx
___6f079h:
		cmp     byte [___19a53eh], 0
		jne     near ___70119h
		cmp     byte [___24e7a6h], 0
		jne     near ___70119h
		mov     ch, 1
		mov     [___24e7a5h], ch
		cmp     ch, [___19a53ch]
		jne     near ___6f2b8h
		mov     ecx, 0ffffh
		mov     esi, [SFX_struct_content_ptr]
		xor     ebx, ebx
___6f0b4h:
		cmp     bl, [___19a53dh]
		jne     near ___6f1cch
		mov     al, [___19a469h]
		cmp     al, [___24e86eh]
		jae     short ___6f0e4h
		xor     eax, eax
		mov     al, [___19a469h]
		mov     edx, [___24e85ch]
		cmp     byte [edx+eax*1], 0ffh
		jne     near ___6f1cch
___6f0e4h:
		mov     [___19a469h], bl
		cmp     ebx, esi
		je      short ___6f0f8h
		mov     eax, [___19a279h]
		sar     eax, 18h
		jmp     short ___6f0fdh
___6f0f8h:
		mov     eax, 10h
___6f0fdh:
		mov     [___24e87eh], bl
		mov     [___24e872h], al
		cmp     bl, al
		jae     near ___6f1b3h
___6f110h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     [NoSplit eax*2+___19a542h], bx
		mov     [NoSplit eax*2+___19a562h], bx
		mov     [eax+___19a582h], bl
		mov     [eax+___19a592h], bl
		mov     [eax+___19a5a2h], bl
		mov     [eax+___19a5b2h], bl
		mov     [eax+___19a5c2h], bl
		mov     [eax+___19a5d2h], bl
		mov     [eax+___19a5e4h], bl
		mov     [eax+___19a5f4h], bl
		mov     [NoSplit eax*2+___19a604h], bx
		mov     [NoSplit eax*2+___19a624h], bx
		mov     [NoSplit eax*2+___19a644h], bx
		mov     [NoSplit eax*2+___24e880h], bx
		mov     [eax+___19a664h], bl
		mov     [eax+___19a674h], bl
		mov     [NoSplit eax*2+___688d0h], cx
		mov     [eax*4+___68910h], ebx
		mov     [eax*4+___68990h], ebx
		mov     [eax*4+___68a10h], ebx
		inc     al
		mov     [___24e87eh], al
		cmp     al, [___24e872h]
		jb      near ___6f110h
___6f1b3h:
		mov     [___19a685h], bl
		mov     [___19a686h], bl
		mov     [___19a5e2h], bx
		mov     [___19a684h], bl
___6f1cch:
		cmp     bl, [___19a53dh]
		jne     short ___6f1f7h
		xor     eax, eax
		mov     al, [___19a469h]
		mov     edx, [___24e85ch]
		cmp     byte [edx+eax*1], 0feh
		jne     short ___6f20ah
		mov     al, [___19a469h]
		inc     byte [___19a469h]
		jmp     near ___6f0b4h
___6f1f7h:
		mov     al, [___19a469h]
		dec     byte [___19a469h]
		xor     bl, bl
		mov     [___19a53dh], bl
___6f20ah:
		mov     al, [___19a469h]
		inc     byte [___19a469h]
		xor     edx, edx
		mov     dl, al
		mov     eax, [___24e85ch]
		mov     al, [edx+eax*1]
		mov     edx, [___24e854h]
		and     eax, 0ffh
		mov     eax, [edx+eax*4]
		xor     cl, cl
		mov     [___24e8a0h], eax
		mov     [___19a46ah], cl
		mov     al, [___19a53fh]
		mov     [___19a53ch], cl
		test    al, al
		jbe     near ___6f2b8h
		mov     ebx, 2
		xor     dh, dh
___6f256h:
		mov     eax, [___24e8a0h]
		mov     dl, [eax]
		inc     eax
		mov     [___24e87fh], dl
		mov     [___24e8a0h], eax
		cmp     dh, dl
		je      short ___6f29bh
		test    dl, 20h
		je      short ___6f27bh
		lea     edi, [eax+ebx*1]
		mov     [___24e8a0h], edi
___6f27bh:
		test    byte [___24e87fh], 40h
		je      short ___6f28ah
		inc     dword [___24e8a0h]
___6f28ah:
		test    byte [___24e87fh], 80h
		je      short ___6f256h
		add     [___24e8a0h], ebx
		jmp     short ___6f256h
___6f29bh:
		mov     cl, [___19a53fh]
		dec     cl
		mov     [___19a53fh], cl
		mov     al, [___19a46ah]
		inc     byte [___19a46ah]
		cmp     dl, cl
		jb      short ___6f256h
___6f2b8h:
		xor     ch, ch
		mov     [___24e87eh], ch
___6f2c0h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     dl, dl
		mov     [eax+___19a592h], dl
		mov     dh, al
		inc     dh
		mov     [___24e87eh], dh
		cmp     dh, 10h
		jne     short ___6f2c0h
		mov     esi, 7a12h
___6f2e3h:
		mov     eax, [___24e8a0h]
		mov     dl, [eax]
		inc     eax
		mov     [___24e87fh], dl
		mov     [___24e8a0h], eax
		test    dl, dl
		je      near ___700ech
		mov     al, dl
		and     al, 1fh
		and     eax, 0ffh
		xor     dh, dh
		xor     ebx, ebx
		mov     [___24e87dh], dh
		mov     al, [eax+___24e830h]
		mov     [___24e87ah], bx
		mov     [___24e87eh], al
		cmp     al, 0ffh
		jne     short ___6f359h
		test    dl, 20h
		je      short ___6f333h
		add     dword [___24e8a0h], byte 2
___6f333h:
		test    byte [___24e87fh], 40h
		je      short ___6f342h
		inc     dword [___24e8a0h]
___6f342h:
		test    byte [___24e87fh], 80h
		je      short ___6f352h
		add     dword [___24e8a0h], byte 2
___6f352h:
		xor     al, al
		mov     [___24e87fh], al
___6f359h:
		test    byte [___24e87fh], 20h
		je      short ___6f3bbh
		mov     eax, [___24e8a0h]
		mov     dl, [eax]
		inc     eax
		mov     [___24e87dh], dl
		mov     [___24e8a0h], eax
		cmp     dl, 0feh
		jne     short ___6f38bh
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     word [NoSplit eax*2+___688d0h], 0ffffh
___6f38bh:
		mov     eax, [___24e8a0h]
		xor     dh, dh
		mov     dl, [eax]
		xor     ebx, ebx
		mov     [___24e87ah], dx
		mov     bl, dl
		mov     edx, [___24e7a0h]
		inc     eax
		sar     edx, 10h
		mov     [___24e8a0h], eax
		cmp     ebx, edx
		jle     short ___6f3bbh
		xor     edi, edi
		mov     [___24e87ah], di
___6f3bbh:
		test    byte [___24e87fh], 40h
		je      short ___6f3d7h
		mov     eax, [___24e8a0h]
		mov     dl, [eax]
		inc     eax
		mov     [___24e87ch], dl
		mov     [___24e8a0h], eax
___6f3d7h:
		test    byte [___24e87fh], 80h
		je      near ___6f582h
		mov     eax, [___24e8a0h]
		inc     eax
		mov     dl, [eax-1]
		mov     [___24e8a0h], eax
		inc     eax
		mov     [___24e879h], dl
		mov     dl, [eax-1]
		mov     [___24e8a0h], eax
		mov     al, [___24e879h]
		mov     [___24e878h], dl
		cmp     al, 7
		jb      near ___6f582h
		jbe     short ___6f423h
		cmp     al, 13h
		je      near ___6f505h
		jmp     near ___6f582h
___6f423h:
		test    dl, dl
		jne     short ___6f439h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6f439h:
		cmp     byte [___24e87dh], 0
		je      near ___6f4dch
		cmp     word [___24e87ah], byte 0
		jne     short ___6f481h
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     word [NoSplit eax*2+___19a542h], byte 0
		jne     short ___6f481h
		xor     cl, cl
		mov     al, [___24e87fh]
		mov     [___24e878h], cl
		and     al, 0dfh
		mov     [___24e879h], cl
		mov     [___24e87fh], al
		jmp     near ___6f582h
___6f481h:
		mov     al, [___24e87dh]
		and     al, 0fh
		and     eax, 0ffh
		mov     ax, [NoSplit eax*2+___19a484h]
		xor     ecx, ecx
		mov     cl, [___24e87dh]
		and     eax, 0ffffh
		sar     ecx, 4
		sar     eax, cl
		mov     edx, eax
		xor     eax, eax
		xor     bl, bl
		mov     al, [___24e87eh]
		mov     [___24e87dh], bl
		mov     bx, [___24e87ah]
		mov     [NoSplit eax*2+___19a644h], dx
		test    bx, bx
		jne     near ___6f582h
		and     byte [___24e87fh], 0dfh
		jmp     near ___6f582h
___6f4dch:
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     word [NoSplit eax*2+___19a644h], byte 0
		jne     near ___6f582h
		xor     dl, dl
		mov     [___24e878h], dl
		mov     [___24e879h], dl
		jmp     near ___6f582h
___6f505h:
		xor     eax, eax
		mov     al, dl
		sar     eax, 4
		cmp     eax, byte 0dh
		jne     short ___6f582h
		xor     eax, eax
		mov     al, [___24e87eh]
		and     dl, 0fh
		mov     [eax+___19a5e4h], dl
		test    dl, dl
		setnz   dl
		and     edx, 0ffh
		je      short ___6f535h
		mov     byte [eax+___19a5e4h], 0fh
___6f535h:
		xor     ah, ah
		mov     al, [___24e87fh]
		mov     edx, eax
		mov     al, [___24e87ch]
		shl     edx, 8
		add     edx, eax
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     [NoSplit eax*2+___19a604h], dx
		xor     dh, dh
		mov     bx, [___24e87ah]
		mov     dl, [___24e87dh]
		mov     ch, [___24e87fh]
		shl     edx, 8
		and     ch, 9fh
		add     edx, ebx
		mov     [___24e87fh], ch
		mov     [NoSplit eax*2+___19a624h], dx
___6f582h:
		test    byte [___24e87fh], 20h
		je      near ___6f68bh
		mov     cx, [___24e87ah]
		test    cx, cx
		jne     near ___6f616h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [NoSplit eax*2+___19a542h]
		xor     edx, edx
		mov     [___24e87ah], ax
		mov     dx, ax
		mov     eax, [___24e7a0h]
		sar     eax, 10h
		cmp     edx, eax
		jle     short ___6f5e5h
		xor     bl, bl
		mov     [___24e87dh], bl
		mov     bh, [___24e87fh]
		and     bh, 0dfh
		mov     [___24e87ah], cx
		mov     [___24e87fh], bh
		jmp     short ___6f639h
___6f5e5h:
		mov     dl, [___24e87dh]
		cmp     dl, 0ffh
		je      short ___6f5f4h
		test    dl, dl
		jne     short ___6f639h
___6f5f4h:
		xor     eax, eax
		mov     edx, [___24e864h]
		mov     ax, [___24e87ah]
		add     eax, edx
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     al, [eax]
		mov     [edx+___19a582h], al
		jmp     short ___6f639h
___6f616h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		mov     ebx, [___24e864h]
		mov     dx, cx
		mov     [NoSplit eax*2+___19a542h], cx
		mov     dl, [edx+ebx*1]
		mov     [eax+___19a582h], dl
___6f639h:
		mov     cl, [___24e87dh]
		cmp     cl, 0ffh
		je      short ___6f68bh
		test    cl, cl
		je      short ___6f68bh
		mov     al, cl
		and     al, 0fh
		and     eax, 0ffh
		mov     ax, [NoSplit eax*2+___19a484h]
		xor     ecx, ecx
		mov     cl, [___24e87dh]
		and     eax, 0ffffh
		sar     ecx, 4
		sar     eax, cl
		mov     edx, eax
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     [NoSplit eax*2+___19a562h], dx
		mov     dx, [___24e87ah]
		mov     [NoSplit eax*2+___688d0h], dx
___6f68bh:
		test    byte [___24e87fh], 40h
		je      short ___6f6a7h
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     al, [___24e87ch]
		mov     [edx+___19a582h], al
___6f6a7h:
		test    byte [___24e87fh], 80h
		je      near ___70004h
		mov     al, [___24e879h]
		dec     al
		cmp     al, 15h
		ja      near ___6ffcah
		and     eax, 0ffh
		jmp     near dword [cs:eax*4+___6edd0h]
___6f6d0h:
		mov     al, [___24e878h]
		xor     ebx, ebx
		mov     edx, esi
		mov     bl, [___24e86fh]
		mov     [___24e871h], al
		sar     edx, 1fh
		mov     eax, esi
		idiv    ebx
		xor     bh, bh
		mov     [___68c40h], ax
		mov     [___24e879h], bh
		mov     [___24e878h], bh
		jmp     near ___6ffe5h
___6f704h:
		mov     al, [___24e878h]
		mov     [___19a469h], al
		mov     byte [___19a53ch], 1
		xor     dh, dh
		mov     [___24e879h], dh
		mov     [___24e878h], dh
		jmp     near ___6ffe5h
___6f728h:
		mov     al, [___24e878h]
		mov     bl, 1
		and     al, 0fh
		mov     [___19a53ch], bl
		cmp     al, 9
		jbe     short ___6f742h
		add     byte [___24e878h], 6
___6f742h:
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		imul    edx, eax, byte 0ah
		mov     al, [___24e878h]
		and     al, 0fh
		and     eax, 0ffh
		add     eax, edx
		mov     [___24e878h], al
		cmp     al, 3fh
		jbe     short ___6f76dh
		mov     byte [___24e878h], 3fh
___6f76dh:
		mov     al, [___24e878h]
		mov     [___19a53fh], al
		xor     al, al
		mov     [___24e879h], al
		mov     [___24e878h], al
		jmp     near ___6ffe5h
___6f788h:
		cmp     byte [___24e878h], 0
		jne     short ___6f7a3h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6f7a3h:
		mov     al, [___24e878h]
		and     al, 0fh
		cmp     al, 0fh
		jne     short ___6f7deh
		xor     edx, edx
		xor     eax, eax
		mov     dl, [___24e878h]
		mov     al, [___24e87eh]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a582h]
		add     edx, ebx
		mov     [eax+___19a582h], dl
		cmp     dl, 40h
		jbe     short ___6f7deh
		mov     byte [eax+___19a582h], 40h
___6f7deh:
		mov     al, [___24e878h]
		and     al, 0f0h
		cmp     al, 0f0h
		jne     near ___6ffe5h
		xor     eax, eax
		mov     dl, [___24e878h]
		mov     al, [___24e87eh]
		and     dl, 0fh
		mov     ch, [eax+___19a582h]
		sub     ch, dl
		mov     [eax+___19a582h], ch
		cmp     ch, 40h
		jbe     near ___6ffe5h
		xor     dh, dh
		mov     [eax+___19a582h], dh
		jmp     near ___6ffe5h
___6f821h:
		cmp     byte [___24e878h], 0
		jne     short ___6f83ch
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6f83ch:
		mov     dl, [___24e878h]
		cmp     dl, 0e0h
		jb      near ___6ffe5h
		mov     edi, 7dffh
		and     dl, 0fh
		xor     eax, eax
		xor     ecx, ecx
		xor     ebx, ebx
		mov     al, [___24e87eh]
		mov     bl, dl
		add     eax, eax
		shl     ebx, 2
		mov     cx, [eax+___19a562h]
		sub     edi, ebx
		cmp     ecx, edi
		jg      near ___6f96bh
		mov     dh, [___24e878h]
		and     dh, 0f0h
		cmp     dh, 0f0h
		jne     short ___6f8dbh
		xor     dh, dh
		mov     edi, ecx
		shl     edx, 2
		add     edi, edx
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [eax+___19a542h]
		mov     [eax+___19a562h], di
		mov     ecx, [ebx+edx*4]
		xor     ebx, ebx
		mov     bx, di
		xor     eax, eax
		or      ebx, ebx
		je      short ___6f8cch
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___6f8cch:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx*4+___68990h], eax
___6f8dbh:
		mov     al, [___24e878h]
		and     al, 0f0h
		cmp     al, 0e0h
		jne     near ___6f974h
		xor     eax, eax
		mov     dl, [___24e878h]
		mov     al, [___24e87eh]
		and     dl, 0fh
		mov     bx, [NoSplit eax*2+___19a562h]
		xor     dh, dh
		add     ebx, edx
		xor     edx, edx
		mov     [NoSplit eax*2+___19a562h], bx
		mov     ebx, [___24e850h]
		mov     dx, [NoSplit eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [NoSplit eax*2+___19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      short ___6f94fh
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___6f94fh:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx*4+___68990h], eax
		xor     dh, dh
		mov     [___24e879h], dh
		jmp     near ___6ffe5h
___6f96bh:
		mov     word [eax+___688d0h], 0ffffh
___6f974h:
		xor     dh, dh
		mov     [___24e879h], dh
		jmp     near ___6ffe5h
___6f981h:
		cmp     byte [___24e878h], 0
		jne     short ___6f99ch
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6f99ch:
		cmp     byte [___24e878h], 0e0h
		jb      near ___6ffe5h
		mov     dl, [___24e878h]
		xor     eax, eax
		xor     ecx, ecx
		xor     ebx, ebx
		and     dl, 0fh
		mov     al, [___24e87eh]
		mov     bl, dl
		add     eax, eax
		shl     ebx, 2
		mov     cx, [eax+___19a562h]
		add     ebx, 200h
		cmp     ecx, ebx
		jl      near ___6facdh
		mov     dh, [___24e878h]
		and     dh, 0f0h
		cmp     dh, 0f0h
		jne     short ___6fa3eh
		xor     dh, dh
		mov     edi, ecx
		shl     edx, 2
		sub     edi, edx
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [eax+___19a542h]
		mov     [eax+___19a562h], di
		mov     ecx, [ebx+edx*4]
		xor     ebx, ebx
		mov     bx, di
		xor     eax, eax
		or      ebx, ebx
		je      short ___6fa2fh
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___6fa2fh:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx*4+___68990h], eax
___6fa3eh:
		mov     al, [___24e878h]
		and     al, 0f0h
		cmp     al, 0e0h
		jne     near ___6fad6h
		xor     eax, eax
		mov     dl, [___24e878h]
		mov     al, [___24e87eh]
		and     dl, 0fh
		mov     bx, [NoSplit eax*2+___19a562h]
		xor     dh, dh
		sub     ebx, edx
		xor     edx, edx
		mov     [NoSplit eax*2+___19a562h], bx
		mov     ebx, [___24e850h]
		mov     dx, [NoSplit eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [NoSplit eax*2+___19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      short ___6fab2h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___6fab2h:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx*4+___68990h], eax
		xor     al, al
		mov     [___24e879h], al
		jmp     near ___6ffe5h
___6facdh:
		mov     word [eax+___688d0h], 0ffffh
___6fad6h:
		xor     al, al
		mov     [___24e879h], al
		jmp     near ___6ffe5h
___6fae2h:
		cmp     byte [___24e878h], 0
		jne     short ___6fafdh
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6fafdh:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     al, [___24e878h]
		mov     [edx+___19a5c2h], al
		jmp     near ___6ffe5h
___6fb15h:
		cmp     byte [___24e878h], 0
		jne     near ___6ffe5h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
		jmp     near ___6ffe5h
___6fb39h:
		cmp     byte [___24e878h], 0
		jne     short ___6fb54h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6fb54h:
		mov     al, [___24e87dh]
		cmp     al, 0ffh
		je      short ___6fb61h
		test    al, al
		jne     short ___6fb73h
___6fb61h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5f4h]
		mov     [___24e87dh], al
___6fb73h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     dl, dl
		mov     [eax+___19a5e4h], dl
		mov     dl, [___24e87dh]
		mov     [eax+___19a5f4h], dl
		mov     al, dl
		and     al, 0fh
		xor     edx, edx
		mov     dl, al
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		add     eax, edx
		mov     [___24e87dh], al
		cmp     al, 0ch
		jb      short ___6fbb6h
		mov     bl, al
		add     bl, 4
		mov     [___24e87dh], bl
___6fbb6h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dl, [eax+___19a5f4h]
		mov     bh, [___24e87dh]
		and     dl, 0f0h
		add     bh, dl
		xor     dh, dh
		mov     dl, bh
		shl     edx, 8
		mov     [NoSplit eax*2+___19a604h], dx
		mov     ah, [eax+___19a5f4h]
		and     ah, 0fh
		mov     al, [___24e878h]
		and     al, 0fh
		mov     [___24e87dh], bh
		add     ah, al
		mov     [___24e87dh], ah
		cmp     ah, 0ch
		jb      short ___6fc0bh
		mov     ch, ah
		add     ch, 4
		mov     [___24e87dh], ch
___6fc0bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dl, [eax+___19a5f4h]
		and     dl, 0f0h
		add     [___24e87dh], dl
		xor     dh, dh
		mov     bx, [NoSplit eax*2+___19a604h]
		mov     dl, [___24e87dh]
		add     ebx, edx
		mov     [NoSplit eax*2+___19a604h], bx
		jmp     near ___6ffe5h
___6fc40h:
		cmp     byte [___24e878h], 0
		jne     near ___6ffe5h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
		jmp     near ___6ffe5h
___6fc64h:
		cmp     byte [___24e878h], 0
		jne     near ___6ffe5h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
		jmp     near ___6ffe5h
___6fc88h:
		cmp     byte [___24e878h], 0
		jne     short ___6fca3h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6fca3h:
		xor     eax, eax
		mov     al, [___24e878h]
		mov     edx, eax
		xor     eax, eax
		mov     al, [___24e87eh]
		shl     edx, 8
		mov     [eax*4+___68910h], edx
		mov     dx, [NoSplit eax*2+___19a542h]
		mov     [NoSplit eax*2+___688d0h], dx
		xor     dh, dh
		mov     [___24e879h], dh
		mov     [___24e878h], dh
		jmp     near ___6ffe5h
___6fce0h:
		cmp     byte [___24e878h], 0
		jne     near ___6ffe5h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
		jmp     near ___6ffe5h
___6fd04h:
		cmp     byte [___24e878h], 0
		jne     short ___6fd1fh
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5a2h]
		mov     [___24e878h], al
___6fd1fh:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     al, [___24e878h]
		mov     [edx+___19a5c2h], al
		jmp     near ___6ffe5h
___6fd37h:
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		cmp     eax, byte 0fh
		ja      near ___6ff60h
		jmp     near dword [cs:eax*4+___6ee28h]
___6fd52h:
		xor     cl, cl
		mov     [___24e878h], cl
		mov     [___24e879h], cl
		inc     dword [___19a470h]
		jmp     near ___6ffe5h
___6fd6bh:
		xor     bl, bl
		mov     [___24e878h], bl
		mov     [___24e879h], bl
		inc     dword [___19a474h]
		jmp     near ___6ffe5h
___6fd84h:
		mov     al, [___24e878h]
		and     al, 0fh
		xor     dl, dl
		and     eax, 0ffh
		mov     [___24e879h], dl
		mov     ax, [NoSplit eax*2+___19a49ch]
		mov     [___24e878h], dl
		mov     [___19a5e2h], ax
		jmp     near ___6ffe5h
___6fdb1h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dh, [eax+___19a5d2h]
		and     dh, 0fch
		mov     dl, [___24e878h]
		and     dl, 3
		or      dl, dh
		mov     [eax+___19a5d2h], dl
		xor     al, al
		mov     [___24e879h], al
		mov     [___24e878h], al
		jmp     near ___6ffe5h
___6fde3h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dh, [eax+___19a5d2h]
		and     dh, 0f3h
		mov     dl, [___24e878h]
		and     dl, 3
		xor     cl, cl
		shl     dl, 2
		mov     [___24e879h], cl
		or      dl, dh
		mov     [___24e878h], cl
		mov     [eax+___19a5d2h], dl
		jmp     near ___6ffe5h
___6fe1ah:
		mov     al, [___24e878h]
		and     al, 0fh
		mov     edx, eax
		xor     bl, bl
		and     edx, 0ffh
		xor     eax, eax
		mov     [___24e879h], bl
		mov     al, [___24e87eh]
		shl     edx, 0ch
		mov     [___24e878h], bl
		mov     [eax*4+___68a90h], edx
		jmp     near ___6ffe5h
___6fe4dh:
		xor     dl, dl
		mov     [___24e878h], dl
		mov     [___24e879h], dl
		inc     dword [___19a478h]
		jmp     near ___6ffe5h
___6fe66h:
		mov     bh, [___24e878h]
		test    bh, 0fh
		jne     near ___6ff04h
		mov     cl, [___19a686h]
		test    cl, cl
		jne     short ___6fe8eh
		mov     al, [___19a46ah]
		mov     [___19a684h], al
		jmp     near ___6ff04h
___6fe8eh:
		jne     short ___6fec8h
		mov     al, bh
		and     al, 0fh
		mov     bh, 1
		mov     [___19a685h], al
		mov     [___19a686h], bh
		mov     [___19a53ch], bh
		mov     al, [___19a684h]
		mov     [___19a53dh], bh
		mov     [___19a53fh], al
		xor     al, al
		mov     [___24e878h], al
		mov     [___24e879h], al
		jmp     near ___6ffe5h
___6fec8h:
		mov     al, [___19a685h]
		dec     al
		mov     [___19a685h], al
		je      short ___6feffh
		mov     al, [___19a684h]
		mov     dh, 1
		mov     [___19a53fh], al
		mov     [___19a53ch], dh
		mov     [___19a53dh], dh
		xor     al, al
		mov     [___24e878h], al
		mov     [___24e879h], al
		jmp     near ___6ffe5h
___6feffh:
		mov     [___19a686h], al
___6ff04h:
		xor     al, al
		mov     [___24e878h], al
		mov     [___24e879h], al
		jmp     near ___6ffe5h
___6ff15h:
		xor     edx, edx
		mov     al, [___24e878h]
		mov     dl, [___24e87eh]
		and     al, 0fh
		mov     [edx+___19a5e4h], al
		jmp     near ___6ffe5h
___6ff2fh:
		mov     al, [___24e878h]
		and     al, 0fh
		inc     al
		mov     [___19a540h], al
		jmp     near ___6ffe5h
___6ff42h:
		xor     dh, dh
		mov     eax, [___19a47ch]
		mov     [___24e878h], dh
		inc     eax
		mov     [___24e879h], dh
		mov     [___19a47ch], eax
		jmp     near ___6ffe5h
___6ff60h:
		xor     ah, ah
		mov     ebp, [___19a480h]
		mov     [___24e878h], ah
		inc     ebp
		mov     [___24e879h], ah
		mov     [___19a480h], ebp
		jmp     short ___6ffe5h
___6ff7dh:
		mov     cl, [___24e878h]
		test    cl, cl
		je      short ___6ffa0h
		mov     eax, esi
		xor     ebx, ebx
		mov     edx, esi
		mov     bl, cl
		sar     edx, 1fh
		idiv    ebx
		mov     [___24e86fh], cl
		mov     [___68c40h], ax
___6ffa0h:
		xor     ch, ch
		mov     [___24e878h], ch
		mov     [___24e879h], ch
		jmp     short ___6ffe5h
___6ffb0h:
		mov     al, [___24e878h]
		xor     bl, bl
		mov     [___24e870h], al
		mov     [___24e879h], bl
		mov     [___24e878h], bl
		jmp     short ___6ffe5h
___6ffcah:
		xor     dl, dl
		mov     edi, [___19a480h]
		mov     [___24e878h], dl
		inc     edi
		mov     [___24e879h], dl
		mov     [___19a480h], edi
___6ffe5h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dl, [___24e879h]
		mov     [eax+___19a592h], dl
		mov     dl, [___24e878h]
		mov     [eax+___19a5a2h], dl
___70004h:
		cmp     byte [___24e87eh], 0ffh
		je      near ___6f2e3h
		cmp     word [___19a5e2h], byte 0
		jne     short ___7006dh
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [NoSplit eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [NoSplit eax*2+___19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      short ___70063h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___70063h:
		xor     edx, edx
		mov     dl, [___24e87eh]
		jmp     short ___700bch
___7006dh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ecx, [___19a5e0h]
		xor     ebx, ebx
		mov     ax, [NoSplit eax*2+___19a562h]
		sar     ecx, 10h
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      short ___700abh
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___700abh:
		xor     edx, edx
		xor     edi, edi
		mov     dl, [___24e87eh]
		mov     [___19a5e2h], di
___700bch:
		mov     [edx*4+___68990h], eax
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     dl, [___24e870h]
		mov     bl, [eax+___19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+___68a10h], edx
		jmp     near ___6f2e3h
___700ech:
		mov     al, [___19a46ah]
		inc     byte [___19a46ah]
		cmp     byte [___19a46ah], 40h
		jb      short ___70107h
		mov     byte [___19a53ch], 1
___70107h:
		mov     dl, [___19a540h]
		mov     al, [___24e871h]
		mul     dl
		mov     [___19a53eh], al
___70119h:
		cmp     byte [___19a53eh], 0
		je      near ___71588h
		xor     ah, ah
		mov     [___24e87eh], ah
		mov     esi, 0ffffh
___70133h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dl, [eax+___19a592h]
		test    dl, dl
		je      near ___71566h
		mov     [___24e879h], dl
		mov     dl, [eax+___19a5a2h]
		mov     [___24e878h], dl
		mov     dl, [___24e879h]
		sub     dl, 4
		cmp     dl, 11h
		ja      near ___71566h
		and     edx, 0ffh
		jmp     near dword [cs:edx*4+___6ee68h]
___7017ah:
		mov     cl, [___24e878h]
		test    cl, 0fh
		jne     short ___701cdh
		mov     ch, [___24e871h]
		cmp     ch, [___19a53eh]
		je      short ___701cdh
		xor     ebx, ebx
		xor     edx, edx
		xor     eax, eax
		mov     bl, cl
		mov     dl, [___24e87eh]
		sar     ebx, 4
		mov     al, [edx+___19a582h]
		add     eax, ebx
		mov     [edx+___19a582h], al
		xor     eax, eax
		mov     al, dl
		cmp     byte [eax+___19a582h], 40h
		jbe     short ___701cdh
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     byte [eax+___19a582h], 40h
___701cdh:
		test    byte [___24e878h], 0f0h
		jne     short ___70218h
		mov     bh, [___24e871h]
		cmp     bh, [___19a53eh]
		je      short ___70218h
		mov     dl, [___24e878h]
		xor     eax, eax
		xor     ecx, ecx
		mov     al, [___24e87eh]
		and     dl, 0fh
		xor     ebx, ebx
		mov     cl, dl
		mov     bl, [eax+___19a582h]
		cmp     ebx, ecx
		jl      short ___70210h
		mov     ch, bl
		sub     ch, dl
		mov     [eax+___19a582h], ch
		jmp     short ___70218h
___70210h:
		xor     cl, dl
		mov     [eax+___19a582h], cl
___70218h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     dl, [___24e870h]
		mov     bl, [eax+___19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+___68a10h], edx
		jmp     near ___71566h
___70241h:
		mov     bh, [___24e878h]
		cmp     bh, 0e0h
		jae     near ___71566h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [NoSplit eax*2+___19a562h]
		xor     edx, edx
		mov     dl, bh
		mov     ebx, 7dffh
		shl     edx, 2
		and     eax, 0ffffh
		sub     ebx, edx
		cmp     eax, ebx
		jg      short ___702c3h
		xor     dh, dh
		xor     eax, eax
		mov     dl, [___24e878h]
		mov     al, [___24e87eh]
		shl     edx, 2
		add     [NoSplit eax*2+___19a562h], dx
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [NoSplit eax*2+___19a542h]
		mov     edx, [___24e850h]
		and     eax, 0ffffh
		mov     ecx, [edx+eax*4]
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     ax, [NoSplit eax*2+___19a562h]
		jmp     near ___71533h
___702c3h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     [NoSplit eax*2+___688d0h], si
		jmp     near ___71566h
___702d7h:
		mov     bl, [___24e878h]
		cmp     bl, 0e0h
		jae     near ___71566h
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dx, [NoSplit eax*2+___19a562h]
		xor     eax, eax
		mov     al, bl
		shl     eax, 2
		add     eax, 200h
		cmp     edx, eax
		jl      short ___702c3h
		xor     dh, dh
		xor     eax, eax
		mov     dl, bl
		mov     al, [___24e87eh]
		shl     edx, 2
		sub     [NoSplit eax*2+___19a562h], dx
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [NoSplit eax*2+___19a542h]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		mov     eax, [___24e850h]
		mov     ecx, [edx+eax*1]
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     ax, [NoSplit eax*2+___19a562h]
		jmp     near ___71533h
___70356h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		mov     dl, al
		mov     ax, [NoSplit eax*2+___19a644h]
		cmp     ax, [NoSplit edx*2+___19a562h]
		je      near ___71566h
		xor     edx, edx
		xor     ah, ah
		mov     dl, [___24e87eh]
		mov     al, [___24e878h]
		mov     [NoSplit edx*2+___24e880h], ax
		xor     eax, eax
		mov     al, dl
		xor     edx, edx
		mov     dl, al
		mov     ax, [NoSplit eax*2+___19a644h]
		cmp     ax, [NoSplit edx*2+___19a562h]
		jbe     short ___70413h
		xor     eax, eax
		mov     al, dl
		xor     dh, dh
		mov     dl, [___24e878h]
		mov     di, [NoSplit eax*2+___19a562h]
		shl     edx, 2
		xor     ebx, ebx
		add     edi, edx
		mov     bl, al
		mov     [NoSplit eax*2+___19a562h], di
		xor     eax, eax
		mov     al, bl
		lea     edx, [NoSplit eax*2+0]
		mov     ax, [NoSplit ebx*2+___19a562h]
		cmp     ax, [edx+___19a644h]
		jbe     near ___7047fh
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     edx, [NoSplit eax*2+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dx, [edx+___19a644h]
		mov     [NoSplit eax*2+___19a562h], dx
		jmp     short ___7047fh
___70413h:
		xor     eax, eax
		mov     al, dl
		xor     edx, edx
		mov     dx, [NoSplit eax*2+___19a562h]
		xor     eax, eax
		mov     al, [___24e878h]
		shl     eax, 2
		cmp     eax, edx
		jg      short ___7044bh
		xor     dh, dh
		xor     eax, eax
		mov     dl, [___24e878h]
		mov     al, [___24e87eh]
		shl     edx, 2
		sub     [NoSplit eax*2+___19a562h], dx
		jmp     short ___7045ch
___7044bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edi, edi
		mov     [NoSplit eax*2+___19a562h], di
___7045ch:
		xor     eax, eax
		mov     al, [___24e87eh]
		add     eax, eax
		mov     dx, [eax+___19a562h]
		mov     cx, [eax+___19a644h]
		cmp     dx, cx
		jae     short ___7047fh
		mov     [eax+___19a562h], cx
___7047fh:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [NoSplit eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [NoSplit eax*2+___19a562h]
		xor     ebx, ebx
		jmp     near ___71533h
___704a8h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5d2h]
		and     al, 3
		cmp     al, 3
		ja      near ___705d1h
		and     eax, 0ffh
		jmp     near dword [cs:eax*4+___6eeb0h]
___704cch:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		and     eax, 0ffh
		mov     edx, [NoSplit eax*2+___19a4bah]
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		sar     edx, 10h
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		imul    eax, edx
		inc     eax
		sar     eax, 9
		jmp     near ___705cch
___7050bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		lea     edx, [eax*4+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		mov     ebx, 20h
		and     eax, 0ffh
		sub     ebx, eax
		imul    edx, ebx
		sar     edx, 4
		mov     [___24e874h], edx
		jmp     near ___705d1h
___70550h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		and     eax, 0ffh
		cmp     word [NoSplit eax*2+___19a4bch], byte 0
		jl      short ___70586h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		jmp     short ___705cch
___70586h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		neg     eax
		jmp     short ___705cch
___705a1h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		lea     edx, [eax*4+0]
		call    near rand_
		sub     eax, 4000h
		imul    eax, edx
		sar     eax, 0eh
___705cch:
		mov     [___24e874h], eax
___705d1h:
		mov     al, [___19a53eh]
		cmp     al, [___24e871h]
		je      short ___70612h
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a5c2h]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a5b2h]
		add     edx, ebx
		mov     [eax+___19a5b2h], dl
		cmp     dl, 40h
		jb      short ___70612h
		mov     dh, dl
		sub     dh, 40h
		mov     [eax+___19a5b2h], dh
___70612h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dx, [NoSplit eax*2+___19a542h]
		mov     di, [___24e874h]
		lea     ebx, [edx*4+0]
		mov     ax, [NoSplit eax*2+___19a562h]
		mov     edx, [___24e850h]
		add     eax, edi
		mov     ecx, [edx+ebx*1]
		xor     ebx, ebx
		jmp     near ___71533h
___7064bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a664h]
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		inc     eax
		cmp     edx, eax
		jge     short ___706a8h
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		mov     dl, al
		xor     ebx, ebx
		mov     bl, [edx+___19a582h]
		xor     edx, edx
		mov     dl, [___24e870h]
		imul    ebx, edx
		mov     ch, [eax+___19a664h]
		xor     edx, edx
		inc     ch
		mov     dl, al
		shl     ebx, 4
		mov     [eax+___19a664h], ch
		mov     [edx*4+___68a10h], ebx
		jmp     near ___71566h
___706a8h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a674h]
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		inc     eax
		cmp     edx, eax
		jge     near ___71566h
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		mov     dl, al
		xor     edi, edi
		mov     bl, [eax+___19a674h]
		mov     [edx*4+___68a10h], edi
		xor     edx, edx
		inc     bl
		mov     dl, al
		mov     [eax+___19a674h], bl
		mov     dl, [edx+___19a674h]
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		and     edx, 0ffh
		inc     eax
		cmp     edx, eax
		jl      near ___71566h
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     bh, bh
		mov     [eax+___19a664h], bh
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     cl, cl
		mov     [eax+___19a674h], cl
		jmp     near ___71566h
___70732h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5e4h]
		cmp     al, 1
		jb      short ___7074eh
		jbe     short ___70774h
		cmp     al, 2
		je      short ___707a0h
		jmp     near ___707c2h
___7074eh:
		test    al, al
		jne     short ___707c2h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5f4h]
		mov     [___24e87dh], al
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     byte [eax+___19a5e4h], 1
		jmp     short ___707c2h
___70774h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [NoSplit eax*2+___19a604h]
		and     eax, 0ffffh
		sar     eax, 8
		mov     [___24e87dh], al
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     byte [eax+___19a5e4h], 2
		jmp     short ___707c2h
___707a0h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [NoSplit eax*2+___19a604h]
		mov     [___24e87dh], al
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     cl, cl
		mov     [eax+___19a5e4h], cl
___707c2h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [NoSplit eax*2+___19a542h]
		mov     edx, [___24e850h]
		and     eax, 0ffffh
		mov     edx, [edx+eax*4]
		mov     al, [___24e87dh]
		and     al, 0fh
		and     eax, 0ffh
		mov     ax, [NoSplit eax*2+___19a484h]
		xor     ecx, ecx
		mov     cl, [___24e87dh]
		and     eax, 0ffffh
		sar     ecx, 4
		xor     ebx, ebx
		sar     eax, cl
		mov     ecx, edx
		jmp     near ___71533h
___7080eh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5d2h]
		and     al, 3
		cmp     al, 3
		ja      near ___70932h
		and     eax, 0ffh
		jmp     near dword [cs:eax*4+___6eec0h]
___70832h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		and     eax, 0ffh
		mov     edx, [NoSplit eax*2+___19a4bah]
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		sar     edx, 10h
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		imul    eax, edx
		inc     eax
		sar     eax, 9
		jmp     near ___7092dh
___70871h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		xor     edx, edx
		and     al, 0fh
		mov     dl, al
		xor     eax, eax
		mov     al, [___24e87eh]
		shl     edx, 2
		mov     al, [eax+___19a5b2h]
		mov     ebx, 20h
		and     eax, 0ffh
		sub     ebx, eax
		imul    edx, ebx
		sar     edx, 4
		mov     [___24e874h], edx
		jmp     near ___70932h
___708b1h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		and     eax, 0ffh
		cmp     word [NoSplit eax*2+___19a4bch], byte 0
		jl      short ___708e7h
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		jmp     short ___7092dh
___708e7h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		neg     eax
		jmp     short ___7092dh
___70902h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		lea     edx, [eax*4+0]
		call    near rand_
		sub     eax, 4000h
		imul    eax, edx
		sar     eax, 0eh
___7092dh:
		mov     [___24e874h], eax
___70932h:
		mov     dh, [___24e871h]
		cmp     dh, [___19a53eh]
		je      short ___70974h
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a5c2h]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a5b2h]
		add     edx, ebx
		mov     [eax+___19a5b2h], dl
		cmp     dl, 40h
		jb      short ___70974h
		mov     bh, dl
		sub     bh, 40h
		mov     [eax+___19a5b2h], bh
___70974h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [NoSplit eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [NoSplit eax*2+___19a562h]
		add     ax, [___24e874h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      short ___709c3h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___709c3h:
		mov     edx, eax
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     cl, [___24e878h]
		mov     [eax*4+___68990h], edx
		test    cl, cl
		je      near ___70a59h
		test    cl, 0fh
		jne     short ___70a19h
		mov     dl, [___19a53eh]
		cmp     dl, [___24e871h]
		je      short ___70a19h
		xor     edx, edx
		mov     dl, cl
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a582h]
		add     edx, ebx
		mov     [eax+___19a582h], dl
		cmp     dl, 40h
		jbe     short ___70a19h
		mov     byte [eax+___19a582h], 40h
___70a19h:
		mov     cl, [___24e878h]
		test    cl, 0f0h
		jne     short ___70a59h
		mov     ch, [___24e871h]
		cmp     ch, [___19a53eh]
		je      short ___70a59h
		xor     eax, eax
		mov     dl, cl
		mov     al, [___24e87eh]
		and     dl, 0fh
		mov     dh, [eax+___19a582h]
		sub     dh, dl
		mov     [eax+___19a582h], dh
		cmp     dh, 40h
		jbe     short ___70a59h
		xor     bh, bh
		mov     [eax+___19a582h], bh
___70a59h:
		xor     eax, eax
		xor     ebx, ebx
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     bl, [___24e870h]
		mov     dl, [eax+___19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+___68a10h], edx
		jmp     near ___71566h
___70a82h:
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     ebx, [NoSplit eax*2+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     edx, [NoSplit eax*2+0]
		mov     ax, [ebx+___19a644h]
		cmp     ax, [edx+___19a562h]
		je      near ___70c51h
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     ebx, [NoSplit eax*2+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     edx, [NoSplit eax*2+0]
		mov     ax, [ebx+___19a644h]
		cmp     ax, [edx+___19a562h]
		jbe     near ___70b69h
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		mov     dl, al
		mov     dx, [NoSplit edx*2+___24e880h]
		mov     cx, [NoSplit eax*2+___19a562h]
		shl     edx, 2
		add     ecx, edx
		mov     [NoSplit eax*2+___19a562h], cx
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     ebx, [NoSplit eax*2+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     edx, [NoSplit eax*2+0]
		mov     ax, [ebx+___19a562h]
		cmp     ax, [edx+___19a644h]
		jbe     near ___70bfah
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     edx, [NoSplit eax*2+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     ebx, [NoSplit eax*2+0]
		mov     ax, [edx+___19a644h]
		mov     [ebx+___19a562h], ax
		jmp     near ___70bfah
___70b69h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [NoSplit eax*2+___24e880h]
		and     eax, 0ffffh
		lea     edx, [eax*4+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ax, [NoSplit eax*2+___19a562h]
		and     eax, 0ffffh
		cmp     edx, eax
		jg      short ___70bc6h
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		mov     dl, al
		mov     dx, [NoSplit edx*2+___24e880h]
		mov     di, [NoSplit eax*2+___19a562h]
		shl     edx, 2
		sub     edi, edx
		mov     [NoSplit eax*2+___19a562h], di
		jmp     short ___70bd7h
___70bc6h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     ecx, ecx
		mov     [NoSplit eax*2+___19a562h], cx
___70bd7h:
		xor     eax, eax
		mov     al, [___24e87eh]
		add     eax, eax
		mov     dx, [eax+___19a562h]
		mov     bx, [eax+___19a644h]
		cmp     dx, bx
		jae     short ___70bfah
		mov     [eax+___19a562h], bx
___70bfah:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [NoSplit eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [NoSplit eax*2+___19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      short ___70c42h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___70c42h:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx*4+___68990h], eax
___70c51h:
		mov     ch, [___24e878h]
		test    ch, ch
		je      near ___70cddh
		test    ch, 0fh
		jne     short ___70c9dh
		mov     al, [___19a53eh]
		cmp     al, [___24e871h]
		je      short ___70c9dh
		xor     edx, edx
		xor     eax, eax
		mov     dl, ch
		mov     al, [___24e87eh]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a582h]
		add     edx, ebx
		mov     [eax+___19a582h], dl
		cmp     dl, 40h
		jbe     short ___70c9dh
		mov     byte [eax+___19a582h], 40h
___70c9dh:
		mov     bl, [___24e878h]
		test    bl, 0f0h
		jne     short ___70cddh
		mov     bh, [___24e871h]
		cmp     bh, [___19a53eh]
		je      short ___70cddh
		xor     eax, eax
		mov     dl, bl
		mov     al, [___24e87eh]
		and     dl, 0fh
		mov     cl, [eax+___19a582h]
		sub     cl, dl
		mov     [eax+___19a582h], cl
		cmp     cl, 40h
		jbe     short ___70cddh
		xor     dl, dl
		mov     [eax+___19a582h], dl
___70cddh:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     dl, [___24e870h]
		mov     bl, [eax+___19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+___68a10h], edx
		jmp     near ___71566h
___70d06h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___19a540h]
		mov     dl, [___24e871h]
		imul    edx, eax
		xor     eax, eax
		mov     al, [___19a53eh]
		sub     edx, eax
		mov     al, [___24e878h]
		xor     ebx, ebx
		and     al, 0fh
		mov     bl, al
		mov     eax, edx
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		jne     near ___71566h
		xor     eax, eax
		mov     dl, [___24e871h]
		mov     al, [___19a540h]
		imul    edx, eax
		xor     eax, eax
		mov     al, [___19a53eh]
		cmp     edx, eax
		je      near ___71566h
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     edx, [NoSplit eax*2+0]
		xor     eax, eax
		mov     al, [___24e87eh]
		lea     ebx, [NoSplit eax*2+0]
		mov     ax, [edx+___19a542h]
		mov     [ebx+___688d0h], ax
		xor     eax, eax
		mov     al, [___24e878h]
		sar     eax, 4
		dec     eax
		cmp     eax, byte 0eh
		ja      near ___71017h
		jmp     near dword [cs:eax*4+___6eed0h]
___70da0h:
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 1
		jb      short ___70dc2h
		xor     eax, eax
		mov     al, [___24e87eh]
		dec     byte [eax+___19a582h]
		jmp     near ___71017h
___70dc2h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     bh, bh
		mov     [eax+___19a582h], bh
		jmp     near ___71017h
___70dd6h:
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 2
		jb      short ___70df9h
		xor     eax, eax
		mov     al, [___24e87eh]
		sub     byte [eax+___19a582h], 2
		jmp     near ___71017h
___70df9h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     dl, dl
		mov     [eax+___19a582h], dl
		jmp     near ___71017h
___70e0dh:
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 4
		jb      short ___70dc2h
		xor     eax, eax
		mov     al, [___24e87eh]
		sub     byte [eax+___19a582h], 4
		jmp     near ___71017h
___70e30h:
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 8
		jb      short ___70df9h
		xor     eax, eax
		mov     al, [___24e87eh]
		sub     byte [eax+___19a582h], 8
		jmp     near ___71017h
___70e53h:
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 10h
		jb      near ___70dc2h
		xor     eax, eax
		mov     al, [___24e87eh]
		sub     byte [eax+___19a582h], 10h
		jmp     near ___71017h
___70e7ah:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a582h]
		add     edx, edx
		mov     ebx, 3
		mov     eax, edx
		sar     edx, 1fh
		idiv    ebx
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx+___19a582h], al
		jmp     near ___71017h
___70eaah:
		xor     eax, eax
		mov     al, [___24e87eh]
		shr     byte [eax+___19a582h], 1
		jmp     near ___71017h
___70ebch:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ch, [eax+___19a582h]
		xor     edx, edx
		inc     ch
		mov     dl, al
		mov     [eax+___19a582h], ch
		cmp     byte [edx+___19a582h], 40h
		jbe     near ___71017h
		xor     eax, eax
		mov     al, dl
		jmp     near ___71010h
___70eebh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     bl, [eax+___19a582h]
		xor     edx, edx
		add     bl, 2
		mov     dl, al
		mov     [eax+___19a582h], bl
		cmp     byte [edx+___19a582h], 40h
		jbe     near ___71017h
		xor     eax, eax
		mov     al, dl
		jmp     near ___71010h
___70f1bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ch, [eax+___19a582h]
		xor     edx, edx
		add     ch, 4
		mov     dl, al
		mov     [eax+___19a582h], ch
		cmp     byte [edx+___19a582h], 40h
		jbe     near ___71017h
		xor     eax, eax
		mov     al, dl
		jmp     near ___71010h
___70f4bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     bl, [eax+___19a582h]
		xor     edx, edx
		add     bl, 8
		mov     dl, al
		mov     [eax+___19a582h], bl
		cmp     byte [edx+___19a582h], 40h
		jbe     near ___71017h
		xor     eax, eax
		mov     al, dl
		jmp     near ___71010h
___70f7bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     ch, [eax+___19a582h]
		xor     edx, edx
		add     ch, 10h
		mov     dl, al
		mov     [eax+___19a582h], ch
		cmp     byte [edx+___19a582h], 40h
		jbe     near ___71017h
		xor     eax, eax
		mov     al, dl
		jmp     short ___71010h
___70fa8h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a582h]
		lea     edx, [edx+edx*2]
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     dl, al
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     [eax+___19a582h], dl
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 40h
		jbe     short ___71017h
		jmp     short ___71009h
___70fe4h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     dl, [eax+___19a582h]
		add     dl, dl
		mov     [eax+___19a582h], dl
		xor     eax, eax
		mov     al, [___24e87eh]
		cmp     byte [eax+___19a582h], 40h
		jbe     short ___71017h
___71009h:
		xor     eax, eax
		mov     al, [___24e87eh]
___71010h:
		mov     byte [eax+___19a582h], 40h
___71017h:
		xor     eax, eax
		xor     edx, edx
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     dl, [___24e870h]
		mov     bl, [eax+___19a582h]
		imul    edx, ebx
		shl     edx, 4
		mov     [eax*4+___68a10h], edx
		jmp     near ___71566h
___71040h:
		mov     dl, [eax+___19a5d2h]
		and     dl, 0ch
		and     edx, 0ffh
		sar     edx, 2
		cmp     edx, byte 3
		ja      near ___7112eh
		jmp     near dword [cs:edx*4+___6ef0ch]
___71063h:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		and     eax, 0ffh
		mov     edx, [NoSplit eax*2+___19a4bah]
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		sar     edx, 10h
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 8
		jmp     near ___71129h
___7109eh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5b2h]
		mov     edx, 20h
		and     eax, 0ffh
		sub     edx, eax
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		sar     eax, 6
		jmp     short ___71129h
___710d3h:
		xor     edx, edx
		mov     dl, [eax+___19a5b2h]
		cmp     word [NoSplit edx*2+___19a4bch], byte 0
		jl      short ___710fch
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		jmp     short ___71129h
___710fch:
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		neg     eax
		jmp     short ___71129h
___7110dh:
		mov     al, [eax+___19a5c2h]
		xor     edx, edx
		and     al, 0fh
		mov     dl, al
		call    near rand_
		sub     eax, 4000h
		imul    eax, edx
		sar     eax, 0dh
___71129h:
		mov     [___24e874h], eax
___7112eh:
		mov     cl, [___24e871h]
		cmp     cl, [___19a53eh]
		je      short ___7116bh
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a5c2h]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a5b2h]
		add     edx, ebx
		mov     ch, dl
		mov     [eax+___19a5b2h], dl
		and     ch, 3fh
		mov     [eax+___19a5b2h], ch
___7116bh:
		xor     eax, eax
		mov     al, [___24e87eh]
		mov     al, [eax+___19a582h]
		mov     edi, [___24e874h]
		and     eax, 0ffh
		add     edi, eax
		mov     [___24e874h], edi
		test    edi, edi
		jge     short ___71196h
		xor     eax, eax
		mov     [___24e874h], eax
___71196h:
		cmp     dword [___24e874h], byte 40h
		jle     short ___711a9h
		mov     dword [___24e874h], 40h
___711a9h:
		xor     eax, eax
		mov     al, [___24e870h]
		mov     ecx, [___24e874h]
		mov     edx, eax
		imul    edx, ecx
		xor     eax, eax
		mov     al, [___24e87eh]
		shl     edx, 4
		mov     [eax*4+___68a10h], edx
		jmp     near ___71566h
___711d1h:
		xor     edx, edx
		mov     dl, [___24e878h]
		sar     edx, 4
		cmp     edx, byte 0ch
		jb      near ___71566h
		lea     ecx, [NoSplit eax*2+0]
		jbe     short ___711f8h
		cmp     edx, byte 0dh
		je      short ___71229h
		jmp     near ___71566h
___711f8h:
		mov     dl, [eax+___19a5e4h]
		test    dl, dl
		je      short ___71211h
		mov     bh, dl
		dec     bh
		mov     [eax+___19a5e4h], bh
		jmp     near ___71566h
___71211h:
		mov     [eax+___19a592h], dl
		mov     [eax+___19a5a2h], dl
		mov     [ecx+___688d0h], si
		jmp     near ___71566h
___71229h:
		mov     dl, [eax+___19a5e4h]
		test    dl, dl
		je      short ___71242h
		mov     cl, dl
		dec     cl
		mov     [eax+___19a5e4h], cl
		jmp     near ___71566h
___71242h:
		xor     edx, edx
		mov     dx, [ecx+___19a604h]
		sar     edx, 8
		mov     [___24e87fh], dl
		mov     dl, [ecx+___19a604h]
		mov     [___24e87ch], dl
		xor     edx, edx
		mov     dx, [ecx+___19a624h]
		sar     edx, 8
		mov     [___24e87dh], dl
		mov     dx, [ecx+___19a624h]
		xor     dh, dh
		mov     [___24e87ah], dx
		test    byte [___24e87fh], 20h
		je      near ___7135ah
		mov     dx, [___24e87ah]
		test    dx, dx
		jne     short ___712e8h
		mov     ax, [ecx+___19a542h]
		mov     [___24e87ah], ax
		test    ax, ax
		jne     short ___712b7h
		xor     cl, cl
		mov     [___24e87dh], cl
		jmp     short ___71307h
___712b7h:
		mov     bl, [___24e87dh]
		cmp     bl, 0ffh
		je      short ___712c6h
		test    bl, bl
		jne     short ___71307h
___712c6h:
		xor     eax, eax
		mov     edx, [___24e864h]
		mov     ax, [___24e87ah]
		add     eax, edx
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     al, [eax]
		mov     [edx+___19a582h], al
		jmp     short ___71307h
___712e8h:
		mov     [ecx+___19a542h], dx
		xor     edx, edx
		mov     ebx, [___24e864h]
		mov     dx, [___24e87ah]
		mov     dl, [edx+ebx*1]
		mov     [eax+___19a582h], dl
___71307h:
		xor     eax, eax
		mov     al, [___24e87eh]
		add     eax, eax
		mov     dx, [___24e87ah]
		mov     ch, [___24e87dh]
		mov     [eax+___688d0h], dx
		cmp     ch, 0ffh
		je      short ___7135ah
		test    ch, ch
		je      short ___7135ah
		mov     dl, ch
		and     dl, 0fh
		and     edx, 0ffh
		mov     dx, [NoSplit edx*2+___19a484h]
		xor     ecx, ecx
		mov     cl, [___24e87dh]
		and     edx, 0ffffh
		sar     ecx, 4
		sar     edx, cl
		mov     [eax+___19a562h], dx
___7135ah:
		test    byte [___24e87fh], 40h
		je      short ___71376h
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     al, [___24e87ch]
		mov     [edx+___19a582h], al
___71376h:
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     ebx, [___24e850h]
		mov     dx, [NoSplit eax*2+___19a542h]
		mov     ecx, [ebx+edx*4]
		mov     ax, [NoSplit eax*2+___19a562h]
		xor     ebx, ebx
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      short ___713beh
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___713beh:
		mov     edx, eax
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     ebx, ebx
		mov     [eax*4+___68990h], edx
		xor     edx, edx
		mov     bl, [eax+___19a582h]
		mov     dl, [___24e870h]
		imul    edx, ebx
		shl     edx, 4
		xor     bl, bl
		mov     [eax*4+___68a10h], edx
		mov     [eax+___19a592h], bl
		mov     [eax+___19a5a2h], bl
		jmp     near ___71566h
___713feh:
		mov     dl, [eax+___19a5d2h]
		and     dl, 3
		cmp     dl, 3
		ja      near ___714c4h
		and     edx, 0ffh
		jmp     near dword [cs:edx*4+___6ef1ch]
___7141eh:
		xor     edx, edx
		mov     dl, [eax+___19a5b2h]
		mov     edx, [NoSplit edx*2+___19a4bah]
		mov     al, [eax+___19a5c2h]
		sar     edx, 10h
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, edx
		inc     eax
		sar     eax, 9
		jmp     near ___714bfh
___71449h:
		xor     edx, edx
		mov     ebx, 20h
		mov     dl, [eax+___19a5b2h]
		mov     al, [eax+___19a5c2h]
		sub     ebx, edx
		and     al, 0fh
		and     eax, 0ffh
		imul    eax, ebx
		sar     eax, 4
		jmp     short ___714bfh
___7146dh:
		xor     edx, edx
		mov     dl, [eax+___19a5b2h]
		cmp     word [NoSplit edx*2+___19a4bch], byte 0
		jl      short ___7148fh
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		jmp     short ___714bfh
___7148fh:
		mov     al, [eax+___19a5c2h]
		and     al, 0fh
		and     eax, 0ffh
		shl     eax, 2
		neg     eax
		jmp     short ___714bfh
___714a3h:
		mov     al, [eax+___19a5c2h]
		xor     edx, edx
		and     al, 0fh
		mov     dl, al
		call    near rand_
		sub     eax, 4000h
		imul    eax, edx
		sar     eax, 0eh
___714bfh:
		mov     [___24e874h], eax
___714c4h:
		mov     dh, [___24e871h]
		cmp     dh, [___19a53eh]
		je      short ___71506h
		xor     eax, eax
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     dl, [eax+___19a5c2h]
		mov     ebx, edx
		xor     edx, edx
		sar     ebx, 4
		mov     dl, [eax+___19a5b2h]
		add     edx, ebx
		mov     [eax+___19a5b2h], dl
		cmp     dl, 40h
		jb      short ___71506h
		mov     bh, dl
		sub     bh, 40h
		mov     [eax+___19a5b2h], bh
___71506h:
		xor     eax, eax
		mov     ecx, [___24e850h]
		mov     al, [___24e87eh]
		xor     edx, edx
		mov     di, [___24e874h]
		mov     dx, [NoSplit eax*2+___19a542h]
		mov     ax, [NoSplit eax*2+___19a562h]
		xor     ebx, ebx
		add     eax, edi
		mov     ecx, [ecx+edx*4]
___71533h:
		mov     bx, ax
		xor     eax, eax
		or      ebx, ebx
		je      short ___71557h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___71557h:
		xor     edx, edx
		mov     dl, [___24e87eh]
		mov     [edx*4+___68990h], eax
___71566h:
		mov     al, [___24e87eh]
		inc     al
		mov     [___24e87eh], al
		cmp     al, 10h
		jne     near ___70133h
		mov     dl, 1
		mov     [___19a540h], dl
		sub     [___19a53eh], dl
___71588h:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
	align 	4














































































;;	load_s3m(???, MSX_file, ptr MSX_size, ptr MSX_samples:
load_s3m:
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     ebp, eax
		mov     esi, edx
		mov     [esp], ebx
		mov     edi, ecx
		mov     edx, 1
		mov     eax, esi
		mov     ebx, 4
		call    near load_musics_bpa
		;;	load_musics_bpa(file_name, ???:
		mov     edx, ___185114h			;; "SCRM"
		mov     ecx, eax
		add     eax, byte 2ch
		call    near strncmp_
		test    eax, eax
		je      .is_scrm
		push    esi
		push    byte 28h
		call    near ___58b20h
		add     esp, byte 8
.is_scrm:
		test    ebp, ebp
		je      short ___715e9h
		cmp     byte [ecx+60h], 0ffh
		jne     short ___715e3h
		push    esi
		push    byte 29h
		call    near ___58b20h
		add     esp, byte 8
___715e3h:
		mov     [___24e868h], ecx
___715e9h:
		mov     eax, esi
	;push 	esi
	;mov     esi, [esp+4]
		mov     esi, [esp]
		call    near entrysize_musics_bpa
		mov     [esi], eax

	;push 	eax
	;push 	ecx
	;call save_s3m
	;pop 	ecx
	;add 	esp, 8

		xor     eax, eax
		mov     ax, [ecx+22h]
		mov     [edi], eax
		mov     eax, ecx
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		retn    
align 4


___71608h:
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     [esp], eax
		lea     eax, [edx+ebx*1]
		xor     ebx, ebx
		mov     bx, [eax+0eh]
		shl     ebx, 4
		lea     edi, [edx+ebx*1]
		mov     edx, [eax+14h]
		add     edx, edi
		mov     esi, [eax+10h]
		dec     edx
		mov     [esp+4], edi
		mov     [esp+8], edx
		mov     edx, [eax+18h]
		add     esi, edi
		add     edi, edx
		mov     dl, [eax+1fh]
		dec     esi
		and     dl, 1
		dec     edi
		mov     [esp+0ch], dl
		test    dl, 3
		je      short ___71651h
		cmp     esi, edi
		jl      short ___7164fh
		mov     esi, edi
___7164fh:
		mov     edi, esi
___71651h:
		mov     ebx, [esp]
		lea     ebp, [ecx*4+0]
		test    ebx, ebx
		je      short ___71696h
		mov     edx, [___24e864h]
		add     ecx, edx
		mov     dl, [eax+1ch]
		mov     [ecx+1], dl
		mov     edx, [___24e850h]
		mov     eax, [eax+20h]
		mov     [edx+ebp*1+4], eax
		mov     eax, [___24e798h]
		mov     dword [eax+ebp*1+4], 0
		mov     eax, [___24e79ch]
		mov     dword [eax+ebp*1+4], 0
		jmp     short ___716ddh
___71696h:
		xor     edx, edx
		mov     dl, [eax+1ch]
		mov     ebx, edx
		mov     edx, [___24e798h]
		shl     ebx, 0ah
		mov     [edx+ebp*1+4], ebx
		mov     ebx, 6cch
		mov     ecx, [eax+20h]
		xor     eax, eax
		or      ebx, ebx
		je      short ___716d3h
		mov     eax, 6d3bh
		imul    ecx
		shld    edx, eax, 0dh
		shl     eax, 0dh
		imul    ebx, ebx, 5780h
		idiv    ebx
		shr     eax, 1
		adc     eax, byte 0
___716d3h:
		mov     edx, [___24e79ch]
		mov     [edx+ebp*1+4], eax
___716ddh:
		xor     eax, eax
		mov     ebx, [esp+8]
		mov     al, [esp+0ch]
		mov     ecx, edi
		push    eax
		mov     edx, esi
		mov     eax, [esp+8]
		call    near ___67994h
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		retn    




;;	___716fch(_eax, ptr MSX/SFX, size)
___716fch:
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 14h
		mov     [esp+4], eax
		mov     esi, edx
		add     ebx, edx
		dec     ebx
		mov     [esp+8], ebx
		mov     ebx, edx
		xor     edx, edx
		lea     ecx, [esi+60h]
		mov     [esp+0ch], edx
		test    eax, eax
		je      near ___7183dh
		mov     edx, 1
		mov     eax, 8000h
		call    near ___5f248h
		mov     [___19a464h], eax
		xor     eax, eax
		mov     ax, [esi+22h]
		mov     [esp+10h], eax
		mov     al, [esi+20h]
		mov     [___24e86eh], al
		mov     ax, [esi+24h]
		mov     [___24e86ch], ax
		lea     eax, [esi+40h]
		mov     [___24e858h], eax
		cmp     byte [esi+35h], 0fch
		jne     short ___71787h
		xor     edx, edx
		mov     eax, [esp+10h]
		mov     dl, [___24e86eh]
		add     eax, eax
		add     edx, ecx
		add     edx, eax
		xor     eax, eax
		mov     ax, [___24e86ch]
		add     eax, eax
		add     edx, eax
		mov     [___24e860h], edx
		jmp     short ___7178fh
___71787h:
		xor     ebp, ebp
		mov     [___24e860h], ebp
___7178fh:
		xor     edi, edi
___71791h:
		mov     eax, [___24e858h]
		cmp     byte [edi+eax*1], 0fh
		ja      short ___717a0h
		inc     dword [esp+0ch]
___717a0h:
		inc     edi
		cmp     edi, byte 20h
		jne     short ___71791h
		mov     eax, [esp+10h]
		inc     eax
		call    near ___5f26ch
		mov     [___24e864h], eax
		mov     eax, [esp+10h]
		shl     eax, 2
		add     eax, byte 4
		call    near ___5f26ch
		mov     [___24e850h], eax
		lea     eax, [esi+60h]
		mov     [___24e85ch], eax
		xor     eax, eax
		mov     ax, [___24e86ch]
		shl     eax, 2
		xor     edx, edx
		call    near ___5f26ch
		mov     dl, [___24e86eh]
		mov     [___24e854h], eax
		mov     eax, [___24e85ch]
		add     eax, edx
		mov     [esp], eax
		mov     eax, [esp+10h]
		mov     edx, [esp]
		add     eax, eax
		xor     ebp, ebp
		add     eax, edx
		xor     edx, edx
		jmp     short ___7182eh
___71809h:
		xor     edi, edi
		mov     di, [eax]
		shl     edi, 4
		add     edi, byte 2
		lea     ecx, [esi+edi*1]
		mov     edi, [___24e854h]
		add     edi, edx
		mov     [edi], ecx
		cmp     ebx, ecx
		jae     short ___71827h
		mov     ebx, ecx
___71827h:
		add     eax, byte 2
		inc     ebp
		add     edx, byte 4
___7182eh:
		xor     ecx, ecx
		mov     cx, [___24e86ch]
		cmp     ebp, ecx
		jge     short ___71850h
		jmp     short ___71809h
___7183dh:
		mov     ax, [esi+22h]
		mov     [esp+10h], eax
		xor     eax, eax
		mov     ax, [esi+20h]
		add     ecx, eax
		mov     [esp], ecx
___71850h:
		mov     edi, [esp+10h]
		xor     eax, eax
		test    edi, edi
		jle     short ___71891h
		mov     edx, [esp]
		mov     ebp, [esp+10h]
___71861h:
		xor     edi, edi
		mov     di, [edx]
		shl     edi, 4
		mov     di, [edi+esi*1+0eh]
		and     edi, 0ffffh
		shl     edi, 4
		mov     ecx, [esp+8]
		add     edi, esi
		cmp     edi, ecx
		jae     short ___71889h
		cmp     edi, ebx
		jbe     short ___71889h
		mov     [esp+8], edi
___71889h:
		inc     eax
		add     edx, byte 2
		cmp     eax, ebp
		jl      short ___71861h
___71891h:
		mov     eax, [esp+10h]
		xor     edi, edi
		test    eax, eax
		jle     short ___718c0h
		mov     ebp, [esp]
___7189eh:
		mov     eax, [esp+4]
		xor     ebx, ebx
		mov     ecx, edi
		mov     bx, [ebp+0]
		mov     edx, esi
		shl     ebx, 4
		inc     edi
		call    near ___71608h
		mov     eax, [esp+10h]
		add     ebp, byte 2
		cmp     edi, eax
		jl      short ___7189eh
___718c0h:
		mov     edx, [esp+8]
		mov     eax, esi
		sub     edx, esi

	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Memory_resize
	add 	esp, 8
	pop 	ecx

		cmp     dword [esp+4], byte 0
		je      short ___718dfh
		call    near ___5f2b4h
		mov     eax, [esp+0ch]
		jmp     short ___718e1h
___718dfh:
		xor     eax, eax
___718e1h:
		add     esp, byte 14h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
	align 	4





__GDECL(___718ech_cdecl)
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		xor     ecx, ecx
		cmp 	byte [SOUND_TYPE], 0
		je      near ___71a2fh
		cmp     byte [___19a27bh], 0
		je      near ___71a2fh
		cmp     byte [___19a280h], 0
		jne     near ___71a2fh
		mov     edx, [MSX_struct_content_ptr]
		test    edx, edx
		je      near ___71a2fh
		mov     byte [___19a468h], 1
		mov     eax, edx
		mov     dl, [edx+30h]
		mov     [___24e870h], dl
		mov     dl, [eax+31h]
		mov     al, [eax+32h]
		mov     [___24e86fh], al
		movzx   esi, al
		mov     eax, 7a12h
		mov     [___24e871h], dl
		mov     edx, eax
		sar     edx, 1fh
		idiv    esi
		mov     edi, [___24e860h]
		mov     [___68c40h], ax
		xor     edx, edx
		xor     eax, eax
___7196ch:
		mov     esi, [___24e858h]
		add     esi, eax
		mov     bh, [esi]
		cmp     bh, 0fh
		ja      short ___719bfh
		cmp     bh, 7
		ja      short ___7198ch
		mov     dword [edx+___68a90h], 3000h
		jmp     short ___71996h
___7198ch:
		mov     dword [edx+___68a90h], 0c000h
___71996h:
		test    edi, edi
		je      short ___719b3h
		lea     esi, [edi+eax*1]
		mov     bl, [esi]
		test    bl, 20h
		je      short ___719b3h
		and     bl, 0fh
		movzx   esi, bl
		shl     esi, 0ch
		mov     [edx+___68a90h], esi
___719b3h:
		add     edx, byte 4
		mov     [eax+___24e830h], cl
		inc     ecx
		jmp     short ___719c6h
___719bfh:
		mov     byte [eax+___24e830h], 0ffh
___719c6h:
		inc     eax
		cmp     eax, byte 20h
		jl      short ___7196ch
		mov     ebp, 8000h
		lea     eax, [ecx*4+0]
___719d8h:
		cmp     eax, dword 80h
		jge     short ___719ebh
		add     eax, byte 4
		inc     ecx
		mov     [eax+___68a8ch], ebp
		jmp     short ___719d8h
___719ebh:
		mov     ecx, 40h
		mov     edx, 0ffffffffh
		mov     eax, ___24e750h
		call    near __STOSB
		xor     bh, bh
		mov     eax, ___6ef2ch
		mov     cl, 1
	push 	eax
		call    SET_S3M_CB_cdecl
	add 	esp, 4

	
	push 	ecx
	push 	edx
		call    near ___685a4h_cdecl
	pop 	edx
	pop 	ecx
		mov     [___19a281h], bh
		mov     [___19a280h], cl
		cmp     cl, [___19a468h]
		jne     short ___71a2fh
___71a26h:
;	cmp     byte [___60448h], 1				;;;;;
;	jne     ___60816h						;;;;;
;	call    dword [___60454h]				;;;;;
;___60816h:									;;;;;
		cmp     byte [___19a468h], 1
		je      short ___71a26h
___71a2fh:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
align 4
__GDECL(___71a38h_cdecl)
		mov     eax, [___19a464h]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx
		retn
align 4

__GDECL(___71a44h_cdecl)
		push    edx
		cmp		byte [SOUND_TYPE], 0
		je      short ___71a81h
		cmp     byte [___19a27bh], 0
		je      short ___71a81h
		cmp     byte [___19a469h], 0
		je      short ___71a81h
		xor     eax, eax
		mov     al, [___19a469h]
		lea     edx, [eax-1]
		and     edx, 0ffh
		shl     edx, 8
		mov     al, [___19a46ah]
		and     eax, 0ffh
		or      eax, edx
		pop     edx
		retn    
___71a81h:
		mov     eax, 0ffffffffh
		pop     edx
		retn    

__GDECL(___71a88h)
	mov 	eax, [esp+4]
		cmp		byte [SOUND_TYPE], 0
		je      short ___71aa2h
		cmp     byte [___19a27bh], 0
		je      short ___71aa2h
		mov     [___19a46ch], eax
		mov     al, 1
		retn    
___71aa2h:
		xor     al, al
		retn    
	align 	10h
___71ab0h:
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		mov     ch, dl
		cmp     byte [___24e9dah], 0
		jne     near ___71b4ah
		xor     ebx, ebx
		mov     bl, al
		mov     esi, 0ch
		mov     edx, ebx
		mov     eax, ebx
		sar     edx, 1fh
		idiv    esi
		lea     esi, [edx*8+0]
		movsx   edx, ch
		mov     eax, edx
		sar     edx, 1fh
		shl     edx, 3
		sbb     eax, edx
		sar     eax, 3
		mov     edi, 0ch
		add     esi, eax
		xor     eax, eax
		mov     edx, ebx
		mov     ax, [NoSplit esi*2+___19a724h]
		sar     edx, 1fh
		mov     ebp, eax
		mov     eax, ebx
		idiv    edi
		mov     cl, al
		xor     edx, edx
		mov     al, ch
		mov     dx, [NoSplit esi*2+___19a726h]
		and     al, 7
		shl     edx, 5
		movsx   eax, al
		sar     edx, cl
		imul    edx, eax
		shl     ebp, 5
		mov     ebx, ebp
		mov     esi, 8
		sar     ebx, cl
		sub     esi, eax
		imul    ebx, esi
		add     edx, ebx
		mov     eax, edx
		sar     edx, 1fh
		shl     edx, 3
		sbb     eax, edx
		sar     eax, 3
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
___71b4ah:
		and     eax, 0ffh
		mov     ebx, 1e00h
		shl     eax, 6
		movsx   edx, dl
		sub     ebx, eax
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		sub     ebx, eax
		mov     eax, ebx
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
	align 	4
___71b70h:
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     ebx, eax
		cmp     byte [___24e9dah], 0
		jne     short ___71b97h
		xor     eax, eax
		or      ebx, ebx
		je      short ___71b92h
		xor     edx, edx
		mov     eax, ebx
		shr     eax, 1
		add     eax, 2820000h
		idiv    ebx
___71b92h:
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___71b97h:
		cmp     ebx, 1e00h
		jbe     short ___71ba4h
		mov     ebx, 1e00h
___71ba4h:
		mov     eax, 1e00h
		mov     ecx, 300h
		sub     eax, ebx
		xor     edx, edx
		mov     ebx, eax
		div     ecx
		xor     esi, esi
		mov     si, [NoSplit edx*2+___19a804h]
		lea     eax, [esi*8+0]
		sub     eax, esi
		shl     eax, 8
		mov     ecx, 519h
		mov     esi, eax
		shl     eax, 6
		xor     edx, edx
		add     eax, esi
		div     ecx
		mov     ecx, 300h
		mov     esi, eax
		xor     edx, edx
		mov     eax, ebx
		div     ecx
		mov     ecx, 0ah
		sub     ecx, eax
		mov     eax, esi
		shr     eax, cl
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    


load_xm:
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     ebp, eax
		mov     esi, edx
		mov     [esp], ebx
		mov     [esp+4], ecx
		mov     edx, 1
		mov     eax, esi
		mov     ebx, 11h
		call    near load_musics_bpa
		mov     edx, ___18511ch				;;	"Extended Module: "
		mov     edi, eax
		call    near strncmp_
		test    eax, eax
		je      short ___75569h
		push    esi
		push    byte 28h
		call    near ___58b20h
		add     esp, byte 8
___75569h:
		cmp     byte [edi+25h], 1ah
		je      short ___7557ah
		push    esi
		push    byte 28h
		call    near ___58b20h
		add     esp, byte 8
___7557ah:
		cmp     word [edi+3ah], 104h
		jae     short ___7558dh
		push    esi
		push    byte 28h
		call    near ___58b20h
		add     esp, byte 8
___7558dh:
		test    ebp, ebp
		je      short ___755c1h
		cmp     word [edi+40h], byte 0
		jne     short ___755a3h
		push    esi
		push    byte 29h
		call    near ___58b20h
		add     esp, byte 8
___755a3h:
		cmp     word [edi+46h], byte 0
		jne     short ___755b5h
		push    esi
		push    byte 29h
		call    near ___58b20h
		add     esp, byte 8
___755b5h:
		lea     eax, [edi+11h]
		mov     byte [edi+25h], 0
		mov     [___24e9bch], eax
___755c1h:
		mov     eax, esi
		mov     edx, [esp]
		call    near entrysize_musics_bpa

;	push 	edx
;	push 	ecx
;	push 	esi
;	push 	eax
;	push 	edi
;	call 	save_xm
;	add 	esp, 14h


		mov     [edx], eax
		test    ebp, ebp
		je      short ___75631h
		mov     eax, [esp+4]
		mov     dword [eax], 0
		lea     eax, [edi+3ch]
		add     eax, [edi+3ch]
		xor     edx, edx
		jmp     short ___755f2h
___755e5h:
		xor     ebx, ebx
		mov     ecx, [eax]
		mov     bx, [eax+7]
		add     eax, ecx
		inc     edx
		add     eax, ebx
___755f2h:
		xor     ebx, ebx
		mov     bx, [edi+46h]
		cmp     edx, ebx
		jl      short ___755e5h
		xor     esi, esi
		jmp     short ___75603h
___75600h:
		inc     esi
		add     eax, ebx
___75603h:
		xor     edx, edx
		mov     dx, [edi+48h]
		cmp     esi, edx
		jge     short ___7563dh
		xor     edx, edx
		mov     ebp, [esp+4]
		mov     dx, [eax+1bh]
		mov     ecx, [eax+1dh]
		add     [ebp+0], edx
		mov     ebp, [eax]
		xor     ebx, ebx
		add     eax, ebp
___75623h:
		dec     edx
		cmp     edx, byte 0ffffffffh
		je      short ___75600h
		mov     ebp, [eax]
		add     eax, ecx
		add     ebx, ebp
		jmp     short ___75623h
___75631h:
		xor     eax, eax
		mov     edx, [esp+4]
		mov     ax, [edi+48h]
		mov     [edx], eax
___7563dh:
		mov     eax, edi
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		retn    
align 4



___7569ch:
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 18h
		mov     [esp+10h], eax
		mov     ebp, edx
		mov     edi, ebx
		mov     [esp+4], ecx
		cmp     dword [esp+28h], byte 0
		je      short ___756f3h
		push    byte 0
		mov     ecx, ___19ae07h
		mov     ebx, ___19ae04h
		mov     edx, ecx
		mov     eax, ebx
		mov     esi, [esp+14h]
		call    near ___67994h
		test    esi, esi
		jne     near ___75836h
		mov     eax, [esp+4]
		mov     edx, [___24e798h]
		mov     [edx+eax*4+4], esi
		mov     edx, [___24e79ch]
		mov     [edx+eax*4+4], esi
		jmp     near ___75836h
___756f3h:
		mov     al, [ebx+0eh]
		and     al, 10h
		and     eax, 0ffh
		mov     dl, [ebx+0eh]
		sar     eax, 2
		and     dl, 3
		and     edx, 0ffh
		or      eax, edx
		mov     [esp+14h], al
		xor     edx, edx
		test    al, 4
		setnz   al
		mov     dl, al
		mov     eax, [ebx]
		inc     edx
		add     eax, ebp
		sub     eax, edx
		mov     [esp], eax
		mov     edx, [ebx+4]
		mov     bl, [esp+14h]
		add     edx, ebp
		test    bl, 4
		setnz   al
		and     eax, 0ffh
		inc     eax
		sub     edx, eax
		mov     ebx, [edi+8]
		mov     [esp+8], edx
		lea     eax, [edx+ebx*1]
		mov     [esp+0ch], eax
		test    ebx, ebx
		jne     short ___75753h
		and     byte [esp+14h], 0fch
___75753h:
		mov     cl, [esp+14h]
		mov     esi, [edi]
		test    cl, 4
		setnz   al
		mov     ecx, esi
		test    al, al
		jne     short ___75783h
		xor     ebx, ebx
		xor     dl, dl
		test    esi, esi
		jle     short ___757adh
		mov     eax, ebp
___7576fh:
		mov     dh, [eax]
		add     dl, dh
		mov     dh, dl
		inc     eax
		xor     dh, 80h
		inc     ebx
		mov     [eax-1], dh
		cmp     ebx, ecx
		jge     short ___757adh
		jmp     short ___7576fh
___75783h:
		mov     edx, esi
		mov     eax, esi
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		xor     ecx, esi
		xor     ebx, ebx
		mov     esi, eax
		mov     eax, ebp
		test    esi, esi
		jle     short ___757adh
___7579ah:
		mov     dx, [eax]
		add     eax, byte 2
		add     edx, ecx
		inc     ebx
		mov     ecx, edx
		mov     [eax-2], dx
		cmp     ebx, esi
		jl      short ___7579ah
___757adh:
		test    byte [esp+14h], 3
		je      short ___757c8h
		mov     eax, [esp]
		mov     edx, [esp+0ch]
		cmp     eax, edx
		jl      short ___757c1h
		mov     eax, edx
___757c1h:
		mov     [esp], eax
		mov     [esp+0ch], eax
___757c8h:
		cmp     dword [esp+10h], byte 0
		jne     short ___7581ch
		mov     bh, 1
		mov     cl, [___24e9dah]
		mov     eax, [___24e798h]
		xor     edx, edx
		mov     [___24e9dah], bh
		mov     dl, [edi+0ch]
		mov     ebx, [esp+4]
		shl     edx, 0ah
		mov     [eax+ebx*4+4], edx
		mov     edx, [edi+0ah]
		mov     al, [edi+10h]
		sar     edx, 18h
		add     al, 31h
		and     eax, 0ffh
		call    near ___71ab0h
		call    near ___71b70h
		mov     edx, [___24e79ch]
		mov     [___24e9dah], cl
		mov     [edx+ebx*4+4], eax
___7581ch:
		xor     eax, eax
		mov     ecx, [esp+0ch]
		mov     al, [esp+14h]
		mov     ebx, [esp+8]
		push    eax
		mov     edx, [esp+4]
		mov     eax, ebp
		call    near ___67994h
___75836h:
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		ret     4
db	90h
___75840h:
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 38h
		mov     [esp+34h], eax
		mov     [esp+10h], edx
		add     ebx, edx
		dec     ebx
		mov     [esp], ebx
		lea     ebx, [edx+3ch]
		test    eax, eax
		je      near ___75965h
		mov     edx, 1
		mov     eax, 10000h
		call    near ___5f248h
		mov     [___19a688h], eax
		mov     eax, [esp+10h]
		mov     ax, [eax+40h]
		mov     [___24e9d4h], ax
		mov     eax, [esp+10h]
		mov     ax, [eax+42h]
		mov     edx, [esp+10h]
		mov     [___24e9ceh], ax
		xor     eax, eax
		mov     al, [edx+44h]
		mov     [___24e9b4h], eax
		xor     eax, eax
		mov     ax, [edx+46h]
		mov     [___24e9a8h], eax
		xor     eax, eax
		mov     ax, [edx+48h]
		mov     [___24e9ach], eax
		mov     ax, [edx+4ah]
		mov     [___24e9d0h], ax
		mov     ah, [___24e9d0h]
		test    ah, 1
		setnz   al
		mov     [___24e9dah], al
		mov     ax, [edx+4ch]
		mov     [___24e9d2h], ax
		mov     ax, [edx+4eh]
		mov     [___24e9cch], ax
		lea     eax, [edx+50h]
		mov     [___24e9c8h], eax
		mov     eax, [___24e9a8h]
		shl     eax, 2
		mov     edi, [edx+3ch]
		call    near ___5f26ch
		mov     [___24e9c0h], eax
		mov     eax, [___24e9a8h]
		add     eax, eax
		add     ebx, edi
		call    near ___5f26ch
		mov     ebp, [___24e9a8h]
		mov     [___24e9c4h], eax
		xor     eax, eax
		test    ebp, ebp
		jle     short ___75956h
		xor     edx, edx
		xor     edi, edi
___75923h:
		mov     ecx, [___24e9c4h]
		mov     si, [ebx+5]
		add     edi, byte 4
		mov     [ecx+edx*1], si
		mov     ecx, [___24e9c0h]
		mov     esi, [ebx]
		movzx   ebp, word [ebx+7]
		add     ebx, esi
		inc     eax
		mov     [ecx+edi*1-4], ebx
		add     ebx, ebp
		mov     ebp, [___24e9a8h]
		add     edx, byte 2
		cmp     eax, ebp
		jl      short ___75923h
___75956h:
		xor     eax, eax
		mov     [esp+4], eax
		mov     eax, ebx
		xor     ecx, ecx
		jmp     near ___759deh
___75965h:
		mov     eax, edx
		mov     esi, [edx+3ch]
		xor     eax, edx
		add     ebx, esi
		jmp     short ___7597dh
___75970h:
		xor     edx, edx
		mov     ecx, [ebx]
		mov     dx, [ebx+7]
		add     ebx, ecx
		inc     eax
		add     ebx, edx
___7597dh:
		mov     ecx, [esp+10h]
		xor     edx, edx
		mov     dx, [ecx+46h]
		cmp     eax, edx
		jl      short ___75970h
		xor     eax, eax
		mov     ax, [ecx+48h]
		mov     [esp+4], eax
		mov     eax, ebx
		xor     ecx, ecx
		jmp     short ___759deh
___7599bh:
		mov     esi, [esp+34h]
		movzx   ebp, word [eax+1bh]
		mov     edi, [eax+1dh]
		xor     edx, edx
		test    esi, esi
		je      short ___759b0h
		add     [esp+4], ebp
___759b0h:
		add     eax, [eax]
		mov     esi, edi
		imul    esi, ebp
		add     esi, eax
		mov     [esp+8], esi
		mov     esi, [esp]
		cmp     esi, [esp+8]
		jbe     short ___759cdh
		mov     esi, [esp+8]
		mov     [esp], esi
___759cdh:
		dec     ebp
		cmp     ebp, byte 0ffffffffh
		je      short ___759dbh
		mov     esi, [eax]
		add     eax, edi
		add     edx, esi
		jmp     short ___759cdh
___759dbh:
		inc     ecx
		add     eax, edx
___759deh:
		mov     esi, [esp+10h]
		xor     edx, edx
		mov     dx, [esi+48h]
		cmp     ecx, edx
		jl      short ___7599bh
		cmp     dword [esp+34h], byte 0
		je      short ___75a38h
		mov     eax, [esp+4]
		shl     eax, 2
		call    near ___5f26ch
		mov     [___24e9b0h], eax
		mov     eax, [___24e9ach]
		shl     eax, 2
		call    near ___5f26ch
		mov     [___24e9a4h], eax
		mov     eax, [___24e9ach]
		mov     ecx, 100h
		add     eax, eax
		xor     edx, edx
		call    near ___5f26ch
		mov     [___24e9b8h], eax
		mov     eax, ___24e8a4h
		call    near __STOSB
___75a38h:
		cmp     dword [esp+34h], byte 0
		je      short ___75a45h
		xor     esi, esi
		mov     [esp+28h], esi
___75a45h:
		xor     edi, edi
		mov     ebp, ebx
		mov     [esp+18h], edi
		mov     [esp+14h], edi
		mov     [esp+0ch], edi
		jmp     near ___75befh
___75a5ah:
		mov     eax, [ebp+1dh]
		mov     ebx, [esp+34h]
		mov     [esp+20h], eax
		xor     eax, eax
		xor     edx, edx
		mov     ax, [ebp+1bh]
		mov     [esp+2ch], edx
		mov     [esp+30h], eax
		test    ebx, ebx
		je      short ___75ae6h
		test    eax, eax
		jne     short ___75a98h
		mov     edi, [esp+14h]
		mov     eax, [___24e9a4h]
		add     eax, edi
		mov     [eax], edx
		mov     eax, [esp+18h]
		xor     dh, dh
		mov     [eax+___24e8a4h], dh
		jmp     short ___75ad4h
___75a98h:
		mov     eax, 0f5h
		mov     esi, [esp+14h]
		call    near ___5f26ch
		mov     edi, [___24e9a4h]
		add     edi, esi
		mov     ecx, 0f5h
		mov     esi, ebp
		mov     [edi], eax
		mov     edi, eax
		call 	__MOVS
		mov     eax, [esp+18h]
		mov     byte [eax+___24e8a4h], 1
___75ad4h:
		mov     edx, [esp+0ch]
		mov     eax, [___24e9b8h]
		add     eax, edx
		mov     edx, [esp+28h]
		mov     [eax], dx
___75ae6h:
		mov     eax, [esp+20h]
		mov     ecx, [esp+30h]
		imul    eax, ecx
		add     ebp, [ebp+0]
		lea     edx, [eax+ebp*1]
		mov     esi, [esp+34h]
		mov     [esp+1ch], edx
		test    esi, esi
		jne     short ___75b21h
		test    ecx, ecx
		setle   al
		and     eax, 0ffh
		mov     ecx, [esp+18h]
		push    eax
		mov     eax, [esp+30h]
		mov     ebx, ebp
		add     edx, eax
		mov     eax, esi
		call    near ___7569ch
___75b21h:
		mov     eax, [esp+28h]
		shl     eax, 2
		mov     [esp+24h], eax
___75b2ch:
		mov     edx, [esp+30h]
		dec     edx
		mov     [esp+30h], edx
		cmp     edx, byte 0ffffffffh
		je      near ___75bcah
		cmp     dword [esp+34h], byte 0
		je      short ___75b92h
		mov     eax, 28h
		mov     ebx, [esp+24h]
		call    near ___5f26ch
		mov     edx, eax
		mov     eax, [___24e9b0h]
		mov     ecx, 28h
		add     eax, ebx
		mov     esi, ebp
		mov     edi, edx
		mov     [eax], edx
		call 	__MOVS
		mov     ebx, ebp
		push    byte 0
		mov     edx, [esp+20h]
		mov     ecx, [esp+30h]
		mov     eax, [esp+38h]
		add     edx, ecx
		mov     ecx, [esp+2ch]
		call    near ___7569ch
___75b92h:
		mov     esi, [esp+2ch]
		mov     eax, [ebp+0]
		mov     edi, [esp+20h]
		add     esi, eax
		add     ebp, edi
		mov     eax, [esp+34h]
		mov     [esp+2ch], esi
		test    eax, eax
		je      near ___75b2ch
		mov     ebx, [esp+28h]
		mov     edx, [esp+24h]
		inc     ebx
		add     edx, byte 4
		mov     [esp+28h], ebx
		mov     [esp+24h], edx
		jmp     near ___75b2ch
___75bcah:
		mov     esi, [esp+14h]
		mov     edi, [esp+0ch]
		mov     eax, [esp+18h]
		mov     ecx, [esp+2ch]
		add     esi, byte 4
		add     edi, byte 2
		inc     eax
		add     ebp, ecx
		mov     [esp+14h], esi
		mov     [esp+0ch], edi
		mov     [esp+18h], eax
___75befh:
		mov     edx, [esp+10h]
		xor     eax, eax
		mov     edi, [esp+18h]
		mov     ax, [edx+48h]
		cmp     eax, edi
		jg      near ___75a5ah
		mov     ebp, [esp+10h]
		mov     edx, [esp]
		mov     eax, ebp
		sub     edx, ebp

	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Memory_resize
	add 	esp, 8
	pop 	ecx

		mov     eax, [esp+34h]
		test    eax, eax
		je      short ___75c27h
		call    near ___5f2b4h
		mov     eax, [___24e9b4h]
___75c27h:
		add     esp, byte 38h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
	align 	10h

___771b0h:
		call    near ___60765h
		call    near RESTORE_SOUND_DEFAULTS
;		xor     eax, eax
;		mov     al, [SOUND_DMA]
;		call    near ___7c69ch
		jmp     near ___7c6c0h
	align 	4

;___771f4h_SB16_init_cdecl:
;		push    ebx
;		push    ecx
;		push    edx
;		push    esi
;		xor     ecx, ecx
;		xor     ebx, ebx
;		xor     eax, eax
;		mov     cl, [SOUND_DMA]
;		mov     bl, [SOUND_IRQ]
;		mov     ax, [SOUND_ADDR]
;
;	push 	ecx
;	push 	ebx
;	push 	eax
;		call    near ___779f9h_SB16_setPorts_cdecl
;	add 	esp, 0ch
;
;		call    near ___779a1h_SB16_resetDSP_cdecl
;		call    near ___779a1h_SB16_resetDSP_cdecl
;		mov     ebx, 0f4240h 	;; 1000000
;		mov     eax, ebx
;		xor     ecx, ecx
;		mov     edx, ebx
;		mov     cx, [SOUND_SAMPLERATE]
;		sar     edx, 1fh
;		idiv    ecx
;		mov     ecx, eax
;		mov     edx, ebx
;		mov     eax, ebx
;		sar     edx, 1fh
;		idiv    ecx
;		mov     [SOUND_SAMPLERATE], ax
;		xor     ecx, ecx
;		mov     edx, ebx
;		mov     cx, ax
;		sar     edx, 1fh
;		mov     eax, ebx
;		idiv    ecx
;		mov     edx, 100h
;		sub     edx, eax
;		mov     ebx, 32h
;		mov     [___775e0h], dx
;		mov     edx, ecx
;		mov     eax, ecx
;		sar     edx, 1fh
;		idiv    ebx
;		mov     [___775cch], eax
;		cmp 	byte [SOUND_TYPE], 0
;		je 		___7754dh
;		mov 	eax, 1
;		mov     edx, [___775cch]
;		inc     eax
;		imul    eax, edx
;		lea     ebx, [eax*4+0]
;		sub     ebx, eax
;		add     ebx, ebx
;		xor     eax, eax
;		mov     [___775d4h], ebx
;		mov     [___775d8h], ebx
;		mov     ebx, 10000h
;		mov     al, [___688c5h]
;		mov     [___775dch], ebx
;		lea     ebx, [eax*4+0]
;		mov     cl, 1
;		sub     ebx, eax
;		mov     [StereoSound], cl
;		shl     ebx, 0dh
;		mov     ecx, 64h
;		mov     edx, ebx
;		mov     eax, ebx
;		sar     edx, 1fh
;		idiv    ecx
;		mov     [___688c8h], eax
;		mov     ecx, eax
;		shr     ecx, 8
;		mov     [___688c8h], ecx
;		push    0ffh
;		xor     ecx, ecx
;		push    byte 0
;		mov 	eax, 1
;		xor     edx, edx
;		xor     ebx, ebx
;		mov     dl, [StereoSound]
;		mov     bl, al
;		mov     eax, [___775cch]
;	push 	ecx
;	push 	ebx
;	push 	edx
;	push 	eax
;		call    near ___7c6d4h_cdecl
;	add 	esp, 18h
;
;		xor     eax, eax
;		xor     ebx, ebx
;		mov     bl, al
;		xor     eax, eax
;		mov     edx, [___775d4h]
;		mov     al, [SOUND_DMA]
;
;	push 	ecx
;	push 	ebx
;	push 	edx
;	push 	eax
;		call    near DMA_ALLOC_BUFFER
;	add 	esp, 0ch
;	pop 	ecx
;
;		mov     [___775d0h], eax
;		mov     [___775c8h], eax
;___7754dh:
;		call    near ___7792dh_setStereo_cdecl
;;		mov     eax, SOUND_ISR
;;	push 	eax
;;		call    near INSTALL_SOUND_ISR
;;	add 	esp, 4
;		mov     eax, ___77741h_cdecl
;	push 	eax
;		call    near INSTALL_AUDIO_CB_cdecl
;	add 	esp, 4
;		mov     eax, 58h
;		xor     edx, edx
;		mov     ecx, [___775d8h]
;		mov     dl, al
;		xor     eax, eax
;		mov     esi, [___775d0h]
;		mov     al, [SOUND_DMA]
;
;	push 	esi
;	push 	ecx
;	push 	edx
;	push 	eax
;	call 	START_DMA
;	add 	esp, 10h
;
;		pop     esi
;		pop     edx
;		pop     ecx
;		pop     ebx
;		retn    
	align 	10h

__GDECL(___775f1h_cdecl)
	retn
;		pushad  
;		cmp		byte [SOUND_TYPE], 0
;		je 		___7766xh
;
;		;;	Exit Auto-Initialize DMA Operation, 16-bit
;		mov     al, 0d9h			
;		push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;
;
;
;		;; 	Set digitized sound transfer Time Constant
;		mov     al, 40h
;		push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;		mov     al, [___775e0h]
;		push 	eax
;		call    near DSP_WRITE			;;	bTimeConstant
;		add 	esp, 4
;
	;; SoundBlaster 16
;	mov 	al, 41h			;;	output rate
;	push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;	mov 	al, 0ach
;	push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;	mov 	al, 44h
;	push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;	mov 	al, 42h			;;	input rate
;	push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;	mov 	al, 0ach
;	push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;	mov 	al, 44h
;	push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4


;
;		;;	Continue Auto-Initialize DMA, 16-bit
;		mov     al, 47h
;		push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;
;		;;	Turn on speaker
;		mov     al, 0d1h			
;		push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;		call    near ___77664h
;___77662h:
;		popad   
;		retn    
;___7766xh:
;		;;	Pause 8-bit DMA mode digitized sound I/O
;		mov     al, 0d0h
;		push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;
;		;; 	Set digitized sound transfer Time Constant
;		mov     al, 40h
;		push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;		mov     al, [___775e0h]			;;	bTimeConstant
;		push 	eax
;		call    near DSP_WRITE
;;		add 	esp, 4
;
;		;;	Turn on speaker
;		mov     al, 0d1h
;		push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;		call    near ___77664h
;		jmp     short ___77662h





;___77741h_cdecl:
;	push 	ebx
;	push 	esi
;	push 	edi
;	push 	ebp
;		;pushad  
;		push 	edx
;		push 	ecx
;		call    DMA_BYTES_TRANSFERED
;		pop 	ecx
;		pop 	edx
;		shr     eax, 1
;		mov     ebx, [___775d0h]
;		mov     edx, [___775cch]
;		mov     ecx, edx
;		shl     ecx, 1
;		cmp     [___775c8h], ebx
;		jne     short ___7778fh
;		cmp     eax, ecx
;		jbe     short ___777a7h
;		jmp     short ___77868h
;___7778fh:
;		add     ebx, edx
;		cmp     [___775c8h], ebx
;		jne     short ___777a3h
;		cmp     eax, edx
;		jbe     short ___777a7h
;		cmp     eax, ecx
;		ja      short ___777a7h
;		jmp     short ___77868h
;___777a3h:
;		cmp     eax, edx
;		jbe     short ___77868h
;___777a7h:
;		mov     eax, edx
;		mov     edi, [___775c8h]
;
;	push 	ecx
;	push 	edi
;	push 	edx
;	push 	eax
;		call    near ___691deh_cdecl
;	add 	esp, 0ch
;	pop 	ecx
;
;		mov     eax, [___775cch]
;		shl     eax, 1
;		shl     eax, 1
;		mov     ebx, eax
;		shl     ebx, 1
;		add     ebx, eax
;		add     ebx, [___775d0h]
;		add     [___775c8h], eax
;		cmp     [___775c8h], ebx
;		jne     short ___77868h
;		mov     eax, [___775d0h]
;		mov     [___775c8h], eax
;___77868h:
;		;popad   
;	pop 	ebp
;	pop 	edi
;	pop 	esi
;	pop 	ebx
;		retn    


SOUND_ISR:
		push    ds
		push    es
		mov     ds, [cs:___5fbc0h]
		mov     es, [cs:___5fbc0h]
		push    eax
		mov     al, 20h
		out     20h, al
		sti     
		call    near ___77664h
		pop     eax
		pop     es
		pop     ds
		iret    



;RESTORE_SOUND_DEFAULTS:
;		pushad  
;		pushfd  
;		cli     
;		call    near ___779a1h_SB16_resetDSP_cdecl
;		xor     al, al
;		call    near ___7792dh_setStereo_cdecl
;
;		;; 	Turn off speaker
;		mov     al, 0d3h				
;		push 	eax
;		call    near DSP_WRITE
;		add 	esp, 4
;
;		mov     al, [LOC_SOUND_IRQ]
;		call    near ___60356h
;		mov     edx, [___775e8h]
;		mov     ecx, [___775ech]
;		mov     eax, edx
;		or      eax, ecx
;		je      short ___77914h
;		mov 	edx, ___775e8h
;		mov     al, [LOC_SOUND_IRQ]
;		call    near SET_IRQ_ISR
;___77914h:
;		popfd   
;		popad   
;		retn    


;DSP_GET_VERSION:	;; Dosbox SB16 - 0405h
;		xor     eax, eax
;
;		;;	DSP Version
;		mov     al, 0e1h
;		push 	eax
;		call    DSP_WRITE
;		add 	esp, 4
;
;		call    DSP_READ
;		mov     ah, al
;		call    DSP_READ
;		retn    







;___779a1h_SB16_resetDSP_cdecl:
;		pushad
;		call 	DSP_RESET
;		test 	eax, eax
;		jne 	.success
;		push    byte 20h
;		call    ___58b20h
;		add     esp, byte 4
;.success:
;;		call    DSP_GET_VERSION
;;		mov     [VersionDSP], ax
;		popad 
;		retn

;___779f9h_SB16_setPorts_cdecl:
;		mov     [LOC_SOUND_ADDR], ax
;		mov     [LOC_SOUND_IRQ], bl
;		mov     [LOC_SOUND_DMA], cl
;		mov     ax, [LOC_SOUND_ADDR]
;		add     al, 4
;		mov     [A2x4h_Mixer_Chip_Register_Address_Port_WO], ax
;		inc     al
;		mov     [A2x5h_Mixer_Chip_Data_Port_RW], ax
;		inc     al
;		mov     [A2x6h_DSP_Reset_WO], ax
;		add     al, 4
;		mov     [A2xAh_DSP_Read_Data_Port_RO], ax
;		add     al, 2
;		mov     [A2xCh_DSP_Write_Command_Data_W], ax
;		mov     [A2xCh_DSP_Write_Buffer_Status_Bit_7_R], ax
;		add     al, 2
;		mov     [A2xEh_DSP_Read_Buffer_Status_Bit_7_RO], ax
;		mov     [A2xEh_DSP_Interrupt_Acknowledge], ax
;		inc     al
;		mov     [A2xFh_DSP_16Bit_Interrupt_Acknowledge], ax
;		retn    
	align 	10h

___78111h:
		retn    

___6bd2eh:
		pushad  
		mov     edi, [___68d40h]
		xor     ebx, ebx
		mov     ebp, 20000h
___6bd3ch:
		mov     eax, ebp
		imul    dword [___688c8h]
		shrd    eax, edx, 10h
		mov     ecx, eax
		mov     ebx, 0ffff0000h
___6bd4fh:
		mov     eax, ecx
		imul    ebx
		shrd    eax, edx, 10h
		stosd   
		add     ebx, 200h
		cmp     ebx, 10000h
		jl      short ___6bd4fh
		add     ebp, 20000h
		cmp     ebp, 1000000h
		jbe     short ___6bd3ch
		popad   
		retn  

___6bcf9h:
		push    ebx
		mov     ebx, [eax*4+___68b30h]
		or      ebx, ebx
		jne     short ___6bd09h
		xor     eax, eax
		jmp     short ___6bd2ch
___6bd09h:
		cmp     byte [eax+___68e94h], 0
		je      short ___6bd23h
		mov     eax, [eax*4+___68d94h]
		sub     eax, [ebx+0ch]
		neg     eax
		add     eax, [ebx+0ch]
		jmp     short ___6bd2ch
___6bd23h:
		mov     eax, [eax*4+___68d94h]
		sub     eax, [ebx]
___6bd2ch:
		pop     ebx
		retn    





section .data
___694bch:
dd	___6a550h
___68d30h:
db	0,0,0,0
___68d34h:
db	0,0,0,0
___68d38h:
db	0,0,0,0
___68d3ch:
db	0,0,0,0
___68d40h:
db	0,0,0,0
___68d44h:
db	0,0,0,0
___68d48h:
db	0,0,0,0
;___68d4ch:
db	0,0,0,0,0,0,0,0,0,8dh,40h,0
___68d58h:
db	0,0,0,0
___68d5ch:
db	0
___68d5dh:
db	0
___68d5eh:
db	0,90h
___68d60h:
db	0,0,0,0
___68d64h:
db	0,0,0,0
___68d68h:
db	0,0,0,0
___68d6ch:
db	0,0,0,0
___68d70h:
db	0,0
___68d72h:
db	0,0
___68d74h:
db	0,0,0,0
___68d78h:
db	0,0,0,0
___68d7ch:
db	0
___68d7dh:
db	0,0,0
___68d80h:
db	0,0,0,0
___68d84h:
db	0,0,0,0
___68d88h:
db	0,0,0,0
___68d8ch:
db	0,0,0,0
___68d90h:
db	0,0,0,0
___68d94h:
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
___68e14h:
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
___68e94h:
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
___68eb4h:
db	0ffh,0f3h,0e6h,0d8h,0c9h,0b9h,0a8h,96h,96h,84h,71h,5dh,48h,32h,1bh,0

__GDECL(SOUND_TYPE)
db	0
__GDECL(SOUND_ADDR)
db	0,0
__GDECL(SOUND_IRQ)
db	0
__GDECL(SOUND_DMA)
db	0
__GDECL(___688c5h)
db	64h
db 	8bh,0c0h
__GDECL(___688c8h)
db	0,0,0,0
__GDECL(SOUND_SAMPLERATE)
db	22h,56h
;;db 	44h,0ach
___688ceh:
db	0,90h
__GDECL(___688d0h)
dw	0ffffh,0ffffh,0ffffh,0ffffh,0ffffh,0ffffh,0ffffh,0ffffh
dw	0ffffh,0ffffh,0ffffh,0ffffh,0ffffh,0ffffh,0ffffh,0ffffh
dw	0ffffh,0ffffh,0ffffh,0ffffh,0ffffh,0ffffh,0ffffh,0ffffh
dw	0ffffh,0ffffh,0ffffh,0ffffh,0ffffh,0ffffh,0ffffh,0ffffh
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
___68a0ch:
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
___68a8ch:
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
___68b30h:
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
__GDECL(S3M_CALLBACK)
dd	___68d07h
___68c34h:
dd	___68d07h
___68c38h:
db	0,0,0,0
__GDECL(___68c3ch)
db	0,0,0,0
__GDECL(___68c40h)
db	0,0
__GDECL(LOC_SOUND_ADDR)
db	0,0
__GDECL(LOC_SOUND_IRQ)
db	0
__GDECL(LOC_SOUND_DMA)
db	0
__GDECL(A2x4h_Mixer_Chip_Register_Address_Port_WO)
db	0,0
__GDECL(A2x5h_Mixer_Chip_Data_Port_RW)
db	0,0
__GDECL(A2x6h_DSP_Reset_WO)
db	0,0
__GDECL(A2xAh_DSP_Read_Data_Port_RO)
db	0,0
__GDECL(A2xCh_DSP_Write_Command_Data_W) 			;; C
db	0,0
__GDECL(A2xCh_DSP_Write_Buffer_Status_Bit_7_R) 		;; 	C
db	0,0
__GDECL(A2xEh_DSP_Read_Buffer_Status_Bit_7_RO)
db	0,0
__GDECL(A2xEh_DSP_Interrupt_Acknowledge)
db	0,0
__GDECL(A2xFh_DSP_16Bit_Interrupt_Acknowledge)
db	0,0,8bh,0c0h
__GDECL(___775c8h)
db	0,0,0,0
__GDECL(___775cch)
db	0,0,0,0
__GDECL(___775d0h)
db	0,0,0,0
__GDECL(___775d4h)
db	0,0,0,0
__GDECL(___775d8h)
db	0,0,0,0
__GDECL(___775dch)
db	0,0,0,0
__GDECL(___775e0h)
db	0,0
;VersionDSP:
db	0,1
__GDECL(StereoSound)
db	0
db 	8dh,40h,0
___775e8h:
db	0,0,0,0
___775ech:
db	0,0,0,0
__GDECL(___775f0h)
db	0

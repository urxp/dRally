#include "drally.h"

void ___16e6ch(void){

/*
cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__STRCAT
	extern 	___1a1114h
	extern 	old_bpa_read
	extern 	___1a54d0h
	extern 	bpk_decode2
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___196adch
	extern 	___1a1ef8h
	extern 	itoa_watcom106
	extern 	___13094h_cdecl
	extern 	___1a01e0h

section .text

__GDECL(___16e6ch)
		push    98h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 74h
		mov     ebx, mp_res_bpk
		mov     eax, loc_menu_bpa
		mov     edx, [___1a1114h]
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    old_bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		mov     edx, [___1a1114h]
		push    edx
		push    ___1a54d0h
		mov     esi, ___1a54d0h
		call 	bpk_decode2
		add 	esp, 8
		mov     ecx, 117h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 1e9h
		add     ebx, 0d4cbh
___16ec0h:
		mov     edi, edx
___16ec2h:
		mov     al, [esi]
		or      al, al
		je      short ___16ecah
		mov     [ebx], al
___16ecah:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___16ec2h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___16ec0h
		mov     ebx, [___196adch]
		xor     ebp, ebp
		test    ebx, ebx
		jle     near ___1715fh
		mov     ecx, 1e824h
		mov     esi, 1e8f4h
		mov     edi, 1e94bh
		mov     ebx, 1e7eah
		mov     [esp+68h], ecx
		mov     [esp+6ch], esi
		mov     [esp+70h], edi
		mov     [esp+64h], ebx
___16f0eh:
		mov     eax, [___196adch]
		sub     eax, ebp
		mov     edx, [___1a1ef8h]
		dec     eax
		cmp     eax, edx
		jne     short ___16f28h
		mov     ax, 5bh
		jmp     short ___16f2eh
___16f28h:
		mov     ax, 7bh
___16f2eh:
		mov     [esp], ax
		mov     ebx, 0ah
		lea     edx, [esp+50h]
		lea     esi, [esp+50h]
		lea     eax, [ebp+1]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     esi, loc_dot
		mov     edi, esp
		mov     edx, [esp+64h]
		call 	__STRCAT
		mov     eax, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     eax, [___196adch]
		sub     eax, ebp
		mov     ebx, [___1a1ef8h]
		dec     eax
		cmp     eax, ebx
		jne     short ___16fb9h
		mov     ax, 5bh
		jmp     short ___16fbfh
___16fb9h:
		mov     ax, 7bh
___16fbfh:
		mov     [esp], ax
		mov     eax, [___196adch]
		sub     eax, ebp
		dec     eax
		imul    eax, eax, byte 6ch
		mov     esi, ___1a01e0h
		mov     edi, esp
		add     esi, eax
		mov     edx, [esp+68h]
		call 	__STRCAT
		mov     eax, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     eax, [___196adch]
		sub     eax, ebp
		mov     ecx, [___1a1ef8h]
		dec     eax
		cmp     eax, ecx
		jne     short ___1701eh
		mov     ax, 5bh
		jmp     short ___17024h
___1701eh:
		mov     ax, 7bh
___17024h:
		mov     [esp], ax
		mov     eax, [___196adch]
		sub     eax, ebp
		dec     eax
		imul    eax, eax, byte 6ch
		mov     ebx, 0ah
		lea     edx, [esp+50h]
		lea     esi, [esp+50h]
		mov     eax, [eax+___1a01e0h+44h]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     edx, [esp+6ch]
		mov     eax, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     eax, [___196adch]
		sub     eax, ebp
		mov     esi, [___1a1ef8h]
		dec     eax
		cmp     eax, esi
		jne     short ___17094h
		mov     ax, 5bh
		jmp     short ___1709ah
___17094h:
		mov     ax, 7bh
___1709ah:
		mov     [esp], ax
		mov     esi, dollar_s
		mov     edi, esp
		call 	__STRCAT
		mov     eax, [___196adch]
		sub     eax, ebp
		dec     eax
		imul    eax, eax, byte 6ch
		mov     ebx, 0ah
		lea     edx, [esp+50h]
		lea     esi, [esp+50h]
		mov     edi, esp
		mov     eax, [eax+___1a01e0h+58h]
		inc     ebp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     edx, [esp+70h]
		mov     eax, esp
		mov     ecx, [esp+64h]
		mov     esi, [esp+68h]
		mov     edi, [esp+6ch]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     eax, [esp+70h]
		mov     edx, [___196adch]
		add     ecx, 6180h
		add     esi, 6180h
		add     edi, 6180h
		mov     [esp+64h], ecx
		mov     [esp+68h], esi
		add     eax, 6180h
		mov     [esp+6ch], edi
		mov     [esp+70h], eax
		cmp     ebp, edx
		jl      near ___16f0eh
___1715fh:
		add     esp, byte 74h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
loc_menu_bpa:
	db 	"MENU.BPA",0
mp_res_bpk:
	db 	"mp-res.bpk",0,0
loc_dot:
	db 	".",0,0,0
dollar_s:
	db 	24h,0,0,0
*/
}

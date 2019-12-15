cpu 386
%include "macros.inc"

	extern 	___68d40h
	extern 	___68d48h

	extern	___68d60h
	extern	___68d64h
	extern	___68d68h
	extern	___68d6ch
	extern	___68d78h
	extern	___68d72h
	extern	___68c30h
	extern	___68c34h
	extern	___68c40h
	extern	___688cch
	extern	___68d70h
	extern	___68d74h
	extern	___688d0h
	extern	___68d94h
	extern	___68e14h
	extern	___68e94h
	extern	___68b30h
	extern	___68b10h
	extern	___68c38h
	extern	___68910h
	extern	___68a10h
	extern	___68bb0h
	extern	___68d7ch
	extern	___68990h
	extern	___68d30h
	extern	___68d84h
	extern	___68d88h
	extern	___68d8ch
	extern	___68d5ch
	extern	___68a90h
	extern	___68d38h
	extern	___68d34h
	extern	___68eb4h
	extern	___68d80h
	extern	___68d90h
	extern	___68d4ch
	extern	___68d7dh
	extern	___68c3ch
	extern	___68d5eh
	extern	___68d5dh
	extern	___68d44h

section .text

__GDECL(___691deh)
		pushad  
		mov     [___68d60h], edi
		mov     [___68d64h], edx
		mov     [___68d68h], eax
		mov     [___68d6ch], eax
		mov     dword [___68d78h], 0
___691ffh:
		cmp     word [___68d72h], byte 0
		jne     ___6923bh
		pushad  
		call    dword [___68c30h]
		call    dword [___68c34h]
		popad   
		movzx   edx, word [___68c40h]
		movzx   eax, word [___688cch]
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
		cmp     dword [___68d4ch], byte 0
		jne     ___6963eh
___69502h:
		cmp     dword [___68d90h], byte 10h
		jb      ___6961fh





		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+4], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+8], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+0ch], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+10h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+14h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+18h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+1ch], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+20h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+24h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+28h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+2ch], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+30h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+34h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+38h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+3ch], ebx
		add     edi, byte 40h
		sub     dword [___68d90h], byte 10h
		je      ___69639h
		jmp     ___69502h





___6961fh:
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi], ebx
		add     edi, byte 4
		dec     dword [___68d90h]
		jne     ___6961fh
___69639h:
		jmp     ___6a550h
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
		cmp     dword [___68d4ch], byte 0
		jne     ___69b07h
___69965h:
		cmp     dword [___68d90h], byte 10h
		jb      ___69ae2h
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi], ebx
		add     [edi+0f00h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+4], ebx
		add     [edi+0f04h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+8], ebx
		add     [edi+0f08h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+0ch], ebx
		add     [edi+0f0ch], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+10h], ebx
		add     [edi+0f10h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+14h], ebx
		add     [edi+0f14h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+18h], ebx
		add     [edi+0f18h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+1ch], ebx
		add     [edi+0f1ch], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+20h], ebx
		add     [edi+0f20h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+24h], ebx
		add     [edi+0f24h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+28h], ebx
		add     [edi+0f28h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+2ch], ebx
		add     [edi+0f2ch], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+30h], ebx
		add     [edi+0f30h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+34h], ebx
		add     [edi+0f34h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+38h], ebx
		add     [edi+0f38h], ebx
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+3ch], ebx
		add     [edi+0f3ch], ebx
		add     edi, byte 40h
		sub     dword [___68d90h], byte 10h
		je      ___69b02h
		jmp     ___69965h
___69ae2h:
		mov     al, [esi]
		add     ecx, edx
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi], ebx
		add     [edi+0f00h], ebx
		add     edi, byte 4
		dec     dword [___68d90h]
		jne     ___69ae2h
___69b02h:
		jmp     ___6a550h
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
		cmp     dword [___68d4ch], byte 0
		jne     ___6a127h
___69ea2h:
		cmp     dword [___68d90h], byte 10h
		jb      ___6a0efh
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f00h], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+4], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f04h], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+8], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f08h], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+0ch], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f0ch], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+10h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f10h], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+14h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f14h], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+18h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f18h], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+1ch], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f1ch], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+20h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f20h], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+24h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f24h], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+28h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f28h], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+2ch], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f2ch], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+30h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f30h], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+34h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f34h], ebx
		mov     al, [esi]
		add     ecx, [___68d88h]
		mov     dl, al
		mov 	ebx, [___68d40h]
		mov 	ebx, [eax*4+ebx]
		adc     esi, ebp
		add     [edi+38h], ebx
		mov 	ebx, [___68d40h]
		mov 	ebx, [edx*4+ebx]
		add     [edi+0f38h], ebx
		mov     al, [esi]
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
		je      ___6a11ch
		jmp     ___69ea2h
___6a0efh:
		mov     al, [esi]
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
		jne     ___6a0efh
___6a11ch:
		pop     dword [___68d88h]
		jmp     ___6a550h
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
		popad   
		retn    

section .data
___694bch:
	dd	___6a550h

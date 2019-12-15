cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__STRCPY
	extern 	__STRCAT
	extern 	__STRLEN
	extern 	___180104h
	extern 	fopen_
	extern 	fread_
	extern 	___19bd74h
	extern 	fclose_
	extern 	strupr_
	extern 	strcmp_
	extern 	___180108h
	extern 	___180118h
	extern 	___18011ch
	extern 	___42944h
	extern 	fseek_
	extern 	___19bd81h

section .text

__GDECL(___10240h)
		push    88h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 70h
		mov     [esp+68h], eax
		mov     [esp+64h], edx
		lea     edi, [esp+50h]
		mov     esi, edx
		call 	__STRCPY
		mov     edx, ___180104h
		mov     eax, [esp+68h]
		mov     ebx, 1
		call    near fopen_
		mov     edx, 4
		mov     edi, eax
		mov     ecx, eax
		lea     eax, [esp+60h]
		call    near fread_
		mov     ebx, 1
		mov     edx, 10efh
		mov     eax, ___19bd74h
		mov     ecx, edi
		call    near fread_
		mov     eax, edi
		call    near fclose_
		xor     edx, edx
		lea     eax, [esp+50h]
		mov     [esp+6ch], edx
		call    near strupr_
		mov     al, [esp+6ch]
		mov     ah, 3
		mul     ah
		mov     bl, al
		neg     bl
		add     bl, 75h
		jmp     short ___102eah
___102dch:
		add     [esp+esi*1+50h], bl
		lea     edx, [esi+1]
		sub     bl, 3
		mov     [esp+6ch], edx
___102eah:
		lea     edi, [esp+50h]
		mov     esi, [esp+6ch]
		call 	__STRLEN
		cmp     ecx, esi
		ja      short ___102dch
		mov     eax, [esp+60h]
		xor     edi, edi
		mov     ebp, 0ffffffffh
		mov     [esp+6ch], edi
		test    eax, eax
		jle     short ___10344h
		mov     ebx, ___19bd74h
___10318h:
		lea     edx, [esp+50h]
		mov     eax, ebx
		call    near strcmp_
		test    eax, eax
		jne     short ___1032bh
		mov     ebp, [esp+6ch]
___1032bh:
		cmp     ebp, byte 0ffffffffh
		jne     short ___10344h
		mov     ecx, [esp+6ch]
		mov     esi, [esp+60h]
		inc     ecx
		add     ebx, byte 11h
		mov     [esp+6ch], ecx
		cmp     ecx, esi
		jl      short ___10318h
___10344h:
		cmp     ebp, byte 0ffffffffh
		jne     near ___10401h
		mov     edi, esp
		mov     esi, ___180108h
		movsd   
		movsd   
		movsd   
		movsd   
		mov     esi, [esp+68h]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___180118h
		mov     edi, esp
		call 	__STRCAT
		mov     esi, [esp+64h]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___18011ch
		mov     edi, esp
		call 	__STRCAT
		mov     eax, esp
		call    near ___42944h
___10401h:
		mov     edx, ___180104h
		mov     eax, [esp+68h]
		call    near fopen_
		xor     ebx, ebx
		mov     edx, 10f3h
		mov     ecx, eax
		call    near fseek_
		xor     edx, edx
		mov     [esp+6ch], edx
		test    ebp, ebp
		jle     short ___10448h
		mov     ebx, ebp
		shl     ebx, 4
		xor     eax, eax
		add     ebx, ebp
___10430h:
		mov     edi, [esp+6ch]
		mov     esi, [eax+___19bd81h]
		add     eax, byte 11h
		inc     edi
		add     edx, esi
		mov     [esp+6ch], edi
		cmp     eax, ebx
		jl      short ___10430h
___10448h:
		mov     ebx, 1
		mov     eax, ecx
		call    near fseek_
		mov     eax, ebp
		shl     eax, 4
		mov     edx, [eax+ebp*1+___19bd81h]
		mov     eax, ecx
		call    near fclose_
		mov     eax, edx
		add     esp, byte 70h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    

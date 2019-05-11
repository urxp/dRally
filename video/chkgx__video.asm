
	extern 	__CHK
	extern 	GXType

%include 'layout.inc'

section @text

global chkgx__video
chkgx__video:
		push    1a8h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, 190h
		mov     edx, [GXType]
		mov     ecx, 190h
		mov     esi, 0c0000h
		mov     edi, esp
		push    edi
		mov     eax, ecx
		shr     ecx, 2
		rep movsd   
		mov     cl, al
		and     cl, 3
		rep movsb   
		pop     edi
		xor     eax, eax
;; to uppercase ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
___1130dh:
		mov     dl, [esp+eax*1]
		cmp     dl, 60h
		jbe     ___11322h
		cmp     dl, 84h
		jae     ___11322h
		mov     bl, dl
		sub     bl, 20h
		mov     [esp+eax*1], bl
___11322h:
		inc     eax
		cmp     eax, 190h
		jl      ___1130dh
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		xor     eax, eax
		xor     edx, edx
;; check for 'cirrus' substring ;;;;;;;;;;;;;;;;;;
___1132eh:
		cmp     byte [esp+eax*1], 43h		;; 'C'
		jne     ___1135dh
		cmp     byte [esp+eax*1+1], 49h		;; 'I'
		jne     ___1135dh
		mov     ch, [esp+eax*1+2]
		cmp     ch, 52h						;; 'R'
		jne     ___1135dh
		cmp     ch, [esp+eax*1+3]			;; 'R'
		jne     ___1135dh
		cmp     byte [esp+eax*1+4], 55h		;; 'U'
		jne     ___1135dh
		cmp     byte [esp+eax*1+5], 53h		;; 'S'
		jne     ___1135dh
		mov     edx, 2
___1135dh:
		inc     eax
		cmp     eax, 190h
		jl      short ___1132eh
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		mov     [GXType], edx
		add     esp, 190h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
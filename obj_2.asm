cpu 386
bits 16

;OBJECT#2
___80000h:
;00080000: 1e
		push    ds
;00080001: 06
		push    es
;00080002: 60
		pusha   
;00080003: b0 20
		mov     al, 20h
;00080005: e6 20
		out     20h, al
___80007h:
;00080007: 2e 8b 16 00 00
		mov     dx, [cs:0]
;0008000c: 83 c2 02
		add     dx, byte 2
;0008000f: ec
		in      al, dx
;00080010: a8 01
		test    al, 1
;00080012: 74 03
		je      short ___80017h
;00080014: e9 a0 00
		jmp     near ___800b7h
___80017h:
;00080017: 88 c3
		mov     bl, al
;00080019: 80 e3 07
		and     bl, 7
;0008001c: 80 fb 02
		cmp     bl, 2
;0008001f: 75 3b
		jne     short ___8005ch
;00080021: 2e 8b 0e 0a 00
		mov     cx, [cs:0ah]
___80026h:
;00080026: 2e 8e 06 06 00
		;mov     es, [cs:6]
		db	2eh,8eh,6,6,0
;0008002b: 2e 8b 3e 08 00
		mov     di, [cs:8]
;00080030: 53
		push    bx
;00080031: 26 8b 1d
		mov     bx, [es:di]
;00080034: 83 c7 02
		add     di, byte 2
;00080037: 26 8b 15
		mov     dx, [es:di]
;0008003a: 39 d3
		cmp     bx, dx
;0008003c: 5b
		pop     bx
;0008003d: 74 1d
		je      short ___8005ch
;0008003f: 83 c7 02
		add     di, byte 2
;00080042: 81 e2 ff 0f
		and     dx, 0fffh
;00080046: 01 d7
		add     di, dx
;00080048: 26 8a 05
		mov     al, [es:di]
;0008004b: 2e 8b 3e 08 00
		mov     di, [cs:8]
;00080050: 26 ff 45 02
		inc     word [es:di+2]
;00080054: 2e 8b 16 00 00
		mov     dx, [cs:0]
;00080059: ee
		out     dx, al
;0008005a: e2 ca
		loop    ___80026h
___8005ch:
;0008005c: 80 fb 04
		cmp     bl, 4
;0008005f: 75 34
		jne     short ___80095h
___80061h:
;00080061: 2e 8b 16 00 00
		mov     dx, [cs:0]
;00080066: ec
		in      al, dx
;00080067: 2e 8e 06 02 00
		;mov     es, [cs:2]
		db	2eh,8eh,6,2,0
;0008006c: 2e 8b 3e 04 00
		mov     di, [cs:4]
;00080071: 26 8b 0d
		mov     cx, [es:di]
;00080074: 83 c7 04
		add     di, byte 4
;00080077: 81 e1 ff 0f
		and     cx, 0fffh
;0008007b: 01 cf
		add     di, cx
;0008007d: 26 88 05
		mov     [es:di], al
;00080080: 2e 8b 3e 04 00
		mov     di, [cs:4]
;00080085: 26 ff 05
		inc     word [es:di]
;00080088: 2e 8b 16 00 00
		mov     dx, [cs:0]
;0008008d: 83 c2 05
		add     dx, byte 5
;00080090: ec
		in      al, dx
;00080091: a8 01
		test    al, 1
;00080093: 75 cc
		jne     short ___80061h
___80095h:
;00080095: 80 fb 06
		cmp     bl, 6
;00080098: 75 09
		jne     short ___800a3h
;0008009a: 2e 8b 16 00 00
		mov     dx, [cs:0]
;0008009f: 83 c2 05
		add     dx, byte 5
;000800a2: ec
		in      al, dx
___800a3h:
;000800a3: 80 fb 00
		cmp     bl, 0
;000800a6: 74 03
		je      short ___800abh
;000800a8: e9 5c ff
		jmp     near ___80007h
___800abh:
;000800ab: 2e 8b 16 00 00
		mov     dx, [cs:0]
;000800b0: 83 c2 06
		add     dx, byte 6
;000800b3: ec
		in      al, dx
;000800b4: e9 50 ff
		jmp     near ___80007h
___800b7h:
;000800b7: 61
		popa    
;000800b8: 07
		pop     es
;000800b9: 1f
		pop     ds
;000800ba: cf
		iret    
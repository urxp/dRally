cpu 386

    extern  REGS_S
    extern  REGS_S.eax
    extern  REGS_S.ebx
    extern  REGS_S.ecx
    extern  int386
    extern  REGS_S.cflag
    extern  exitWithErrMsg
    extern  REGS_S.esi
    extern  REGS_S.edi
    extern  REGS_S.edx

SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global create_MemBlock
create_MemBlock:
		push    ecx
		push    esi
		push    edi
		sub     esp, 4
		mov     ecx, eax
		mov     esi, edx
		mov     [esp], bl
		cmp     edx, 100000h
		jb      dr@5f2ffh
		or      si, 0fffh
		inc     esi
dr@5f2ffh:
;; allocate memory block ;;;;;;;;;;;;;;;;;;;;;
		mov     edx, 501h					;;
		mov     eax, esi					;;
		mov     ebx, REGS_S					;;
		shr     eax, 10h					;;
		mov     [REGS_S.eax], dx			;;
		mov     [REGS_S.ebx], ax			;;
		mov     edx, ebx					;;
		mov     eax, 31h					;;
		mov     [REGS_S.ecx], si			;;
		call    int386					    ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		cmp     dword [REGS_S.cflag], 0
		je      dr@5f341h
		push    4
		call    exitWithErrMsg
		add     esp, 4
dr@5f341h:
		xor     edx, edx
		xor     eax, eax
;; save memory block handle ;;;;;;;;;;
		mov     dx, [REGS_S.esi]	;;
		mov     ax, [REGS_S.edi]	;;
		shl     edx, 10h			;;
		add     edx, eax			;;
		xor     eax, eax			;;
		mov     [ecx+8], edx		;;
;; save linear address ;;;;;;;;;;;;;;;
;; of allocated memory block ;;;;;;;;;
		mov     ax, [REGS_S.ebx]	;;
		mov     edx, eax			;;
		xor     eax, eax			;;
		shl     edx, 10h			;;
		mov     ax, [REGS_S.ecx]	;;
		add     edx, eax			;;
		mov     [ecx+4], esi		;;
		xor     ebx, ebx			;;
		mov     [ecx], edx			;;
;; allocate descriptor ;;;;;;;;;;;;;;;
		mov     edi, 1				;;
		mov     [REGS_S.eax], bx	;;
		mov     ebx, REGS_S			;;
		mov     eax, 31h			;;
		mov     edx, ebx			;;
		mov     [REGS_S.ecx], di	;;
		call    int386			    ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		cmp     dword [REGS_S.cflag], 0
		je      dr@5f3afh
		push    8
		call    exitWithErrMsg
		add     esp, 4
dr@5f3afh:
;; save base selector ;;;;;;;;;;;;;;;;;;;;
		mov     ax, [REGS_S.eax]		;;
		mov     [ecx+0ch], ax			;;
;; set segment base address ;;;;;;;;;;;;;;
		mov     word [REGS_S.eax], 7	;;
		mov     ax, [ecx+0ch]			;;
		mov     [REGS_S.ebx], ax		;;
		mov     ax, [ecx]				;;
		mov     [REGS_S.edx], ax		;;
		mov     eax, [ecx]				;;
		mov     ebx, REGS_S				;;
		shr     eax, 10h				;;
		mov     edx, ebx				;;
		mov     [REGS_S.ecx], ax		;;
		mov     eax, 31h				;;
		call    int386				    ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		cmp     dword [REGS_S.cflag], 0
		je      dr@5f404h
		push    0ah
		call    exitWithErrMsg
		add     esp, 4
dr@5f404h:
;; set segment limit ;;;;;;;;;;;;;;;;;;;;;
		mov     edx, 8					;;
		mov     ebx, REGS_S				;;
		mov     [REGS_S.edx], si		;;
		mov     ax, [ecx+0ch]			;;
		mov     [REGS_S.eax], dx		;;
		mov     [REGS_S.ebx], ax		;;
		shr     esi, 10h				;;
		mov     eax, 31h				;;
		mov     edx, ebx				;;
		mov     [REGS_S.ecx], si		;;
		call    int386				    ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		cmp     dword [REGS_S.cflag], 0
		je      dr@5f44fh
		push    0bh
		call    exitWithErrMsg
		add     esp, 4
dr@5f44fh:
		mov     al, [esp]
		mov     [ecx+0eh], al
		test    al, al
		je      dr@5f4a4h
;; lock linear region ;;;;;;;;;;;;;;;;
		mov     ebx, 600h			;;
		mov     esi, [ecx]			;;
		mov     eax, 31h			;;
		shr     esi, 10h			;;
		mov     [REGS_S.eax], bx	;;
		mov     [REGS_S.ebx], si	;;
		mov     si, [ecx]			;;
		mov     ebx, REGS_S			;;
		mov     [REGS_S.ecx], si	;;
		mov     esi, [ecx+4]		;;
		mov     edx, ebx			;;
		shr     esi, 10h			;;
		mov     cx, [ecx+4]			;;
		mov     [REGS_S.esi], si	;;
		mov     [REGS_S.edi], cx	;;
		call    int386			    ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
dr@5f4a4h:
		add     esp, 4
		pop     edi
		pop     esi
		pop     ecx
		retn    
db	90h
free_MemBlock:
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     ecx, eax
		cmp     byte [eax+0eh], 0
		je      short dr@5f4ffh
		mov     eax, [ecx]
		shr     eax, 10h
		mov     [REGS_S.ebx], ax
		mov     ax, [ecx]
		mov     edx, 601h
		mov     [REGS_S.ecx], ax
		mov     eax, [ecx+4]
		mov     ebx, REGS_S
		shr     eax, 10h
		mov     [REGS_S.eax], dx
		mov     [REGS_S.esi], ax
		mov     ax, [ecx+4]
		mov     edx, ebx
		mov     [REGS_S.edi], ax
		mov     eax, 31h
		call    near int386
dr@5f4ffh:
		mov     ebx, 502h
		mov     ax, [ecx+8]
		mov     [REGS_S.eax], bx
		mov     [REGS_S.edi], ax
		mov     eax, [ecx+8]
		mov     ebx, REGS_S
		shr     eax, 10h
		mov     edx, ebx
		mov     [REGS_S.esi], ax
		mov     eax, 31h
		call    near int386
		cmp     dword [REGS_S.cflag], byte 0
		je      short dr@5f545h
		push    byte 5
		call    near exitWithErrMsg
		add     esp, byte 4
dr@5f545h:
		mov     esi, 1
		mov     ax, [ecx+0ch]
		mov     ebx, REGS_S
		mov     [REGS_S.ebx], ax
		mov     edx, ebx
		mov     eax, 31h
		mov     [REGS_S.eax], si
		call    near int386
		cmp     dword [REGS_S.cflag], byte 0
		je      short dr@5f57fh
		push    byte 9
		call    near exitWithErrMsg
		add     esp, byte 4
dr@5f57fh:
		mov     word [ecx+0ch], 0
		mov     dword [ecx], 0
		mov     dword [ecx+4], 0
		mov     byte [ecx+0eh], 0
		mov     dword [ecx+8], 0
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
db	8bh,0c0h
resize_MemBlock:
		push    ebx
		push    ecx
		push    esi
		push    edi
		mov     ecx, eax
		mov     esi, edx
		cmp     byte [eax+0eh], 0
		je      short dr@5f5f9h
		mov     eax, [ecx]
		shr     eax, 10h
		mov     [REGS_S.ebx], ax
		mov     ax, [ecx]
		mov     edx, 601h
		mov     [REGS_S.ecx], ax
		mov     eax, [ecx+4]
		mov     ebx, REGS_S
		shr     eax, 10h
		mov     [REGS_S.eax], dx
		mov     [REGS_S.esi], ax
		mov     ax, [ecx+4]
		mov     edx, ebx
		mov     [REGS_S.edi], ax
		mov     eax, 31h
		call    near int386
dr@5f5f9h:
		mov     ax, [ecx+8]
		mov     [REGS_S.edi], ax
		mov     eax, [ecx+8]
		mov     ebx, 503h
		shr     eax, 10h
		mov     [REGS_S.eax], bx
		mov     [REGS_S.esi], ax
		mov     eax, esi
		mov     ebx, REGS_S
		shr     eax, 10h
		mov     edx, ebx
		mov     [REGS_S.ebx], ax
		mov     eax, 31h
		mov     [REGS_S.ecx], si
		call    near int386
		cmp     dword [REGS_S.cflag], byte 0
		je      short dr@5f651h
		push    byte 6
		call    near exitWithErrMsg
		add     esp, byte 4
dr@5f651h:
		xor     eax, eax
		mov     ax, [REGS_S.esi]
		mov     edx, eax
		xor     eax, eax
		shl     edx, 10h
		mov     ax, [REGS_S.edi]
		mov     ebx, [ecx+8]
		add     eax, edx
		cmp     eax, ebx
		jne     short dr@5f68ch
		xor     eax, ebx
		mov     ax, [REGS_S.ebx]
		mov     edx, eax
		xor     eax, eax
		shl     edx, 10h
		mov     ax, [REGS_S.ecx]
		mov     edi, [ecx]
		add     eax, edx
		cmp     eax, edi
		je      short dr@5f696h
dr@5f68ch:
		push    byte 7
		call    near exitWithErrMsg
		add     esp, byte 4
dr@5f696h:
		mov     edi, 8
		mov     [ecx+4], esi
		mov     ebx, REGS_S
		mov     ax, [ecx+0ch]
		mov     [REGS_S.eax], di
		mov     [REGS_S.ebx], ax
		mov     [REGS_S.edx], si
		mov     edx, ebx
		shr     esi, 10h
		mov     eax, 31h
		mov     [REGS_S.ecx], si
		call    near int386
		cmp     dword [REGS_S.cflag], byte 0
		je      short dr@5f6e4h
		push    byte 0bh
		call    near exitWithErrMsg
		add     esp, byte 4
dr@5f6e4h:
		cmp     byte [ecx+0eh], 0
		je      short dr@5f72fh
		mov     word [REGS_S.eax], 600h
		mov     ax, [ecx]
		mov     ebx, REGS_S
		mov     [REGS_S.ecx], ax
		mov     eax, [ecx+4]
		mov     esi, [ecx]
		shr     eax, 10h
		shr     esi, 10h
		mov     [REGS_S.esi], ax
		mov     ax, [ecx+4]
		mov     edx, ebx
		mov     [REGS_S.edi], ax
		mov     eax, 31h
		mov     [REGS_S.ebx], si
		call    near int386
dr@5f72fh:
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn
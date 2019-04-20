cpu 386

    extern  memset
    extern  IsWindows

    extern  exitWithErrMsg
    extern  create_MemBlock
    extern  do_int386
    extern  dr@60030h
    extern  REGS_S
	extern  REGS_S.eax
    extern  REGS_S.ebx
    extern  SREGS_S
    extern  Mem64K_0
	extern  Mem64K_0.linear
    
SEGMENT _TEXT   PUBLIC USE32 ALIGN=4 CLASS=CODE

global dr@5eb70h
dr@5eb70h:
		push    ebx
		push    edx
		call    dr@60030h
;; clears REGS_S ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		mov     ebx, 1ch					;;
		mov     eax, REGS_S					;;
		xor     edx, edx					;;
		call    memset						;;
;; clears SREGS_S ;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		mov     ebx, 0ch					;;
		mov     eax, SREGS_S				;;
		xor     edx, edx					;;
		call    memset						;;
;; get video display combination ;;;;;;;;;;;;;
		mov     edx, 1a00h					;;
		mov     eax, 10h					;;
		mov     [REGS_S.eax], dx			;;
		call    do_int386					;;
		cmp     byte [REGS_S.eax], 1ah		;;
		jne     .no_vga						;;
;; checks for VGA ;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		mov     dl, [REGS_S.ebx]			;;
		cmp     dl, 6						;;
		jbe     .no_vga						;;
		cmp     dl, 9						;;
		jb      .@2							;;		
		cmp     dl, 0ch						;;
		ja      .@2							;;
;; exit with error message ;;;;;;;;;;;;;;;;;;;
.no_vga:									;;
		push    10h							;;
		call    exitWithErrMsg					;;
		add     esp, 4						;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.@2:
;; allocate and zero-memset 64k of memory ;;;;
		mov     edx, 10000h					;;
		mov     eax, Mem64K_0				;;
		xor     ebx, ebx					;;
		call    create_MemBlock				;;
		mov     ebx, 10000h					;;
		mov     eax, [Mem64K_0.linear]		;;
		xor     edx, edx					;;
		call    memset						;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		xor     bh, bh
		mov     [IsWindows], bh
		pop     edx
		pop     ebx
		retn
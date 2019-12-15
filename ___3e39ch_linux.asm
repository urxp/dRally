cpu 386
%include "macros.inc"

	extern	fopen_
	extern	fseek
    extern  ftell
	extern	fclose

    extern  printf_

section .text

__GDECL(GET_FILE_SIZE)

        push    ecx
        push    edx
        push    ebx

    jmp     .around
.fstring:   
db  "[dRally] Checking size of %s",0ah,0
.around:
    pushad
    push    eax
    push    .fstring
    call    printf_
    add     esp, 8
    popad


        ;push    mode
        ;push    eax
        mov     edx, mode
        call    fopen_
        ;add     esp, 8
        test    eax, eax
        je      .failed
        push    eax
        push    dword 2     ;; SEEK_END
        push    dword 0
        push    eax
        call    fseek
        add     esp, 0ch
        call    ftell
        mov     ebx, eax
        call    fclose
        add     esp, 4
        mov     eax, ebx
.failed:
        pop     ebx
        pop     edx
        pop     ecx
		retn    


section .data
mode:
db  "rb",0

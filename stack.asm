cpu 386

group DGROUP _DATA _BSS STACK

section _DATA   public use32 align=4 class=DATA
section _BSS    public use32 align=2 class=BSS
section STACK  stack use32 align=16 class=STACK
;    resb    2000h

cpu 386

SEGMENT _BSS    PUBLIC USE32 ALIGN=4 CLASS=BSS
;global ___nheap_clean
;___nheap_clean:
;    resb    1
global ___fheap_clean
___fheap_clean:
    resb    1

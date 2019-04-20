cpu 386

    extern  Saved_ds   
    extern  dr@775b2h 
    extern  dr@77664h

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global dr@7786ah
dr@7786ah:
		push    ds
		push    es
		mov     ds, [cs:Saved_ds]
		mov     es, [cs:Saved_ds]
		push    eax
		mov     al, 20h
		cmp     byte [dr@775b2h], 7
		jbe     short dr@7788ah
		out     0a0h, al
dr@7788ah:
		out     20h, al
		sti     
		call    near dr@77664h
		pop     eax
		pop     es
		pop     ds
		iret
cpu 386
%include "macros.inc"

	extern	GET_IRQ_ISR
	extern	SET_IRQ_ISR
	extern	ENABLE_IRQ
	extern	___5fff2h
	extern	___6000fh
	extern	___5fbc0h
	extern 	VRETRACE_WAIT_FOR_START
	extern 	VRETRACE_WAIT_IF_INACTIVE
	extern 	GET_VRETRACE_INTERVAL
	extern 	TIMER_SET_TIMER
	extern 	TIMER_SET_INTERVAL
	extern 	IRQ0_TimerISR

section .text

__GDECL(___60466h)
		pushad  
		push    eax
		push 	edx
		call    ___60555h
		mov     al, 0
		mov 	edx, ___60420h
		call    GET_IRQ_ISR
		
		mov     al, 0

	push 	cs
	push 	IRQ0_TimerISR
	mov 	edx, esp
		call    SET_IRQ_ISR
	add 	esp, 8

		pop 	edx
		pop     eax
		call    ___605deh
		mov     al, 0
		call    ENABLE_IRQ
		mov     eax, ___6052fh
		call    ___5fff2h
		popad   
		retn    
___6052fh:
		pushad  
		mov     eax, ___6052fh
		call    ___6000fh
		call    ___60719h
		call    ___6073fh
		call    ___60555h

		xor 	eax, eax
		call 	TIMER_SET_INTERVAL

		;mov     al, 36h
		;out     43h, al
		;xor     al, al
		;out     40h, al
		;out     40h, al
		popad   
		retn    
___60555h:
		mov     edx, [___60420h]
		mov     ecx, [___60424h]
		mov     eax, edx
		or      eax, ecx
		je      ___60582h
		mov     al, 0
	mov 	edx, ___60420h
		call    SET_IRQ_ISR
		mov     dword [___60420h], 0
		mov     dword [___60424h], 0
___60582h:
		retn    
__GDECL(___605deh)
		pushad  
		mov     byte [___60441h], 0
		cmp     eax, byte 0ffffffffh
		je      ___605f8h
		mov     [___60458h], eax
		mov     [___6045ch], edx
		jmp     ___60603h
___605f8h:
		mov     eax, [___60458h]
		mov     edx, [___6045ch]
___60603h:
		test    edx, edx
		jne     ___60634h
		mov     ebx, eax
		xor     edx, edx
		mov     eax, 123333h
		div     ebx
		mov     [___60434h], ax
		;mov     ecx, eax
		;mov     al, 36h
		;out     43h, al
		;mov     al, cl
		;out     40h, al
		;mov     al, ch
		;out     40h, al
		call 	TIMER_SET_INTERVAL
		jmp     ___606c8h
___60634h:
		call 	GET_VRETRACE_INTERVAL
		mov		[___60434h], ax
		call 	VRETRACE_WAIT_FOR_START
		xor 	ecx, ecx
		mov     cx, [___60434h]
		sub     cx, [___60444h]
		mov 	eax, ecx
		call 	TIMER_SET_TIMER
___606c8h:
		popad   
		retn      
__GDECL(___606dfh)
		pushad  
		movzx   eax, word [___60434h]
		mov     [___60442h], ax
		imul    eax, eax, 0aaaah
		shr     eax, 10h
		mov     [___60434h], ax
		mov     byte [___60441h], 1
		popad   
		retn    
__GDECL(___60705h)
		mov     byte [___60446h], 0
		mov     [___6044ch], eax
		mov     byte [___60446h], 1
		retn    
__GDECL(___60719h)
		mov     byte [___60446h], 0
		mov     dword [___6044ch], 0
		retn     
___6073fh:
		mov     byte [___60447h], 0
		mov     dword [___60450h], 0
		retn    
__GDECL(___60751h)
		mov     byte [___60448h], 0
		mov     [___60454h], eax
		mov     byte [___60448h], 1
		retn    
__GDECL(___60765h)
		mov     byte [___60448h], 0
		mov     dword [___60454h], 0
		retn    

section .data

__GDECL(___60420h)
db	0,0,0,0
___60424h:
db	0,0,0,0
;___60428h:
db	0,0,0,0
;___6042ch:
db	0,0,0,0
;___60430h:
db	0,0
;___60432h:
db	0,0
__GDECL(___60434h)
db	0,0
__GDECL(INT8_FRAME_COUNTER)
db	0,0,0,0
__GDECL(___6043ah)
db	0,0,0,0
__GDECL(___6043eh)
db	0
__GDECL(___6043fh)
db	0,0
__GDECL(___60441h)
db	0
___60442h:
db	0,0
__GDECL(___60444h)
db	0,3
__GDECL(___60446h)
db	0
__GDECL(___60447h)
db	0
__GDECL(___60448h)
db	0,8dh,40h,0
__GDECL(___6044ch)
db	0,0,0,0
__GDECL(___60450h)
db	0,0,0,0
__GDECL(___60454h)
db	0,0,0,0
__GDECL(___60458h)
db	0,0,0,0
__GDECL(___6045ch)
db	0,0,0,0
___60460h:
db	0,0,0,0
__GDECL(___60464h)
db	1,0

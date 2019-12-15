cpu 386
%include "macros.inc"

    extern  A2x6h_DSP_Reset_WO
    extern  A2xEh_DSP_Read_Buffer_Status_Bit_7_RO
    extern  A2xAh_DSP_Read_Data_Port_RO
	extern 	A2xCh_DSP_Write_Buffer_Status_Bit_7_R
	extern 	A2xCh_DSP_Write_Command_Data_W

section .text

__GDECL(DSP_RESET)
		push 	ecx
		push 	edx  
		mov     dx, [A2x6h_DSP_Reset_WO]
		mov		al, 1		; Write a 1 to the DSP reset port
		out		dx, ax
		sub		al, al 		; Delay loop
.delay:
		dec		al
		jne		.delay
		out 	dx, al 		; Write a 0 to the DSP reset port

		mov 	ecx, 10000h	; Maximum of 65536 tries
.empty:
		mov		dx, [A2xEh_DSP_Read_Buffer_Status_Bit_7_RO]
							; Read-Buffer Status port, 2xEh
		in 		al, dx 		; Read Read-Buffer Status port
		or		al, al 		; Data available?
		jns 	.next_attempt 
							; Bit 7 clear, try again
		mov  	dx, [A2xAh_DSP_Read_Data_Port_RO]
		in 		al, dx 		; Read in-bound DSP data
		cmp 	al, 0aah 	; Receive success code, 0AAh?
		mov 	eax, 1
		je 		.ok
.next_attempt:
		loop 	.empty ; Try again
		xor 	eax, eax
.ok:
		pop 	edx
		pop 	ecx
		retn

__GDECL(DSP_READ)
;		push    edx
;		push    eax
;		push    ecx
;		mov     dx, [A2xEh_DSP_Read_Buffer_Status_Bit_7_RO]
;
;
;		mov     ecx, 400h
;___77983h:
;		dec     ecx
;		je      short ___77997h
;		in      al, dx
;		or      al, al
;		jns     short ___77983h
;		pop     ecx
;		pop     eax
;		mov     dx, [A2xAh_DSP_Read_Data_Port_RO]
;		in      al, dx
;		pop     edx
;		retn    
;___77997h:
;		push    byte 21h
;		call    near ___58b20h
;		add     esp, byte 4
	push 	edx
	mov     dx, [A2xEh_DSP_Read_Buffer_Status_Bit_7_RO]
.busy:
	in 		al, dx
	or 		al, al
	jns 	.busy
	mov     dx, [A2xAh_DSP_Read_Data_Port_RO]
	in      al, dx
	pop 	edx
	retn

__GDECL(DSP_WRITE)
		push    eax
		push    edx
		mov     dx, [A2xCh_DSP_Write_Buffer_Status_Bit_7_R]
		mov     ah, al
.busy:
		in      al, dx
		or      al, al
		js      .busy
		mov     dx, [A2xCh_DSP_Write_Command_Data_W]
		mov     al, ah
		out     dx, al
		pop     edx
		pop     eax
		retn    

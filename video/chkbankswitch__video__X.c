typedef unsigned char 	byte;
typedef unsigned long 	dword;

	void setbank__video(dword);
	void chkgx__video(void);

dword chkbankswitch__video(void){

	dword 	eax;

//		push    4
//		call    __CHK
//		call    __CEXT_F(chkgx__video)
	chkgx__video();
//		xor     eax, eax
	eax = 0;
//		call    setbank__video
	setbank__video(eax);
//		mov     eax, 0a0000h
	eax = 0xa0000;
//		mov     byte [eax], 0
	*(byte *)eax = 0;
//		mov     eax, 1
	eax = 1;
//		call    setbank__video
	setbank__video(eax);
//		mov     eax, 0a0000h
	eax = 0xa0000;
//		mov     byte [eax], 0
	*(byte *)eax = 0;
//		xor     eax, eax
	eax = 0;
//		call    setbank__video
	setbank__video(eax);
//		mov     eax, 0a0000h
	eax = 0xa0000;
//		mov     byte [eax], 1
	*(byte *)eax = 1;
//		mov     eax, 1
	eax = 1;
//		call    setbank__video
	setbank__video(eax);
//		mov     eax, 0a0000h
	eax = 0xa0000;
//		cmp     byte [eax], 1
//		jne     ___12c91h
	if(*(byte *)eax != 1) goto ___12c91h;
//		mov     eax, 1
	eax = 1;
//		retn
	return eax;    
___12c91h:
//		xor     eax, eax
	eax = 0;
//		call    setbank__video
	setbank__video(eax);
//		mov     eax, 0a0000h
	eax = 0xa0000;
//		mov     byte [eax], 0
	*(byte *)eax = 0;
//		mov     eax, 1
	eax = 1;
//		call    setbank__video
	setbank__video(eax);
//		mov     eax, 0a0000h
	eax = 0xa0000;
//		mov     byte [eax], 0
	*(byte *)eax = 0;
//		xor     eax, eax
	eax = 0;
//		retn
	return eax;
}

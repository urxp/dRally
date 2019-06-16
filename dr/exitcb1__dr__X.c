typedef unsigned long	dword;

	void freeAllocInfoTable(void);
	void ___623d4h(void);
	void restore__keyboard(void);
	int printf__clib3r(const char * format, ...);
	void exit__clib3r(int status);
	void setmode3h__video(void);

	extern const char ___183e84h[];
	extern dword ___19bd60h;

void exitcb1__dr(void){

	dword 	eax, edx;

//		push    14h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		call    __CEXT_F(restore__keyboard)
	restore__keyboard();
//		call    __CEXT_F(freeAllocInfoTable)
	freeAllocInfoTable();
//		call    __CEXT_F(setmode3h__video)
	setmode3h__video();
//		push    __CEXT_V(___183e84h)
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___183e84h);
//		mov     edx, [__CEXT_V(___19bd60h)]
	edx = ___19bd60h;
//		add     esp, 4
//		test    edx, edx
//		je      ___4932ch
	if(edx == 0) goto ___4932ch;
//		call    __CEXT_F(___623d4h)
	___623d4h();
___4932ch:
//		mov     eax, 70h
	eax = 0x70;
//		call    __CEXT_F(exit__clib3r)
	exit__clib3r(eax);
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
}
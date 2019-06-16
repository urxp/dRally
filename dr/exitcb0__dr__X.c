typedef unsigned long 	dword;

	// "DEATH RALLY Exit: CTRL+ALT+DEL pressed!\n"
	extern const char ___1800c4h[];

	void restore__keyboard(void);
	void setmode3h__video(void);

	int printf__clib3r(const char * format, ...);
	void exit__clib3r(int status);

void exitcb0(void){

	dword 	eax;

//		push    14h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		call    __CEXT_F(restore__keyboard)
	restore__keyboard();
//		call    __CEXT_F(setmode3h__video)
	setmode3h__video();
//		push    __CEXT_V(___1800c4h)
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___1800c4h);
//		add     esp, 4
//		mov     eax, 70h
	eax = 0x70;
//		call    __CEXT_F(exit__clib3r)
	exit__clib3r(eax);
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn
}

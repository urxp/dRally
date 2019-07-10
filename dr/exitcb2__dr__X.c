typedef unsigned long	dword;

	void freeAllocInfoTable(void);
	void ___623d4h(void);
	void restore__keyboard(void);
	int printf__clib3r(const char * format, ...);
	void exit__clib3r(int status);
	void setmode3h__video(void);
    void writeConfig__dr(void);
    void unloadMenuBPK(void);
    void unloadOtherBPK(void);
    void unloadShopBPK(void);
    void unloadAddBPK(void);
    void ___64a28h(void);

	// "DEATH RALLY Exit: CTRL+ALT+DEL pressed.\n"
    extern const char ___1826f4h[];
	extern dword NetworkConnectionEstablished;

void exitcb2__dr(void){

	dword	eax;

//		push    14h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		call    __CEXT_F(writeConfig__dr)
	writeConfig__dr();
//		call    __CEXT_F(unloadMenuBPK)
	unloadMenuBPK();
//		call    __CEXT_F(unloadOtherBPK)
	unloadOtherBPK();
//		call    __CEXT_F(unloadShopBPK)
	unloadShopBPK();
//		call    __CEXT_F(unloadAddBPK)
	unloadAddBPK();
//		call    __CEXT_F(___64a28h)
	___64a28h();
//		call    __CEXT_F(freeAllocInfoTable)
	freeAllocInfoTable();
//		call    __CEXT_F(restore__keyboard)
	restore__keyboard();
//		cmp     dword [__CEXT_V(NetworkConnectionEstablished)], 0
//		je      ___3ab3bh
	if(NetworkConnectionEstablished == 0) goto ___3ab3bh;
//		call    __CEXT_F(___623d4h)
	___623d4h();
___3ab3bh:
//		call    __CEXT_F(setmode3h__video)
	setmode3h__video();
//		push    __CEXT_V(___1826f4h)
//		call    __CEXT_F(printf__clib3r)
	printf__clib3r(___1826f4h);
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

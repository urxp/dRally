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

	writeConfig__dr();
	unloadMenuBPK();
	unloadOtherBPK();
	unloadShopBPK();
	unloadAddBPK();
	___64a28h();
	freeAllocInfoTable();
	restore__keyboard();

	if(NetworkConnectionEstablished) ___623d4h();

	setmode3h__video();
	printf__clib3r(___1826f4h);
	exit__clib3r(0x70); 
}

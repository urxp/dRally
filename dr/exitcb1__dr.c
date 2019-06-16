typedef unsigned long	dword;

	void freeAllocInfoTable(void);
	void ___623d4h(void);
	void restore__keyboard(void);
	int printf__clib3r(const char * format, ...);
	void exit__clib3r(int status);
	void setmode3h__video(void);

	// "DEATH RALLY Exit: CTRL+ALT+DEL pressed!\n"
	extern const char ___183e84h[];

	extern dword ___19bd60h;

void exitcb1__dr(void){

	restore__keyboard();
	freeAllocInfoTable();
	setmode3h__video();
	printf__clib3r(___183e84h);

	if(___19bd60h) ___623d4h();

	exit__clib3r(0x70);
}

typedef unsigned long	dword;

	void freeAllocInfoTable(void);
	void ___623d4h(void);
	void restore__keyboard(void);
	int printf__clib3r(const char * format, ...);
	void exit__clib3r(int status);
	void setmode3h__video(void);
	void writeConfig__dr(void);
	void ___12200h(void);
	void ___12a54h(void);
	void ___24ec0h(void);
	void ___2fc50h(void);
	void ___64a28h(void);

	// "DEATH RALLY Exit: CTRL+ALT+DEL pressed.\n"
	extern const char ___1826f4h[];
	extern dword ___19bd60h;

void exitcb2__dr(void){

	writeConfig__dr();
	___12200h();
	___12a54h();
	___24ec0h();
	___2fc50h();
	___64a28h();
	freeAllocInfoTable();
	restore__keyboard();

	if(___19bd60h) ___623d4h();

	setmode3h__video();
	printf__clib3r(___1826f4h);
	exit__clib3r(0x70); 
}

	// "DEATH RALLY Exit: CTRL+ALT+DEL pressed!\n"
	extern const char ___1800c4h[];

	void restore__keyboard(void);
	void setmode3h__video(void);

	int printf__clib3r(const char * format, ...);
	void exit__clib3r(int status);

void exitcb0(void){

	restore__keyboard();
	setmode3h__video();
	printf__clib3r(___1800c4h);
	exit__clib3r(0x70);
}

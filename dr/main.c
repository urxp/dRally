typedef unsigned char   byte;
typedef unsigned long   dword;

    void exitcb0(void);
    extern int CLArgc;
    extern const char * CLArgv[];
    void welcome__dr(void);
    void ___5eb70h(void);
    extern byte ___5ff98h;
    extern dword ___19bd4ch;
    
    extern void (*ExitCB)(void);
    void install__keyboard(void);
    void startup__dr(void);
    void restore__keyboard(void);
    extern dword ___19bd60h;
    void ___623d4h(void);
    void ___5ec04h(void);
    void restrdos__dr(void);
    extern const char string__dr_bin[];
    extern const char string__MENU_BPA[];
    void read__bpa(const char *, void *, const char *);

    void install__timer(dword, dword);
    #pragma aux install__timer parm [eax][ebx]

int main(int argc, const char * argv[]){

	CLArgc = argc;

    for(argc=0;argc<10;argc++) CLArgv[argc] = argv[argc];

	welcome__dr();
	___5eb70h();

	if(___19bd4ch){

        ___5ff98h = 1;
        install__timer(0x46, 0);
    }
    else {
        install__timer(0x46, 1);
    }

	
	ExitCB = exitcb0;
	install__keyboard();
	startup__dr();
	restore__keyboard();

	if(___19bd60h) ___623d4h();

	___5ec04h();
	restrdos__dr();
	read__bpa(string__MENU_BPA, (void *)0xb8000, string__dr_bin);

	return 0;
}

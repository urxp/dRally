 typedef unsigned char 	byte;
 typedef unsigned long 	dword;

    // "\nDeath Rally *** Full Version 1.1\nCopyright (c) 1995, 1996 Remedy Entertainment, Ltd.\n"
	extern const char ___180004h[];

    // "Use \"/W\" parameter, if you are running under Windows 95 shell.\n"
	extern const char ___180084h[];

    // "Windows 95 detected.\n"
	extern const char ___18006ch[];

	extern const char ___18005ch[];       // "\n"
	extern const char  ___180060h[];       // "/w"
	extern const char string__WINDIR[];   // "WINDIR"

	extern char * ENV_WINDIR;
	extern dword ___19bd4ch;

	char * getenv__clib3r(const char * name);
    int chkarg__dr(const char * s);
	int printf__clib3r(const char * format, ...);

void welcome__dr(void){

	printf__clib3r(___180004h);
	printf__clib3r(___18005ch);

	if(chkarg__dr(___180060h)) ___19bd4ch = 1;
 
	if((ENV_WINDIR = getenv__clib3r(string__WINDIR))){

        printf__clib3r(___18006ch);
        ___19bd4ch = 1;
    }
    else {

        printf__clib3r(___180084h);
    }
}

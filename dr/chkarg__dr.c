    extern int CLArgc;
    extern const char * CLArgv[];

    int stricmp__clib3r(const char *, const char *);

int chkarg__dr(const char * s){

    int n = CLArgc;

    while(--n&&stricmp__clib3r(s, CLArgv[n]));

    return n;
}

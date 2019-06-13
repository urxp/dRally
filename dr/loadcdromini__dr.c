typedef unsigned short  word;
typedef unsigned long   dword;

    // "Error reading CDROM.INI file!\n"
    extern const char ___182bd0h[];

    extern const char ___182bcch[];         // "\"
    extern const char ___182bc8h[];         // "%s"
    extern const char rb_m[];               // "rb"
    extern const char string__CDROM_INI[];  // "CDROM.INI"
    
    extern char cdrom_ini[];
    
    void ___5ec04h(void);
    void restore__keyboard(void);
    int printf__clib3r(const char * format, ...);
    void exit__clib3r(int status);

    char * strcpy__clib3r(char * dest, const char * src);
    dword strlen__clib3r(const char * s);

    dword fopen__clib3r(const char * pathname, const char * mode);
    int fclose__clib3r(dword stream);
    int fscanf__clib3r(dword stream, const char * format, ...);

void loadcdromini__dr(void){

    dword   fd, n;
    
    fd = fopen__clib3r(string__CDROM_INI, rb_m);

	if(fd == 0){

        printf__clib3r(___182bd0h);
        restore__keyboard();
        ___5ec04h();
        exit__clib3r(0x70);
    }

	fscanf__clib3r(fd, ___182bc8h, cdrom_ini);
	fclose__clib3r(fd);

    for(n=0;cdrom_ini[n];) if(*(word *)(&cdrom_ini[n++]) == '\\') return;

    strcpy__clib3r(&cdrom_ini[n], ___182bcch);
}

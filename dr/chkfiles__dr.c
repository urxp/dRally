typedef unsigned char   byte;
typedef unsigned long   dword;

#pragma pack(1)
typedef struct {
	char 	EntryName[13];
	dword 	EntrySize;
} FileEntry;

	// "\nDEATH RALLY ERROR: File %s is not found!\n"
    extern const char ___182a30h[];

	// "\nDEATH RALLY ERROR: File %s is not in original form!\n"
    extern const char ___182aach[];

	// "\nDEATH RALLY ERROR: File %s is not in original form!\n"
    extern const char ___182b34h[];

	// "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
    extern const char ___182a5ch[];

	// "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
    extern const char ___182ae4h[];

	// "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
    extern const char ___182b6ch[];

    extern FileEntry drfiles_list[];
    extern FileEntry animfiles_list[];

    extern char cdrom_ini[];
    extern char ___180130h[];
    extern byte CDPath;

    dword getFileSize__dr(const char *);
    void ___5ec04h(void);
    void restore__keyboard(void);
    int printf__clib3r(const char * format, ...);
    void exit__clib3r(int status);

	char * strcpy__clib3r(char * dest, const char * src);

void chkfiles__dr(void){

    dword       n;
    byte        Buffer[0x100];
    FileEntry * entry;

    entry = drfiles_list + 14;

    while(entry-- != drfiles_list){

        n = getFileSize__dr(entry->EntryName);
  
        if(n < 1){

            printf__clib3r(___182a30h, entry->EntryName);
            printf__clib3r(___182a5ch);
            restore__keyboard();
            ___5ec04h();
            exit__clib3r(0x70);
        }

        if(n != entry->EntrySize){

            printf__clib3r(___182aach, entry->EntryName);
            printf__clib3r(___182ae4h);
            restore__keyboard();
            ___5ec04h();
            exit__clib3r(0x70);
        }
    }

    n = 0;
    CDPath = 2;

    strcpy__clib3r(&Buffer[n], cdrom_ini);
	while(Buffer[n]) n++;
	strcpy__clib3r(&Buffer[n], animfiles_list->EntryName);

    if(getFileSize__dr(Buffer) < 1) CDPath = 1;

    entry = animfiles_list + 3;

    while(entry-- != animfiles_list){
        
        n = 0;
        Buffer[0] = ___180130h[0];
        
        if(CDPath == 2){

            while(Buffer[n]) n++;
	        strcpy__clib3r(&Buffer[n], cdrom_ini);
        }

        while(Buffer[n]) n++;
	    strcpy__clib3r(&Buffer[n], entry->EntryName);

        if((n = getFileSize__dr(Buffer))&&(n != entry->EntrySize)){
        
            printf__clib3r(___182b34h, entry->EntryName);
            printf__clib3r(___182b6ch);
            restore__keyboard();
            ___5ec04h();
            exit__clib3r(0x70);
        }
    }
}

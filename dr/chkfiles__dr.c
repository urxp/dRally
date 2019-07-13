#include "x86.h"

#pragma pack(1)

typedef struct {
	char 	EntryName[13];
	dword 	EntrySize;
} FileEntry;

	// ""
	extern const char ___180130h[];

	// "\nDEATH RALLY ERROR: File %s is not found!\n"
	extern const char ___182a30h[];

	// "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
	extern const char ___182a5ch[];

	// "\nDEATH RALLY ERROR: File %s is not in original form!\n"
	extern const char ___182aach[];

	// "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
	extern const char ___182ae4h[];

	// "\nDEATH RALLY ERROR: File %s is not in original form!\n"
	extern const char ___182b34h[];

	// "Please consult DRHELP.EXE for more information on how to resolve this problem.\n"
	extern const char ___182b6ch[];

	extern byte CDPath;
	extern byte cdrom_ini[];
	extern FileEntry animfiles_list[];
	extern FileEntry drfiles_list[];

	int getFileSize__dr(const char *);
	void freeAllocInfoTable(void);
    int printf__clib3r(const char * format, ...);
    void exit__clib3r(int status);
    void restore__keyboard(void);

	char * strcpy__clib3r(char * dest, const char * src);


// ~3e27dh (-4 labels)
void chkfiles__dr(void){

	dword 	n;
	char * 	p;
	int 	s;
	byte 	Buffer[0x100];


	n = -1;
	while(++n < 0xe){

		s = getFileSize__dr(drfiles_list[n].EntryName);

		if(s < 1){

			printf__clib3r(___182a30h, drfiles_list[n].EntryName);
			printf__clib3r(___182a5ch);

			restore__keyboard();
			freeAllocInfoTable();
			exit__clib3r(0x70);
		}

		if(s != drfiles_list[n].EntrySize){

			printf__clib3r(___182aach, drfiles_list[n].EntryName);
			printf__clib3r(___182ae4h);

			restore__keyboard();
			freeAllocInfoTable();
			exit__clib3r(0x70);
		}
	}

	p = Buffer;
	CDPath = 2;

	strcpy__clib3r(p, cdrom_ini);
	while(p[0]&&p++);
	strcpy__clib3r(p, animfiles_list[0].EntryName);

	if(getFileSize__dr(Buffer) < 1) CDPath = 1;

	n = -1;
	while(++n < 3){

		p = Buffer;
		p[0] = ___180130h[0];

		if(CDPath == 2){

			while(p[0]&&p++);
			strcpy__clib3r(p, cdrom_ini);
		}

		while(p[0]&&p++);
		strcpy__clib3r(p, animfiles_list[n].EntryName);

		s = getFileSize__dr(Buffer);

		if((s > 0)&&(s != animfiles_list[n].EntrySize)){

			printf__clib3r(___182b34h, animfiles_list[n].EntryName);
			printf__clib3r(___182b6ch);

			restore__keyboard();
			freeAllocInfoTable();
			exit__clib3r(0x70);
		}
	}
}

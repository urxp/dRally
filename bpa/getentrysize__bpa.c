typedef unsigned char 	byte;
typedef unsigned short	word;
typedef unsigned long   dword;

#pragma pack(1)
typedef struct {
	char 	EntryName[13];
	dword 	EntrySize;
} BPAHeaderEntry;


    extern  dword fread__clib3r(void *, dword, dword, dword);
    extern  dword strupr__clib3r(char *);
    extern  BPAHeaderEntry TmpBPAHeader[];
    extern  dword strcmp__clib3r(const char *, const char *);
    extern  char ___180108h[];
    extern  char ___180118h[];
    extern  char ___18011ch[];
    extern  void exitErrorMsg__dr(char *);
    extern 	char rb_m_0[];
    extern  dword fopen__clib3r(const char *, const char *);
    extern  dword fseek__clib3r(dword, dword, dword);
    extern  void fclose__clib3r(dword);

	extern 	void strcpy__clib3r(char *, const char *);
	extern	dword strlen__clib3r(const char *);

dword getentrysize__bpa(const char * bpa, const char * elm){

	dword 	fd, n;
	char 	Buffer[0x50] = { 0 };
	char *	BufferEnd;
	dword 	EntryNumber;
	char 	EntryName[0x10] = { 0 };

	strcpy__clib3r(EntryName, elm);
	fd = fopen__clib3r(bpa, rb_m_0);
	fread__clib3r(&EntryNumber, sizeof(dword), 1, fd);
	fread__clib3r(TmpBPAHeader, sizeof(BPAHeaderEntry), 255, fd);
	fclose__clib3r(fd);
	
	strupr__clib3r(EntryName);

	// encode EntryName to search ...
	for(n=-1;EntryName[++n];EntryName[n]+=(0x75-3*n));

	while(EntryNumber--){

		if(EntryNumber == -1){
			BufferEnd = Buffer;
			while(*BufferEnd) BufferEnd++;
			strcpy__clib3r(BufferEnd, ___180108h);
			while(*BufferEnd) BufferEnd++;
			strcpy__clib3r(BufferEnd, bpa);
			while(*BufferEnd) BufferEnd++;
			strcpy__clib3r(BufferEnd, ___180118h);
			while(*BufferEnd) BufferEnd++;
			strcpy__clib3r(BufferEnd, elm);
			while(*BufferEnd) BufferEnd++;
			strcpy__clib3r(BufferEnd, ___18011ch);
			exitErrorMsg__dr(Buffer);
		}

		if(strcmp__clib3r(TmpBPAHeader[EntryNumber].EntryName, EntryName) == 0) break;
	}

	return TmpBPAHeader[EntryNumber].EntrySize;
}

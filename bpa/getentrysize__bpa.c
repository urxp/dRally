typedef unsigned char 	byte;
typedef unsigned short	word;
typedef unsigned long   dword;

#pragma pack(1)
typedef struct {
	char 	EntryName[13];
	dword 	EntrySize;
} BPAHeaderEntry;

    extern BPAHeaderEntry TmpBPAHeader[];
    extern const char ___180108h[];	// "Problems with ["
    extern const char ___180118h[];	// "] "
    extern const char ___18011ch[];	// " file!"

	extern const char string__MUSICS_BPA[];	// "MUSICS.BPA"
    extern const char rb_m_0[];				// "rb"

	dword fopen__clib3r(const char * pathname, const char * mode);
	dword fread__clib3r(void * ptr, dword size, dword nmemb, dword stream);
    int fclose__clib3r(dword stream);

	char * strupr__clib3r(char * s);
	int strcmp__clib3r(const char * s1, const char * s2);
	char * strcpy__clib3r(char * dest, const char * src);
	dword strlen__clib3r(const char * s);

	void exitErrorMsg__dr(const char * errmsg);

	dword getentrysize__musics_bpa(const char * elm);
	dword getentrysize__bpa(const char * bpa, const char * elm);

// 10474h
dword getentrysize__musics_bpa(const char * elm){

	return getentrysize__bpa(string__MUSICS_BPA, elm);
}

// 10240h
dword getentrysize__bpa(const char * bpa, const char * elm){

	dword 	fd, n;
	char 	Buffer[0x50];
	dword 	NumberOfEntries;
	char 	EntryName[0x10];

	strcpy__clib3r(EntryName, elm);
	fd = fopen__clib3r(bpa, rb_m_0);
	fread__clib3r(&NumberOfEntries, sizeof(dword), 1, fd);
	fread__clib3r(TmpBPAHeader, sizeof(BPAHeaderEntry), 255, fd);
	fclose__clib3r(fd);
	
	strupr__clib3r(EntryName);

	// encode EntryName to search ...
	for(n=-1;EntryName[++n];EntryName[n]+=(0x75-3*n));

	n = NumberOfEntries;
	while(n--&&strcmp__clib3r(TmpBPAHeader[n].EntryName, EntryName));

	if((n == -1)&&(n++)){

		strcpy__clib3r(&Buffer[n], ___180108h);
		while(Buffer[n]) n++;
		strcpy__clib3r(&Buffer[n], bpa);
		while(Buffer[n]) n++;
		strcpy__clib3r(&Buffer[n], ___180118h);
		while(Buffer[n]) n++;
		strcpy__clib3r(&Buffer[n], elm);
		while(Buffer[n]) n++;
		strcpy__clib3r(&Buffer[n], ___18011ch);

		exitErrorMsg__dr(Buffer);
	}

	return TmpBPAHeader[n].EntrySize;
}

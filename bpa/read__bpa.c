#define SEEK_END    0x2

typedef unsigned char	byte;
typedef unsigned short	word;
typedef unsigned long	dword;

#pragma pack(1)
typedef struct {
	char 	EntryName[13];
	dword 	EntrySize;
} BPAHeaderEntry;

    extern BPAHeaderEntry BPA0Header[];
    extern const char ___18309ch[];   // "Problems with ["
    extern const char ___1830ach[];   // "] "
    extern const char ___1830b0h[];   // " file!"
    extern const char ___183098h[];   // "rb"

	dword fopen__clib3r(const char * pathname, const char * mode);
	dword fread__clib3r(void * ptr, dword size, dword nmemb, dword stream);
	int fseek__clib3r(dword stream, long offset, int whence);
    int fclose__clib3r(dword stream);

	char * strupr__clib3r(char * s);
	int strcmp__clib3r(const char * s1, const char * s2);
    char * strcpy__clib3r(char * dest, const char * src);

	void exitErrorMsg__dr(const char * errmsg);

void read__bpa(const char * bpa, void * dst, const char * elm){

    dword 	fd, n, e_off;
	char 	Buffer[0x50];
	dword 	NumberOfEntries;
	char 	EntryName[0x10];


	fd = fopen__clib3r(bpa, ___183098h);
	fread__clib3r(&NumberOfEntries, sizeof(dword), 1, fd);
	fread__clib3r(BPA0Header, sizeof(BPAHeaderEntry), 255, fd);
	fclose__clib3r(fd);

    strcpy__clib3r(EntryName, elm);
	strupr__clib3r(EntryName);

	// encode EntryName to search ...
	for(n=-1;EntryName[++n];EntryName[n]+=(0x75-3*n));

    e_off = 0;
	n = NumberOfEntries;

	while(n--){

        e_off -= BPA0Header[n].EntrySize;

        if(!strcmp__clib3r(BPA0Header[n].EntryName, EntryName)){

			fd = fopen__clib3r(bpa, ___183098h);
			fseek__clib3r(fd, e_off, SEEK_END);
			fread__clib3r(dst, BPA0Header[n].EntrySize, 1, fd);
			fclose__clib3r(fd);

			return;
		}
    }

	strcpy__clib3r(&Buffer[++n], ___18309ch);
	while(Buffer[n]) n++;
	strcpy__clib3r(&Buffer[n], bpa);
	while(Buffer[n]) n++;
	strcpy__clib3r(&Buffer[n], ___1830ach);
	while(Buffer[n]) n++;
	strcpy__clib3r(&Buffer[n], elm);
	while(Buffer[n]) n++;
	strcpy__clib3r(&Buffer[n], ___1830b0h);

	exitErrorMsg__dr(Buffer);
}

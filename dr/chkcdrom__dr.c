typedef unsigned char 	byte;
typedef unsigned long	dword;

	extern char cdrom_ini[];
	extern const char string__DR_IDF[];	// "DR.IDF"
	extern const char rb_m[];			// "rb"

	dword getFileSize__dr(const char *);

	void * malloc__clib3r(dword size);
	void free__clib3r(void * ptr);

	dword fopen__clib3r(const char * pathname, const char * mode);
	dword fread__clib3r(void * ptr, dword size, dword nmemb, dword stream);
	int fseek__clib3r(dword stream, long offset, int whence);
	int fclose__clib3r(dword stream);

	char * strcpy__clib3r(char * dest, const char * src);

static dword IDFCheck(byte * __64kb){

	dword n;

	n  = !(byte)(__64kb[0x7cd1] - __64kb[0x1403] - __64kb[0x9ab2]);
	n += !(byte)(__64kb[0x7cd1] + __64kb[0x613b] - __64kb[0xf6ce]);
	n += !(byte)(__64kb[0x1403] + __64kb[0x2d3e] - __64kb[0xdb97]);
	n += !(byte)(__64kb[0x2d3e] - __64kb[0x7cd1] - __64kb[0xafc8]);

	return n>>2;
}

dword chkcdrom__dr(void){

	dword 	fd, n, CheckCD;
	char 	Buffer[0x100];
	byte *	__64kb;


	n = 0;
	strcpy__clib3r(Buffer, cdrom_ini);
	while(Buffer[n]) n++;
	strcpy__clib3r(&Buffer[n], string__DR_IDF);

	CheckCD = 0;

	// DR.IDF size = 479 985 668
    if(getFileSize__dr(Buffer) >= 0x1c9c0004){

		fd = fopen__clib3r(Buffer, rb_m);

		__64kb = malloc__clib3r(0x10000);

		fread__clib3r(&n, 4, 1, fd); 	// n = 0x2b79338d
		n -= 0x2b7916f1; 				// n = 0x1c9c
		fseek__clib3r(fd, 0x20000, 1);
		fread__clib3r(__64kb, 0x10000, 1, fd);
		
		if(!(CheckCD = IDFCheck(__64kb))){

			// 4 + 0x20000 + 0x10000 + 0x1c980000 = 0x1c9b0004
			fseek__clib3r(fd, (n - 4) << 16, 1);	
			fread__clib3r(__64kb, 0x10000, 1, fd);

			CheckCD = IDFCheck(__64kb);
		}

		fclose__clib3r(fd);
		free__clib3r(__64kb);
	}

	return CheckCD;
}

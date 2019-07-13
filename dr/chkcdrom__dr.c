#include "x86.h"

#define SEEK_SET    0x0
#define SEEK_CUR    0x1
#define SEEK_END    0x2

	extern char cdrom_ini[];
	extern const char string__DR_IDF[];	// "DR.IDF"
	extern const char rb_m[];			// "rb"

	int getFileSize__dr(const char *);

	void * malloc__clib3r(dword size);
	void free__clib3r(void * ptr);

	dword fopen__clib3r(const char * pathname, const char * mode);
	dword fread__clib3r(void * ptr, dword size, dword nmemb, dword stream);
	int fseek__clib3r(dword stream, long offset, int whence);
	int fclose__clib3r(dword stream);

	char * strcpy__clib3r(char * dest, const char * src);


dword chkcdrom__dr(void){

	dword 	fd, i, CDCheck, drIDF;
    char *  p;
    byte *  m;
	byte 	Buffer[0x100];


	p = Buffer;

	strcpy__clib3r(p, cdrom_ini);
	while(p[0]&&p++);
	strcpy__clib3r(p, string__DR_IDF);

	CDCheck = 0;

	if(getFileSize__dr(Buffer) < 0x186cf392) return 0;

	m = malloc__clib3r(0x10000);

	if(getFileSize__dr(Buffer) < 0x18033688){

        free__clib3r(m);
        return 0;
    }

	fd = fopen__clib3r(Buffer, rb_m);

	if(fd == 0){

        free__clib3r(m);
        return 0;
    }

	fread__clib3r(&drIDF, 4, 1, fd);
	drIDF = 0x10000*(drIDF - 0x2b7916f5);
	fseek__clib3r(fd, 0x20000, SEEK_CUR);
	fread__clib3r(m, 0x10000, 1, fd);
	
	i  = !(0xff & (m[0x7cd1] - m[0x1403] - m[0x9ab2]));
    i += !(0xff & (m[0x7cd1] + m[0x613b] - m[0xf6ce]));
    i += !(0xff & (m[0x1403] + m[0x2d3e] - m[0xdb97]));
    i += !(0xff & (m[0x2d3e] - m[0x7cd1] - m[0xafc8]));

	if(i == 4) CDCheck = 1;
    
	fseek__clib3r(fd, drIDF, SEEK_CUR);

    i  = !(0xff & (m[0x7cd1] - m[0x1403] - m[0x9ab2]));
    i += !(0xff & (m[0x7cd1] + m[0x613b] - m[0xf6ce]));
    i += !(0xff & (m[0x1403] + m[0x2d3e] - m[0xdb97]));
    i += !(0xff & (m[0x2d3e] - m[0x7cd1] - m[0xafc8]));

	if(i == 4) CDCheck = 1;

	if(CDCheck == 0){

        free__clib3r(m);
        return 0;
    }

	free__clib3r(m);
	return 1;
}

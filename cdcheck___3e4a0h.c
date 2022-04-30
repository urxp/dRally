#include "drally.h"

	extern __BYTE__ ___1a0d60h[];

__DWORD__ GET_FILE_SIZE(const char *);

static int helper_check(__POINTER__ m){

	int 		check;

	check = 0;
	check += !((B(m+0x1403)+B(m+0x9ab2)-B(m+0x7cd1))&0xff);
	check += !((B(m+0x613b)+B(m+0x7cd1)-B(m+0xf6ce))&0xff);
	check += !((B(m+0x1403)+B(m+0x2d3e)-B(m+0xdb97))&0xff);
	check += !((B(m+0x7cd1)+B(m+0xafc8)-B(m+0x2d3e))&0xff);

	return check;
}

int cdcheck___3e4a0h(void){

	__POINTER__ 	mem;
	FILE *			fd;
	__DWORD__ 		val0;
	char 			buffer[0x100];
	int 			rslt;


	rslt = 0;
	strcat(strcpy(buffer, ___1a0d60h), "DR.IDF");	// 479,985,668

	if((int)GET_FILE_SIZE(buffer) < 0x186cf392) return 0;	// 409,793,426
	if((int)GET_FILE_SIZE(buffer) < 0x18033688) return 0;	// 402,863,752
	if((fd = strupr_fopen(buffer, "rb")) == 0) return 0;

	mem = malloc(0x10000);
	fread(&val0, sizeof(__DWORD__), 1, fd);	// val0=0x2b79338d

	fseek(fd, 0x20000, SEEK_CUR);	// 131,076
	fread(mem, 0x10000, 1, fd);		// 196,612
	if(helper_check(mem) == 4) rslt = 1;

	fseek(fd, 0x10000*(val0-0x2b7916f5), SEEK_CUR);		// 479,920,132
	fread(mem, 0x10000, 1, fd);							// 479,985,668
	if(helper_check(mem) == 4) rslt = 1;

	fclose(fd);
	free(mem);

	return rslt;
}

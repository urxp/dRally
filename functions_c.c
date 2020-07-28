#include "drally.h"

char * strupr_watcom106(char *);

FILE * strupr_fopen(const char * file_name, const char * mode){

	char buffer[256];

	if(strlen(file_name) > 255){

		printf("File name too long: (%s)\n", file_name);
		return NULL;
	}

	return fopen(strupr_watcom106(strcpy(buffer, file_name)), mode);
}

dword GET_FILE_SIZE(const char * file_name){

	FILE * fd;
	dword size;

	if(!(fd = strupr_fopen(file_name, "rb"))) return 0;

	fseek(fd, 0, SEEK_END);
	size = (dword)ftell(fd);
	fclose(fd);

	return size;
}

dword MULSHIFT(dword d0, dword d1){

	dword 	rslt, q_rslt;
	
	q_rslt = ((qword)d0*(qword)d1)>>0x10; 
	rslt = (d0>>0x10)*d1 + (d0&0xffff)*(d1>>0x10) + (((d0&0xffff)*(d1&0xffff))>>0x10);

	if(q_rslt != rslt) printf("MULSHIFT doesn't match\n");

	return rslt;
}

void my_ceil(double * dval){

	*dval = ceil(*dval);
}
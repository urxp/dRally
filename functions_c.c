#include "drally.h"

static void loc_strupr(char * s){

	while(s&&*s){

		if((*s >= 0x61)&&(*s <= 0x7a)) *s -= 0x20;
		s++;
	}
}

char * STRUPR_D(char * s){

	loc_strupr(s);

	return s;
}

FILE * strup_fopen(const char * file_name, const char * mode){

	char buffer[256];

	strcpy(buffer, file_name);
	loc_strupr(buffer);

	return fopen(buffer, mode);

}

unsigned GET_FILE_SIZE(const char * file_name){

	FILE * fd;
	unsigned size;

    printf("[dRally.File] Checking size of %s\n", file_name);

	if(!(fd = strup_fopen(file_name, "rb"))) return 0;

	fseek(fd, 0, SEEK_END);
	size = (unsigned)ftell(fd);
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

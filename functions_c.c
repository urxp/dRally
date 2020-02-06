#include <stdio.h>
#include <string.h>

typedef unsigned int 	dword;
typedef unsigned short 	word;
typedef unsigned char 	byte;

#define D(d)	(*(dword *)(d))
#define W(w)	(*(word *)(w))
#define B(b)	(*(byte *)(b))

#define X(r)	(*(word *)&r)
#define H(r)	(*((byte *)&r + 1))
#define L(r)	(*(byte *)&r)

static void loc_strupr(char * s){

	while(s&&*s){

		if((*s >= 0x61)&&(*s <= 0x7a)) *s -= 0x20;
		s++;
	}
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

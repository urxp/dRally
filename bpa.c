#include "drally.h"

#pragma pack(push,1)

typedef struct bpa_entry_s {
    __BYTE__    name[0xd];
    __DWORD__   size;
} bpa_entry_t;

typedef struct bpa_s {
    __DWORD__       n;
    bpa_entry_t     fat[255];
} bpa_t;

#pragma pack(pop)

char * strupr_watcom106(char *);

void ___42944h(const char *);
void __VGA3_SETMODE(void);


static bpa_t bpa;

static void BPA_encodeEntryName(char * s){

    dword 	n;

    if(s){
	
        n = -1;
        while(s[++n]) s[n] += 0x75-3*n;
    }
}

void bpa_read(const char * bpa_fname, void * dst, const char * bpa_entry){

    FILE *  fd;
    char    entry[0xd], err[0x50];
    dword   n, offset;

    strupr_watcom106(strcpy(entry, bpa_entry));
    fd = strupr_fopen(bpa_fname, "rb");
    fread(&bpa, 1, sizeof(bpa_t), fd);

    BPA_encodeEntryName(entry);

    offset = 0;
    n = -1;
    while((++n < bpa.n)&&strcmp(bpa.fat[n].name, entry)) offset += bpa.fat[n].size;

    if(n == bpa.n){

        strcpy(err, "Problems with [");
        strcat(err, bpa_fname);
        strcat(err, "] ");
        strcat(err, bpa_entry);
        strcat(err, " file!");
        fclose(fd);
        ___42944h(err);
    }

    fseek(fd, offset, SEEK_CUR);
    fread(dst, 1, bpa.fat[n].size, fd);
    fclose(fd);
}

dword bpa_entrysize(const char * bpa_fname, const char * bpa_entry){

	FILE * 	fd;
	char 	entry[0xd], err[0x50];
	dword 	n;

	strupr_watcom106(strcpy(entry, bpa_entry));
	fd  = strupr_fopen(bpa_fname, "rb");
    fread(&bpa, 1, sizeof(bpa_t), fd);
	fclose(fd);

	BPA_encodeEntryName(entry);

	n = -1;
	while((++n < bpa.n)&&strcmp(bpa.fat[n].name, entry));

	if(n == bpa.n){

		strcpy(err, "Problems with [");
		strcat(err, bpa_fname);
		strcat(err, "] ");
		strcat(err, bpa_entry);
		strcat(err, " file!");
		___42944h(err);
	}

	return bpa.fat[n].size;
}

void ___42944h(const char * err){

	__VGA3_SETMODE();
	printf("DEATH RALLY Error: %s\n", err);
	printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");
	exit(0x70);
}

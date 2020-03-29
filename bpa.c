#include "drally.h"


#pragma pack(push,1)

typedef struct entry_s {
    const char  name[0xd];
    dword       size;
} entry_t;

typedef struct bpa_s {
    dword       n;
    entry_t     fat[255];
} bpa_t;

#pragma pack(pop)


void bpa_read(const char *, void *, const char *);
dword entrysize_bpa(const char *, const char *);
void * dRally_Memory_alloc(dword, dword);
void STRUPR_D(char *);

void ___42944h(const char *);
void VGA3_SETMODE(void);
void ___5a101h(void);


static bpa_t bpa;

static byte ROL_BYTE(byte b, int n){

    return (b<<n)|(b>>(8-n));
}

void * extract_musics_bpa(const char * fname, dword lock){
    
    dword   ex_size, n;
    byte *  r_mem;

    ex_size = entrysize_bpa("MUSICS.BPA", fname);
    r_mem = dRally_Memory_alloc(ex_size, lock);
    bpa_read("MUSICS.BPA", r_mem, fname);

    if(ex_size){

        n = -1;
        while(++n < ex_size) r_mem[n] = ROL_BYTE(r_mem[n], n%7)+0x93-0x11*n;
    }

    return r_mem;
}

void bpa_read(const char * bpa_fname, void * dst, const char * bpa_entry){

    FILE *  fd;
    char    entry[0xd], err[0x50];
    dword   n, offset;

    STRUPR_D(strcpy(entry, bpa_entry));
    fd = strup_fopen(bpa_fname, "rb");
    fread(&bpa, sizeof(bpa_t), 1, fd);

    n = -1;
    while(entry[++n]) entry[n] += 0x75-3*n;

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
    fread(dst, bpa.fat[n].size, 1, fd);
    fclose(fd);
}

dword entrysize_bpa(const char * bpa_fname, const char * bpa_entry){

	FILE * 	fd;
	char 	entry[0xd], err[0x50];
	dword 	n;

	STRUPR_D(strcpy(entry, bpa_entry));
	fd  = strup_fopen(bpa_fname, "rb");
    fread(&bpa, sizeof(bpa_t), 1, fd);
	fclose(fd);

	n = -1;
    while(entry[++n]) entry[n] += 0x75-3*n;

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

	VGA3_SETMODE();
	printf("DEATH RALLY Error: %s\n", err);
	printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");
	___5a101h();
	exit(0x70);
}

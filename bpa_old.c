#include "drally.h"
#include "bpa.h"

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

    int 	n;

    if(s){
	
        n = -1;
        while(s[++n]) s[n] += 0x75-3*n;
    }
}

void old_bpa_read(const char * bpa_fname, void * dst, const char * bpa_entry){

    char    err[0x50];
    char    u_bpa_fname[32];
    BPA *   bpa;

    strupr_watcom106(strcpy(u_bpa_fname, bpa_fname));
    bpa = bpa_open(u_bpa_fname);
    bpa_search(bpa, bpa_entry);

    if(bpa_entry_size(bpa) != 0){
        
        bpa_read(bpa, dst);
        bpa_close(bpa);
    }
    else {

        strcpy(err, "Problems with [");
        strcat(err, bpa_fname);
        strcat(err, "] ");
        strcat(err, bpa_entry);
        strcat(err, " file!");
        bpa_close(bpa);
        ___42944h(err);
    }
}

void ___42944h(const char * err){

	__VGA3_SETMODE();
	printf("DEATH RALLY Error: %s\n", err);
	printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");
	exit(0x70);
}

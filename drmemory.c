#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "drmemory.h"


typedef enum MEM_TYPE {
    NO_MEMORY, DOS4G_MEMORY
} MemoryType;

#pragma pack(1)

typedef struct AllocBase {
    __POINTER__     linear;     // +0
    __DWORD__       nbytes;     // +4
} AllocBase;

typedef struct AllocEntry {
	__BYTE__ 	    type;		// +0
	__POINTER__     linear;		// +1
	__DWORD__ 	    nbytes;		// +5
	__DWORD__ 	    handle;		// +9
	__WORD__ 	    selector;	// +0dh
	__WORD__ 	    segment;	// +0fh
	__BYTE__ 	    lock;		// +11h
} AllocEntry;

#define MEM_REGISTRY_SIZE   0x10000

static AllocBase ___24ccb0h;

void ___58b20h(unsigned int err_n, ...);

__POINTER__ dRMemory_alloc(size_t size){

    __POINTER__          alloc;
    __DWORD__           alloc_dos, n;
    AllocEntry *    ptr;

    ptr = (AllocEntry *)___24ccb0h.linear;

    n = 0;
    while(ptr[n].type&&(n < (MEM_REGISTRY_SIZE/sizeof(AllocEntry)))) n++;

    if(n == (MEM_REGISTRY_SIZE/sizeof(AllocEntry))) ___58b20h(0xd);

    if(size >= 0x100000){

        size |= 0xfff;
        size++;
    }

    if((alloc = malloc(size)) != (__POINTER__)0){

        ptr[n].linear = alloc;
        ptr[n].nbytes = size;
        ptr[n].type = DOS4G_MEMORY;
    }

    return ptr[n].linear;
}

void dRMemory_free(__POINTER__ mem){

    __DWORD__           n;
    AllocEntry *    ptr;

    ptr = (AllocEntry *)___24ccb0h.linear;

    n = 0;
    while((n < (MEM_REGISTRY_SIZE/sizeof(AllocEntry)))&&(mem != ptr[n].linear)) n++;

    if(n == (MEM_REGISTRY_SIZE/sizeof(AllocEntry))) ___58b20h(0xe);

    switch(ptr[n].type){
    case NO_MEMORY:
        ___58b20h(0xe);
        break;
    case DOS4G_MEMORY:
        free(ptr[n].linear);
        break;
    default:
        break;
    }

    ptr[n].type = NO_MEMORY;
}

__POINTER__ dRMemory_resize(__POINTER__ mem, size_t size){
/*
    __DWORD__           n;
    AllocEntry *    ptr;
    __POINTER__          new_mem;

    ptr = ___24ccb0h.linear;

    n = 0;
    while((mem != ptr[n].linear)&&(n < (MEM_REGISTRY_SIZE/sizeof(AllocEntry)))) n++;

    if(n == (MEM_REGISTRY_SIZE/sizeof(AllocEntry))) ___58b20h(0xf);

    switch(ptr[n].type){
    case NO_MEMORY:
        ___58b20h(0xf);
        break;
    case DOS4G_MEMORY:
        new_mem = realloc(ptr[n].linear, size);
        if(new_mem == 0) ___58b20h(0xf);
        ptr[n].linear = new_mem;
        break;
    default:
        break;
    }

    ptr[n].nbytes = size;

    return ptr[n].linear;
*/

    return mem;
}

void dRally_Memory_init(void){

    __POINTER__  alloc;
    size_t  size = MEM_REGISTRY_SIZE;

    if(size >= 0x100000){
    
        size |= 0xfff;
        size++;
    }

    alloc = malloc(size);

    if(alloc == 0) ___58b20h(4);
    
    ___24ccb0h.linear = alloc;
    ___24ccb0h.nbytes = size;

    memset(___24ccb0h.linear, 0, size);
}

void dRally_Memory_clean(void){

    __DWORD__           n;
    AllocEntry *    ptr;


    if((ptr = (AllocEntry *)___24ccb0h.linear) != (AllocEntry *)0){    

        n = 0;
        while(n < (MEM_REGISTRY_SIZE/sizeof(AllocEntry))){

            if(ptr[n].type != NO_MEMORY) dRMemory_free(ptr[n].linear);
            n++;
        }

        free(___24ccb0h.linear);
        memset(&___24ccb0h, 0, sizeof(AllocBase));
    }
}

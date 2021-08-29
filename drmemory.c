#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "drmemory.h"

typedef unsigned char   byte;
typedef unsigned short 	word;
typedef unsigned long   dword;

typedef enum MEM_TYPE {
    NO_MEMORY, DOS4G_MEMORY
} MemoryType;

#pragma pack(1)

typedef struct AllocBase {
    void *  linear;     // +0
    dword   nbytes;     // +4
} AllocBase;

typedef struct AllocEntry {
	byte 	type;		// +0
	void * 	linear;		// +1
	dword 	nbytes;		// +5
	dword 	handle;		// +9
	word 	selector;	// +0dh
	word 	segment;	// +0fh
	byte 	lock;		// +11h
} AllocEntry;

#define DOS_MEM_POOL        0x100
#define MEM_REGISTRY_SIZE   0x10000

struct {
	void * 			ptr;
	unsigned int 	size;
} DOS_MEM[DOS_MEM_POOL];


static AllocBase ___24ccb0h;

unsigned int DPMI_ALLOCATE_DOS_MEMORY_BLOCK(dword size, dword * sel){
	
	unsigned int idx = 0;

	while((DOS_MEM[idx].ptr) && ((++idx) < DOS_MEM_POOL));

	if(idx == DOS_MEM_POOL) return 0;

	DOS_MEM[idx].ptr = malloc((size + 0x1f)&0xfffffff0);
	if(DOS_MEM[idx].ptr == 0){
        
        //printf("[dRally.Memory] Allocation of %d bytes of 'DOS' memory failed!\n", size);

        return 0;
    }
	else {
        
        //printf("[dRally.Memory] Allocating %d bytes of 'DOS' memory @%08X\n", size, ((unsigned int)DOS_MEM[idx].ptr + 0xf)&0xfffffff0);

        DOS_MEM[idx].size = size;
    }

	*sel = idx;

	return ((unsigned int)DOS_MEM[idx].ptr + 0xf) >> 4;
}

unsigned int DPMI_FREE_DOS_MEMORY_BLOCK(unsigned int idx){

	if(idx < DOS_MEM_POOL){

        if(DOS_MEM[idx].ptr){

            //printf("[dRally.Memory] Freeing 'DOS' memory @%08X\n", DOS_MEM[idx].ptr);
		    
            free(DOS_MEM[idx].ptr);
        }

		DOS_MEM[idx].ptr = (void *)0;
		DOS_MEM[idx].size = 0;

		return 1;
	}

	return 0;
}

void ___58b20h(unsigned int err_n, ...);

void * dRMemory_alloc(size_t size){

    void *          alloc;
    dword           alloc_dos, n;
    AllocEntry *    ptr;

    ptr = ___24ccb0h.linear;

    n = 0;
    while(ptr[n].type&&(n < (MEM_REGISTRY_SIZE/sizeof(AllocEntry)))) n++;

    if(n == (MEM_REGISTRY_SIZE/sizeof(AllocEntry))) ___58b20h(0xd);

    if(size >= 0x100000){

        size |= 0xfff;
        size++;
    }

    if((alloc = malloc(size)) != (void *)0){

        ptr[n].linear = alloc;
        ptr[n].nbytes = size;
        ptr[n].type = DOS4G_MEMORY;
    }

    return ptr[n].linear;
}

void dRMemory_free(void * mem){

    dword           n;
    AllocEntry *    ptr;

    ptr = ___24ccb0h.linear;

    n = 0;
    while((mem != ptr[n].linear)&&(n < (MEM_REGISTRY_SIZE/sizeof(AllocEntry)))) n++;

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

void * dRMemory_resize(void * mem, size_t size){

    dword           n;
    AllocEntry *    ptr;
    void *          new_mem;

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
}

void dRally_Memory_init(void){

    void *  alloc;
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

    dword           n;
    AllocEntry *    ptr;


    if((ptr = ___24ccb0h.linear) != (void *)0){    

        n = 0;
        while(n < (MEM_REGISTRY_SIZE/sizeof(AllocEntry))){

            if(ptr[n].type != NO_MEMORY) dRMemory_free(ptr[n].linear);
            n++;
        }

        free(___24ccb0h.linear);
        memset(&___24ccb0h, 0, sizeof(AllocBase));
    }
}

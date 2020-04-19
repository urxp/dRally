#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>

typedef unsigned char   byte;
typedef unsigned short 	word;
typedef unsigned long   dword;

typedef enum MEM_TYPE {
    NO_MEMORY, DOS4G_MEMORY, DOS_MEMORY
} MemoryType;

#pragma pack(1)

typedef struct AllocBase {
    void *  linear;     // +0
    dword   nbytes;     // +4
    dword   handle;     // +8
    word    unk0;       // +0ch
    byte    lock;       // +0eh
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
} DOS_MEM[DOS_MEM_POOL] = {{0}};

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


unsigned int DPMI_LOCK_LINEAR_REGION(void * addr, unsigned int size){

    //printf("[dRally.Memory] Locking %d bytes of memory @%08X\n", size, addr);

    if(mlock(addr, size) == 0) return 1;
    
    printf("[dRally.Memory] Memory lock failed!\n");

    return 0;
}

unsigned int DPMI_UNLOCK_LINEAR_REGION(void * addr, unsigned int size){

    //printf("[dRally.Memory] Unlocking %d bytes of memory @%08X\n", size, addr);

    if(munlock(addr, size) == 0) return 1;
 
    printf("[dRally.Memory] Memory unlock failed!\n");

    return 0;
}

void * DPMI_ALLOCATE_MEMORY_BLOCK(unsigned int size){

    void * alloc;

    alloc = malloc(size);

    if(alloc == 0){
        
        //printf("[dRally.Memory] Allocation of %d bytes of memory failed!\n", size);
    }
    else {

        //printf("[dRally.Memory] Allocating %d bytes of memory @%08X\n", size, alloc);
    }

    return alloc;
}

unsigned int DPMI_FREE_MEMORY_BLOCK(void * mem){

    //printf("[dRally.Memory] Freeing memory @%08X\n", mem);

    if(mem) free(mem);

    return 1;
}

void * DPMI_RESIZE_MEMORY_BLOCK(void * mem, unsigned int size){

    void * alloc;

    alloc = realloc(mem, size);

    if(alloc == 0){
        
        //printf("[dRally.Memory] Resizing memory @%08X to %d bytes failed!\n", mem, size);
    }
    else {

        //printf("[dRally.Memory] Resizing memory @%08X to %d bytes @%08X\n", mem, size, alloc);
    }

    return alloc;
}

unsigned int DPMI_RESIZE_DOS_MEMORY_BLOCK(unsigned int idx, unsigned int size){

    void * alloc;

	if(idx < DOS_MEM_POOL){

        if(DOS_MEM[idx].ptr){

            alloc = realloc(DOS_MEM[idx].ptr, (size+0x1f)&0xfffffff0);

            if(alloc == 0){

                //printf("[dRally.Memory] Resizing 'DOS' memory [%d]@%08X to %d bytes failed!\n", idx, DOS_MEM[idx].ptr, size);
            }
            else {

                //printf("[dRally.Memory] Resizing 'DOS' memory [%d]@%08X to %d bytes @%08X\n", idx, DOS_MEM[idx].ptr, size, alloc);

                DOS_MEM[idx].size = size;
            }

            DOS_MEM[idx].ptr = alloc;

            return ((unsigned int)DOS_MEM[idx].ptr + 0xf) >> 4;
        }
	}

	return 0;
}









































void ___58b20h(unsigned int err_n, ...);

void ___5f2e4h_cdecl(AllocBase * location, unsigned int size, unsigned int lock){

    void * alloc;

    if(size >= 0x100000){
    
        size |= 0xfff;
        size++;
    }

    alloc = DPMI_ALLOCATE_MEMORY_BLOCK(size);

    if(alloc == 0) ___58b20h(4);

    location->linear = alloc;
    location->nbytes = size;
    location->handle = (dword)alloc;

    if((location->lock = lock)) DPMI_LOCK_LINEAR_REGION(location->linear, location->nbytes);
}

extern AllocBase ___24ccb0h;

void * dRally_Memory_alloc(unsigned int size, unsigned int lock){

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

    alloc = DPMI_ALLOCATE_MEMORY_BLOCK(size);

    if(alloc != 0){

        ptr[n].handle = (dword)alloc;
        ptr[n].linear = alloc;
        ptr[n].type = DOS4G_MEMORY;
    }
    else {

        alloc_dos = DPMI_ALLOCATE_DOS_MEMORY_BLOCK(size, &(ptr[n].selector));
        
        if(alloc_dos == 0) ___58b20h(0xd);

        ptr[n].segment = alloc_dos;
        ptr[n].linear = (void *)(alloc_dos<<4);
        ptr[n].type = DOS_MEMORY;
    }

    ptr[n].nbytes = size;

    if((ptr[n].lock = lock)) DPMI_LOCK_LINEAR_REGION(ptr[n].linear, ptr[n].nbytes);

    return ptr[n].linear;
}


void dRally_Memory_free(void * mem){

    dword           n;
    AllocEntry *    ptr;

    ptr = ___24ccb0h.linear;

    n = 0;
    while((mem != ptr[n].linear)&&(n < (MEM_REGISTRY_SIZE/sizeof(AllocEntry)))) n++;

    if(n == (MEM_REGISTRY_SIZE/sizeof(AllocEntry))) ___58b20h(0xe);

    if(ptr[n].type == NO_MEMORY) ___58b20h(0xe);

    if(ptr[n].lock){

        if(!DPMI_UNLOCK_LINEAR_REGION(ptr[n].linear, ptr[n].nbytes)) ___58b20h(0xe);
        ptr[n].lock = 0;
    }

    if(ptr[n].type == DOS4G_MEMORY){

        if(!DPMI_FREE_MEMORY_BLOCK(ptr[n].handle)) ___58b20h(0xe);
    }
    
    if(ptr[n].type == DOS_MEMORY){

        if(!DPMI_FREE_DOS_MEMORY_BLOCK(ptr[n].selector)) ___58b20h(0xe);
    }   

    ptr[n].type = NO_MEMORY;
}


void * dRally_Memory_resize(void * mem, dword size){

    dword           n;
    AllocEntry *    ptr;
    void *          new_mem;
    dword           new_dos_mem;

    ptr = ___24ccb0h.linear;

    n = 0;
    while((mem != ptr[n].linear)&&(n < (MEM_REGISTRY_SIZE/sizeof(AllocEntry)))) n++;

    if(n == (MEM_REGISTRY_SIZE/sizeof(AllocEntry))) ___58b20h(0xf);

    if(ptr[n].type == NO_MEMORY) ___58b20h(0xf);
    
    if(ptr[n].lock){

        if(!DPMI_UNLOCK_LINEAR_REGION(ptr[n].linear, ptr[n].nbytes)) ___58b20h(0xf);
    }

    if(ptr[n].type == DOS4G_MEMORY){

        new_mem = DPMI_RESIZE_MEMORY_BLOCK(ptr[n].handle, size);

        if(new_mem == 0) ___58b20h(0xf);

        ptr[n].linear = new_mem;
        ptr[n].handle = new_mem;
    }

    if(ptr[n].type == DOS_MEMORY){

        new_dos_mem = DPMI_RESIZE_DOS_MEMORY_BLOCK(ptr[n].selector, size);

        if(new_dos_mem == 0) ___58b20h(0xf);

        ptr[n].linear = new_dos_mem<<4;
    }

    ptr[n].nbytes = size;
    
    if(ptr[n].lock){
    
        DPMI_LOCK_LINEAR_REGION(ptr[n].linear, ptr[n].nbytes);
    }

    return ptr[n].linear;
}




void dRally_Memory_init(void){

    ___5f2e4h_cdecl(&___24ccb0h, MEM_REGISTRY_SIZE, 0);
    memset(___24ccb0h.linear, 0, MEM_REGISTRY_SIZE);
}

void dRally_Memory_clean(void){

    dword           n;
    AllocEntry *    ptr;


    if((ptr = ___24ccb0h.linear) != (void *)0){    

        n = 0;
        while(n < (MEM_REGISTRY_SIZE/sizeof(AllocEntry))){

            if(ptr[n].type != NO_MEMORY) dRally_Memory_free(ptr[n].linear);
            n++;
        }

        if(___24ccb0h.lock){

            DPMI_UNLOCK_LINEAR_REGION(___24ccb0h.linear, ___24ccb0h.nbytes);
        }

        if(!DPMI_FREE_MEMORY_BLOCK(___24ccb0h.handle)) ___58b20h(5);

        memset(&___24ccb0h, 0, sizeof(AllocBase));
    }
}

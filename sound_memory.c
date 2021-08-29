#include "drally.h"
#include "drmemory.h"


void ___58b20h(int, ...);

struct alloc {
    void *  next;
    void *  end;
    void *  start;
} alloc;

static dword is2pow(dword d){

    dword r = -1;
    while(d&=(d-++r));
    
    return !!(r == 1);
}

static dword next2pow(dword d){

    dword r = 1;
    while(d){

        d >>= 1;
        r <<= 1;
    }

    return r;
}

void * ptr_align(void * src, dword a){

    if(!is2pow(a)){
        
        a = next2pow(a);
        printf("Not power of 2, fallback to %d\n", a);
    }

    return src+(((void *)a - src)&(a-1));
}

void ptr_align_d(void ** src_p, dword a){

    *src_p = ptr_align(*src_p, a);
}

void * ___5f248h_cdecl(dword size){

    void * rslt;

    rslt = dRMemory_alloc(size);
    alloc.next = rslt;
    alloc.start = rslt;
    alloc.end = rslt+size;

    return rslt;
}

void * ___5f26ch_cdecl(dword size){

    void * rslt;

    rslt = alloc.next;
    if((size+alloc.next) > alloc.end) ___58b20h(0x17);
    //alloc.next = ptr_align(alloc.next+size, 4);
    alloc.next += size;

    return rslt;
}

void ___5f2b4h_cdecl(void){

    if(alloc.next == alloc.start){
    
        dRMemory_free(alloc.start);
    }
    else {
            
        dRMemory_resize(alloc.start, alloc.next - alloc.start);
    }
}

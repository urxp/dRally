#include "drally.h"
#include "drmemory.h"


void ___58b20h(int, ...);

struct alloc {
    __POINTER__  next;
    __POINTER__  end;
    __POINTER__  start;
} alloc;

static __DWORD__ is2pow(__DWORD__ d){

    __DWORD__ r = -1;
    while(d&=(d-++r));
    
    return !!(r == 1);
}

static __DWORD__ next2pow(__DWORD__ d){

    __DWORD__ r = 1;
    while(d){

        d >>= 1;
        r <<= 1;
    }

    return r;
}

__POINTER__ ptr_align(__POINTER__ src, __DWORD__ a){

    if(!is2pow(a)){
        
        a = next2pow(a);
        printf("Not power of 2, fallback to %d\n", a);
    }

    return src+(((__POINTER__)(__UNSIGNED__)a - src)&(a-1));
}

void ptr_align_d(__POINTER__* src_p, __DWORD__ a){

    *src_p = ptr_align(*src_p, a);
}

__POINTER__ ___5f248h_cdecl(__DWORD__ size){

    __POINTER__ rslt;

    rslt = dRMemory_alloc(size);
    alloc.next = rslt;
    alloc.start = rslt;
    alloc.end = rslt+size;

    return rslt;
}

__POINTER__ ___5f26ch_cdecl(__DWORD__ size){

    __POINTER__ rslt;

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

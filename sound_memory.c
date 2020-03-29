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

void * dRally_Memory_alloc(dword, dword);
void dRally_Memory_free(void *);
void * dRally_Memory_resize(void *, dword);
void ___58b20h(int, ...);

/*
void * ___24cc7ch;  // next
void * ___24cc80h;  // end
void * ___24cc84h;  // start
*/
struct alloc {
    void *  next;
    void *  end;
    void *  start;
} alloc;

static dword is2pow(dword d){

    dword r = -1;
    while(d&=(d-++r));
    
    return !!r;
}

static dword next2pow(dword d){

    dword c = 0;
    while(d){

        d >>= 1;
        c++;
    }

    return 1<<c;
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

void * ___5f248h_cdecl(dword size, dword lock){

    void * rslt;

    rslt = dRally_Memory_alloc(size, lock);
    alloc.next = rslt;
    alloc.start = rslt;
    alloc.end = rslt+size;

    return rslt;
}

void * ___5f26ch_cdecl(dword size){

    void * rslt;

    rslt = alloc.next;
    if((size+alloc.next) > alloc.end) ___58b20h(0x17);
    alloc.next = ptr_align(alloc.next+size, 4);

    return rslt;
}

void ___5f2b4h_cdecl(void){

    if(alloc.next == alloc.start){
    
        dRally_Memory_free(alloc.next);
    }
    else {
            
        dRally_Memory_resize(alloc.start, alloc.next - alloc.start);
    }
}

#define al 	((byte *)&eax)[0]
#define bl 	((byte *)&ebx)[0]
#define cl 	((byte *)&ecx)[0]
#define dl 	((byte *)&edx)[0]
#define ah 	((byte *)&eax)[1]
#define bh 	((byte *)&ebx)[1]
#define ch 	((byte *)&ecx)[1]
#define dh 	((byte *)&edx)[1]

#define ax 	((word *)&eax)[0]

typedef unsigned char 	byte;
typedef unsigned short 	word;
typedef unsigned long	dword;

    extern const char string__MUSICS_BPA[];		// "MUSICS.BPA"
    
	dword getentrysize__bpa(const char * bpa, const char * elm);
    void * allocMemoryLock(dword, dword);
	void read__bpa(const char *, void *, const char *);

    int printf__clib3r(const char * format, ...);


#if defined(__WATCOMC__)
static int idiv_rem(int, int);
#pragma aux idiv_rem =      \
    "xor    edx, edx"       \
    "idiv   ebx"            \
    parm [eax] [ebx]        \
    value [edx]
#else
static inline int idiv_rem(int A, int B){

    return A % B;
}
#endif

#if defined(__WATCOMC__)
static dword rolb(dword, dword);
#pragma aux rolb =          \
    "rol    al, cl"         \
    parm [eax] [ecx]
#else
static inline dword rolb(dword A, dword B){

    return (0x101*(byte)A) >> (8 - B);
}
#endif

// 10490h
void * extract__musics_bpa(const char * elm, dword lock){

    byte *  mem;
    int     n, n0, n7;

	n0 = getentrysize__bpa(string__MUSICS_BPA, elm);;
	mem = (byte *)allocMemoryLock(n0+3, lock);
	read__bpa(string__MUSICS_BPA, mem, elm);
	
    //n7 = n0 - idiv_rem(n0, 7);
    n7 = n0 - (n0 % 7);

    n = 0;

    while(n < n7){
/*
        mem[n] += 0x93 - 0x11*n;
        mem[n+1] = ((0x101*mem[n+1]) >> 7) + 0x82 - 0x11*n;
        mem[n+2] = ((0x101*mem[n+2]) >> 6) + 0x71 - 0x11*n;
        mem[n+3] = ((0x101*mem[n+3]) >> 5) + 0x60 - 0x11*n;
        mem[n+4] = ((0x101*mem[n+4]) >> 4) + 0x4f - 0x11*n;
        mem[n+5] = ((0x101*mem[n+5]) >> 3) + 0x3e - 0x11*n;
        mem[n+6] = ((0x101*mem[n+6]) >> 2) + 0x2d - 0x11*n;
*/

        mem[n] += 0x93 - 0x11*n;
        mem[n+1] = rolb(*(dword *)&mem[n+1], 1) + 0x82 - 0x11*n;
        mem[n+2] = rolb(*(dword *)&mem[n+2], 2) + 0x71 - 0x11*n;
        mem[n+3] = rolb(*(dword *)&mem[n+3], 3) + 0x60 - 0x11*n;
        mem[n+4] = rolb(*(dword *)&mem[n+4], 4) + 0x4f - 0x11*n;
        mem[n+5] = rolb(*(dword *)&mem[n+5], 5) + 0x3e - 0x11*n;
        mem[n+6] = rolb(*(dword *)&mem[n+6], 6) + 0x2d - 0x11*n;

        n += 7;
    }

    while(n < n0){

//      mem[n] = (0x101*mem[n]) >> (n7 - n + 8);
        mem[n] = rolb(*(dword *)&mem[n], n - n7) + 0x93 - 0x11*n;

        n++;
    }

	return mem;
}

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
static int idiv_rem(int A, int B){

    return A % B;
}
#endif

#if defined(__WATCOMC__)
static void rolb_p(byte *, dword);
#pragma aux rolb_p =                  \
    "rol    byte ptr [eax], cl"         \
    parm [eax] [ecx]
#else
static void rolb_p(byte * A, dword B){

    *A = (0x101**A) >> (8 - B);
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
        mem[n] = (0x101*mem[n]) >> 8;
        mem[n] += 0x93 - 0x11*n;
  
        mem[n+1] = (0x101*mem[n+1]) >> 7;
        mem[n+1] += 0x82 - 0x11*n;

        mem[n+2] = (0x101*mem[n+2]) >> 6;
        mem[n+2] += 0x71 - 0x11*n;

        mem[n+3] = (0x101*mem[n+3]) >> 5;
        mem[n+3] += 0x60 - 0x11*n;

        mem[n+4] = (0x101*mem[n+4]) >> 4;
        mem[n+4] += 0x4f - 0x11*n;

        mem[n+5] = (0x101*mem[n+5]) >> 3;
        mem[n+5] += 0x3e - 0x11*n;

        mem[n+6] = (0x101*mem[n+6]) >> 2;
        mem[n+6] += 0x2d - 0x11*n;
*/

        rolb_p(&mem[n], 0);
        mem[n] += 0x93 - 0x11*n;
  
        rolb_p(&mem[n+1], 1);
        mem[n+1] += 0x82 - 0x11*n;

        rolb_p(&mem[n+2], 2);
        mem[n+2] += 0x71 - 0x11*n;

        rolb_p(&mem[n+3], 3);
        mem[n+3] += 0x60 - 0x11*n;

        rolb_p(&mem[n+4], 4);
        mem[n+4] += 0x4f - 0x11*n;

        rolb_p(&mem[n+5], 5);
        mem[n+5] += 0x3e - 0x11*n;

        rolb_p(&mem[n+6], 6);
        mem[n+6] += 0x2d - 0x11*n;

        n += 7;
    }

    while(n < n0){

//      mem[n] = (0x101*mem[n]) >> (n7 - n + 8);
//      mem[n] = rolb(*(dword *)&mem[n], n - n7);
        rolb_p(&mem[n], n - n7);
        mem[n] += 0x93 - 0x11*n;

        n++;
    }

	return mem;
}

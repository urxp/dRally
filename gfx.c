#include "drally.h"

    extern byte * ___243d80h;

// MEASURE: min=-240, max=437
#define OFFSET 0x190                // 0x190 + 0x258

static int ___5a86ch[0x3e8];        // 0x3e8
static int ___5b80ch[0x3e8];        // 0x3e8
static int ___5c7ach[0x3e8];        // 0x3e8
static int ___5d74ch[0x3e8];        // 0x3e8

static int m_min = 0x7fffffff;
static int m_max = 0x80000000;

static void measure(int s, int e){

	int 	l;

	l = 0;

	if(s < m_min){

		m_min = s;
		l = 1;
	}

	if(e > m_max){

		m_max = e;
		l = 1;
	}

	if(l) printf("MEASURE: min=%d, max=%d\n", m_min, m_max);
}

static void helper(int A0, int A1, int A2, int A3, int A4, dword * A5){

	dword 	eax, edi, ebx, ecx;

	ebx = A4-A3;

	if(ebx != 0){
			
		eax = (int)((A1-A2)<<0x10)/(int)ebx;
		ecx = (A2<<0x10)+0x8000;

		ebx += A0;
		//measure(A3, ebx+A3-1);
		A3 += OFFSET;
		while(ebx--){

			A5[A3++] = ecx;
			ecx += eax;
		}
	}
}

static int helper2(int * P1, int * P2){

	if((*P1 < 0x00)&&(*P2 <= (*P1 = 0x00))) return 0;
	if((*P2 > 0xc8)&&(*P1 >= (*P2 = 0xc8))) return 0;

	*P1 += OFFSET;
	*P2 += OFFSET;

	return !(*P1 == *P2);
}

// Objects
void ___5e137h_order(dword A0, int A1, int A2, int A3, int A4, int A5, int A6){

    int     ecx, edi;

    helper(0, A5, A1, A2, A6, ___5a86ch);
    helper(0, A3, A5, A6, A4, ___5a86ch);
    helper(0, A3, A1, A2, A4, ___5b80ch);

    if(helper2(&A2, &A4)){

        while(A2 < A4){

            if((ecx = ___5b80ch[A2]) < (edi = ___5a86ch[A2])){
                    
                ecx = ___5a86ch[A2];
                edi = ___5b80ch[A2];
            }

            edi >>= 0x10;
            ecx >>= 0x10;

//            if(edi < 0) edi = 0;
//            if(ecx > 0){

//                if(ecx > 0x140) ecx = 0x140;

//                if(edi <= 0x140){

                    ecx -= edi;
                    while(ecx--||++ecx) ___243d80h[0x200*(A2-OFFSET)+0x60+edi++] = A0;
//                }
//            }

            A2++;
        }
    }
}

// Trees
static void ___5e3e8h_order(int A1, int A2, int A3, int A4, int A5, int A6, int A7, int A8, int A9){


    dword   eax, edx;
    int     ecx, edi;

    helper(0, A7, A1, A2, A8, ___5a86ch);
    helper(0, A4, A7, A8, A5, ___5a86ch);
    helper(0, A4, A1, A2, A5, ___5b80ch);
    helper(1, A9, A3, A2, A8, ___5c7ach);
    helper(1, A6, A9, A8, A5, ___5c7ach);
    helper(1, A6, A3, A2, A5, ___5d74ch);

    if(helper2(&A2, &A5)){

        ecx = (___5b80ch[(A2+A5)>>1]-___5a86ch[(A2+A5)>>1])>>0x10;

        eax = (ecx != 0) ? (___5d74ch[(A2+A5)>>1]-___5c7ach[(A2+A5)>>1])/ecx : 0;
  
        while(A2 < A5){

            edx = ___5c7ach[A2];

            if((ecx = ___5b80ch[A2]) < (edi = ___5a86ch[A2])){

                ecx = ___5a86ch[A2];
                edi = ___5b80ch[A2];
                edx = ___5d74ch[A2];
            }

            edi >>= 0x10;
            ecx >>= 0x10;

			ecx -= edi;
            while(ecx--||++ecx){

                ___243d80h[0x200*(A2-OFFSET)+0x60+edi++] = edx>>0x10;
                edx += eax;
            }

            A2++;
        }
    }
}

// Shadows
static void ___5e769h_order(byte * A0, int A1, int A2, int A3, int A4, int A5, int A6){

	int 	ecx, edi;

	helper(0, A5, A1, A2, A6, ___5a86ch);
	helper(0, A3, A5, A6, A4, ___5a86ch);
	helper(0, A3, A1, A2, A4, ___5b80ch);

	if(helper2(&A2, &A4)){

		while(A2 < A4){

			if((ecx = ___5b80ch[A2]) < (edi = ___5a86ch[A2])){
					
				ecx = ___5a86ch[A2];
				edi = ___5b80ch[A2];
			}

			edi >>= 0x10;
			ecx >>= 0x10;

//			if(edi < 0) edi = 0;
//			if(ecx > 0){

//				if(ecx > 0x140) ecx = 0x140;
//				if(edi <= 0x140){

					ecx -= edi;
					while(ecx--||++ecx){

						___243d80h[0x200*(A2-OFFSET)+0x60+edi] = A0[___243d80h[0x200*(A2-OFFSET)+0x60+edi]];
						edi++;
					}
//				}
//			}

			A2++;
		}
	}
}

// Objects
void ___5e137h(dword A1, int A2, int A3, int A4, int A5, int A6, int A7){

    int     i, j, args[6];

    args[0] = A2;
    args[1] = A3;
    args[2] = A4;
    args[3] = A5;
    args[4] = A6;
    args[5] = A7;

    j = 2*(!(A6 < A4)&&(A4 < A2)) + 4*((A6 < A4)&&(A6 < A2));
    i = 2*((A6 < A4)&&!(A4 < A2)) + 4*(!(A6 < A4)&&!(A6 < A2));
    
    ___5e137h_order(A1, args[j+1], args[j], args[i+1], args[i], args[6-(i+j)+1], args[6-(i+j)]);
}

// Trees
void ___5e3e8h(int A1, int A2, int A3, int A4, int A5, int A6, int A7, int A8, int A9){

    int     i, j, args[9];

    args[0] = A1;
    args[1] = A2;
    args[2] = A3;
    args[3] = A4;
    args[4] = A5;
    args[5] = A6;
    args[6] = A7;
    args[7] = A8;
    args[8] = A9;

    j = 3*(!(A8 < A5)&&(A5 < A2))+6*((A8 < A5)&&(A8 < A2));
    i = 3*((A8 < A5)&&!(A5 < A2))+6*(!(A8 < A5)&&!(A8 < A2));

    ___5e3e8h_order(args[j+2], args[j+1], args[j], args[i+2], args[i+1], args[i], args[9-(i+j)+2], args[9-(i+j)+1], args[9-(i+j)]);
}

// Shadows
void ___5e769h(byte * A1, int A2, int A3, int A4, int A5, int A6, int A7){

	int 	i, j, args[6];

	args[0] = A2;
	args[1] = A3;
	args[2] = A4;
	args[3] = A5;
	args[4] = A6;
	args[5] = A7;

	j = 2*(!(A6 < A4)&&(A4 < A2))+4*((A6 < A4)&&(A6 < A2));
	i = 2*((A6 < A4)&&!(A4 < A2))+4*(!(A6 < A4)&&!(A6 < A2));

	___5e769h_order(A1, args[j+1], args[j], args[i+1], args[i], args[6-(i+j)+1], args[6-(i+j)]);
}

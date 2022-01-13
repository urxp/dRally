#include "drally.h"

#pragma pack(1)
#define pg(v)	((v)&0xfff)

typedef struct NetPage {
	__WORD__ 	write_p;
	__WORD__ 	read_p;
	__BYTE__ 	data[0x1000];
} NetPage;

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern NetPage * ___24e4ach;

void ___6168ch(void);

int ___23594h_cdecl(__POINTER__ A0, int A1){

    __DWORD__   ebx;
	int 	i, n;


#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

        ___6168ch();

		i = -1;
		while(++i < 0x3e8){

			ebx = ___24e4ach->data[pg(___24e4ach->write_p-i-3)];

        	if(___24e4ach->data[pg(___24e4ach->write_p-i-1)] == (0xa*A1+3)){

        		if(___24e4ach->data[pg(___24e4ach->write_p-i-2)] == (0xa*A1+2)){

        			if(___24e4ach->data[pg(___24e4ach->write_p-i-ebx-4)] == (0xa*A1+1)){

        				if(___24e4ach->data[pg(___24e4ach->write_p-i-ebx-5)] == (0xa*A1)){

							n = -1;
							while(++n < (int)ebx){

								B(A0+n) = ___24e4ach->data[pg(___24e4ach->write_p-i-ebx+n-3)];
							}

							___24e4ach->data[pg(___24e4ach->write_p-i-1)] = 0;
							___24e4ach->data[pg(___24e4ach->write_p-i-2)] = 0;
							___24e4ach->data[pg(___24e4ach->write_p-i-3)] = 0;
							___24e4ach->data[pg(___24e4ach->write_p-i-ebx-4)] = 0;
							___24e4ach->data[pg(___24e4ach->write_p-i-ebx-5)] = 0;

							n = -1;
							while(++n < (int)ebx){

								___24e4ach->data[pg(___24e4ach->write_p-i-ebx+n-3)] = 0;
							}

        					return 1;
						}
					}
				}
			}
		}
	}
#endif // DR_MULTIPLAYER
    return 0;
}

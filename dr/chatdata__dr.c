#include "x86.h"

#define	Z 		___24e4ach
#define pg(v)	((v) & 0xfff)

#pragma pack(1)

typedef struct NetPage {
	dword 	pos;
	byte 	data[0x1000];
} NetPage;

#define netData(v) 	Z->data[pg(Z->pos-i+(v))]

    extern dword NetworkConnectionEstablished;
    extern NetPage * Z;

    void ___6168ch(void);

// 23594h
dword procChatData(byte * A0, dword A1){

	dword 	i,j,k;

	if(NetworkConnectionEstablished){

		___6168ch();

		i = -1;

		while(++i < 0x3e8){

			if(netData(-1) != 10*A1+3) continue;
			if(netData(-2) != 10*A1+2) continue;

			j = netData(-3);

			if(netData(-4-j) != 10*A1+1) continue;
			if(netData(-5-j) != 10*A1) continue;

			k = -1;

			while(++k < j){
				
				A0[k] = netData(-3-j+k);
				netData(-3-j+k) = 0;
			}

			netData(-1) = 0;
			netData(-2) = 0;
			netData(-3) = 0;
			netData(-4-j) = 0;
			netData(-5-j) = 0;

			return 1;
		}
	}

	return 0;
}

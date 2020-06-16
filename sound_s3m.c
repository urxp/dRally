#include "drally.h"

#pragma pack(1)
typedef struct s3m_position_s {
    byte    Order;
    byte    Row;
} s3m_position_t;

s3m_position_t S3M_Position = {0, 0};
s3m_position_t S3M_NewPosition = {0, 0};
int S3M_UpdatePosition = 0;

dword ___71a44h_cdecl(void){    // getPosition

	dword 	rslt;

	if(S3M_Position.Order){

		rslt = S3M_Position.Order-1;
		rslt <<= 8;
		rslt += S3M_Position.Row;

		return rslt&0xffff;
	}

	return 0xffffffff;
}

byte ___71a88h_cdecl(dword eax){    // setPosition

    if((S3M_UpdatePosition = !(eax == 0xffffffff))){

	    S3M_NewPosition.Order = eax>>8;
        S3M_NewPosition.Row = eax;
    }

	return 1;
}

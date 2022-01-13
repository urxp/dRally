#include "drally.h"

#pragma pack(1)
typedef struct s3m_position_s {
    __BYTE__    Order;
    __BYTE__    Row;
} s3m_position_t;

s3m_position_t S3M_Position = {0, 0};
s3m_position_t S3M_NewPosition = {0, 0};
int S3M_UpdatePosition = 0;

__DWORD__ ___71a44h_cdecl(void){    // getPosition

	__DWORD__ 	rslt;

	if(S3M_Position.Order){

		rslt = S3M_Position.Order-1;
		rslt <<= 8;
		rslt += S3M_Position.Row;

		return rslt&0xffff;
	}

	return 0xffffffff;
}

__BYTE__ ___71a88h_cdecl(__DWORD__ eax){    // setPosition

    if((S3M_UpdatePosition = !(eax == 0xffffffff))){

	    S3M_NewPosition.Order = eax>>8;
        S3M_NewPosition.Row = eax;
    }

	return 1;
}

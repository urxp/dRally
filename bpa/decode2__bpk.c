#include "x86.h"

#pragma aux decode4__bpk parm routine []
void decode4__bpk(dword nbytes, dword dst_offset, void * dst, void * src);

// 5905ch
#pragma aux decode2__bpk parm routine []
void decode2__bpk(void * dst, void * src){

	decode4__bpk(0, 0, dst, src);
}

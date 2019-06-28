#include "x86.h"

#if !defined(__WATCOMC__)

	#define BPK_MEMORY 0x400        // >= 710 bytes (2c6h)

#endif

#pragma pack(1)
typedef struct duo {
	word    prev;      // +0
	byte    data;      // +2
} duo;

	extern byte * BPK_Src;
	extern byte * BPK_Dst;
	extern dword BPK_Bytes;
	extern dword BPK_Src_BitsPosition;
	extern word ___199f14h;
	extern dword BPK_Src_BitsToRead;
	extern duo BPK_Dict[];
	extern word BPK_Work;
	extern int BPK_Dst_i;
	extern word BPK_Current;
	extern word BPK_Previous;
	extern word BPK_DictTop;
	extern dword BPK_Pushed;


#if defined(BPK_MEMORY)

	#define S_PUSH(v)   s_bpk[BPK_Pushed++] = v
	#define S_POP()     (((0x101 * s_bpk[--BPK_Pushed]) >> 3) & 0xff)

#else

	#define S_PUSH(v)   s__push(v)
	#define S_POP()     s__pop()

	static inline void s__push(dword);
	#pragma aux s__push = 	\
		"push 	eax"		\
		"inc 	BPK_Pushed"	\
		parm [eax]

	static inline dword s__pop();
	#pragma aux s__pop =    \
		"pop    eax"        \
		"ror    al, 3"      \
		"dec 	BPK_Pushed"	\
		modify  [eax]

#endif


static inline dword readBits(){

	dword result = D(BPK_Src + (BPK_Src_BitsPosition >> 3));
	result >>= (BPK_Src_BitsPosition & 7);
	result &= ~(~0 << BPK_Src_BitsToRead);

	BPK_Src_BitsPosition += BPK_Src_BitsToRead;

	return result;
}


// 592c8h
// LZW decompression, decoded bytes rotated right by 3 bits
#pragma aux decode4__bpk parm routine []
void decode4__bpk(dword nbytes, int dst_offset, void * dst, void * src){

#if defined(BPK_MEMORY)
	byte    s_bpk[BPK_MEMORY];
#endif

	BPK_Src = src;
	BPK_Dst = dst;
	BPK_Bytes = nbytes;

	BPK_Dst_i = ~dst_offset;
	BPK_Src_BitsPosition = 0;
	BPK_Src_BitsToRead = 9;
	___199f14h = 0x200;
	BPK_DictTop = 0x102;
	BPK_Pushed = 0;

	while((BPK_Current = readBits()) != 0x100){

		if(BPK_Current == 0x101){

			BPK_Src_BitsToRead = 9;
			___199f14h = 0x200;
			BPK_DictTop = 0x102;

			BPK_Current = readBits();
			BPK_Work = BPK_Current;

			S_PUSH(BPK_Work);
		}
		else {

			if(BPK_Current == BPK_DictTop){

				S_PUSH(BPK_Work);
				BPK_Work = BPK_Previous;
			}
			else BPK_Work = BPK_Current;	// is in dictionary

			while(BPK_Work > 0xff){

				S_PUSH(BPK_Dict[BPK_Work].data);
				BPK_Work = BPK_Dict[BPK_Work].prev;
			}

			S_PUSH(BPK_Work);

			BPK_Dict[BPK_DictTop].data = BPK_Work;
			BPK_Dict[BPK_DictTop].prev = BPK_Previous;

			if((++BPK_DictTop >= ___199f14h)&&(BPK_Src_BitsToRead != 0xc)){

				BPK_Src_BitsToRead++;
				___199f14h <<= 1;
			}
		}

		BPK_Previous = BPK_Current;

		while(BPK_Pushed){

			if(++BPK_Dst_i >= 0){

				if((BPK_Bytes == 0)||(BPK_Dst_i != BPK_Bytes)){

					BPK_Dst[BPK_Dst_i] = S_POP();
				}
				else {

				#if !defined(BPK_MEMORY)

					while(BPK_Pushed) S_POP();

				#endif

					return;
				}
			}
			else S_POP();
		}
	}
}

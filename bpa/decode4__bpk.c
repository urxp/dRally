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
	extern dword BPK_Src_Offset;
	extern dword BPK_Bytes;
	extern dword BPK_Src_BitsOffset;
	extern short ___199f14h;
	extern dword BPK_Src_BitsToRead;
	extern duo ___196f00h[];
	extern short BPK_Work;
	extern dword BPK_Src_i;
	extern dword BPK_Dst_i;
	extern byte ___199f1eh;
	extern short BPK_Current;
	extern word BPK_Previous;
	extern short ___199f1ch;
	extern dword BPK_Push;


#if defined(BPK_MEMORY)

	#define S_PUSH(v)   s_bpk[BPK_Push++] = v
	#define S_POP()     ((byte)((0x101 * s_bpk[BPK_Push]) >> 3))

#else

	#define S_PUSH(v)   BPK_Push++; s__push(v)
	#define S_POP()     s__pop()

	static inline void s__push(dword);
	#pragma aux s__push = parm []

	static inline dword s__pop();
	#pragma aux s__pop =    \
	"pop    eax"        \
	"ror    al, 3"      \
	modify  [eax]

#endif


	static inline dword readBits(){

		dword result = D(BPK_Src + (BPK_Src_BitsOffset >> 3));
		result >>= (BPK_Src_BitsOffset & 7);
		result &= ~(~0 << BPK_Src_BitsToRead);

		BPK_Src_BitsOffset += BPK_Src_BitsToRead;

		return result;
	}


// 592c8h
#pragma aux decode4__bpk parm routine []
void decode4__bpk(dword nbytes, dword src_offset, void * dst, void * src){

#if defined(BPK_MEMORY)
	byte    s_bpk[BPK_MEMORY];
#endif

	BPK_Src = src;
	BPK_Dst = dst;
	BPK_Src_Offset = src_offset;
	BPK_Bytes = nbytes;

	BPK_Dst_i = 0;
	BPK_Src_i = 0;
	BPK_Src_BitsOffset = 0;
	BPK_Src_BitsToRead = 9;
	___199f14h = 0x200;
	___199f1ch = 0x102;

	while((BPK_Current = readBits()) != 0x100){

		BPK_Push = 0;

		if(BPK_Current == 0x101){

			BPK_Src_BitsToRead = 9;
			___199f14h = 0x200;
			___199f1ch = 0x102;

			BPK_Current = readBits();
			BPK_Work = BPK_Current;
		}
		else {

			if(BPK_Current >= ___199f1ch){

				S_PUSH(BPK_Work);
				BPK_Work = BPK_Previous;
			}
			else BPK_Work = BPK_Current;

			while(BPK_Work > 0xff){

				S_PUSH(___196f00h[BPK_Work].data);
				BPK_Work = ___196f00h[BPK_Work].prev;
			}

			___196f00h[___199f1ch].data = BPK_Work;
			___196f00h[___199f1ch].prev = BPK_Previous;

			if((++___199f1ch >= ___199f14h)&&(BPK_Src_BitsToRead != 0xc)){

				BPK_Src_BitsToRead++;
				___199f14h <<= 1;
			}
		}

		BPK_Previous = BPK_Current;
		S_PUSH(BPK_Work);

		while(BPK_Push--){

#if defined(BPK_MEMORY)

			if(BPK_Src_i >= BPK_Src_Offset){

				if((BPK_Bytes == 0)||(BPK_Dst_i != BPK_Bytes)){

					BPK_Dst[BPK_Dst_i++] = S_POP();
				}
				else return;
			}
			else BPK_Src_i++;

#else

			___199f1eh = S_POP();

			if(BPK_Src_i >= BPK_Src_Offset){

				if((BPK_Bytes == 0)||(BPK_Dst_i != BPK_Bytes)){

					BPK_Dst[BPK_Dst_i++] = ___199f1eh;
				}
				else {

					while(BPK_Push--) S_POP();

					return;
				}
			}
			else BPK_Src_i++;

#endif
		}
	}
}

 #include "drally.h"


typedef struct bitreader_s {
	__BYTE__ *		p;
	__UNSIGNED__ 	position;
} bitreader_t;

static __WORD__ bitread_w(bitreader_t * br, int n_bits){
/*
	0        1        2        3
	11111111 11111111 11111111 11111111

	n_bits = 9
	76543210 -------8
*/

	int 		a, d, n;
	__WORD__	rslt;

	a = br->position/8;
	d = br->position%8;
	n = (n_bits+d+7)/8;

	rslt = 0;
	while(--n) rslt |= br->p[a+n]<<(8*n-d);
	
	rslt |= br->p[a+n]>>d;
	br->position += n_bits;

	return rslt&~((-1)<<n_bits);
}



#define STACKSIZE 0x400
static __DWORD__ StackTop = 0;
static __BYTE__ Stack[STACKSIZE];

static void __bpk_stack(__BYTE__ A){

    if(StackTop == STACKSIZE){

        printf("[dRally.BPK] STACK IS FULL!\n");
    }

    Stack[StackTop++] = A;
}

static __BYTE__ popStack(){

    if(StackTop == 0){

        printf("[dRally.BPK] STACK IS EMPTY!\n");
    }

    return Stack[--StackTop];
}

static void __bpk_unstack(void (*cb)(__BYTE__)){ 
	
	if(cb)	while(StackTop) cb(popStack());
	else 	StackTop = 0;
}

static struct d_entry_s {
	__WORD__ 	__0;
	__BYTE__ 	__1;
} dictionary[0x1000];

static __BYTE__ ROR_BYTE(__BYTE__ b, int n){

    return (b>>(n&7))|(b<<(8-(n&7)));
}

static bitreader_t 	br;
static __DWORD__	idbits = 9;
static __WORD__ 	idmax = 0x200;
static __WORD__ 	prev_code = 0;
static __WORD__ 	w_tmp = 0;
static __WORD__		id = 0x102;
static __DWORD__ 	bytes_out_cnt = 0;
static __DWORD__ 	bytes_dcd_cnt = 0;
static __BYTE__ 	EOD = 0;

static __BYTE__ * 	s_dst;
static __UNSIGNED__	s_size;
static __UNSIGNED__ s_offset;

static void __bpk_out(__BYTE__ outb){
	
	if(bytes_dcd_cnt++ >= s_offset){

		if(!s_size||(bytes_out_cnt != s_size)){

			s_dst[bytes_out_cnt++] = ROR_BYTE(outb, 3);
		}
		else {

			EOD = 1;
		}
	}
}


static __WORD__ __bpk_readcode(void){

	return bitread_w(&br, idbits);
}

static void ___bpk_resetdictionary(void){

	idbits = 9;
	idmax = 0x200;
	id = 0x101;
}

static void __bpk_checkdictionary(void){
	
	if((id++ != 0x101)&&(id >= idmax)&&(idbits != 0xc)){
	
		idbits++;
		idmax <<= 1;
	}
}
			
static __UNSIGNED__ __bpk_decode4(__UNSIGNED__ size, __UNSIGNED__ offset, __POINTER__ dst, __POINTER__ src){

    __WORD__	code;

	br.p = src;
	br.position = 0;
	s_dst = dst;
	s_offset = offset;
	s_size = size;

    __bpk_unstack(0);
	bytes_out_cnt = 0;
	bytes_dcd_cnt = 0;
	EOD = 0;
	___bpk_resetdictionary();

	while(!EOD){

		code = __bpk_readcode();

		if(code == 0x100) return bytes_out_cnt;
		if(code == 0x101){

			___bpk_resetdictionary();
		}
		else {

			dictionary[id].__0 = prev_code;
			dictionary[id].__1 = w_tmp&0xff;
			w_tmp = prev_code = code;

			while(w_tmp > 0xff){

				__bpk_stack(dictionary[w_tmp].__1);
				w_tmp = dictionary[w_tmp].__0;
			}

			__bpk_stack((dictionary[id].__1 = w_tmp&0xff));
			__bpk_unstack(&__bpk_out);
			__bpk_checkdictionary();
		}
	}

	return bytes_out_cnt;
}

void bpk_decode2(__POINTER__ dst, __POINTER__ src){

    __bpk_decode4(0, 0, dst, src);
}

/*
	[size]		- max number of decoded bytes to copy, copy all if 0
	[offset]	- skip first [offset] of decoded bytes
	[dst]		- decoded destination pointer
	[src]		- encoded source pointer
*/
void bpk_decode4(__DWORD__ size, __DWORD__ offset, __POINTER__ dst, __POINTER__ src){

	__bpk_decode4(size, offset, dst, src);
}

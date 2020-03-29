
static unsigned int __seed = 1;

void srand_watcom106(unsigned int seed){

    __seed = seed;
}

int rand_watcom106(void){

    __seed *= 0x41c64e6d;
    __seed += 0x3039;
 
	return (__seed>>0x10)&0x7fff;
}

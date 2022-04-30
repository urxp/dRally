
#ifndef __WATCOM106_H
#define __WATCOM106_H

void srand_watcom106(unsigned int seed);
int rand_watcom106(void);
char * strupr_watcom106(char * s);
char * strlwr_watcom106(char * s);
char * utoa_watcom106(int value, char * str, int radix);
char * itoa_watcom106(int value, char * str, int radix);

#endif // __WATCOM106_H

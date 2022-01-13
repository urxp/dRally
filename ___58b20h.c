#include "drally.h"
#include <stdarg.h>

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

void ___623d4h(void);
void __VGA3_SETMODE(void);
void dRally_System_clean(void);

unsigned char err_l[] = 
"\x01" "Unable to allocate sufficient amount of Base Memory!\0"
"\x02" "Unable to free Base Memory block!\0"
"\x03" "Unable to change the size of a Base Memory block!\0"
"\x04" "Unable to allocate sufficient amount of Flat Memory!\0"
"\x05" "Unable to free Flat Memory block!\0"
"\x06" "Unable to change the size Flat Memory block!\0"
"\x07" "Flat Memory block handle has changed while resizing!\0"
"\x08" "Selector Allocation failed! Not enough Selectors!\0"
"\x09" "Selector Deallocation failed!\0"
"\x0a" "Unable to set Selector's Base!\0"
"\x0b" "Unable to set Selector's Limit!\0"
"\x0c" "...\0"
"\x0d" "Unable to allocate sufficient amount of Heap Memory!\0"
"\x0e" "Unable to free a Heap Memory block!\0"
"\x0f" "Unable to change the size of a Heap Memory block!\0"
"\x10" "You need at least a standard VGA!\0"
"\x11" "Integrity Failure! File '%s' has been changed!\0"
"\x12" "File Error! Couldn't find Archive '%s'!\0"
"\x13" "File Error! Couldn't find File '%s'!\0"
"\x14" "File Error! Couldn't find File '%s' inside Archive '%s'!\0"
"\x15" "Unable to create Memory Log File '%s'!\0"
"\x16" "Unable to write to Memory Log File '%s'!\0"
"\x17" "Heap memory block size exceeded!\0"
"\x20" "SoundBlaster or compatible initialization failed!\0"
"\x21" "SoundBlaster or compatible I/O Error!\0"
"\x28" "Sound Module '%s' is invalid!\0"
"\x29" "Sound Module '%s' doesn't contain any data to play!\0"
"\xff";

void ___58b20h(int err_n, ...){

	va_list		args;
	int			n;

	n = 0;
	while((err_l[n] != 0xff)&&(err_n != err_l[n])) while(err_l[n++]);

	dRally_System_clean();
	
#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) ___623d4h();
#endif // DR_MULTIPLAYER

	__VGA3_SETMODE();

	printf("\nESP Fatal Error %d:\n--------------------\n", err_l[n]);

	if(err_l[n] == 0xff){

		printf("Undefined Fatal Error %d!\n\a", err_n);	
		exit(0xff);
	}

	va_start(args, err_n);
	while(err_l[++n]){

		if(err_l[n] == '%'){
				
			switch(err_l[++n]){
			case 'd':
				printf("%d", va_arg(args, int));
				break;
			case 's':
				printf("%s", va_arg(args, char *));
				break;
			default:
				putchar(err_l[--n]);
			}
		}
		else putchar(err_l[n]);
	}
	va_end(args);

	printf("\n\a");
	printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");

	exit(err_n);
}

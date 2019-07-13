#include "x86.h"

#define O_RDONLY        0x0000  /* open for read only */
#define O_BINARY        0x0200  /* binary file */

	int open__clib3r(const char * path, int oflag, ...);
	int close__clib3r(int fd);
	int filelength__clib3r(int fd);


// ~3a214h (-1 label)
int getFileSize__dr(const char * path){

	int 	fd, fsize;

	fd = open__clib3r(path, O_RDONLY|O_BINARY);
	fsize = filelength__clib3r(fd);
	close__clib3r(fd);

	return fsize;
}

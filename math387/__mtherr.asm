cpu 386

	extern	matherr_
	
DGROUP		GROUP	_DATA
SEGMENT _TEXT	PUBLIC USE32 ALIGN=2 CLASS=CODE

global __matherr
__matherr:
    jmp         matherr_
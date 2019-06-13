typedef unsigned char 	byte;
typedef unsigned long 	dword;

	void setbank__video(dword);
	void chkgx__video(void);

dword chkbankswitch__video(void){

	chkgx__video();

//	setbank__video(0);
//	*(byte *)0xa0000 = 0;
	setbank__video(1);
	*(byte *)0xa0000 = 0;
	setbank__video(0);
	*(byte *)0xa0000 = 1;
	setbank__video(1);

	if(*(byte *)0xa0000 == 1) return 1;

	setbank__video(0);
	*(byte *)0xa0000 = 0;
//	setbank__video(1);
//	*(byte *)0xa0000 = 0;

	return 0;
}

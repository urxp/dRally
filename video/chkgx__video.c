typedef unsigned char 	byte;
typedef unsigned long	dword;

	extern GXType;

    void * memcpy__clib3r(void * dest, const void * src, dword n);

void chkgx__video(void){

	byte 	VGABiosRom[0x190];
    dword   n;

	memcpy__clib3r(VGABiosRom, (void *)0xc0000, 0x190);

    for(n=0;n<0x190;n++){

        if((VGABiosRom[n] > 0x60)&&(VGABiosRom[n] <= 0x84)){

            VGABiosRom[n] -= 0x20;
        }
    }

	GXType = 0;

    for(n=0;n<0x190;n++){

        if(VGABiosRom[n+0] == 'C'){
        if(VGABiosRom[n+1] == 'I'){
        if(VGABiosRom[n+2] == 'R'){
        if(VGABiosRom[n+3] == 'R'){
        if(VGABiosRom[n+4] == 'U'){
        if(VGABiosRom[n+5] == 'S'){

            GXType = 2;
        }}}}}}
    }
}

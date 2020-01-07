#define X(d) (*(unsigned short *)&(d))
#define L(d) (*(unsigned char *)&(d))
#define H(d) (*(((unsigned char *)&(d))+1))

#define D(d)	(*((dword *)(d)))
#define W(w)	(*((word *)(w)))
#define B(b)	(*((byte *)(b)))

typedef unsigned int 	dword;
typedef unsigned short 	word;
typedef unsigned char 	byte;

#pragma pack(1)

typedef struct {
    dword   linear;     // +0
    dword   nbytes;     // +4
    word    selector;   // +8
    word    segment;    // +0ah
    byte    lock;       // +0ch
} DOSAllocStruct;

#define DMA5_PAGE           0x8B
#define DMA5_ADDRES         0xC4
#define DMA5_COUNT          0xC6
#define DMA_SINGLE_MASK     0xD4
#define DMA_TRANSFER_MODE   0xD6
#define DMA_CLEAR_POINTER   0xD8

extern word A2x4h_Mixer_Chip_Register_Address_Port_WO;
extern word A2x5h_Mixer_Chip_Data_Port_RW;
extern word A2x6h_DSP_Reset_WO;
extern word A2xAh_DSP_Read_Data_Port_RO;
extern word A2xEh_DSP_Read_Buffer_Status_Bit_7_RO;
extern word A2xEh_DSP_Interrupt_Acknowledge;
extern word A2xFh_DSP_16Bit_Interrupt_Acknowledge;
extern word A2xCh_DSP_Write_Buffer_Status_Bit_7_R;
extern word A2xCh_DSP_Write_Command_Data_W;

extern DOSAllocStruct ___24f760h[];
extern DOSAllocStruct ___24f7c8h;
extern DOSAllocStruct ___24f7d8h;


void ___58b20h(int n, ...);
void ___5f734h_allocDosMem(DOSAllocStruct *, dword, dword);
void ___5f7fch_freeDosMem(DOSAllocStruct *);
void memset_cdecl(dword, dword, dword);
void memcpy_cdecl(dword, dword, dword);


static byte in_b(word port);
#pragma aux in_b =      \
    "in     al, dx"		\
    parm [dx]			\
    value [al]

static word in_w(word port);
#pragma aux in_w =      \
	"in		al, dx"		\
	"mov	ah, al"		\
	"in		al, dx"		\
	"xchg	al, ah"		\
    parm [dx]			\
    value [ax]

static void out_b(word port, byte value);
#pragma aux out_b =		\
    "out	dx, al"		\
    parm [dx][al]

static void out_w(word port, word value);
#pragma aux out_w =     \
    "out    dx, al"     \
    "mov    al, ah"     \
    "out    dx, al"     \
    parm [dx][ax]

void START_DMA(dword dma_ch, dword dma_mode,
                        dword length, dword linear_address){

// disable channel1(5)
    out_b(DMA_SINGLE_MASK, (dma_ch & 3) | 4);


    out_b(DMA_CLEAR_POINTER, 0);


    out_b(DMA_TRANSFER_MODE, (dma_ch & 3) | dma_mode);


    out_w(DMA5_ADDRES, linear_address >> 1);


    out_w(DMA5_COUNT, (length >> 1) - 1);   // 16-bit, number of words - 1


    out_b(DMA5_PAGE, linear_address >> 16);

// enable channel1(5)
    out_b(DMA_SINGLE_MASK, (dma_ch & 3));
}

dword DMA_BYTES_TRANSFERED(void){

	word 	ax, bx;

	out_b(DMA_CLEAR_POINTER, 0);
	bx = in_w(DMA5_COUNT);
	ax = in_w(DMA5_COUNT);
	bx -= ax;

	if(bx > 0x7f){
	
		ax = in_w(DMA5_COUNT);
	}

	return ax+1;
}

void DSP_WRITE(byte b){

	dword c = 0x400;

	while(in_b(A2xCh_DSP_Write_Buffer_Status_Bit_7_R)&0x80){
	
		if(--c == 0) ___58b20h(0x21);
	}

	out_b(A2xCh_DSP_Write_Command_Data_W, b);
}

extern byte SOUND_TYPE;
extern byte ___19a27bh;
extern dword MASTER_VOLUME;
extern dword MSX_VOLUME;
extern dword SFX_VOLUME;
void ___65788h_updateVolume_cdecl(void);

void dRally_Audio_setMasterVolume(dword vol){

	if(SOUND_TYPE&&___19a27bh){
	
		MASTER_VOLUME = vol;
		___65788h_updateVolume_cdecl();
	}
}

void dRally_Audio_setMusicVolume(dword vol){

	if(SOUND_TYPE&&___19a27bh){
	
		MSX_VOLUME = vol;
		___65788h_updateVolume_cdecl();
	}
}

void dRally_Audio_setEffectVolume(dword vol){

	if(SOUND_TYPE&&___19a27bh){

		SFX_VOLUME = vol;
		___65788h_updateVolume_cdecl();
	}
}





/* void * */ dword DMA_ALLOC_BUFFER(byte dma_ch, dword size, byte b){

	dword 	tmpx, offset;

	offset = 0;

	if(size > 0x8000){

		___5f734h_allocDosMem(&___24f7d8h, size+0x10000, 1);
		tmpx = 0x10000 - (___24f7d8h.linear&0xffff);
		___5f7fch_freeDosMem(&___24f7d8h);
		___5f734h_allocDosMem(&___24f7d8h, tmpx-0x10, 1);
		___5f734h_allocDosMem(&___24f760h[dma_ch], size, 1);
		___5f7fch_freeDosMem(&___24f7d8h);

		if(___24f760h[dma_ch].linear&0xffff){

			___5f7fch_freeDosMem(&___24f760h[dma_ch]);
			___5f734h_allocDosMem(&___24f760h[dma_ch], size+0x10000, 1);

			if(___24f760h[dma_ch].linear&0xffff){
			
				offset = 0x10000 - (___24f760h[dma_ch].linear&0xffff);
			}
		}
	}
	else {

		___5f734h_allocDosMem(&___24f7d8h, size, 1);
		___5f734h_allocDosMem(&___24f7c8h, size, 1);

		if(((___24f7d8h.linear + size)&0xffff) < size){

			memcpy_cdecl(&___24f760h[dma_ch], &___24f7c8h, sizeof(DOSAllocStruct));
			___5f7fch_freeDosMem(&___24f7d8h);
		}
		else {
		
			memcpy_cdecl(&___24f760h[dma_ch], &___24f7d8h, sizeof(DOSAllocStruct));
			___5f7fch_freeDosMem(&___24f7c8h);
		}
	}

	memset_cdecl(___24f760h[dma_ch].linear, b, size+offset);

	return ___24f760h[dma_ch].linear+offset;

/*
	___5f734h_allocDosMem(&___24f760h[dma_ch], size, 1);
	memset_cdecl(___24f760h[dma_ch].linear, b, size);
	return ___24f760h[dma_ch].linear;
*/
}

void ___691deh_cdecl(dword, dword, dword);

extern 	/* void * */ dword ___775d0h;
extern	dword ___775cch;
extern 	/* void * */ dword ___775c8h;

void ___77741h_cdecl(void){

	dword 	n;

	n = DMA_BYTES_TRANSFERED() >> 1;

	if(___775c8h != ___775d0h){

		if(___775c8h != (___775d0h+___775cch)){

			if(n <= ___775cch) return;

		}
		else {

			if((n > ___775cch)&&(n <= (2*___775cch))) return;
		}
	}
	else {

		if(n > (2*___775cch)) return;
	}

	___691deh_cdecl(___775cch, ___775cch, ___775c8h);
	___775c8h += 4*___775cch;

	if(___775c8h == (12*___775cch+___775d0h)) ___775c8h = ___775d0h;
}


extern word LOC_SOUND_ADDR;
extern byte LOC_SOUND_IRQ;
extern byte LOC_SOUND_DMA;


void ___779f9h_SB16_setPorts_cdecl(word addr, byte irq_n, byte dma_ch){

	LOC_SOUND_ADDR = addr;
	LOC_SOUND_IRQ = irq_n;
	LOC_SOUND_DMA = dma_ch;

	A2x4h_Mixer_Chip_Register_Address_Port_WO = addr+4;
	A2x5h_Mixer_Chip_Data_Port_RW = addr+5;
	A2x6h_DSP_Reset_WO = addr+6;
	A2xAh_DSP_Read_Data_Port_RO = addr+10;
	A2xCh_DSP_Write_Command_Data_W = addr+12;
	A2xCh_DSP_Write_Buffer_Status_Bit_7_R = addr+12;
	A2xEh_DSP_Read_Buffer_Status_Bit_7_RO = addr+14;
	A2xEh_DSP_Interrupt_Acknowledge = addr+14;
	A2xFh_DSP_16Bit_Interrupt_Acknowledge = addr+15;
}

dword DSP_RESET(void){

	dword n;

	out_b(A2x6h_DSP_Reset_WO, 1);

	n = 0x100;
	while(n--);

	out_b(A2x6h_DSP_Reset_WO, 0);

	n = 0x10000;
	while(n--){

		if(in_b(A2xEh_DSP_Read_Buffer_Status_Bit_7_RO)&0x80){

			if(in_b(A2xAh_DSP_Read_Data_Port_RO) == 0xaa) return 1;
		}
	}

	return 0;
}

void ___779a1h_SB16_resetDSP_cdecl(void){

	if(!DSP_RESET()) ___58b20h(0x20);
}

extern byte StereoSound;

void ___7792dh_setStereo_cdecl(void){

	byte al;

	out_b(A2x4h_Mixer_Chip_Register_Address_Port_WO, 0xe);
	al = in_b(A2x5h_Mixer_Chip_Data_Port_RW);
	al |= 0x20;
	al &= 0xfd;
	if(StereoSound) al |= 2;
	out_b(A2x5h_Mixer_Chip_Data_Port_RW, al);
}

extern byte SOUND_DMA;
extern byte SOUND_IRQ;
extern word SOUND_ADDR;
extern word SOUND_SAMPLERATE;
extern word ___775e0h;
extern dword ___775d4h;
extern dword ___775d8h;
extern dword ___775dch;
extern byte ___688c5h;
extern dword ___688c8h;

void ___7c6d4h_cdecl(dword, dword, dword, dword, dword, dword);
void INSTALL_AUDIO_CB_cdecl(void (*)(void));

void ___771f4h_SB16_init_cdecl(void){

	___779f9h_SB16_setPorts_cdecl(SOUND_ADDR, SOUND_IRQ, SOUND_DMA);
	___779a1h_SB16_resetDSP_cdecl();
	___779a1h_SB16_resetDSP_cdecl();

// Time Constant = 65536 - (256 000 000/(channels * sampling rate))

	SOUND_SAMPLERATE = 1000000/(1000000/SOUND_SAMPLERATE);

	___775e0h = 256-(1000000/SOUND_SAMPLERATE);		//	234 (44100 Hz)
	___775cch = SOUND_SAMPLERATE/50;				//	909 (44100 Hz)

	if(SOUND_TYPE){

		___775d8h = ___775d4h = 12*___775cch;
		___775dch = 0x10000;
		___688c8h = (0x6000*___688c5h)/25600;

		___7c6d4h_cdecl(___775cch, (StereoSound = 1), 1, 0, 0, 0xff);
		___775d0h = ___775c8h = DMA_ALLOC_BUFFER(SOUND_DMA, ___775d4h, 0);
	}

	___7792dh_setStereo_cdecl();
	//INSTALL_SOUND_ISR(SOUND_ISR);
	INSTALL_AUDIO_CB_cdecl(___77741h_cdecl);
	START_DMA(SOUND_DMA, 0x58, ___775d8h, ___775d0h);  
}

extern byte ___775f0h;

void ___77664h(void){

	//in_b(A2xFh_DSP_16Bit_Interrupt_Acknowledge);

	if(SOUND_TYPE){

	//	Program 16-bit DMA mode digitized sound I/O
	//	;;	0xB0	digital-to-analog, single-cycle DMA mode, FIFO off
	//	;; 	0xB6	digital-to-analog, auto-init DMA mode, FIFO on
		DSP_WRITE(0xb6);
		DSP_WRITE((StereoSound << 5) | 0x10);	// signed
		DSP_WRITE(___775dch-1);					//	wBlockSize.LowByte	
		DSP_WRITE((___775dch-1)>>8);			//	wBlockSize.HighByte
	}

	___775f0h = 1;
}

extern byte ___19a278h;
extern byte ___19a27ah;
void ___775f1h_cdecl(void);

void ___685a4h_cdecl(void){

	if(!___19a278h){

		if(SOUND_TYPE){
		
			___771f4h_SB16_init_cdecl();
			___775f1h_cdecl();
		}

		___19a278h = 1;
		___19a27ah = 0;
	}
}

extern dword MSX_struct_content_ptr;
extern dword MSX_struct_type;
extern dword ___68a90h[];
extern word ___68c40h;
extern byte ___19a280h;
extern byte ___19a281h;

void ___68c42h_cdecl(void);
void ___718ech_cdecl(void);

void ___6815ch_cdecl(void){

	dword 	n;

	if(___19a27bh){

		if(MSX_struct_content_ptr){

			if(MSX_struct_type) ___718ech_cdecl();
		}
		else {

			___68c42h_cdecl();
			___68c40h = 0x2ee;

			n = -1;
			while(++n < 0x20) ___68a90h[n] = 0x8000;

			___685a4h_cdecl();

			___19a280h = 1;
			___19a281h = 0;
		}
	}
}

extern dword SFX_struct_content_ptr;
extern dword ___24e5c0h[];
extern dword ___68bb0h[];
extern dword ___19a279h;

void ___65788h_updateVolume_cdecl(void){

	int 	n;
	dword 	eax;

	n = -1;
	
	if(SFX_struct_content_ptr == 0){

		while(++n < 0x20){

			eax = ((long long)MASTER_VOLUME*(long long)MSX_VOLUME) >> 16;
			___68bb0h[n] = ((long long)eax*(long long)___24e5c0h[n]) >> 16;
		}
	}
	else {

		while(n++ < (((int)___19a279h) >> 0x18)){

			eax = ((long long)MASTER_VOLUME*(long long)MSX_VOLUME) >> 16;
			___68bb0h[n] = ((long long)eax*(long long)___24e5c0h[n]) >> 16;
		}

		while(n < 0x20){

			___68bb0h[n++] = ((long long)MASTER_VOLUME*(long long)SFX_VOLUME) >> 16;
		}
	}
}


void ___STOREDWORD(dword * dst, dword d, dword n){

	while(n--) *dst++ = d;
}

void ___64a28h_cdecl(void);
void ___649a8h_cdecl(void);
void ___680c8h_cdecl(void);
void ___5fff2h_cdecl(dword);
void ___6000fh_cdecl(dword);
void ___67e48h_allocSounds_cdecl(dword msx_t, dword msx_f, dword sfx_t, dword sfx_f, dword num_ch);


//;;	dRally_Audio_load(MSX_type, MSX_file, SFX_type, SFX_file, num_channels);
void dRally_Audio_load(dword msx_t, dword msx_f, dword sfx_t, dword sfx_f, dword num_ch){

	___649a8h_cdecl();
	___680c8h_cdecl();
	___6000fh_cdecl(___64a28h_cdecl);
	___67e48h_allocSounds_cdecl(msx_t, msx_f, sfx_t, sfx_f, num_ch);
	___STOREDWORD(___24e5c0h, 0x10000, 0x20);
	MASTER_VOLUME = MSX_VOLUME = SFX_VOLUME = 0x10000;
	___65788h_updateVolume_cdecl();
	___5fff2h_cdecl(___64a28h_cdecl);
}

extern byte ___199ff4h;
extern dword ___199ff8h;
extern dword ___24e640h;

void ___68d07h(void);
void ___6879ch_cdecl(void);
void ___68d01h_cdecl(dword);

void dRally_Audio_play(void){

	if(___199ff4h){

		___199ff4h = 0;
		___68d01h_cdecl(___68d07h);
		dRally_Memory_free(___199ff8h);
		___199ff8h = 0;
		dRally_Memory_free(___24e640h);
		___24e640h = 0;
	}

	___6879ch_cdecl();

	if(SOUND_TYPE&&___19a27bh){

		___6815ch_cdecl();
		___5fff2h_cdecl(___649a8h_cdecl);
	}
}

extern dword ___68c3ch;
extern byte ___68b10h[];
extern word ___688d0h[];
extern dword ___68910h[];
extern dword ___68990h[];
extern dword ___68a10h[];
extern byte ___19a27ch;
extern word ___24e7a0h;
extern word ___19a27eh;
extern dword * ___24e79ch;
extern dword * ___24e798h;
extern word ___24e750h[];

void dRally_Audio_playSoundEffect(byte channel, byte n, dword unk, 
						dword a0, dword a1, dword a2){

	if(SOUND_TYPE == 0) return;
	if(___19a27bh == 0) return;
	if(SFX_struct_content_ptr == 0) return;
	if(!channel) return;
	channel += ___19a27ch;
	if(channel > ___68c3ch) return;
	if(n > (short)___24e7a0h) return;

	___68910h[channel] = unk;
	___688d0h[channel] = ___19a27eh+n;
	___68990h[channel] = ((long long)___24e79ch[n] * (long long)a1) >> 16;
	___68a10h[channel] = ((long long)___24e798h[n] * (long long)a0) >> 16;
	___24e750h[channel] = n;
	___68b10h[channel] = 0;
	___68a90h[channel] = a2;
}

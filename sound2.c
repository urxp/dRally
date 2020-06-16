#include "drally.h"

#pragma pack(1)
typedef struct xm_s {
	char 	id_text[0x11];		// +0
	char 	mod_name[0x14];		// +11h
	char 	__1ah;				// +25h
	byte 	unk1[0x14];			// +26h
	word 	version;			// +3ah
	dword 	header_size;		// +3ch
	word 	song_length;		// +40h
	byte 	unk2[2];			// +42h
	word 	channels;			// +44h
	word 	patterns;			// +46h
	word 	instruments;		// +48h
	byte 	unk3[];				// +4ah
} xm_t;

typedef struct xm_pattern_s {
	dword 	header_size;		//	+0
	byte 	type;				//	+4	Packing type (always 0)
	word 	rows;				//	+5	Number of rows in pattern (1..256)
	word 	packed_size;		//	+7	Packed patterndata size
	byte 	packed_data[];		//	+9	Packed pattern data
} xm_pattern_t;

typedef struct xm_instrument_s {
	dword 	size;				//	+0
	byte 	unk[0x17];			// 	+4
	word 	n_samples;			// 	+1bh
	dword 	sample_header_size;	//	+1dh
} xm_instrument_t;

typedef struct xm_sample_s {
	int 		size;				//	+0		Sample length
   	dword 		loop_start;			//	+4		Sample loop start
	dword 		loop_length;		//	+8		Sample loop length
   	byte 		volume;				// 	+0ch	Volume
   	signed char	finetune;			//	+0dh	Finetune (signed byte -16..+15)
   	byte 		type;				//	+0eh	Type: Bit 0-1: 0 = No loop, 1 = Forward loop, 2 = Ping-pong loop;
                            		//         				4: 16-bit sampledata
   	byte 		panning;			//	+0fh	Panning (0-255)
   	signed char rel_note;			//	+10h	Relative note number (signed byte)
   	byte 		reserved;			//	+11h	Reserved
   	char		name[22];			//	+12h	Sample name
} xm_sample_t;

typedef struct sound_mod_s {
	int 	type;
	int 	channels;
	int 	samples;
	void * 	data;
	dword 	size;
} sound_mod_t;

typedef struct sampledata_s {
	void *	start_p;
	void * 	end_p;
	void * 	loopstart_p;
	void * 	loopend_p;
	byte 	flags;
} sampledata_t;

typedef struct samplelib_s {
	int 			n_samples;
	int 			n_msx_samples;
	int 			n_sfx_samples;
	void * 			header_alloc;
	void *			data_alloc;
	void * 			write_p;
	sampledata_t * 	samples;
	int *			samples_volume;
	int * 			samples_frequency;
} samplelib_t;

void * dRally_Memory_resize(void * mem, dword size);
void SampleLib_addSample(void *, void *, void *, void *, dword);
dword ___71b70h_cdecl(dword);
dword XM_getPeriod(int Note, int FineTune);


extern samplelib_t SampleLib;
byte ___19ae04h[4] = {0};


static xm_pattern_t * XM_getPattern(xm_t * xm, int pat_n){

	dword 				n;
	xm_pattern_t * 		xm_pat_p;

	xm_pat_p = (void *)&xm->header_size+xm->header_size;

	n = -1;
	while(++n < pat_n) xm_pat_p = (void *)xm_pat_p+xm_pat_p->header_size+xm_pat_p->packed_size;

	return xm_pat_p;
}

static xm_instrument_t * XM_getInstrument(xm_t * xm, int ins_n){

	dword 				m, n, accm;
	xm_instrument_t * 	xm_ins_p;
	xm_sample_t * 		xm_smpl_p;


	xm_ins_p = (xm_instrument_t *)XM_getPattern(xm, xm->patterns);

	n = -1;
	while(++n < ins_n){
		
		xm_smpl_p = (void *)xm_ins_p+xm_ins_p->size;

		accm = 0;
		m = -1;
		while(++m < xm_ins_p->n_samples){

			accm += xm_smpl_p->size;
			xm_smpl_p = (void *)xm_smpl_p+xm_ins_p->sample_header_size;
		}

		xm_ins_p = (void *)xm_smpl_p+accm;
	}

	return xm_ins_p;
}

static xm_sample_t * XM_getInstrumentSamples(xm_instrument_t * xm_ins_p){

	return (void *)xm_ins_p+xm_ins_p->size;
}

static void * XM_getInstrumentSamplesData(xm_instrument_t * xm_ins_p){

	return (void *)xm_ins_p+xm_ins_p->size+xm_ins_p->sample_header_size*xm_ins_p->n_samples;
}

static void ___7569ch_cdecl(void * smpl_d, xm_sample_t * smpl_h, dword ins_idx, dword ins_smpls){

	dword 	n, smpl_bytes;
	void 	* isd_p, * isd_end_p, * isd_loop_p, * isd_loopend_p;
	byte 	flags;
	int 	old;

	if(ins_smpls == 0){

		SampleLib_addSample(___19ae04h, ___19ae04h+3, ___19ae04h, ___19ae04h+3, 0);
		SampleLib.samples_volume[ins_idx+1] = 0;
		SampleLib.samples_frequency[ins_idx+1] = 0;
	}
	else {

		flags = ((smpl_h->type&0x10)>>2)|(smpl_h->type&3);
		smpl_bytes = 1+!!(flags&4);
		isd_p = smpl_d;
		isd_end_p = smpl_d+smpl_h->size-smpl_bytes;
		isd_loop_p = smpl_d+smpl_h->loop_start-smpl_bytes;
		isd_loopend_p = smpl_d+smpl_h->loop_start+smpl_h->loop_length-smpl_bytes;
		if(smpl_h->loop_length == 0) flags &= 0xfc;

		old = 0;
		n = -1;
		if(flags&4){	// 16-bit samples

			while(++n < (smpl_h->size/2)){

				old += ((word *)smpl_d)[n];
				((word *)smpl_d)[n] = old;
			}
		}
		else {				//	8-bit samples

			while(++n < smpl_h->size){
				old += ((byte *)smpl_d)[n];
				((byte *)smpl_d)[n] = old^0x80;
			}
		}

		if(flags&3) isd_end_p = isd_loopend_p = (isd_end_p < isd_loopend_p) ? isd_end_p : isd_loopend_p;

		SampleLib.samples_volume[ins_idx+1] = smpl_h->volume<<0xa;
		SampleLib.samples_frequency[ins_idx+1] = ___71b70h_cdecl(XM_getPeriod(smpl_h->rel_note+0x31, smpl_h->finetune));
		SampleLib_addSample(isd_p, isd_end_p, isd_loop_p, isd_loopend_p, flags);
	}
}

void ___75840h(sound_mod_t * smod){

	dword 				n;
	void *				hi_p;
	void * 				xm_smpl_data_p;
	xm_instrument_t * 	xm_ins_p;
	xm_sample_t * 		xm_smpl_p;
	xm_t *				sfx_p;

	sfx_p = (xm_t *)smod->data;
	hi_p = (void *)sfx_p+smod->size-1;
	printf("=============  XM resize: %6d >>>> ", smod->size);

	n = -1;
	while(++n < sfx_p->instruments){
		
		xm_ins_p = XM_getInstrument(sfx_p, n);
		xm_smpl_p = XM_getInstrumentSamples(xm_ins_p);
		xm_smpl_data_p = XM_getInstrumentSamplesData(xm_ins_p);
		___7569ch_cdecl(xm_smpl_data_p, xm_smpl_p, n, xm_ins_p->n_samples);

		if(hi_p > xm_smpl_data_p) hi_p = xm_smpl_data_p;
	}

	printf("%6d\n", hi_p-(void *)sfx_p);
	dRally_Memory_resize(sfx_p, hi_p-(void *)sfx_p);
}

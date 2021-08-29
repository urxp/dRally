#include "drally.h"
#include "draudio.h"
#include "drmemory.h"

#pragma pack(1)
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

void SampleLib_addSample(void *, void *, void *, void *, dword);
dword ___71b70h_cdecl(dword);
dword XM_getPeriod(int Note, int FineTune);


extern samplelib_t SampleLib;
byte ___19ae04h[4] = {0};


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
	while(++n < sfx_p->instrumentCount){
		
		xm_ins_p = XM_getInstrument(sfx_p, n);
		xm_smpl_p = XM_getInstrumentSamples(xm_ins_p);
		xm_smpl_data_p = XM_getInstrumentSamplesData(xm_ins_p);
		___7569ch_cdecl(xm_smpl_data_p, xm_smpl_p, n, xm_ins_p->n_samples);

		if(hi_p > xm_smpl_data_p) hi_p = xm_smpl_data_p;
	}

	printf("%6d\n", hi_p-(void *)sfx_p);
	dRMemory_resize(sfx_p, hi_p-(void *)sfx_p);
}

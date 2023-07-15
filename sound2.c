#include "drally.h"
#include "draudio.h"
#include "drmemory.h"

#pragma pack(1)
typedef struct sound_mod_s {
	int 	type;
	int 	channels;
	int 	samples;
	__POINTER__ 	data;
	__DWORD__ 	size;
} sound_mod_t;

typedef struct sampledata_s {
	__POINTER__	start_p;
	__POINTER__ 	end_p;
	__POINTER__ 	loopstart_p;
	__POINTER__ 	loopend_p;
	__BYTE__ 	flags;
} sampledata_t;

typedef struct samplelib_s {
	int 			n_samples;
	int 			n_msx_samples;
	int 			n_sfx_samples;
	__POINTER__ 			header_alloc;
	__POINTER__			data_alloc;
	__POINTER__ 			write_p;
	sampledata_t * 	samples;
	int *			samples_volume;
	int * 			samples_frequency;
} samplelib_t;

void SampleLib_addSample(__POINTER__, __POINTER__, __POINTER__, __POINTER__, __DWORD__);
__DWORD__ ___71b70h_cdecl(__DWORD__);
__DWORD__ XM_getPeriod(int Note, int FineTune);


extern samplelib_t SampleLib;
__BYTE__ ___19ae04h[4] = {0};


static void ___7569ch_cdecl(__POINTER__ smpl_d, xm_sample_t * smpl_h, __DWORD__ ins_idx, __DWORD__ ins_smpls){

	__DWORD__ 	n, smpl_bytes;
	void 	* isd_p, * isd_end_p, * isd_loop_p, * isd_loopend_p;
	__BYTE__ 	flags;
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

				old += ((__WORD__ *)smpl_d)[n];
				((__WORD__ *)smpl_d)[n] = old;
			}
		}
		else {				//	8-bit samples

			while(++n < smpl_h->size){
				old += ((__BYTE__ *)smpl_d)[n];
				((__BYTE__ *)smpl_d)[n] = old^0x80;
			}
		}

		if(flags&3) isd_end_p = isd_loopend_p = (isd_end_p < isd_loopend_p) ? isd_end_p : isd_loopend_p;

		SampleLib.samples_volume[ins_idx+1] = smpl_h->volume<<0xa;
		SampleLib.samples_frequency[ins_idx+1] = ___71b70h_cdecl(XM_getPeriod(smpl_h->rel_note+0x31, smpl_h->finetune));
		SampleLib_addSample(isd_p, isd_end_p, isd_loop_p, isd_loopend_p, flags);
	}
}

void ___75840h(sound_mod_t * smod){

	__DWORD__ 				n;
	__POINTER__				hi_p;
	__POINTER__ 				xm_smpl_data_p;
	xm_instrument_t * 	xm_ins_p;
	xm_sample_t * 		xm_smpl_p;
	xm_t *				sfx_p;

	sfx_p = (xm_t *)smod->data;
	hi_p = (__POINTER__)sfx_p+smod->size-1;
	printf("=============  XM resize: %6d >>>> ", smod->size);

	n = -1;
	while(++n < sfx_p->instrumentCount){
		
		xm_ins_p = XM_getInstrument(sfx_p, n);
		xm_smpl_p = XM_getInstrumentSamples(xm_ins_p);
		xm_smpl_data_p = XM_getInstrumentSamplesData(xm_ins_p);
		___7569ch_cdecl(xm_smpl_data_p, xm_smpl_p, n, xm_ins_p->n_samples);

		if(hi_p > xm_smpl_data_p) hi_p = xm_smpl_data_p;
	}

	printf("%6td\n", hi_p-(__POINTER__)sfx_p);
	dRMemory_resize((__POINTER__)sfx_p, hi_p-(__POINTER__)sfx_p);
}

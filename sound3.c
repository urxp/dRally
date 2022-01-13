#include "drally.h"
#include "draudio.h"
#include "drmemory.h"

#pragma pack(1)
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

typedef struct sound_mod_s {
	int 	type;
	int 	channels;
	int 	samples;
	__POINTER__ 	data;
	__DWORD__ 	size;
} sound_mod_t;

typedef struct music_s {
    __BYTE__        ch_map[32];
    __DWORD__ *     c2spd;
    __POINTER__*     patterns;
    __BYTE__ *      ch_settings;
    __BYTE__ *	    orders;
    __BYTE__ *      panning;
    __BYTE__ *      volume;
    __POINTER__      s3m_p;
    __WORD__        n_patterns;
    __BYTE__        n_orders;
    __BYTE__        tempo;
    __BYTE__        global_volume;
    __BYTE__        speed;
} music_t;


__POINTER__ ___5f248h_cdecl(__DWORD__);
__POINTER__ ___5f26ch_cdecl(__DWORD__); 
void ___5f2b4h_cdecl(void);

extern music_t Music;
extern samplelib_t SampleLib;
__BYTE__ * ___19a464h;

void SampleLib_addSample(__POINTER__, __POINTER__, __POINTER__, __POINTER__, __DWORD__);

static void ___71608h_cdecl(s3m_t * s3m, __DWORD__ ins_n){

	__POINTER__ 	isd_p, isd_end_p, isd_loop_p, isd_loopend_p;
    s3m_instrument_t * ins_p;

    ins_p           = S3M_getInstrument(s3m, ins_n);
	isd_p           = S3M_getInstrumentSampleData(s3m, ins_n);
	isd_end_p       = isd_p+ins_p->pcm.length-1;
    isd_loop_p      = isd_p+ins_p->pcm.loopStart-1;
	isd_loopend_p   = isd_p+ins_p->pcm.loopEnd-1;

	if(ins_p->pcm.flags&1) isd_end_p = isd_loopend_p = (isd_end_p < isd_loopend_p) ? isd_end_p : isd_loopend_p;

	Music.volume[ins_n+1] = ins_p->pcm.volume;
	Music.c2spd[ins_n+1] = ins_p->pcm.c2spd;
	SampleLib.samples_volume[ins_n+1] = 0;
	SampleLib.samples_frequency[ins_n+1] = 0;

	SampleLib_addSample(isd_p, isd_end_p, isd_loop_p, isd_loopend_p, ins_p->pcm.flags&1);
}

void ___716fch(sound_mod_t * smod){

    __DWORD__   n;
    __POINTER__  hi_p;
    __POINTER__  tmp_p;
    __POINTER__  lo_p;
    s3m_t * s3m;

    s3m     = (s3m_t *)smod->data;
    hi_p = ((__POINTER__)s3m+smod->size)-1;
    printf("============= S3M resize: %6d >>>> ", smod->size);
    lo_p = (__POINTER__)s3m;
    ___19a464h = ___5f248h_cdecl(0x8000);
    Music.n_orders = s3m->orderCount;
    Music.n_patterns = s3m->patternPtrCount;
    Music.ch_settings = s3m->channelSettings;
    Music.panning = (s3m->defaultPan == 0xfc) ? S3M_getHeaderDefaultPanning(s3m) : (__POINTER__)0;
    Music.volume = ___5f26ch_cdecl(sizeof(__BYTE__)*(s3m->instrumentCount+1));
    Music.c2spd = (__DWORD__ *)___5f26ch_cdecl(sizeof(__DWORD__)*(s3m->instrumentCount+1));
    Music.orders = S3M_getHeaderOrderList(s3m);
    Music.patterns = (__POINTER__*)___5f26ch_cdecl(sizeof(__POINTER__)*s3m->patternPtrCount);
    
    // patterns
    n = -1;
    while(++n < s3m->patternPtrCount){

        tmp_p = S3M_getPattern(s3m, n)->packed_data;
        Music.patterns[n] = tmp_p;
        if(lo_p < tmp_p) lo_p = tmp_p;
    }

    // instruments
    n = -1;
    while(++n < s3m->instrumentCount){

        tmp_p = S3M_getInstrumentSampleData(s3m, n);
        if((tmp_p < hi_p)&&(tmp_p > lo_p)) hi_p = tmp_p;
        ___71608h_cdecl(s3m, n);
    }

    printf("%6lld\n", hi_p-(__POINTER__)s3m);
    dRMemory_resize((__POINTER__)s3m, hi_p-(__POINTER__)s3m);
    ___5f2b4h_cdecl();
}

#include "drally.h"
#include "drmemory.h"

#define SAMPLELIB_NEW		0
#define SAMPLELIB_RESAMPLE		1

#pragma pack(1)

typedef struct sampledata_s{
	__POINTER__	start_p;            //  +0
	__POINTER__ 	end_p;              //  +4
	__POINTER__	loopstart_p;        //  +8
	__POINTER__ 	loopend_p;          //  +0ch
	__BYTE__ 	flags;              //  +10h
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


extern samplelib_t SampleLib;

void SampleLib_init(__DWORD__, __DWORD__, __BYTE__);
void SampleLib_addSample(__POINTER__, __POINTER__, __POINTER__, __POINTER__, __DWORD__);

// Samples 16-bit > 8-bit 
void ___67bbch(void){

	__DWORD__ 	size, m, n;
    __POINTER__ isd_p, isd_end_p, isd_loop_p, isd_loopend_p;
    __BYTE__    flags;
    __POINTER__  bp;
    int     isd_length, old_n_samples, new_offset;

	size = SampleLib.write_p-SampleLib.data_alloc;
	bp = dRMemory_alloc(size);
	memcpy(bp, SampleLib.data_alloc, size);
	new_offset = bp-SampleLib.data_alloc;
	old_n_samples = SampleLib.n_samples;

	if(SampleLib.data_alloc != 0){
			
		dRMemory_free(SampleLib.data_alloc);
		SampleLib.data_alloc = 0;
	}

	SampleLib_init(size, old_n_samples, SAMPLELIB_RESAMPLE);

	n = -1;
    while(++n < old_n_samples){

        isd_p           = SampleLib.samples[n].start_p+new_offset;
        isd_end_p       = SampleLib.samples[n].end_p+new_offset;
        isd_loop_p      = SampleLib.samples[n].loopstart_p+new_offset;
        isd_loopend_p   = SampleLib.samples[n].loopend_p+new_offset;
        flags           = SampleLib.samples[n].flags;

        if(flags&4){
                
            isd_length = (isd_end_p-isd_p+2)/2;

            m = -1;
            while(++m < isd_length) ((__BYTE__ *)isd_p)[m] = (((__WORD__ *)isd_p)[m]>>8)^0x80;

            isd_end_p = isd_p+(isd_end_p-isd_p)/2;
            isd_loop_p = isd_p+(isd_loop_p-isd_p)/2;
            isd_loopend_p = isd_p+(isd_loopend_p-isd_p)/2;
            flags &= 0xfb;
        }

        SampleLib_addSample(isd_p, isd_end_p, isd_loop_p, isd_loopend_p, flags);
	}

	dRMemory_free(bp);
	SampleLib.data_alloc = dRMemory_resize(SampleLib.data_alloc, SampleLib.write_p-SampleLib.data_alloc); 
}

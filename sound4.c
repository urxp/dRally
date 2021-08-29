#include "drally.h"
#include "drmemory.h"

#define SAMPLELIB_NEW		0
#define SAMPLELIB_RESAMPLE		1

#pragma pack(1)

typedef struct sampledata_s{
	void *	start_p;            //  +0
	void * 	end_p;              //  +4
	void *	loopstart_p;        //  +8
	void * 	loopend_p;          //  +0ch
	byte 	flags;              //  +10h
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


extern samplelib_t SampleLib;

void SampleLib_init(dword, dword, byte);
void SampleLib_addSample(void *, void *, void *, void *, dword);

// Samples 16-bit > 8-bit 
void ___67bbch(void){

	dword 	size, m, n;
    void    * isd_p, * isd_end_p, * isd_loop_p, * isd_loopend_p;
    byte    flags;
    void *  bp;
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
            while(++m < isd_length) ((byte *)isd_p)[m] = (((word *)isd_p)[m]>>8)^0x80;

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

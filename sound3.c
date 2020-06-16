#include "drally.h"

#pragma pack(1)
typedef struct s3m_s {
	char 	mod_name[0x1c];	        // +0
	byte 	unk0[4];		        // +1ch
    word    orders_n;               // +20h
	word 	instruments_n;	        // +22h
    word    patterns_n;             // +24h
    word    flags;                  // +26h
	word 	tracker_version;        // +28h
    word    samples_type;           // +2ah
	byte 	signature[4];		    // +2ch
	byte 	g_volume;		        // +30h
	byte 	speed;			        // +31h
	byte 	tempo;			        // +32h
	byte 	un33;		            // +33h
    byte    un34;                   // +34h
    byte    default_pan;            // +35h
    byte    un36[0xa];              // +36h
    byte    channel_settings[0x20]; // +40h
	byte 	data[];		            // +60h
} s3m_t;

typedef struct pattern_s {
    word    packed_len;
    byte    packed_data[];
} pattern_t;


typedef struct s3m_pcm_s {
    byte	ptrDataH;	    //  Upper eight bits of parapointer to sample data, relative to start of S3M file
    word	ptrDataL;	    //  Lower 16 bits of parapointer to sample data, relative to start of S3M file
    dword	length;	        //  Sample data length, in bytes. S3M is limited to 64000 and ignores upper 16 bits.
    dword	loopStart;	    //  Offset of loop start in bytes, relative to start of sample data.
    dword	loopEnd;	    //  Offset of loop end in bytes, relative to start of sample data.
    byte	volume;	        //  Default volume of sample, 0-63 inclusive.
    byte	reserved;	    //  Always 0x00
    byte	pack;	        //  0=unpacked, 1=DP30ADPCM [deprecated]
    byte	flags;	        //  Sum: 1=loop on, 2=stereo (data is length bytes for left channel then length bytes for right channel), 4=16-bit little-endian sample
    dword	c2spd;	        //  Sample rate for middle-C note (C-4)
    byte	internal[12];	//  Always zero, used in-memory during playback
    char	title[28];	    //  Sample title, for display to user. Must be null-terminated.
    char	sig[4];	        //  Signature: "SCRS"
} s3m_pcm_t;

typedef struct instrument_s {
    byte        type;
    char        name[12];
    s3m_pcm_t   pcm;
} instrument_t;


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

typedef struct sound_mod_s {
	int 	type;
	int 	channels;
	int 	samples;
	void * 	data;
	dword 	size;
} sound_mod_t;

typedef struct music_s {
    byte        ch_map[32];
    dword *     c2spd;
    void **     patterns;
    byte *      ch_settings;
    byte *	    orders;
    byte *      panning;
    byte *      volume;
    void *      s3m_p;
    word        n_patterns;
    byte        n_orders;
    byte        tempo;
    byte        global_volume;
    byte        speed;
} music_t;


void * ___5f248h_cdecl(dword, dword);
void * ___5f26ch_cdecl(dword); 
void ___5f2b4h_cdecl(void);

extern music_t Music;
extern samplelib_t SampleLib;
byte * ___19a464h;

void * dRally_Memory_resize(void * mem, dword size);
void SampleLib_addSample(void *, void *, void *, void *, dword);

static pattern_t * S3M_getPattern(s3m_t * s3m, int n){

    word * patterns_parapointers = &s3m->data[s3m->orders_n+2*s3m->instruments_n];

    return (void *)s3m + 0x10*patterns_parapointers[n];
}

static instrument_t * S3M_getInstrument(s3m_t * s3m, int n){

    word * instruments_parapointers = &s3m->data[s3m->orders_n];

    return (void *)s3m + 0x10*instruments_parapointers[n];
}

static void * S3M_getInstrumentSampleData(s3m_t * s3m, int n){

    instrument_t *  tmp;
    dword           offset;

    tmp = S3M_getInstrument(s3m, n);
    offset = tmp->pcm.ptrDataH;
    offset <<= 0x10;
    offset += tmp->pcm.ptrDataL;

    return (void *)s3m + 0x10*offset; 
}


static void ___71608h_cdecl(s3m_t * s3m, dword ins_n){

	void 	* isd_p, * isd_end_p, * isd_loop_p, * isd_loopend_p;
    instrument_t * ins_p;

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

    dword   n;
    void *  hi_p;
    void *  tmp_p;
    void *  lo_p;
    s3m_t * s3m;

    s3m     = (s3m_t *)smod->data;
    hi_p = ((void *)s3m+smod->size)-1;
    printf("============= S3M resize: %6d >>>> ", smod->size);
    lo_p = s3m;
    ___19a464h = ___5f248h_cdecl(0x8000, 1);
    Music.n_orders = s3m->orders_n;
    Music.n_patterns = s3m->patterns_n;
    Music.ch_settings = &s3m->channel_settings;
    Music.panning = (s3m->default_pan == 0xfc) ? &s3m->data[s3m->orders_n+2*s3m->instruments_n+2*s3m->patterns_n] : 0;
    Music.volume = ___5f26ch_cdecl(s3m->instruments_n+1);
    Music.c2spd = ___5f26ch_cdecl(4*(s3m->instruments_n+1));
    Music.orders = &s3m->data;
    Music.patterns = (void **)___5f26ch_cdecl(4*s3m->patterns_n);
    
    // patterns
    n = -1;
    while(++n < s3m->patterns_n){

        tmp_p = &S3M_getPattern(s3m, n)->packed_data;
        Music.patterns[n] = tmp_p;
        if(lo_p < tmp_p) lo_p = tmp_p;
    }

    // instruments
    n = -1;
    while(++n < s3m->instruments_n){

        tmp_p = S3M_getInstrumentSampleData(s3m, n);
        if((tmp_p < hi_p)&&(tmp_p > lo_p)) hi_p = tmp_p;
        ___71608h_cdecl(s3m, n);
    }

    printf("%6d\n", hi_p-(void *)s3m);
    dRally_Memory_resize(s3m, hi_p-(void *)s3m);
    ___5f2b4h_cdecl();
}
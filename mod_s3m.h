#ifndef __MOD_S3M_H
#define __MOD_S3M_H

#include "types.h"

#pragma pack(push, 1)
typedef struct s3m_s {
	char 	    title[28];	            // +0       Song title, must be null-terminated
	__BYTE__    sig1;		            // +1ch     Signature byte, always 0x1A
    __BYTE__    type;                   // +1dh     Song type, always 0x10 for S3M
    __WORD__    reserved1;              // +1eh     Always 0x0000
    __WORD__    orderCount;             // +20h     Number of entries in the order table, should be even
	__WORD__    instrumentCount;        // +22h     Number of instruments in the song
    __WORD__    patternPtrCount;        // +24h     Number of pattern parapointers in the song
    __WORD__    flags;                  // +26h
	__WORD__    trackerVersion;         // +28h     upper four bits is tracker ID, lower 12 bits is tracker version
    __WORD__    sampleType;             // +2ah     1=signed samples [deprecated], 2=unsigned samples
	char 	    sig2[4];		        // +2ch     Signature: "SCRM"
	__BYTE__    globalVolume;           // +30h
	__BYTE__    initialSpeed;           // +31h     Frames per row, can be changed later with A command
	__BYTE__    initialTempo;           // +32h     Frames per second, can be changed later with T command
	__BYTE__    masterVolume;           // +33h     bit 7: 1=stereo, 0=mono, bits 6-0: volume
    __BYTE__    ultraClickRemoval;      // +34h     Number of channels to use for click removal on real GUS hardware
    __BYTE__    defaultPan;             // +35h     252=read pan values in header, anything else ignores pan values in header
    __BYTE__    reserved2[8];           // +36h     Unused, some trackers store data here
    __WORD__    ptrSpecial;             // +3eh     Parapointer to additional data, if flags has bit 7 set
    __BYTE__    channelSettings[32];    // +40h
} s3m_t;

typedef struct s3m_pcm_s {
    __BYTE__	ptrDataH;	    //  Upper eight bits of parapointer to sample data, relative to start of S3M file
    __WORD__	ptrDataL;	    //  Lower 16 bits of parapointer to sample data, relative to start of S3M file
    __DWORD__	length;	        //  Sample data length, in bytes. S3M is limited to 64000 and ignores upper 16 bits.
    __DWORD__	loopStart;	    //  Offset of loop start in bytes, relative to start of sample data.
    __DWORD__	loopEnd;	    //  Offset of loop end in bytes, relative to start of sample data.
    __BYTE__	volume;	        //  Default volume of sample, 0-63 inclusive.
    __BYTE__	reserved;	    //  Always 0x00
    __BYTE__	pack;	        //  0=unpacked, 1=DP30ADPCM [deprecated]
    __BYTE__	flags;	        //  Sum: 1=loop on, 2=stereo (data is length bytes for left channel then length bytes for right channel), 4=16-bit little-endian sample
    __DWORD__	c2spd;	        //  Sample rate for middle-C note (C-4)
    __BYTE__	internal[12];	//  Always zero, used in-memory during playback
    char	    title[28];	    //  Sample title, for display to user. Must be null-terminated.
    char	    sig[4];	        //  Signature: "SCRS"
} s3m_pcm_t;

typedef struct s3m_instrument_s {
    __BYTE__    type;
    char        name[12];
    s3m_pcm_t   pcm;
} s3m_instrument_t;

typedef struct s3m_pattern_s {
    __WORD__    packed_len;
    __BYTE__    packed_data[];      // packed_len-2
} s3m_pattern_t;
#pragma pack(pop)

__BYTE__ * S3M_getHeaderOrderList(s3m_t * s3m);
__WORD__ * S3M_getHeaderPtrInstruments(s3m_t * s3m);
__WORD__ * S3M_getHeaderPtrPatterns(s3m_t * s3m);
__BYTE__ * S3M_getHeaderDefaultPanning(s3m_t * s3m);

s3m_instrument_t * S3M_getInstrument(s3m_t * s3m, int n);
s3m_pattern_t * S3M_getPattern(s3m_t * s3m, int n);
void * S3M_getInstrumentSampleData(s3m_t * s3m, int n);

#endif // __MOD_S3M_H

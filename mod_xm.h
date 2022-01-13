#ifndef __MOD_XM_H
#define __MOD_XM_H

#include "types.h"

#pragma pack(push, 1)
typedef struct xm_s {
	char 	    id[17];		            // +0
	char 	    title[20];		        // +11h
	__BYTE__    sig1;				    // +25h     0x1a
	char 	    tracker[20];			// +26h
	__WORD__ 	version;			    // +3ah
	__DWORD__ 	headerSize;		        // +3ch
	__WORD__ 	songLength;		        // +40h
	__WORD__    restartPosition;        // +42h
	__WORD__ 	channels;			    // +44h
	__WORD__ 	patterns;			    // +46h
	__WORD__ 	instrumentCount;	    // +48h
	__WORD__ 	flags;				    // +4ah
    __WORD__    defaultTempo;           // +4ch
    __WORD__    defaultBPM;             // +4eh
} xm_t;

typedef struct xm_sample_s {
	__DWORD__			size;				//	+0		Sample length
   	__DWORD__ 			loop_start;			//	+4		Sample loop start
	__DWORD__ 			loop_length;		//	+8		Sample loop length
   	__BYTE__ 			volume;				// 	+0ch	Volume
   	__SIGNED_BYTE__		finetune;			//	+0dh	Finetune (signed byte -16..+15)
   	__BYTE__ 			type;				//	+0eh	Type: Bit 0-1: 0 = No loop, 1 = Forward loop, 2 = Ping-pong loop;
                            				//         				4: 16-bit sampledata
   	__BYTE__ 			panning;			//	+0fh	Panning (0-255)
   	__SIGNED_BYTE__ 	rel_note;			//	+10h	Relative note number (signed byte)
   	__BYTE__ 			reserved;			//	+11h	Reserved
   	char				name[22];			//	+12h	Sample name
} xm_sample_t;

typedef struct xm_instrument_s {
	__DWORD__ 	size;				//	+0
	char 		name[22];			// 	+4
	__BYTE__ 	type;				// 	+1ah
	__WORD__ 	n_samples;			// 	+1bh
// i n_samples > 0 [TODO] there is more fields
	__DWORD__ 	sample_header_size;	//	+1dh
} xm_instrument_t;

typedef struct xm_pattern_s {
	__DWORD__ 	header_size;		//	+0
	__BYTE__ 	type;				//	+4	Packing type (always 0)
	__WORD__ 	rows;				//	+5	Number of rows in pattern (1..256)
	__WORD__ 	packed_size;		//	+7	Packed patterndata size
	__BYTE__ 	packed_data[];		//	+9	Packed pattern data
} xm_pattern_t;

#pragma pack(pop)

xm_instrument_t * XM_getInstrument(xm_t * xm, int n);
xm_pattern_t * XM_getPattern(xm_t * xm, int n);
xm_sample_t * XM_getInstrumentSamples(xm_instrument_t * xm_ins_p);
__POINTER__ XM_getInstrumentSamplesData(xm_instrument_t * xm_ins_p);

#endif // __MOD_XM_H

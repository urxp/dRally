#include "mod_s3m.h"

__BYTE__ * S3M_getHeaderOrderList(s3m_t * s3m){

    return (void *)s3m+sizeof(s3m_t);
}

__WORD__ * S3M_getHeaderPtrInstruments(s3m_t * s3m){

    return (void *)s3m+sizeof(s3m_t)+s3m->orderCount*sizeof(__BYTE__);
}

__WORD__ * S3M_getHeaderPtrPatterns(s3m_t * s3m){

    return (void *)s3m+sizeof(s3m_t)+s3m->orderCount*sizeof(__BYTE__)+s3m->instrumentCount*sizeof(__WORD__);
}

__BYTE__ * S3M_getHeaderDefaultPanning(s3m_t * s3m){

    (void *)s3m+sizeof(s3m_t)+s3m->orderCount*sizeof(__BYTE__)+s3m->instrumentCount*sizeof(__WORD__)+s3m->patternPtrCount*sizeof(__WORD__);
}

s3m_instrument_t * S3M_getInstrument(s3m_t * s3m, int n){

    return (void *)s3m+(S3M_getHeaderPtrInstruments(s3m)[n]<<4);
}

s3m_pattern_t * S3M_getPattern(s3m_t * s3m, int n){

    return (void *)s3m+(S3M_getHeaderPtrPatterns(s3m)[n]<<4);
}

void * S3M_getInstrumentSampleData(s3m_t * s3m, int n){

    s3m_instrument_t * i = S3M_getInstrument(s3m, n);

    return (void *)s3m+(((i->pcm.ptrDataH<<0x10)|i->pcm.ptrDataL)<<4);
}

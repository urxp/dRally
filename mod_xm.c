#include "mod_xm.h"

xm_instrument_t * XM_getInstrument(xm_t * xm, int n){

	__DWORD__ 			m, n0, accm;
	xm_instrument_t *   xm_ins_p;
	xm_sample_t * 		xm_smpl_p;


	xm_ins_p = (xm_instrument_t *)XM_getPattern(xm, xm->patterns);

	n0 = -1;
	while(++n0 < n){
		
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

xm_pattern_t * XM_getPattern(xm_t * xm, int n){

	__DWORD__ 	    n0;
	xm_pattern_t *  xm_pat_p;

	xm_pat_p = (void *)&xm->headerSize+xm->headerSize;

	n0 = -1;
	while(++n0 < n) xm_pat_p = (void *)xm_pat_p+xm_pat_p->header_size+xm_pat_p->packed_size;

	return xm_pat_p;
}

xm_sample_t * XM_getInstrumentSamples(xm_instrument_t * xm_ins_p){

	return (void *)xm_ins_p+xm_ins_p->size;
}

void * XM_getInstrumentSamplesData(xm_instrument_t * xm_ins_p){

	return (void *)xm_ins_p+xm_ins_p->size+xm_ins_p->sample_header_size*xm_ins_p->n_samples;
}

#include "drally.h"

	extern byte ___2438c4h[];
	extern byte ___243d08h[];
	extern byte ___1e8448h[];
	extern byte ___196dc8h[];
	extern byte ___1de920h[];
	extern byte ___243c6ch[];
	extern byte ___1e8048h[];
	extern byte ___1e7c48h[];
	extern byte ___1ded20h[];
	extern byte ___243c68h[];
	extern byte ___196dcch[];
	extern byte ___243c64h[];
	extern byte ___243c78h[];
	extern byte ___243c70h[];
	extern byte ___196d8ch[];
	extern byte ___243c74h[];
	extern byte ___196d94h[];
	extern byte ___196d98h[];
	extern byte ___240a48h[];

void ___5e769h(byte * A1, int A2, int A3, int A4, int A5, int A6, int A7);

// SHADOWS
void race___4f170h(void){

	int 	a1, a2, a3;

	D(___243d08h) = 0;
	while((int)D(___243d08h) < (int)D(___2438c4h)){

		D(___243c6ch) = D(D(D(___243d08h)*4+___1e8448h)*4+___1de920h)-D(___196dc8h);
		D(___243c68h) = D(D(D(___243d08h)*4+___1e8048h)*4+___1de920h)-D(___196dc8h);
		D(___243c64h) = D(D(D(___243d08h)*4+___1e7c48h)*4+___1de920h)-D(___196dc8h);
		D(___243c78h) = D(D(D(___243d08h)*4+___1e8448h)*4+___1ded20h)-D(___196dcch);
		D(___243c70h) = D(D(D(___243d08h)*4+___1e7c48h)*4+___1ded20h)-D(___196dcch);
		D(___243c74h) = D(D(D(___243d08h)*4+___1e8048h)*4+___1ded20h)-D(___196dcch);

		a1 = abs(D(___243c6ch)-D(___196d8ch));
		a2 = abs(D(___243c68h)-D(___196d8ch));
		a3 = abs(D(___243c64h)-D(___196d8ch));

		if((a1 < (int)D(___196d8ch))||(a2 < (int)D(___196d8ch))||(a3 < (int)D(___196d8ch))){

			a1 = abs(D(___243c78h)-D(___196d94h));
			a2 = abs(D(___243c74h)-D(___196d94h));
			a3 = abs(D(___243c70h)-D(___196d94h));

			if((a1 < (int)D(___196d94h))||(a2 < (int)D(___196d94h))||(a3 < (int)D(___196d94h))){

				___5e769h(
					___240a48h,
					D(___243c70h),
					D(___243c64h)+D(___196d98h),
					D(___243c74h),
					D(___243c68h)+D(___196d98h),
					D(___243c78h),
					D(___243c6ch)+D(___196d98h));
			}
		}

		D(___243d08h)++;
	}
}

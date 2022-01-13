#include "drally.h"

	extern __POINTER__ ___243d38h;
	extern __BYTE__ ___196dd0h[];
	extern __BYTE__ ___243334h[];
	extern __BYTE__ ___196dd4h[];
	extern __BYTE__ ___1f2488h[];
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___243d28h[];
	extern __POINTER__ ___243d58h;

int rand_watcom106(void);

void race___5209ch(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x44];
	__POINTER__ 	ebxp;
	__POINTER__ 	ebpp;
	__POINTER__ 	esp0x14;
	__POINTER__ 	edxp;


	ebpp = ___243d38h;
	edx = D(___196dd0h);

	if((int)edx <= 0){

		ebx ^= ebx;
		D(___196dd0h) = ebx;
	}
	else {

		eax = D(___243334h);
		ecx = edx;
		ecx -= eax;
		D(___196dd0h) = ecx;
	}

	edx = D(___243334h);
	eax ^= eax;

	while(1){

		esi = D(eax+___1f2488h+0x10);
		
		if(((int)esi < 0x7d0)&&(D(eax+___1f2488h+8) != 0)){
		
			ebx = esi+edx;
			D(eax+___1f2488h+0x10) = ebx;
		}

		eax += 0x120;
		if(eax == 0xd80) break;
	}

	ecx = D(___196dd0h);
	___243d38h = ebpp;

	if(ecx == 0){

		if(D(___196dd4h) == 0){
			
			D(esp+0x18) = ecx;
			eax ^= eax;

			while(1){

				edx = D(eax+___1f2488h+8);
				ebpp = ___243d38h;
				if((int)edx > 0) D(esp+0x18)++;
				eax += 0x120;
				___243d38h = ebpp;
				if(eax == 0xd80) break;
			}

			edx = 0;
			memset(esp, edx, 0xc);
			ecx = 0;
			D(esp+0x10) = ecx;

			while(1){

				while(1){
					eax = rand_watcom106();
					edx = eax;
					ebx = 0xc;
					edx = (int)edx>>0x1f;
					___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ebx);
					D(esp+0x30) = edx;
					if(B(esp+edx) != 1) break;
				}

				eax = D(esp+0x30);
				B(esp+eax) = 1;
				eax = 0x120*eax;
				edi = D(eax+___1f2488h+0xc);
				ebpp = ___243d38h;

				if((int)edi <= 0){

					edx ^= edx;
					D(eax+___1f2488h+0xc) = edx;
				}
				else {

					edx = D(___243334h);
					ebx = edi;
					ebx -= edx;
					D(eax+___1f2488h+0xc) = ebx;
				}

				ebx = 0x120*D(esp+0x30);
				esi = D(ebx+___1f2488h+8);
				___243d38h = ebpp;

				if(esi == 0){

					if((int)D(ebx+___1f2488h) > 0){

						if(D(ebx+___1f2488h+0xc) == 0){

							if((int)D(esp+0x18) < 4){

								eax = rand_watcom106();
								edx = eax;
								ecx = 0x64;
								edx = (int)edx>>0x1f;
								___idiv32((__POINTER__)&eax, (__POINTER__)&edx, ecx);
								eax = 0x94*D(MY_CAR_IDX);

								if(D(eax+___1de580h+0x2c) == 0){

									ebpp = ___243d38h;
									if(((int)edx >= 0)&&((int)edx < 0x2d)){
									
										D(ebx+___1f2488h+8) = 0x2;
									}

									if(((int)edx >= 0x2d)&&((int)edx < 0x50)){
									
										eax = 0x120*D(esp+0x30);
										D(eax+___1f2488h+8) = 0x3;
									}

									if(((int)edx >= 0x50)&&((int)edx < 0x5a)){
									
										eax = 0x120*D(esp+0x30);
										D(eax+___1f2488h+8) = 0x4;
									}

									if(((int)edx >= 0x5a)&&((int)edx < 0x64)){

										eax = 0x120*D(esp+0x30);
										D(eax+___1f2488h+8) = 0x5;
									}
								}
								else {

									ebpp = ___243d38h;
									if(((int)edx >= 0)&&((int)edx < 0x1e)){
									
										D(ebx+___1f2488h+8) = 0x1;
									}

									if(((int)edx >= 0x1e)&&((int)edx < 0x41)){
									
										eax = 0x120*D(esp+0x30);
										D(eax+___1f2488h+8) = 0x2;
									}

									if(((int)edx >= 0x41)&&((int)edx < 0x50)){
									
										eax = 0x120*D(esp+0x30);
										D(eax+___1f2488h+8) = 0x3;
									}

									if(((int)edx >= 0x50)&&((int)edx < 0x55)){
									
										eax = 0x120*D(esp+0x30);
										D(eax+___1f2488h+8) = 0x4;
									}

									if(((int)edx >= 0x55)&&((int)edx < 0x64)){
										
										eax = 0x120*D(esp+0x30);
										D(eax+___1f2488h+8) = 0x5;
									}
								}

								eax = 0x120*D(esp+0x30);
								edi = D(esp+0x18);
								___243d38h = ebpp;
								esi ^= esi;
								edx ^= edx;
								edi++;
								D(esp+0x28) = eax;
								D(eax+___1f2488h+0x10) = esi;
								D(esp+0x18) = edi;
								ebxp = ___1f2488h+eax+0x20;

								while(1){

									eax = D(esp+0x28);
									eax = D(eax+___1f2488h+4);
									eax = eax+edx;
									ecx = D(___243d28h);
									eax = eax-0x8;
									eax = eax*ecx;
									memcpy(ebxp, ___243d58h+D(D(esp+0x28)+___1f2488h)-0x8+eax, 0x10);
									ebxp += 0x10;
									edx++;
									if((int)edx >= 0x10) break;
								}

								edi ^= edi;
								eax = D(esp+0x30);
								D(esp+0x34) = edi;
								edx = 0x120*eax;

								while(1){

									ebx = D(esp+0x34);
									ebpp = ___243d38h;
									eax = 0;
									D(esp+0x40) = ebx;

									while(1){

										ebxp = ebpp+0x100*D(___1f2488h+edx+8)+eax+D(esp+0x40);

										if(B(ebxp+(int)0xffffff00) != 0){

											ecx = D(___1f2488h+edx+4)+edi;
											esi = D(___243d28h);
											ecx -= 0x8;
											esi = esi*ecx;
											B(___243d58h+eax+D(___1f2488h+edx)+esi-8) = B(ebxp+(int)0xffffff00);
										}

										eax++;
										if((int)eax >= 0x10) break;
									}

									esi = D(esp+0x34);
									edi++;
									esi += 0x10;
									___243d38h = ebpp;
									D(esp+0x34) = esi;
									if((int)edi >= 0x10) break;
								}
							}
						}
					}
				}

				edi = D(esp+0x10);
				edi++;
				D(esp+0x10) = edi;
				if((int)edi >= 0xc) break;
			}
		}
	}

	ebpp = ___243d38h;
	edx = 0;
	D(esp+0x1c) = edx;
	esp0x14 = ___1f2488h+0x20;

	while(1){

		edx = 0x7d0;
		ebx = D(esp+0x1c);
		eax = 0x7c6;
		ecx ^= ecx;

		while(1){

			esi = D(ebx+___1f2488h+0x10);
			if(((int)eax < (int)esi)&&((int)edx > (int)esi)) ecx = 0x1;
			edx -= 0x14;
			eax -= 0x14;
			if((int)edx < 0x604) break;
		}

		if(ecx != 0){

			D(esp+0x38) = 0;
			D(esp+0xc) = 0;

			while(1){

				D(esp+0x3c) = D(esp+0x38);

				eax = 0;
				while(1){

					ebxp = ebpp+0x100*D(___1f2488h+D(esp+0x1c)+8)+eax+D(esp+0x3c);

					if(B(ebxp+(int)0xffffff00) != 0){

						B(___243d58h+eax+D(___1f2488h+D(esp+0x1c))+D(___243d28h)*(D(esp+0xc)+D(___1f2488h+D(esp+0x1c)+4)-8)-8) = B(ebxp+(int)0xffffff00);
					}

					eax++;
					if((int)eax >= 0x10) break;
				}

				D(esp+0xc)++;
				D(esp+0x38) += 0x10;
				if(0x10 <= (int)D(esp+0xc)) break;
			}
		}

		edx = 0x7c6;
		eax = D(esp+0x1c);
		ebx = 0x7bc;
		ecx = 0;

		while(1){

			esi = D(eax+___1f2488h+0x10);
			if(((int)ebx < (int)esi)&&((int)edx > (int)esi)) ecx = 0x1;
			edx -= 0x14;
			ebx -= 0x14;
			if((int)edx < 0x5fa) break;
		}

		___243d38h = ebpp;

		if(ecx != 0){

			edxp = esp0x14;
			D(esp+0x24) = D(esp+0x1c);

			ebx = 0;
			while(1){

				memcpy(___243d58h+D(___243d28h)*(D(___1f2488h+D(esp+0x24)+4)+ebx-0x8)+D(___1f2488h+D(esp+0x24))-0x8, edxp, 0x10);
				edxp += 0x10;
				ebx++;
				if((int)ebx >= 0x10) break;
			}
		}

		if((int)D(___1f2488h+D(esp+0x1c)+0x10) >= 0x7d0){

			D(esp+0x2c) = D(esp+0x1c);

			edx = 0;
			ebx = 0;
			while(1){

				memcpy(
					___243d58h+D(___1f2488h+D(esp+0x2c))+D(___243d28h)*(D(___1f2488h+D(esp+0x2c)+4)+edx-0x8)-0x8,
					___1f2488h+D(esp+0x1c)+0x20+ebx,
					0x10);

				ebx += 0x10;
				edx++;
				if((int)edx >= 0x10) break;
			}

			D(___1f2488h+D(esp+0x2c)+0x10) = 0;
			D(___1f2488h+D(esp+0x2c)+8) = 0;
			D(___196dd0h) = 0x118;
			eax = rand_watcom106();
			edx = (int)eax>>0x1f;
			___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0xc8);
			D(___1f2488h+D(esp+0x2c)+0xc) = edx+0x12c;
		}

		ebpp = ___243d38h;
		D(esp+0x1c) += 0x120;
		esp0x14 += 0x120;
		if(D(esp+0x1c) == 0xd80) break;
	}
}

#include "drally.h"
#include "drenums.h"

	extern __POINTER__ GEN_MES_BPK;
    extern __POINTER__ CPY_GEN_MES_BPK;
    extern __BYTE__ ___1d7810h[];

static const char * MSG_GAME_PAUSED[9] = {
	[0] = "                                ",
	[1] = "                                ",
	[2] = "                                ",
	[3] = "     G A M E   P A U S E D !    ",
	[4] = "                                ",
	[5] = "                                ",
	[6] = "                                ",
	[7] = "                                ",
	[8] = "    PRESS ENTER TO CONTINUE     "
};

static const char * MSG_RACE_OVER[9] = {
	[0] = "                                ",
	[1] = "                                ",
	[2] = "                                ",
	[3] = "      R A C E    O V E R !      ",
	[4] = "                                ",
	[5] = "                                ",
	[6] = "                                ",
	[7] = "                                ",
	[8] = "    PRESS ENTER TO CONTINUE     "
};

static const char * MSG_ABOUT_TO_ABORT[9] = {
	[0] = "                                ",
	[1] = "                                ",
	[2] = " S O M E O N E   I S   A B O U T",
	[3] = "   T O   A B O R T   R A C E !  ",
	[4] = "                                ",
	[5] = "                                ",
	[6] = "                                ",
	[7] = "  WAITING FOR SIGNAL FROM HOST  ",
	[8] = "                                "
};

static const char * MSG_ABORT_RACE[9] = {
	[0] = "                                ",
	[1] = "                                ",
	[2] = "                                ",
	[3] = "      A B O R T   R A C E !     ",
	[4] = "                                ",
	[5] = "             Y / N              ",
	[6] = "                                ",
	[7] = "                                ",
	[8] = "                                "
};

static const char * MSG_ABORT_DEMO[9] = {
	[0] = "                                ",
	[1] = "                                ",
	[2] = "                                ",
	[3] = "      A B O R T   D E M O !     ",
	[4] = "                                ",
	[5] = "             Y / N              ",
	[6] = "                                ",
	[7] = "                                ",
	[8] = "                                "
};

static const char * MSG_CONNECTION_LOST[9] = {
	[0] = "                                ",
	[1] = "                                ",
	[2] = "     M U L T I P L A Y E R      ",
	[3] = "      C O N N E C T I O N       ",
	[4] = "           L O S T !            ",
	[5] = "                                ",
	[6] = "                                ",
	[7] = "                                ",
	[8] = "      PRESS ENTER TO ABORT      "
};

static const char * MSG_WELCOME[9] = {
	[0] = "     WELCOME TO DEATH RALLY!    ",
	[1] = "                                ",
	[2] = " PRESS                          ",
	[3] = "    F1-INFO SCREEN              ",
	[4] = "     P-PAUSE                    ",
	[5] = "   TAB-TOGGLE STATUS BAR        ",
	[6] = "   ESC-ABORT RACE               ",
	[7] = "                                ",
	[8] = "    PRESS ENTER TO CONTINUE     "
};

// GAME PAUSED BACKGROUND
static void race___477d4h(void){

	memcpy(CPY_GEN_MES_BPK, GEN_MES_BPK, 0x3c90);
}

static void race___47808h(__DWORD__ A1, __DWORD__ A2, const char * A3){

	__BYTE__ 	px;
	int 		i, j, n;

	n = -1;
	while(A3[++n]){

		j = -1;
		while(++j < 6){

			i = -1;
			while(++i < 6){

				if((px = read_b(___1d7810h+0x24*(A3[n]-0x20)+6*j+i)) != 0) write_b(CPY_GEN_MES_BPK+0xcc*(j+8*A2+6)+6*(A1+n+1)+i, px);
			}
		}
	}
}

static void printmsg(const char * msg[]){

	int 	n;

	n = -1;
	while(++n < 9) race___47808h(0, n, msg[n]);
}

void race_msg(int msg_no){

	race___477d4h();	// GAME PAUSED BACKGROUND

    switch(msg_no){
    case E_GAME_PAUSED:
        printmsg(MSG_GAME_PAUSED);
        break;
    case E_RACE_OVER:
        printmsg(MSG_RACE_OVER);
        break;
    case E_ABOUT_TO_ABORT:
        printmsg(MSG_ABOUT_TO_ABORT);
        break;
    case E_ABORT_RACE:
        printmsg(MSG_ABORT_RACE);
        break;
    case E_CONNECTION_LOST:
        printmsg(MSG_CONNECTION_LOST);
        break;
    case E_WELCOME:
        printmsg(MSG_WELCOME);
        break;
    default:
        break;
    }
}

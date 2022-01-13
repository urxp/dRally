#ifndef __DRALLY_RACE_H
#define __DRALLY_RACE_H

#define RACE_NOTWIDE    1
#define RACE_MSX        2
#define RACE_SFX        3
#define RACE_TEXTURES   4
#define RACE_SHADOWS    5

int dRally_Race_getSettings(int);
void dRally_Race_setSettings(int);
void dRally_Race_unsetSettings(int);
void dRally_Race_toggleSettings(int);

void race_msg(int msg_no);
void race_alloc(void);
void race_free(void);

#endif // __DRALLY_RACE_H

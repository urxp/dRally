#ifndef __ASSETS_H
#define __ASSETS_H

enum {
    MENU_BASES4,
    MENU_MAXI1F,
    MENU_TIRE1,
    MENU_TIRE2,
    MENU_TIRE3,
    MENU_TIRE4
};

void * dRally_Assets_loadRaw(const char *, const char *, int);
void * dRally_Assets_loadDecode(const char *, const char *, int);
void dRally_Assets_loadDecodeX(void *, const char *, const char *);
void * getAssets(int);

#endif // __ASSETS_H

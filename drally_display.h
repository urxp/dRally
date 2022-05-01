#ifndef __DRALLY_DISPLAY_H
#define __DRALLY_DISPLAY_H


#define W_WIDTH 	1024//800//640
#define W_HEIGHT 	768//600//480

enum { VGA3, VGA13, VESA101 };
enum { W_SHRINK, W_LETTERBOX};


void dRally_Display_init(int mode);
void dRally_Display_clean(void);

#endif // __DRALLY_DISPLAY

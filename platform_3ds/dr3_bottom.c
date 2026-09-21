#include "dr3_bottom.h"
#include "dr3_log.h"

#include "drally.h"
#include "drally_structs_fixed.h"

#include <3ds.h>
#include <SDL.h>
#include <stdio.h>
#include <string.h>

/* the 20 racers of the running game and the index of the player's car (bss.c) */
extern __BYTE__  ___1a01e0h[];
extern __BYTE__  ___1a1ef8h[];

#define DR3_BOTTOM_COLS   40
#define DR3_BOTTOM_ROWS   30
#define DR3_BOTTOM_TOP    10            /* how many drivers the standings list shows */

static int dr3_bottom_ready;
static char dr3_bottom_last[DR3_BOTTOM_ROWS][64];
static int  dr3_bottom_drawn;

/* ------------------------------------------------------------------ controls --- */

static const char *const dr3_bottom_controls[] = {
    "D-pad     steer",
    "R         gas",
    "L         brake",
    "A         horn",
    "B         boost",
    "Y         shoot",
    "X         mine",
    "ZL/ZR     boost/shoot",
    "START     pause",
    "SELECT    keyboard",
    "L+R+START quit",
    "(menu: A=ok B=next)"
};

/* ---------------------------------------------------------------- standings --- */

typedef struct {
    char  name[16];
    int   points;
    int   is_player;
} dr3_standing_t;

/* Reads the racer array the engine keeps for the running game.  Returns the number of drivers
   written; 0 when no game is loaded yet. */
static int dr3_bottom_read_standings(dr3_standing_t *out, int max)
{
    const racer_t *r = (const racer_t *)___1a01e0h;
    const int      me = (int)D(___1a1ef8h);
    int            i, n = 0;

    for (i = 0; i < 20 && n < max; ++i) {
        char name[13];
        int  j;

        if (r[i].name[0] == 0) continue;

        memcpy(name, r[i].name, 12);
        name[12] = 0;
        for (j = 11; (j >= 0) && ((name[j] == ' ') || (name[j] == 0)); --j) name[j] = 0;

        /* guard against uninitialised memory (before a game is loaded) and empty slots: only accept
           short names made of plain printable characters */
        if ((name[0] < 33) || (name[1] == 0)) continue;
        for (j = 0; name[j]; ++j) {
            if (((unsigned char)name[j] < 32) || ((unsigned char)name[j] > 126)) break;
        }
        if (name[j] != 0) continue;

        snprintf(out[n].name, sizeof(out[n].name), "%s", name);
        out[n].points    = (int)r[i].points;
        out[n].is_player = (i == me);
        ++n;
    }

    return n;
}

/* highest points first (simple insertion sort - at most 20 entries) */
static void dr3_bottom_sort(dr3_standing_t *list, int n)
{
    int i, j;

    for (i = 1; i < n; ++i) {
        const dr3_standing_t key = list[i];

        for (j = i - 1; (j >= 0) && (list[j].points < key.points); --j) list[j + 1] = list[j];
        list[j + 1] = key;
    }
}

/* -------------------------------------------------------------------- draw --- */

static int dr3_bottom_console(void)
{
    if (dr3_bottom_ready) return 1;
    if (!SDL_WasInit(SDL_INIT_VIDEO)) return 0;      /* gfx is not up yet - try again later */

    dr3_bottom_ready = 1;
    consoleInit(GFX_BOTTOM, NULL);

    return 1;
}

void dr3_bottom_update(void)
{
    static unsigned int last_ms;
    dr3_standing_t      list[20];
    int                 n, i, rows = 0;
    char                line[DR3_BOTTOM_ROWS][64];

    if (!dr3_bottom_console()) return;
    if ((SDL_GetTicks() - last_ms) < 1000) return;   /* once a second is plenty */
    last_ms = SDL_GetTicks();

    n = dr3_bottom_read_standings(list, 20);
    dr3_bottom_sort(list, n);

    memset(line, 0, sizeof(line));

    snprintf(line[rows], sizeof(line[rows]), "%-19s%-21s", "CONTROLS", "TOP DRIVERS");
    ++rows;
    snprintf(line[rows], sizeof(line[rows]), "%-19s%-21s", "-------------------", "--------------------");
    ++rows;

    for (i = 0; i < (int)(sizeof(dr3_bottom_controls) / sizeof(dr3_bottom_controls[0])); ++i) {
        char right[24] = "";

        if (i < DR3_BOTTOM_TOP && i < n) {
            snprintf(right, sizeof(right), "%d %s %s %4d",
                     i + 1, list[i].is_player ? "*" : " ", list[i].name, list[i].points);
        }

        snprintf(line[rows], sizeof(line[rows]), "%-19s%.21s", dr3_bottom_controls[i], right);
        ++rows;
    }

    if (n == 0) {
        snprintf(line[rows], sizeof(line[rows]), "%-19s%-21s", "", "(no game loaded)");
        ++rows;
    }
    else if (!list[0].is_player) {
        /* keep the player in sight even when he is not in the top ten */
        for (i = 0; i < n; ++i) {
            if (list[i].is_player) {
                snprintf(line[rows], sizeof(line[rows]), "%-19s%d * %s %4d", "your rank", i + 1,
                         list[i].name, list[i].points);
                ++rows;
                break;
            }
        }
    }

    /* only touch the screen when something actually changed */
    if (dr3_bottom_drawn && (memcmp(line, dr3_bottom_last, sizeof(line)) == 0)) return;
    memcpy(dr3_bottom_last, line, sizeof(line));
    dr3_bottom_drawn = 1;

    printf("\x1b[2J\x1b[H");
    for (i = 0; i < rows; ++i) printf("%s\n", line[i]);

    gfxFlushBuffers();
    gfxScreenSwapBuffers(GFX_BOTTOM, false);
}

void dr3_bottom_release(void)
{
    dr3_bottom_drawn = 0;
    dr3_bottom_ready = 0;
}

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

#define DR3_BOTTOM_TOP 10          /* how many drivers the standings list shows */

static int  dr3_bottom_ready;

/* ------------------------------------------------------------------ controls --- */

static const char *const dr3_bottom_controls[] = {
    "D-pad     steer",
    "R         gas",
    "L         brake",
    "A         horn",
    "B         boost",
    "Y         shoot",
    "X         mine",
    "ZL        boost",
    "ZR        shoot",
    "START     pause",
    "SELECT    keyboard",
    "L+R+START quit",
    "(menu: A=ok B=next)"
};

/* ---------------------------------------------------------------- standings --- */

typedef struct { char name[16]; int points; int is_player; } dr3_standing_t;

/* Reads the racer array the engine keeps for the running game (racer_t: name at +0, points at
   +0x44).  Returns the number of drivers written; 0 when no game is loaded yet. */
static int dr3_bottom_read_standings(dr3_standing_t *out, int max)
{
    const racer_t *r  = (const racer_t *)___1a01e0h;
    const int      me = (int)D(___1a1ef8h);
    int            i, n = 0;

    for (i = 0; i < 20 && n < max; ++i) {
        char name[13];
        int  j;

        if (r[i].name[0] == 0) continue;

        memcpy(name, r[i].name, 12);
        name[12] = 0;
        for (j = 11; (j >= 0) && ((name[j] == (char)32) || (name[j] == 0)); --j) name[j] = 0;

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

/* highest points first (at most 20 entries) */
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

int dr3_bottom_console_ensure(void)
{
    if (dr3_bottom_ready) return 1;
    if (!SDL_WasInit(SDL_INIT_VIDEO)) return 0;      /* gfx is not up yet - try again later */

    dr3_bottom_ready = 1;
    consoleInit(GFX_BOTTOM, NULL);

    return 1;
}

void dr3_bottom_flush(void)
{
    gfxFlushBuffers();
    gfxScreenSwapBuffers(GFX_BOTTOM, false);
}

/* --------------------------------------------------------------- tap to hide --- */

static int dr3_bottom_hidden;

int dr3_bottom_is_hidden(void) { return dr3_bottom_hidden; }

void dr3_bottom_touch(void) { dr3_bottom_touch_ex(-1, -1); }

void dr3_bottom_touch_ex(int ignore_y0, int ignore_y1)
{
    static unsigned int last_ms;
    static int          was_down;
    touchPosition       touch;
    const unsigned int  now = SDL_GetTicks();
    int                 down;

    if ((now - last_ms) < 30) return;          /* 33 Hz is plenty for tapping */
    last_ms = now;

    hidTouchRead(&touch);
    down = (touch.px || touch.py) ? 1 : 0;

    if (down && !was_down) {
        const unsigned int y = touch.py;

        if (!((ignore_y0 >= 0) && (y >= (unsigned int)ignore_y0) && (y < (unsigned int)ignore_y1))) {
            dr3_bottom_hidden = !dr3_bottom_hidden;
            dr3_log("[dr3] bottom screen %s (tap to switch it back)", dr3_bottom_hidden ? "hidden" : "shown");
        }
    }

    was_down = down;
}

/* One line of the standings: rank, player marker, name and points.  The name is padded so the points
   always sit in the same column, whatever the name length is.  12 character names still fit (the
   right column allows 21 characters). */
static void dr3_bottom_rank_line(char *out, size_t out_size, int rank, const dr3_standing_t *s)
{
    snprintf(out, out_size, "%2d %c %-11s%4d", rank, s->is_player ? '*' : ' ', s->name, s->points);
}

int dr3_bottom_build_lines(char out[DR3_BOTTOM_LINES][DR3_BOTTOM_LINE_LEN])
{
    dr3_standing_t list[20];
    int            n, i, rows = 0;
    const int      n_controls = (int)(sizeof(dr3_bottom_controls) / sizeof(dr3_bottom_controls[0]));

    memset(out, 0, (size_t)DR3_BOTTOM_LINES * DR3_BOTTOM_LINE_LEN);

    n = dr3_bottom_read_standings(list, 20);
    dr3_bottom_sort(list, n);

    snprintf(out[rows], DR3_BOTTOM_LINE_LEN, "%-19s%-21s", "CONTROLS", "RANKING");
    ++rows;
    snprintf(out[rows], DR3_BOTTOM_LINE_LEN, "%-19s%-21s", "-------------------", "--------------------");
    ++rows;

    for (i = 0; i < n_controls && rows < DR3_BOTTOM_LINES; ++i) {
        char right[24] = "";

        if (i < DR3_BOTTOM_TOP && i < n) dr3_bottom_rank_line(right, sizeof(right), i + 1, &list[i]);

        snprintf(out[rows], DR3_BOTTOM_LINE_LEN, "%-19s%.21s", dr3_bottom_controls[i], right);
        ++rows;
    }

    if (rows < DR3_BOTTOM_LINES) {
        if (n == 0) {
            snprintf(out[rows], DR3_BOTTOM_LINE_LEN, "%-19s%-21s", "", "(no game loaded)");
            ++rows;
        }
        else if (!list[0].is_player) {
            /* keep the player in sight even when he is not in the top ten - a row further down so it
               does not run into the controls list */
            ++rows;                     /* blank line */

            for (i = 0; i < n; ++i) {
                if (list[i].is_player) {
                    char right[24];

                    dr3_bottom_rank_line(right, sizeof(right), i + 1, &list[i]);
                    snprintf(out[rows], DR3_BOTTOM_LINE_LEN, "%-19s%.21s", "your rank", right);
                    ++rows;
                    break;
                }
            }
        }
    }

    return rows;
}

void dr3_bottom_update(void)
{
    static unsigned int last_ms;
    char                line[DR3_BOTTOM_LINES][DR3_BOTTOM_LINE_LEN];
    int                 rows, i;

    if (!dr3_bottom_console_ensure()) return;
    if ((SDL_GetTicks() - last_ms) < 1000) return;      /* once a second is plenty */
    last_ms = SDL_GetTicks();

    if (dr3_bottom_hidden) {
        /* the player tapped the screen away: keep it dark (the game's own printf() output lands here
           too, so it has to be cleared again) */
        printf("\x1b[2J\x1b[H");
        dr3_bottom_flush();
        return;
    }

    rows = dr3_bottom_build_lines(line);

    /* always redraw: the game's own printf() output ends up on this screen too (libctru
       redirects stdout to the console), so anything we skipped would stay there */
    printf("\x1b[2J\x1b[H");
    for (i = 0; i < rows; ++i) printf("%s\n", line[i]);

    dr3_bottom_flush();
}

#include "dr3_paths.h"
#include "dr3_log.h"

#include <stdio.h>
#include <string.h>
#include <unistd.h>

static char dr3_cwd_buf[512];

const char *dr3_cwd(void)
{
    if (!dr3_cwd_buf[0]) {
        if (!getcwd(dr3_cwd_buf, sizeof(dr3_cwd_buf))) dr3_cwd_buf[0] = '?', dr3_cwd_buf[1] = 0;
    }
    return dr3_cwd_buf;
}

/* can we actually open the main asset from here? */
static int dr3_probe(void)
{
    FILE *f = fopen("ENGINE.BPA", "rb");
    if (!f) return 0;
    fclose(f);
    return 1;
}

void dr3_fix_paths(const char *argv0)
{
    char        dir[512];
    const char *slash;
    int         tries;

    dr3_log("[dr3] argv0 = '%s'", argv0 ? argv0 : "(null)");
    dr3_log("[dr3] cwd   = '%s'   ENGINE.BPA here: %s", dr3_cwd(), dr3_probe() ? "yes" : "NO");

    if (dr3_probe()) return;

    /* 1) the folder the .3dsx was launched from */
    if (argv0 && *argv0) {
        strncpy(dir, argv0, sizeof(dir) - 1);
        dir[sizeof(dir) - 1] = 0;
        slash = strrchr(dir, '/');
        if (!slash) slash = strrchr(dir, '\\');
        if (slash) {
            dir[slash - dir] = 0;
            if (chdir(dir) == 0) {
                dr3_cwd_buf[0] = 0;
                dr3_log("[dr3] chdir('%s') ok   ENGINE.BPA here: %s", dir, dr3_probe() ? "yes" : "NO");
                if (dr3_probe()) return;
            } else {
                dr3_log("[dr3] chdir('%s') FAILED", dir);
            }
        }
    }

    /* 2) the documented homebrew folder, then the SD root */
    for (tries = 0; tries < 2; ++tries) {
        const char *cand = (tries == 0) ? "sdmc:/3ds/drally" : "sdmc:";
        if (chdir(cand) == 0) {
            dr3_cwd_buf[0] = 0;
            dr3_log("[dr3] chdir('%s') ok   ENGINE.BPA here: %s", cand, dr3_probe() ? "yes" : "NO");
            if (dr3_probe()) return;
        } else {
            dr3_log("[dr3] chdir('%s') FAILED", cand);
        }
    }

    dr3_log("[dr3] WARNING: game assets not found - the engine will very likely crash");
}

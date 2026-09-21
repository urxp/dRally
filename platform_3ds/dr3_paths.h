/*
 * dr3_paths.h - working directory fix for the Nintendo 3DS build.
 *
 * The engine opens its assets (ENGINE.BPA, ...) with *relative* names, so the process CWD must be
 * the folder that holds the game data.  On the 3DS the CWD is wherever the launcher put us (the SD
 * root), so dr3_fix_paths() derives the folder from argv[0] and chdir()s there, logging everything.
 */
#ifndef DR3_PATHS_H
#define DR3_PATHS_H

void dr3_fix_paths(const char *argv0);   /* call first thing in main() */
const char *dr3_cwd(void);                /* last known cwd, for logging */

#endif /* DR3_PATHS_H */

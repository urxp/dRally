/*
 * dr3_log.h - tiny file logger for the Nintendo 3DS build.
 *
 * Azahar is a GUI application, so the guest's stdout never reaches a console we can read.  This
 * logger appends to an absolute path on the SD card (sdmc:/drally_3ds.log), which is a normal
 * folder on the PC (%APPDATA%\azahar\sdmc) - so printf-style debugging works from the host.
 */
#ifndef DR3_LOG_H
#define DR3_LOG_H

void dr3_log(const char *fmt, ...);

/* line counter so we can see how far the engine got even if the log is huge */
int  dr3_log_lines(void);

#endif /* DR3_LOG_H */

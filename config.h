#ifndef CONFIG_H
#define CONFIG_H

/* String used to delimit block outputs in the status. */
#define DELIMITER "  "

/* Maximum number of Unicode characters that a block can output. */
#define MAX_BLOCK_OUTPUT_LENGTH 45

/* Clicks need dwm statuscmd; off until that patch is applied. */
#define CLICKABLE_BLOCKS 0

#define LEADING_DELIMITER 0
#define TRAILING_DELIMITER 0

/* X(icon, cmd, interval_sec, signal) — signal 0 = no RTMIN trigger */
#define BLOCKS(X)                         \
	X("", "sb-fcitx", 1, 1)           \
	X("", "sb-datetime", 1, 2)

#endif /* CONFIG_H */

#ifndef CONFIG_H
#define CONFIG_H

/* String used to delimit block outputs in the status. */
#define DELIMITER "  "

/* Maximum number of Unicode characters that a block can output. */
#define MAX_BLOCK_OUTPUT_LENGTH 64

/* Clicks need dwm statuscmd; off until that patch is applied. */
#define CLICKABLE_BLOCKS 0

#define LEADING_DELIMITER 0
#define TRAILING_DELIMITER 0

/* X(icon, cmd, interval_sec, signal) — signal 0 = no RTMIN trigger */
/* 顺序：volume → battery → net → datetime → fcitx（输入法最右） */
#define BLOCKS(X)                         \
	X("", "sb-volume", 5, 4)          \
	X("", "sb-battery", 30, 3)        \
	X("", "sb-net", 10, 5)            \
	X("", "sb-datetime", 1, 2)        \
	X("", "sb-fcitx", 1, 1)

#endif /* CONFIG_H */

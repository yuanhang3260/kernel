#ifndef MONITOR_H
#define MONITOR_H

#include "common.h"

// Write a single character out to the screen.
void monitor_put(char c);

// Output a null-terminated ASCII string to the monitor.
void monitor_write(char *c);

// Output a hex number.
void monitor_write_hex(u32int n);

// Output a decimal number.
void monitor_write_dec(u32int n);

// Clear the screen to all black.
void monitor_clear();

#endif // MONITOR_H

/* 
 * stin.h - A safe, professional string input library for C
 * Created in 2026 
 */

#ifndef STIN_H
#define STIN_H

#include <stdio.h>
#include <string.h>

/**
 * @brief Professional macro that calculates buffer size automatically.
 * Usage: char buf[100]; str_in(buf);
 */
#define str_in(x) _stin_internal_get(x, sizeof(x))

/**
 * Internal function: Handles fgets and removes newline safely.
 * static inline prevents "multiple definition" errors during linking.
 */
static inline void _stin_internal_get(char *buffer, int size) {
    if (buffer == NULL || size <= 0) return;
    
    if (fgets(buffer, size, stdin)) {
        // Find newline and replace with null terminator
        buffer[strcspn(buffer, "\n")] = '\0';
    }
}

#endif // STIN_H

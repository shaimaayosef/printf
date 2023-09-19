#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

/**
 * struct formatSP - Struct for format specifiers.
 * @specifier: The format specifier.
 * @printer: The function to print the corresponding type.
 */
typedef struct formatSP
{
        char *specifier;
        int (*printer)(va_list);
} fmt_spec_t;

int _printf(const char *format, ...);
int format_handle(const char *format, va_list args_list, fmt_spec_t *formatSP);
int _putchar(char c);
int printCharacter(va_list args);
int printString(va_list args);
int printInteger(va_list args);
int printBinary(va_list args);

#endif


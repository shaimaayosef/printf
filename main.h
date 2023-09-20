#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>


/**
 * struct formatSP - Struct for format specifiers.
 * @specifier: The format specifier.
 * @printer: The function to print the corresponding type.
 */
typedef struct formatSP{
	char *specifier;
	int (*printer)();
} fmt_spec_t;

int _printf(const char *format, ...);
int format_handle(const char *format, va_list args_list, fmt_spec_t *formatSP);
int _putchar(char c);
int printCharacter(va_list args_list);
int printString(va_list args_list);
int printInteger(va_list args_list);
int printBinary(va_list args_list);
#endif

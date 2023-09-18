#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifier - Structure for specifiers
 * @spec: The specifier character
 * @f: The function to handle the specifier
 */
typedef struct specifier
{
        char spec;
        int (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
/* Add other prototypes as needed */

#endif /* MAIN_H */

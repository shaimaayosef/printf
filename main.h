#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* Flag Definitions */
#define F_MINUS 1   // Flag for left-justify
#define F_PLUS 2    // Flag for signed numbers to include '+' sign
#define F_ZERO 4    // Flag to pad with leading zeros
#define F_HASH 8    // Flag for alternate form (0x or 0X for hex)
#define F_SPACE 16  // Flag for including a space before positive numbers

/* Size Definitions */
#define S_LONG 2    // Size for 'long' specifier
#define S_SHORT 1   // Size for 'short' specifier

/**
 * struct fmt - Structure for format specifiers and associated functions
 *
 * @fmt: The format specifier.
 * @fn: The associated function.
 */
struct fmt
{
    char fmt;
    int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Typedef for format specifiers
 *
 * @fmt: The format specifier.
 * @fm_t: The associated function.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
                 va_list list, char buffer[], int flags, int width, int precision, int size);

/****************** FUNCTION DECLARATIONS ******************/

/* Functions for printing characters and strings */
int print_char(va_list types, char buffer[],
              int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
                int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
                 int flags, int width, int precision, int size);

/* Functions for printing numbers */
int print_int(va_list types, char buffer[],
              int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
                 int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
                   int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
                int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
                     int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
                     int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
               char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function for printing non-printable characters */
int print_non_printable(va_list types, char buffer[],
                        int flags, int width, int precision, int size);

/* Function for printing memory addresses */
int print_pointer(va_list types, char buffer[],
                  int flags, int width, int precision, int size);

/* Functions for handling other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/* Function for printing strings in reverse */
int print_reverse(va_list types, char buffer[],
                  int flags, int width, int precision, int size);

/* Function for printing a string in ROT13 */
int print_rot13string(va_list types, char buffer[],
                      int flags, int width, int precision, int size);

/* Width handler functions */
int handle_write_char(char c, char buffer[],
                      int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
                 int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
              int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
                   int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
                 char buffer[],
                 int flags, int width, int precision, int size);

/****************** UTILITY FUNCTIONS ******************/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif /* MAIN_H */


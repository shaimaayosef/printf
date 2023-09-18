#include "main.h"

/**
 * print_char - Prints a character
 * @args: Argument list
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
return (write(1, &c, 1));
}
/**
 * print_string - Prints a string
 * @args: Argument list
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
char *str = va_arg(args, char *);
int i = 0;
while (str[i])
{
write(1, &str[i], 1);
i++;
}
return (i);
}
/**
 * print_percent - Prints a percent character
 * @args: Argument list (unused in this function)
 * Return: Number of characters printed
 */
int print_percent(va_list args __attribute__((unused)))
{
char c = '%';
return (write(1, &c, 1));
}
/* Continue with other functions for the specifiers */

#include "main.h"

/**
 * printString - Prints a string.
 * @args_list: Argument list containing the string.
 * Return: Number of printed characters.
 */
int printString(va_list args_list)
{
int pr_count = 0;
char *str = va_arg(args_list, char*);
if (str == NULL)
str = "(null)";
while (str[pr_count] != '\0')
pr_count += _putchar(str[pr_count]);
return (pr_count);
}


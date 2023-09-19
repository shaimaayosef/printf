#include "main.h"

/**
 * printString - Prints a string.
 * @args: Argument list containing the string.
 * Return: Number of printed characters.
 */
int printString(va_list args)
{
char *str = va_arg(args, char*);
int length = 0;
if (!str) /* Handle null pointers*/
str = "(null)";
while (str[length]) /* Count the string length*/
{
_putchar(str[length]);
length++;
}
return (length);
}


#include "main.h"

/**
 * printInteger - Prints an integer.
 * @args: Argument list containing the integer.
 * Return: Number of printed characters.
 */

int printInteger(va_list args)
{
int num = va_arg(args, int);
int length = 0, temp = num;
char buffer[12]; /*For maximum int size*/
char *ptr = &buffer[11]; /*Point to the last position*/
*ptr = '\0';
if (num == 0)
{
_putchar('0');
return (1);
}
else if (num < 0)
{
_putchar('-');
num = -num;
length++;
}
while (temp)
{
ptr--;
*ptr = (temp % 10) + '0';
temp /= 10;
}
while (*ptr)
{
_putchar(*ptr);
ptr++;
length++;
}

return (length);
}

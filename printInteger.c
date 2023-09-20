#include "main.h"

/**
 * printInteger - Prints an integer.
 * @args_list: Argument list containing the integer.
 * Return: Number of printed characters.
 */
int printInteger(va_list args_list)
{
int n, exp = 1, pr_count = 0;
unsigned int cast;
n = va_arg(args_list, int);
if (n < 0)
{
pr_count += _putchar('-');
n *= -1;
}
cast = n;
while (cast / exp > 9)
exp *= 10;
while (exp != 0)
{
pr_count += _putchar((cast / exp)+'0');
cast %= exp;
exp /= 10;
}
return (pr_count);
}


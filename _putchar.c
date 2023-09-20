#include "main.h"

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to write.
 *
 * Return: Returns the number of characters written (1) or -1 on failure.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}



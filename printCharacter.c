#include "main.h"

/**
 * printCharacter - Prints a character.
 * @args_list: Argument list containing the character.
 * Return: Number of printed characters.
 */
int printCharacter(va_list args_list)
{
	return (_putchar(va_arg(args_list, int)));
}

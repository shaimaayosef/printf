#include "main.h"
#include <stdio.h> /* For the standard printf for comparison */

/**
 * main - Entry point for the program
 * Return: 0 if successful, otherwise a non-zero code
 */
int main(void)
{
	char character = 'A';
	char *string = "Hello, World!";
	int integer = 100;
	int len1, len2;

	/* Test our _printf */

	len1 = _printf("lets try to print a hello world.\n");
	len2 = printf("lets try to print simple word.\n");
	_printf("Length:[%d, %i]\n", len1, len2);
	_printf("Character: %c\n", character);
	_printf("String: %s\n", string);
	_printf("Integer: %d\n", integer);
	_printf("Percentage: %%\n"); /* to print a single '%' character */
	/* For comparison, using the standard printf */
	printf("\n--- Using standard printf for comparison ---\n");
	printf("Character: %c\n", character);
	printf("String: %s\n", string);
	printf("Integer: %d\n", integer);
	printf("Percentage: %%\n");
	return (0);
}

#include "main.h"

/**
 * printBinary - Prints an integer in binary format.
 * @args_list: Argument list containing the integer.
 * Return: Number of printed characters.
 */
int printBinary(va_list args_list)
{
	int *arr;
	int pr_count, i;
	unsigned int n, a;

	n = va_arg(args_list, int);
	a = n;
	pr_count = 0;

	while (a / 2)
	{
		pr_count++;
		a /= 2;
	}
	pr_count++;

	arr = (int *)malloc(sizeof(int) * pr_count);

	if (arr == NULL)
	{
		free(arr);
		return (0);
	}

	for (i = 0; i < pr_count; i++)
	{
		arr[i] = n % 2;
		n /= 2;
	}

	for (i = pr_count - 1; i >= 0; i--)
	{
	_putchar(arr[i] + '0');
	}

	free(arr);
	return (pr_count);
}

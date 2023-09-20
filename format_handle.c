#include "main.h"

/**
 * format_handle - Handles the format specifier and prints it's type.
 * @format: Input format string.
 * @args_list: List of arguments.
 * @formatSP: Array of struct containing specifiers and their print functions.
 * Return: Number of printed characters.
 */
int format_handle(const char *format, va_list args_list, fmt_spec_t *formatSP)
{
	int pr_count = 0, i = 0, j;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (formatSP[j].specifier != NULL)
			{
				if (format[i] == '%')
				{
					pr_count += _putchar('%');
				}
				else if (*(formatSP[j].specifier) == format[i])
				{
					pr_count += formatSP[j].printer(args_list);
					if (pr_count == -1)
						return (-1);
				}
				j++;
			}
			if (formatSP[j].specifier == NULL)
			{
				pr_count += _putchar('%');
				pr_count += _putchar(format[i]);
			}
		}
		else
			pr_count += _putchar(format[i]);
		i++;
	}
	return (pr_count);
}

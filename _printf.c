#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	spec_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		/* Add other specifiers here */
		{'\0', NULL}
	};
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			int j = 0;

			while (specifiers[j].spec != '\0')
			{
				if (format[i + 1] == specifiers[j].spec)
				{
					count += specifiers[j].f(args);
					i++;
					break;
				}
				j++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

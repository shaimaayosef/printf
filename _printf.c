#include "main.h"

/**
 *_printf - Custom printf function.
 * @format: Input format string.
 * Return: Number of printed characters, or -1 for errors.
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	va_list args_list;

	fmt_spec_t formatSP[] = {
		{"c", printCharacter},
		{"s", printString},
		{"d", printInteger},
		{"i", printInteger},
		{"b", printBinary},
		{NULL, NULL}
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args_list, format);
	printed_chars = format_handle(format, args_list, formatSP);
	va_end(args_list);
	return (printed_chars);
}

#include "main.h"

/**
 * _printf - prints to stdout according to a format string
 * @format: constant string containing zero or more directives
 * Return: int number of characters printed (excluding terminating null-byte)
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list ap;

	va_start(ap, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}
		switch (format[++i])
		{
		case '%':
			count += _putchar('%');
			break;
		case 'c':
		case 's':
		case 'd':
		case 'i':
			count += get_print_func(format[i], ap);
			break;
		default:
			if (!format[i])
				return (-1);
			count += _putchar('%');
			count += _putchar(format[i]);
			break;
		}
	}
	va_end(ap);
	return (count);
}

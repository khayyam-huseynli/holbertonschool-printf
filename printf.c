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
	int (*pfunc)(va_list, flags_t *);
	flags_t flags = {0, 0, 0, 0, 0};

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
		count += get_flag(format[++i], &flags);

		switch (format[++i])
		{
		case '%':
			count += _putchar('%');
			break;
		case 'c':
		case 's':
		case 'd':
		case 'i':
		case 'b':
		case 'u':
		case 'o':
		case 'x':
		case 'X':
		case 'S':
		case 'p':
			count += get_print_func(format[i]);
			break;
		default:
			if (!format[i])
				return (-1);
			count += _putchar('%');
			count += _putchar(format[i]);
			break;
		}
	}
	_putchar(-1);
	va_end(ap);
	return (count);
}

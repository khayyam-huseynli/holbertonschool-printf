#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 *              determine which printing function to call depending on the
 *              conversion specifiers contained into format
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	flags_t flags = {0, 0, 0, 0, 0};
	int count = 0, i;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			count += get_print_func(format[i])(arguments, &flags);
		}
		else
			count += _putchar(format[i]);
	}
	_putchar(-1);
	va_end(arguments);
	return (count);
}

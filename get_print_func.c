#include "main.h"

/**
 * get_print_func - call appropriate print func.
 * @ch: format string character
 * @ap: object to be printed
 * Return: number of characters printed
 */

int get_print_func(char ch, va_list ap)
{
	int j;
	int count = 0;
	print_f funcs[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_int},
	{"i", print_int},
	{"b", print_binary},
	{"o", print_octal},
	{"x", print_hex},
	{"X", print_hex_big},
	{NULL, NULL}
	};

	for (j = 0; funcs[j].format != NULL; j++)
	{
		if (ch == funcs[j].format[0])
		{
			count += funcs[j].f(ap);
			break;
		}
	}
	return (count);
}

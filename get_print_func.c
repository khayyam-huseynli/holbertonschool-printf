#include "main.h"

/**
 * get_print_func - call appropriate print func.
 * @ch: format string character
 * @ap: object to be printed
 * Return: number of characters printed
 */

int (*get_print_func(char ch))(va_list ap, flags_t *)
{
	print_f funcs[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_int},
	{"i", print_int},
	{"b", print_binary},
	{"u", print_unsigned},
	{"o", print_octal},
	{"x", print_hex},
	{"X", print_hex_big},
	{"S", print_S},
	{"p", print_address},
	{NULL, NULL}
	};

	int i = 0;

	while (funcs[i].format != NULL && *(funcs[i].format) != *ch)
	{
		i++;
	}
	return (funcs[i].f);
}

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

	for (j = 0; funcs[j].spec != NULL; j++)
	{
		if (ch == funcs[j].spec[0])
		{
			count += funcs[j].fn(ap);
			break;
		}
	}
	return (count);
}

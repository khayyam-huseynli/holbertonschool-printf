#include "main.h"

/**
 * print_int - prints an integer
 * @app: va_list of arguments from _printf
 * Return: number of char printed
 */
int print_int(va_list app)
{
	int n = va_arg(app, int);
	int res = count_digit(n);

	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

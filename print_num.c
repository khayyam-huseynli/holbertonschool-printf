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

/**
 * print_unsigned - prints an unsigned integer
 * @ap: va_list of arguments from _printf
 * Return: number of char printed
 */
int print_unsigned(va_list ap)
{
	unsigned int u = va_arg(ap, unsigned int);
	char *str = convert(u, 10, 0);

	return (_puts(str));
}
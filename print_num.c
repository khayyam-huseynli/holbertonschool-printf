#include "main.h"

/**
 * print_int - prints an integer
 * @app: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 *     if a flag is passed to _printf
 * Return: number of char printed
 */
int print_int(va_list app, flags_t *f)
{
	int n = va_arg(app, int);
	int res = count_digit(n);

	if (f->width == 1 && f->width < res)
		res += _putchar(' ');
	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
 * print_unsigned - prints an unsigned integer
 * @ap: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 *     if a flag is passed to _printf
 * Return: number of char printed
 */
int print_unsigned(va_list ap, flags_t *f)
{
	unsigned int u = va_arg(ap, unsigned int);
	char *str = convert(u, 10, 0);
	(void)f;

	return (_puts(str));
}

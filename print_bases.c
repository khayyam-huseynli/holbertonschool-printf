#include "main.h"

/**
 * print_binary - prints a number in base 2
 * @ap: va_list arguments from _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_binary(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str = convert(num, 2, 0);

	return (_puts(str));
}


/**
 * print_octal - prints a number in base 8
 * @ap: va_list arguments from _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_octal(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	count += _puts(str);
	return (count);
}

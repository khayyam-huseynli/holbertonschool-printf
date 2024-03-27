#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 on SUCCESS,
 *	   -1 on error and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * print_char - prints a char parameter from a va_list
 * @ap: va_list from calling function
 * Return: integer count of characters printed
 */

int print_char(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

/**
 * print_string - prints a string parameter from a va_list
 * @ap: va_list from calling function
 * Return: integer count of characters printed
 */

int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int count = 0;

	if (!str)
		str = "(null)";
	while (str[count] != '\0')
		count += _putchar(str[count]);

	return (count);
}

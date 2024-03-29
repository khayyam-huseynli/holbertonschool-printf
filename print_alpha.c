#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 on SUCCESS,
 *	   -1 on error and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 */

int _putchar(char c)
{
	static char buf[1024];
	static int i = 0;

	/** c == -1 means end of string */
	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
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

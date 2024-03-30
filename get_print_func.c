#include "main.h"

/**
 * get_print - selects the right printing function
 *             depending on the conversion spec passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 *              func_arr[] to find a match between the specifier
 *              passed to _printf and the first element of the struct,
 *              and then the approriate printing function
 * Return: a pointer to the matching printing function
 */
int (*get_print(char *s))(va_list, flags_t *)
{
	print_f func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_S},
		{'p', print_address},
		{'%', print_percent},
		{NULL, NULL}
		};

	int i = 0;

	while (func_arr[i].format != NULL && *(func_arr[i].format) != *s)
	{
		i++;
	}
	return (func_arr[i].f);
}

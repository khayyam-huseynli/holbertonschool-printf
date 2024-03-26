#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_func - format printer struct
 * @format: the format specifier
 * @f: the function that handles format spec
 */
typedef struct print_func
{
	char *format;
	int (*f)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);

#endif

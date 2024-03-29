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

int _printf(const char *format, ...);
int get_print_func(char ch, va_list ap);

int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);
int print_number(va_list ap);

/** helper functions */
void print_number(int n);
int count_digit(int i);
char *convert(unsigned long int num, int base, int lowercase);

#endif

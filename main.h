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

/** print functions */
int print_char(va_list ap);
int print_string(va_list ap);
int print_int(va_list ap);
int print_binary(va_list ap);
int print_unsigned(va_list ap);
int print_octal(va_list ap);

/** helper functions */
int _putchar(char c);
int _puts(char *str);
void print_number(int n);
int count_digit(int i);
char *convert(unsigned long int num, int base, int lowercase);

#endif

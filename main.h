#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 * @zero: flag for the '0' character
 * @minus: flag for the '-' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
	int l_long;
	int h_short;
	int zero;
	int minus;
} flags_t;


/**
 * struct print_func - format printer struct
 * @format: the format specifier
 * @f: the function that handles format spec
 */
typedef struct print_func
{
	char format;
	int (*f)(va_list, flags_t *f);
} print_f;

int _printf(const char *format, ...);
int (*get_print_func(char ch))(va_list ap, flags_t *);
int get_flag(char s, flags_t *f);

/** print functions */
int print_char(va_list ap, flags_t *f);
int print_string(va_list ap, flags_t *f);
int print_int(va_list ap, flags_t *f);
int print_binary(va_list ap, flags_t *f);
int print_unsigned(va_list ap, flags_t *f);
int print_octal(va_list ap, flags_t *f);
int print_hex(va_list ap, flags_t *f);
int print_hex_big(va_list ap, flags_t *f);
int print_S(va_list ap, flags_t *f);
int print_address(va_list ap, flags_t *f);
int print_rot13(va_list ap, flags_t *f);
int print_rev(va_list ap, flags_t *f);
int print_percent(va_list ap, flags_t *f);

/** helper functions */
int _putchar(char c);
int _puts(char *str);
void print_number(int n);
int count_digit(int i);
char *convert(unsigned long int num, int base, int lowercase);

#endif

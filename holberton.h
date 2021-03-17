#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - Data type of a format.
 * @ft: Format.
 * @f: Function.
 *
 */
typedef struct format
{
	char *ft;
	int (*f)(va_list func);
} _printf_;

int _printf(const char *format, ...);

int (*set_printf(char forma))(va_list);
int _putchar(char c);

int pr_char(va_list arg);
int pr_str(va_list arg);
int pr_Perc(va_list arg);
int pr_dec(va_list arg);
int pr_bin(va_list arg);
int pr_unint(va_list arg);
int pr_oct(va_list arg);
int pr_hex(va_list arg);
int pr_heX(va_list arg);
int pr_Str(va_list arg);
int pr_ptr(va_list arg);
int pr_rev(va_list arg);
int pr_ROT(va_list arg);

int conv_binary(unsigned int n);
int conv_octal(unsigned int n);
int conv_hex(long n);
int conv_heX(unsigned int n);

#endif

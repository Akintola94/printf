#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct specifiers - structure format
 * @specifiers: struct format
 * @f: function
 */

typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;

int _putchar(char c);
int _printf(const char *format, ...);
int get_function(char s, va_list pa);
int print_char(va_list pa);
int print_string(va_list pa);
int print_mod(va_list pa);
int print_digit(va_list pa);
int print_rev_string(va_list pa);

#endif

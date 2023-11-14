#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - produce output according to a format
 * @format: is a character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int j = 0, char_count = 0, char_print;
	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[j])
	{
		char_print = 0;
		if (format[j] == '%')
		{
			if (!format[j + 1] || (format[j + 1] == ' ' && !format[j + 2]))
			{
				char_count = -1;
				break;
			}
			char_print += get_function(format[j + 1], args);
			if (char_print == 0)
				char_count += _putchar(format[j + 1]);
			if (char_print == -1)
				char_count = -1;
			j++;
		}
		else
		{
			(char_count == -1) ? (_putchar(format[j])) : (char_count += _putchar(format[j]));
		}
		j++;
		if (char_count != -1)
			char_count += char_print;
	}
	va_end(args);
	return (char_count);
}

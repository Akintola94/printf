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
	int j = 0, total = 0, char_print;
	va_list pa;

	va_start(pa, format);

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
				total = -1;
				break;
			}
			char_print += get_function(format[j + 1], pa);
			if (char_print == 0)
				total += _putchar(format[j + 1]);
			if (char_print == -1)
				total = -1;
			j++;
		}
		else
		{
			(total == -1) ? (_putchar(format[j])) : (total += _putchar(format[j]));
		}
		j++;
		if (total != -1)
			total += char_print;
	}
	va_end(pa);
	return (total);
}

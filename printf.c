#include "main.h"

/**
 * _printf - produce output according to a format
 * @format: is a character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int j = 0, char = 0, char_print;
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
				char = -1;
				break;
			}
			char_print += get_function(format[j + 1], pa);
			if (char_print == 0)
				char += _putchar(format[j + 1]);
			if (char_print == -1)
				char = -1;
			j++;
		}
		else
		{
			(char == -1) ? (_putchar(format[j])) : (char += _putchar(format[j]));
		}
		j++;
		if (char != -1)
			char += char_print;
	}
	va_end(pa);
	return (char);
}

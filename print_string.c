#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - print string
 * @pa: arguments
 * Return: number of chars count
 */
int print_string(va_list pa)
{
	int j;
	int char_print = 0;
	char *str = va_arg(pa, char *);

	if (!str)
		str = "(null)";
	if (str[0] == '\0')
		return (-1);
	for (j = 0; str[j] != '\0'; j++)
		char_print += _putchar(str[j]);
	return (char_print);
}

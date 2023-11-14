#include "main.h"
#include <unistd.h>

/**
 * print_char - printing in characters
 * @pa : argument.
 * Return: number of print char
 */
int print_char(va_list pa)
{
	char c = va_arg(pa, int);

	_putchar(c);

	return (1);
}

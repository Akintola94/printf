#include "main.h"
#include <unistd.h>

/**
 * print_mod - print the percent sign
 * pa: va_list containing the argument.
 * Return: output length
 */
int print_mod(va_list pa)
{
	(void)pa;

	_putchar('%');

	return (1);

}

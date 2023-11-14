#include "main.h"

/**
 * print_rev_string - print reverse string
 * @pa: arguments
 * Return: Length of the output
 */
int print_rev_string(va_list pa)
{
	int char_print = 0, j = 0;
	char *s = va_arg(pa, char *);

	if (!s)
		s = "(null)";

	while (s[j])
	{
		j++;
	}

	while (j >= 0)
	{
		char_print += _putchar(s[j]);
		j--;
	}

	char_print--;
	return (char_print);
}

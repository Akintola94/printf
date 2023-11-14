#include "main.h"

/**
 * get_function - function specify
 * @con_spec: specify conversion
 * @pa: arguments
 * Return: char print
 */

int get_function(char con_spec, va_list pa)
{
	int j = 0;
	int char_print = 0;

	specifiers_t spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_mod},
		{'d', print_digit},
		{'i', print_digit},
		{'r', print_rev_string},
		{0, NULL}
	};
	while (spec[j].specifiers)
	{
		if (con_spec == spec[j].specifiers)
			char_print += spec[j].f(pa);
		j++;
	}
	if (char_print == 0)
	{
		char_print += _putchar('%');
		char_print += _putchar(con_spec);
	}
	return (char_print);
}

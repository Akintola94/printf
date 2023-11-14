#include "main.h"
#include <unistd.h>

/**
 * print_digit - print in digit
 * @pa: argument
 * Return: numbers of char print
 */
int print_digit(va_list pa)
{
	int dec = 1;
	int char_print = 0;
	int num = va_arg(pa, int);
	int digit;

	if (num < 0)
	{
		char_print += _putchar('-');
		num *= -1;
	}

	if (num < 10)
		return (char_print += _putchar(num + '0'));

	digit = num;

	while (digit > 9)
	{
		dec *= 10;
		digit /= 10;
	}
	while (dec >= 1)
	{
		char_print += _putchar(((num / dec) % 10) + '0');
		dec /= 10;
	}
	return (char_print);
}

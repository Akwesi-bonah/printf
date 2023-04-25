#include "main.h"
/**
 * print_char - print a character to stdout
 * @arg: argument passed
 *
 * Return: 1
*/

int print_char(va_list arg)
{
	char chr;

	chr = va_arg(arg, int);
	_putchar(chr);
	return (1);
}


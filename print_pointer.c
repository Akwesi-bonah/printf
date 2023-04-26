#include "main.h"
/**
 * print_pointer - a function that print address
 * @arg: argument
 *
 * Return: length
 */

int print_pointer(va_list arg)
{
	void *ptr;
	char *str = "(nil)";
	long int a;
	int b;
	int i;

	ptr = va_arg(arg, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = print_hex_x(a);
	return (b + 2);
}

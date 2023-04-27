#include "main.h"
#include <stdlib.h>
/**
 * print_string - print a string
 * @arg: argument passed
 *
 * Return: string lenght
 */

int print_string(va_list arg)
{
	char *str;
	int i, len;

	len = 0;
	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str == "(nil)";
		len = _strlen(str);
		i = 0;

		while (i < len)
		{
			_putchar(str[i]);
			i++;
			return (len);
		}
	}
	else
	{
		len = _strlen(str);
		i = 0;

		while (i < len)
		{
			_putchar(str[i]);
			i++;
			return (len);
		}
	}
}

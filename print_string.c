#include "main.h"
/**
 * print_string - output string
 * @arg: the argument passed
 *
 * Return: lenghth
 */

int print_string(va_list arg)
{
	char *str;
	int i, len;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	len = _strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	return (len);
}

#include "main.h"
/**
 * print_string - output string
 * @arg: argument passed
 *
 * Return: lenght
 */

int print_string(va_list arg)
{
	char *str;
	int i, len;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(nil)";
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

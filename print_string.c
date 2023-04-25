#include "main.h"

/**
 * print_string - output a string
 * @arg: argumen t.
 * Return: length
 */

int print_string(va_list arg)
{
	char *str;
	int i, len;

<<<<<<< HEAD
    return (len);
=======
	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
>>>>>>> 6dfd6fa63e6402e78521504f95ee060f87c54400
}

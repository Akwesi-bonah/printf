#include "main.h"
/**
 *  print_string_ex - print exclusuives string.
 *  @arg: argumen
 *  Return: the length of the string
 */


int print_string_ex(va_list arg)
{
	char *str;
	int i, len = 0;
	int cast;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = str[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_hex_x(cast);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}

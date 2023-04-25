#include "main.h"

/**
 * print_rot13 - a function that encodes a string in rot13
 * @arg: string to be encoded
 *
 * Return: the resulting string
 */
int print_rot13(va_list arg)
{
	int i, j;
	int k = 0;

	char *str = va_arg(arg, char *);
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		str = "(nil)";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(b[j]);
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
		}
	}

	return (i);
}

#include "main.h"

int _strlen(char *s);
int _strlenc(const char *s);
int print_string(va_list arg);

/**
 * print_string - output string
 * @arg: pointer to argument
 *
 * Return: string lenght
 */

int print_string(va_list arg)
{
	int i, len;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(nil)";
		len = _strlen(str);
		i = 0;

		while (i < len)
		{
			_putchar(str[i]);
			i++;

			return (len);
		}
	}

	len = _strlen(str);
	i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	return (len);
}

/**
 * _strlen - return string lenght
 * @s: string pointer
 *
 * Return: lenght
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strlenc - return length of a constant string
 * @s: string pointer
 *
 * Return: lenght
 */

int _strlenc(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

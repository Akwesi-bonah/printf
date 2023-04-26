#include "main.h"
/**
 * print_strrev - function that prints a str in reverse
 * @arg: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int print_strrev(va_list arg)
{

	char *str = va_arg(arg, char*);
	int i;
	int j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);
	return (j);
}

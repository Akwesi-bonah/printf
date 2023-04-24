#include "main.h"
/**
 * _printf - a function that selects correct output to print
 * @format: identifier
 *
 * Return: string lenght
 */

int _printf(const char * const format, ...)
{
	select_match match[] = {
		{"%c", print_char}, {"%s", print_string},
		{"%%", print_cent}, {"%S", print_string_ex},
		{"%u", print_unsigned_int}
	};

	va_list arg;

	int i = 0, j, len = 0;
	va_start(arg, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (match[j].sym[0] == format[i] && match[j].sym[1] == format[i + 1])
			{
				len += match[j].func(arg);
				i += 2;
				break;
			}
			j--;
		}
		if (j < 0)
		{
			_putchar(format[i]);
			len++;
			i++;
		}
		else if (format[i] == '\0')
		{
			break;
		}
	}
	va_end(arg);
	return (len);
}

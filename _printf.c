#include "main.h"
/**
 * _printf - select correct format to print
 * @format: identifier
 *
 * Return: lenght
 */

int _printf(const char * const format, ...)
{
	select_match match[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_cent}, {"%d", print_dec},
		{"%i", print_int}, {"%x", print_hex},
		{"%r", print_strrev}, {"%b", print_bin},
		{"%R", print_rot13}, {"%u", print_unsigned_int},
		{"%o", print_oct}, {"%X", print_hex_c},
		{"%S", print_string_ex}, {"%p", print_pointer}
	};
	va_list arg;
	int i = 0, j;
	int len = 0;

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
				len = len + match[j].func(arg);
				i = i + 2;
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
			break;
	}
	va_end(arg);
	return (len);
}

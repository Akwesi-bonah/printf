#include "main.h"
/**
 * _printf - a function that selects correct output to print
 * @formant: identifier
 * 
 * Return: string lenghth
*/

int _printf(const char * const format, ...)
{
	select_match match[] = {
		{"%%", print_cent}, {"%c", print_char},
		{"%s", print_string}, {"%d", print_dec},
		{"%i", print_int}, {"%b", print_bin},
		{"%o", print_oct}, {"%u", print_unsigned},
		{"%R", print_rot13}, {"%x", print_hex},
		{"%X", print_hex_x}, {"%S", print_string_ex},
		{"%p", print_point}
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

#include "main.h"
/**
 * print_unsigned_int - print poisitve integer
 * arg: the argument passed
 * 
 * Return: character count
*/

int print_unsigned_int(va_list arg)
{
	unsigned int val = va_arg(arg, unsigned int);
	int num, end = val % 10, digit, exp = 1;
	int  i = 1;

	val = val / 10;
	num = val;

	if (end < 0)
	{
		_putchar('-');
		num = -num;
		val = -val;
		end = -end;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = val;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(end + '0');

	return (i);
}

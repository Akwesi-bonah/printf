#include "main.h"
/**
 * print_int - a function that prints an integer
 * @args: the argument to print
 * Return: lenghth of characters
 */
int print_int(va_list arg)
{
	int val = va_arg(arg, int);
	int num, end = val % 10, digit;
	int  i = 1, exp = 1;

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


#include "main.h"
/**
 * print_int - prints integer
 * @arg: argument to print
 * Return: lenght of characters
 */
int print_int(va_list arg)
{
	int val = va_arg(arg, int);
	int num, end = val % 10, digit;
	int  i = 1, exp = 1;

	val /= 10;
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

#include "main.h"
/**
 * print_dec - print decimal values
 * @arg: argument to print
 * Return: lenght of characters
 */

int print_dec(va_list arg)
{
	int n = va_arg(arg, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

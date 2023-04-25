#include "main.h"
/**
 * print_bin - print a binary number
 * @arg: arguments passed
 * Return: 1
*/
int print_bin(va_list arg)
{
	int flag = 0;
	int hold = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int ptr;

	for (i = 0; i < 32; i++)
	{
		ptr = ((a << (31 - i)) & num);

		if (ptr >> (31 - i))
		{
			flag = 1;
		}
		if (flag)
		{
			b = ptr >> (31 - i);
			_putchar(b + 48);
			hold++;
		}
	}

	if (hold == 0)
	{
		hold++;
		_putchar('0');
	}
	return (hold);
}

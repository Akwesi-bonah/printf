#include "main.h"
/**
 * print_bin - print a binary number
 * @arg: argument passed
 * Return: 1
*/
int print_bin(va_list arg)
{
    int i, hold, count = 0;
    int a = 1, flag;
    unsigned int num = va_arg(arg, unsigned int);
    unsigned int ptr;
    
    i = 0;

    while (i < 32)
	{
		ptr = ((a << (31 - i)) & num);
		if (ptr >> (31 - i))
			flag = 1;
		if (flag)
		{
			hold = ptr >> (31 - i);
			_putchar(hold + 48);
			count++;
		}
		i++;
	}

    if (count == 0) {
        _putchar('0');
	count++;
    }
   return count;
}

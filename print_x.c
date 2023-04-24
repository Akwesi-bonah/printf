#include "main.h"
/**
 * print_hex - print value  hexdecimal number
 * @arg: argument passed
 * Return: result
 */
int print_hex(va_list arg)
{
	int i;
	int *arr;
	int count = 0;

	unsigned int num = va_arg(arg, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	count++;
	arr = malloc(sizeof(int) * count);

	i = 0;

	while (i < count)
	{
		arr[i] = temp % 16;
		temp /= 16;
		i++;
	}

	i = (count - 1);
	while (i >= 0)
	{
		if (arr[i] > 9)
		{
			arr[i] = arr[i] + 7;
		}
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}

#include "main.h"
/**
 * print_hex_x - prints value in hexdecimal number
 * @num: argument passed
 *
 * Return: result
*/
int print_hex_x(unsigned int num)
{

	long int i;
	long int *arr;
	long int count = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(sizeof(long int) * count);

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
			arr[i] += 39;
		}
		_putchar(arr[i] + '0');
		i--;
	}

	free(arr);
	return (count);
}



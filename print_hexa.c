#include "main.h"
/**
 * print_hex_x - prints hexidecimal number.
 * @num: arguments
 * Return: lenght
 */
int print_hex_x(unsigned long int num)
{
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	long int i;
	long int *arr;
	long int count = 0;
	unsigned long int temp = num;

	while (temp != 0)
	{
		temp /= 16;
		count++;
	}

	arr = malloc(count * sizeof(long int));
	
	if (arr == NULL)
		return (-1);

	temp = num;

	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			_putchar(arr[i] + '0');
		else
			_putchar(arr[i] - 10 + 'a');
	}
	free(arr);
	return (count);
}

#include "main.h"
/**
 * print_hex_c - prints value in hexdecimal number
 * @arg: argument passed
 * 
 * Return: result
*/

int print_hex_c(unsigned int num)
{
    int i, count = 0;
    int *arr;
    unsigned int temp = num;

    while (num / 16 != 0)
    {
        num /= 16;
        count++;
    }

    count++;
    arr = malloc(sizeof(int) * (count));

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
        i--;
    }

    free(arr);

    return (count);

}

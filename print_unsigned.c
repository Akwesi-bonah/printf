#include "main.h"
/**
 * print_unsigned_int - print poisitve integer
 * arg: argument passed
 * 
 * Return: character count
*/

int print_unsigned_int(va_list arg)
{
    unsigned int a = va_arg(arg, unsigned int);
    int num, i = 1;
    int end = a % 10, digit, exp = 1;

    a /= 10;
    num = a;
    if (end < 0)
    {
        _putchar('-');
        num = -num;
        a = -a;
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
        num = a;

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
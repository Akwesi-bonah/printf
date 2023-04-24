#include "main.h"

int print_pointer(va_list arg)
{
    char *str = "(nil)";
    void *ptr;
    long int a;
    int i, b;

    ptr = va_arg(arg, void*);
    i = 0;
    if (ptr == NULL)
    {
        while(str[i] != '\0')
        {
            _putchar(str[i]);
            i++;
        }

        return (i);
    }

    a  = (unsigned long int)ptr;
    _putchar('0');
    _putchar('x');
    b = print_hex_x(a);
    return (b + 2);
}

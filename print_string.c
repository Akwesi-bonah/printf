#include "main.h"

int print_string(va_list arg)
{
    int i, len;
    char *str;

    str = va_arg(arg, char *);
    if (str == NULL)
    {
        str = "(nil)";
        len = _strlen(str);
        i = 0;

        while (i < len)
        {
            _putchar(str[i]);
            i++;
            return (len);
        }
    }

    
    len = _strlen(str);
    i = 0;
    while (i < len)
    { 
        _putchar(str[i]);
        i++;
    } 

    return (len);
}
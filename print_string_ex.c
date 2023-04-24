#include "main.h"
/**
 * print_string_ex - print exclusives string.
 * @arg: argument passed
 * 
 * Return: lenght of string
*/

int print_string_ex(va_list arg)
{
    int i, cat, len = 0;
    char *str;

    str = va_arg(arg, char *);
    
    if (str == NULL)
    {
        str = "(nil)";
    }

    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] >= 127)
        {
            _putchar('\\');
            _putchar('x');
            len += 2;
            cat = str[i];
            
            if (cat < 16)
            {
                _putchar('0');
                len++;
            }

            len += print_hex_x(cat);
        }
        
        _putchar(str[i]);
        len++;
        i++;
    }

    return(len);
}
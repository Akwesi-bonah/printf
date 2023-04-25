#include "main.h"

int print_rot13(va_list arg)
{
    int i, j, count;
    char *str = va_arg(arg, char *);
    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    if (str == NULL)
        str = "(null)";

    i = 0;
    count = 0;
    while (str[i] != '\0') {
        for (j = 0; a[j] != '\0'; j++) {
            if (str[i] == a[j]) {
                _putchar(b[j]);
                count++;
                break;
            }
        }
        if (a[j] == '\0') {
            _putchar(str[i]);
            count++;
        }
        i++;
    }

    return (count);
}

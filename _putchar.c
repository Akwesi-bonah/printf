#include "main.h"
/**
 * _putchar - print out a character
 * @c: character to print
 *
 * Return:  1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
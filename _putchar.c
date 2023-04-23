#include "main.h"
/**
 * _putchar - print out a character
 * @s: character to be printed
 *
 * Return: 1 if success else -1
 */

int _putchar(char s)
{
	return (write(1, &s, 1));
}

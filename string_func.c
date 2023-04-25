#include "main.h"
/**
 * _strlen - finds string lenght
 * @s: string pointer
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strlenc - finds constant string length
 * @s: string pointer
 *
 * Return: lenght
 */

int _strlenc(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

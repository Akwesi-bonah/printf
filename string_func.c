#include "main.h"
/**
 * _strlen - returns string length
 * @s: pointer to string
 *
 * Return: lenght
 */

int my_strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strlenc - return string lenght of const pointer
 * @s: pointer to string
 *
 * Return: lenght
 */

int my_strlenc(const char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

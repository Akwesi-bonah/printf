#include "main.h"
/**
 * _strlen - lenght of a string
 * @s: char pointer
 * Return: lenght
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
 * _strlenc - function  for constant char pointer s
 * @s: char pointer
 * Return: lenght
 */
int _strlenc(const char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}

	return (i);
}

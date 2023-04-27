#include "main.h"
/**
 * print_pointer - a function that print address
 * @arg: argument
 *
 * Return: length
 */

int print_pointer(va_list arg)
{
	void *ptr; va_arg(arg, void*);

	if (ptr == NULL)
	{
		return (_printf("(null"));
	}

	unsigned long int a = (unsigned long int)ptr;
	
	return (_printf("0x%lx", a));
}

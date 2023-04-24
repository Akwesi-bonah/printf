#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struc match - specifier for _printf function
 * @sym: poniter of the specifier
 * @func: pointer to the function
 */

typedef struct match
{
	char sym[2];
	int (*func)();
} select_match;

int _putchar(char s);
int print_char(va_list arg);
int print_string(va_list arg);
int print_cent(void);
int _printf(const char * const format, ...);
int print_strrev(va_list arg);

#endif

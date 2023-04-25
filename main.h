#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct match - specify print function
 * @sym: pointer to the specifier
 * @func: pointer of the function
 */

typedef struct match
{
	char sym[2];
	int (*func)();
} select_match;

int _printf(const char * const format, ...);
int print_cent(void);
int print_int(va_list arg);
int print_char(va_list arg);
int _putchar(char c);
int print_bin(va_list arg);
int print_point(va_list arg);

#endif

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
<<<<<<< HEAD
int print_unsigned_int(va_list arg);
int print_string_ex(va_list arg);
=======
int print_strrev(va_list arg);
int print_dec(va_list arg);
int print_rot13(va_list arg);
int _strlen(char *s);
int _strlenc(const char *s);
int print_int(va_list arg);
int print_pointer(va_list arg);
int print_hex_x(va_list arg);
int print_oct(va_list arg);
int print_hex(va_list arg);
int print_bin(va_list arg);
int print_hex_c(va_list arg);
>>>>>>> george

#endif

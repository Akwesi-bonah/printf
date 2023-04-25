#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct match - specifier for printf function
 * @id:pointer of the specifier 
 * @func: ponter to function
 */

typedef struct match {
    char sym[2];
    int (*func)();
} select_match;

int _putchar(char c);
int print_bin(va_list arg);
int print_cent(void);
int print_char(va_list arg);
int _printf(const char * const format, ...);
int print_hex_x(unsigned int num);
int print_hex(va_list arg);
int print_oct(va_list arg);
int print_hex_c(va_list arg);
int print_pointer(va_list arg);
int print_int(va_list args);
int print_dec(va_list arg);
int print_rot13(va_list arg);
int print_strrev(va_list arg);
int print_string_ex(va_list arg);
int print_string(va_list arg);
int print_unsigned_int(va_list arg);
int _strlen(char *s);
int _strlenc(const char *s);
#endif MAIN_H

#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct ft - Struct ft
 *
 * @identifier: format specifier
 * @f: the function associated
 */
typedef struct ft
{
	char *identifier;
	void (*f)(char *, va_list);
} f_t;

void print_a_char(char *, va_list);
void print_a_integer(char *, va_list);
void print_a_float(char *, va_list);
void print_a_char_ptr(char *, va_list);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const, ...);
int _putchar(char);

#endif

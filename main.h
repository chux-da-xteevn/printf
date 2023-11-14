#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>

/**
 * struct format_specifiers - Struct to represent format specifiers
 * @specifier: The format specifier character
 * @func: The function associated with the specifier
 */

typedef struct format_specifiers
{
	char specifier;
	int (*func)(va_list args);
} format_spec;

int _putchar(char c);
int _printstr(const char *str);
int _printf(const char *format, ...);

#endif

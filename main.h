#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>

typedef struct format_specifiers
{
	char specifier;
	int (*func)(va_list args);
} format_spec;

int _putchar(char c);
int _printstr(const char *str);
int _printf(const char *format, ...);

#endif

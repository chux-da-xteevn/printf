#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - to mimic the original printf function.
 * @format: this handles different format specifiers.
 *
 * Return: calculates the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++; /* Move to the character after '%' */
			switch (*format)
			{
			case 'c':
				count += putchar(va_arg(args, int));
				break;
			case 's':
				count += _printstr(va_arg(args, char *));
				break;
			case '%':
				count += putchar('%');
				break;
			default:
				count += putchar('%');
				count += putchar(*format);
			}
		}
		else
		{
			count += putchar(*format);
		}

		format++;
	}

	va_end(args);

	return (count);
}

/**
 * _printstr - Print continuous characters into string.
 * @str: String to be printed.
 *
 * Return: generates the number of characters printed.
 */
int _printstr(const char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		count += putchar(*str);
		str++;
	}

	return (count);
}

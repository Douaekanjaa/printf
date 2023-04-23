#include "main.h"

/**
 * _printf - our own printf implementation.
 * @format: format.
 * Return: printed character.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;
	char c;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			c = *format;
			checker(&c, args, &counter);
		}
		else
		{
			c = *format;
			write(1, &c, 1);
			counter++;
		}
		format++;
	}
	write(1, "\n", 1);
	va_end(args);
	return (counter);
}

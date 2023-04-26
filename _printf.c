#include "main.h"

/**
 * _printf - our own printf implementation.
 * @format: format.
 * Return: printed character.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, counter = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*(format + i) != '\0')
	{
		if (*(format + i) == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			counter += checker(format, args, &i);
		}
		else
		{
			_putchar(*(format + i));
			counter++;
		}
		i++;
	}
	va_end(args);+
	return (counter);
}

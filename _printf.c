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
		if (*(format + i) == 'c' || *(format + i) == 's' || *(format + i) == '%'
				|| *(format + i) == 'd' || *(format + i) == 'i')
		{
			if (*(format + i) == '%')
			{
				if ((*format + i + 1) == '\0')
				{
					return (-1);
				}
				counter += checker(format, args, &i);
			}
		}
		else if (*(format + i) == 'u' || *(format + i) == 'x' || *(format + i) == 'X'
		|| *(format + i) == 'o')
		{
			if (*(format + i + 1) == '\0'
					return (-1);
			counter += checker2(format, args, &i);
		}
		else
		{
			_putchar(*(format + i));
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}

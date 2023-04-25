#include "main.h"

/**
 * checker - checks wich character cames after the %.
 * @var: the character to be checked.
 * @args: from format.
 * @counter: counter.
 * Return: Nothing (void).
 */

int	checker(const char *format, va_list args, int *i)
{
	char *s, *null = "(null)";
	int res = 0, k = 0, j = 0;

	switch (*(format + *i + 1))
	{
	case 'c':
		_putchar(va_arg(args, int));
		res++;
		break;
	case 's':
		s = va_arg(args, char *);
		if (s == NULL)
		{
			while (*(null + k) != '\0')
			{
				_putchar(*(null + k));
				res++;
				k++;
			}
		}
		else
		{
			while (s[j] != '\0')
			{
				_putchar(s[j]);
				res++;
				j++;
			}
		}
		break;
	case '%':
		_putchar(format[*i]);
		res++;
		break;
	default:
		_putchar(format[*i]);
		res++;
		*i -= 1;
		break;
	}
	*i += 1;
	return (res);
}

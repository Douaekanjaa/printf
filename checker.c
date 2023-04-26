#include "main.h"
/**
 * checker - checks wich character cames after the %.
 * @format: character to be ckecked.
 * @args: character string.
 * @i: character string.
 * Return: the number of characters printed.
 */
int	checker(const char *format, va_list args, int *i)
{
	char *str;
	int res = 0, num;

	switch (*(format + *i + 1))
	{
	case 'c':
		_putchar(va_arg(args, int)), res++;
		break;
	case 's':
		str = va_arg(args, char *), res += _putstr(str);
		break;
	case '%':
		_putchar(format[*i]), res++;
		break;
	case 'd': case 'i':
		num = va_arg(args, int);
		if (num == 0)
			_putchar('0'), res++;
		else
			_putnbr(num, &res);
		break;
	case 'b':
		num = va_arg(args, int), _putbinary(num, &res);
		break;
	default:
		_putchar(format[*i]), res++, *i -= 1;
		break;
	}
	*i += 1;
	return (res);
}

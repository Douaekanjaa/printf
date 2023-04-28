#include "main.h"

/**
  * checker2 - checker for %u %o %X %x
  * @args: character string
  * @format: charachter to be checked
  * Return: The number of characters printed
*/

int checker2(const char *format, va_list args, int *i)
{
	char *str;
	int res = 0, num;
	int unsigned n;

	switch (*(format + *u))
	{
		case 'u':
			num = va_arg(args, unsigned int);
			if (num == 0)
				_putchar('0'), &res++;
			else
				_putu(num, 10, &res);
			break;
		case 'o':
			n = va_arg(args, unsigned int);
			if (n == 0)
				_putchar('0'), res++;
			else
				_putoct(n, &res);
			break;
		default:
			_putchar(format[*i]), res++, *i -=1;
			break;
	}
	*i += 1;
	return (res);
}



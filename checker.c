#include "main.h"

/**
 * checker - checks wich character cames after the %.
 * @var: the character to be checked.
 * @args: from format.
 * @counter: counter.
 * Return: Nothing (void).
 */

void	checker(char *var, va_list args, int *counter)
{
	char c;
	char *s;
	int  d;
	int b;
	unsigned int n;

	if (*var == 'c')
	{
		c = va_arg(args, int);
		write(1, &c, 1);
		counter++;
	}
	else if	(*var == 's')
	{
		s = va_arg(args, char *);
		_putstr(s, counter);
	}
	else if (*var == 'd' || *var == 'i')
	{
		d = va_arg(args, int);
		_putnbr(d, counter);
	}
	else if (*var == 'b')
	{
		b = va_arg(args, int);
		_putbinery(b, counter);
	}
	else if (*var == 'c')
	{
		n = va_arg(args, unsigned int);
		_puthex(n, counter);
	}


}

#include "main.h"

/**
 * _putnbr - prints numbers.
 * @n: giving number.
 * @counter: counter.
 * Return: Nothing (void)
 */
void	_putnbr(va_list args)
{
	int number = va_arg(args, int); 
	char c;
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	if (number >= 10)
		_putnbr(number / 10);
	c = (number % 10) + '0';
	write(1, &c, 1);
}

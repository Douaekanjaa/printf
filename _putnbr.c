#include "main.h"

/**
 * _putnbr - prints numbers.
 * @n: giving number.
 * @counter: counter.
 * Return: Nothing (void)
 */
void	_putnbr(int n, int *counter)
{
	char c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		_putnbr(n / 10, counter);
	c = (n % 10) + '0';
	write(1, &c, 1);
	(*counter)++;
	write(1, "\n", 1);
}

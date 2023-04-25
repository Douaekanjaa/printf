#include "main.h"

/**
 * _putnbr - prints numbers.
 * @nb: giving number.
 * @counter: counter.
 * Return: 0.
 */
int	_putnbr(int nb, int *counter)
{
	long int nbr = nb;

	if (nbr < 0)
	{
		_putchar('-');
		nbr *= (-1);
	}
	if (nbr > 0)
	{
		_putnbr(nbr / 10, counter);
		_putchar((nbr % 10) + '0');
		*counter += 1;
	}
	return (0);
}

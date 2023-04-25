#include "main.h"

/**
 * _putnbr - prints numbers.
 * @nb: giving number.
 * @counter: counter.
 * Return: 0.
 */
int	_putnbr(int nb, int *counter)
{
	if (nb == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		*counter += 2;
		_putnbr(147483648, counter);
		return (0);
	}
	else if (nb < 0)
	{
		_putchar('-');
		*counter += 1;
		nb *= (-1);
	}
	if (nb >= 10)
	{
		_putnbr(nb / 10, counter);
		_putchar((nb % 10) + '0');
		*counter += 1;
	}
	else if (nb < 10)
	{
		_putchar(nb + '0');
		*counter += 1;
	}
	return (0);
}

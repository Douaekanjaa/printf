#include "main.h"

/**
 * _putnbr - prints numbers.
 * @n: giving number.
 * @counter: counter.
 * Return: Nothing (void)
 */
void	_putnbr(int number, int *res)
{
	long int nb = number;
	if (nb < 0)
	{
		_putchar('-');
		nb = -nb;
		_putnbr(nb, res);
		res++;
	}
	else if (nb > 9)
	{
		_putnbr((nb / 10), res);
		_putnbr((nb % 10), res);
	}
	else
		 _putchar(nb + 48), res++;
}

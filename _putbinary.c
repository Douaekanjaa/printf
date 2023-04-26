#include "main.h"

/**
 * _putbinery - converts decimal to binery.
 * @counter: counter.
 * @b: number to be converted.
 * Return: Nothing (void).
 */
int	_putbinary(int number, int *counter)
{
	int bin = 0, base = 1;

	if (number == 0)
		(*counter)++;
	if (number != 0)
	{
		bin += (number % 2) * base;
		base *= 10;
		number /= 2;
		(*counter)++;
	}
	_printf("%d", bin);
	return (0);
}

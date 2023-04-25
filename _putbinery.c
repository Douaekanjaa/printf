#include "main.h"

/**
 * _putbinery - converts decimal to binery.
 * @counter: counter.
 * @b: number to be converted.
 * Return: Nothing (void).
 */
void	_putbinery(int b, int *counter)
{
	char array[2] = "01";

	if (b > 0)
	{
		_putbinery(b / 2, counter);
		_putchar(array[b % 2]);
		*counter += 1;
	}
}

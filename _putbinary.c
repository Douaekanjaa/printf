#include "main.h"

/**
 * _putbinary - converts decimal to binery.
 * @counter: counter.
 * @number: number to be converted.
 * Return: Nothing (void).
 */
int	_putbinary(unsigned int number, int *counter)
{
	unsigned int array[64];
	int i = 0, j;

	if (number == 0)
	{
		_putchar('0');
		(*counter)++;
		return (0);
	}

	while (number > 0)
	{
		array[i] = number & 1;
		number = number >> 1;
		i++;
	}
	for (j = i -1; j >= 0; j--)
	{
		_printf("%d", array[j]);
		(*counter)++;
	}
	return (0);
}

#include "main.h"

/**
 * _puthex - convertes from dec to hex in lowcase.
 * @n: giving number.
 * @counter: pointer to couter.
 * Return: Nothing (void).
*/

void _puthex(unsigned int n, int *counter)
{
	char digits[17] = "0123456789abcdef";
	char buf[9];
	int i;

	buf[8] = '\0';

	for (i = 7; i >= 0; i--)
	{
		buf[i] = digits[n & 0xf];
		n >>= 4;
	}

	for (i = 0; i < 8; i++)
	{
		write(1, &buf[i], 1);
	}
	counter++;
	write(1, "\n", 1);
}

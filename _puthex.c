#include "main.h"

/**
  *
*/

void _puthex(unsigned int n, int *counter)
{
	const char digits[];
	char buf[9];
	int i;

	digits[] = "0123456789abcdef";
	buffer[8] = '\0';

	for (i = 7; i >= 0; i--)
	{
		buf[i] = digits[n & 0xf];
		n >>= 4;
	}

	for (i = 0; i < 8; i++)
	{
		write (1, &buf[i], 1);
	}

	counter++;
}

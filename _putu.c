#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
  * _putu - print unsigned int
  * @counter: counter
  * @base: base of unsigned int
  * @n: a number
  * Return: nothing
*/

void _putu(unsigned int n, int base, int *counter)
{
	char buf[20];
	int digit;
	int i;
	int len = 0;

	do {
		digit = n % base;
		buf[len++] = '0' + digit;
		n /= base;
	} while (n > 0);

	for (i = len - 1; i >= 0; i--)
	{
		write(1, &buf[i], 1);
	}

	counter++;
}



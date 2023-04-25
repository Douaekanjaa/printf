#include "main.h"
 
/**
  * _putoctal - Converts a decimal number to an octal number
  * @n: the decimal number to be converted
  * @counter: A pointer
  * Return: nothing
*/

void _putoct(unsigned int num, int *res)
{
	if (num > 0)
	{
		_putoct(num / 8, res);
		_putchar((num % 8) + '0');

		*res += 1;
	}
}


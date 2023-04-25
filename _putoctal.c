#include "main.h"

/**
  * _putoct - Converts a decimal number to an octal number
  * @num: the decimal number to be converted
  * @res: A pointer
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


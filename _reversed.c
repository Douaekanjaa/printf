#include "main.h"
/**
  * _reversed - prints a string in reverse order
  * @args: containing the string arguments
  * Return: number of character printed
*/
int _reversed(va_list args)
{
	char *s = va_arg(args, char *);
	int len = _strlen(s), i;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	return len;
}


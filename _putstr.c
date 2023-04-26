#include "main.h"

/**
 * _putstr - prints string.
 * @str: pointer to string.
 * @counter: counter.
 * Return: Nothing (void).
 */

int	_putstr(char *str)
{
	int i = 0, res = 0;
	char *null = "(null)";

	if (str == NULL)
	{
		for (; *(null + i) != '\0'; i++)
		{
			_putchar(*(null + i));
			res++;
		}
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
			res++;
		}
	}
	return (res);
}

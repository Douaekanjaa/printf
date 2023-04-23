#include "main.h"

/**
 * _putstr - prints string.
 * @str: pointer to string.
 * @counter: counter.
 * Return: Nothing (void).
 */

void	_putstr(char *str, int *counter)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		counter++;
		str++;
	}

}

#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int ui;
	ui = (unsigned int)INT_MAX + 1024;
    _printf("%b\n", 98);
	_printf("%x\n", 98);
	_printf("hello%%world");
	_printf("Unsigned hexadecimal:[%x]\n", ui);
    printf("Unsigned hexadecimal:[%x]\n", ui);
    return (0);
}

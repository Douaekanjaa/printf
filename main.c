#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <assert.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    	int len_1, len_2;

	len_1 = printf("%b\n", 0);
	len_2 = _printf("%b\n", 0);
	assert(len_1 == len_2);
    printf("%d\n", len_1);
    printf("%d\n", len_2);
	len_2 = printf("%b\n", 255);
	len_1 = _printf("%b\n", 255);
	assert(len_1 == len_2);
    printf("%d\n", len_1);
    printf("%d\n", len_2);
	len_1 = printf("%b\n", UINT_MAX);
	len_2 = _printf("%b\n", UINT_MAX);
	assert(len_1 == len_2);
    return (0);
}

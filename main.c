#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <assert.h>

int main()
{
	int x = 0;
	int len_1, len_2;

	/* ===========> %b <=========== */
	printf("----------------------\n");
	printf("---> BINARY CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%b\n", 0);
	len_2 = _printf("%b\n", 0);
	printf("%d   %d\n", len_1, len_2);
	assert(len_1 == len_2);

	len_2 = printf("%b\n", 255);
	len_1 = _printf("%b\n", 255);
	printf("%d   %d\n", len_1, len_2);
	assert(len_1 == len_2);

	len_1 = printf("%b\n", UINT_MAX);
	len_2 = _printf("%b\n", UINT_MAX);
	printf("%d   %d\n", len_1, len_2);
	assert(len_1 == len_2);
	
	return (0);
}

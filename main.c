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
	int len1;

	char str1[] = "Hello, world!";
	/* char str2[] = "";
	char *str3 = NULL;*/


	len1 = _reversed(str1);
	_printf("\nLenght of str1: %d\n", len1);
	
	/*len2 = _reversed(str2);
    	_printf("\nLength of str2: %d\n", len2);
	printf("\nLength of str2: %d\n", len2);*/

    	/* len3 = _reversed(str3);
    	printf("\nLength of str3: %d\n", len3);
	printf("\nLength of str3: %d\n", len3);*/


    return (0);
}

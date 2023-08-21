#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @b: parameter function 1
 * @a: parameter function 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

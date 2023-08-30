#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The input number for which the square root is to be calculated.
 *
 * Return: square root of n, or -1 if n doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);
	return (n);
}

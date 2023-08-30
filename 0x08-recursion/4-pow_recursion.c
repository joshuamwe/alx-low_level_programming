#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
 *
 * Description:  calculates the value of x raised to the power of y
 * using recursion. If y is negative,it returns -1 to indicate an error.
 * The base case is when y is 0, where x^0 is defined as 1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}


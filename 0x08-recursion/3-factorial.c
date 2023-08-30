#include "main.h"
#include <stdio.h>

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The input number for which factorial is to be calculated.
 *
 * Return: The factorial of n, or -1 if n is negative.
 *
 * Description: This function calculates the factorial of a non-negative
 * int n using recursion. If n is negative,it returns -1 to indicate an error.
 * The factorial of 0 is defined as 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}


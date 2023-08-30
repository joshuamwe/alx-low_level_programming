#include "main.h"
#include <stdio.h>
#include <stdbool.h>
/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *@divisor: The divisor to check divisibility.
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if ((n % 2)  != 0 && (n % 3) != 0 && (n % 5) != 0 && (n % 1) == 0)
	{
		return (1);
	}
	return (0);
}

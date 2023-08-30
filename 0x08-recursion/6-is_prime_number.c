#include "main.h"
#include <stdbool.h>
/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 * Return: 1 if @n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	int i = 5;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);

		i += 6;
	}

	return (1);
 }



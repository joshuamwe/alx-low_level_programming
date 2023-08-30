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
    if (n <= 1)
        return 0;

    return (n - 1);
}

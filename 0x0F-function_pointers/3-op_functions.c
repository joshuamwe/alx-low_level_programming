#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returnd the sum of two numbers
 * @a: parameter function 1
 * @b: parameter fucntion 2
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of two numbers
 * @a: parameter function 1
 * @b: parameter function 2
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipliers two numbers
 * @a: parameter function 1
 * @b: parameter function 2
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - returns division of two numbers
* @a: parameter function 1
* @b: parameter function 2
* Return: the division of a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of  two numbers
 * @a: parameter function 1
 * @b: parameter function 2
 * Return: the remainder of division a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

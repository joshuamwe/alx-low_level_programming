#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The input string whose length is to be calculated.
 *
 * Return: The length of the string.
 *
 * Description: This function takes a string as input and uses recursion to
 * calculate the length of the string by counting characters until the null
 * terminator is encountered.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

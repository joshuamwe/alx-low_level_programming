#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 *
 * Description: This function recursively prints each character of the input
 * string until it reaches the null terminator, then prints a newline.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

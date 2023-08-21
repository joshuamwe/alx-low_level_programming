#include  "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - function prints half a string followed by new line
 * @str: function parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int i,n, count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	n = (count - 1) / 2;

	for (i = n + 1;str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}


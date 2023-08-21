#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints characters of a string
 *
 * @str: string character to print
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}


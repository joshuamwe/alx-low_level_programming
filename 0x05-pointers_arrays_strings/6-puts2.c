#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of the string
 * @str: string character to print
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}


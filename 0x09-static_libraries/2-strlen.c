#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a length
 *@s: parameter function
 *
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

		while (s[length] != '\0')
		{
			length++;
		}
	return (length);
}

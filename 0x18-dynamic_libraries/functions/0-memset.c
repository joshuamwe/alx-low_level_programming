#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: function parameter 1
 * @b: function parameter 2
 * @n: function parameter 3
 * Return: pointers to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}

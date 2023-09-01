#include "main.h"

/**
 * _memcpy - main function copies memory area
 * @dest: function parameter 1
 * @src: function parameter 2
 * @n:functions parameter 3
 * Return: pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (original_dest);
}

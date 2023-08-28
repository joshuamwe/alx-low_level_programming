#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: The string to search in
 * @accept: The bytes to search for
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *check_accept = accept;

		/* Check if the current character in s exists in accept */
		while (*check_accept != '\0')
		{
			if (*s == *check_accept)
				return (s);

			check_accept++;
		}

		s++;
	}

	return (NULL);
}

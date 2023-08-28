#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate a character in a string
 * @s: The string to search in
 * @c: The character to locate
 *
 * Return: A pointer to the first occurrence
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	/* If c is not found, return NULL */
	return (NULL);
}

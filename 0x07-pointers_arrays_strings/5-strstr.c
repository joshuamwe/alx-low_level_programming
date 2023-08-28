#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locate a substring
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return: A pointer to the beginning of the located
 *         substring in haystack, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		/* Check if the substring needle matches in the current haystack */
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0') /* If reached the end of needle, means we found a match */
			return (haystack);

		haystack++;
	}

	return (NULL); /* Substring not found */
}

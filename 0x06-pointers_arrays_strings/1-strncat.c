#include <stddef.h>

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	int dest_len = 0;

	/* Calculate the length of dest */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
		dest_len++;
	}

	/* Concatenate up to n bytes from src */
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	/* Null-terminate the resulting string */
	if (n == 0)
		*dest_ptr = '\0';

	return (dest);
}

#include <stdio.h>

/**
 * main - the main function
 *
 * Return: is 0 when correct
 */

int main(void)
{
	char t;

	for (t = 'z' ; t >= 'a' ; t--)
		putchar(t);
	putchar('\n');
	return (0);
}

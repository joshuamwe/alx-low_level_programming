#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 always
 */

int main(void)
{
	int u;

	for (u = 0 ; u <= 10 ; u++)
		putchar(u + '0');
	putchar('\n');
	return (0);
}

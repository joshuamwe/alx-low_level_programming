#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 always
 *
 */
int main(void)
{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
		if (j != 'q' && j != 'e')
			putchar(j);
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - the main function
 *
 * Return: is 0 when correct
 */

int main(void)
{
	int p;
	char l;

	for (p = 0 ; p < 10 ; p++)
		putchar(p + '0');
	for (l = 'a' ; l <= 'f' ; l++)
		putchar(l);
	putchar('\n');
	return (0);
}

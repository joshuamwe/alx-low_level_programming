#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 when correct
 */

int main(void)
{
	int y;

	for (y = 0 ; y < 10 ; y++)
	{
		putchar(y + '0');
		if (y != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

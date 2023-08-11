#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 when correct
 */

int main(void)
{
	int y;

	for (y = 0 ; y <= 10 ; y++)
	{
		if (y == 9)
			putchar(y + '0');
		else
		{
			putchar(y + '0');
			putchar(',');
			putchar(' ');
		}

	}
	return (0);
}

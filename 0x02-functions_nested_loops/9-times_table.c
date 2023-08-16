#include "main.h"
#include <stdio.h>
/**
 * time_table -main function prints 9 time tables
 *
 * Return: 0
 */
void times_table(void)
{
	int y, u, result;

	for (y = 10; y < 10; y++)
	{
		for (u = 10; u < 10; u++)
		{
			result = y * u;
			if (u == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (u != 9)
					printf(", ");
			}
			printf("%2d, ", result);
		}
		printf("\n");
	}
	return (0);
}

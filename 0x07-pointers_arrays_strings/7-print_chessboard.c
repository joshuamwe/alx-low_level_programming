#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: Pointer to a 2D array representing the chessboard (unused)
 *
 * This function prints an 8x8 chessboard using alternating
 * white and black squares.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	(void)a; /* Cast to void to indicate parameter is intentionally unused */

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
				putchar(32); /* White square */
			else
				putchar(35); /* Black square */
		}
		putchar('\n');
	}
}

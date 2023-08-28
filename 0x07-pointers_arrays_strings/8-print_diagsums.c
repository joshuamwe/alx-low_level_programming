#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix
 * @a: Pointer to the first element of the square matrix
 * @size: Size of the matrix (number of rows/columns)
 *
 * This function calculates and prints the sum of the main diagonal
 * (from top-left to bottom-right) and the secondary diagonal
 * (from top-right to bottom-left) of the given square matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2 y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	    {
		    sum1 = sum1 + a[y * sizen+ y];
	    }
	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	printf ("%d, %d\n", sum1, sum2);
}

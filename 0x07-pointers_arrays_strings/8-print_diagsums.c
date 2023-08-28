#include <stdio.h>

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
	int i;
	int main_diag_sum = 0;
	int secondary_diag_sum = 0;

	for (i = 0; i < size; i++)
	{
		main_diag_sum += *(a + i * size + i);
		secondary_diag_sum += *(a + i * size + (size - 1 - i));
	}

	printf("Sum of main diagonal: %d\n", main_diag_sum);
	printf("Sum of secondary diagonal: %d\n", secondary_diag_sum);
}

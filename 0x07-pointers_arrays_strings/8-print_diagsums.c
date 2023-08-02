#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0; /* Sum of the main diagonal */
	int sum2 = 0; /* Sum of the secondary diagonal */

	for (i = 0; i < size; i++)
	{
		/* Accessing main diagonal elements */
		sum1 += a[i * size + i];
		/* Accessing secondary diagonal elements */
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

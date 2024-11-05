#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a : 1d tab who represent the 2d matrix
 * @size : size of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int somme_diag1 = 0;
	int somme_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		somme_diag1 += a[i * size + i];
		somme_diag2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", somme_diag1, somme_diag2);
}

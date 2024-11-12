#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to the grid or NULL
 *
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (a = 0; a < i; a++)
				free(matrix[a]);
			free(matrix);
			return (NULL);
		}
		for (a = 0; a < width; a++)
		{
			matrix[i][a] = 0;
		}
	}
	return (matrix);
}

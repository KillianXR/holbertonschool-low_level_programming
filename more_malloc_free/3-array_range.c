#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers.
 *
 * @min: minimum value of the array
 * @max: maximum value
 *
 * Return: a pointer to the array
 *
 */
int *array_range(int min, int max)
{
	int *ptr;
	int matrix;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	matrix = 0;
	while (min <= max)
	{
		ptr[matrix] = min;
		min++;
		matrix++;
	}

	return (ptr);
}

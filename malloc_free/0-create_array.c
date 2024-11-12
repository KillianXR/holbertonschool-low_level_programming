#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array
 * @c: char to fill the array
 * Return: NULL if size = 0 or if malloc fails otherwise a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

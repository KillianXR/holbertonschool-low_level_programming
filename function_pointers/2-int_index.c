#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: matrix where we search
 * @size: number of element in the array
 * @cmp: pointer to the function to compare value
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0, if no element match return -1 if size <= 0 return 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}

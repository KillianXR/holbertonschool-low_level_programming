#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - fuction that allocates memory for an array of nmemb elements,
 * each of size bytes and initializes the memory to zero
 *
 * @nmemb: unsigned int type
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	total = 0;
	while (total < nmemb * size)
	{
		ptr[total] = 0;
		total++;
	}
	return (ptr);
}

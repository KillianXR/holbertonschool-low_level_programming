#include "main.h"

/**
 * _memcpy - function that 
 *
 * @dest: pointer to memory where byte will be past
 * @src : pointer to memory who contain byte
 * @n : number of byte to fill
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}

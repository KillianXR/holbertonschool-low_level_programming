#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: source of strings
 *
 * @dest: destination of the string
 *
 * @n: length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[i + a] = src[a];
	}
	dest[i + a] = '\0';
	return (dest);
}

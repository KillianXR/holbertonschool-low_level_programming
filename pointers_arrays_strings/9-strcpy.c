#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest,
 * followed by a new line.
 *
 * @dest: char to check
 *
 * @src: char to check
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}

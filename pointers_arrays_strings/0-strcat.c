#include "main.h"

/**
 * _strcat - concat 2 string
 *
 * @src: char
 *
 * @dest: char
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}

#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenate two strings up
 * to n bytes from the second string
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to s1
 *
 * Return: a pointer to the newly memory allocated space
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, totalen, i, a;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	totalen = len1 + n + 1;

	ptr = malloc(totalen);
		if (ptr == NULL)
		{
			return (NULL);
		}

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (a = 0; a < n; a++)
		ptr[i + a] = s2[a];

	ptr[i + a] = '\0';

	return (ptr);
}

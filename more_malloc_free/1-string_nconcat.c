#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2;
	int total1, total2;
	char *ptr;
	int sign = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (sign >= len2)
	{
		sign = len2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (total1 = 0; total1 < len1; total1++)
	{
		ptr[total1] = s1[total1];
	}
	for (total2 = 0; total2 < sign; total2++)
	{
		ptr[total1++] = s2[total2];
	}
	ptr[total1++] = '\0';
	return (ptr);
}

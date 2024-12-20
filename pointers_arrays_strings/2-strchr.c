#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s : pointer to the string
 * @c : char we want
 *
 * Return: Always 0 (Success)
 *
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}

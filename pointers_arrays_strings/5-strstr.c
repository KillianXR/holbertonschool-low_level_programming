#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack : string where we looking for the substrting
 * @needle   : the substring
 *
 * Return: return a pointer to the 1st occurence of needle
 * in haystack or 0
 *
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}

#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @s: string to encode
 *
 * Return: &s
 */
char *leet(char *s)
{
	int i, d;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (a[d] == s[i])
				s[i] = b[d];
		}
	}
	return (s);
}

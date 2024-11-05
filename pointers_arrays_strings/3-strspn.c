#include "main.h"

/**
 * _strspn - function that fills memory with a constant byte.
 *
 * @s     : string we search in
 * @accept: string with autorized char
 * @*p    : return to the begin of the string
 *
 * Return: the count
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
			{
				count++;
				break;
			}
			p++;
		}

		if (!*p)
			break;

		s++;
	}

	return (count);
}

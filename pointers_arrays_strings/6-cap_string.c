#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: string
 *
 * Return: &s
 */
char *cap_string(char *s)
{
	int i = 0, b;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (a[b] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}


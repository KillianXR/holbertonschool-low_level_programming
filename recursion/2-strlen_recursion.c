#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: string whose lenght has to be returned
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return ((1) + _strlen_recursion(s + 1));
}

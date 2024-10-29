#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 9, 10 time
 * followed by a new line
 *
 * continue: skip to the next character
 *
 * Return: void
 */

void more_numbers(void)
{
int c, i;
	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			_putchar('1');
			_putchar(c % 10 + '0');
		}
			_putchar('\n');
		}
}

#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * followed by a new line
 *
 * continue: skip to the next character
 *
 *return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (c == '2' || c == '4')
		continue;
	_putchar(c);
	}
	_putchar('\n');
}

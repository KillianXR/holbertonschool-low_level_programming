#include "main.h"

/**
 * print_diagonal - fucntion that draws a diagonal line on the terminal
 *
 * @n: number of time
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, f;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (f = 0; f < i; f++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}

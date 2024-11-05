#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a : a 2d tab char type representung a 8x8 chessboard
 *
 * Return: the chessboard
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}

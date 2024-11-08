#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two number
 *
 * @argc: count arguments
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, res = 0;
	char a[] = "Error", *fl;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			fl = argv[i];
			while (*fl != 0)
			{
				if (*fl < 47 || *fl > 57)
				{
					printf("%s\n", a);
					return (1);
				}
				fl++;
			}
			res = atoi(argv[i]);
			sum += res;
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit =n % 10;

	if (last digit < 0)
		last_digit *= -1;
	printf("Last digit of %d is %d", n, last_digit);

	if (last_digit > 5)
		printf(" and is 0\n");

	return (0);
}

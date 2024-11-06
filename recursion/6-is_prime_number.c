#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: 1 if prime, 0 = error
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_2(n, 2));
}

/**
 * is_prime_2 - function to check divisibility
 * @n: number to check
 * @i: current divisor being tested
 * Return: 1 if prime, 0 = error
 */
int is_prime_2(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_2(n, i + 1));
}

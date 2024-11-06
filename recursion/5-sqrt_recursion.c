#include "main.h"

/**
 * _sqrt_recursion2 - returns the natural square root of n
 * @n: same number as n
 * @i: number that iterates from 1 to n
 *
 * Return: returns the natural square root of n, or -1 = error
 */
int _sqrt_recursion2(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_recursion2(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: returns the natural square root of n, or -1 = error
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(n, 1));
}

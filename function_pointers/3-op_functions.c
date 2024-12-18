#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition function
 * @a: first number
 * @b: second number
 * Return: result of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction function
 * @a: first number
 * @b: second number
 * Return: result of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: first number
 * @b: second number
 * Return: result of a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: first number
 * @b: second number
 * @Error: print 1 if b = 0
 * Return: result of a / b
 */

int op_div(int a, int b, int *Error)
{
	if (b == 0)
	{
		*Error = 1;
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo function
 * @a: first number
 * @b: second number
 * @Error: print 1 if b = 0
 * Return: result of a % b
 */

int op_mod(int a, int b, int *Error)
{
	if (b == 0)
	{
		*Error = 1;
		exit(100);
	}
	return (a % b);
}

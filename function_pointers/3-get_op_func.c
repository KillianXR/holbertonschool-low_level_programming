#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function that select the good operator
 * @s: operator selected
 *
 * Return: a pointer with the function name to use
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
	}
	return (NULL);
}
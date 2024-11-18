#include "function_pointers.h"

/**
 * print_name - function that print a name.
 *
 * @name: char string
 * @f: pointer of function who takes a tring argument
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings arguments
 * @n: numbers of given arguments
	* @separator: strings between arguments
	*
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
		{
		printf("%s", str);
		}
		if (i < (n - 1) && separator != NULL)
		{
		printf("%s", separator);
		}
		else if (str == NULL)
		{
			printf("(NIL)");
		}
	}
	printf("\n");
}

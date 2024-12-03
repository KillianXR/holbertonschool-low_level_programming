#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
	* print_list - print the content of a list
	*
	* @h: pointer to the list
	*
	* Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int counter;

	while (h)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
		printf("[%u] (%s)\n", h->len, h->str);
		}
		h = h->next;
		counter++;
	}
	return (counter);
}

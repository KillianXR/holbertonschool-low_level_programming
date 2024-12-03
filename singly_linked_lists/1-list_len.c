#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
	* list_len - print the number of element in a list
	* @h: pointer to the list
	* Return: length of the list
	*/
size_t list_len(const list_t *h)
{
	int counter;

	while (h != NULL)
	{
	h = h->next;
	counter++;
	}

	return (counter);
}

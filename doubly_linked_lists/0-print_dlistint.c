#include "lists.h"
/**
	*	print_dlistint - print a double list of int
	* @h: pointer to the list
	*	Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

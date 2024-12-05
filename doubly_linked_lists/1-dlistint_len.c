#include "lists.h"
/**
	* dlistint_len - print how much node list contain
	* @h: pointer to the list
	* Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
	h = h->next;
	counter++;
	}

	return (counter);
}

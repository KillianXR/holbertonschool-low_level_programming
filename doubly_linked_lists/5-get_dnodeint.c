#include "lists.h"
/**
 * get_dnodeint_at_index - returns the position of the node in a list.
 * @head: the head of the list
 * @index: the index of the node
 * Return: the address of the position of the node in a list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}

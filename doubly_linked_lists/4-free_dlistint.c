#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: pointer to the beginning of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

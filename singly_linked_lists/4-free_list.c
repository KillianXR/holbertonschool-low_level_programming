#include "lists.h"

/**
	* free_list - free a list
	* @head: a pointer to the head of the linked list
	* Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head != NULL)
	{
		temporary = head;
		head = head->next;

		free(temporary->str);
		free(temporary);
	}
}